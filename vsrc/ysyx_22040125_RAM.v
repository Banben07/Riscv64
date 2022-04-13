module ysyx_22040125_RAM (
        input  wire[63:0]  wdata,
        input  wire[63:0]  cpu_pc,
        input  wire        rst,
        input  wire[31:0]  ram_addr,
        input  wire[5:0]   l_bhw,
        input  wire[2:0]   s_bhwd,
        input  wire        data_wen,
        input  wire        data_ren,
        input  wire        clk,
        output reg[31:0]   inst,
        output reg[63:0]   rdata,
        output reg[63:0]   if_pc,
        output reg         stall_if,
        output reg         stall_mem
    );

    import "DPI-C" function void set_ram_ptr(input logic [63:0] a []);
    initial set_ram_ptr(ram); 

    wire op_sb, data_cout, op_sh, op_sw, op_lb, op_lbu, op_lh, op_lhu, op_lw, op_lwu;
    wire[31:0]  addr, addr1, addr2;
    wire[63:0]  rdata_out, data_result;
    reg [31:0]  ram [400000:0];
    wire[63:0]  rom;
    
    initial begin
        $readmemh("/home/sakamoto/ysyx-workbench/npc/mem/program.hex", ram);
        $readmemh("/home/sakamoto/ysyx-workbench/npc/mem/program_d.hex", ram);
    end

    assign addr1 = (ram_addr-32'h80000000) >> 3;
    assign addr2 = {(cpu_pc-64'h80000000) >> 2}[31:0];
    assign addr = addr1 << 1;
    assign rom = {ram[addr+1], ram[addr]};
    /* verilator lint_off WIDTH */
    assign {data_cout, data_result} = cpu_pc + 64'hffffffff60000000;
    /* verilator lint_off WIDTH */

    assign op_sb = s_bhwd[2];
    assign op_sh = s_bhwd[1];
    assign op_sw = s_bhwd[0];

    assign op_lb  = l_bhw[5];
    assign op_lbu = l_bhw[4];
    assign op_lh  = l_bhw[3];
    assign op_lhu = l_bhw[2];
    assign op_lw  = l_bhw[1];
    assign op_lwu = l_bhw[0];

    assign rdata_out =  (op_lb && ram_addr[2:0] == 3'b000)? {{56{rom[7]}}, rom[7:0]} :
                        (op_lb && ram_addr[2:0] == 3'b001)? {{56{rom[15]}},rom[15:8]} :
                        (op_lb && ram_addr[2:0] == 3'b010)? {{56{rom[23]}},rom[23:16]} :
                        (op_lb && ram_addr[2:0] == 3'b011)? {{56{rom[31]}},rom[31:24]} :
                        (op_lb && ram_addr[2:0] == 3'b100)? {{56{rom[39]}},rom[39:32]} :
                        (op_lb && ram_addr[2:0] == 3'b101)? {{56{rom[47]}},rom[47:40]} :
                        (op_lb && ram_addr[2:0] == 3'b110)? {{56{rom[55]}},rom[55:48]} :
                        (op_lb && ram_addr[2:0] == 3'b111)? {{56{rom[63]}},rom[63:56]} :
                        (op_lbu && ram_addr[2:0] == 3'b000)? {56'd0,rom[7:0]} :
                        (op_lbu && ram_addr[2:0] == 3'b001)? {56'd0,rom[15:8]} :
                        (op_lbu && ram_addr[2:0] == 3'b010)? {56'd0,rom[23:16]} :
                        (op_lbu && ram_addr[2:0] == 3'b011)? {56'd0,rom[31:24]} :
                        (op_lbu && ram_addr[2:0] == 3'b100)? {56'd0,rom[39:32]} :
                        (op_lbu && ram_addr[2:0] == 3'b101)? {56'd0,rom[47:40]} :
                        (op_lbu && ram_addr[2:0] == 3'b110)? {56'd0,rom[55:48]} :
                        (op_lbu && ram_addr[2:0] == 3'b111)? {56'd0,rom[63:56]} :
                        (op_lh && ram_addr[2:0] == 3'b000)? {{48{rom[15]}},rom[15:0]} :
                        (op_lh && ram_addr[2:0] == 3'b010)? {{48{rom[31]}},rom[31:16]} :
                        (op_lh && ram_addr[2:0] == 3'b100)? {{48{rom[47]}},rom[47:32]} :
                        (op_lh && ram_addr[2:0] == 3'b110)? {{48{rom[63]}},rom[63:48]} :
                        (op_lhu && ram_addr[2:0] == 3'b000)? {48'd0,rom[15:0]} :
                        (op_lhu && ram_addr[2:0] == 3'b010)? {48'd0,rom[31:16]} :
                        (op_lhu && ram_addr[2:0] == 3'b100)? {48'd0,rom[47:32]} :
                        (op_lhu && ram_addr[2:0] == 3'b110)? {48'd0,rom[63:48]} :
                        (op_lw && ram_addr[2:0] == 3'b000)? {{32{rom[31]}},rom[31:0]} :
                        (op_lw && ram_addr[2:0] == 3'b100)? {{32{rom[63]}},rom[63:32]} :
                        (op_lwu && ram_addr[2:0] == 3'b000)? {32'd0,rom[31:0]} :
                        (op_lwu && ram_addr[2:0] == 3'b100)? {32'd0,rom[63:32]} : rom;

    always @(posedge clk) begin
        if (!rst) begin
            inst = ram[0];
            if_pc = 0;
            rdata = 0;
            stall_if = 0;
            stall_mem = 0;
        end else begin
            inst = ram[addr2];
            if_pc = cpu_pc;

            if (data_cout) begin
                stall_if = 1;
            end else begin
                stall_if = 0;
            end

            if (data_wen && op_sb && ram_addr[2:0] == 3'b000) begin
                ram[addr][7:0] = wdata[7:0];
            end
            if (data_wen && op_sb && ram_addr[2:0] == 3'b001) begin
                ram[addr][15:8] = wdata[7:0];
            end
            if (data_wen && op_sb && ram_addr[2:0] == 3'b010) begin
                ram[addr][23:16] = wdata[7:0];
            end
            if (data_wen && op_sb && ram_addr[2:0] == 3'b011) begin
                ram[addr][31:24] = wdata[7:0];
            end
            if (data_wen && op_sb && ram_addr[2:0] == 3'b100) begin
                ram[addr+1][7:0] = wdata[7:0];
            end
            if (data_wen && op_sb && ram_addr[2:0] == 3'b101) begin
                ram[addr+1][15:8] = wdata[7:0];
            end
            if (data_wen && op_sb && ram_addr[2:0] == 3'b110) begin
                ram[addr+1][23:16] = wdata[7:0];
            end
            if (data_wen && op_sb && ram_addr[2:0] == 3'b111) begin
                ram[addr+1][31:24] = wdata[7:0];
            end
            if (data_wen && op_sh && ram_addr[2:0] == 3'b000) begin
                ram[addr][15:0] = wdata[15:0];
            end
            if (data_wen && op_sh && ram_addr[2:0] == 3'b010) begin
                ram[addr][31:16] = wdata[15:0];
            end
            if (data_wen && op_sh && ram_addr[2:0] == 3'b100) begin
                ram[addr+1][15:0] = wdata[15:0];
            end
            if (data_wen && op_sh && ram_addr[2:0] == 3'b110) begin
                ram[addr+1][31:16] = wdata[15:0];
            end
            if (data_wen && op_sw && ram_addr[2:0] == 3'b000) begin
                ram[addr] = wdata[31:0];
            end
            if (data_wen && op_sw && ram_addr[2:0] == 3'b100) begin
                ram[addr+1] = wdata[31:0];
            end
            if (data_wen && s_bhwd == 3'd0) begin
                {ram[addr+1], ram[addr]} = wdata;
            end
            if (data_ren) begin
                rdata = rdata_out;
            end        
        end
    end

endmodule //ysyx_22040125_RAM
