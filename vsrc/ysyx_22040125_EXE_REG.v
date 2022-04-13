module ysyx_22040125_EXE_REG (
        input  wire         clk,
        input  wire         rst,
        input  wire[63:0]   id_reg_pc,
        input  wire[14:0]   exe_op_in,
        input  wire[4:0]    exe_reg_rd_in,
        input  wire[63:0]   exe_reg_src1_in,
        input  wire[1:0]    exe_reg_src1_sel_in,
        input  wire[63:0]   exe_reg_src2_in,
        input  wire         exe_reg_in7,
        input  wire         exe_reg_in8,
        input  wire[1:0]    exe_reg_in9,
        input  wire[1:0]    exe_op_in0,
        input  wire[63:0]   exe_op_in1,
        input  wire[4:0]    exe_op_in2,
        input  wire[4:0]    exe_op_in3,
        input  wire         exe_op_in4,
        input  wire[2:0]    exe_op_in5,
        input  wire[5:0]    exe_op_in6,
        input  wire         exe_op_in7,
        output reg[63:0]    exe_reg_out0,
        output reg[14:0]    exe_reg_out1,
        output reg[4:0]     exe_reg_out2,
        output reg[63:0]    exe_reg_out3,
        output reg[1:0]     exe_reg_out4,
        output reg[63:0]    exe_reg_out5,
        output reg          exe_reg_out7,
        output reg          exe_reg_out8,
        output reg[1:0]     exe_reg_out9,
        output reg[1:0]     exe_reg_out10,
        output reg[63:0]    exe_reg_out11,
        output reg[4:0]     exe_reg_out12,
        output reg[4:0]     exe_reg_out13,
        output reg          exe_reg_out14,
        output reg[2:0]     exe_reg_out15,
        output reg[5:0]     exe_reg_out16,
        output reg          exe_reg_out17
    );

    always @(posedge clk) begin
        if (!rst) begin
            exe_reg_out0  <= 0;
            exe_reg_out1  <= 0;
            exe_reg_out2  <= 0;
            exe_reg_out3  <= 0;
            exe_reg_out4  <= 0;
            exe_reg_out5  <= 0;
            exe_reg_out7  <= 0;
            exe_reg_out8  <= 0;
            exe_reg_out9  <= 0;
            exe_reg_out10 <= 0;
            exe_reg_out11 <= 0;
            exe_reg_out12 <= 0;
            exe_reg_out13 <= 0;
            exe_reg_out14 <= 0;
            exe_reg_out15 <= 0;
            exe_reg_out16 <= 0;
            exe_reg_out17 <= 0;
        end
        else begin
            exe_reg_out0  <= id_reg_pc;
            exe_reg_out1  <= exe_op_in;
            exe_reg_out2  <= exe_reg_rd_in;
            exe_reg_out3  <= exe_reg_src1_in;
            exe_reg_out4  <= exe_reg_src1_sel_in;
            exe_reg_out5  <= exe_reg_src2_in;
            exe_reg_out7  <= exe_reg_in7;
            exe_reg_out8  <= exe_reg_in8;
            exe_reg_out9  <= exe_reg_in9;
            exe_reg_out10 <= exe_op_in0;
            exe_reg_out11 <= exe_op_in1;
            exe_reg_out12 <= exe_op_in2;
            exe_reg_out13 <= exe_op_in3;
            exe_reg_out14 <= exe_op_in4;
            exe_reg_out15 <= exe_op_in5;
            exe_reg_out16 <= exe_op_in6;
            exe_reg_out17 <= exe_op_in7;
        end
    end

endmodule //ysyx_22040125_EXE_REG
