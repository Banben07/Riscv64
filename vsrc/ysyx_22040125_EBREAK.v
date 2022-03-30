module ysyx_22040125_EBREAK (
    input  wire         clk,
    input  wire         rst,
    input  wire         ebreak,
    input  wire[11:0]   op,
    input  wire[31:0]   inst,
    output reg          ebreak_out,
    output reg[11:0]    op_out,
    output reg[31:0]    inst_out
);

reg[11:0]    op_1;
reg          ebreak_1;
reg[31:0]    inst_1;

always @(posedge clk) begin
    if (!rst) begin
        ebreak_out <= 0;
        ebreak_1 <= 0;
        op_out <= 12'hfff;
        op_1 <= 12'hfff;
    end else begin
        op_1 <= op;
        op_out <= op_1;
        ebreak_1 <= ebreak;
        ebreak_out <= ebreak_1;
        inst_1 <= inst;
        inst_out <= inst_1;
    end      
end

endmodule //ysyx_22040125_EBREAK