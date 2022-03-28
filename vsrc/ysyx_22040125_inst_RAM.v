module ysyx_22040125_inst_RAM (
        input  wire         clk,
        input  wire[15:0]   addr,

        output reg[31:0]   inst
    );

    reg [31:0] rom[65535:0];

    initial begin
        $readmemh("/home/sakamoto/ysyx-workbench/npc/mem/program.hex", rom);
    end

    always @(posedge clk) begin
        inst <= rom[addr];
    end

endmodule //inst_memory
