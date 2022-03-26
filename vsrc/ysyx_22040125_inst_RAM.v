module ysyx_22040125_inst_RAM (
        input  wire[15:0]   addr,
        output wire[31:0]   inst
    );

    reg [31:0] rom[65535:0];

    initial begin
        $readmemh("/home/sakamoto/ysyx-workbench/npc/mem/program.hex", rom);
    end

    assign inst = rom[addr];

endmodule //inst_memory
