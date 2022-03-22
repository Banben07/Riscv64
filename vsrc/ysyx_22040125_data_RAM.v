module ysyx_22040125_data_RAM (
        input  wire[31:0]  ram_addr,
        input  wire[63:0]  wdata,
        input  wire        data_ren,
        input  wire        data_wen,
        input  wire        clk,
        output wire[63:0]  rdata
    );

    reg [63:0]  ram [4294967295:0];

    always @(posedge clk) begin
        if (data_wen) begin
            ram[ram_addr] <= wdata;
        end
    end

    assign rdata = (data_ren)? ram[data_ren] : 0;


endmodule //ysyx_22040125_data_RAM
