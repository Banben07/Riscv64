module ysyx_22040125_EXE_REG (
        input  wire         clk,
        input  wire         rst,
        input  wire[63:0]   exe_reg_in0,
        input  wire[11:0]   exe_reg_in1,
        input  wire[4:0]    exe_reg_in2,
        input  wire[63:0]   exe_reg_in3,
        input  wire[1:0]    exe_reg_in4,
        input  wire[63:0]   exe_reg_in5,
        input  wire         exe_reg_in7,
        input  wire         exe_reg_in8,
        input  wire[1:0]    exe_reg_in9,
        input  wire[1:0]    exe_reg_in10,
        input  wire[63:0]   exe_reg_in11,
        input  wire[4:0]    exe_reg_in12,
        input  wire[4:0]    exe_reg_in13,
        input  wire         exe_reg_in14,
        input  wire[2:0]    exe_reg_in15,
        input  wire[5:0]    exe_reg_in16,
        output reg[63:0]    exe_reg_out0,
        output reg[11:0]    exe_reg_out1,
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
        output reg[5:0]     exe_reg_out16
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
        end
        else begin
            exe_reg_out0  <= exe_reg_in0;
            exe_reg_out1  <= exe_reg_in1;
            exe_reg_out2  <= exe_reg_in2;
            exe_reg_out3  <= exe_reg_in3;
            exe_reg_out4  <= exe_reg_in4;
            exe_reg_out5  <= exe_reg_in5;
            exe_reg_out7  <= exe_reg_in7;
            exe_reg_out8  <= exe_reg_in8;
            exe_reg_out9  <= exe_reg_in9;
            exe_reg_out10 <= exe_reg_in10;
            exe_reg_out11 <= exe_reg_in11;
            exe_reg_out12 <= exe_reg_in12;
            exe_reg_out13 <= exe_reg_in13;
            exe_reg_out14 <= exe_reg_in14;
            exe_reg_out15 <= exe_reg_in15;
            exe_reg_out16 <= exe_reg_in16;
        end
    end

endmodule //ysyx_22040125_EXE_REG
