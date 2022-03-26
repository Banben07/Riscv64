module ysyx_22040125_MUX21 (
    input  wire[63:0]   in0,
    input  wire[63:0]   in1,
    input  wire[1:0]    key,
    output wire[63:0]   out
);

assign out = (key == 2'b01)? in0: in1;

endmodule //ysyx_22040125_MUX21
