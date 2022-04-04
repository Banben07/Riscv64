module ysyx_22040125_Foward_unit (  
    input  wire[4:0]        exe_reg_rs1,
    input  wire[4:0]        exe_reg_rs2,
    input  wire[4:0]        pc_rs1,
    input  wire[4:0]        b_rs2,
    input  wire[4:0]        exe_reg_rd,
    input  wire[4:0]        mem_reg_rd,
    input  wire[4:0]        wb_reg_rd,
    input  wire[1:0]        rs1_sel,
    input  wire[1:0]        rs2_sel,
    input  wire             exe_reg_reg_wen,
    input  wire             mem_reg_reg_wen,
    input  wire             wb_reg_reg_wen,
    output wire[2:0]        src1_sel_plus,
    output wire[2:0]        src2_sel_plus,
    output wire[3:0]        pc_add_rs1_sel,
    output wire[3:0]        b_check_rs2_sel
);

assign src1_sel_plus = ((mem_reg_reg_wen) && (mem_reg_rd != 0) && (exe_reg_rs1 == mem_reg_rd) && (rs1_sel == 2'b10))? 3'b010:
                       ((wb_reg_reg_wen) && (wb_reg_rd != 0) && (exe_reg_rs1 == wb_reg_rd) && (rs1_sel == 2'b10))? 3'b100: 3'b001;

assign src2_sel_plus = ((mem_reg_reg_wen) && (mem_reg_rd != 0) && (exe_reg_rs2 == mem_reg_rd) && (rs2_sel == 2'b10))? 3'b010:
                       ((wb_reg_reg_wen) && (wb_reg_rd != 0) && (exe_reg_rs2 == wb_reg_rd) && (rs2_sel == 2'b10))? 3'b100: 3'b001;

assign pc_add_rs1_sel = ((exe_reg_reg_wen) && (exe_reg_rd != 0) && (pc_rs1 == exe_reg_rd))? 4'b0010:
                        ((mem_reg_reg_wen) && (mem_reg_rd != 0) && (pc_rs1 == mem_reg_rd))? 4'b0100:
                        ((wb_reg_reg_wen) && (wb_reg_rd != 0) && (pc_rs1 == wb_reg_rd))? 4'b1000: 4'b0001;

assign b_check_rs2_sel = ((exe_reg_reg_wen) && (exe_reg_rd != 0) && (b_rs2 == exe_reg_rd))? 4'b0010:
                        ((mem_reg_reg_wen) && (mem_reg_rd != 0) && (b_rs2 == mem_reg_rd))? 4'b0100:
                        ((wb_reg_reg_wen) && (wb_reg_rd != 0) && (b_rs2 == wb_reg_rd))? 4'b1000: 4'b0001;

endmodule //ysyx_22040125_Foward_unit
