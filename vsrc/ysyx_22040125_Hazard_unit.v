module ysyx_22040125_Hazard_unit (
        input  wire[2:0]        pc_jump,
        input  wire[4:0]        rs1,
        input  wire[4:0]        rs2,
        input  wire[4:0]        exe_reg_rd,
        input  wire             exe_reg_data_ren,
        input  wire[4:0]        mem_reg_rd,
        input  wire             mem_reg_data_ren,
        output wire             stall_control,
        output wire             IF_Flush
    );

    assign IF_Flush = (pc_jump == 3'b001)? 0: 1;
    assign stall_control = (((exe_reg_data_ren) && ((exe_reg_rd == rs1) || (exe_reg_rd == rs2))) || 
                            ((mem_reg_data_ren) && ((mem_reg_rd == rs1) || (mem_reg_rd == rs2))))? 1: 0;
    
endmodule //ysyx_22040125_Hazard_unit
