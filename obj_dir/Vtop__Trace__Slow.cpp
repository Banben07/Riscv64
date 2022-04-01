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
        tracep->declBit(c+307,"clk", false,-1);
        tracep->declBit(c+308,"rst", false,-1);
        tracep->declQuad(c+309,"data_rd", false,-1, 63,0);
        tracep->declBit(c+307,"top clk", false,-1);
        tracep->declBit(c+308,"top rst", false,-1);
        tracep->declQuad(c+309,"top data_rd", false,-1, 63,0);
        tracep->declBit(c+1,"top data_wen", false,-1);
        tracep->declBit(c+2,"top data_wen_out", false,-1);
        tracep->declBit(c+3,"top reg_wen_out", false,-1);
        tracep->declBit(c+4,"top stall_control", false,-1);
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
        tracep->declBus(c+26,"top mem_reg_s_bhwd", false,-1, 2,0);
        tracep->declBus(c+27,"top s_bhwd", false,-1, 2,0);
        tracep->declBus(c+28,"top exe_reg_s_bhwd", false,-1, 2,0);
        tracep->declBus(c+29,"top pc_sel_out", false,-1, 2,0);
        tracep->declBus(c+30,"top src1_sel_plus", false,-1, 2,0);
        tracep->declBus(c+31,"top src2_sel_plus", false,-1, 2,0);
        tracep->declBus(c+32,"top wb_reg_pc_sel", false,-1, 2,0);
        tracep->declBus(c+33,"top mem_reg_pc_sel", false,-1, 2,0);
        tracep->declBus(c+311,"top exe_reg_pc_sel", false,-1, 2,0);
        tracep->declBus(c+34,"top pc_add_rs1_sel", false,-1, 3,0);
        tracep->declBus(c+35,"top rs1", false,-1, 4,0);
        tracep->declBus(c+36,"top rs2", false,-1, 4,0);
        tracep->declBus(c+37,"top exe_reg_rs1", false,-1, 4,0);
        tracep->declBus(c+38,"top exe_reg_rs2", false,-1, 4,0);
        tracep->declBus(c+39,"top rd", false,-1, 4,0);
        tracep->declBus(c+40,"top mem_reg_rd", false,-1, 4,0);
        tracep->declBus(c+41,"top exe_reg_rd", false,-1, 4,0);
        tracep->declBus(c+42,"top wb_reg_rd", false,-1, 4,0);
        tracep->declBus(c+43,"top b_check", false,-1, 5,0);
        tracep->declBus(c+44,"top l_bhw", false,-1, 5,0);
        tracep->declBus(c+45,"top exe_reg_l_bhw", false,-1, 5,0);
        tracep->declBus(c+46,"top mem_reg_l_bhw", false,-1, 5,0);
        tracep->declBus(c+47,"top op", false,-1, 11,0);
        tracep->declBus(c+48,"top op_out", false,-1, 11,0);
        tracep->declBus(c+49,"top exe_reg_op", false,-1, 11,0);
        tracep->declBus(c+312,"top inst_addr", false,-1, 15,0);
        tracep->declBus(c+50,"top inst", false,-1, 31,0);
        tracep->declBus(c+51,"top ram_addr", false,-1, 31,0);
        tracep->declBus(c+52,"top mem_reg_ram_addr", false,-1, 31,0);
        tracep->declBus(c+53,"top inst_id", false,-1, 31,0);
        tracep->declBus(c+54,"top inst_out", false,-1, 31,0);
        tracep->declQuad(c+55,"top imm", false,-1, 63,0);
        tracep->declQuad(c+57,"top src2_out", false,-1, 63,0);
        tracep->declQuad(c+59,"top pc_src1", false,-1, 63,0);
        tracep->declQuad(c+61,"top data_a0", false,-1, 63,0);
        tracep->declQuad(c+63,"top one_src1", false,-1, 63,0);
        tracep->declQuad(c+65,"top one_src2", false,-1, 63,0);
        tracep->declQuad(c+67,"top if_pc", false,-1, 63,0);
        tracep->declQuad(c+69,"top exe_reg_src1_rs1", false,-1, 63,0);
        tracep->declQuad(c+313,"top exe_reg_src1", false,-1, 63,0);
        tracep->declQuad(c+315,"top exe_reg_src2", false,-1, 63,0);
        tracep->declQuad(c+71,"top exe_reg_src2_rs2", false,-1, 63,0);
        tracep->declQuad(c+73,"top mem_reg_pc", false,-1, 63,0);
        tracep->declQuad(c+75,"top wb_reg_rdata", false,-1, 63,0);
        tracep->declQuad(c+77,"top wb_reg_data_rd_in", false,-1, 63,0);
        tracep->declQuad(c+79,"top mem_reg_src2_rs2", false,-1, 63,0);
        tracep->declQuad(c+81,"top mem_reg_data_rd_in", false,-1, 63,0);
        tracep->declQuad(c+317,"top mem_reg_cpu_dnpc_in1", false,-1, 63,0);
        tracep->declQuad(c+319,"top mem_reg_cpu_dnpc_in2", false,-1, 63,0);
        tracep->declQuad(c+83,"top exe_reg_imm", false,-1, 63,0);
        tracep->declQuad(c+85,"top cpu_pc", false,-1, 63,0);
        tracep->declQuad(c+87,"top wb_reg_pc", false,-1, 63,0);
        tracep->declQuad(c+321,"top wb_reg_cpu_dnpc_in1", false,-1, 63,0);
        tracep->declQuad(c+323,"top wb_reg_cpu_dnpc_in2", false,-1, 63,0);
        tracep->declQuad(c+89,"top exe_reg_pc", false,-1, 63,0);
        tracep->declQuad(c+325,"top cpu_ifpc", false,-1, 63,0);
        tracep->declQuad(c+327,"top if_reg_pc", false,-1, 63,0);
        tracep->declQuad(c+91,"top id_reg_pc", false,-1, 63,0);
        tracep->declQuad(c+93,"top cpu_dnpc", false,-1, 63,0);
        tracep->declQuad(c+95,"top cpu_snpc", false,-1, 63,0);
        tracep->declQuad(c+97,"top rdata", false,-1, 63,0);
        tracep->declQuad(c+99,"top src1_rs1", false,-1, 63,0);
        tracep->declQuad(c+101,"top src2_rs2", false,-1, 63,0);
        tracep->declQuad(c+103,"top cpu_dnpc_in1", false,-1, 63,0);
        tracep->declQuad(c+105,"top cpu_dnpc_in2", false,-1, 63,0);
        tracep->declQuad(c+107,"top src1", false,-1, 63,0);
        tracep->declQuad(c+109,"top src2", false,-1, 63,0);
        tracep->declQuad(c+111,"top data_rd_in", false,-1, 63,0);
        tracep->declBus(c+29,"top Hazard_unit pc_jump", false,-1, 2,0);
        tracep->declBus(c+35,"top Hazard_unit rs1", false,-1, 4,0);
        tracep->declBus(c+36,"top Hazard_unit rs2", false,-1, 4,0);
        tracep->declBus(c+41,"top Hazard_unit exe_reg_rd", false,-1, 4,0);
        tracep->declBit(c+6,"top Hazard_unit exe_reg_data_ren", false,-1);
        tracep->declBit(c+4,"top Hazard_unit stall_control", false,-1);
        tracep->declBit(c+8,"top Hazard_unit IF_Flush", false,-1);
        tracep->declBus(c+37,"top Foward_unit exe_reg_rs1", false,-1, 4,0);
        tracep->declBus(c+38,"top Foward_unit exe_reg_rs2", false,-1, 4,0);
        tracep->declBus(c+35,"top Foward_unit pc_rs1", false,-1, 4,0);
        tracep->declBus(c+41,"top Foward_unit exe_reg_rd", false,-1, 4,0);
        tracep->declBus(c+40,"top Foward_unit mem_reg_rd", false,-1, 4,0);
        tracep->declBus(c+42,"top Foward_unit wb_reg_rd", false,-1, 4,0);
        tracep->declBit(c+15,"top Foward_unit exe_reg_reg_wen", false,-1);
        tracep->declBit(c+12,"top Foward_unit mem_reg_reg_wen", false,-1);
        tracep->declBit(c+16,"top Foward_unit wb_reg_reg_wen", false,-1);
        tracep->declBus(c+30,"top Foward_unit src1_sel_plus", false,-1, 2,0);
        tracep->declBus(c+31,"top Foward_unit src2_sel_plus", false,-1, 2,0);
        tracep->declBus(c+34,"top Foward_unit pc_add_rs1_sel", false,-1, 3,0);
        tracep->declQuad(c+95,"top pc_sel_choice in0", false,-1, 63,0);
        tracep->declQuad(c+103,"top pc_sel_choice in1", false,-1, 63,0);
        tracep->declQuad(c+105,"top pc_sel_choice in2", false,-1, 63,0);
        tracep->declBus(c+29,"top pc_sel_choice key", false,-1, 2,0);
        tracep->declQuad(c+93,"top pc_sel_choice out", false,-1, 63,0);
        tracep->declQuad(c+93,"top pc cpu_dnpc", false,-1, 63,0);
        tracep->declBit(c+307,"top pc clk", false,-1);
        tracep->declBit(c+308,"top pc rst", false,-1);
        tracep->declBit(c+4,"top pc stall", false,-1);
        tracep->declQuad(c+85,"top pc cpu_pc", false,-1, 63,0);
        tracep->declBit(c+307,"top inst_ram clk", false,-1);
        tracep->declQuad(c+85,"top inst_ram cpu_pc", false,-1, 63,0);
        tracep->declBit(c+308,"top inst_ram rst", false,-1);
        tracep->declBus(c+50,"top inst_ram inst", false,-1, 31,0);
        tracep->declQuad(c+67,"top inst_ram if_pc", false,-1, 63,0);
        tracep->declBus(c+113,"top inst_ram addr", false,-1, 15,0);
        tracep->declBit(c+307,"top id_reg clk", false,-1);
        tracep->declBit(c+308,"top id_reg rst", false,-1);
        tracep->declBit(c+4,"top id_reg stall", false,-1);
        tracep->declBit(c+8,"top id_reg IF_Flush", false,-1);
        tracep->declBus(c+50,"top id_reg id_reg_in0", false,-1, 31,0);
        tracep->declQuad(c+67,"top id_reg id_reg_in1", false,-1, 63,0);
        tracep->declBus(c+53,"top id_reg id_reg_out0", false,-1, 31,0);
        tracep->declQuad(c+91,"top id_reg id_reg_out1", false,-1, 63,0);
        tracep->declBus(c+53,"top idu inst", false,-1, 31,0);
        tracep->declQuad(c+55,"top idu imm", false,-1, 63,0);
        tracep->declBus(c+47,"top idu op", false,-1, 11,0);
        tracep->declBus(c+43,"top idu b_check", false,-1, 5,0);
        tracep->declBus(c+44,"top idu l_bhw", false,-1, 5,0);
        tracep->declBus(c+39,"top idu rd", false,-1, 4,0);
        tracep->declBus(c+35,"top idu rs1", false,-1, 4,0);
        tracep->declBus(c+36,"top idu rs2", false,-1, 4,0);
        tracep->declBus(c+27,"top idu s_bhwd", false,-1, 2,0);
        tracep->declBus(c+25,"top idu pc_sel", false,-1, 2,0);
        tracep->declBus(c+17,"top idu src1_sel", false,-1, 1,0);
        tracep->declBus(c+21,"top idu src2_sel", false,-1, 1,0);
        tracep->declBus(c+23,"top idu load_sel", false,-1, 1,0);
        tracep->declBit(c+1,"top idu data_wen", false,-1);
        tracep->declBit(c+5,"top idu data_ren", false,-1);
        tracep->declBit(c+9,"top idu ebreak", false,-1);
        tracep->declBit(c+11,"top idu reg_wen", false,-1);
        tracep->declBit(c+114,"top idu TYPE_I", false,-1);
        tracep->declBit(c+115,"top idu TYPE_U", false,-1);
        tracep->declBit(c+116,"top idu TYPE_S", false,-1);
        tracep->declBit(c+117,"top idu TYPE_J", false,-1);
        tracep->declBit(c+118,"top idu TYPE_B", false,-1);
        tracep->declBit(c+119,"top idu TYPE_R", false,-1);
        tracep->declBit(c+120,"top idu inst_lui", false,-1);
        tracep->declBit(c+121,"top idu inst_lwu", false,-1);
        tracep->declBit(c+122,"top idu inst_auipc", false,-1);
        tracep->declBit(c+117,"top idu inst_jal", false,-1);
        tracep->declBit(c+123,"top idu inst_beq", false,-1);
        tracep->declBit(c+124,"top idu inst_bne", false,-1);
        tracep->declBit(c+125,"top idu inst_blt", false,-1);
        tracep->declBit(c+126,"top idu inst_bge", false,-1);
        tracep->declBit(c+127,"top idu inst_bltu", false,-1);
        tracep->declBit(c+128,"top idu inst_bgeu", false,-1);
        tracep->declBit(c+129,"top idu inst_jalr", false,-1);
        tracep->declBit(c+130,"top idu inst_lb", false,-1);
        tracep->declBit(c+131,"top idu inst_lh", false,-1);
        tracep->declBit(c+132,"top idu inst_lw", false,-1);
        tracep->declBit(c+133,"top idu inst_ld", false,-1);
        tracep->declBit(c+134,"top idu inst_lbu", false,-1);
        tracep->declBit(c+135,"top idu inst_lhu", false,-1);
        tracep->declBit(c+136,"top idu inst_addi", false,-1);
        tracep->declBit(c+137,"top idu inst_slti", false,-1);
        tracep->declBit(c+138,"top idu inst_sltiu", false,-1);
        tracep->declBit(c+139,"top idu inst_xori", false,-1);
        tracep->declBit(c+140,"top idu inst_ori", false,-1);
        tracep->declBit(c+141,"top idu inst_andi", false,-1);
        tracep->declBit(c+142,"top idu inst_slli", false,-1);
        tracep->declBit(c+143,"top idu inst_srli", false,-1);
        tracep->declBit(c+144,"top idu inst_srai", false,-1);
        tracep->declBit(c+9,"top idu inst_ebreak", false,-1);
        tracep->declBit(c+145,"top idu inst_sb", false,-1);
        tracep->declBit(c+146,"top idu inst_sh", false,-1);
        tracep->declBit(c+147,"top idu inst_sw", false,-1);
        tracep->declBit(c+148,"top idu inst_sd", false,-1);
        tracep->declBit(c+149,"top idu inst_add", false,-1);
        tracep->declBit(c+150,"top idu inst_sub", false,-1);
        tracep->declBit(c+151,"top idu inst_sll", false,-1);
        tracep->declBit(c+152,"top idu inst_slt", false,-1);
        tracep->declBit(c+153,"top idu inst_sltu", false,-1);
        tracep->declBit(c+154,"top idu inst_xor", false,-1);
        tracep->declBit(c+155,"top idu inst_srl", false,-1);
        tracep->declBit(c+156,"top idu inst_sra", false,-1);
        tracep->declBit(c+157,"top idu inst_or", false,-1);
        tracep->declBit(c+158,"top idu inst_and", false,-1);
        tracep->declBit(c+159,"top idu l_check", false,-1);
        tracep->declQuad(c+160,"top idu immI", false,-1, 63,0);
        tracep->declQuad(c+162,"top idu immU", false,-1, 63,0);
        tracep->declQuad(c+164,"top idu immS", false,-1, 63,0);
        tracep->declQuad(c+166,"top idu immJ", false,-1, 63,0);
        tracep->declQuad(c+168,"top idu immB", false,-1, 63,0);
        tracep->declBus(c+170,"top idu opcode", false,-1, 6,0);
        tracep->declBus(c+171,"top idu funct7", false,-1, 6,0);
        tracep->declBus(c+172,"top idu funct3", false,-1, 2,0);
        tracep->declBus(c+43,"top b_check_out b_check", false,-1, 5,0);
        tracep->declBus(c+25,"top b_check_out pc_sel", false,-1, 2,0);
        tracep->declQuad(c+99,"top b_check_out rs1_data", false,-1, 63,0);
        tracep->declQuad(c+101,"top b_check_out rs2_data", false,-1, 63,0);
        tracep->declBus(c+29,"top b_check_out pc_sel_out", false,-1, 2,0);
        tracep->declBit(c+173,"top b_check_out b_en", false,-1);
        tracep->declBit(c+329,"top b_check_out beq_check", false,-1);
        tracep->declBit(c+330,"top b_check_out bne_check", false,-1);
        tracep->declBit(c+174,"top b_check_out blt_check", false,-1);
        tracep->declBit(c+175,"top b_check_out bge_check", false,-1);
        tracep->declBit(c+176,"top b_check_out bltu_check", false,-1);
        tracep->declBit(c+177,"top b_check_out bgeu_check", false,-1);
        tracep->declBit(c+329,"top b_check_out data_cin", false,-1);
        tracep->declBit(c+177,"top b_check_out data_cout", false,-1);
        tracep->declQuad(c+99,"top b_check_out data_a", false,-1, 63,0);
        tracep->declQuad(c+178,"top b_check_out data_b", false,-1, 63,0);
        tracep->declQuad(c+180,"top b_check_out data_result", false,-1, 63,0);
        tracep->declBit(c+1,"top control_stall data_wen", false,-1);
        tracep->declBit(c+11,"top control_stall reg_wen", false,-1);
        tracep->declBit(c+4,"top control_stall stall", false,-1);
        tracep->declBit(c+2,"top control_stall data_wen_out", false,-1);
        tracep->declBit(c+3,"top control_stall reg_wen_out", false,-1);
        tracep->declQuad(c+309,"top common_reg data_rd", false,-1, 63,0);
        tracep->declBus(c+42,"top common_reg addr_rd", false,-1, 4,0);
        tracep->declBus(c+35,"top common_reg addr_rs1", false,-1, 4,0);
        tracep->declBus(c+36,"top common_reg addr_rs2", false,-1, 4,0);
        tracep->declBit(c+16,"top common_reg en", false,-1);
        tracep->declBit(c+307,"top common_reg clk", false,-1);
        tracep->declQuad(c+61,"top common_reg data_a0", false,-1, 63,0);
        tracep->declQuad(c+99,"top common_reg data_rs1", false,-1, 63,0);
        tracep->declQuad(c+101,"top common_reg data_rs2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+182+i*2,"top common_reg reg_com", true,(i+0), 63,0);}}
        tracep->declQuad(c+99,"top pc_add_src1_choice in0", false,-1, 63,0);
        tracep->declQuad(c+111,"top pc_add_src1_choice in1", false,-1, 63,0);
        tracep->declQuad(c+81,"top pc_add_src1_choice in2", false,-1, 63,0);
        tracep->declQuad(c+77,"top pc_add_src1_choice in3", false,-1, 63,0);
        tracep->declBus(c+34,"top pc_add_src1_choice key", false,-1, 3,0);
        tracep->declQuad(c+59,"top pc_add_src1_choice out", false,-1, 63,0);
        tracep->declQuad(c+91,"top pc_add pc_in", false,-1, 63,0);
        tracep->declQuad(c+59,"top pc_add src1_in", false,-1, 63,0);
        tracep->declQuad(c+55,"top pc_add imm_in", false,-1, 63,0);
        tracep->declQuad(c+103,"top pc_add cpu_dnpc_in1", false,-1, 63,0);
        tracep->declQuad(c+105,"top pc_add cpu_dnpc_in2", false,-1, 63,0);
        tracep->declBit(c+307,"top exe_reg clk", false,-1);
        tracep->declBit(c+308,"top exe_reg rst", false,-1);
        tracep->declQuad(c+91,"top exe_reg exe_reg_in0", false,-1, 63,0);
        tracep->declBus(c+47,"top exe_reg exe_reg_in1", false,-1, 11,0);
        tracep->declBus(c+39,"top exe_reg exe_reg_in2", false,-1, 4,0);
        tracep->declQuad(c+99,"top exe_reg exe_reg_in3", false,-1, 63,0);
        tracep->declBus(c+17,"top exe_reg exe_reg_in4", false,-1, 1,0);
        tracep->declQuad(c+101,"top exe_reg exe_reg_in5", false,-1, 63,0);
        tracep->declBit(c+2,"top exe_reg exe_reg_in7", false,-1);
        tracep->declBit(c+3,"top exe_reg exe_reg_in8", false,-1);
        tracep->declBus(c+23,"top exe_reg exe_reg_in9", false,-1, 1,0);
        tracep->declBus(c+21,"top exe_reg exe_reg_in10", false,-1, 1,0);
        tracep->declQuad(c+55,"top exe_reg exe_reg_in11", false,-1, 63,0);
        tracep->declBus(c+35,"top exe_reg exe_reg_in12", false,-1, 4,0);
        tracep->declBus(c+36,"top exe_reg exe_reg_in13", false,-1, 4,0);
        tracep->declBit(c+5,"top exe_reg exe_reg_in14", false,-1);
        tracep->declBus(c+27,"top exe_reg exe_reg_in15", false,-1, 2,0);
        tracep->declBus(c+44,"top exe_reg exe_reg_in16", false,-1, 5,0);
        tracep->declQuad(c+89,"top exe_reg exe_reg_out0", false,-1, 63,0);
        tracep->declBus(c+49,"top exe_reg exe_reg_out1", false,-1, 11,0);
        tracep->declBus(c+41,"top exe_reg exe_reg_out2", false,-1, 4,0);
        tracep->declQuad(c+69,"top exe_reg exe_reg_out3", false,-1, 63,0);
        tracep->declBus(c+20,"top exe_reg exe_reg_out4", false,-1, 1,0);
        tracep->declQuad(c+71,"top exe_reg exe_reg_out5", false,-1, 63,0);
        tracep->declBit(c+14,"top exe_reg exe_reg_out7", false,-1);
        tracep->declBit(c+15,"top exe_reg exe_reg_out8", false,-1);
        tracep->declBus(c+24,"top exe_reg exe_reg_out9", false,-1, 1,0);
        tracep->declBus(c+22,"top exe_reg exe_reg_out10", false,-1, 1,0);
        tracep->declQuad(c+83,"top exe_reg exe_reg_out11", false,-1, 63,0);
        tracep->declBus(c+37,"top exe_reg exe_reg_out12", false,-1, 4,0);
        tracep->declBus(c+38,"top exe_reg exe_reg_out13", false,-1, 4,0);
        tracep->declBit(c+6,"top exe_reg exe_reg_out14", false,-1);
        tracep->declBus(c+28,"top exe_reg exe_reg_out15", false,-1, 2,0);
        tracep->declBus(c+45,"top exe_reg exe_reg_out16", false,-1, 5,0);
        tracep->declQuad(c+89,"top src1_sel_choice in0", false,-1, 63,0);
        tracep->declQuad(c+69,"top src1_sel_choice in1", false,-1, 63,0);
        tracep->declBus(c+20,"top src1_sel_choice key", false,-1, 1,0);
        tracep->declQuad(c+63,"top src1_sel_choice out", false,-1, 63,0);
        tracep->declQuad(c+83,"top src2_sel_choice in0", false,-1, 63,0);
        tracep->declQuad(c+71,"top src2_sel_choice in1", false,-1, 63,0);
        tracep->declBus(c+22,"top src2_sel_choice key", false,-1, 1,0);
        tracep->declQuad(c+65,"top src2_sel_choice out", false,-1, 63,0);
        tracep->declQuad(c+63,"top src1_sel_choice_out in0", false,-1, 63,0);
        tracep->declQuad(c+81,"top src1_sel_choice_out in1", false,-1, 63,0);
        tracep->declQuad(c+77,"top src1_sel_choice_out in2", false,-1, 63,0);
        tracep->declBus(c+30,"top src1_sel_choice_out key", false,-1, 2,0);
        tracep->declQuad(c+107,"top src1_sel_choice_out out", false,-1, 63,0);
        tracep->declQuad(c+65,"top src2_sel_choice_out in0", false,-1, 63,0);
        tracep->declQuad(c+81,"top src2_sel_choice_out in1", false,-1, 63,0);
        tracep->declQuad(c+77,"top src2_sel_choice_out in2", false,-1, 63,0);
        tracep->declBus(c+31,"top src2_sel_choice_out key", false,-1, 2,0);
        tracep->declQuad(c+109,"top src2_sel_choice_out out", false,-1, 63,0);
        tracep->declQuad(c+107,"top alu src1", false,-1, 63,0);
        tracep->declQuad(c+109,"top alu src2", false,-1, 63,0);
        tracep->declQuad(c+83,"top alu imm", false,-1, 63,0);
        tracep->declBus(c+49,"top alu op", false,-1, 11,0);
        tracep->declBus(c+28,"top alu s_bhwd", false,-1, 2,0);
        tracep->declBit(c+14,"top alu s_check", false,-1);
        tracep->declQuad(c+57,"top alu src2_out", false,-1, 63,0);
        tracep->declQuad(c+111,"top alu data_rd", false,-1, 63,0);
        tracep->declBus(c+51,"top alu ram_raddr", false,-1, 31,0);
        tracep->declBit(c+246,"top alu op_sb", false,-1);
        tracep->declBit(c+247,"top alu op_sh", false,-1);
        tracep->declBit(c+248,"top alu op_sw", false,-1);
        tracep->declBit(c+249,"top alu op_add", false,-1);
        tracep->declBit(c+250,"top alu op_sub", false,-1);
        tracep->declBit(c+251,"top alu op_slt", false,-1);
        tracep->declBit(c+252,"top alu op_sltu", false,-1);
        tracep->declBit(c+253,"top alu op_and", false,-1);
        tracep->declBit(c+254,"top alu op_or", false,-1);
        tracep->declBit(c+255,"top alu op_xor", false,-1);
        tracep->declBit(c+256,"top alu op_sll", false,-1);
        tracep->declBit(c+257,"top alu op_srl", false,-1);
        tracep->declBit(c+258,"top alu op_sra", false,-1);
        tracep->declBit(c+259,"top alu op_lui", false,-1);
        tracep->declBit(c+260,"top alu op_jal", false,-1);
        tracep->declQuad(c+261,"top alu add_sub_result", false,-1, 63,0);
        tracep->declQuad(c+263,"top alu slt_result", false,-1, 63,0);
        tracep->declQuad(c+265,"top alu s_result", false,-1, 63,0);
        tracep->declQuad(c+267,"top alu sltu_result", false,-1, 63,0);
        tracep->declQuad(c+269,"top alu and_result", false,-1, 63,0);
        tracep->declQuad(c+271,"top alu or_result", false,-1, 63,0);
        tracep->declQuad(c+273,"top alu xor_result", false,-1, 63,0);
        tracep->declQuad(c+275,"top alu sll_result", false,-1, 63,0);
        tracep->declQuad(c+277,"top alu srl_result", false,-1, 63,0);
        tracep->declQuad(c+279,"top alu sra_result", false,-1, 63,0);
        tracep->declQuad(c+109,"top alu lui_result", false,-1, 63,0);
        tracep->declQuad(c+281,"top alu jal_result", false,-1, 63,0);
        tracep->declQuad(c+107,"top alu data_a", false,-1, 63,0);
        tracep->declQuad(c+283,"top alu data_b", false,-1, 63,0);
        tracep->declQuad(c+285,"top alu data_result", false,-1, 63,0);
        tracep->declQuad(c+281,"top alu data_pc", false,-1, 63,0);
        tracep->declBit(c+287,"top alu data_cin", false,-1);
        tracep->declBit(c+288,"top alu data_cout", false,-1);
        tracep->declBit(c+307,"top mem_reg clk", false,-1);
        tracep->declBit(c+308,"top mem_reg rst", false,-1);
        tracep->declBus(c+41,"top mem_reg mem_reg_in0", false,-1, 4,0);
        tracep->declBus(c+311,"top mem_reg mem_reg_in1", false,-1, 2,0);
        tracep->declBit(c+14,"top mem_reg mem_reg_in2", false,-1);
        tracep->declBit(c+15,"top mem_reg mem_reg_in3", false,-1);
        tracep->declBus(c+24,"top mem_reg mem_reg_in4", false,-1, 1,0);
        tracep->declQuad(c+111,"top mem_reg mem_reg_in7", false,-1, 63,0);
        tracep->declBus(c+51,"top mem_reg mem_reg_in8", false,-1, 31,0);
        tracep->declQuad(c+57,"top mem_reg mem_reg_in9", false,-1, 63,0);
        tracep->declQuad(c+89,"top mem_reg mem_reg_in10", false,-1, 63,0);
        tracep->declBit(c+6,"top mem_reg mem_reg_in11", false,-1);
        tracep->declBus(c+28,"top mem_reg mem_reg_in12", false,-1, 2,0);
        tracep->declBus(c+45,"top mem_reg mem_reg_in13", false,-1, 5,0);
        tracep->declBus(c+40,"top mem_reg mem_reg_out0", false,-1, 4,0);
        tracep->declBus(c+33,"top mem_reg mem_reg_out1", false,-1, 2,0);
        tracep->declBit(c+13,"top mem_reg mem_reg_out2", false,-1);
        tracep->declBit(c+12,"top mem_reg mem_reg_out3", false,-1);
        tracep->declBus(c+19,"top mem_reg mem_reg_out4", false,-1, 1,0);
        tracep->declQuad(c+81,"top mem_reg mem_reg_out7", false,-1, 63,0);
        tracep->declBus(c+52,"top mem_reg mem_reg_out8", false,-1, 31,0);
        tracep->declQuad(c+79,"top mem_reg mem_reg_out9", false,-1, 63,0);
        tracep->declQuad(c+73,"top mem_reg mem_reg_out10", false,-1, 63,0);
        tracep->declBit(c+7,"top mem_reg mem_reg_out11", false,-1);
        tracep->declBus(c+26,"top mem_reg mem_reg_out12", false,-1, 2,0);
        tracep->declBus(c+46,"top mem_reg mem_reg_out13", false,-1, 5,0);
        tracep->declQuad(c+79,"top data_ram wdata", false,-1, 63,0);
        tracep->declBus(c+52,"top data_ram ram_addr", false,-1, 31,0);
        tracep->declBus(c+46,"top data_ram l_bhw", false,-1, 5,0);
        tracep->declBus(c+26,"top data_ram s_bhwd", false,-1, 2,0);
        tracep->declBit(c+13,"top data_ram data_wen", false,-1);
        tracep->declBit(c+7,"top data_ram data_ren", false,-1);
        tracep->declBit(c+307,"top data_ram clk", false,-1);
        tracep->declQuad(c+97,"top data_ram rdata", false,-1, 63,0);
        tracep->declBit(c+289,"top data_ram op_sb", false,-1);
        tracep->declBit(c+290,"top data_ram op_sh", false,-1);
        tracep->declBit(c+291,"top data_ram op_sw", false,-1);
        tracep->declBit(c+292,"top data_ram op_lb", false,-1);
        tracep->declBit(c+293,"top data_ram op_lbu", false,-1);
        tracep->declBit(c+294,"top data_ram op_lh", false,-1);
        tracep->declBit(c+295,"top data_ram op_lhu", false,-1);
        tracep->declBit(c+296,"top data_ram op_lw", false,-1);
        tracep->declBit(c+297,"top data_ram op_lwu", false,-1);
        tracep->declQuad(c+298,"top data_ram rdata_out", false,-1, 63,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+300+i*2,"top data_ram ram", true,(i+-1), 63,0);}}
        tracep->declBit(c+307,"top wb_reg clk", false,-1);
        tracep->declBit(c+308,"top wb_reg rst", false,-1);
        tracep->declQuad(c+73,"top wb_reg wb_reg_in0", false,-1, 63,0);
        tracep->declBus(c+33,"top wb_reg wb_reg_in1", false,-1, 2,0);
        tracep->declBit(c+12,"top wb_reg wb_reg_in2", false,-1);
        tracep->declBus(c+19,"top wb_reg wb_reg_in3", false,-1, 1,0);
        tracep->declQuad(c+81,"top wb_reg wb_reg_in4", false,-1, 63,0);
        tracep->declQuad(c+97,"top wb_reg wb_reg_in5", false,-1, 63,0);
        tracep->declBus(c+40,"top wb_reg wb_reg_in6", false,-1, 4,0);
        tracep->declQuad(c+87,"top wb_reg wb_reg_out0", false,-1, 63,0);
        tracep->declBus(c+32,"top wb_reg wb_reg_out1", false,-1, 2,0);
        tracep->declBit(c+16,"top wb_reg wb_reg_out2", false,-1);
        tracep->declBus(c+18,"top wb_reg wb_reg_out3", false,-1, 1,0);
        tracep->declQuad(c+77,"top wb_reg wb_reg_out4", false,-1, 63,0);
        tracep->declQuad(c+75,"top wb_reg wb_reg_out5", false,-1, 63,0);
        tracep->declBus(c+42,"top wb_reg wb_reg_out6", false,-1, 4,0);
        tracep->declQuad(c+77,"top data_rd_choice in0", false,-1, 63,0);
        tracep->declQuad(c+75,"top data_rd_choice in1", false,-1, 63,0);
        tracep->declBus(c+18,"top data_rd_choice key", false,-1, 1,0);
        tracep->declQuad(c+309,"top data_rd_choice out", false,-1, 63,0);
        tracep->declBit(c+307,"top ebreak_list clk", false,-1);
        tracep->declBit(c+308,"top ebreak_list rst", false,-1);
        tracep->declBit(c+9,"top ebreak_list ebreak", false,-1);
        tracep->declBus(c+47,"top ebreak_list op", false,-1, 11,0);
        tracep->declBus(c+53,"top ebreak_list inst", false,-1, 31,0);
        tracep->declBit(c+10,"top ebreak_list ebreak_out", false,-1);
        tracep->declBus(c+48,"top ebreak_list op_out", false,-1, 11,0);
        tracep->declBus(c+54,"top ebreak_list inst_out", false,-1, 31,0);
        tracep->declBus(c+304,"top ebreak_list op_1", false,-1, 11,0);
        tracep->declBit(c+305,"top ebreak_list ebreak_1", false,-1);
        tracep->declBus(c+306,"top ebreak_list inst_1", false,-1, 31,0);
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
        tracep->fullBit(oldp+1,(((0x23U == (0x7fU & vlSelf->top__DOT__inst_id))
                                  ? 1U : 0U)));
        tracep->fullBit(oldp+2,(((IData)(vlSelf->top__DOT__stall_control)
                                  ? 0U : ((0x23U == 
                                           (0x7fU & vlSelf->top__DOT__inst_id))
                                           ? 1U : 0U))));
        tracep->fullBit(oldp+3,(((IData)(vlSelf->top__DOT__stall_control)
                                  ? 0U : (((((0x33U 
                                              == (0x7fU 
                                                  & vlSelf->top__DOT__inst_id)) 
                                             | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_I)) 
                                            | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_U)) 
                                           | (0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->top__DOT__inst_id)))
                                           ? 1U : 0U))));
        tracep->fullBit(oldp+4,(vlSelf->top__DOT__stall_control));
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
        tracep->fullCData(oldp+26,(vlSelf->top__DOT__mem_reg_s_bhwd),3);
        tracep->fullCData(oldp+27,((((IData)((0x23U 
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
        tracep->fullCData(oldp+28,(vlSelf->top__DOT__exe_reg_s_bhwd),3);
        tracep->fullCData(oldp+29,(vlSelf->top__DOT__pc_sel_out),3);
        tracep->fullCData(oldp+30,(vlSelf->top__DOT__src1_sel_plus),3);
        tracep->fullCData(oldp+31,(vlSelf->top__DOT__src2_sel_plus),3);
        tracep->fullCData(oldp+32,(vlSelf->top__DOT__wb_reg_pc_sel),3);
        tracep->fullCData(oldp+33,(vlSelf->top__DOT__mem_reg_pc_sel),3);
        tracep->fullCData(oldp+34,(vlSelf->top__DOT__pc_add_rs1_sel),4);
        tracep->fullCData(oldp+35,(vlSelf->top__DOT__rs1),5);
        tracep->fullCData(oldp+36,((0x1fU & (vlSelf->top__DOT__inst_id 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+37,(vlSelf->top__DOT__exe_reg_rs1),5);
        tracep->fullCData(oldp+38,(vlSelf->top__DOT__exe_reg_rs2),5);
        tracep->fullCData(oldp+39,((0x1fU & (vlSelf->top__DOT__inst_id 
                                             >> 7U))),5);
        tracep->fullCData(oldp+40,(vlSelf->top__DOT__mem_reg_rd),5);
        tracep->fullCData(oldp+41,(vlSelf->top__DOT__exe_reg_rd),5);
        tracep->fullCData(oldp+42,(vlSelf->top__DOT__wb_reg_rd),5);
        tracep->fullCData(oldp+43,(vlSelf->top__DOT__b_check),6);
        tracep->fullCData(oldp+44,((((IData)(vlSelf->top__DOT__idu__DOT__inst_lb) 
                                     << 5U) | (((IData)(vlSelf->top__DOT__idu__DOT__inst_lbu) 
                                                << 4U) 
                                               | (((IData)(vlSelf->top__DOT__idu__DOT__inst_lh) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->top__DOT__idu__DOT__inst_lhu) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->top__DOT__idu__DOT__inst_lw) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->top__DOT__idu__DOT__inst_lwu))))))),6);
        tracep->fullCData(oldp+45,(vlSelf->top__DOT__exe_reg_l_bhw),6);
        tracep->fullCData(oldp+46,(vlSelf->top__DOT__mem_reg_l_bhw),6);
        tracep->fullSData(oldp+47,(vlSelf->top__DOT__op),12);
        tracep->fullSData(oldp+48,(vlSelf->top__DOT__op_out),12);
        tracep->fullSData(oldp+49,(vlSelf->top__DOT__exe_reg_op),12);
        tracep->fullIData(oldp+50,(vlSelf->top__DOT__inst),32);
        tracep->fullIData(oldp+51,((IData)(vlSelf->top__DOT__alu__DOT__add_sub_result)),32);
        tracep->fullIData(oldp+52,(vlSelf->top__DOT__mem_reg_ram_addr),32);
        tracep->fullIData(oldp+53,(vlSelf->top__DOT__inst_id),32);
        tracep->fullIData(oldp+54,(vlSelf->top__DOT__inst_out),32);
        tracep->fullQData(oldp+55,(vlSelf->top__DOT__imm),64);
        tracep->fullQData(oldp+57,(((4U & (IData)(vlSelf->top__DOT__exe_reg_s_bhwd))
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
        tracep->fullQData(oldp+59,(((1U == (IData)(vlSelf->top__DOT__pc_add_rs1_sel))
                                     ? vlSelf->top__DOT__src1_rs1
                                     : ((2U == (IData)(vlSelf->top__DOT__pc_add_rs1_sel))
                                         ? vlSelf->top__DOT__data_rd_in
                                         : ((4U == (IData)(vlSelf->top__DOT__pc_add_rs1_sel))
                                             ? vlSelf->top__DOT__mem_reg_data_rd_in
                                             : vlSelf->top__DOT__wb_reg_data_rd_in)))),64);
        tracep->fullQData(oldp+61,(vlSelf->top__DOT__common_reg__DOT__reg_com
                                   [0xaU]),64);
        tracep->fullQData(oldp+63,(((1U == (IData)(vlSelf->top__DOT__exe_reg_src1_sel))
                                     ? vlSelf->top__DOT__exe_reg_pc
                                     : vlSelf->top__DOT__exe_reg_src1_rs1)),64);
        tracep->fullQData(oldp+65,(((1U == (IData)(vlSelf->top__DOT__exe_reg_src2_sel))
                                     ? vlSelf->top__DOT__exe_reg_imm
                                     : vlSelf->top__DOT__exe_reg_src2_rs2)),64);
        tracep->fullQData(oldp+67,(vlSelf->top__DOT__if_pc),64);
        tracep->fullQData(oldp+69,(vlSelf->top__DOT__exe_reg_src1_rs1),64);
        tracep->fullQData(oldp+71,(vlSelf->top__DOT__exe_reg_src2_rs2),64);
        tracep->fullQData(oldp+73,(vlSelf->top__DOT__mem_reg_pc),64);
        tracep->fullQData(oldp+75,(vlSelf->top__DOT__wb_reg_rdata),64);
        tracep->fullQData(oldp+77,(vlSelf->top__DOT__wb_reg_data_rd_in),64);
        tracep->fullQData(oldp+79,(vlSelf->top__DOT__mem_reg_src2_rs2),64);
        tracep->fullQData(oldp+81,(vlSelf->top__DOT__mem_reg_data_rd_in),64);
        tracep->fullQData(oldp+83,(vlSelf->top__DOT__exe_reg_imm),64);
        tracep->fullQData(oldp+85,(vlSelf->top__DOT__cpu_pc),64);
        tracep->fullQData(oldp+87,(vlSelf->top__DOT__wb_reg_pc),64);
        tracep->fullQData(oldp+89,(vlSelf->top__DOT__exe_reg_pc),64);
        tracep->fullQData(oldp+91,(vlSelf->top__DOT__id_reg_pc),64);
        tracep->fullQData(oldp+93,(((1U == (IData)(vlSelf->top__DOT__pc_sel_out))
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
        tracep->fullQData(oldp+95,((4ULL + vlSelf->top__DOT__cpu_pc)),64);
        tracep->fullQData(oldp+97,(vlSelf->top__DOT__rdata),64);
        tracep->fullQData(oldp+99,(vlSelf->top__DOT__src1_rs1),64);
        tracep->fullQData(oldp+101,(vlSelf->top__DOT__src2_rs2),64);
        tracep->fullQData(oldp+103,((vlSelf->top__DOT__id_reg_pc 
                                     + vlSelf->top__DOT__imm)),64);
        tracep->fullQData(oldp+105,((0xfffffffffffffffeULL 
                                     & (((1U == (IData)(vlSelf->top__DOT__pc_add_rs1_sel))
                                          ? vlSelf->top__DOT__src1_rs1
                                          : ((2U == (IData)(vlSelf->top__DOT__pc_add_rs1_sel))
                                              ? vlSelf->top__DOT__data_rd_in
                                              : ((4U 
                                                  == (IData)(vlSelf->top__DOT__pc_add_rs1_sel))
                                                  ? vlSelf->top__DOT__mem_reg_data_rd_in
                                                  : vlSelf->top__DOT__wb_reg_data_rd_in))) 
                                        + vlSelf->top__DOT__imm))),64);
        tracep->fullQData(oldp+107,(vlSelf->top__DOT__src1),64);
        tracep->fullQData(oldp+109,(vlSelf->top__DOT__src2),64);
        tracep->fullQData(oldp+111,(vlSelf->top__DOT__data_rd_in),64);
        tracep->fullSData(oldp+113,((0xffffU & (IData)(
                                                       ((vlSelf->top__DOT__cpu_pc 
                                                         - 0x80000000ULL) 
                                                        >> 2U)))),16);
        tracep->fullBit(oldp+114,(vlSelf->top__DOT__idu__DOT__TYPE_I));
        tracep->fullBit(oldp+115,(vlSelf->top__DOT__idu__DOT__TYPE_U));
        tracep->fullBit(oldp+116,((0x23U == (0x7fU 
                                             & vlSelf->top__DOT__inst_id))));
        tracep->fullBit(oldp+117,((0x6fU == (0x7fU 
                                             & vlSelf->top__DOT__inst_id))));
        tracep->fullBit(oldp+118,((0x63U == (0x7fU 
                                             & vlSelf->top__DOT__inst_id))));
        tracep->fullBit(oldp+119,((0x33U == (0x7fU 
                                             & vlSelf->top__DOT__inst_id))));
        tracep->fullBit(oldp+120,((0x37U == (0x7fU 
                                             & vlSelf->top__DOT__inst_id))));
        tracep->fullBit(oldp+121,(vlSelf->top__DOT__idu__DOT__inst_lwu));
        tracep->fullBit(oldp+122,((0x17U == (0x7fU 
                                             & vlSelf->top__DOT__inst_id))));
        tracep->fullBit(oldp+123,((IData)((0x63U == 
                                           (0x707fU 
                                            & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+124,((IData)((0x1063U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+125,((IData)((0x4063U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+126,((IData)((0x5063U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+127,((IData)((0x6063U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+128,((IData)((0x7063U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+129,(vlSelf->top__DOT__idu__DOT__inst_jalr));
        tracep->fullBit(oldp+130,(vlSelf->top__DOT__idu__DOT__inst_lb));
        tracep->fullBit(oldp+131,(vlSelf->top__DOT__idu__DOT__inst_lh));
        tracep->fullBit(oldp+132,(vlSelf->top__DOT__idu__DOT__inst_lw));
        tracep->fullBit(oldp+133,(vlSelf->top__DOT__idu__DOT__inst_ld));
        tracep->fullBit(oldp+134,(vlSelf->top__DOT__idu__DOT__inst_lbu));
        tracep->fullBit(oldp+135,(vlSelf->top__DOT__idu__DOT__inst_lhu));
        tracep->fullBit(oldp+136,((IData)((0x13U == 
                                           (0x707fU 
                                            & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+137,((IData)((0x2013U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+138,((IData)((0x3013U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+139,((IData)((0x4013U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+140,((IData)((0x6013U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+141,((IData)((0x7013U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+142,(((IData)((0x1013U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+143,(((IData)((0x5013U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+144,(((IData)((0x5013U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__inst_id))) 
                                   & (0x20U == (vlSelf->top__DOT__inst_id 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+145,((IData)((0x23U == 
                                           (0x707fU 
                                            & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+146,((IData)((0x1023U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+147,((IData)((0x2023U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+148,((IData)((0x3023U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+149,(((IData)((0x33U == 
                                            (0x707fU 
                                             & vlSelf->top__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+150,(((IData)((0x33U == 
                                            (0x707fU 
                                             & vlSelf->top__DOT__inst_id))) 
                                   & (0x20U == (vlSelf->top__DOT__inst_id 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+151,(((IData)((0x1033U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+152,(((IData)((0x2033U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+153,(((IData)((0x3033U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+154,(((IData)((0x4033U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+155,(((IData)((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+156,(((IData)((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__inst_id))) 
                                   & (0x20U == (vlSelf->top__DOT__inst_id 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+157,(((IData)((0x6033U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+158,(((IData)((0x7033U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+159,((((((((IData)(vlSelf->top__DOT__idu__DOT__inst_lb) 
                                        | (IData)(vlSelf->top__DOT__idu__DOT__inst_lh)) 
                                       | (IData)(vlSelf->top__DOT__idu__DOT__inst_lw)) 
                                      | (IData)(vlSelf->top__DOT__idu__DOT__inst_ld)) 
                                     | (IData)(vlSelf->top__DOT__idu__DOT__inst_lbu)) 
                                    | (IData)(vlSelf->top__DOT__idu__DOT__inst_lhu)) 
                                   | (IData)(vlSelf->top__DOT__idu__DOT__inst_lwu))));
        tracep->fullQData(oldp+160,((((- (QData)((IData)(
                                                         (vlSelf->top__DOT__inst_id 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 (vlSelf->top__DOT__inst_id 
                                                                  >> 0x14U))))),64);
        tracep->fullQData(oldp+162,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->top__DOT__inst_id 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (0xfffff000U 
                                                                   & vlSelf->top__DOT__inst_id))))),64);
        tracep->fullQData(oldp+164,((((- (QData)((IData)(
                                                         (vlSelf->top__DOT__inst_id 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 ((0xfe0U 
                                                                   & (vlSelf->top__DOT__inst_id 
                                                                      >> 0x14U)) 
                                                                  | (0x1fU 
                                                                     & (vlSelf->top__DOT__inst_id 
                                                                        >> 7U))))))),64);
        tracep->fullQData(oldp+166,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+168,((((- (QData)((IData)(
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
        tracep->fullCData(oldp+170,((0x7fU & vlSelf->top__DOT__inst_id)),7);
        tracep->fullCData(oldp+171,((vlSelf->top__DOT__inst_id 
                                     >> 0x19U)),7);
        tracep->fullCData(oldp+172,((7U & (vlSelf->top__DOT__inst_id 
                                           >> 0xcU))),3);
        tracep->fullBit(oldp+173,((1U & ((((((IData)(vlSelf->top__DOT__b_check) 
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
        tracep->fullBit(oldp+174,(vlSelf->top__DOT__b_check_out__DOT__blt_check));
        tracep->fullBit(oldp+175,((1U & (~ (IData)(vlSelf->top__DOT__b_check_out__DOT__blt_check)))));
        tracep->fullBit(oldp+176,((1U & (~ (IData)(vlSelf->top__DOT__b_check_out__DOT__data_cout)))));
        tracep->fullBit(oldp+177,(vlSelf->top__DOT__b_check_out__DOT__data_cout));
        tracep->fullQData(oldp+178,((~ vlSelf->top__DOT__src2_rs2)),64);
        tracep->fullQData(oldp+180,((1ULL + (vlSelf->top__DOT__src1_rs1 
                                             + (~ vlSelf->top__DOT__src2_rs2)))),64);
        tracep->fullQData(oldp+182,(vlSelf->top__DOT__common_reg__DOT__reg_com[0]),64);
        tracep->fullQData(oldp+184,(vlSelf->top__DOT__common_reg__DOT__reg_com[1]),64);
        tracep->fullQData(oldp+186,(vlSelf->top__DOT__common_reg__DOT__reg_com[2]),64);
        tracep->fullQData(oldp+188,(vlSelf->top__DOT__common_reg__DOT__reg_com[3]),64);
        tracep->fullQData(oldp+190,(vlSelf->top__DOT__common_reg__DOT__reg_com[4]),64);
        tracep->fullQData(oldp+192,(vlSelf->top__DOT__common_reg__DOT__reg_com[5]),64);
        tracep->fullQData(oldp+194,(vlSelf->top__DOT__common_reg__DOT__reg_com[6]),64);
        tracep->fullQData(oldp+196,(vlSelf->top__DOT__common_reg__DOT__reg_com[7]),64);
        tracep->fullQData(oldp+198,(vlSelf->top__DOT__common_reg__DOT__reg_com[8]),64);
        tracep->fullQData(oldp+200,(vlSelf->top__DOT__common_reg__DOT__reg_com[9]),64);
        tracep->fullQData(oldp+202,(vlSelf->top__DOT__common_reg__DOT__reg_com[10]),64);
        tracep->fullQData(oldp+204,(vlSelf->top__DOT__common_reg__DOT__reg_com[11]),64);
        tracep->fullQData(oldp+206,(vlSelf->top__DOT__common_reg__DOT__reg_com[12]),64);
        tracep->fullQData(oldp+208,(vlSelf->top__DOT__common_reg__DOT__reg_com[13]),64);
        tracep->fullQData(oldp+210,(vlSelf->top__DOT__common_reg__DOT__reg_com[14]),64);
        tracep->fullQData(oldp+212,(vlSelf->top__DOT__common_reg__DOT__reg_com[15]),64);
        tracep->fullQData(oldp+214,(vlSelf->top__DOT__common_reg__DOT__reg_com[16]),64);
        tracep->fullQData(oldp+216,(vlSelf->top__DOT__common_reg__DOT__reg_com[17]),64);
        tracep->fullQData(oldp+218,(vlSelf->top__DOT__common_reg__DOT__reg_com[18]),64);
        tracep->fullQData(oldp+220,(vlSelf->top__DOT__common_reg__DOT__reg_com[19]),64);
        tracep->fullQData(oldp+222,(vlSelf->top__DOT__common_reg__DOT__reg_com[20]),64);
        tracep->fullQData(oldp+224,(vlSelf->top__DOT__common_reg__DOT__reg_com[21]),64);
        tracep->fullQData(oldp+226,(vlSelf->top__DOT__common_reg__DOT__reg_com[22]),64);
        tracep->fullQData(oldp+228,(vlSelf->top__DOT__common_reg__DOT__reg_com[23]),64);
        tracep->fullQData(oldp+230,(vlSelf->top__DOT__common_reg__DOT__reg_com[24]),64);
        tracep->fullQData(oldp+232,(vlSelf->top__DOT__common_reg__DOT__reg_com[25]),64);
        tracep->fullQData(oldp+234,(vlSelf->top__DOT__common_reg__DOT__reg_com[26]),64);
        tracep->fullQData(oldp+236,(vlSelf->top__DOT__common_reg__DOT__reg_com[27]),64);
        tracep->fullQData(oldp+238,(vlSelf->top__DOT__common_reg__DOT__reg_com[28]),64);
        tracep->fullQData(oldp+240,(vlSelf->top__DOT__common_reg__DOT__reg_com[29]),64);
        tracep->fullQData(oldp+242,(vlSelf->top__DOT__common_reg__DOT__reg_com[30]),64);
        tracep->fullQData(oldp+244,(vlSelf->top__DOT__common_reg__DOT__reg_com[31]),64);
        tracep->fullBit(oldp+246,((1U & ((IData)(vlSelf->top__DOT__exe_reg_s_bhwd) 
                                         >> 2U))));
        tracep->fullBit(oldp+247,((1U & ((IData)(vlSelf->top__DOT__exe_reg_s_bhwd) 
                                         >> 1U))));
        tracep->fullBit(oldp+248,((1U & (IData)(vlSelf->top__DOT__exe_reg_s_bhwd))));
        tracep->fullBit(oldp+249,((1U & (IData)(vlSelf->top__DOT__exe_reg_op))));
        tracep->fullBit(oldp+250,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 1U))));
        tracep->fullBit(oldp+251,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 2U))));
        tracep->fullBit(oldp+252,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 3U))));
        tracep->fullBit(oldp+253,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 4U))));
        tracep->fullBit(oldp+254,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 5U))));
        tracep->fullBit(oldp+255,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 6U))));
        tracep->fullBit(oldp+256,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 7U))));
        tracep->fullBit(oldp+257,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 8U))));
        tracep->fullBit(oldp+258,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 9U))));
        tracep->fullBit(oldp+259,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 0xaU))));
        tracep->fullBit(oldp+260,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 0xbU))));
        tracep->fullQData(oldp+261,(vlSelf->top__DOT__alu__DOT__add_sub_result),64);
        tracep->fullQData(oldp+263,((QData)((IData)(
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
        tracep->fullQData(oldp+265,((vlSelf->top__DOT__src1 
                                     + vlSelf->top__DOT__exe_reg_imm)),64);
        VL_EXTEND_WQ(65,64, __Vtemp33, vlSelf->top__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp34, vlSelf->top__DOT__alu__DOT__data_b);
        VL_ADD_W(3, __Vtemp35, __Vtemp33, __Vtemp34);
        VL_EXTEND_WI(65,1, __Vtemp36, (IData)(vlSelf->top__DOT__alu__DOT__data_cin));
        VL_ADD_W(3, __Vtemp37, __Vtemp35, __Vtemp36);
        tracep->fullQData(oldp+267,((QData)((IData)(
                                                    (1U 
                                                     & (~ 
                                                        (1U 
                                                         & __Vtemp37[2U])))))),64);
        tracep->fullQData(oldp+269,((vlSelf->top__DOT__src1 
                                     & vlSelf->top__DOT__src2)),64);
        tracep->fullQData(oldp+271,((vlSelf->top__DOT__src1 
                                     | vlSelf->top__DOT__src2)),64);
        tracep->fullQData(oldp+273,((vlSelf->top__DOT__src1 
                                     ^ vlSelf->top__DOT__src2)),64);
        tracep->fullQData(oldp+275,((vlSelf->top__DOT__src1 
                                     << (0x3fU & (IData)(vlSelf->top__DOT__src2)))),64);
        tracep->fullQData(oldp+277,((vlSelf->top__DOT__src1 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__src2)))),64);
        tracep->fullQData(oldp+279,((vlSelf->top__DOT__src1 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__src2)))),64);
        tracep->fullQData(oldp+281,((4ULL + vlSelf->top__DOT__src1)),64);
        tracep->fullQData(oldp+283,(vlSelf->top__DOT__alu__DOT__data_b),64);
        tracep->fullQData(oldp+285,(vlSelf->top__DOT__alu__DOT__data_result),64);
        tracep->fullBit(oldp+287,(vlSelf->top__DOT__alu__DOT__data_cin));
        VL_EXTEND_WQ(65,64, __Vtemp40, vlSelf->top__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp41, vlSelf->top__DOT__alu__DOT__data_b);
        VL_ADD_W(3, __Vtemp42, __Vtemp40, __Vtemp41);
        VL_EXTEND_WI(65,1, __Vtemp43, (IData)(vlSelf->top__DOT__alu__DOT__data_cin));
        VL_ADD_W(3, __Vtemp44, __Vtemp42, __Vtemp43);
        tracep->fullBit(oldp+288,((1U & __Vtemp44[2U])));
        tracep->fullBit(oldp+289,((1U & ((IData)(vlSelf->top__DOT__mem_reg_s_bhwd) 
                                         >> 2U))));
        tracep->fullBit(oldp+290,((1U & ((IData)(vlSelf->top__DOT__mem_reg_s_bhwd) 
                                         >> 1U))));
        tracep->fullBit(oldp+291,((1U & (IData)(vlSelf->top__DOT__mem_reg_s_bhwd))));
        tracep->fullBit(oldp+292,((1U & ((IData)(vlSelf->top__DOT__mem_reg_l_bhw) 
                                         >> 5U))));
        tracep->fullBit(oldp+293,((1U & ((IData)(vlSelf->top__DOT__mem_reg_l_bhw) 
                                         >> 4U))));
        tracep->fullBit(oldp+294,((1U & ((IData)(vlSelf->top__DOT__mem_reg_l_bhw) 
                                         >> 3U))));
        tracep->fullBit(oldp+295,((1U & ((IData)(vlSelf->top__DOT__mem_reg_l_bhw) 
                                         >> 2U))));
        tracep->fullBit(oldp+296,((1U & ((IData)(vlSelf->top__DOT__mem_reg_l_bhw) 
                                         >> 1U))));
        tracep->fullBit(oldp+297,((1U & (IData)(vlSelf->top__DOT__mem_reg_l_bhw))));
        tracep->fullQData(oldp+298,(vlSelf->top__DOT__data_ram__DOT__rdata_out),64);
        tracep->fullQData(oldp+300,(vlSelf->top__DOT__data_ram__DOT__ram[0]),64);
        tracep->fullQData(oldp+302,(vlSelf->top__DOT__data_ram__DOT__ram[1]),64);
        tracep->fullSData(oldp+304,(vlSelf->top__DOT__ebreak_list__DOT__op_1),12);
        tracep->fullBit(oldp+305,(vlSelf->top__DOT__ebreak_list__DOT__ebreak_1));
        tracep->fullIData(oldp+306,(vlSelf->top__DOT__ebreak_list__DOT__inst_1),32);
        tracep->fullBit(oldp+307,(vlSelf->clk));
        tracep->fullBit(oldp+308,(vlSelf->rst));
        tracep->fullQData(oldp+309,(vlSelf->data_rd),64);
        tracep->fullCData(oldp+311,(vlSelf->top__DOT__exe_reg_pc_sel),3);
        tracep->fullSData(oldp+312,(vlSelf->top__DOT__inst_addr),16);
        tracep->fullQData(oldp+313,(vlSelf->top__DOT__exe_reg_src1),64);
        tracep->fullQData(oldp+315,(vlSelf->top__DOT__exe_reg_src2),64);
        tracep->fullQData(oldp+317,(vlSelf->top__DOT__mem_reg_cpu_dnpc_in1),64);
        tracep->fullQData(oldp+319,(vlSelf->top__DOT__mem_reg_cpu_dnpc_in2),64);
        tracep->fullQData(oldp+321,(vlSelf->top__DOT__wb_reg_cpu_dnpc_in1),64);
        tracep->fullQData(oldp+323,(vlSelf->top__DOT__wb_reg_cpu_dnpc_in2),64);
        tracep->fullQData(oldp+325,(vlSelf->top__DOT__cpu_ifpc),64);
        tracep->fullQData(oldp+327,(vlSelf->top__DOT__if_reg_pc),64);
        tracep->fullBit(oldp+329,(1U));
        tracep->fullBit(oldp+330,(0U));
    }
}
