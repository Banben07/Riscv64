module top (
    input  wire       clk,
    input  wire       rst,
    output reg        success
);

ysyx_22040125_CPU   cpu(
        .clk(clk),
        .rst(rst),
        .success(success)
);

endmodule //top
