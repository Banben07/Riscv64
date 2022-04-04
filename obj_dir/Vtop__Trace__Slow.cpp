// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceInitTop(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+346,"clk", false,-1);
        tracep->declBit(c+347,"rst", false,-1);
        tracep->declQuad(c+348,"data_rd", false,-1, 63,0);
        tracep->declQuad(c+350,"outdata", false,-1, 63,0);
        tracep->declBit(c+346,"top clk", false,-1);
        tracep->declBit(c+347,"top rst", false,-1);
        tracep->declQuad(c+348,"top data_rd", false,-1, 63,0);
        tracep->declQuad(c+350,"top outdata", false,-1, 63,0);
        tracep->declBit(c+1,"top w_check", false,-1);
        tracep->declBit(c+2,"top exe_reg_w_check", false,-1);
        tracep->declBit(c+3,"top data_wen", false,-1);
        tracep->declBit(c+4,"top data_wen_out", false,-1);
        tracep->declBit(c+5,"top reg_wen_out", false,-1);
        tracep->declBit(c+6,"top stall_control", false,-1);
        tracep->declBit(c+7,"top data_ren", false,-1);
        tracep->declBit(c+8,"top exe_reg_data_ren", false,-1);
        tracep->declBit(c+9,"top mem_reg_data_ren", false,-1);
        tracep->declBit(c+10,"top IF_Flush", false,-1);
        tracep->declBit(c+11,"top ebreak", false,-1);
        tracep->declBit(c+12,"top ebreak_out", false,-1);
        tracep->declBit(c+13,"top reg_wen", false,-1);
        tracep->declBit(c+14,"top mem_reg_reg_wen", false,-1);
        tracep->declBit(c+15,"top mem_reg_data_wen", false,-1);
        tracep->declBit(c+16,"top exe_reg_data_wen", false,-1);
        tracep->declBit(c+17,"top exe_reg_reg_wen", false,-1);
        tracep->declBit(c+18,"top wb_reg_reg_wen", false,-1);
        tracep->declBus(c+19,"top src1_sel", false,-1, 1,0);
        tracep->declBus(c+20,"top wb_reg_load_sel", false,-1, 1,0);
        tracep->declBus(c+21,"top mem_reg_load_sel", false,-1, 1,0);
        tracep->declBus(c+22,"top exe_reg_src1_sel", false,-1, 1,0);
        tracep->declBus(c+23,"top src2_sel", false,-1, 1,0);
        tracep->declBus(c+24,"top exe_reg_src2_sel", false,-1, 1,0);
        tracep->declBus(c+25,"top load_sel", false,-1, 1,0);
        tracep->declBus(c+26,"top exe_reg_load_sel", false,-1, 1,0);
        tracep->declBus(c+27,"top pc_sel", false,-1, 2,0);
        tracep->declBus(c+28,"top mem_reg_s_bhwd", false,-1, 2,0);
        tracep->declBus(c+29,"top s_bhwd", false,-1, 2,0);
        tracep->declBus(c+30,"top exe_reg_s_bhwd", false,-1, 2,0);
        tracep->declBus(c+31,"top pc_sel_out", false,-1, 2,0);
        tracep->declBus(c+32,"top src1_sel_plus", false,-1, 2,0);
        tracep->declBus(c+33,"top src2_sel_plus", false,-1, 2,0);
        tracep->declBus(c+34,"top wb_reg_pc_sel", false,-1, 2,0);
        tracep->declBus(c+35,"top mem_reg_pc_sel", false,-1, 2,0);
        tracep->declBus(c+352,"top exe_reg_pc_sel", false,-1, 2,0);
        tracep->declBus(c+36,"top pc_add_rs1_sel", false,-1, 3,0);
        tracep->declBus(c+37,"top b_check_rs2_sel", false,-1, 3,0);
        tracep->declBus(c+38,"top rs1", false,-1, 4,0);
        tracep->declBus(c+39,"top rs2", false,-1, 4,0);
        tracep->declBus(c+40,"top exe_reg_rs1", false,-1, 4,0);
        tracep->declBus(c+41,"top exe_reg_rs2", false,-1, 4,0);
        tracep->declBus(c+42,"top rd", false,-1, 4,0);
        tracep->declBus(c+43,"top mem_reg_rd", false,-1, 4,0);
        tracep->declBus(c+44,"top exe_reg_rd", false,-1, 4,0);
        tracep->declBus(c+45,"top wb_reg_rd", false,-1, 4,0);
        tracep->declBus(c+46,"top b_check", false,-1, 5,0);
        tracep->declBus(c+47,"top l_bhw", false,-1, 5,0);
        tracep->declBus(c+48,"top exe_reg_l_bhw", false,-1, 5,0);
        tracep->declBus(c+49,"top mem_reg_l_bhw", false,-1, 5,0);
        tracep->declBus(c+50,"top op", false,-1, 11,0);
        tracep->declBus(c+51,"top op_out", false,-1, 11,0);
        tracep->declBus(c+52,"top exe_reg_op", false,-1, 11,0);
        tracep->declBus(c+353,"top inst_addr", false,-1, 15,0);
        tracep->declBus(c+53,"top inst", false,-1, 31,0);
        tracep->declBus(c+54,"top ram_addr", false,-1, 31,0);
        tracep->declBus(c+55,"top mem_reg_ram_addr", false,-1, 31,0);
        tracep->declBus(c+56,"top inst_id", false,-1, 31,0);
        tracep->declBus(c+57,"top inst_out", false,-1, 31,0);
        tracep->declQuad(c+58,"top imm", false,-1, 63,0);
        tracep->declQuad(c+60,"top b_src2", false,-1, 63,0);
        tracep->declQuad(c+62,"top src2_out", false,-1, 63,0);
        tracep->declQuad(c+64,"top pc_src1", false,-1, 63,0);
        tracep->declQuad(c+66,"top data_a0", false,-1, 63,0);
        tracep->declQuad(c+68,"top one_src1", false,-1, 63,0);
        tracep->declQuad(c+70,"top one_src2", false,-1, 63,0);
        tracep->declQuad(c+72,"top if_pc", false,-1, 63,0);
        tracep->declQuad(c+74,"top exe_reg_src1_rs1", false,-1, 63,0);
        tracep->declQuad(c+354,"top exe_reg_src1", false,-1, 63,0);
        tracep->declQuad(c+356,"top exe_reg_src2", false,-1, 63,0);
        tracep->declQuad(c+76,"top exe_reg_src2_rs2", false,-1, 63,0);
        tracep->declQuad(c+78,"top mem_reg_pc", false,-1, 63,0);
        tracep->declQuad(c+80,"top wb_reg_rdata", false,-1, 63,0);
        tracep->declQuad(c+82,"top wb_reg_data_rd_in", false,-1, 63,0);
        tracep->declQuad(c+84,"top mem_reg_src2_rs2", false,-1, 63,0);
        tracep->declQuad(c+86,"top mem_reg_data_rd_in", false,-1, 63,0);
        tracep->declQuad(c+358,"top mem_reg_cpu_dnpc_in1", false,-1, 63,0);
        tracep->declQuad(c+360,"top mem_reg_cpu_dnpc_in2", false,-1, 63,0);
        tracep->declQuad(c+88,"top exe_reg_imm", false,-1, 63,0);
        tracep->declQuad(c+90,"top cpu_pc", false,-1, 63,0);
        tracep->declQuad(c+92,"top wb_reg_pc", false,-1, 63,0);
        tracep->declQuad(c+362,"top wb_reg_cpu_dnpc_in1", false,-1, 63,0);
        tracep->declQuad(c+364,"top wb_reg_cpu_dnpc_in2", false,-1, 63,0);
        tracep->declQuad(c+94,"top exe_reg_pc", false,-1, 63,0);
        tracep->declQuad(c+366,"top cpu_ifpc", false,-1, 63,0);
        tracep->declQuad(c+368,"top if_reg_pc", false,-1, 63,0);
        tracep->declQuad(c+96,"top id_reg_pc", false,-1, 63,0);
        tracep->declQuad(c+98,"top cpu_dnpc", false,-1, 63,0);
        tracep->declQuad(c+100,"top cpu_snpc", false,-1, 63,0);
        tracep->declQuad(c+102,"top rdata", false,-1, 63,0);
        tracep->declQuad(c+104,"top src1_rs1", false,-1, 63,0);
        tracep->declQuad(c+106,"top src2_rs2", false,-1, 63,0);
        tracep->declQuad(c+108,"top cpu_dnpc_in1", false,-1, 63,0);
        tracep->declQuad(c+110,"top cpu_dnpc_in2", false,-1, 63,0);
        tracep->declQuad(c+112,"top src1", false,-1, 63,0);
        tracep->declQuad(c+114,"top src2", false,-1, 63,0);
        tracep->declQuad(c+116,"top data_rd_in", false,-1, 63,0);
        tracep->declBus(c+31,"top Hazard_unit pc_jump", false,-1, 2,0);
        tracep->declBus(c+38,"top Hazard_unit rs1", false,-1, 4,0);
        tracep->declBus(c+39,"top Hazard_unit rs2", false,-1, 4,0);
        tracep->declBus(c+44,"top Hazard_unit exe_reg_rd", false,-1, 4,0);
        tracep->declBit(c+8,"top Hazard_unit exe_reg_data_ren", false,-1);
        tracep->declBit(c+6,"top Hazard_unit stall_control", false,-1);
        tracep->declBit(c+10,"top Hazard_unit IF_Flush", false,-1);
        tracep->declBus(c+40,"top Foward_unit exe_reg_rs1", false,-1, 4,0);
        tracep->declBus(c+41,"top Foward_unit exe_reg_rs2", false,-1, 4,0);
        tracep->declBus(c+38,"top Foward_unit pc_rs1", false,-1, 4,0);
        tracep->declBus(c+39,"top Foward_unit b_rs2", false,-1, 4,0);
        tracep->declBus(c+44,"top Foward_unit exe_reg_rd", false,-1, 4,0);
        tracep->declBus(c+43,"top Foward_unit mem_reg_rd", false,-1, 4,0);
        tracep->declBus(c+45,"top Foward_unit wb_reg_rd", false,-1, 4,0);
        tracep->declBus(c+22,"top Foward_unit rs1_sel", false,-1, 1,0);
        tracep->declBus(c+24,"top Foward_unit rs2_sel", false,-1, 1,0);
        tracep->declBit(c+17,"top Foward_unit exe_reg_reg_wen", false,-1);
        tracep->declBit(c+14,"top Foward_unit mem_reg_reg_wen", false,-1);
        tracep->declBit(c+18,"top Foward_unit wb_reg_reg_wen", false,-1);
        tracep->declBus(c+32,"top Foward_unit src1_sel_plus", false,-1, 2,0);
        tracep->declBus(c+33,"top Foward_unit src2_sel_plus", false,-1, 2,0);
        tracep->declBus(c+36,"top Foward_unit pc_add_rs1_sel", false,-1, 3,0);
        tracep->declBus(c+37,"top Foward_unit b_check_rs2_sel", false,-1, 3,0);
        tracep->declQuad(c+100,"top pc_sel_choice in0", false,-1, 63,0);
        tracep->declQuad(c+108,"top pc_sel_choice in1", false,-1, 63,0);
        tracep->declQuad(c+110,"top pc_sel_choice in2", false,-1, 63,0);
        tracep->declBus(c+31,"top pc_sel_choice key", false,-1, 2,0);
        tracep->declQuad(c+98,"top pc_sel_choice out", false,-1, 63,0);
        tracep->declQuad(c+98,"top pc cpu_dnpc", false,-1, 63,0);
        tracep->declBit(c+346,"top pc clk", false,-1);
        tracep->declBit(c+347,"top pc rst", false,-1);
        tracep->declBit(c+6,"top pc stall", false,-1);
        tracep->declQuad(c+90,"top pc cpu_pc", false,-1, 63,0);
        tracep->declBit(c+346,"top inst_ram clk", false,-1);
        tracep->declQuad(c+90,"top inst_ram cpu_pc", false,-1, 63,0);
        tracep->declBit(c+347,"top inst_ram rst", false,-1);
        tracep->declBus(c+53,"top inst_ram inst", false,-1, 31,0);
        tracep->declQuad(c+72,"top inst_ram if_pc", false,-1, 63,0);
        tracep->declBus(c+118,"top inst_ram addr", false,-1, 15,0);
        tracep->declBit(c+346,"top id_reg clk", false,-1);
        tracep->declBit(c+347,"top id_reg rst", false,-1);
        tracep->declBit(c+6,"top id_reg stall", false,-1);
        tracep->declBit(c+10,"top id_reg IF_Flush", false,-1);
        tracep->declBus(c+53,"top id_reg id_reg_in0", false,-1, 31,0);
        tracep->declQuad(c+72,"top id_reg id_reg_in1", false,-1, 63,0);
        tracep->declBus(c+56,"top id_reg id_reg_out0", false,-1, 31,0);
        tracep->declQuad(c+96,"top id_reg id_reg_out1", false,-1, 63,0);
        tracep->declBus(c+56,"top idu inst", false,-1, 31,0);
        tracep->declQuad(c+58,"top idu imm", false,-1, 63,0);
        tracep->declBus(c+50,"top idu op", false,-1, 11,0);
        tracep->declBus(c+46,"top idu b_check", false,-1, 5,0);
        tracep->declBus(c+47,"top idu l_bhw", false,-1, 5,0);
        tracep->declBus(c+42,"top idu rd", false,-1, 4,0);
        tracep->declBus(c+38,"top idu rs1", false,-1, 4,0);
        tracep->declBus(c+39,"top idu rs2", false,-1, 4,0);
        tracep->declBus(c+29,"top idu s_bhwd", false,-1, 2,0);
        tracep->declBus(c+27,"top idu pc_sel", false,-1, 2,0);
        tracep->declBus(c+19,"top idu src1_sel", false,-1, 1,0);
        tracep->declBus(c+23,"top idu src2_sel", false,-1, 1,0);
        tracep->declBus(c+25,"top idu load_sel", false,-1, 1,0);
        tracep->declBit(c+3,"top idu data_wen", false,-1);
        tracep->declBit(c+7,"top idu data_ren", false,-1);
        tracep->declBit(c+11,"top idu ebreak", false,-1);
        tracep->declBit(c+13,"top idu reg_wen", false,-1);
        tracep->declBit(c+1,"top idu w_check", false,-1);
        tracep->declBit(c+119,"top idu TYPE_I", false,-1);
        tracep->declBit(c+120,"top idu TYPE_U", false,-1);
        tracep->declBit(c+3,"top idu TYPE_S", false,-1);
        tracep->declBit(c+121,"top idu TYPE_J", false,-1);
        tracep->declBit(c+122,"top idu TYPE_B", false,-1);
        tracep->declBit(c+123,"top idu TYPE_R", false,-1);
        tracep->declBit(c+124,"top idu inst_lui", false,-1);
        tracep->declBit(c+125,"top idu inst_lwu", false,-1);
        tracep->declBit(c+126,"top idu inst_auipc", false,-1);
        tracep->declBit(c+121,"top idu inst_jal", false,-1);
        tracep->declBit(c+127,"top idu inst_beq", false,-1);
        tracep->declBit(c+128,"top idu inst_bne", false,-1);
        tracep->declBit(c+129,"top idu inst_blt", false,-1);
        tracep->declBit(c+130,"top idu inst_bge", false,-1);
        tracep->declBit(c+131,"top idu inst_bltu", false,-1);
        tracep->declBit(c+132,"top idu inst_bgeu", false,-1);
        tracep->declBit(c+133,"top idu inst_jalr", false,-1);
        tracep->declBit(c+134,"top idu inst_lb", false,-1);
        tracep->declBit(c+135,"top idu inst_lh", false,-1);
        tracep->declBit(c+136,"top idu inst_lw", false,-1);
        tracep->declBit(c+137,"top idu inst_ld", false,-1);
        tracep->declBit(c+138,"top idu inst_lbu", false,-1);
        tracep->declBit(c+139,"top idu inst_lhu", false,-1);
        tracep->declBit(c+140,"top idu inst_addi", false,-1);
        tracep->declBit(c+141,"top idu inst_slti", false,-1);
        tracep->declBit(c+142,"top idu inst_sltiu", false,-1);
        tracep->declBit(c+143,"top idu inst_xori", false,-1);
        tracep->declBit(c+144,"top idu inst_ori", false,-1);
        tracep->declBit(c+145,"top idu inst_andi", false,-1);
        tracep->declBit(c+146,"top idu inst_slli", false,-1);
        tracep->declBit(c+147,"top idu inst_srli", false,-1);
        tracep->declBit(c+148,"top idu inst_srai", false,-1);
        tracep->declBit(c+11,"top idu inst_ebreak", false,-1);
        tracep->declBit(c+149,"top idu inst_sb", false,-1);
        tracep->declBit(c+150,"top idu inst_sh", false,-1);
        tracep->declBit(c+151,"top idu inst_sw", false,-1);
        tracep->declBit(c+152,"top idu inst_sd", false,-1);
        tracep->declBit(c+153,"top idu inst_add", false,-1);
        tracep->declBit(c+154,"top idu inst_sub", false,-1);
        tracep->declBit(c+155,"top idu inst_sll", false,-1);
        tracep->declBit(c+156,"top idu inst_slt", false,-1);
        tracep->declBit(c+157,"top idu inst_sltu", false,-1);
        tracep->declBit(c+158,"top idu inst_xor", false,-1);
        tracep->declBit(c+159,"top idu inst_srl", false,-1);
        tracep->declBit(c+160,"top idu inst_sra", false,-1);
        tracep->declBit(c+161,"top idu inst_or", false,-1);
        tracep->declBit(c+162,"top idu inst_and", false,-1);
        tracep->declBit(c+7,"top idu l_check", false,-1);
        tracep->declBit(c+163,"top idu op_sll", false,-1);
        tracep->declBit(c+164,"top idu op_slt", false,-1);
        tracep->declBit(c+165,"top idu op_sltu", false,-1);
        tracep->declBit(c+166,"top idu op_xor", false,-1);
        tracep->declBit(c+167,"top idu op_srl", false,-1);
        tracep->declBit(c+168,"top idu op_sra", false,-1);
        tracep->declBit(c+169,"top idu op_or", false,-1);
        tracep->declBit(c+170,"top idu op_and", false,-1);
        tracep->declBit(c+171,"top idu inst_addiw", false,-1);
        tracep->declBit(c+172,"top idu inst_slliw", false,-1);
        tracep->declBit(c+173,"top idu inst_srliw", false,-1);
        tracep->declBit(c+174,"top idu inst_sraiw", false,-1);
        tracep->declBit(c+175,"top idu inst_addw", false,-1);
        tracep->declBit(c+176,"top idu inst_subw", false,-1);
        tracep->declBit(c+177,"top idu inst_sllw", false,-1);
        tracep->declBit(c+178,"top idu inst_srlw", false,-1);
        tracep->declBit(c+179,"top idu inst_sraw", false,-1);
        tracep->declQuad(c+180,"top idu immI", false,-1, 63,0);
        tracep->declQuad(c+182,"top idu immU", false,-1, 63,0);
        tracep->declQuad(c+184,"top idu immS", false,-1, 63,0);
        tracep->declQuad(c+186,"top idu immJ", false,-1, 63,0);
        tracep->declQuad(c+188,"top idu immB", false,-1, 63,0);
        tracep->declBus(c+190,"top idu opcode", false,-1, 6,0);
        tracep->declBus(c+191,"top idu funct7", false,-1, 6,0);
        tracep->declBus(c+192,"top idu funct3", false,-1, 2,0);
        tracep->declBit(c+3,"top control_stall data_wen", false,-1);
        tracep->declBit(c+13,"top control_stall reg_wen", false,-1);
        tracep->declBit(c+6,"top control_stall stall", false,-1);
        tracep->declBit(c+4,"top control_stall data_wen_out", false,-1);
        tracep->declBit(c+5,"top control_stall reg_wen_out", false,-1);
        tracep->declQuad(c+348,"top common_reg data_rd", false,-1, 63,0);
        tracep->declBus(c+45,"top common_reg addr_rd", false,-1, 4,0);
        tracep->declBus(c+38,"top common_reg addr_rs1", false,-1, 4,0);
        tracep->declBus(c+39,"top common_reg addr_rs2", false,-1, 4,0);
        tracep->declBit(c+18,"top common_reg en", false,-1);
        tracep->declBit(c+346,"top common_reg clk", false,-1);
        tracep->declQuad(c+66,"top common_reg data_a0", false,-1, 63,0);
        tracep->declQuad(c+104,"top common_reg data_rs1", false,-1, 63,0);
        tracep->declQuad(c+106,"top common_reg data_rs2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+193+i*2,"top common_reg reg_com", true,(i+0), 63,0);}}
        tracep->declQuad(c+104,"top pc_add_src1_choice in0", false,-1, 63,0);
        tracep->declQuad(c+116,"top pc_add_src1_choice in1", false,-1, 63,0);
        tracep->declQuad(c+86,"top pc_add_src1_choice in2", false,-1, 63,0);
        tracep->declQuad(c+348,"top pc_add_src1_choice in3", false,-1, 63,0);
        tracep->declBus(c+36,"top pc_add_src1_choice key", false,-1, 3,0);
        tracep->declQuad(c+64,"top pc_add_src1_choice out", false,-1, 63,0);
        tracep->declQuad(c+106,"top b_check_rs2_choice in0", false,-1, 63,0);
        tracep->declQuad(c+116,"top b_check_rs2_choice in1", false,-1, 63,0);
        tracep->declQuad(c+86,"top b_check_rs2_choice in2", false,-1, 63,0);
        tracep->declQuad(c+348,"top b_check_rs2_choice in3", false,-1, 63,0);
        tracep->declBus(c+37,"top b_check_rs2_choice key", false,-1, 3,0);
        tracep->declQuad(c+60,"top b_check_rs2_choice out", false,-1, 63,0);
        tracep->declQuad(c+96,"top pc_add pc_in", false,-1, 63,0);
        tracep->declQuad(c+64,"top pc_add src1_in", false,-1, 63,0);
        tracep->declQuad(c+58,"top pc_add imm_in", false,-1, 63,0);
        tracep->declQuad(c+108,"top pc_add cpu_dnpc_in1", false,-1, 63,0);
        tracep->declQuad(c+110,"top pc_add cpu_dnpc_in2", false,-1, 63,0);
        tracep->declBus(c+46,"top b_check_out b_check", false,-1, 5,0);
        tracep->declBus(c+27,"top b_check_out pc_sel", false,-1, 2,0);
        tracep->declQuad(c+64,"top b_check_out rs1_data", false,-1, 63,0);
        tracep->declQuad(c+60,"top b_check_out rs2_data", false,-1, 63,0);
        tracep->declBus(c+31,"top b_check_out pc_sel_out", false,-1, 2,0);
        tracep->declBit(c+257,"top b_check_out b_en", false,-1);
        tracep->declBit(c+258,"top b_check_out beq_check", false,-1);
        tracep->declBit(c+259,"top b_check_out bne_check", false,-1);
        tracep->declBit(c+260,"top b_check_out blt_check", false,-1);
        tracep->declBit(c+261,"top b_check_out bge_check", false,-1);
        tracep->declBit(c+262,"top b_check_out bltu_check", false,-1);
        tracep->declBit(c+263,"top b_check_out bgeu_check", false,-1);
        tracep->declBit(c+370,"top b_check_out data_cin", false,-1);
        tracep->declBit(c+263,"top b_check_out data_cout", false,-1);
        tracep->declQuad(c+64,"top b_check_out data_a", false,-1, 63,0);
        tracep->declQuad(c+264,"top b_check_out data_b", false,-1, 63,0);
        tracep->declQuad(c+266,"top b_check_out data_result", false,-1, 63,0);
        tracep->declBit(c+346,"top exe_reg clk", false,-1);
        tracep->declBit(c+347,"top exe_reg rst", false,-1);
        tracep->declQuad(c+96,"top exe_reg exe_reg_in0", false,-1, 63,0);
        tracep->declBus(c+50,"top exe_reg exe_reg_in1", false,-1, 11,0);
        tracep->declBus(c+42,"top exe_reg exe_reg_in2", false,-1, 4,0);
        tracep->declQuad(c+104,"top exe_reg exe_reg_in3", false,-1, 63,0);
        tracep->declBus(c+19,"top exe_reg exe_reg_in4", false,-1, 1,0);
        tracep->declQuad(c+106,"top exe_reg exe_reg_in5", false,-1, 63,0);
        tracep->declBit(c+4,"top exe_reg exe_reg_in7", false,-1);
        tracep->declBit(c+5,"top exe_reg exe_reg_in8", false,-1);
        tracep->declBus(c+25,"top exe_reg exe_reg_in9", false,-1, 1,0);
        tracep->declBus(c+23,"top exe_reg exe_reg_in10", false,-1, 1,0);
        tracep->declQuad(c+58,"top exe_reg exe_reg_in11", false,-1, 63,0);
        tracep->declBus(c+38,"top exe_reg exe_reg_in12", false,-1, 4,0);
        tracep->declBus(c+39,"top exe_reg exe_reg_in13", false,-1, 4,0);
        tracep->declBit(c+7,"top exe_reg exe_reg_in14", false,-1);
        tracep->declBus(c+29,"top exe_reg exe_reg_in15", false,-1, 2,0);
        tracep->declBus(c+47,"top exe_reg exe_reg_in16", false,-1, 5,0);
        tracep->declBit(c+1,"top exe_reg exe_reg_in17", false,-1);
        tracep->declQuad(c+94,"top exe_reg exe_reg_out0", false,-1, 63,0);
        tracep->declBus(c+52,"top exe_reg exe_reg_out1", false,-1, 11,0);
        tracep->declBus(c+44,"top exe_reg exe_reg_out2", false,-1, 4,0);
        tracep->declQuad(c+74,"top exe_reg exe_reg_out3", false,-1, 63,0);
        tracep->declBus(c+22,"top exe_reg exe_reg_out4", false,-1, 1,0);
        tracep->declQuad(c+76,"top exe_reg exe_reg_out5", false,-1, 63,0);
        tracep->declBit(c+16,"top exe_reg exe_reg_out7", false,-1);
        tracep->declBit(c+17,"top exe_reg exe_reg_out8", false,-1);
        tracep->declBus(c+26,"top exe_reg exe_reg_out9", false,-1, 1,0);
        tracep->declBus(c+24,"top exe_reg exe_reg_out10", false,-1, 1,0);
        tracep->declQuad(c+88,"top exe_reg exe_reg_out11", false,-1, 63,0);
        tracep->declBus(c+40,"top exe_reg exe_reg_out12", false,-1, 4,0);
        tracep->declBus(c+41,"top exe_reg exe_reg_out13", false,-1, 4,0);
        tracep->declBit(c+8,"top exe_reg exe_reg_out14", false,-1);
        tracep->declBus(c+30,"top exe_reg exe_reg_out15", false,-1, 2,0);
        tracep->declBus(c+48,"top exe_reg exe_reg_out16", false,-1, 5,0);
        tracep->declBit(c+2,"top exe_reg exe_reg_out17", false,-1);
        tracep->declQuad(c+94,"top src1_sel_choice in0", false,-1, 63,0);
        tracep->declQuad(c+74,"top src1_sel_choice in1", false,-1, 63,0);
        tracep->declBus(c+22,"top src1_sel_choice key", false,-1, 1,0);
        tracep->declQuad(c+68,"top src1_sel_choice out", false,-1, 63,0);
        tracep->declQuad(c+88,"top src2_sel_choice in0", false,-1, 63,0);
        tracep->declQuad(c+76,"top src2_sel_choice in1", false,-1, 63,0);
        tracep->declBus(c+24,"top src2_sel_choice key", false,-1, 1,0);
        tracep->declQuad(c+70,"top src2_sel_choice out", false,-1, 63,0);
        tracep->declQuad(c+68,"top src1_sel_choice_out in0", false,-1, 63,0);
        tracep->declQuad(c+86,"top src1_sel_choice_out in1", false,-1, 63,0);
        tracep->declQuad(c+348,"top src1_sel_choice_out in2", false,-1, 63,0);
        tracep->declBus(c+32,"top src1_sel_choice_out key", false,-1, 2,0);
        tracep->declQuad(c+112,"top src1_sel_choice_out out", false,-1, 63,0);
        tracep->declQuad(c+70,"top src2_sel_choice_out in0", false,-1, 63,0);
        tracep->declQuad(c+86,"top src2_sel_choice_out in1", false,-1, 63,0);
        tracep->declQuad(c+348,"top src2_sel_choice_out in2", false,-1, 63,0);
        tracep->declBus(c+33,"top src2_sel_choice_out key", false,-1, 2,0);
        tracep->declQuad(c+114,"top src2_sel_choice_out out", false,-1, 63,0);
        tracep->declQuad(c+112,"top alu src1", false,-1, 63,0);
        tracep->declQuad(c+114,"top alu src2", false,-1, 63,0);
        tracep->declQuad(c+88,"top alu imm", false,-1, 63,0);
        tracep->declBus(c+52,"top alu op", false,-1, 11,0);
        tracep->declBus(c+30,"top alu s_bhwd", false,-1, 2,0);
        tracep->declBit(c+16,"top alu s_check", false,-1);
        tracep->declBit(c+2,"top alu w_check", false,-1);
        tracep->declQuad(c+62,"top alu src2_out", false,-1, 63,0);
        tracep->declQuad(c+116,"top alu data_rd", false,-1, 63,0);
        tracep->declBus(c+54,"top alu ram_raddr", false,-1, 31,0);
        tracep->declBit(c+268,"top alu op_sb", false,-1);
        tracep->declBit(c+269,"top alu op_sh", false,-1);
        tracep->declBit(c+270,"top alu op_sw", false,-1);
        tracep->declBit(c+271,"top alu op_add", false,-1);
        tracep->declBit(c+272,"top alu op_sub", false,-1);
        tracep->declBit(c+273,"top alu op_slt", false,-1);
        tracep->declBit(c+274,"top alu op_sltu", false,-1);
        tracep->declBit(c+275,"top alu op_and", false,-1);
        tracep->declBit(c+276,"top alu op_or", false,-1);
        tracep->declBit(c+277,"top alu op_xor", false,-1);
        tracep->declBit(c+278,"top alu op_sll", false,-1);
        tracep->declBit(c+279,"top alu op_srl", false,-1);
        tracep->declBit(c+280,"top alu op_sra", false,-1);
        tracep->declBit(c+281,"top alu op_lui", false,-1);
        tracep->declBit(c+282,"top alu op_jal", false,-1);
        tracep->declBus(c+283,"top alu srl_w1_result", false,-1, 31,0);
        tracep->declBus(c+284,"top alu sra_w1_result", false,-1, 31,0);
        tracep->declQuad(c+285,"top alu data_result_w", false,-1, 63,0);
        tracep->declQuad(c+287,"top alu sll_w1_result", false,-1, 63,0);
        tracep->declQuad(c+289,"top alu sll_w_result", false,-1, 63,0);
        tracep->declQuad(c+291,"top alu srl_d_result", false,-1, 63,0);
        tracep->declQuad(c+293,"top alu sra_d_result", false,-1, 63,0);
        tracep->declQuad(c+295,"top alu sll_mid_result", false,-1, 63,0);
        tracep->declQuad(c+297,"top alu srl_w_result", false,-1, 63,0);
        tracep->declQuad(c+299,"top alu sra_w_result", false,-1, 63,0);
        tracep->declQuad(c+301,"top alu add_sub_result", false,-1, 63,0);
        tracep->declQuad(c+371,"top alu srl_mid_result", false,-1, 63,0);
        tracep->declQuad(c+303,"top alu slt_result", false,-1, 63,0);
        tracep->declQuad(c+305,"top alu s_result", false,-1, 63,0);
        tracep->declQuad(c+307,"top alu sltu_result", false,-1, 63,0);
        tracep->declQuad(c+309,"top alu and_result", false,-1, 63,0);
        tracep->declQuad(c+311,"top alu or_result", false,-1, 63,0);
        tracep->declQuad(c+313,"top alu xor_result", false,-1, 63,0);
        tracep->declQuad(c+315,"top alu sll_result", false,-1, 63,0);
        tracep->declQuad(c+317,"top alu srl_result", false,-1, 63,0);
        tracep->declQuad(c+319,"top alu sra_result", false,-1, 63,0);
        tracep->declQuad(c+114,"top alu lui_result", false,-1, 63,0);
        tracep->declQuad(c+321,"top alu jal_result", false,-1, 63,0);
        tracep->declQuad(c+112,"top alu data_a", false,-1, 63,0);
        tracep->declQuad(c+323,"top alu data_b", false,-1, 63,0);
        tracep->declQuad(c+325,"top alu data_result", false,-1, 63,0);
        tracep->declQuad(c+321,"top alu data_pc", false,-1, 63,0);
        tracep->declBit(c+327,"top alu data_cin", false,-1);
        tracep->declBit(c+328,"top alu data_cout", false,-1);
        tracep->declBit(c+346,"top mem_reg clk", false,-1);
        tracep->declBit(c+347,"top mem_reg rst", false,-1);
        tracep->declBus(c+44,"top mem_reg mem_reg_in0", false,-1, 4,0);
        tracep->declBus(c+352,"top mem_reg mem_reg_in1", false,-1, 2,0);
        tracep->declBit(c+16,"top mem_reg mem_reg_in2", false,-1);
        tracep->declBit(c+17,"top mem_reg mem_reg_in3", false,-1);
        tracep->declBus(c+26,"top mem_reg mem_reg_in4", false,-1, 1,0);
        tracep->declQuad(c+116,"top mem_reg mem_reg_in7", false,-1, 63,0);
        tracep->declBus(c+54,"top mem_reg mem_reg_in8", false,-1, 31,0);
        tracep->declQuad(c+62,"top mem_reg mem_reg_in9", false,-1, 63,0);
        tracep->declQuad(c+94,"top mem_reg mem_reg_in10", false,-1, 63,0);
        tracep->declBit(c+8,"top mem_reg mem_reg_in11", false,-1);
        tracep->declBus(c+30,"top mem_reg mem_reg_in12", false,-1, 2,0);
        tracep->declBus(c+48,"top mem_reg mem_reg_in13", false,-1, 5,0);
        tracep->declBus(c+43,"top mem_reg mem_reg_out0", false,-1, 4,0);
        tracep->declBus(c+35,"top mem_reg mem_reg_out1", false,-1, 2,0);
        tracep->declBit(c+15,"top mem_reg mem_reg_out2", false,-1);
        tracep->declBit(c+14,"top mem_reg mem_reg_out3", false,-1);
        tracep->declBus(c+21,"top mem_reg mem_reg_out4", false,-1, 1,0);
        tracep->declQuad(c+86,"top mem_reg mem_reg_out7", false,-1, 63,0);
        tracep->declBus(c+55,"top mem_reg mem_reg_out8", false,-1, 31,0);
        tracep->declQuad(c+84,"top mem_reg mem_reg_out9", false,-1, 63,0);
        tracep->declQuad(c+78,"top mem_reg mem_reg_out10", false,-1, 63,0);
        tracep->declBit(c+9,"top mem_reg mem_reg_out11", false,-1);
        tracep->declBus(c+28,"top mem_reg mem_reg_out12", false,-1, 2,0);
        tracep->declBus(c+49,"top mem_reg mem_reg_out13", false,-1, 5,0);
        tracep->declQuad(c+84,"top data_ram wdata", false,-1, 63,0);
        tracep->declBus(c+55,"top data_ram ram_addr", false,-1, 31,0);
        tracep->declBus(c+49,"top data_ram l_bhw", false,-1, 5,0);
        tracep->declBus(c+28,"top data_ram s_bhwd", false,-1, 2,0);
        tracep->declBit(c+15,"top data_ram data_wen", false,-1);
        tracep->declBit(c+9,"top data_ram data_ren", false,-1);
        tracep->declBit(c+346,"top data_ram clk", false,-1);
        tracep->declQuad(c+350,"top data_ram outdata", false,-1, 63,0);
        tracep->declQuad(c+102,"top data_ram rdata", false,-1, 63,0);
        tracep->declBit(c+329,"top data_ram op_sb", false,-1);
        tracep->declBit(c+330,"top data_ram op_sh", false,-1);
        tracep->declBit(c+331,"top data_ram op_sw", false,-1);
        tracep->declBit(c+332,"top data_ram op_lb", false,-1);
        tracep->declBit(c+333,"top data_ram op_lbu", false,-1);
        tracep->declBit(c+334,"top data_ram op_lh", false,-1);
        tracep->declBit(c+335,"top data_ram op_lhu", false,-1);
        tracep->declBit(c+336,"top data_ram op_lw", false,-1);
        tracep->declBit(c+337,"top data_ram op_lwu", false,-1);
        tracep->declBus(c+338,"top data_ram addr", false,-1, 31,0);
        tracep->declQuad(c+339,"top data_ram rdata_out", false,-1, 63,0);
        tracep->declQuad(c+341,"top data_ram rom", false,-1, 63,0);
        tracep->declBit(c+346,"top wb_reg clk", false,-1);
        tracep->declBit(c+347,"top wb_reg rst", false,-1);
        tracep->declQuad(c+78,"top wb_reg wb_reg_in0", false,-1, 63,0);
        tracep->declBus(c+35,"top wb_reg wb_reg_in1", false,-1, 2,0);
        tracep->declBit(c+14,"top wb_reg wb_reg_in2", false,-1);
        tracep->declBus(c+21,"top wb_reg wb_reg_in3", false,-1, 1,0);
        tracep->declQuad(c+86,"top wb_reg wb_reg_in4", false,-1, 63,0);
        tracep->declQuad(c+102,"top wb_reg wb_reg_in5", false,-1, 63,0);
        tracep->declBus(c+43,"top wb_reg wb_reg_in6", false,-1, 4,0);
        tracep->declQuad(c+92,"top wb_reg wb_reg_out0", false,-1, 63,0);
        tracep->declBus(c+34,"top wb_reg wb_reg_out1", false,-1, 2,0);
        tracep->declBit(c+18,"top wb_reg wb_reg_out2", false,-1);
        tracep->declBus(c+20,"top wb_reg wb_reg_out3", false,-1, 1,0);
        tracep->declQuad(c+82,"top wb_reg wb_reg_out4", false,-1, 63,0);
        tracep->declQuad(c+80,"top wb_reg wb_reg_out5", false,-1, 63,0);
        tracep->declBus(c+45,"top wb_reg wb_reg_out6", false,-1, 4,0);
        tracep->declQuad(c+82,"top data_rd_choice in0", false,-1, 63,0);
        tracep->declQuad(c+80,"top data_rd_choice in1", false,-1, 63,0);
        tracep->declBus(c+20,"top data_rd_choice key", false,-1, 1,0);
        tracep->declQuad(c+348,"top data_rd_choice out", false,-1, 63,0);
        tracep->declBit(c+346,"top ebreak_list clk", false,-1);
        tracep->declBit(c+347,"top ebreak_list rst", false,-1);
        tracep->declBit(c+11,"top ebreak_list ebreak", false,-1);
        tracep->declBus(c+50,"top ebreak_list op", false,-1, 11,0);
        tracep->declBus(c+56,"top ebreak_list inst", false,-1, 31,0);
        tracep->declBit(c+12,"top ebreak_list ebreak_out", false,-1);
        tracep->declBus(c+51,"top ebreak_list op_out", false,-1, 11,0);
        tracep->declBus(c+57,"top ebreak_list inst_out", false,-1, 31,0);
        tracep->declBus(c+343,"top ebreak_list op_1", false,-1, 11,0);
        tracep->declBit(c+344,"top ebreak_list ebreak_1", false,-1);
        tracep->declBus(c+345,"top ebreak_list inst_1", false,-1, 31,0);
    }
}

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtop___024root__traceRegister(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtop___024root__traceCleanup, vlSelf);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
        tracep->fullBit(oldp+1,((((((((((IData)(vlSelf->top__DOT__idu__DOT__inst_addiw) 
                                        | (IData)(vlSelf->top__DOT__idu__DOT__inst_slliw)) 
                                       | (IData)(vlSelf->top__DOT__idu__DOT__inst_srliw)) 
                                      | (IData)(vlSelf->top__DOT__idu__DOT__inst_sraiw)) 
                                     | (IData)(vlSelf->top__DOT__idu__DOT__inst_addw)) 
                                    | (IData)(vlSelf->top__DOT__idu__DOT__inst_subw)) 
                                   | (IData)(vlSelf->top__DOT__idu__DOT__inst_sllw)) 
                                  | (IData)(vlSelf->top__DOT__idu__DOT__inst_srlw)) 
                                 | (IData)(vlSelf->top__DOT__idu__DOT__inst_sraw))));
        tracep->fullBit(oldp+2,(vlSelf->top__DOT__exe_reg_w_check));
        tracep->fullBit(oldp+3,((0x23U == (0x7fU & vlSelf->top__DOT__inst_id))));
        tracep->fullBit(oldp+4,(((IData)(vlSelf->top__DOT__stall_control)
                                  ? 0U : (IData)((0x23U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__inst_id))))));
        tracep->fullBit(oldp+5,(((IData)(vlSelf->top__DOT__stall_control)
                                  ? 0U : (1U & ((((
                                                   (0x33U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT__inst_id)) 
                                                   | (0x3bU 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->top__DOT__inst_id))) 
                                                  | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_I)) 
                                                 | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_U)) 
                                                | (0x6fU 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->top__DOT__inst_id)))))));
        tracep->fullBit(oldp+6,(vlSelf->top__DOT__stall_control));
        tracep->fullBit(oldp+7,(vlSelf->top__DOT__idu__DOT__l_check));
        tracep->fullBit(oldp+8,(vlSelf->top__DOT__exe_reg_data_ren));
        tracep->fullBit(oldp+9,(vlSelf->top__DOT__mem_reg_data_ren));
        tracep->fullBit(oldp+10,(((1U == (IData)(vlSelf->top__DOT__pc_sel_out))
                                   ? 0U : 1U)));
        tracep->fullBit(oldp+11,((0x100073U == vlSelf->top__DOT__inst_id)));
        tracep->fullBit(oldp+12,(vlSelf->top__DOT__ebreak_out));
        tracep->fullBit(oldp+13,((((((0x33U == (0x7fU 
                                                & vlSelf->top__DOT__inst_id)) 
                                     | (0x3bU == (0x7fU 
                                                  & vlSelf->top__DOT__inst_id))) 
                                    | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_I)) 
                                   | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_U)) 
                                  | (0x6fU == (0x7fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+14,(vlSelf->top__DOT__mem_reg_reg_wen));
        tracep->fullBit(oldp+15,(vlSelf->top__DOT__mem_reg_data_wen));
        tracep->fullBit(oldp+16,(vlSelf->top__DOT__exe_reg_data_wen));
        tracep->fullBit(oldp+17,(vlSelf->top__DOT__exe_reg_reg_wen));
        tracep->fullBit(oldp+18,(vlSelf->top__DOT__wb_reg_reg_wen));
        tracep->fullCData(oldp+19,(((((0x6fU == (0x7fU 
                                                 & vlSelf->top__DOT__inst_id)) 
                                      | (IData)(vlSelf->top__DOT__idu__DOT__inst_jalr)) 
                                     | (0x17U == (0x7fU 
                                                  & vlSelf->top__DOT__inst_id)))
                                     ? 1U : 2U)),2);
        tracep->fullCData(oldp+20,(vlSelf->top__DOT__wb_reg_load_sel),2);
        tracep->fullCData(oldp+21,(vlSelf->top__DOT__mem_reg_load_sel),2);
        tracep->fullCData(oldp+22,(vlSelf->top__DOT__exe_reg_src1_sel),2);
        tracep->fullCData(oldp+23,(((((0x6fU == (0x7fU 
                                                 & vlSelf->top__DOT__inst_id)) 
                                      | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_U)) 
                                     | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_I))
                                     ? 1U : 2U)),2);
        tracep->fullCData(oldp+24,(vlSelf->top__DOT__exe_reg_src2_sel),2);
        tracep->fullCData(oldp+25,(((IData)(vlSelf->top__DOT__idu__DOT__l_check)
                                     ? 2U : 1U)),2);
        tracep->fullCData(oldp+26,(vlSelf->top__DOT__exe_reg_load_sel),2);
        tracep->fullCData(oldp+27,(((IData)(vlSelf->top__DOT__idu__DOT__inst_jalr)
                                     ? 4U : ((0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->top__DOT__inst_id))
                                              ? 2U : 1U))),3);
        tracep->fullCData(oldp+28,(vlSelf->top__DOT__mem_reg_s_bhwd),3);
        tracep->fullCData(oldp+29,((((IData)((0x23U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__inst_id))) 
                                     << 2U) | (((IData)(
                                                        (0x1023U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__inst_id))) 
                                                << 1U) 
                                               | (IData)(
                                                         (0x2023U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__inst_id)))))),3);
        tracep->fullCData(oldp+30,(vlSelf->top__DOT__exe_reg_s_bhwd),3);
        tracep->fullCData(oldp+31,(vlSelf->top__DOT__pc_sel_out),3);
        tracep->fullCData(oldp+32,(vlSelf->top__DOT__src1_sel_plus),3);
        tracep->fullCData(oldp+33,(vlSelf->top__DOT__src2_sel_plus),3);
        tracep->fullCData(oldp+34,(vlSelf->top__DOT__wb_reg_pc_sel),3);
        tracep->fullCData(oldp+35,(vlSelf->top__DOT__mem_reg_pc_sel),3);
        tracep->fullCData(oldp+36,(vlSelf->top__DOT__pc_add_rs1_sel),4);
        tracep->fullCData(oldp+37,(vlSelf->top__DOT__b_check_rs2_sel),4);
        tracep->fullCData(oldp+38,(vlSelf->top__DOT__rs1),5);
        tracep->fullCData(oldp+39,((0x1fU & (vlSelf->top__DOT__inst_id 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+40,(vlSelf->top__DOT__exe_reg_rs1),5);
        tracep->fullCData(oldp+41,(vlSelf->top__DOT__exe_reg_rs2),5);
        tracep->fullCData(oldp+42,((0x1fU & (vlSelf->top__DOT__inst_id 
                                             >> 7U))),5);
        tracep->fullCData(oldp+43,(vlSelf->top__DOT__mem_reg_rd),5);
        tracep->fullCData(oldp+44,(vlSelf->top__DOT__exe_reg_rd),5);
        tracep->fullCData(oldp+45,(vlSelf->top__DOT__wb_reg_rd),5);
        tracep->fullCData(oldp+46,(vlSelf->top__DOT__b_check),6);
        tracep->fullCData(oldp+47,((((IData)(vlSelf->top__DOT__idu__DOT__inst_lb) 
                                     << 5U) | (((IData)(vlSelf->top__DOT__idu__DOT__inst_lbu) 
                                                << 4U) 
                                               | (((IData)(vlSelf->top__DOT__idu__DOT__inst_lh) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->top__DOT__idu__DOT__inst_lhu) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->top__DOT__idu__DOT__inst_lw) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->top__DOT__idu__DOT__inst_lwu))))))),6);
        tracep->fullCData(oldp+48,(vlSelf->top__DOT__exe_reg_l_bhw),6);
        tracep->fullCData(oldp+49,(vlSelf->top__DOT__mem_reg_l_bhw),6);
        tracep->fullSData(oldp+50,(vlSelf->top__DOT__op),12);
        tracep->fullSData(oldp+51,(vlSelf->top__DOT__op_out),12);
        tracep->fullSData(oldp+52,(vlSelf->top__DOT__exe_reg_op),12);
        tracep->fullIData(oldp+53,(vlSelf->top__DOT__inst),32);
        tracep->fullIData(oldp+54,((IData)(vlSelf->top__DOT__alu__DOT__add_sub_result)),32);
        tracep->fullIData(oldp+55,(vlSelf->top__DOT__mem_reg_ram_addr),32);
        tracep->fullIData(oldp+56,(vlSelf->top__DOT__inst_id),32);
        tracep->fullIData(oldp+57,(vlSelf->top__DOT__inst_out),32);
        tracep->fullQData(oldp+58,(vlSelf->top__DOT__imm),64);
        tracep->fullQData(oldp+60,(vlSelf->top__DOT__b_src2),64);
        tracep->fullQData(oldp+62,(((4U & (IData)(vlSelf->top__DOT__exe_reg_s_bhwd))
                                     ? (((QData)((IData)(
                                                         (0xffU 
                                                          & (IData)(vlSelf->top__DOT__src2)))) 
                                         << 0x38U) 
                                        | (((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(vlSelf->top__DOT__src2)))) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelf->top__DOT__src2)))) 
                                               << 0x28U) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->top__DOT__src2)))) 
                                                  << 0x20U) 
                                                 | (((QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->top__DOT__src2)))) 
                                                     << 0x18U) 
                                                    | (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(vlSelf->top__DOT__src2)))) 
                                                        << 0x10U) 
                                                       | (((QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(vlSelf->top__DOT__src2)))) 
                                                           << 8U) 
                                                          | (QData)((IData)(
                                                                            (0xffU 
                                                                             & (IData)(vlSelf->top__DOT__src2)))))))))))
                                     : ((2U & (IData)(vlSelf->top__DOT__exe_reg_s_bhwd))
                                         ? (((QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(vlSelf->top__DOT__src2)))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlSelf->top__DOT__src2)))) 
                                                << 0x20U) 
                                               | (((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->top__DOT__src2)))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->top__DOT__src2)))))))
                                         : ((1U & (IData)(vlSelf->top__DOT__exe_reg_s_bhwd))
                                             ? (((QData)((IData)(vlSelf->top__DOT__src2)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->top__DOT__src2)))
                                             : vlSelf->top__DOT__src2)))),64);
        tracep->fullQData(oldp+64,(vlSelf->top__DOT__pc_src1),64);
        tracep->fullQData(oldp+66,(vlSelf->top__DOT__common_reg__DOT__reg_com
                                   [0xaU]),64);
        tracep->fullQData(oldp+68,(((1U == (IData)(vlSelf->top__DOT__exe_reg_src1_sel))
                                     ? vlSelf->top__DOT__exe_reg_pc
                                     : vlSelf->top__DOT__exe_reg_src1_rs1)),64);
        tracep->fullQData(oldp+70,(((1U == (IData)(vlSelf->top__DOT__exe_reg_src2_sel))
                                     ? vlSelf->top__DOT__exe_reg_imm
                                     : vlSelf->top__DOT__exe_reg_src2_rs2)),64);
        tracep->fullQData(oldp+72,(vlSelf->top__DOT__if_pc),64);
        tracep->fullQData(oldp+74,(vlSelf->top__DOT__exe_reg_src1_rs1),64);
        tracep->fullQData(oldp+76,(vlSelf->top__DOT__exe_reg_src2_rs2),64);
        tracep->fullQData(oldp+78,(vlSelf->top__DOT__mem_reg_pc),64);
        tracep->fullQData(oldp+80,(vlSelf->top__DOT__wb_reg_rdata),64);
        tracep->fullQData(oldp+82,(vlSelf->top__DOT__wb_reg_data_rd_in),64);
        tracep->fullQData(oldp+84,(vlSelf->top__DOT__mem_reg_src2_rs2),64);
        tracep->fullQData(oldp+86,(vlSelf->top__DOT__mem_reg_data_rd_in),64);
        tracep->fullQData(oldp+88,(vlSelf->top__DOT__exe_reg_imm),64);
        tracep->fullQData(oldp+90,(vlSelf->top__DOT__cpu_pc),64);
        tracep->fullQData(oldp+92,(vlSelf->top__DOT__wb_reg_pc),64);
        tracep->fullQData(oldp+94,(vlSelf->top__DOT__exe_reg_pc),64);
        tracep->fullQData(oldp+96,(vlSelf->top__DOT__id_reg_pc),64);
        tracep->fullQData(oldp+98,(((1U == (IData)(vlSelf->top__DOT__pc_sel_out))
                                     ? (4ULL + vlSelf->top__DOT__cpu_pc)
                                     : ((2U == (IData)(vlSelf->top__DOT__pc_sel_out))
                                         ? (vlSelf->top__DOT__id_reg_pc 
                                            + vlSelf->top__DOT__imm)
                                         : (0xfffffffffffffffeULL 
                                            & (vlSelf->top__DOT__pc_src1 
                                               + vlSelf->top__DOT__imm))))),64);
        tracep->fullQData(oldp+100,((4ULL + vlSelf->top__DOT__cpu_pc)),64);
        tracep->fullQData(oldp+102,(vlSelf->top__DOT__rdata),64);
        tracep->fullQData(oldp+104,(vlSelf->top__DOT__src1_rs1),64);
        tracep->fullQData(oldp+106,(vlSelf->top__DOT__src2_rs2),64);
        tracep->fullQData(oldp+108,((vlSelf->top__DOT__id_reg_pc 
                                     + vlSelf->top__DOT__imm)),64);
        tracep->fullQData(oldp+110,((0xfffffffffffffffeULL 
                                     & (vlSelf->top__DOT__pc_src1 
                                        + vlSelf->top__DOT__imm))),64);
        tracep->fullQData(oldp+112,(vlSelf->top__DOT__src1),64);
        tracep->fullQData(oldp+114,(vlSelf->top__DOT__src2),64);
        tracep->fullQData(oldp+116,(vlSelf->top__DOT__data_rd_in),64);
        tracep->fullSData(oldp+118,((0xffffU & (IData)(
                                                       ((vlSelf->top__DOT__cpu_pc 
                                                         - 0x80000000ULL) 
                                                        >> 2U)))),16);
        tracep->fullBit(oldp+119,(vlSelf->top__DOT__idu__DOT__TYPE_I));
        tracep->fullBit(oldp+120,(vlSelf->top__DOT__idu__DOT__TYPE_U));
        tracep->fullBit(oldp+121,((0x6fU == (0x7fU 
                                             & vlSelf->top__DOT__inst_id))));
        tracep->fullBit(oldp+122,((0x63U == (0x7fU 
                                             & vlSelf->top__DOT__inst_id))));
        tracep->fullBit(oldp+123,(((0x33U == (0x7fU 
                                              & vlSelf->top__DOT__inst_id)) 
                                   | (0x3bU == (0x7fU 
                                                & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+124,((0x37U == (0x7fU 
                                             & vlSelf->top__DOT__inst_id))));
        tracep->fullBit(oldp+125,(vlSelf->top__DOT__idu__DOT__inst_lwu));
        tracep->fullBit(oldp+126,((0x17U == (0x7fU 
                                             & vlSelf->top__DOT__inst_id))));
        tracep->fullBit(oldp+127,((IData)((0x63U == 
                                           (0x707fU 
                                            & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+128,((IData)((0x1063U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+129,((IData)((0x4063U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+130,((IData)((0x5063U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+131,((IData)((0x6063U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+132,((IData)((0x7063U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+133,(vlSelf->top__DOT__idu__DOT__inst_jalr));
        tracep->fullBit(oldp+134,(vlSelf->top__DOT__idu__DOT__inst_lb));
        tracep->fullBit(oldp+135,(vlSelf->top__DOT__idu__DOT__inst_lh));
        tracep->fullBit(oldp+136,(vlSelf->top__DOT__idu__DOT__inst_lw));
        tracep->fullBit(oldp+137,((IData)((0x3003U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+138,(vlSelf->top__DOT__idu__DOT__inst_lbu));
        tracep->fullBit(oldp+139,(vlSelf->top__DOT__idu__DOT__inst_lhu));
        tracep->fullBit(oldp+140,((IData)((0x13U == 
                                           (0x707fU 
                                            & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+141,((IData)((0x2013U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+142,((IData)((0x3013U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+143,((IData)((0x4013U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+144,((IData)((0x6013U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+145,((IData)((0x7013U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+146,(((IData)((0x1013U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__inst_id 
                                             >> 0x1aU)))));
        tracep->fullBit(oldp+147,(((IData)((0x5013U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__inst_id 
                                             >> 0x1aU)))));
        tracep->fullBit(oldp+148,(((IData)((0x5013U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__inst_id))) 
                                   & (0x10U == (vlSelf->top__DOT__inst_id 
                                                >> 0x1aU)))));
        tracep->fullBit(oldp+149,((IData)((0x23U == 
                                           (0x707fU 
                                            & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+150,((IData)((0x1023U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+151,((IData)((0x2023U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+152,((IData)((0x3023U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+153,(((IData)((0x33U == 
                                            (0x707fU 
                                             & vlSelf->top__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+154,(((IData)((0x33U == 
                                            (0x707fU 
                                             & vlSelf->top__DOT__inst_id))) 
                                   & (0x20U == (vlSelf->top__DOT__inst_id 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+155,(((IData)((0x1033U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+156,(((IData)((0x2033U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+157,(((IData)((0x3033U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+158,(((IData)((0x4033U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+159,(((IData)((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+160,(((IData)((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__inst_id))) 
                                   & (0x20U == (vlSelf->top__DOT__inst_id 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+161,(((IData)((0x6033U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+162,(((IData)((0x7033U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+163,((((((IData)((0x1033U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__inst_id))) 
                                      & (0U == (vlSelf->top__DOT__inst_id 
                                                >> 0x19U))) 
                                     | (IData)(vlSelf->top__DOT__idu__DOT__inst_sllw)) 
                                    | ((IData)((0x1013U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->top__DOT__inst_id))) 
                                       & (0U == (vlSelf->top__DOT__inst_id 
                                                 >> 0x1aU)))) 
                                   | (IData)(vlSelf->top__DOT__idu__DOT__inst_slliw))));
        tracep->fullBit(oldp+164,((((IData)((0x2033U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__inst_id))) 
                                    & (0U == (vlSelf->top__DOT__inst_id 
                                              >> 0x19U))) 
                                   | (IData)((0x2013U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__inst_id))))));
        tracep->fullBit(oldp+165,((((IData)((0x3033U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__inst_id))) 
                                    & (0U == (vlSelf->top__DOT__inst_id 
                                              >> 0x19U))) 
                                   | (IData)((0x3013U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__inst_id))))));
        tracep->fullBit(oldp+166,((((IData)((0x4033U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__inst_id))) 
                                    & (0U == (vlSelf->top__DOT__inst_id 
                                              >> 0x19U))) 
                                   | (IData)((0x4013U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__inst_id))))));
        tracep->fullBit(oldp+167,((((((IData)((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__inst_id))) 
                                      & (0U == (vlSelf->top__DOT__inst_id 
                                                >> 0x19U))) 
                                     | (IData)(vlSelf->top__DOT__idu__DOT__inst_srlw)) 
                                    | ((IData)((0x5013U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->top__DOT__inst_id))) 
                                       & (0U == (vlSelf->top__DOT__inst_id 
                                                 >> 0x1aU)))) 
                                   | (IData)(vlSelf->top__DOT__idu__DOT__inst_srliw))));
        tracep->fullBit(oldp+168,((((((IData)((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__inst_id))) 
                                      & (0x20U == (vlSelf->top__DOT__inst_id 
                                                   >> 0x19U))) 
                                     | (IData)(vlSelf->top__DOT__idu__DOT__inst_sraw)) 
                                    | ((IData)((0x5013U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->top__DOT__inst_id))) 
                                       & (0x10U == 
                                          (vlSelf->top__DOT__inst_id 
                                           >> 0x1aU)))) 
                                   | (IData)(vlSelf->top__DOT__idu__DOT__inst_sraiw))));
        tracep->fullBit(oldp+169,((((IData)((0x6033U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__inst_id))) 
                                    & (0U == (vlSelf->top__DOT__inst_id 
                                              >> 0x19U))) 
                                   | (IData)((0x6013U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__inst_id))))));
        tracep->fullBit(oldp+170,((((IData)((0x7033U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__inst_id))) 
                                    & (0U == (vlSelf->top__DOT__inst_id 
                                              >> 0x19U))) 
                                   | (IData)((0x7013U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__inst_id))))));
        tracep->fullBit(oldp+171,(vlSelf->top__DOT__idu__DOT__inst_addiw));
        tracep->fullBit(oldp+172,(vlSelf->top__DOT__idu__DOT__inst_slliw));
        tracep->fullBit(oldp+173,(vlSelf->top__DOT__idu__DOT__inst_srliw));
        tracep->fullBit(oldp+174,(vlSelf->top__DOT__idu__DOT__inst_sraiw));
        tracep->fullBit(oldp+175,(vlSelf->top__DOT__idu__DOT__inst_addw));
        tracep->fullBit(oldp+176,(vlSelf->top__DOT__idu__DOT__inst_subw));
        tracep->fullBit(oldp+177,(vlSelf->top__DOT__idu__DOT__inst_sllw));
        tracep->fullBit(oldp+178,(vlSelf->top__DOT__idu__DOT__inst_srlw));
        tracep->fullBit(oldp+179,(vlSelf->top__DOT__idu__DOT__inst_sraw));
        tracep->fullQData(oldp+180,((((- (QData)((IData)(
                                                         (vlSelf->top__DOT__inst_id 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 (vlSelf->top__DOT__inst_id 
                                                                  >> 0x14U))))),64);
        tracep->fullQData(oldp+182,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->top__DOT__inst_id 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (0xfffff000U 
                                                                   & vlSelf->top__DOT__inst_id))))),64);
        tracep->fullQData(oldp+184,((((- (QData)((IData)(
                                                         (vlSelf->top__DOT__inst_id 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 ((0xfe0U 
                                                                   & (vlSelf->top__DOT__inst_id 
                                                                      >> 0x14U)) 
                                                                  | (0x1fU 
                                                                     & (vlSelf->top__DOT__inst_id 
                                                                        >> 7U))))))),64);
        tracep->fullQData(oldp+186,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+188,((((- (QData)((IData)(
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
        tracep->fullCData(oldp+190,((0x7fU & vlSelf->top__DOT__inst_id)),7);
        tracep->fullCData(oldp+191,((vlSelf->top__DOT__inst_id 
                                     >> 0x19U)),7);
        tracep->fullCData(oldp+192,((7U & (vlSelf->top__DOT__inst_id 
                                           >> 0xcU))),3);
        tracep->fullQData(oldp+193,(vlSelf->top__DOT__common_reg__DOT__reg_com[0]),64);
        tracep->fullQData(oldp+195,(vlSelf->top__DOT__common_reg__DOT__reg_com[1]),64);
        tracep->fullQData(oldp+197,(vlSelf->top__DOT__common_reg__DOT__reg_com[2]),64);
        tracep->fullQData(oldp+199,(vlSelf->top__DOT__common_reg__DOT__reg_com[3]),64);
        tracep->fullQData(oldp+201,(vlSelf->top__DOT__common_reg__DOT__reg_com[4]),64);
        tracep->fullQData(oldp+203,(vlSelf->top__DOT__common_reg__DOT__reg_com[5]),64);
        tracep->fullQData(oldp+205,(vlSelf->top__DOT__common_reg__DOT__reg_com[6]),64);
        tracep->fullQData(oldp+207,(vlSelf->top__DOT__common_reg__DOT__reg_com[7]),64);
        tracep->fullQData(oldp+209,(vlSelf->top__DOT__common_reg__DOT__reg_com[8]),64);
        tracep->fullQData(oldp+211,(vlSelf->top__DOT__common_reg__DOT__reg_com[9]),64);
        tracep->fullQData(oldp+213,(vlSelf->top__DOT__common_reg__DOT__reg_com[10]),64);
        tracep->fullQData(oldp+215,(vlSelf->top__DOT__common_reg__DOT__reg_com[11]),64);
        tracep->fullQData(oldp+217,(vlSelf->top__DOT__common_reg__DOT__reg_com[12]),64);
        tracep->fullQData(oldp+219,(vlSelf->top__DOT__common_reg__DOT__reg_com[13]),64);
        tracep->fullQData(oldp+221,(vlSelf->top__DOT__common_reg__DOT__reg_com[14]),64);
        tracep->fullQData(oldp+223,(vlSelf->top__DOT__common_reg__DOT__reg_com[15]),64);
        tracep->fullQData(oldp+225,(vlSelf->top__DOT__common_reg__DOT__reg_com[16]),64);
        tracep->fullQData(oldp+227,(vlSelf->top__DOT__common_reg__DOT__reg_com[17]),64);
        tracep->fullQData(oldp+229,(vlSelf->top__DOT__common_reg__DOT__reg_com[18]),64);
        tracep->fullQData(oldp+231,(vlSelf->top__DOT__common_reg__DOT__reg_com[19]),64);
        tracep->fullQData(oldp+233,(vlSelf->top__DOT__common_reg__DOT__reg_com[20]),64);
        tracep->fullQData(oldp+235,(vlSelf->top__DOT__common_reg__DOT__reg_com[21]),64);
        tracep->fullQData(oldp+237,(vlSelf->top__DOT__common_reg__DOT__reg_com[22]),64);
        tracep->fullQData(oldp+239,(vlSelf->top__DOT__common_reg__DOT__reg_com[23]),64);
        tracep->fullQData(oldp+241,(vlSelf->top__DOT__common_reg__DOT__reg_com[24]),64);
        tracep->fullQData(oldp+243,(vlSelf->top__DOT__common_reg__DOT__reg_com[25]),64);
        tracep->fullQData(oldp+245,(vlSelf->top__DOT__common_reg__DOT__reg_com[26]),64);
        tracep->fullQData(oldp+247,(vlSelf->top__DOT__common_reg__DOT__reg_com[27]),64);
        tracep->fullQData(oldp+249,(vlSelf->top__DOT__common_reg__DOT__reg_com[28]),64);
        tracep->fullQData(oldp+251,(vlSelf->top__DOT__common_reg__DOT__reg_com[29]),64);
        tracep->fullQData(oldp+253,(vlSelf->top__DOT__common_reg__DOT__reg_com[30]),64);
        tracep->fullQData(oldp+255,(vlSelf->top__DOT__common_reg__DOT__reg_com[31]),64);
        tracep->fullBit(oldp+257,((1U & ((((((((IData)(vlSelf->top__DOT__b_check) 
                                               >> 5U) 
                                              & (IData)(vlSelf->top__DOT__b_check_out__DOT__beq_check)) 
                                             | (((IData)(vlSelf->top__DOT__b_check) 
                                                 >> 4U) 
                                                & (~ (IData)(vlSelf->top__DOT__b_check_out__DOT__beq_check)))) 
                                            | (((IData)(vlSelf->top__DOT__b_check) 
                                                >> 3U) 
                                               & (IData)(vlSelf->top__DOT__b_check_out__DOT__blt_check))) 
                                           | (((IData)(vlSelf->top__DOT__b_check) 
                                               >> 2U) 
                                              & (~ (IData)(vlSelf->top__DOT__b_check_out__DOT__blt_check)))) 
                                          | (((IData)(vlSelf->top__DOT__b_check) 
                                              >> 1U) 
                                             & (~ (IData)(vlSelf->top__DOT__b_check_out__DOT__data_cout)))) 
                                         | ((IData)(vlSelf->top__DOT__b_check) 
                                            & (IData)(vlSelf->top__DOT__b_check_out__DOT__data_cout))))));
        tracep->fullBit(oldp+258,(vlSelf->top__DOT__b_check_out__DOT__beq_check));
        tracep->fullBit(oldp+259,((1U & (~ (IData)(vlSelf->top__DOT__b_check_out__DOT__beq_check)))));
        tracep->fullBit(oldp+260,(vlSelf->top__DOT__b_check_out__DOT__blt_check));
        tracep->fullBit(oldp+261,((1U & (~ (IData)(vlSelf->top__DOT__b_check_out__DOT__blt_check)))));
        tracep->fullBit(oldp+262,((1U & (~ (IData)(vlSelf->top__DOT__b_check_out__DOT__data_cout)))));
        tracep->fullBit(oldp+263,(vlSelf->top__DOT__b_check_out__DOT__data_cout));
        tracep->fullQData(oldp+264,((~ vlSelf->top__DOT__b_src2)),64);
        tracep->fullQData(oldp+266,((1ULL + (vlSelf->top__DOT__pc_src1 
                                             + (~ vlSelf->top__DOT__b_src2)))),64);
        tracep->fullBit(oldp+268,((1U & ((IData)(vlSelf->top__DOT__exe_reg_s_bhwd) 
                                         >> 2U))));
        tracep->fullBit(oldp+269,((1U & ((IData)(vlSelf->top__DOT__exe_reg_s_bhwd) 
                                         >> 1U))));
        tracep->fullBit(oldp+270,((1U & (IData)(vlSelf->top__DOT__exe_reg_s_bhwd))));
        tracep->fullBit(oldp+271,((1U & (IData)(vlSelf->top__DOT__exe_reg_op))));
        tracep->fullBit(oldp+272,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 1U))));
        tracep->fullBit(oldp+273,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 2U))));
        tracep->fullBit(oldp+274,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 3U))));
        tracep->fullBit(oldp+275,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 4U))));
        tracep->fullBit(oldp+276,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 5U))));
        tracep->fullBit(oldp+277,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 6U))));
        tracep->fullBit(oldp+278,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 7U))));
        tracep->fullBit(oldp+279,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 8U))));
        tracep->fullBit(oldp+280,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 9U))));
        tracep->fullBit(oldp+281,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 0xaU))));
        tracep->fullBit(oldp+282,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 0xbU))));
        tracep->fullIData(oldp+283,(vlSelf->top__DOT__alu__DOT__srl_w1_result),32);
        tracep->fullIData(oldp+284,(vlSelf->top__DOT__alu__DOT__sra_w1_result),32);
        tracep->fullQData(oldp+285,(((IData)(vlSelf->top__DOT__exe_reg_w_check)
                                      ? (((QData)((IData)(
                                                          (- (IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__alu__DOT__data_result 
                                                                                >> 0x1fU))))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->top__DOT__alu__DOT__data_result)))
                                      : vlSelf->top__DOT__alu__DOT__data_result)),64);
        tracep->fullQData(oldp+287,(vlSelf->top__DOT__alu__DOT__sll_w1_result),64);
        tracep->fullQData(oldp+289,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__alu__DOT__sll_w1_result 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__alu__DOT__sll_w1_result)))),64);
        tracep->fullQData(oldp+291,((vlSelf->top__DOT__src1 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__src2)))),64);
        tracep->fullQData(oldp+293,(VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__src1, 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->top__DOT__src2)))),64);
        tracep->fullQData(oldp+295,((vlSelf->top__DOT__src1 
                                     << (0x3fU & (IData)(vlSelf->top__DOT__src2)))),64);
        tracep->fullQData(oldp+297,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->top__DOT__alu__DOT__srl_w1_result 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__alu__DOT__srl_w1_result)))),64);
        tracep->fullQData(oldp+299,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->top__DOT__alu__DOT__sra_w1_result 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__alu__DOT__sra_w1_result)))),64);
        tracep->fullQData(oldp+301,(vlSelf->top__DOT__alu__DOT__add_sub_result),64);
        tracep->fullQData(oldp+303,((QData)((IData)(
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
        tracep->fullQData(oldp+305,((vlSelf->top__DOT__src1 
                                     + vlSelf->top__DOT__exe_reg_imm)),64);
        VL_EXTEND_WQ(65,64, __Vtemp33, vlSelf->top__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp34, vlSelf->top__DOT__alu__DOT__data_b);
        VL_ADD_W(3, __Vtemp35, __Vtemp33, __Vtemp34);
        VL_EXTEND_WI(65,1, __Vtemp36, (IData)(vlSelf->top__DOT__alu__DOT__data_cin));
        VL_ADD_W(3, __Vtemp37, __Vtemp35, __Vtemp36);
        tracep->fullQData(oldp+307,((QData)((IData)(
                                                    (1U 
                                                     & (~ 
                                                        (1U 
                                                         & __Vtemp37[2U])))))),64);
        tracep->fullQData(oldp+309,((vlSelf->top__DOT__src1 
                                     & vlSelf->top__DOT__src2)),64);
        tracep->fullQData(oldp+311,((vlSelf->top__DOT__src1 
                                     | vlSelf->top__DOT__src2)),64);
        tracep->fullQData(oldp+313,((vlSelf->top__DOT__src1 
                                     ^ vlSelf->top__DOT__src2)),64);
        tracep->fullQData(oldp+315,(((IData)(vlSelf->top__DOT__exe_reg_w_check)
                                      ? (((QData)((IData)(
                                                          (- (IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__alu__DOT__sll_w1_result 
                                                                                >> 0x1fU))))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->top__DOT__alu__DOT__sll_w1_result)))
                                      : (vlSelf->top__DOT__src1 
                                         << (0x3fU 
                                             & (IData)(vlSelf->top__DOT__src2))))),64);
        tracep->fullQData(oldp+317,(((IData)(vlSelf->top__DOT__exe_reg_w_check)
                                      ? (((QData)((IData)(
                                                          (- (IData)(
                                                                     (vlSelf->top__DOT__alu__DOT__srl_w1_result 
                                                                      >> 0x1fU))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->top__DOT__alu__DOT__srl_w1_result)))
                                      : (vlSelf->top__DOT__src1 
                                         >> (0x3fU 
                                             & (IData)(vlSelf->top__DOT__src2))))),64);
        tracep->fullQData(oldp+319,(((IData)(vlSelf->top__DOT__exe_reg_w_check)
                                      ? (((QData)((IData)(
                                                          (- (IData)(
                                                                     (vlSelf->top__DOT__alu__DOT__sra_w1_result 
                                                                      >> 0x1fU))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->top__DOT__alu__DOT__sra_w1_result)))
                                      : VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__src1, 
                                                       (0x3fU 
                                                        & (IData)(vlSelf->top__DOT__src2))))),64);
        tracep->fullQData(oldp+321,((4ULL + vlSelf->top__DOT__src1)),64);
        tracep->fullQData(oldp+323,(vlSelf->top__DOT__alu__DOT__data_b),64);
        tracep->fullQData(oldp+325,(vlSelf->top__DOT__alu__DOT__data_result),64);
        tracep->fullBit(oldp+327,(vlSelf->top__DOT__alu__DOT__data_cin));
        VL_EXTEND_WQ(65,64, __Vtemp40, vlSelf->top__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp41, vlSelf->top__DOT__alu__DOT__data_b);
        VL_ADD_W(3, __Vtemp42, __Vtemp40, __Vtemp41);
        VL_EXTEND_WI(65,1, __Vtemp43, (IData)(vlSelf->top__DOT__alu__DOT__data_cin));
        VL_ADD_W(3, __Vtemp44, __Vtemp42, __Vtemp43);
        tracep->fullBit(oldp+328,((1U & __Vtemp44[2U])));
        tracep->fullBit(oldp+329,((1U & ((IData)(vlSelf->top__DOT__mem_reg_s_bhwd) 
                                         >> 2U))));
        tracep->fullBit(oldp+330,((1U & ((IData)(vlSelf->top__DOT__mem_reg_s_bhwd) 
                                         >> 1U))));
        tracep->fullBit(oldp+331,((1U & (IData)(vlSelf->top__DOT__mem_reg_s_bhwd))));
        tracep->fullBit(oldp+332,((1U & ((IData)(vlSelf->top__DOT__mem_reg_l_bhw) 
                                         >> 5U))));
        tracep->fullBit(oldp+333,((1U & ((IData)(vlSelf->top__DOT__mem_reg_l_bhw) 
                                         >> 4U))));
        tracep->fullBit(oldp+334,((1U & ((IData)(vlSelf->top__DOT__mem_reg_l_bhw) 
                                         >> 3U))));
        tracep->fullBit(oldp+335,((1U & ((IData)(vlSelf->top__DOT__mem_reg_l_bhw) 
                                         >> 2U))));
        tracep->fullBit(oldp+336,((1U & ((IData)(vlSelf->top__DOT__mem_reg_l_bhw) 
                                         >> 1U))));
        tracep->fullBit(oldp+337,((1U & (IData)(vlSelf->top__DOT__mem_reg_l_bhw))));
        tracep->fullIData(oldp+338,(((vlSelf->top__DOT__mem_reg_ram_addr 
                                      - (IData)(0x80000000U)) 
                                     >> 2U)),32);
        tracep->fullQData(oldp+339,(vlSelf->top__DOT__data_ram__DOT__rdata_out),64);
        tracep->fullQData(oldp+341,(vlSelf->top__DOT__data_ram__DOT__rom),64);
        tracep->fullSData(oldp+343,(vlSelf->top__DOT__ebreak_list__DOT__op_1),12);
        tracep->fullBit(oldp+344,(vlSelf->top__DOT__ebreak_list__DOT__ebreak_1));
        tracep->fullIData(oldp+345,(vlSelf->top__DOT__ebreak_list__DOT__inst_1),32);
        tracep->fullBit(oldp+346,(vlSelf->clk));
        tracep->fullBit(oldp+347,(vlSelf->rst));
        tracep->fullQData(oldp+348,(vlSelf->data_rd),64);
        tracep->fullQData(oldp+350,(vlSelf->outdata),64);
        tracep->fullCData(oldp+352,(vlSelf->top__DOT__exe_reg_pc_sel),3);
        tracep->fullSData(oldp+353,(vlSelf->top__DOT__inst_addr),16);
        tracep->fullQData(oldp+354,(vlSelf->top__DOT__exe_reg_src1),64);
        tracep->fullQData(oldp+356,(vlSelf->top__DOT__exe_reg_src2),64);
        tracep->fullQData(oldp+358,(vlSelf->top__DOT__mem_reg_cpu_dnpc_in1),64);
        tracep->fullQData(oldp+360,(vlSelf->top__DOT__mem_reg_cpu_dnpc_in2),64);
        tracep->fullQData(oldp+362,(vlSelf->top__DOT__wb_reg_cpu_dnpc_in1),64);
        tracep->fullQData(oldp+364,(vlSelf->top__DOT__wb_reg_cpu_dnpc_in2),64);
        tracep->fullQData(oldp+366,(vlSelf->top__DOT__cpu_ifpc),64);
        tracep->fullQData(oldp+368,(vlSelf->top__DOT__if_reg_pc),64);
        tracep->fullBit(oldp+370,(1U));
        tracep->fullQData(oldp+371,(vlSelf->top__DOT__alu__DOT__srl_mid_result),64);
    }
}
