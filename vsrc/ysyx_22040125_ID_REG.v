module ysyx_22040125_ID_REG (
        input  wire         clk,
        input  wire         rst,
        input  wire         stall,
        input  wire         IF_Flush,
        input  wire[31:0]   inst,
        input  wire[63:0]   if_pc,
        output reg[31:0]    id_inst_id,
        output reg[63:0]    id_reg_pc
    );

    always @(posedge clk) begin
        if (!rst) begin
            id_inst_id <= 0;
            id_reg_pc <= 0;
        end
        else if (IF_Flush && (~stall)) begin
            id_inst_id <= 32'h00000013;
            id_reg_pc <= if_pc;
        end 
        else if (stall) begin
            id_inst_id <= id_inst_id;
            id_reg_pc <= id_reg_pc;
        end
        else begin
            id_inst_id <= inst;
            id_reg_pc <= if_pc;
        end
    end

endmodule //ysyx_22040125_ID_REG
