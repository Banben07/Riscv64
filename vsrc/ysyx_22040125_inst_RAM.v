module ysyx_22040125_inst_RAM (
        input  wire         clk,
        input  wire[63:0]   cpu_pc,
        input  wire         rst,
        input  wire[15:0]   addr,

        output reg[31:0]   inst,
        output reg[63:0]   if_pc
    );

    reg [31:0] rom[65535:0];

    initial begin
        $readmemh("/home/sakamoto/ysyx-workbench/npc/mem/rom_inst_file.txt", rom);
    end

    always @(posedge clk) begin
        if (!rst) begin
            inst = rom[0];
            if_pc = 0;
        end else     
            inst = rom[addr];
            if_pc = cpu_pc;
    end

endmodule //inst_memory
