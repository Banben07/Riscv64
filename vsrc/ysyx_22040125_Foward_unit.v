module ysyx_22040125_Foward_unit (  
    input  wire[4:0]        exe_reg_rs1,
    input  wire[4:0]        exe_reg_rs2,
    input  wire[4:0]        pc_rs1,
    input  wire[4:0]        mem_reg_rd,
    input  wire[4:0]        wb_reg_rd,
    input  wire             mem_reg_reg_wen,
    input  wire             wb_reg_reg_wen,
    output wire[2:0]        src1_sel_plus,
    output wire[2:0]        src2_sel_plus,
    output wire[2:0]        pc_add_rs1_sel
);

assign src1_sel_plus = ((mem_reg_reg_wen) && (mem_reg_rd != 0) && (exe_reg_rs1 == mem_reg_rd))? 3'b010:
                       ((wb_reg_reg_wen) && (wb_reg_rd != 0) && (exe_reg_rs1 == wb_reg_rd))? 3'b100: 3'b001;

assign src2_sel_plus = ((mem_reg_reg_wen) && (mem_reg_rd != 0) && (exe_reg_rs2 == mem_reg_rd))? 3'b010:
                       ((wb_reg_reg_wen) && (wb_reg_rd != 0) && (exe_reg_rs2 == wb_reg_rd))? 3'b100: 3'b001;

assign pc_add_rs1_sel = ((mem_reg_reg_wen) && (mem_reg_rd != 0) && (pc_rs1 == mem_reg_rd))? 3'b010:
                       ((wb_reg_reg_wen) && (wb_reg_rd != 0) && (pc_rs1 == wb_reg_rd))? 3'b100: 3'b001;

endmodule //ysyx_22040125_Foward_unit
