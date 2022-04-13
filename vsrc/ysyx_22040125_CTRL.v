module ysyx_22040125_CTRL (
        input  wire[2:0]        pc_jump,
        input  wire[4:0]        rs1,
        input  wire[4:0]        rs2,
        input  wire[4:0]        exe_reg_rd,
        input  wire[4:0]        exe_reg_rs1,
        input  wire[4:0]        exe_reg_rs2,
        input  wire[4:0]        pc_rs1,
        input  wire[4:0]        b_rs2,
        input  wire[4:0]        wb_reg_rd,
        input  wire[4:0]        mem_reg_rd,
        input  wire[1:0]        rs1_sel,
        input  wire[1:0]        rs2_sel,
        input  wire             exe_reg_data_ren,
        input  wire             mem_reg_data_ren,
        input  wire             wb_reg_reg_wen,
        input  wire             exe_reg_reg_wen,
        input  wire             mem_reg_reg_wen,
        input  wire             data_wen,
        input  wire             data_ren,
        input  wire             reg_wen,
        output wire             stall_control,
        output wire             IF_Flush,
        output wire             data_wen_out,
        output wire             data_ren_out,
        output wire             reg_wen_out,
        output wire[2:0]        src1_sel_plus,
        output wire[2:0]        src2_sel_plus,
        output wire[3:0]        pc_add_rs1_sel,
        output wire[3:0]        b_check_rs2_sel
    );

    assign IF_Flush = (pc_jump == 3'b001)? 0: 1;
    assign stall_control = (((exe_reg_data_ren) && ((exe_reg_rd == rs1) || (exe_reg_rd == rs2))) || 
                           ((mem_reg_data_ren) && ((mem_reg_rd == rs1) || (mem_reg_rd == rs2))))? 1: 0;
    assign data_wen_out = (stall_control == 0)? data_wen: 0;
    assign data_ren_out = (stall_control == 0)? data_ren: 0;
    assign reg_wen_out = (stall_control == 0)? reg_wen: 0;
    
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

endmodule //ysyx_22040125_CTRL
