module ysyx_22040125_MEM_REG (
        input  wire         clk,
        input  wire         rst,
        input  wire[4:0]    mem_reg_in0,
        input  wire[2:0]    mem_reg_in1,
        input  wire         mem_reg_in2,
        input  wire         mem_reg_in3,
        input  wire[1:0]    mem_reg_in4,
        input  wire[63:0]   mem_reg_in7,
        input  wire[31:0]   mem_reg_in8,
        input  wire[63:0]   mem_reg_in9,
        input  wire[63:0]   mem_reg_in10,
        input  wire         mem_reg_in11,
        output reg[4:0]     mem_reg_out0,
        output reg[2:0]     mem_reg_out1,
        output reg          mem_reg_out2,
        output reg          mem_reg_out3,
        output reg[1:0]     mem_reg_out4,
        output reg[63:0]    mem_reg_out7,
        output reg[31:0]    mem_reg_out8,
        output reg[63:0]    mem_reg_out9,
        output reg[63:0]    mem_reg_out10,
        output reg          mem_reg_out11
    );

    always @(posedge clk) begin
        if (!rst) begin
            mem_reg_out0  <= 0;
            mem_reg_out1  <= 3'b001;
            mem_reg_out2  <= 0;
            mem_reg_out3  <= 0;
            mem_reg_out4  <= 0;
            mem_reg_out7  <= 0;
            mem_reg_out8  <= 0;
            mem_reg_out9  <= 0;
            mem_reg_out10 <= 0;
            mem_reg_out11 <= 0;
        end
        else begin
            mem_reg_out0  <= mem_reg_in0;
            mem_reg_out1  <= mem_reg_in1;
            mem_reg_out2  <= mem_reg_in2;
            mem_reg_out3  <= mem_reg_in3;
            mem_reg_out4  <= mem_reg_in4;
            mem_reg_out7  <= mem_reg_in7;
            mem_reg_out8  <= mem_reg_in8;
            mem_reg_out9  <= mem_reg_in9;
            mem_reg_out10 <= mem_reg_in10;
            mem_reg_out11 <= mem_reg_in11;
        end
    end

endmodule //ysyx_22040125_MEM_REG
