module ysyx_22040125_inst_RAM (
        input  wire         clk,
        input  wire[63:0]   cpu_pc,
        input  wire         rst,

        output reg[31:0]   inst,
        output reg[63:0]   if_pc
    );

    wire[15:0]   addr;
    reg [31:0]   rom[65535:0];

    initial begin
        $readmemh("/home/sakamoto/ysyx-workbench/npc/mem/program.hex", rom);
    end

    assign addr = {(cpu_pc-64'h80000000)/(64'd4)}[15:0];

    always @(posedge clk) begin
        if (!rst) begin
            inst = rom[0];
            if_pc = 0;
        end else     
            inst = rom[addr];
            if_pc = cpu_pc;
    end

endmodule //inst_memory
