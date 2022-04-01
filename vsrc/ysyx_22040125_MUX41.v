module ysyx_22040125_MUX41 (
    input  wire[63:0]   in0,
    input  wire[63:0]   in1,
    input  wire[63:0]   in2,
    input  wire[63:0]   in3,
    input  wire[3:0]    key,
    output wire[63:0]   out
);

assign out = (key == 4'b0001)? in0: (key == 4'b0010)? in1: (key == 4'b0100)? in2 :in3;

endmodule //ysyx_22040125_MUX41
