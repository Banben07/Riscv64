module ysyx_22040125_WB_REG (
        input  wire         clk,
        input  wire         rst,
        input  wire[63:0]   wb_reg_in0,
        input  wire[2:0]    wb_reg_in1,
        input  wire         wb_reg_in2,
        input  wire[1:0]    wb_reg_in3,
        input  wire[63:0]   wb_reg_in4,
        input  wire[63:0]   wb_reg_in5,
        input  wire[4:0]    wb_reg_in6,
        output reg[63:0]    wb_reg_out0,
        output reg[2:0]     wb_reg_out1,
        output reg          wb_reg_out2,
        output reg[1:0]     wb_reg_out3,
        output reg[63:0]    wb_reg_out4,
        output reg[63:0]    wb_reg_out5,
        output reg[4:0]     wb_reg_out6
    );

    always @(posedge clk) begin
        if (!rst) begin
            wb_reg_out0  <= 0;
            wb_reg_out1  <= 3'b001;
            wb_reg_out2  <= 0;
            wb_reg_out3  <= 0;
            wb_reg_out4  <= 0;
            wb_reg_out5  <= 0;
            wb_reg_out6  <= 0;
        end
        else begin
            wb_reg_out0  <= wb_reg_in0;
            wb_reg_out1  <= wb_reg_in1;
            wb_reg_out2  <= wb_reg_in2;
            wb_reg_out3  <= wb_reg_in3;
            wb_reg_out4  <= wb_reg_in4;
            wb_reg_out5  <= wb_reg_in5;
            wb_reg_out6  <= wb_reg_in6;
        end
    end

endmodule //ysyx_22040125_WB_REG
