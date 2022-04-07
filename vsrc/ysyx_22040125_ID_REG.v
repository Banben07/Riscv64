module ysyx_22040125_ID_REG (
        input  wire         clk,
        input  wire         rst,
        input  wire         stall,
        input  wire         IF_Flush,
        input  wire[31:0]   id_reg_in0,
        input  wire[63:0]   id_reg_in1,
        output reg[31:0]    id_reg_out0,
        output reg[63:0]    id_reg_out1
    );

    always @(posedge clk) begin
        if (!rst) begin
            id_reg_out0 <= 0;
            id_reg_out1 <= 0;
        end
        else if (IF_Flush && (~stall)) begin
            id_reg_out0 <= 32'hffffffff;
            id_reg_out1 <= id_reg_in1;
        end 
        else if (stall) begin
            id_reg_out0 <= id_reg_out0;
            id_reg_out1 <= id_reg_out1;
        end
        else begin
            id_reg_out0 <= id_reg_in0;
            id_reg_out1 <= id_reg_in1;
        end
    end

endmodule //ysyx_22040125_ID_REG
