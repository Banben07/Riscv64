module ysyx_22040125_inst_RAM (
        input  wire[7:0]   addr,
        output wire[31:0]   inst
    );

    reg [31:0] rom[255:0];

    initial begin
        $readmemb("/home/sakamoto/ysyx-workbench/npc/memory/rom_inst_file.txt", rom);
    end

    assign inst = rom[addr];

endmodule //inst_memory
