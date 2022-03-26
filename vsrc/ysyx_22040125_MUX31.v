module ysyx_22040125_MUX31 (
    input  wire[63:0]   in0,
    input  wire[63:0]   in1,
    input  wire[63:0]   in2,
    input  wire[2:0]    key,
    output wire[63:0]   out
);

assign out = (key == 3'b001)? in0: (key == 3'b010)? in1: in2;

endmodule //ysyx_22040125_MUX31
