// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VYSYX_22040125_B_CHECK__Syms.h"


void VYSYX_22040125_B_CHECK___024root__traceInitSub0(VYSYX_22040125_B_CHECK___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VYSYX_22040125_B_CHECK___024root__traceInitTop(VYSYX_22040125_B_CHECK___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VYSYX_22040125_B_CHECK__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VYSYX_22040125_B_CHECK___024root__traceInitSub0(vlSelf, tracep);
    }
}

void VYSYX_22040125_B_CHECK___024root__traceInitSub0(VYSYX_22040125_B_CHECK___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VYSYX_22040125_B_CHECK__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+283,"clk", false,-1);
        tracep->declBit(c+284,"rst", false,-1);
        tracep->declQuad(c+285,"data_rd", false,-1, 63,0);
        tracep->declBit(c+283,"top clk", false,-1);
        tracep->declBit(c+284,"top rst", false,-1);
        tracep->declQuad(c+285,"top data_rd", false,-1, 63,0);
        tracep->declBit(c+1,"top data_wen", false,-1);
        tracep->declBit(c+2,"top data_wen_out", false,-1);
        tracep->declBit(c+3,"top reg_wen_out", false,-1);
        tracep->declBit(c+4,"top stall_id", false,-1);
        tracep->declBit(c+5,"top data_ren", false,-1);
        tracep->declBit(c+6,"top exe_reg_data_ren", false,-1);
        tracep->declBit(c+7,"top mem_reg_data_ren", false,-1);
        tracep->declBit(c+8,"top IF_Flush", false,-1);
        tracep->declBit(c+9,"top ebreak", false,-1);
        tracep->declBit(c+10,"top ebreak_out", false,-1);
        tracep->declBit(c+11,"top reg_wen", false,-1);
        tracep->declBit(c+12,"top mem_reg_reg_wen", false,-1);
        tracep->declBit(c+13,"top mem_reg_data_wen", false,-1);
        tracep->declBit(c+14,"top exe_reg_data_wen", false,-1);
        tracep->declBit(c+15,"top exe_reg_reg_wen", false,-1);
        tracep->declBit(c+16,"top wb_reg_reg_wen", false,-1);
        tracep->declBus(c+17,"top src1_sel", false,-1, 1,0);
        tracep->declBus(c+18,"top wb_reg_load_sel", false,-1, 1,0);
        tracep->declBus(c+19,"top mem_reg_load_sel", false,-1, 1,0);
        tracep->declBus(c+20,"top exe_reg_src1_sel", false,-1, 1,0);
        tracep->declBus(c+21,"top src2_sel", false,-1, 1,0);
        tracep->declBus(c+22,"top exe_reg_src2_sel", false,-1, 1,0);
        tracep->declBus(c+23,"top load_sel", false,-1, 1,0);
        tracep->declBus(c+24,"top exe_reg_load_sel", false,-1, 1,0);
        tracep->declBus(c+25,"top pc_sel", false,-1, 2,0);
        tracep->declBus(c+26,"top pc_sel_out", false,-1, 2,0);
        tracep->declBus(c+27,"top src1_sel_plus", false,-1, 2,0);
        tracep->declBus(c+28,"top src2_sel_plus", false,-1, 2,0);
        tracep->declBus(c+29,"top wb_reg_pc_sel", false,-1, 2,0);
        tracep->declBus(c+30,"top mem_reg_pc_sel", false,-1, 2,0);
        tracep->declBus(c+287,"top exe_reg_pc_sel", false,-1, 2,0);
        tracep->declBus(c+31,"top pc_add_rs1_sel", false,-1, 3,0);
        tracep->declBus(c+32,"top rs1", false,-1, 4,0);
        tracep->declBus(c+33,"top rs2", false,-1, 4,0);
        tracep->declBus(c+34,"top exe_reg_rs1", false,-1, 4,0);
        tracep->declBus(c+35,"top exe_reg_rs2", false,-1, 4,0);
        tracep->declBus(c+36,"top rd", false,-1, 4,0);
        tracep->declBus(c+37,"top mem_reg_rd", false,-1, 4,0);
        tracep->declBus(c+38,"top exe_reg_rd", false,-1, 4,0);
        tracep->declBus(c+39,"top wb_reg_rd", false,-1, 4,0);
        tracep->declBus(c+40,"top b_check", false,-1, 5,0);
        tracep->declBus(c+41,"top op", false,-1, 11,0);
        tracep->declBus(c+42,"top op_out", false,-1, 11,0);
        tracep->declBus(c+43,"top exe_reg_op", false,-1, 11,0);
        tracep->declBus(c+44,"top inst_addr", false,-1, 15,0);
        tracep->declBus(c+45,"top inst", false,-1, 31,0);
        tracep->declBus(c+46,"top ram_addr", false,-1, 31,0);
        tracep->declBus(c+47,"top mem_reg_ram_addr", false,-1, 31,0);
        tracep->declBus(c+48,"top inst_id", false,-1, 31,0);
        tracep->declBus(c+49,"top inst_out", false,-1, 31,0);
        tracep->declQuad(c+50,"top imm", false,-1, 63,0);
        tracep->declQuad(c+52,"top pc_src1", false,-1, 63,0);
        tracep->declQuad(c+54,"top data_a0", false,-1, 63,0);
        tracep->declQuad(c+56,"top one_src1", false,-1, 63,0);
        tracep->declQuad(c+58,"top one_src2", false,-1, 63,0);
        tracep->declQuad(c+60,"top if_pc", false,-1, 63,0);
        tracep->declQuad(c+62,"top exe_reg_src1_rs1", false,-1, 63,0);
        tracep->declQuad(c+288,"top exe_reg_src1", false,-1, 63,0);
        tracep->declQuad(c+290,"top exe_reg_src2", false,-1, 63,0);
        tracep->declQuad(c+64,"top exe_reg_src2_rs2", false,-1, 63,0);
        tracep->declQuad(c+66,"top mem_reg_pc", false,-1, 63,0);
        tracep->declQuad(c+68,"top wb_reg_rdata", false,-1, 63,0);
        tracep->declQuad(c+70,"top wb_reg_data_rd_in", false,-1, 63,0);
        tracep->declQuad(c+72,"top mem_reg_src2_rs2", false,-1, 63,0);
        tracep->declQuad(c+74,"top mem_reg_data_rd_in", false,-1, 63,0);
        tracep->declQuad(c+292,"top mem_reg_cpu_dnpc_in1", false,-1, 63,0);
        tracep->declQuad(c+294,"top mem_reg_cpu_dnpc_in2", false,-1, 63,0);
        tracep->declQuad(c+76,"top exe_reg_imm", false,-1, 63,0);
        tracep->declQuad(c+78,"top cpu_pc", false,-1, 63,0);
        tracep->declQuad(c+80,"top wb_reg_pc", false,-1, 63,0);
        tracep->declQuad(c+296,"top wb_reg_cpu_dnpc_in1", false,-1, 63,0);
        tracep->declQuad(c+298,"top wb_reg_cpu_dnpc_in2", false,-1, 63,0);
        tracep->declQuad(c+82,"top exe_reg_pc", false,-1, 63,0);
        tracep->declQuad(c+300,"top cpu_ifpc", false,-1, 63,0);
        tracep->declQuad(c+302,"top if_reg_pc", false,-1, 63,0);
        tracep->declQuad(c+84,"top id_reg_pc", false,-1, 63,0);
        tracep->declQuad(c+86,"top cpu_dnpc", false,-1, 63,0);
        tracep->declQuad(c+88,"top cpu_snpc", false,-1, 63,0);
        tracep->declQuad(c+90,"top rdata", false,-1, 63,0);
        tracep->declQuad(c+92,"top src1_rs1", false,-1, 63,0);
        tracep->declQuad(c+94,"top src2_rs2", false,-1, 63,0);
        tracep->declQuad(c+96,"top cpu_dnpc_in1", false,-1, 63,0);
        tracep->declQuad(c+98,"top cpu_dnpc_in2", false,-1, 63,0);
        tracep->declQuad(c+100,"top src1", false,-1, 63,0);
        tracep->declQuad(c+102,"top src2", false,-1, 63,0);
        tracep->declQuad(c+104,"top data_rd_in", false,-1, 63,0);
        tracep->declBus(c+26,"top Hazard_unit pc_jump", false,-1, 2,0);
        tracep->declBus(c+32,"top Hazard_unit rs1", false,-1, 4,0);
        tracep->declBus(c+33,"top Hazard_unit rs2", false,-1, 4,0);
        tracep->declBus(c+38,"top Hazard_unit exe_reg_rd", false,-1, 4,0);
        tracep->declBit(c+6,"top Hazard_unit exe_reg_data_ren", false,-1);
        tracep->declBit(c+4,"top Hazard_unit stall_id", false,-1);
        tracep->declBit(c+8,"top Hazard_unit IF_Flush", false,-1);
        tracep->declBus(c+34,"top Foward_unit exe_reg_rs1", false,-1, 4,0);
        tracep->declBus(c+35,"top Foward_unit exe_reg_rs2", false,-1, 4,0);
        tracep->declBus(c+32,"top Foward_unit pc_rs1", false,-1, 4,0);
        tracep->declBus(c+38,"top Foward_unit exe_reg_rd", false,-1, 4,0);
        tracep->declBus(c+37,"top Foward_unit mem_reg_rd", false,-1, 4,0);
        tracep->declBus(c+39,"top Foward_unit wb_reg_rd", false,-1, 4,0);
        tracep->declBit(c+15,"top Foward_unit exe_reg_reg_wen", false,-1);
        tracep->declBit(c+12,"top Foward_unit mem_reg_reg_wen", false,-1);
        tracep->declBit(c+16,"top Foward_unit wb_reg_reg_wen", false,-1);
        tracep->declBus(c+27,"top Foward_unit src1_sel_plus", false,-1, 2,0);
        tracep->declBus(c+28,"top Foward_unit src2_sel_plus", false,-1, 2,0);
        tracep->declBus(c+31,"top Foward_unit pc_add_rs1_sel", false,-1, 3,0);
        tracep->declQuad(c+88,"top pc_sel_choice in0", false,-1, 63,0);
        tracep->declQuad(c+96,"top pc_sel_choice in1", false,-1, 63,0);
        tracep->declQuad(c+98,"top pc_sel_choice in2", false,-1, 63,0);
        tracep->declBus(c+26,"top pc_sel_choice key", false,-1, 2,0);
        tracep->declQuad(c+86,"top pc_sel_choice out", false,-1, 63,0);
        tracep->declQuad(c+86,"top pc cpu_dnpc", false,-1, 63,0);
        tracep->declBit(c+283,"top pc clk", false,-1);
        tracep->declBit(c+284,"top pc rst", false,-1);
        tracep->declBit(c+4,"top pc stall", false,-1);
        tracep->declQuad(c+78,"top pc cpu_pc", false,-1, 63,0);
        tracep->declQuad(c+78,"top inf pc", false,-1, 63,0);
        tracep->declBus(c+44,"top inf addr", false,-1, 15,0);
        tracep->declBit(c+283,"top inst_ram clk", false,-1);
        tracep->declQuad(c+78,"top inst_ram cpu_pc", false,-1, 63,0);
        tracep->declBit(c+284,"top inst_ram rst", false,-1);
        tracep->declBus(c+44,"top inst_ram addr", false,-1, 15,0);
        tracep->declBus(c+45,"top inst_ram inst", false,-1, 31,0);
        tracep->declQuad(c+60,"top inst_ram if_pc", false,-1, 63,0);
        tracep->declBit(c+283,"top id_reg clk", false,-1);
        tracep->declBit(c+284,"top id_reg rst", false,-1);
        tracep->declBit(c+4,"top id_reg stall", false,-1);
        tracep->declBit(c+8,"top id_reg IF_Flush", false,-1);
        tracep->declBus(c+45,"top id_reg inst", false,-1, 31,0);
        tracep->declQuad(c+60,"top id_reg if_pc", false,-1, 63,0);
        tracep->declBus(c+48,"top id_reg id_inst_id", false,-1, 31,0);
        tracep->declQuad(c+84,"top id_reg id_reg_pc", false,-1, 63,0);
        tracep->declBus(c+48,"top idu inst", false,-1, 31,0);
        tracep->declQuad(c+50,"top idu imm", false,-1, 63,0);
        tracep->declBus(c+41,"top idu op", false,-1, 11,0);
        tracep->declBus(c+40,"top idu b_check", false,-1, 5,0);
        tracep->declBus(c+36,"top idu rd", false,-1, 4,0);
        tracep->declBus(c+32,"top idu rs1", false,-1, 4,0);
        tracep->declBus(c+33,"top idu rs2", false,-1, 4,0);
        tracep->declBus(c+25,"top idu pc_sel", false,-1, 2,0);
        tracep->declBus(c+17,"top idu src1_sel", false,-1, 1,0);
        tracep->declBus(c+21,"top idu src2_sel", false,-1, 1,0);
        tracep->declBus(c+23,"top idu load_sel", false,-1, 1,0);
        tracep->declBit(c+1,"top idu data_wen", false,-1);
        tracep->declBit(c+5,"top idu data_ren", false,-1);
        tracep->declBit(c+9,"top idu ebreak", false,-1);
        tracep->declBit(c+11,"top idu reg_wen", false,-1);
        tracep->declBit(c+106,"top idu TYPE_I", false,-1);
        tracep->declBit(c+107,"top idu TYPE_U", false,-1);
        tracep->declBit(c+108,"top idu TYPE_S", false,-1);
        tracep->declBit(c+109,"top idu TYPE_J", false,-1);
        tracep->declBit(c+110,"top idu TYPE_B", false,-1);
        tracep->declBit(c+111,"top idu TYPE_R", false,-1);
        tracep->declBit(c+112,"top idu inst_lui", false,-1);
        tracep->declBit(c+113,"top idu inst_auipc", false,-1);
        tracep->declBit(c+109,"top idu inst_jal", false,-1);
        tracep->declBit(c+114,"top idu inst_beq", false,-1);
        tracep->declBit(c+115,"top idu inst_bne", false,-1);
        tracep->declBit(c+116,"top idu inst_blt", false,-1);
        tracep->declBit(c+117,"top idu inst_bge", false,-1);
        tracep->declBit(c+118,"top idu inst_bltu", false,-1);
        tracep->declBit(c+119,"top idu inst_bgeu", false,-1);
        tracep->declBit(c+120,"top idu inst_jalr", false,-1);
        tracep->declBit(c+121,"top idu inst_lb", false,-1);
        tracep->declBit(c+122,"top idu inst_lh", false,-1);
        tracep->declBit(c+123,"top idu inst_lw", false,-1);
        tracep->declBit(c+124,"top idu inst_ld", false,-1);
        tracep->declBit(c+125,"top idu inst_lbu", false,-1);
        tracep->declBit(c+126,"top idu inst_lhu", false,-1);
        tracep->declBit(c+127,"top idu inst_addi", false,-1);
        tracep->declBit(c+128,"top idu inst_slti", false,-1);
        tracep->declBit(c+129,"top idu inst_sltiu", false,-1);
        tracep->declBit(c+130,"top idu inst_xori", false,-1);
        tracep->declBit(c+131,"top idu inst_ori", false,-1);
        tracep->declBit(c+132,"top idu inst_andi", false,-1);
        tracep->declBit(c+133,"top idu inst_slli", false,-1);
        tracep->declBit(c+134,"top idu inst_srli", false,-1);
        tracep->declBit(c+135,"top idu inst_srai", false,-1);
        tracep->declBit(c+9,"top idu inst_ebreak", false,-1);
        tracep->declBit(c+136,"top idu inst_sb", false,-1);
        tracep->declBit(c+137,"top idu inst_sh", false,-1);
        tracep->declBit(c+138,"top idu inst_sw", false,-1);
        tracep->declBit(c+139,"top idu inst_sd", false,-1);
        tracep->declBit(c+140,"top idu inst_add", false,-1);
        tracep->declBit(c+141,"top idu inst_sub", false,-1);
        tracep->declBit(c+142,"top idu inst_sll", false,-1);
        tracep->declBit(c+143,"top idu inst_slt", false,-1);
        tracep->declBit(c+144,"top idu inst_sltu", false,-1);
        tracep->declBit(c+145,"top idu inst_xor", false,-1);
        tracep->declBit(c+146,"top idu inst_srl", false,-1);
        tracep->declBit(c+147,"top idu inst_sra", false,-1);
        tracep->declBit(c+148,"top idu inst_or", false,-1);
        tracep->declBit(c+149,"top idu inst_and", false,-1);
        tracep->declQuad(c+150,"top idu immI", false,-1, 63,0);
        tracep->declQuad(c+152,"top idu immU", false,-1, 63,0);
        tracep->declQuad(c+154,"top idu immS", false,-1, 63,0);
        tracep->declQuad(c+156,"top idu immJ", false,-1, 63,0);
        tracep->declQuad(c+158,"top idu immB", false,-1, 63,0);
        tracep->declBus(c+160,"top idu opcode", false,-1, 6,0);
        tracep->declBus(c+161,"top idu funct7", false,-1, 6,0);
        tracep->declBus(c+162,"top idu funct3", false,-1, 2,0);
        tracep->declBus(c+40,"top b_check_out b_check", false,-1, 5,0);
        tracep->declBus(c+25,"top b_check_out pc_sel", false,-1, 2,0);
        tracep->declQuad(c+92,"top b_check_out rs1_data", false,-1, 63,0);
        tracep->declQuad(c+94,"top b_check_out rs2_data", false,-1, 63,0);
        tracep->declBus(c+26,"top b_check_out pc_sel_out", false,-1, 2,0);
        tracep->declBit(c+163,"top b_check_out b_en", false,-1);
        tracep->declBit(c+304,"top b_check_out beq_check", false,-1);
        tracep->declBit(c+305,"top b_check_out bne_check", false,-1);
        tracep->declBit(c+164,"top b_check_out blt_check", false,-1);
        tracep->declBit(c+165,"top b_check_out bge_check", false,-1);
        tracep->declBit(c+166,"top b_check_out bltu_check", false,-1);
        tracep->declBit(c+167,"top b_check_out bgeu_check", false,-1);
        tracep->declBit(c+304,"top b_check_out data_cin", false,-1);
        tracep->declBit(c+167,"top b_check_out data_cout", false,-1);
        tracep->declQuad(c+92,"top b_check_out data_a", false,-1, 63,0);
        tracep->declQuad(c+168,"top b_check_out data_b", false,-1, 63,0);
        tracep->declQuad(c+170,"top b_check_out data_result", false,-1, 63,0);
        tracep->declBit(c+1,"top control_stall data_wen", false,-1);
        tracep->declBit(c+11,"top control_stall reg_wen", false,-1);
        tracep->declBit(c+4,"top control_stall stall", false,-1);
        tracep->declBit(c+2,"top control_stall data_wen_out", false,-1);
        tracep->declBit(c+3,"top control_stall reg_wen_out", false,-1);
        tracep->declQuad(c+285,"top common_reg data_rd", false,-1, 63,0);
        tracep->declBus(c+39,"top common_reg addr_rd", false,-1, 4,0);
        tracep->declBus(c+32,"top common_reg addr_rs1", false,-1, 4,0);
        tracep->declBus(c+33,"top common_reg addr_rs2", false,-1, 4,0);
        tracep->declBit(c+16,"top common_reg en", false,-1);
        tracep->declBit(c+283,"top common_reg clk", false,-1);
        tracep->declQuad(c+54,"top common_reg data_a0", false,-1, 63,0);
        tracep->declQuad(c+92,"top common_reg data_rs1", false,-1, 63,0);
        tracep->declQuad(c+94,"top common_reg data_rs2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+172+i*2,"top common_reg reg_com", true,(i+0), 63,0);}}
        tracep->declQuad(c+92,"top pc_add_choice in0", false,-1, 63,0);
        tracep->declQuad(c+104,"top pc_add_choice in1", false,-1, 63,0);
        tracep->declQuad(c+74,"top pc_add_choice in2", false,-1, 63,0);
        tracep->declQuad(c+70,"top pc_add_choice in3", false,-1, 63,0);
        tracep->declBus(c+31,"top pc_add_choice key", false,-1, 3,0);
        tracep->declQuad(c+52,"top pc_add_choice out", false,-1, 63,0);
        tracep->declQuad(c+84,"top pc_add pc_in", false,-1, 63,0);
        tracep->declQuad(c+52,"top pc_add src1_in", false,-1, 63,0);
        tracep->declQuad(c+50,"top pc_add imm_in", false,-1, 63,0);
        tracep->declQuad(c+96,"top pc_add cpu_dnpc_in1", false,-1, 63,0);
        tracep->declQuad(c+98,"top pc_add cpu_dnpc_in2", false,-1, 63,0);
        tracep->declBit(c+283,"top exe_reg clk", false,-1);
        tracep->declBit(c+284,"top exe_reg rst", false,-1);
        tracep->declQuad(c+84,"top exe_reg id_reg_pc", false,-1, 63,0);
        tracep->declBus(c+41,"top exe_reg exe_op_in", false,-1, 11,0);
        tracep->declBus(c+36,"top exe_reg exe_reg_rd_in", false,-1, 4,0);
        tracep->declQuad(c+92,"top exe_reg exe_reg_src1_in", false,-1, 63,0);
        tracep->declBus(c+17,"top exe_reg exe_reg_src1_sel_in", false,-1, 1,0);
        tracep->declQuad(c+94,"top exe_reg exe_reg_src2_in", false,-1, 63,0);
        tracep->declBit(c+2,"top exe_reg exe_reg_in7", false,-1);
        tracep->declBit(c+3,"top exe_reg exe_reg_in8", false,-1);
        tracep->declBus(c+23,"top exe_reg exe_reg_in9", false,-1, 1,0);
        tracep->declBus(c+21,"top exe_reg exe_op_in0", false,-1, 1,0);
        tracep->declQuad(c+50,"top exe_reg exe_op_in1", false,-1, 63,0);
        tracep->declBus(c+32,"top exe_reg exe_op_in2", false,-1, 4,0);
        tracep->declBus(c+33,"top exe_reg exe_op_in3", false,-1, 4,0);
        tracep->declBit(c+5,"top exe_reg exe_op_in4", false,-1);
        tracep->declQuad(c+82,"top exe_reg exe_reg_out0", false,-1, 63,0);
        tracep->declBus(c+43,"top exe_reg exe_reg_out1", false,-1, 11,0);
        tracep->declBus(c+38,"top exe_reg exe_reg_out2", false,-1, 4,0);
        tracep->declQuad(c+62,"top exe_reg exe_reg_out3", false,-1, 63,0);
        tracep->declBus(c+20,"top exe_reg exe_reg_out4", false,-1, 1,0);
        tracep->declQuad(c+64,"top exe_reg exe_reg_out5", false,-1, 63,0);
        tracep->declBit(c+14,"top exe_reg exe_reg_out7", false,-1);
        tracep->declBit(c+15,"top exe_reg exe_reg_out8", false,-1);
        tracep->declBus(c+24,"top exe_reg exe_reg_out9", false,-1, 1,0);
        tracep->declBus(c+22,"top exe_reg exe_reg_out10", false,-1, 1,0);
        tracep->declQuad(c+76,"top exe_reg exe_reg_out11", false,-1, 63,0);
        tracep->declBus(c+34,"top exe_reg exe_reg_out12", false,-1, 4,0);
        tracep->declBus(c+35,"top exe_reg exe_reg_out13", false,-1, 4,0);
        tracep->declBit(c+6,"top exe_reg exe_reg_out14", false,-1);
        tracep->declQuad(c+82,"top src1_sel_choice in0", false,-1, 63,0);
        tracep->declQuad(c+62,"top src1_sel_choice in1", false,-1, 63,0);
        tracep->declBus(c+20,"top src1_sel_choice key", false,-1, 1,0);
        tracep->declQuad(c+56,"top src1_sel_choice out", false,-1, 63,0);
        tracep->declQuad(c+76,"top src2_sel_choice in0", false,-1, 63,0);
        tracep->declQuad(c+64,"top src2_sel_choice in1", false,-1, 63,0);
        tracep->declBus(c+22,"top src2_sel_choice key", false,-1, 1,0);
        tracep->declQuad(c+58,"top src2_sel_choice out", false,-1, 63,0);
        tracep->declQuad(c+56,"top src1_sel_choice_out in0", false,-1, 63,0);
        tracep->declQuad(c+74,"top src1_sel_choice_out in1", false,-1, 63,0);
        tracep->declQuad(c+70,"top src1_sel_choice_out in2", false,-1, 63,0);
        tracep->declBus(c+27,"top src1_sel_choice_out key", false,-1, 2,0);
        tracep->declQuad(c+100,"top src1_sel_choice_out out", false,-1, 63,0);
        tracep->declQuad(c+58,"top src2_sel_choice_out in0", false,-1, 63,0);
        tracep->declQuad(c+74,"top src2_sel_choice_out in1", false,-1, 63,0);
        tracep->declQuad(c+70,"top src2_sel_choice_out in2", false,-1, 63,0);
        tracep->declBus(c+28,"top src2_sel_choice_out key", false,-1, 2,0);
        tracep->declQuad(c+102,"top src2_sel_choice_out out", false,-1, 63,0);
        tracep->declQuad(c+100,"top alu src1", false,-1, 63,0);
        tracep->declQuad(c+102,"top alu src2", false,-1, 63,0);
        tracep->declQuad(c+76,"top alu imm", false,-1, 63,0);
        tracep->declBus(c+43,"top alu op", false,-1, 11,0);
        tracep->declBit(c+14,"top alu s_check", false,-1);
        tracep->declQuad(c+104,"top alu data_rd", false,-1, 63,0);
        tracep->declBus(c+46,"top alu ram_raddr", false,-1, 31,0);
        tracep->declBit(c+236,"top alu op_add", false,-1);
        tracep->declBit(c+237,"top alu op_sub", false,-1);
        tracep->declBit(c+238,"top alu op_slt", false,-1);
        tracep->declBit(c+239,"top alu op_sltu", false,-1);
        tracep->declBit(c+240,"top alu op_and", false,-1);
        tracep->declBit(c+241,"top alu op_or", false,-1);
        tracep->declBit(c+242,"top alu op_xor", false,-1);
        tracep->declBit(c+243,"top alu op_sll", false,-1);
        tracep->declBit(c+244,"top alu op_srl", false,-1);
        tracep->declBit(c+245,"top alu op_sra", false,-1);
        tracep->declBit(c+246,"top alu op_lui", false,-1);
        tracep->declBit(c+247,"top alu op_jal", false,-1);
        tracep->declQuad(c+248,"top alu add_sub_result", false,-1, 63,0);
        tracep->declQuad(c+250,"top alu slt_result", false,-1, 63,0);
        tracep->declQuad(c+252,"top alu s_result", false,-1, 63,0);
        tracep->declQuad(c+254,"top alu sltu_result", false,-1, 63,0);
        tracep->declQuad(c+256,"top alu and_result", false,-1, 63,0);
        tracep->declQuad(c+258,"top alu or_result", false,-1, 63,0);
        tracep->declQuad(c+260,"top alu xor_result", false,-1, 63,0);
        tracep->declQuad(c+262,"top alu sll_result", false,-1, 63,0);
        tracep->declQuad(c+264,"top alu srl_result", false,-1, 63,0);
        tracep->declQuad(c+266,"top alu sra_result", false,-1, 63,0);
        tracep->declQuad(c+102,"top alu lui_result", false,-1, 63,0);
        tracep->declQuad(c+268,"top alu jal_result", false,-1, 63,0);
        tracep->declQuad(c+100,"top alu data_a", false,-1, 63,0);
        tracep->declQuad(c+270,"top alu data_b", false,-1, 63,0);
        tracep->declQuad(c+272,"top alu data_result", false,-1, 63,0);
        tracep->declQuad(c+268,"top alu data_pc", false,-1, 63,0);
        tracep->declBit(c+274,"top alu data_cin", false,-1);
        tracep->declBit(c+275,"top alu data_cout", false,-1);
        tracep->declBit(c+283,"top mem_reg clk", false,-1);
        tracep->declBit(c+284,"top mem_reg rst", false,-1);
        tracep->declBus(c+38,"top mem_reg mem_reg_in0", false,-1, 4,0);
        tracep->declBus(c+287,"top mem_reg mem_reg_in1", false,-1, 2,0);
        tracep->declBit(c+14,"top mem_reg mem_reg_in2", false,-1);
        tracep->declBit(c+15,"top mem_reg mem_reg_in3", false,-1);
        tracep->declBus(c+24,"top mem_reg mem_reg_in4", false,-1, 1,0);
        tracep->declQuad(c+104,"top mem_reg mem_reg_in7", false,-1, 63,0);
        tracep->declBus(c+46,"top mem_reg mem_reg_in8", false,-1, 31,0);
        tracep->declQuad(c+58,"top mem_reg mem_reg_in9", false,-1, 63,0);
        tracep->declQuad(c+82,"top mem_reg mem_reg_in10", false,-1, 63,0);
        tracep->declBit(c+6,"top mem_reg mem_reg_in11", false,-1);
        tracep->declBus(c+37,"top mem_reg mem_reg_out0", false,-1, 4,0);
        tracep->declBus(c+30,"top mem_reg mem_reg_out1", false,-1, 2,0);
        tracep->declBit(c+13,"top mem_reg mem_reg_out2", false,-1);
        tracep->declBit(c+12,"top mem_reg mem_reg_out3", false,-1);
        tracep->declBus(c+19,"top mem_reg mem_reg_out4", false,-1, 1,0);
        tracep->declQuad(c+74,"top mem_reg mem_reg_out7", false,-1, 63,0);
        tracep->declBus(c+47,"top mem_reg mem_reg_out8", false,-1, 31,0);
        tracep->declQuad(c+72,"top mem_reg mem_reg_out9", false,-1, 63,0);
        tracep->declQuad(c+66,"top mem_reg mem_reg_out10", false,-1, 63,0);
        tracep->declBit(c+7,"top mem_reg mem_reg_out11", false,-1);
        tracep->declQuad(c+72,"top data_ram wdata", false,-1, 63,0);
        tracep->declBus(c+47,"top data_ram ram_addr", false,-1, 31,0);
        tracep->declBit(c+13,"top data_ram data_wen", false,-1);
        tracep->declBit(c+7,"top data_ram data_ren", false,-1);
        tracep->declBit(c+283,"top data_ram clk", false,-1);
        tracep->declQuad(c+90,"top data_ram rdata", false,-1, 63,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+276+i*2,"top data_ram ram", true,(i+-1), 63,0);}}
        tracep->declBit(c+283,"top wb_reg clk", false,-1);
        tracep->declBit(c+284,"top wb_reg rst", false,-1);
        tracep->declQuad(c+66,"top wb_reg wb_reg_in0", false,-1, 63,0);
        tracep->declBus(c+30,"top wb_reg wb_reg_in1", false,-1, 2,0);
        tracep->declBit(c+12,"top wb_reg wb_reg_in2", false,-1);
        tracep->declBus(c+19,"top wb_reg wb_reg_in3", false,-1, 1,0);
        tracep->declQuad(c+74,"top wb_reg wb_reg_in4", false,-1, 63,0);
        tracep->declQuad(c+90,"top wb_reg wb_reg_in5", false,-1, 63,0);
        tracep->declBus(c+37,"top wb_reg wb_reg_in6", false,-1, 4,0);
        tracep->declQuad(c+80,"top wb_reg wb_reg_out0", false,-1, 63,0);
        tracep->declBus(c+29,"top wb_reg wb_reg_out1", false,-1, 2,0);
        tracep->declBit(c+16,"top wb_reg wb_reg_out2", false,-1);
        tracep->declBus(c+18,"top wb_reg wb_reg_out3", false,-1, 1,0);
        tracep->declQuad(c+70,"top wb_reg wb_reg_out4", false,-1, 63,0);
        tracep->declQuad(c+68,"top wb_reg wb_reg_out5", false,-1, 63,0);
        tracep->declBus(c+39,"top wb_reg wb_reg_out6", false,-1, 4,0);
        tracep->declQuad(c+70,"top data_rd_choice in0", false,-1, 63,0);
        tracep->declQuad(c+68,"top data_rd_choice in1", false,-1, 63,0);
        tracep->declBus(c+18,"top data_rd_choice key", false,-1, 1,0);
        tracep->declQuad(c+285,"top data_rd_choice out", false,-1, 63,0);
        tracep->declBit(c+283,"top ebreak_list clk", false,-1);
        tracep->declBit(c+284,"top ebreak_list rst", false,-1);
        tracep->declBit(c+9,"top ebreak_list ebreak", false,-1);
        tracep->declBus(c+41,"top ebreak_list op", false,-1, 11,0);
        tracep->declBus(c+48,"top ebreak_list inst", false,-1, 31,0);
        tracep->declBit(c+10,"top ebreak_list ebreak_out", false,-1);
        tracep->declBus(c+42,"top ebreak_list op_out", false,-1, 11,0);
        tracep->declBus(c+49,"top ebreak_list inst_out", false,-1, 31,0);
        tracep->declBus(c+280,"top ebreak_list op_1", false,-1, 11,0);
        tracep->declBit(c+281,"top ebreak_list ebreak_1", false,-1);
        tracep->declBus(c+282,"top ebreak_list inst_1", false,-1, 31,0);
    }
}

void VYSYX_22040125_B_CHECK___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void VYSYX_22040125_B_CHECK___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void VYSYX_22040125_B_CHECK___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void VYSYX_22040125_B_CHECK___024root__traceRegister(VYSYX_22040125_B_CHECK___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VYSYX_22040125_B_CHECK__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&VYSYX_22040125_B_CHECK___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&VYSYX_22040125_B_CHECK___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&VYSYX_22040125_B_CHECK___024root__traceCleanup, vlSelf);
    }
}

void VYSYX_22040125_B_CHECK___024root__traceFullSub0(VYSYX_22040125_B_CHECK___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void VYSYX_22040125_B_CHECK___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    VYSYX_22040125_B_CHECK___024root* const __restrict vlSelf = static_cast<VYSYX_22040125_B_CHECK___024root*>(voidSelf);
    VYSYX_22040125_B_CHECK__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        VYSYX_22040125_B_CHECK___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void VYSYX_22040125_B_CHECK___024root__traceFullSub0(VYSYX_22040125_B_CHECK___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VYSYX_22040125_B_CHECK__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp33;
    VlWide<3>/*95:0*/ __Vtemp34;
    VlWide<3>/*95:0*/ __Vtemp35;
    VlWide<3>/*95:0*/ __Vtemp36;
    VlWide<3>/*95:0*/ __Vtemp37;
    VlWide<3>/*95:0*/ __Vtemp40;
    VlWide<3>/*95:0*/ __Vtemp41;
    VlWide<3>/*95:0*/ __Vtemp42;
    VlWide<3>/*95:0*/ __Vtemp43;
    VlWide<3>/*95:0*/ __Vtemp44;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(((0x23U == (0x7fU & vlSelf->top__DOT__inst_id))
                                  ? 1U : 0U)));
        tracep->fullBit(oldp+2,(((IData)(vlSelf->top__DOT__stall_id)
                                  ? 0U : ((0x23U == 
                                           (0x7fU & vlSelf->top__DOT__inst_id))
                                           ? 1U : 0U))));
        tracep->fullBit(oldp+3,(((IData)(vlSelf->top__DOT__stall_id)
                                  ? 0U : (((((0x33U 
                                              == (0x7fU 
                                                  & vlSelf->top__DOT__inst_id)) 
                                             | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_I)) 
                                            | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_U)) 
                                           | (0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->top__DOT__inst_id)))
                                           ? 1U : 0U))));
        tracep->fullBit(oldp+4,(vlSelf->top__DOT__stall_id));
        tracep->fullBit(oldp+5,((((((((IData)(vlSelf->top__DOT__idu__DOT__inst_lb) 
                                      | (IData)(vlSelf->top__DOT__idu__DOT__inst_lh)) 
                                     | (IData)(vlSelf->top__DOT__idu__DOT__inst_lw)) 
                                    | (IData)(vlSelf->top__DOT__idu__DOT__inst_ld)) 
                                   | (IData)(vlSelf->top__DOT__idu__DOT__inst_lbu)) 
                                  | (IData)(vlSelf->top__DOT__idu__DOT__inst_lhu))
                                  ? 1U : 0U)));
        tracep->fullBit(oldp+6,(vlSelf->top__DOT__exe_reg_data_ren));
        tracep->fullBit(oldp+7,(vlSelf->top__DOT__mem_reg_data_ren));
        tracep->fullBit(oldp+8,(((1U == (IData)(vlSelf->top__DOT__pc_sel_out))
                                  ? 0U : 1U)));
        tracep->fullBit(oldp+9,((0x100073U == vlSelf->top__DOT__inst_id)));
        tracep->fullBit(oldp+10,(vlSelf->top__DOT__ebreak_out));
        tracep->fullBit(oldp+11,((((((0x33U == (0x7fU 
                                                & vlSelf->top__DOT__inst_id)) 
                                     | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_I)) 
                                    | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_U)) 
                                   | (0x6fU == (0x7fU 
                                                & vlSelf->top__DOT__inst_id)))
                                   ? 1U : 0U)));
        tracep->fullBit(oldp+12,(vlSelf->top__DOT__mem_reg_reg_wen));
        tracep->fullBit(oldp+13,(vlSelf->top__DOT__mem_reg_data_wen));
        tracep->fullBit(oldp+14,(vlSelf->top__DOT__exe_reg_data_wen));
        tracep->fullBit(oldp+15,(vlSelf->top__DOT__exe_reg_reg_wen));
        tracep->fullBit(oldp+16,(vlSelf->top__DOT__wb_reg_reg_wen));
        tracep->fullCData(oldp+17,((((0x6fU == (0x7fU 
                                                & vlSelf->top__DOT__inst_id)) 
                                     | (0x17U == (0x7fU 
                                                  & vlSelf->top__DOT__inst_id)))
                                     ? 1U : 2U)),2);
        tracep->fullCData(oldp+18,(vlSelf->top__DOT__wb_reg_load_sel),2);
        tracep->fullCData(oldp+19,(vlSelf->top__DOT__mem_reg_load_sel),2);
        tracep->fullCData(oldp+20,(vlSelf->top__DOT__exe_reg_src1_sel),2);
        tracep->fullCData(oldp+21,(((((0x6fU == (0x7fU 
                                                 & vlSelf->top__DOT__inst_id)) 
                                      | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_U)) 
                                     | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_I))
                                     ? 1U : 2U)),2);
        tracep->fullCData(oldp+22,(vlSelf->top__DOT__exe_reg_src2_sel),2);
        tracep->fullCData(oldp+23,((((((((IData)(vlSelf->top__DOT__idu__DOT__inst_lb) 
                                         | (IData)(vlSelf->top__DOT__idu__DOT__inst_lh)) 
                                        | (IData)(vlSelf->top__DOT__idu__DOT__inst_lw)) 
                                       | (IData)(vlSelf->top__DOT__idu__DOT__inst_ld)) 
                                      | (IData)(vlSelf->top__DOT__idu__DOT__inst_lbu)) 
                                     | (IData)(vlSelf->top__DOT__idu__DOT__inst_lhu))
                                     ? 2U : 1U)),2);
        tracep->fullCData(oldp+24,(vlSelf->top__DOT__exe_reg_load_sel),2);
        tracep->fullCData(oldp+25,(((IData)(vlSelf->top__DOT__idu__DOT__inst_jalr)
                                     ? 4U : ((0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->top__DOT__inst_id))
                                              ? 2U : 1U))),3);
        tracep->fullCData(oldp+26,(vlSelf->top__DOT__pc_sel_out),3);
        tracep->fullCData(oldp+27,(vlSelf->top__DOT__src1_sel_plus),3);
        tracep->fullCData(oldp+28,(vlSelf->top__DOT__src2_sel_plus),3);
        tracep->fullCData(oldp+29,(vlSelf->top__DOT__wb_reg_pc_sel),3);
        tracep->fullCData(oldp+30,(vlSelf->top__DOT__mem_reg_pc_sel),3);
        tracep->fullCData(oldp+31,(vlSelf->top__DOT__pc_add_rs1_sel),4);
        tracep->fullCData(oldp+32,(vlSelf->top__DOT__rs1),5);
        tracep->fullCData(oldp+33,((0x1fU & (vlSelf->top__DOT__inst_id 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+34,(vlSelf->top__DOT__exe_reg_rs1),5);
        tracep->fullCData(oldp+35,(vlSelf->top__DOT__exe_reg_rs2),5);
        tracep->fullCData(oldp+36,((0x1fU & (vlSelf->top__DOT__inst_id 
                                             >> 7U))),5);
        tracep->fullCData(oldp+37,(vlSelf->top__DOT__mem_reg_rd),5);
        tracep->fullCData(oldp+38,(vlSelf->top__DOT__exe_reg_rd),5);
        tracep->fullCData(oldp+39,(vlSelf->top__DOT__wb_reg_rd),5);
        tracep->fullCData(oldp+40,(vlSelf->top__DOT__b_check),6);
        tracep->fullSData(oldp+41,(vlSelf->top__DOT__op),12);
        tracep->fullSData(oldp+42,(vlSelf->top__DOT__op_out),12);
        tracep->fullSData(oldp+43,(vlSelf->top__DOT__exe_reg_op),12);
        tracep->fullSData(oldp+44,((0xffffU & (IData)(
                                                      ((vlSelf->top__DOT__cpu_pc 
                                                        - 0x80000000ULL) 
                                                       >> 2U)))),16);
        tracep->fullIData(oldp+45,(vlSelf->top__DOT__inst),32);
        tracep->fullIData(oldp+46,((IData)(vlSelf->top__DOT__alu__DOT__add_sub_result)),32);
        tracep->fullIData(oldp+47,(vlSelf->top__DOT__mem_reg_ram_addr),32);
        tracep->fullIData(oldp+48,(vlSelf->top__DOT__inst_id),32);
        tracep->fullIData(oldp+49,(vlSelf->top__DOT__inst_out),32);
        tracep->fullQData(oldp+50,(vlSelf->top__DOT__imm),64);
        tracep->fullQData(oldp+52,(((1U == (IData)(vlSelf->top__DOT__pc_add_rs1_sel))
                                     ? vlSelf->top__DOT__src1_rs1
                                     : ((2U == (IData)(vlSelf->top__DOT__pc_add_rs1_sel))
                                         ? vlSelf->top__DOT__data_rd_in
                                         : ((4U == (IData)(vlSelf->top__DOT__pc_add_rs1_sel))
                                             ? vlSelf->top__DOT__mem_reg_data_rd_in
                                             : vlSelf->top__DOT__wb_reg_data_rd_in)))),64);
        tracep->fullQData(oldp+54,(vlSelf->top__DOT__common_reg__DOT__reg_com
                                   [0xaU]),64);
        tracep->fullQData(oldp+56,(((1U == (IData)(vlSelf->top__DOT__exe_reg_src1_sel))
                                     ? vlSelf->top__DOT__exe_reg_pc
                                     : vlSelf->top__DOT__exe_reg_src1_rs1)),64);
        tracep->fullQData(oldp+58,(vlSelf->top__DOT__one_src2),64);
        tracep->fullQData(oldp+60,(vlSelf->top__DOT__if_pc),64);
        tracep->fullQData(oldp+62,(vlSelf->top__DOT__exe_reg_src1_rs1),64);
        tracep->fullQData(oldp+64,(vlSelf->top__DOT__exe_reg_src2_rs2),64);
        tracep->fullQData(oldp+66,(vlSelf->top__DOT__mem_reg_pc),64);
        tracep->fullQData(oldp+68,(vlSelf->top__DOT__wb_reg_rdata),64);
        tracep->fullQData(oldp+70,(vlSelf->top__DOT__wb_reg_data_rd_in),64);
        tracep->fullQData(oldp+72,(vlSelf->top__DOT__mem_reg_src2_rs2),64);
        tracep->fullQData(oldp+74,(vlSelf->top__DOT__mem_reg_data_rd_in),64);
        tracep->fullQData(oldp+76,(vlSelf->top__DOT__exe_reg_imm),64);
        tracep->fullQData(oldp+78,(vlSelf->top__DOT__cpu_pc),64);
        tracep->fullQData(oldp+80,(vlSelf->top__DOT__wb_reg_pc),64);
        tracep->fullQData(oldp+82,(vlSelf->top__DOT__exe_reg_pc),64);
        tracep->fullQData(oldp+84,(vlSelf->top__DOT__id_reg_pc),64);
        tracep->fullQData(oldp+86,(((1U == (IData)(vlSelf->top__DOT__pc_sel_out))
                                     ? (4ULL + vlSelf->top__DOT__cpu_pc)
                                     : ((2U == (IData)(vlSelf->top__DOT__pc_sel_out))
                                         ? (vlSelf->top__DOT__id_reg_pc 
                                            + vlSelf->top__DOT__imm)
                                         : (0xfffffffffffffffeULL 
                                            & (((1U 
                                                 == (IData)(vlSelf->top__DOT__pc_add_rs1_sel))
                                                 ? vlSelf->top__DOT__src1_rs1
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->top__DOT__pc_add_rs1_sel))
                                                  ? vlSelf->top__DOT__data_rd_in
                                                  : 
                                                 ((4U 
                                                   == (IData)(vlSelf->top__DOT__pc_add_rs1_sel))
                                                   ? vlSelf->top__DOT__mem_reg_data_rd_in
                                                   : vlSelf->top__DOT__wb_reg_data_rd_in))) 
                                               + vlSelf->top__DOT__imm))))),64);
        tracep->fullQData(oldp+88,((4ULL + vlSelf->top__DOT__cpu_pc)),64);
        tracep->fullQData(oldp+90,(vlSelf->top__DOT__rdata),64);
        tracep->fullQData(oldp+92,(vlSelf->top__DOT__src1_rs1),64);
        tracep->fullQData(oldp+94,(vlSelf->top__DOT__src2_rs2),64);
        tracep->fullQData(oldp+96,((vlSelf->top__DOT__id_reg_pc 
                                    + vlSelf->top__DOT__imm)),64);
        tracep->fullQData(oldp+98,((0xfffffffffffffffeULL 
                                    & (((1U == (IData)(vlSelf->top__DOT__pc_add_rs1_sel))
                                         ? vlSelf->top__DOT__src1_rs1
                                         : ((2U == (IData)(vlSelf->top__DOT__pc_add_rs1_sel))
                                             ? vlSelf->top__DOT__data_rd_in
                                             : ((4U 
                                                 == (IData)(vlSelf->top__DOT__pc_add_rs1_sel))
                                                 ? vlSelf->top__DOT__mem_reg_data_rd_in
                                                 : vlSelf->top__DOT__wb_reg_data_rd_in))) 
                                       + vlSelf->top__DOT__imm))),64);
        tracep->fullQData(oldp+100,(vlSelf->top__DOT__src1),64);
        tracep->fullQData(oldp+102,(vlSelf->top__DOT__src2),64);
        tracep->fullQData(oldp+104,(vlSelf->top__DOT__data_rd_in),64);
        tracep->fullBit(oldp+106,(vlSelf->top__DOT__idu__DOT__TYPE_I));
        tracep->fullBit(oldp+107,(vlSelf->top__DOT__idu__DOT__TYPE_U));
        tracep->fullBit(oldp+108,((0x23U == (0x7fU 
                                             & vlSelf->top__DOT__inst_id))));
        tracep->fullBit(oldp+109,((0x6fU == (0x7fU 
                                             & vlSelf->top__DOT__inst_id))));
        tracep->fullBit(oldp+110,((0x63U == (0x7fU 
                                             & vlSelf->top__DOT__inst_id))));
        tracep->fullBit(oldp+111,((0x33U == (0x7fU 
                                             & vlSelf->top__DOT__inst_id))));
        tracep->fullBit(oldp+112,((0x37U == (0x7fU 
                                             & vlSelf->top__DOT__inst_id))));
        tracep->fullBit(oldp+113,((0x17U == (0x7fU 
                                             & vlSelf->top__DOT__inst_id))));
        tracep->fullBit(oldp+114,((IData)((0x63U == 
                                           (0x707fU 
                                            & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+115,((IData)((0x1063U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+116,((IData)((0x4063U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+117,((IData)((0x5063U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+118,((IData)((0x6063U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+119,((IData)((0x7063U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+120,(vlSelf->top__DOT__idu__DOT__inst_jalr));
        tracep->fullBit(oldp+121,(vlSelf->top__DOT__idu__DOT__inst_lb));
        tracep->fullBit(oldp+122,(vlSelf->top__DOT__idu__DOT__inst_lh));
        tracep->fullBit(oldp+123,(vlSelf->top__DOT__idu__DOT__inst_lw));
        tracep->fullBit(oldp+124,(vlSelf->top__DOT__idu__DOT__inst_ld));
        tracep->fullBit(oldp+125,(vlSelf->top__DOT__idu__DOT__inst_lbu));
        tracep->fullBit(oldp+126,(vlSelf->top__DOT__idu__DOT__inst_lhu));
        tracep->fullBit(oldp+127,((IData)((0x13U == 
                                           (0x707fU 
                                            & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+128,((IData)((0x2013U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+129,((IData)((0x3013U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+130,((IData)((0x4013U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+131,((IData)((0x6013U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+132,((IData)((0x7013U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+133,(((IData)((0x1013U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+134,(((IData)((0x5013U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+135,(((IData)((0x5013U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__inst_id))) 
                                   & (0x20U == (vlSelf->top__DOT__inst_id 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+136,((IData)((0x23U == 
                                           (0x707fU 
                                            & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+137,((IData)((0x1023U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+138,((IData)((0x2023U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+139,((IData)((0x3023U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+140,(((IData)((0x33U == 
                                            (0x707fU 
                                             & vlSelf->top__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+141,(((IData)((0x33U == 
                                            (0x707fU 
                                             & vlSelf->top__DOT__inst_id))) 
                                   & (0x20U == (vlSelf->top__DOT__inst_id 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+142,(((IData)((0x1033U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+143,(((IData)((0x2033U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+144,(((IData)((0x3033U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+145,(((IData)((0x4033U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+146,(((IData)((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+147,(((IData)((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__inst_id))) 
                                   & (0x20U == (vlSelf->top__DOT__inst_id 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+148,(((IData)((0x6033U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+149,(((IData)((0x7033U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullQData(oldp+150,((((- (QData)((IData)(
                                                         (vlSelf->top__DOT__inst_id 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 (vlSelf->top__DOT__inst_id 
                                                                  >> 0x14U))))),64);
        tracep->fullQData(oldp+152,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->top__DOT__inst_id 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (0xfffff000U 
                                                                   & vlSelf->top__DOT__inst_id))))),64);
        tracep->fullQData(oldp+154,((((- (QData)((IData)(
                                                         (vlSelf->top__DOT__inst_id 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 ((0xfe0U 
                                                                   & (vlSelf->top__DOT__inst_id 
                                                                      >> 0x14U)) 
                                                                  | (0x1fU 
                                                                     & (vlSelf->top__DOT__inst_id 
                                                                        >> 7U))))))),64);
        tracep->fullQData(oldp+156,((((- (QData)((IData)(
                                                         (vlSelf->top__DOT__inst_id 
                                                          >> 0x1fU)))) 
                                      << 0x15U) | (QData)((IData)(
                                                                  ((0x100000U 
                                                                    & (vlSelf->top__DOT__inst_id 
                                                                       >> 0xbU)) 
                                                                   | ((0xff000U 
                                                                       & vlSelf->top__DOT__inst_id) 
                                                                      | ((0x800U 
                                                                          & (vlSelf->top__DOT__inst_id 
                                                                             >> 9U)) 
                                                                         | (0x7feU 
                                                                            & (vlSelf->top__DOT__inst_id 
                                                                               >> 0x14U))))))))),64);
        tracep->fullQData(oldp+158,((((- (QData)((IData)(
                                                         (vlSelf->top__DOT__inst_id 
                                                          >> 0x1fU)))) 
                                      << 0xdU) | (QData)((IData)(
                                                                 ((0x1000U 
                                                                   & (vlSelf->top__DOT__inst_id 
                                                                      >> 0x13U)) 
                                                                  | ((0x800U 
                                                                      & (vlSelf->top__DOT__inst_id 
                                                                         << 4U)) 
                                                                     | ((0x7e0U 
                                                                         & (vlSelf->top__DOT__inst_id 
                                                                            >> 0x14U)) 
                                                                        | (0x1eU 
                                                                           & (vlSelf->top__DOT__inst_id 
                                                                              >> 7U))))))))),64);
        tracep->fullCData(oldp+160,((0x7fU & vlSelf->top__DOT__inst_id)),7);
        tracep->fullCData(oldp+161,((vlSelf->top__DOT__inst_id 
                                     >> 0x19U)),7);
        tracep->fullCData(oldp+162,((7U & (vlSelf->top__DOT__inst_id 
                                           >> 0xcU))),3);
        tracep->fullBit(oldp+163,((1U & ((((((IData)(vlSelf->top__DOT__b_check) 
                                             >> 5U) 
                                            | (((IData)(vlSelf->top__DOT__b_check) 
                                                >> 3U) 
                                               & (IData)(vlSelf->top__DOT__b_check_out__DOT__blt_check))) 
                                           | (((IData)(vlSelf->top__DOT__b_check) 
                                               >> 2U) 
                                              & (~ (IData)(vlSelf->top__DOT__b_check_out__DOT__blt_check)))) 
                                          | (((IData)(vlSelf->top__DOT__b_check) 
                                              >> 1U) 
                                             & (~ (IData)(vlSelf->top__DOT__b_check_out__DOT__data_cout)))) 
                                         | (((IData)(vlSelf->top__DOT__b_check) 
                                             >> 1U) 
                                            & (IData)(vlSelf->top__DOT__b_check_out__DOT__data_cout))))));
        tracep->fullBit(oldp+164,(vlSelf->top__DOT__b_check_out__DOT__blt_check));
        tracep->fullBit(oldp+165,((1U & (~ (IData)(vlSelf->top__DOT__b_check_out__DOT__blt_check)))));
        tracep->fullBit(oldp+166,((1U & (~ (IData)(vlSelf->top__DOT__b_check_out__DOT__data_cout)))));
        tracep->fullBit(oldp+167,(vlSelf->top__DOT__b_check_out__DOT__data_cout));
        tracep->fullQData(oldp+168,((~ vlSelf->top__DOT__src2_rs2)),64);
        tracep->fullQData(oldp+170,((1ULL + (vlSelf->top__DOT__src1_rs1 
                                             + (~ vlSelf->top__DOT__src2_rs2)))),64);
        tracep->fullQData(oldp+172,(vlSelf->top__DOT__common_reg__DOT__reg_com[0]),64);
        tracep->fullQData(oldp+174,(vlSelf->top__DOT__common_reg__DOT__reg_com[1]),64);
        tracep->fullQData(oldp+176,(vlSelf->top__DOT__common_reg__DOT__reg_com[2]),64);
        tracep->fullQData(oldp+178,(vlSelf->top__DOT__common_reg__DOT__reg_com[3]),64);
        tracep->fullQData(oldp+180,(vlSelf->top__DOT__common_reg__DOT__reg_com[4]),64);
        tracep->fullQData(oldp+182,(vlSelf->top__DOT__common_reg__DOT__reg_com[5]),64);
        tracep->fullQData(oldp+184,(vlSelf->top__DOT__common_reg__DOT__reg_com[6]),64);
        tracep->fullQData(oldp+186,(vlSelf->top__DOT__common_reg__DOT__reg_com[7]),64);
        tracep->fullQData(oldp+188,(vlSelf->top__DOT__common_reg__DOT__reg_com[8]),64);
        tracep->fullQData(oldp+190,(vlSelf->top__DOT__common_reg__DOT__reg_com[9]),64);
        tracep->fullQData(oldp+192,(vlSelf->top__DOT__common_reg__DOT__reg_com[10]),64);
        tracep->fullQData(oldp+194,(vlSelf->top__DOT__common_reg__DOT__reg_com[11]),64);
        tracep->fullQData(oldp+196,(vlSelf->top__DOT__common_reg__DOT__reg_com[12]),64);
        tracep->fullQData(oldp+198,(vlSelf->top__DOT__common_reg__DOT__reg_com[13]),64);
        tracep->fullQData(oldp+200,(vlSelf->top__DOT__common_reg__DOT__reg_com[14]),64);
        tracep->fullQData(oldp+202,(vlSelf->top__DOT__common_reg__DOT__reg_com[15]),64);
        tracep->fullQData(oldp+204,(vlSelf->top__DOT__common_reg__DOT__reg_com[16]),64);
        tracep->fullQData(oldp+206,(vlSelf->top__DOT__common_reg__DOT__reg_com[17]),64);
        tracep->fullQData(oldp+208,(vlSelf->top__DOT__common_reg__DOT__reg_com[18]),64);
        tracep->fullQData(oldp+210,(vlSelf->top__DOT__common_reg__DOT__reg_com[19]),64);
        tracep->fullQData(oldp+212,(vlSelf->top__DOT__common_reg__DOT__reg_com[20]),64);
        tracep->fullQData(oldp+214,(vlSelf->top__DOT__common_reg__DOT__reg_com[21]),64);
        tracep->fullQData(oldp+216,(vlSelf->top__DOT__common_reg__DOT__reg_com[22]),64);
        tracep->fullQData(oldp+218,(vlSelf->top__DOT__common_reg__DOT__reg_com[23]),64);
        tracep->fullQData(oldp+220,(vlSelf->top__DOT__common_reg__DOT__reg_com[24]),64);
        tracep->fullQData(oldp+222,(vlSelf->top__DOT__common_reg__DOT__reg_com[25]),64);
        tracep->fullQData(oldp+224,(vlSelf->top__DOT__common_reg__DOT__reg_com[26]),64);
        tracep->fullQData(oldp+226,(vlSelf->top__DOT__common_reg__DOT__reg_com[27]),64);
        tracep->fullQData(oldp+228,(vlSelf->top__DOT__common_reg__DOT__reg_com[28]),64);
        tracep->fullQData(oldp+230,(vlSelf->top__DOT__common_reg__DOT__reg_com[29]),64);
        tracep->fullQData(oldp+232,(vlSelf->top__DOT__common_reg__DOT__reg_com[30]),64);
        tracep->fullQData(oldp+234,(vlSelf->top__DOT__common_reg__DOT__reg_com[31]),64);
        tracep->fullBit(oldp+236,((1U & (IData)(vlSelf->top__DOT__exe_reg_op))));
        tracep->fullBit(oldp+237,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 1U))));
        tracep->fullBit(oldp+238,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 2U))));
        tracep->fullBit(oldp+239,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 3U))));
        tracep->fullBit(oldp+240,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 4U))));
        tracep->fullBit(oldp+241,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 5U))));
        tracep->fullBit(oldp+242,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 6U))));
        tracep->fullBit(oldp+243,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 7U))));
        tracep->fullBit(oldp+244,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 8U))));
        tracep->fullBit(oldp+245,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 9U))));
        tracep->fullBit(oldp+246,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 0xaU))));
        tracep->fullBit(oldp+247,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 0xbU))));
        tracep->fullQData(oldp+248,(vlSelf->top__DOT__alu__DOT__add_sub_result),64);
        tracep->fullQData(oldp+250,((QData)((IData)(
                                                    (1U 
                                                     & (((IData)(
                                                                 (vlSelf->top__DOT__src1 
                                                                  >> 0x3fU)) 
                                                         & (~ (IData)(
                                                                      (vlSelf->top__DOT__src2 
                                                                       >> 0x3fU)))) 
                                                        | ((~ 
                                                            ((IData)(
                                                                     (vlSelf->top__DOT__src1 
                                                                      >> 0x3fU)) 
                                                             ^ (IData)(
                                                                       (vlSelf->top__DOT__src2 
                                                                        >> 0x3fU)))) 
                                                           & (IData)(
                                                                     (vlSelf->top__DOT__alu__DOT__data_result 
                                                                      >> 0x3fU)))))))),64);
        tracep->fullQData(oldp+252,((vlSelf->top__DOT__src1 
                                     + vlSelf->top__DOT__exe_reg_imm)),64);
        VL_EXTEND_WQ(65,64, __Vtemp33, vlSelf->top__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp34, vlSelf->top__DOT__alu__DOT__data_b);
        VL_ADD_W(3, __Vtemp35, __Vtemp33, __Vtemp34);
        VL_EXTEND_WI(65,1, __Vtemp36, (IData)(vlSelf->top__DOT__alu__DOT__data_cin));
        VL_ADD_W(3, __Vtemp37, __Vtemp35, __Vtemp36);
        tracep->fullQData(oldp+254,((QData)((IData)(
                                                    (1U 
                                                     & (~ 
                                                        (1U 
                                                         & __Vtemp37[2U])))))),64);
        tracep->fullQData(oldp+256,((vlSelf->top__DOT__src1 
                                     & vlSelf->top__DOT__src2)),64);
        tracep->fullQData(oldp+258,((vlSelf->top__DOT__src1 
                                     | vlSelf->top__DOT__src2)),64);
        tracep->fullQData(oldp+260,((vlSelf->top__DOT__src1 
                                     ^ vlSelf->top__DOT__src2)),64);
        tracep->fullQData(oldp+262,((vlSelf->top__DOT__src1 
                                     << (0x3fU & (IData)(vlSelf->top__DOT__src2)))),64);
        tracep->fullQData(oldp+264,((vlSelf->top__DOT__src1 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__src2)))),64);
        tracep->fullQData(oldp+266,((vlSelf->top__DOT__src1 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__src2)))),64);
        tracep->fullQData(oldp+268,((4ULL + vlSelf->top__DOT__src1)),64);
        tracep->fullQData(oldp+270,(vlSelf->top__DOT__alu__DOT__data_b),64);
        tracep->fullQData(oldp+272,(vlSelf->top__DOT__alu__DOT__data_result),64);
        tracep->fullBit(oldp+274,(vlSelf->top__DOT__alu__DOT__data_cin));
        VL_EXTEND_WQ(65,64, __Vtemp40, vlSelf->top__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp41, vlSelf->top__DOT__alu__DOT__data_b);
        VL_ADD_W(3, __Vtemp42, __Vtemp40, __Vtemp41);
        VL_EXTEND_WI(65,1, __Vtemp43, (IData)(vlSelf->top__DOT__alu__DOT__data_cin));
        VL_ADD_W(3, __Vtemp44, __Vtemp42, __Vtemp43);
        tracep->fullBit(oldp+275,((1U & __Vtemp44[2U])));
        tracep->fullQData(oldp+276,(vlSelf->top__DOT__data_ram__DOT__ram[0]),64);
        tracep->fullQData(oldp+278,(vlSelf->top__DOT__data_ram__DOT__ram[1]),64);
        tracep->fullSData(oldp+280,(vlSelf->top__DOT__ebreak_list__DOT__op_1),12);
        tracep->fullBit(oldp+281,(vlSelf->top__DOT__ebreak_list__DOT__ebreak_1));
        tracep->fullIData(oldp+282,(vlSelf->top__DOT__ebreak_list__DOT__inst_1),32);
        tracep->fullBit(oldp+283,(vlSelf->clk));
        tracep->fullBit(oldp+284,(vlSelf->rst));
        tracep->fullQData(oldp+285,(vlSelf->data_rd),64);
        tracep->fullCData(oldp+287,(vlSelf->top__DOT__exe_reg_pc_sel),3);
        tracep->fullQData(oldp+288,(vlSelf->top__DOT__exe_reg_src1),64);
        tracep->fullQData(oldp+290,(vlSelf->top__DOT__exe_reg_src2),64);
        tracep->fullQData(oldp+292,(vlSelf->top__DOT__mem_reg_cpu_dnpc_in1),64);
        tracep->fullQData(oldp+294,(vlSelf->top__DOT__mem_reg_cpu_dnpc_in2),64);
        tracep->fullQData(oldp+296,(vlSelf->top__DOT__wb_reg_cpu_dnpc_in1),64);
        tracep->fullQData(oldp+298,(vlSelf->top__DOT__wb_reg_cpu_dnpc_in2),64);
        tracep->fullQData(oldp+300,(vlSelf->top__DOT__cpu_ifpc),64);
        tracep->fullQData(oldp+302,(vlSelf->top__DOT__if_reg_pc),64);
        tracep->fullBit(oldp+304,(1U));
        tracep->fullBit(oldp+305,(0U));
    }
}
