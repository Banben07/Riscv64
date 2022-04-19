module ysyx_22040125_RAM (
        input  wire[63:0]  wdata,
        input  wire        rst,
        input  wire[3:0]   r_rid,
        input  wire[31:0]  r_addr,
        input  wire[31:0]  w_addr,
        input  wire[2:0]   arsize,
        input  wire[2:0]   awsize,
        input  wire        data_wen,
        input  wire        data_ren,
        input  wire        clk,
        output reg[63:0]   rdata

    );

    import "DPI-C" function void set_ram_ptr(input logic [63:0] a []);
    initial set_ram_ptr(ram); 

    wire op_sb, data_cout, op_sh, op_sw, op_lb, op_lbu, op_lh, op_lhu, op_lw, op_lwu;
    reg [31:0]  ram [400000:0];
    wire[63:0]  rom, rdata_da;
    
    initial begin
        $readmemh("/home/sakamoto/ysyx-workbench/npc/mem/program.hex", ram);
        $readmemh("/home/sakamoto/ysyx-workbench/npc/mem/program_d.hex", ram);
    end

    assign rom = {ram[r_addr+1], ram[r_addr]};

    assign op_sb = awsize[2];
    assign op_sh = awsize[1];
    assign op_sw = awsize[0];

    assign op_lb  = arsize[2];
    assign op_lh  = arsize[1];
    assign op_lw  = arsize[0];

    assign rdata = data_ren? ((r_rid == 0)? rom: rdata_da) : 0;
    assign rdata_da  =  (op_lb && r_addr[2:0] == 3'b000)? {{56{rom[7]}}, rom[7:0]} :
                        (op_lb && r_addr[2:0] == 3'b001)? {{56{rom[15]}},rom[15:8]} :
                        (op_lb && r_addr[2:0] == 3'b010)? {{56{rom[23]}},rom[23:16]} :
                        (op_lb && r_addr[2:0] == 3'b011)? {{56{rom[31]}},rom[31:24]} :
                        (op_lb && r_addr[2:0] == 3'b100)? {{56{rom[39]}},rom[39:32]} :
                        (op_lb && r_addr[2:0] == 3'b101)? {{56{rom[47]}},rom[47:40]} :
                        (op_lb && r_addr[2:0] == 3'b110)? {{56{rom[55]}},rom[55:48]} :
                        (op_lb && r_addr[2:0] == 3'b111)? {{56{rom[63]}},rom[63:56]} :
                        (op_lh && r_addr[2:0] == 3'b000)? {{48{rom[15]}},rom[15:0]} :
                        (op_lh && r_addr[2:0] == 3'b010)? {{48{rom[31]}},rom[31:16]} :
                        (op_lh && r_addr[2:0] == 3'b100)? {{48{rom[47]}},rom[47:32]} :
                        (op_lh && r_addr[2:0] == 3'b110)? {{48{rom[63]}},rom[63:48]} :
                        (op_lw && r_addr[2:0] == 3'b000)? {{32{rom[31]}},rom[31:0]} :
                        (op_lw && r_addr[2:0] == 3'b100)? {{32{rom[63]}},rom[63:32]} : rom;

    always @(posedge clk) begin
            if (data_wen && op_sb && w_addr[2:0] == 3'b000) begin
                ram[w_addr][7:0] = wdata[7:0];
            end
            if (data_wen && op_sb && w_addr[2:0] == 3'b001) begin
                ram[w_addr][15:8] = wdata[7:0];
            end
            if (data_wen && op_sb && w_addr[2:0] == 3'b010) begin
                ram[w_addr][23:16] = wdata[7:0];
            end
            if (data_wen && op_sb && w_addr[2:0] == 3'b011) begin
                ram[w_addr][31:24] = wdata[7:0];
            end
            if (data_wen && op_sb && w_addr[2:0] == 3'b100) begin
                ram[w_addr+1][7:0] = wdata[7:0];
            end
            if (data_wen && op_sb && w_addr[2:0] == 3'b101) begin
                ram[w_addr+1][15:8] = wdata[7:0];
            end
            if (data_wen && op_sb && w_addr[2:0] == 3'b110) begin
                ram[w_addr+1][23:16] = wdata[7:0];
            end
            if (data_wen && op_sb && w_addr[2:0] == 3'b111) begin
                ram[w_addr+1][31:24] = wdata[7:0];
            end
            if (data_wen && op_sh && w_addr[2:0] == 3'b000) begin
                ram[w_addr][15:0] = wdata[15:0];
            end
            if (data_wen && op_sh && w_addr[2:0] == 3'b010) begin
                ram[w_addr][31:16] = wdata[15:0];
            end
            if (data_wen && op_sh && w_addr[2:0] == 3'b100) begin
                ram[w_addr+1][15:0] = wdata[15:0];
            end
            if (data_wen && op_sh && w_addr[2:0] == 3'b110) begin
                ram[w_addr+1][31:16] = wdata[15:0];
            end
            if (data_wen && op_sw && w_addr[2:0] == 3'b000) begin
                ram[w_addr] = wdata[31:0];
            end
            if (data_wen && op_sw && w_addr[2:0] == 3'b100) begin
                ram[w_addr+1] = wdata[31:0];
            end
            if (data_wen && awsize == 3'd0) begin
                {ram[w_addr+1], ram[w_addr]} = wdata;
            end
        end

endmodule //ysyx_22040125_RAM
