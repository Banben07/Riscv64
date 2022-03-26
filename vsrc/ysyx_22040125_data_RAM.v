module ysyx_22040125_data_RAM (
        input  wire[63:0]  wdata,
        input  wire[31:0]  ram_addr,
        input  wire        data_wen,
        input  wire        clk,
        output wire[63:0]  rdata
    );
    import "DPI-C" function void set_ram_ptr(input logic [63:0] a []);
    initial set_ram_ptr(ram); 

    reg [63:0]  ram [4294967295:0];

    always @(posedge clk) begin
        if (data_wen) begin
            ram[ram_addr] <= wdata;
        end
    end

    assign rdata = ram[ram_addr];


endmodule //ysyx_22040125_data_RAM
