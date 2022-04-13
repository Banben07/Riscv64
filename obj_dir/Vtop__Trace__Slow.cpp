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
        tracep->declBit(c+382,"clk", false,-1);
        tracep->declBit(c+383,"rst", false,-1);
        tracep->declBit(c+384,"success", false,-1);
        tracep->declBit(c+382,"top clk", false,-1);
        tracep->declBit(c+383,"top rst", false,-1);
        tracep->declBit(c+384,"top success", false,-1);
        tracep->declBit(c+1,"top w_check", false,-1);
        tracep->declBit(c+2,"top stall_l", false,-1);
        tracep->declBit(c+3,"top stall_if", false,-1);
        tracep->declBit(c+4,"top stall_mem", false,-1);
        tracep->declBit(c+5,"top data_ren_out", false,-1);
        tracep->declBit(c+6,"top exe_reg_w_check", false,-1);
        tracep->declBit(c+7,"top data_wen", false,-1);
        tracep->declBit(c+8,"top data_wen_out", false,-1);
        tracep->declBit(c+9,"top reg_wen_out", false,-1);
        tracep->declBit(c+10,"top stall_id", false,-1);
        tracep->declBit(c+11,"top data_ren", false,-1);
        tracep->declBit(c+12,"top exe_reg_data_ren", false,-1);
        tracep->declBit(c+13,"top mem_reg_data_ren", false,-1);
        tracep->declBit(c+14,"top IF_Flush", false,-1);
        tracep->declBit(c+15,"top ebreak", false,-1);
        tracep->declBit(c+16,"top ebreak_out", false,-1);
        tracep->declBit(c+17,"top reg_wen", false,-1);
        tracep->declBit(c+18,"top mem_reg_reg_wen", false,-1);
        tracep->declBit(c+19,"top mem_reg_data_wen", false,-1);
        tracep->declBit(c+20,"top exe_reg_data_wen", false,-1);
        tracep->declBit(c+21,"top exe_reg_reg_wen", false,-1);
        tracep->declBit(c+22,"top wb_reg_reg_wen", false,-1);
        tracep->declBus(c+23,"top src1_sel", false,-1, 1,0);
        tracep->declBus(c+24,"top wb_reg_load_sel", false,-1, 1,0);
        tracep->declBus(c+25,"top mem_reg_load_sel", false,-1, 1,0);
        tracep->declBus(c+26,"top exe_reg_src1_sel", false,-1, 1,0);
        tracep->declBus(c+27,"top src2_sel", false,-1, 1,0);
        tracep->declBus(c+28,"top exe_reg_src2_sel", false,-1, 1,0);
        tracep->declBus(c+29,"top load_sel", false,-1, 1,0);
        tracep->declBus(c+30,"top exe_reg_load_sel", false,-1, 1,0);
        tracep->declBus(c+31,"top pc_sel", false,-1, 2,0);
        tracep->declBus(c+32,"top stall", false,-1, 2,0);
        tracep->declBus(c+33,"top mem_reg_s_bhwd", false,-1, 2,0);
        tracep->declBus(c+34,"top s_bhwd", false,-1, 2,0);
        tracep->declBus(c+35,"top exe_reg_s_bhwd", false,-1, 2,0);
        tracep->declBus(c+36,"top pc_sel_out", false,-1, 2,0);
        tracep->declBus(c+37,"top src1_sel_plus", false,-1, 2,0);
        tracep->declBus(c+38,"top src2_sel_plus", false,-1, 2,0);
        tracep->declBus(c+39,"top wb_reg_pc_sel", false,-1, 2,0);
        tracep->declBus(c+40,"top mem_reg_pc_sel", false,-1, 2,0);
        tracep->declBus(c+385,"top exe_reg_pc_sel", false,-1, 2,0);
        tracep->declBus(c+41,"top pc_add_rs1_sel", false,-1, 3,0);
        tracep->declBus(c+42,"top b_check_rs2_sel", false,-1, 3,0);
        tracep->declBus(c+43,"top rs1", false,-1, 4,0);
        tracep->declBus(c+44,"top rs2", false,-1, 4,0);
        tracep->declBus(c+45,"top exe_reg_rs1", false,-1, 4,0);
        tracep->declBus(c+46,"top exe_reg_rs2", false,-1, 4,0);
        tracep->declBus(c+47,"top rd", false,-1, 4,0);
        tracep->declBus(c+48,"top mem_reg_rd", false,-1, 4,0);
        tracep->declBus(c+49,"top exe_reg_rd", false,-1, 4,0);
        tracep->declBus(c+50,"top wb_reg_rd", false,-1, 4,0);
        tracep->declBus(c+51,"top b_check", false,-1, 5,0);
        tracep->declBus(c+52,"top l_bhw", false,-1, 5,0);
        tracep->declBus(c+53,"top exe_reg_l_bhw", false,-1, 5,0);
        tracep->declBus(c+54,"top mem_reg_l_bhw", false,-1, 5,0);
        tracep->declBus(c+55,"top exe_reg_op", false,-1, 14,0);
        tracep->declBus(c+56,"top op", false,-1, 15,0);
        tracep->declBus(c+386,"top inst_addr", false,-1, 15,0);
        tracep->declBus(c+57,"top inst", false,-1, 31,0);
        tracep->declBus(c+58,"top ram_addr", false,-1, 31,0);
        tracep->declBus(c+59,"top mem_reg_ram_addr", false,-1, 31,0);
        tracep->declBus(c+60,"top inst_id", false,-1, 31,0);
        tracep->declBus(c+387,"top inst_out", false,-1, 31,0);
        tracep->declQuad(c+61,"top imm", false,-1, 63,0);
        tracep->declQuad(c+63,"top data_rd", false,-1, 63,0);
        tracep->declQuad(c+388,"top b_src2", false,-1, 63,0);
        tracep->declQuad(c+65,"top src2_out", false,-1, 63,0);
        tracep->declQuad(c+390,"top pc_src1", false,-1, 63,0);
        tracep->declQuad(c+67,"top data_a0", false,-1, 63,0);
        tracep->declQuad(c+392,"top one_src1", false,-1, 63,0);
        tracep->declQuad(c+394,"top one_src2", false,-1, 63,0);
        tracep->declQuad(c+69,"top if_pc", false,-1, 63,0);
        tracep->declQuad(c+71,"top exe_reg_src1_rs1", false,-1, 63,0);
        tracep->declQuad(c+396,"top exe_reg_src1", false,-1, 63,0);
        tracep->declQuad(c+398,"top exe_reg_src2", false,-1, 63,0);
        tracep->declQuad(c+73,"top exe_reg_src2_rs2", false,-1, 63,0);
        tracep->declQuad(c+75,"top mem_reg_pc", false,-1, 63,0);
        tracep->declQuad(c+77,"top wb_reg_rdata", false,-1, 63,0);
        tracep->declQuad(c+79,"top wb_reg_data_rd_in", false,-1, 63,0);
        tracep->declQuad(c+81,"top mem_reg_src2_rs2", false,-1, 63,0);
        tracep->declQuad(c+83,"top mem_reg_data_rd_in", false,-1, 63,0);
        tracep->declQuad(c+400,"top mem_reg_cpu_dnpc_in1", false,-1, 63,0);
        tracep->declQuad(c+402,"top mem_reg_cpu_dnpc_in2", false,-1, 63,0);
        tracep->declQuad(c+85,"top exe_reg_imm", false,-1, 63,0);
        tracep->declQuad(c+87,"top cpu_pc", false,-1, 63,0);
        tracep->declQuad(c+89,"top wb_reg_pc", false,-1, 63,0);
        tracep->declQuad(c+404,"top wb_reg_cpu_dnpc_in1", false,-1, 63,0);
        tracep->declQuad(c+406,"top wb_reg_cpu_dnpc_in2", false,-1, 63,0);
        tracep->declQuad(c+91,"top exe_reg_pc", false,-1, 63,0);
        tracep->declQuad(c+408,"top cpu_ifpc", false,-1, 63,0);
        tracep->declQuad(c+410,"top if_reg_pc", false,-1, 63,0);
        tracep->declQuad(c+93,"top id_reg_pc", false,-1, 63,0);
        tracep->declQuad(c+95,"top cpu_dnpc", false,-1, 63,0);
        tracep->declQuad(c+97,"top cpu_snpc", false,-1, 63,0);
        tracep->declQuad(c+99,"top rdata", false,-1, 63,0);
        tracep->declQuad(c+101,"top src1_rs1", false,-1, 63,0);
        tracep->declQuad(c+103,"top src2_rs2", false,-1, 63,0);
        tracep->declQuad(c+105,"top cpu_dnpc_in1", false,-1, 63,0);
        tracep->declQuad(c+107,"top cpu_dnpc_in2", false,-1, 63,0);
        tracep->declQuad(c+109,"top src1", false,-1, 63,0);
        tracep->declQuad(c+111,"top src2", false,-1, 63,0);
        tracep->declQuad(c+113,"top data_rd_in", false,-1, 63,0);
        tracep->declBus(c+36,"top ctrl pc_jump", false,-1, 2,0);
        tracep->declBit(c+7,"top ctrl data_wen", false,-1);
        tracep->declBit(c+11,"top ctrl data_ren", false,-1);
        tracep->declBit(c+17,"top ctrl reg_wen", false,-1);
        tracep->declBit(c+3,"top ctrl stall_if", false,-1);
        tracep->declBit(c+10,"top ctrl stall_id", false,-1);
        tracep->declBit(c+4,"top ctrl stall_mem", false,-1);
        tracep->declBit(c+2,"top ctrl stall_l", false,-1);
        tracep->declBit(c+14,"top ctrl IF_Flush", false,-1);
        tracep->declBit(c+8,"top ctrl data_wen_out", false,-1);
        tracep->declBit(c+5,"top ctrl data_ren_out", false,-1);
        tracep->declBit(c+9,"top ctrl reg_wen_out", false,-1);
        tracep->declBus(c+32,"top ctrl stall", false,-1, 2,0);
        tracep->declQuad(c+97,"top pc_sel_choice in0", false,-1, 63,0);
        tracep->declQuad(c+105,"top pc_sel_choice in1", false,-1, 63,0);
        tracep->declQuad(c+107,"top pc_sel_choice in2", false,-1, 63,0);
        tracep->declBus(c+36,"top pc_sel_choice key", false,-1, 2,0);
        tracep->declQuad(c+95,"top pc_sel_choice out", false,-1, 63,0);
        tracep->declQuad(c+95,"top pc cpu_dnpc", false,-1, 63,0);
        tracep->declBit(c+382,"top pc clk", false,-1);
        tracep->declBit(c+383,"top pc rst", false,-1);
        tracep->declBit(c+2,"top pc stall", false,-1);
        tracep->declQuad(c+87,"top pc cpu_pc", false,-1, 63,0);
        tracep->declBit(c+382,"top id_reg clk", false,-1);
        tracep->declBit(c+383,"top id_reg rst", false,-1);
        tracep->declBit(c+2,"top id_reg stall", false,-1);
        tracep->declBit(c+14,"top id_reg IF_Flush", false,-1);
        tracep->declBus(c+57,"top id_reg inst", false,-1, 31,0);
        tracep->declQuad(c+69,"top id_reg if_pc", false,-1, 63,0);
        tracep->declBus(c+60,"top id_reg id_inst_id", false,-1, 31,0);
        tracep->declQuad(c+93,"top id_reg id_reg_pc", false,-1, 63,0);
        tracep->declBus(c+60,"top idu inst", false,-1, 31,0);
        tracep->declBus(c+49,"top idu exe_reg_rd", false,-1, 4,0);
        tracep->declBus(c+45,"top idu exe_reg_rs1", false,-1, 4,0);
        tracep->declBus(c+46,"top idu exe_reg_rs2", false,-1, 4,0);
        tracep->declBus(c+50,"top idu wb_reg_rd", false,-1, 4,0);
        tracep->declBus(c+48,"top idu mem_reg_rd", false,-1, 4,0);
        tracep->declBus(c+26,"top idu exe_reg_src1_sel", false,-1, 1,0);
        tracep->declBus(c+28,"top idu exe_reg_src2_sel", false,-1, 1,0);
        tracep->declBit(c+12,"top idu exe_reg_data_ren", false,-1);
        tracep->declBit(c+13,"top idu mem_reg_data_ren", false,-1);
        tracep->declBit(c+22,"top idu wb_reg_reg_wen", false,-1);
        tracep->declBit(c+21,"top idu exe_reg_reg_wen", false,-1);
        tracep->declBit(c+18,"top idu mem_reg_reg_wen", false,-1);
        tracep->declQuad(c+61,"top idu imm", false,-1, 63,0);
        tracep->declBus(c+56,"top idu op", false,-1, 15,0);
        tracep->declBus(c+51,"top idu b_check", false,-1, 5,0);
        tracep->declBus(c+52,"top idu l_bhw", false,-1, 5,0);
        tracep->declBus(c+47,"top idu rd", false,-1, 4,0);
        tracep->declBus(c+37,"top idu src1_sel_plus", false,-1, 2,0);
        tracep->declBus(c+38,"top idu src2_sel_plus", false,-1, 2,0);
        tracep->declBus(c+41,"top idu pc_add_rs1_sel", false,-1, 3,0);
        tracep->declBus(c+42,"top idu b_check_rs2_sel", false,-1, 3,0);
        tracep->declBit(c+10,"top idu stall_id", false,-1);
        tracep->declBit(c+2,"top idu stall_l", false,-1);
        tracep->declBus(c+43,"top idu rs1", false,-1, 4,0);
        tracep->declBus(c+44,"top idu rs2", false,-1, 4,0);
        tracep->declBus(c+34,"top idu s_bhwd", false,-1, 2,0);
        tracep->declBus(c+31,"top idu pc_sel", false,-1, 2,0);
        tracep->declBus(c+23,"top idu src1_sel", false,-1, 1,0);
        tracep->declBus(c+27,"top idu src2_sel", false,-1, 1,0);
        tracep->declBus(c+29,"top idu load_sel", false,-1, 1,0);
        tracep->declBit(c+7,"top idu data_wen", false,-1);
        tracep->declBit(c+11,"top idu data_ren", false,-1);
        tracep->declBit(c+15,"top idu ebreak", false,-1);
        tracep->declBit(c+17,"top idu reg_wen", false,-1);
        tracep->declBit(c+1,"top idu w_check", false,-1);
        tracep->declBit(c+115,"top idu TYPE_I", false,-1);
        tracep->declBit(c+116,"top idu TYPE_U", false,-1);
        tracep->declBit(c+7,"top idu TYPE_S", false,-1);
        tracep->declBit(c+117,"top idu TYPE_J", false,-1);
        tracep->declBit(c+118,"top idu TYPE_B", false,-1);
        tracep->declBit(c+119,"top idu TYPE_R", false,-1);
        tracep->declBit(c+120,"top idu inst_lui", false,-1);
        tracep->declBit(c+121,"top idu inst_rem", false,-1);
        tracep->declBit(c+122,"top idu inst_remw", false,-1);
        tracep->declBit(c+123,"top idu inst_mul", false,-1);
        tracep->declBit(c+124,"top idu inst_mulw", false,-1);
        tracep->declBit(c+125,"top idu inst_div", false,-1);
        tracep->declBit(c+126,"top idu inst_divw", false,-1);
        tracep->declBit(c+127,"top idu inst_lwu", false,-1);
        tracep->declBit(c+128,"top idu inst_auipc", false,-1);
        tracep->declBit(c+117,"top idu inst_jal", false,-1);
        tracep->declBit(c+129,"top idu inst_beq", false,-1);
        tracep->declBit(c+130,"top idu inst_bne", false,-1);
        tracep->declBit(c+131,"top idu inst_blt", false,-1);
        tracep->declBit(c+132,"top idu inst_bge", false,-1);
        tracep->declBit(c+133,"top idu inst_bltu", false,-1);
        tracep->declBit(c+134,"top idu inst_bgeu", false,-1);
        tracep->declBit(c+135,"top idu inst_jalr", false,-1);
        tracep->declBit(c+136,"top idu inst_lb", false,-1);
        tracep->declBit(c+137,"top idu inst_lh", false,-1);
        tracep->declBit(c+138,"top idu inst_lw", false,-1);
        tracep->declBit(c+139,"top idu inst_ld", false,-1);
        tracep->declBit(c+140,"top idu inst_lbu", false,-1);
        tracep->declBit(c+141,"top idu inst_lhu", false,-1);
        tracep->declBit(c+142,"top idu inst_addi", false,-1);
        tracep->declBit(c+143,"top idu inst_slti", false,-1);
        tracep->declBit(c+144,"top idu inst_sltiu", false,-1);
        tracep->declBit(c+145,"top idu inst_xori", false,-1);
        tracep->declBit(c+146,"top idu inst_ori", false,-1);
        tracep->declBit(c+147,"top idu inst_andi", false,-1);
        tracep->declBit(c+148,"top idu inst_slli", false,-1);
        tracep->declBit(c+149,"top idu inst_srli", false,-1);
        tracep->declBit(c+150,"top idu inst_srai", false,-1);
        tracep->declBit(c+15,"top idu inst_ebreak", false,-1);
        tracep->declBit(c+151,"top idu inst_sb", false,-1);
        tracep->declBit(c+152,"top idu inst_sh", false,-1);
        tracep->declBit(c+153,"top idu inst_sw", false,-1);
        tracep->declBit(c+154,"top idu inst_sd", false,-1);
        tracep->declBit(c+155,"top idu inst_add", false,-1);
        tracep->declBit(c+156,"top idu inst_sub", false,-1);
        tracep->declBit(c+157,"top idu inst_sll", false,-1);
        tracep->declBit(c+158,"top idu inst_slt", false,-1);
        tracep->declBit(c+159,"top idu inst_sltu", false,-1);
        tracep->declBit(c+160,"top idu inst_xor", false,-1);
        tracep->declBit(c+161,"top idu inst_srl", false,-1);
        tracep->declBit(c+162,"top idu inst_sra", false,-1);
        tracep->declBit(c+163,"top idu inst_or", false,-1);
        tracep->declBit(c+164,"top idu inst_and", false,-1);
        tracep->declBit(c+11,"top idu l_check", false,-1);
        tracep->declBit(c+165,"top idu op_sll", false,-1);
        tracep->declBit(c+166,"top idu op_rem", false,-1);
        tracep->declBit(c+167,"top idu op_mul", false,-1);
        tracep->declBit(c+168,"top idu op_div", false,-1);
        tracep->declBit(c+169,"top idu op_slt", false,-1);
        tracep->declBit(c+170,"top idu op_sltu", false,-1);
        tracep->declBit(c+171,"top idu op_xor", false,-1);
        tracep->declBit(c+172,"top idu op_srl", false,-1);
        tracep->declBit(c+173,"top idu op_sra", false,-1);
        tracep->declBit(c+174,"top idu op_or", false,-1);
        tracep->declBit(c+175,"top idu op_and", false,-1);
        tracep->declBit(c+176,"top idu inst_addiw", false,-1);
        tracep->declBit(c+177,"top idu inst_slliw", false,-1);
        tracep->declBit(c+178,"top idu inst_srliw", false,-1);
        tracep->declBit(c+179,"top idu inst_sraiw", false,-1);
        tracep->declBit(c+180,"top idu inst_addw", false,-1);
        tracep->declBit(c+181,"top idu inst_subw", false,-1);
        tracep->declBit(c+182,"top idu inst_sllw", false,-1);
        tracep->declBit(c+183,"top idu inst_srlw", false,-1);
        tracep->declBit(c+184,"top idu inst_sraw", false,-1);
        tracep->declQuad(c+185,"top idu immI", false,-1, 63,0);
        tracep->declQuad(c+187,"top idu immU", false,-1, 63,0);
        tracep->declQuad(c+189,"top idu immS", false,-1, 63,0);
        tracep->declQuad(c+191,"top idu immJ", false,-1, 63,0);
        tracep->declQuad(c+193,"top idu immB", false,-1, 63,0);
        tracep->declBus(c+195,"top idu opcode", false,-1, 6,0);
        tracep->declBus(c+196,"top idu funct7", false,-1, 6,0);
        tracep->declBus(c+197,"top idu funct3", false,-1, 2,0);
        tracep->declQuad(c+63,"top common_reg data_rd", false,-1, 63,0);
        tracep->declBus(c+50,"top common_reg addr_rd", false,-1, 4,0);
        tracep->declBus(c+43,"top common_reg addr_rs1", false,-1, 4,0);
        tracep->declBus(c+44,"top common_reg addr_rs2", false,-1, 4,0);
        tracep->declBit(c+22,"top common_reg en", false,-1);
        tracep->declBit(c+382,"top common_reg clk", false,-1);
        tracep->declQuad(c+67,"top common_reg data_a0", false,-1, 63,0);
        tracep->declQuad(c+101,"top common_reg data_rs1", false,-1, 63,0);
        tracep->declQuad(c+103,"top common_reg data_rs2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+198+i*2,"top common_reg reg_com", true,(i+0), 63,0);}}
        tracep->declQuad(c+101,"top pc_sel_check src1_rs1", false,-1, 63,0);
        tracep->declQuad(c+113,"top pc_sel_check data_rd_in", false,-1, 63,0);
        tracep->declQuad(c+83,"top pc_sel_check mem_reg_data_rd_in", false,-1, 63,0);
        tracep->declQuad(c+63,"top pc_sel_check data_rd", false,-1, 63,0);
        tracep->declQuad(c+103,"top pc_sel_check src2_rs2", false,-1, 63,0);
        tracep->declBus(c+41,"top pc_sel_check pc_add_rs1_sel", false,-1, 3,0);
        tracep->declBus(c+42,"top pc_sel_check b_check_rs2_sel", false,-1, 3,0);
        tracep->declQuad(c+93,"top pc_sel_check id_reg_pc", false,-1, 63,0);
        tracep->declQuad(c+61,"top pc_sel_check imm", false,-1, 63,0);
        tracep->declBus(c+51,"top pc_sel_check b_check", false,-1, 5,0);
        tracep->declBus(c+31,"top pc_sel_check pc_sel", false,-1, 2,0);
        tracep->declBus(c+36,"top pc_sel_check pc_sel_out", false,-1, 2,0);
        tracep->declQuad(c+105,"top pc_sel_check cpu_dnpc_in1", false,-1, 63,0);
        tracep->declQuad(c+107,"top pc_sel_check cpu_dnpc_in2", false,-1, 63,0);
        tracep->declQuad(c+262,"top pc_sel_check pc_src1", false,-1, 63,0);
        tracep->declQuad(c+264,"top pc_sel_check b_src2", false,-1, 63,0);
        tracep->declBit(c+266,"top pc_sel_check b_en", false,-1);
        tracep->declBit(c+267,"top pc_sel_check beq_check", false,-1);
        tracep->declBit(c+268,"top pc_sel_check bne_check", false,-1);
        tracep->declBit(c+269,"top pc_sel_check blt_check", false,-1);
        tracep->declBit(c+270,"top pc_sel_check bge_check", false,-1);
        tracep->declBit(c+271,"top pc_sel_check bltu_check", false,-1);
        tracep->declBit(c+272,"top pc_sel_check bgeu_check", false,-1);
        tracep->declBit(c+412,"top pc_sel_check data_cin", false,-1);
        tracep->declBit(c+272,"top pc_sel_check data_cout", false,-1);
        tracep->declQuad(c+262,"top pc_sel_check data_a", false,-1, 63,0);
        tracep->declQuad(c+273,"top pc_sel_check data_b", false,-1, 63,0);
        tracep->declQuad(c+275,"top pc_sel_check data_result", false,-1, 63,0);
        tracep->declQuad(c+101,"top pc_sel_check pc_add_src1_choice in0", false,-1, 63,0);
        tracep->declQuad(c+113,"top pc_sel_check pc_add_src1_choice in1", false,-1, 63,0);
        tracep->declQuad(c+83,"top pc_sel_check pc_add_src1_choice in2", false,-1, 63,0);
        tracep->declQuad(c+63,"top pc_sel_check pc_add_src1_choice in3", false,-1, 63,0);
        tracep->declBus(c+41,"top pc_sel_check pc_add_src1_choice key", false,-1, 3,0);
        tracep->declQuad(c+262,"top pc_sel_check pc_add_src1_choice out", false,-1, 63,0);
        tracep->declQuad(c+103,"top pc_sel_check b_check_rs2_choice in0", false,-1, 63,0);
        tracep->declQuad(c+113,"top pc_sel_check b_check_rs2_choice in1", false,-1, 63,0);
        tracep->declQuad(c+83,"top pc_sel_check b_check_rs2_choice in2", false,-1, 63,0);
        tracep->declQuad(c+63,"top pc_sel_check b_check_rs2_choice in3", false,-1, 63,0);
        tracep->declBus(c+42,"top pc_sel_check b_check_rs2_choice key", false,-1, 3,0);
        tracep->declQuad(c+264,"top pc_sel_check b_check_rs2_choice out", false,-1, 63,0);
        tracep->declBit(c+382,"top exe_reg clk", false,-1);
        tracep->declBit(c+383,"top exe_reg rst", false,-1);
        tracep->declQuad(c+93,"top exe_reg id_reg_pc", false,-1, 63,0);
        tracep->declBus(c+277,"top exe_reg exe_op_in", false,-1, 14,0);
        tracep->declBus(c+47,"top exe_reg exe_reg_rd_in", false,-1, 4,0);
        tracep->declQuad(c+101,"top exe_reg exe_reg_src1_in", false,-1, 63,0);
        tracep->declBus(c+23,"top exe_reg exe_reg_src1_sel_in", false,-1, 1,0);
        tracep->declQuad(c+103,"top exe_reg exe_reg_src2_in", false,-1, 63,0);
        tracep->declBit(c+8,"top exe_reg exe_reg_in7", false,-1);
        tracep->declBit(c+9,"top exe_reg exe_reg_in8", false,-1);
        tracep->declBus(c+29,"top exe_reg exe_reg_in9", false,-1, 1,0);
        tracep->declBus(c+27,"top exe_reg exe_op_in0", false,-1, 1,0);
        tracep->declQuad(c+61,"top exe_reg exe_op_in1", false,-1, 63,0);
        tracep->declBus(c+43,"top exe_reg exe_op_in2", false,-1, 4,0);
        tracep->declBus(c+44,"top exe_reg exe_op_in3", false,-1, 4,0);
        tracep->declBit(c+5,"top exe_reg exe_op_in4", false,-1);
        tracep->declBus(c+34,"top exe_reg exe_op_in5", false,-1, 2,0);
        tracep->declBus(c+52,"top exe_reg exe_op_in6", false,-1, 5,0);
        tracep->declBit(c+1,"top exe_reg exe_op_in7", false,-1);
        tracep->declQuad(c+91,"top exe_reg exe_reg_out0", false,-1, 63,0);
        tracep->declBus(c+55,"top exe_reg exe_reg_out1", false,-1, 14,0);
        tracep->declBus(c+49,"top exe_reg exe_reg_out2", false,-1, 4,0);
        tracep->declQuad(c+71,"top exe_reg exe_reg_out3", false,-1, 63,0);
        tracep->declBus(c+26,"top exe_reg exe_reg_out4", false,-1, 1,0);
        tracep->declQuad(c+73,"top exe_reg exe_reg_out5", false,-1, 63,0);
        tracep->declBit(c+20,"top exe_reg exe_reg_out7", false,-1);
        tracep->declBit(c+21,"top exe_reg exe_reg_out8", false,-1);
        tracep->declBus(c+30,"top exe_reg exe_reg_out9", false,-1, 1,0);
        tracep->declBus(c+28,"top exe_reg exe_reg_out10", false,-1, 1,0);
        tracep->declQuad(c+85,"top exe_reg exe_reg_out11", false,-1, 63,0);
        tracep->declBus(c+45,"top exe_reg exe_reg_out12", false,-1, 4,0);
        tracep->declBus(c+46,"top exe_reg exe_reg_out13", false,-1, 4,0);
        tracep->declBit(c+12,"top exe_reg exe_reg_out14", false,-1);
        tracep->declBus(c+35,"top exe_reg exe_reg_out15", false,-1, 2,0);
        tracep->declBus(c+53,"top exe_reg exe_reg_out16", false,-1, 5,0);
        tracep->declBit(c+6,"top exe_reg exe_reg_out17", false,-1);
        tracep->declQuad(c+91,"top src_sel exe_reg_pc", false,-1, 63,0);
        tracep->declQuad(c+71,"top src_sel exe_reg_src1_rs1", false,-1, 63,0);
        tracep->declQuad(c+83,"top src_sel mem_reg_data_rd_in", false,-1, 63,0);
        tracep->declQuad(c+63,"top src_sel data_rd", false,-1, 63,0);
        tracep->declBus(c+26,"top src_sel exe_reg_src1_sel", false,-1, 1,0);
        tracep->declBus(c+37,"top src_sel src1_sel_plus", false,-1, 2,0);
        tracep->declQuad(c+109,"top src_sel src1", false,-1, 63,0);
        tracep->declQuad(c+85,"top src_sel exe_reg_imm", false,-1, 63,0);
        tracep->declQuad(c+73,"top src_sel exe_reg_src2_rs2", false,-1, 63,0);
        tracep->declBus(c+28,"top src_sel exe_reg_src2_sel", false,-1, 1,0);
        tracep->declBus(c+38,"top src_sel src2_sel_plus", false,-1, 2,0);
        tracep->declQuad(c+111,"top src_sel src2", false,-1, 63,0);
        tracep->declQuad(c+109,"top alu src1", false,-1, 63,0);
        tracep->declQuad(c+111,"top alu src2", false,-1, 63,0);
        tracep->declQuad(c+85,"top alu imm", false,-1, 63,0);
        tracep->declBus(c+55,"top alu op", false,-1, 14,0);
        tracep->declBus(c+35,"top alu s_bhwd", false,-1, 2,0);
        tracep->declBit(c+20,"top alu s_check", false,-1);
        tracep->declBit(c+6,"top alu w_check", false,-1);
        tracep->declQuad(c+65,"top alu src2_out", false,-1, 63,0);
        tracep->declQuad(c+113,"top alu data_rd", false,-1, 63,0);
        tracep->declBus(c+58,"top alu ram_raddr", false,-1, 31,0);
        tracep->declBit(c+278,"top alu op_sb", false,-1);
        tracep->declBit(c+279,"top alu op_sh", false,-1);
        tracep->declBit(c+280,"top alu op_rem", false,-1);
        tracep->declBit(c+281,"top alu op_mul", false,-1);
        tracep->declBit(c+282,"top alu op_div", false,-1);
        tracep->declBit(c+283,"top alu op_sw", false,-1);
        tracep->declBit(c+284,"top alu op_add", false,-1);
        tracep->declBit(c+285,"top alu op_sub", false,-1);
        tracep->declBit(c+286,"top alu op_slt", false,-1);
        tracep->declBit(c+287,"top alu op_sltu", false,-1);
        tracep->declBit(c+288,"top alu op_and", false,-1);
        tracep->declBit(c+289,"top alu op_or", false,-1);
        tracep->declBit(c+290,"top alu op_xor", false,-1);
        tracep->declBit(c+291,"top alu op_sll", false,-1);
        tracep->declBit(c+292,"top alu op_srl", false,-1);
        tracep->declBit(c+293,"top alu op_sra", false,-1);
        tracep->declBit(c+294,"top alu op_lui", false,-1);
        tracep->declBit(c+295,"top alu op_jal", false,-1);
        tracep->declBus(c+296,"top alu srl_w1_result", false,-1, 31,0);
        tracep->declBus(c+297,"top alu sra_w1_result", false,-1, 31,0);
        tracep->declBus(c+413,"top alu div_w1_result", false,-1, 31,0);
        tracep->declBus(c+414,"top alu rem_w1_result", false,-1, 31,0);
        tracep->declQuad(c+298,"top alu data_result_w", false,-1, 63,0);
        tracep->declQuad(c+300,"top alu rem_result", false,-1, 63,0);
        tracep->declQuad(c+302,"top alu rem_d_result", false,-1, 63,0);
        tracep->declQuad(c+304,"top alu rem_w_result", false,-1, 63,0);
        tracep->declQuad(c+306,"top alu div_d1_result", false,-1, 63,0);
        tracep->declQuad(c+308,"top alu div_result", false,-1, 63,0);
        tracep->declQuad(c+310,"top alu mul_result", false,-1, 63,0);
        tracep->declQuad(c+312,"top alu div_w_result", false,-1, 63,0);
        tracep->declQuad(c+314,"top alu div_d_result", false,-1, 63,0);
        tracep->declQuad(c+316,"top alu mul_d_result", false,-1, 63,0);
        tracep->declQuad(c+318,"top alu mul_w_result", false,-1, 63,0);
        tracep->declQuad(c+320,"top alu sll_w1_result", false,-1, 63,0);
        tracep->declQuad(c+322,"top alu sll_w_result", false,-1, 63,0);
        tracep->declQuad(c+324,"top alu srl_d_result", false,-1, 63,0);
        tracep->declQuad(c+326,"top alu sra_d_result", false,-1, 63,0);
        tracep->declQuad(c+328,"top alu sll_mid_result", false,-1, 63,0);
        tracep->declQuad(c+330,"top alu srl_w_result", false,-1, 63,0);
        tracep->declQuad(c+332,"top alu sra_w_result", false,-1, 63,0);
        tracep->declQuad(c+334,"top alu add_sub_result", false,-1, 63,0);
        tracep->declQuad(c+415,"top alu srl_mid_result", false,-1, 63,0);
        tracep->declQuad(c+336,"top alu slt_result", false,-1, 63,0);
        tracep->declQuad(c+338,"top alu s_result", false,-1, 63,0);
        tracep->declQuad(c+340,"top alu sltu_result", false,-1, 63,0);
        tracep->declQuad(c+342,"top alu and_result", false,-1, 63,0);
        tracep->declQuad(c+344,"top alu or_result", false,-1, 63,0);
        tracep->declQuad(c+346,"top alu xor_result", false,-1, 63,0);
        tracep->declQuad(c+348,"top alu sll_result", false,-1, 63,0);
        tracep->declQuad(c+350,"top alu srl_result", false,-1, 63,0);
        tracep->declQuad(c+352,"top alu sra_result", false,-1, 63,0);
        tracep->declQuad(c+111,"top alu lui_result", false,-1, 63,0);
        tracep->declQuad(c+354,"top alu jal_result", false,-1, 63,0);
        tracep->declQuad(c+109,"top alu data_a", false,-1, 63,0);
        tracep->declQuad(c+356,"top alu data_b", false,-1, 63,0);
        tracep->declQuad(c+358,"top alu data_result", false,-1, 63,0);
        tracep->declQuad(c+354,"top alu data_pc", false,-1, 63,0);
        tracep->declBit(c+360,"top alu data_cin", false,-1);
        tracep->declBit(c+361,"top alu data_cout", false,-1);
        tracep->declBit(c+382,"top mem_reg clk", false,-1);
        tracep->declBit(c+383,"top mem_reg rst", false,-1);
        tracep->declBus(c+49,"top mem_reg mem_reg_in0", false,-1, 4,0);
        tracep->declBus(c+385,"top mem_reg mem_reg_in1", false,-1, 2,0);
        tracep->declBit(c+20,"top mem_reg mem_reg_in2", false,-1);
        tracep->declBit(c+21,"top mem_reg mem_reg_in3", false,-1);
        tracep->declBus(c+30,"top mem_reg mem_reg_in4", false,-1, 1,0);
        tracep->declQuad(c+113,"top mem_reg mem_reg_in7", false,-1, 63,0);
        tracep->declBus(c+58,"top mem_reg mem_reg_in8", false,-1, 31,0);
        tracep->declQuad(c+65,"top mem_reg mem_reg_in9", false,-1, 63,0);
        tracep->declQuad(c+91,"top mem_reg mem_reg_in10", false,-1, 63,0);
        tracep->declBit(c+12,"top mem_reg mem_reg_in11", false,-1);
        tracep->declBus(c+35,"top mem_reg mem_reg_in12", false,-1, 2,0);
        tracep->declBus(c+53,"top mem_reg mem_reg_in13", false,-1, 5,0);
        tracep->declBus(c+48,"top mem_reg mem_reg_out0", false,-1, 4,0);
        tracep->declBus(c+40,"top mem_reg mem_reg_out1", false,-1, 2,0);
        tracep->declBit(c+19,"top mem_reg mem_reg_out2", false,-1);
        tracep->declBit(c+18,"top mem_reg mem_reg_out3", false,-1);
        tracep->declBus(c+25,"top mem_reg mem_reg_out4", false,-1, 1,0);
        tracep->declQuad(c+83,"top mem_reg mem_reg_out7", false,-1, 63,0);
        tracep->declBus(c+59,"top mem_reg mem_reg_out8", false,-1, 31,0);
        tracep->declQuad(c+81,"top mem_reg mem_reg_out9", false,-1, 63,0);
        tracep->declQuad(c+75,"top mem_reg mem_reg_out10", false,-1, 63,0);
        tracep->declBit(c+13,"top mem_reg mem_reg_out11", false,-1);
        tracep->declBus(c+33,"top mem_reg mem_reg_out12", false,-1, 2,0);
        tracep->declBus(c+54,"top mem_reg mem_reg_out13", false,-1, 5,0);
        tracep->declQuad(c+81,"top ram wdata", false,-1, 63,0);
        tracep->declQuad(c+87,"top ram cpu_pc", false,-1, 63,0);
        tracep->declBit(c+383,"top ram rst", false,-1);
        tracep->declBus(c+59,"top ram ram_addr", false,-1, 31,0);
        tracep->declBus(c+54,"top ram l_bhw", false,-1, 5,0);
        tracep->declBus(c+33,"top ram s_bhwd", false,-1, 2,0);
        tracep->declBit(c+19,"top ram data_wen", false,-1);
        tracep->declBit(c+13,"top ram data_ren", false,-1);
        tracep->declBit(c+382,"top ram clk", false,-1);
        tracep->declBus(c+57,"top ram inst", false,-1, 31,0);
        tracep->declQuad(c+99,"top ram rdata", false,-1, 63,0);
        tracep->declQuad(c+69,"top ram if_pc", false,-1, 63,0);
        tracep->declBit(c+3,"top ram stall_if", false,-1);
        tracep->declBit(c+4,"top ram stall_mem", false,-1);
        tracep->declBit(c+362,"top ram op_sb", false,-1);
        tracep->declBit(c+363,"top ram data_cout", false,-1);
        tracep->declBit(c+364,"top ram op_sh", false,-1);
        tracep->declBit(c+365,"top ram op_sw", false,-1);
        tracep->declBit(c+366,"top ram op_lb", false,-1);
        tracep->declBit(c+367,"top ram op_lbu", false,-1);
        tracep->declBit(c+368,"top ram op_lh", false,-1);
        tracep->declBit(c+369,"top ram op_lhu", false,-1);
        tracep->declBit(c+370,"top ram op_lw", false,-1);
        tracep->declBit(c+371,"top ram op_lwu", false,-1);
        tracep->declBus(c+372,"top ram addr", false,-1, 31,0);
        tracep->declBus(c+373,"top ram addr1", false,-1, 31,0);
        tracep->declBus(c+374,"top ram addr2", false,-1, 31,0);
        tracep->declQuad(c+375,"top ram rdata_out", false,-1, 63,0);
        tracep->declQuad(c+377,"top ram data_result", false,-1, 63,0);
        tracep->declQuad(c+379,"top ram rom", false,-1, 63,0);
        tracep->declBit(c+382,"top wb_reg clk", false,-1);
        tracep->declBit(c+383,"top wb_reg rst", false,-1);
        tracep->declQuad(c+75,"top wb_reg wb_reg_in0", false,-1, 63,0);
        tracep->declBus(c+40,"top wb_reg wb_reg_in1", false,-1, 2,0);
        tracep->declBit(c+18,"top wb_reg wb_reg_in2", false,-1);
        tracep->declBus(c+25,"top wb_reg wb_reg_in3", false,-1, 1,0);
        tracep->declQuad(c+83,"top wb_reg wb_reg_in4", false,-1, 63,0);
        tracep->declQuad(c+99,"top wb_reg wb_reg_in5", false,-1, 63,0);
        tracep->declBus(c+48,"top wb_reg wb_reg_in6", false,-1, 4,0);
        tracep->declQuad(c+89,"top wb_reg wb_reg_out0", false,-1, 63,0);
        tracep->declBus(c+39,"top wb_reg wb_reg_out1", false,-1, 2,0);
        tracep->declBit(c+22,"top wb_reg wb_reg_out2", false,-1);
        tracep->declBus(c+24,"top wb_reg wb_reg_out3", false,-1, 1,0);
        tracep->declQuad(c+79,"top wb_reg wb_reg_out4", false,-1, 63,0);
        tracep->declQuad(c+77,"top wb_reg wb_reg_out5", false,-1, 63,0);
        tracep->declBus(c+50,"top wb_reg wb_reg_out6", false,-1, 4,0);
        tracep->declQuad(c+79,"top data_rd_choice in0", false,-1, 63,0);
        tracep->declQuad(c+77,"top data_rd_choice in1", false,-1, 63,0);
        tracep->declBus(c+24,"top data_rd_choice key", false,-1, 1,0);
        tracep->declQuad(c+63,"top data_rd_choice out", false,-1, 63,0);
        tracep->declBit(c+382,"top ebreak_list clk", false,-1);
        tracep->declBit(c+383,"top ebreak_list rst", false,-1);
        tracep->declBit(c+15,"top ebreak_list ebreak", false,-1);
        tracep->declBit(c+16,"top ebreak_list ebreak_out", false,-1);
        tracep->declBit(c+381,"top ebreak_list ebreak_1", false,-1);
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
    VlWide<3>/*95:0*/ __Vtemp38;
    VlWide<3>/*95:0*/ __Vtemp39;
    VlWide<3>/*95:0*/ __Vtemp40;
    VlWide<3>/*95:0*/ __Vtemp41;
    VlWide<3>/*95:0*/ __Vtemp42;
    VlWide<3>/*95:0*/ __Vtemp45;
    VlWide<3>/*95:0*/ __Vtemp46;
    VlWide<3>/*95:0*/ __Vtemp47;
    VlWide<3>/*95:0*/ __Vtemp48;
    VlWide<3>/*95:0*/ __Vtemp49;
    VlWide<3>/*95:0*/ __Vtemp52;
    VlWide<3>/*95:0*/ __Vtemp53;
    VlWide<3>/*95:0*/ __Vtemp54;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(((((((((((((IData)(vlSelf->top__DOT__idu__DOT__inst_addiw) 
                                           | (IData)(vlSelf->top__DOT__idu__DOT__inst_remw)) 
                                          | (IData)(vlSelf->top__DOT__idu__DOT__inst_slliw)) 
                                         | (IData)(vlSelf->top__DOT__idu__DOT__inst_srliw)) 
                                        | (IData)(vlSelf->top__DOT__idu__DOT__inst_sraiw)) 
                                       | (IData)(vlSelf->top__DOT__idu__DOT__inst_addw)) 
                                      | (IData)(vlSelf->top__DOT__idu__DOT__inst_subw)) 
                                     | (IData)(vlSelf->top__DOT__idu__DOT__inst_sllw)) 
                                    | (IData)(vlSelf->top__DOT__idu__DOT__inst_srlw)) 
                                   | (IData)(vlSelf->top__DOT__idu__DOT__inst_sraw)) 
                                  | (IData)(vlSelf->top__DOT__idu__DOT__inst_mulw)) 
                                 | (IData)(vlSelf->top__DOT__idu__DOT__inst_divw))));
        tracep->fullBit(oldp+2,(vlSelf->top__DOT__stall_l));
        tracep->fullBit(oldp+3,(vlSelf->top__DOT__stall_if));
        tracep->fullBit(oldp+4,(vlSelf->top__DOT__stall_mem));
        tracep->fullBit(oldp+5,(((IData)(vlSelf->top__DOT__stall_l)
                                  ? 0U : (1U & (IData)(vlSelf->top__DOT__idu__DOT__l_check)))));
        tracep->fullBit(oldp+6,(vlSelf->top__DOT__exe_reg_w_check));
        tracep->fullBit(oldp+7,((0x23U == (0x7fU & vlSelf->top__DOT__inst_id))));
        tracep->fullBit(oldp+8,(((IData)(vlSelf->top__DOT__stall_l)
                                  ? 0U : (IData)((0x23U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__inst_id))))));
        tracep->fullBit(oldp+9,(((IData)(vlSelf->top__DOT__stall_l)
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
        tracep->fullBit(oldp+10,((0U == (IData)(vlSelf->top__DOT__op))));
        tracep->fullBit(oldp+11,(vlSelf->top__DOT__idu__DOT__l_check));
        tracep->fullBit(oldp+12,(vlSelf->top__DOT__exe_reg_data_ren));
        tracep->fullBit(oldp+13,(vlSelf->top__DOT__mem_reg_data_ren));
        tracep->fullBit(oldp+14,(((1U == (IData)(vlSelf->top__DOT__pc_sel_out))
                                   ? 0U : 1U)));
        tracep->fullBit(oldp+15,((0x100073U == vlSelf->top__DOT__inst_id)));
        tracep->fullBit(oldp+16,(vlSelf->top__DOT__ebreak_out));
        tracep->fullBit(oldp+17,((((((0x33U == (0x7fU 
                                                & vlSelf->top__DOT__inst_id)) 
                                     | (0x3bU == (0x7fU 
                                                  & vlSelf->top__DOT__inst_id))) 
                                    | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_I)) 
                                   | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_U)) 
                                  | (0x6fU == (0x7fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+18,(vlSelf->top__DOT__mem_reg_reg_wen));
        tracep->fullBit(oldp+19,(vlSelf->top__DOT__mem_reg_data_wen));
        tracep->fullBit(oldp+20,(vlSelf->top__DOT__exe_reg_data_wen));
        tracep->fullBit(oldp+21,(vlSelf->top__DOT__exe_reg_reg_wen));
        tracep->fullBit(oldp+22,(vlSelf->top__DOT__wb_reg_reg_wen));
        tracep->fullCData(oldp+23,(((((0x6fU == (0x7fU 
                                                 & vlSelf->top__DOT__inst_id)) 
                                      | (IData)(vlSelf->top__DOT__idu__DOT__inst_jalr)) 
                                     | (0x17U == (0x7fU 
                                                  & vlSelf->top__DOT__inst_id)))
                                     ? 1U : 2U)),2);
        tracep->fullCData(oldp+24,(vlSelf->top__DOT__wb_reg_load_sel),2);
        tracep->fullCData(oldp+25,(vlSelf->top__DOT__mem_reg_load_sel),2);
        tracep->fullCData(oldp+26,(vlSelf->top__DOT__exe_reg_src1_sel),2);
        tracep->fullCData(oldp+27,(((((0x6fU == (0x7fU 
                                                 & vlSelf->top__DOT__inst_id)) 
                                      | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_U)) 
                                     | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_I))
                                     ? 1U : 2U)),2);
        tracep->fullCData(oldp+28,(vlSelf->top__DOT__exe_reg_src2_sel),2);
        tracep->fullCData(oldp+29,(((IData)(vlSelf->top__DOT__idu__DOT__l_check)
                                     ? 2U : 1U)),2);
        tracep->fullCData(oldp+30,(vlSelf->top__DOT__exe_reg_load_sel),2);
        tracep->fullCData(oldp+31,(((IData)(vlSelf->top__DOT__idu__DOT__inst_jalr)
                                     ? 4U : ((0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->top__DOT__inst_id))
                                              ? 2U : 1U))),3);
        tracep->fullCData(oldp+32,(vlSelf->top__DOT__stall),3);
        tracep->fullCData(oldp+33,(vlSelf->top__DOT__mem_reg_s_bhwd),3);
        tracep->fullCData(oldp+34,((((IData)((0x23U 
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
        tracep->fullCData(oldp+35,(vlSelf->top__DOT__exe_reg_s_bhwd),3);
        tracep->fullCData(oldp+36,(vlSelf->top__DOT__pc_sel_out),3);
        tracep->fullCData(oldp+37,(vlSelf->top__DOT__src1_sel_plus),3);
        tracep->fullCData(oldp+38,(vlSelf->top__DOT__src2_sel_plus),3);
        tracep->fullCData(oldp+39,(vlSelf->top__DOT__wb_reg_pc_sel),3);
        tracep->fullCData(oldp+40,(vlSelf->top__DOT__mem_reg_pc_sel),3);
        tracep->fullCData(oldp+41,(vlSelf->top__DOT__pc_add_rs1_sel),4);
        tracep->fullCData(oldp+42,(vlSelf->top__DOT__b_check_rs2_sel),4);
        tracep->fullCData(oldp+43,(vlSelf->top__DOT__rs1),5);
        tracep->fullCData(oldp+44,((0x1fU & (vlSelf->top__DOT__inst_id 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+45,(vlSelf->top__DOT__exe_reg_rs1),5);
        tracep->fullCData(oldp+46,(vlSelf->top__DOT__exe_reg_rs2),5);
        tracep->fullCData(oldp+47,((0x1fU & (vlSelf->top__DOT__inst_id 
                                             >> 7U))),5);
        tracep->fullCData(oldp+48,(vlSelf->top__DOT__mem_reg_rd),5);
        tracep->fullCData(oldp+49,(vlSelf->top__DOT__exe_reg_rd),5);
        tracep->fullCData(oldp+50,(vlSelf->top__DOT__wb_reg_rd),5);
        tracep->fullCData(oldp+51,(vlSelf->top__DOT__b_check),6);
        tracep->fullCData(oldp+52,((((IData)(vlSelf->top__DOT__idu__DOT__inst_lb) 
                                     << 5U) | (((IData)(vlSelf->top__DOT__idu__DOT__inst_lbu) 
                                                << 4U) 
                                               | (((IData)(vlSelf->top__DOT__idu__DOT__inst_lh) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->top__DOT__idu__DOT__inst_lhu) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->top__DOT__idu__DOT__inst_lw) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->top__DOT__idu__DOT__inst_lwu))))))),6);
        tracep->fullCData(oldp+53,(vlSelf->top__DOT__exe_reg_l_bhw),6);
        tracep->fullCData(oldp+54,(vlSelf->top__DOT__mem_reg_l_bhw),6);
        tracep->fullSData(oldp+55,(vlSelf->top__DOT__exe_reg_op),15);
        tracep->fullSData(oldp+56,(vlSelf->top__DOT__op),16);
        tracep->fullIData(oldp+57,(vlSelf->top__DOT__inst),32);
        tracep->fullIData(oldp+58,((IData)(vlSelf->top__DOT__alu__DOT__add_sub_result)),32);
        tracep->fullIData(oldp+59,(vlSelf->top__DOT__mem_reg_ram_addr),32);
        tracep->fullIData(oldp+60,(vlSelf->top__DOT__inst_id),32);
        tracep->fullQData(oldp+61,(vlSelf->top__DOT__imm),64);
        tracep->fullQData(oldp+63,(vlSelf->top__DOT__data_rd),64);
        tracep->fullQData(oldp+65,(((4U & (IData)(vlSelf->top__DOT__exe_reg_s_bhwd))
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
        tracep->fullQData(oldp+67,(vlSelf->top__DOT__common_reg__DOT__reg_com
                                   [0xaU]),64);
        tracep->fullQData(oldp+69,(vlSelf->top__DOT__if_pc),64);
        tracep->fullQData(oldp+71,(vlSelf->top__DOT__exe_reg_src1_rs1),64);
        tracep->fullQData(oldp+73,(vlSelf->top__DOT__exe_reg_src2_rs2),64);
        tracep->fullQData(oldp+75,(vlSelf->top__DOT__mem_reg_pc),64);
        tracep->fullQData(oldp+77,(vlSelf->top__DOT__wb_reg_rdata),64);
        tracep->fullQData(oldp+79,(vlSelf->top__DOT__wb_reg_data_rd_in),64);
        tracep->fullQData(oldp+81,(vlSelf->top__DOT__mem_reg_src2_rs2),64);
        tracep->fullQData(oldp+83,(vlSelf->top__DOT__mem_reg_data_rd_in),64);
        tracep->fullQData(oldp+85,(vlSelf->top__DOT__exe_reg_imm),64);
        tracep->fullQData(oldp+87,(vlSelf->top__DOT__cpu_pc),64);
        tracep->fullQData(oldp+89,(vlSelf->top__DOT__wb_reg_pc),64);
        tracep->fullQData(oldp+91,(vlSelf->top__DOT__exe_reg_pc),64);
        tracep->fullQData(oldp+93,(vlSelf->top__DOT__id_reg_pc),64);
        tracep->fullQData(oldp+95,(((1U == (IData)(vlSelf->top__DOT__pc_sel_out))
                                     ? (4ULL + vlSelf->top__DOT__cpu_pc)
                                     : ((2U == (IData)(vlSelf->top__DOT__pc_sel_out))
                                         ? (vlSelf->top__DOT__id_reg_pc 
                                            + vlSelf->top__DOT__imm)
                                         : (0xfffffffffffffffeULL 
                                            & (vlSelf->top__DOT__pc_sel_check__DOT__pc_src1 
                                               + vlSelf->top__DOT__imm))))),64);
        tracep->fullQData(oldp+97,((4ULL + vlSelf->top__DOT__cpu_pc)),64);
        tracep->fullQData(oldp+99,(vlSelf->top__DOT__rdata),64);
        tracep->fullQData(oldp+101,(vlSelf->top__DOT__src1_rs1),64);
        tracep->fullQData(oldp+103,(vlSelf->top__DOT__src2_rs2),64);
        tracep->fullQData(oldp+105,((vlSelf->top__DOT__id_reg_pc 
                                     + vlSelf->top__DOT__imm)),64);
        tracep->fullQData(oldp+107,((0xfffffffffffffffeULL 
                                     & (vlSelf->top__DOT__pc_sel_check__DOT__pc_src1 
                                        + vlSelf->top__DOT__imm))),64);
        tracep->fullQData(oldp+109,(vlSelf->top__DOT__src1),64);
        tracep->fullQData(oldp+111,(vlSelf->top__DOT__src2),64);
        tracep->fullQData(oldp+113,(vlSelf->top__DOT__data_rd_in),64);
        tracep->fullBit(oldp+115,(vlSelf->top__DOT__idu__DOT__TYPE_I));
        tracep->fullBit(oldp+116,(vlSelf->top__DOT__idu__DOT__TYPE_U));
        tracep->fullBit(oldp+117,((0x6fU == (0x7fU 
                                             & vlSelf->top__DOT__inst_id))));
        tracep->fullBit(oldp+118,((0x63U == (0x7fU 
                                             & vlSelf->top__DOT__inst_id))));
        tracep->fullBit(oldp+119,(((0x33U == (0x7fU 
                                              & vlSelf->top__DOT__inst_id)) 
                                   | (0x3bU == (0x7fU 
                                                & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+120,((0x37U == (0x7fU 
                                             & vlSelf->top__DOT__inst_id))));
        tracep->fullBit(oldp+121,(((IData)((0x6033U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__inst_id))) 
                                   & (1U == (vlSelf->top__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+122,(vlSelf->top__DOT__idu__DOT__inst_remw));
        tracep->fullBit(oldp+123,(((IData)((0x33U == 
                                            (0x707fU 
                                             & vlSelf->top__DOT__inst_id))) 
                                   & (1U == (vlSelf->top__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+124,(vlSelf->top__DOT__idu__DOT__inst_mulw));
        tracep->fullBit(oldp+125,(((IData)((0x4033U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__inst_id))) 
                                   & (1U == (vlSelf->top__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+126,(vlSelf->top__DOT__idu__DOT__inst_divw));
        tracep->fullBit(oldp+127,(vlSelf->top__DOT__idu__DOT__inst_lwu));
        tracep->fullBit(oldp+128,((0x17U == (0x7fU 
                                             & vlSelf->top__DOT__inst_id))));
        tracep->fullBit(oldp+129,((IData)((0x63U == 
                                           (0x707fU 
                                            & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+130,((IData)((0x1063U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+131,((IData)((0x4063U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+132,((IData)((0x5063U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+133,((IData)((0x6063U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+134,((IData)((0x7063U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+135,(vlSelf->top__DOT__idu__DOT__inst_jalr));
        tracep->fullBit(oldp+136,(vlSelf->top__DOT__idu__DOT__inst_lb));
        tracep->fullBit(oldp+137,(vlSelf->top__DOT__idu__DOT__inst_lh));
        tracep->fullBit(oldp+138,(vlSelf->top__DOT__idu__DOT__inst_lw));
        tracep->fullBit(oldp+139,((IData)((0x3003U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+140,(vlSelf->top__DOT__idu__DOT__inst_lbu));
        tracep->fullBit(oldp+141,(vlSelf->top__DOT__idu__DOT__inst_lhu));
        tracep->fullBit(oldp+142,((IData)((0x13U == 
                                           (0x707fU 
                                            & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+143,((IData)((0x2013U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+144,((IData)((0x3013U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+145,((IData)((0x4013U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+146,((IData)((0x6013U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+147,((IData)((0x7013U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+148,(((IData)((0x1013U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__inst_id 
                                             >> 0x1aU)))));
        tracep->fullBit(oldp+149,(((IData)((0x5013U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__inst_id 
                                             >> 0x1aU)))));
        tracep->fullBit(oldp+150,(((IData)((0x5013U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__inst_id))) 
                                   & (0x10U == (vlSelf->top__DOT__inst_id 
                                                >> 0x1aU)))));
        tracep->fullBit(oldp+151,((IData)((0x23U == 
                                           (0x707fU 
                                            & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+152,((IData)((0x1023U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+153,((IData)((0x2023U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+154,((IData)((0x3023U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst_id)))));
        tracep->fullBit(oldp+155,(((IData)((0x33U == 
                                            (0x707fU 
                                             & vlSelf->top__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+156,(((IData)((0x33U == 
                                            (0x707fU 
                                             & vlSelf->top__DOT__inst_id))) 
                                   & (0x20U == (vlSelf->top__DOT__inst_id 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+157,(((IData)((0x1033U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+158,(((IData)((0x2033U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+159,(((IData)((0x3033U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+160,(((IData)((0x4033U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+161,(((IData)((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+162,(((IData)((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__inst_id))) 
                                   & (0x20U == (vlSelf->top__DOT__inst_id 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+163,(((IData)((0x6033U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+164,(((IData)((0x7033U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+165,((((((IData)((0x1033U 
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
        tracep->fullBit(oldp+166,((((IData)((0x6033U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__inst_id))) 
                                    & (1U == (vlSelf->top__DOT__inst_id 
                                              >> 0x19U))) 
                                   | (IData)(vlSelf->top__DOT__idu__DOT__inst_remw))));
        tracep->fullBit(oldp+167,((((IData)((0x33U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__inst_id))) 
                                    & (1U == (vlSelf->top__DOT__inst_id 
                                              >> 0x19U))) 
                                   | (IData)(vlSelf->top__DOT__idu__DOT__inst_mulw))));
        tracep->fullBit(oldp+168,((((IData)((0x4033U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__inst_id))) 
                                    & (1U == (vlSelf->top__DOT__inst_id 
                                              >> 0x19U))) 
                                   | (IData)(vlSelf->top__DOT__idu__DOT__inst_divw))));
        tracep->fullBit(oldp+169,((((IData)((0x2033U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__inst_id))) 
                                    & (0U == (vlSelf->top__DOT__inst_id 
                                              >> 0x19U))) 
                                   | (IData)((0x2013U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__inst_id))))));
        tracep->fullBit(oldp+170,((((IData)((0x3033U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__inst_id))) 
                                    & (0U == (vlSelf->top__DOT__inst_id 
                                              >> 0x19U))) 
                                   | (IData)((0x3013U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__inst_id))))));
        tracep->fullBit(oldp+171,((((IData)((0x4033U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__inst_id))) 
                                    & (0U == (vlSelf->top__DOT__inst_id 
                                              >> 0x19U))) 
                                   | (IData)((0x4013U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__inst_id))))));
        tracep->fullBit(oldp+172,((((((IData)((0x5033U 
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
        tracep->fullBit(oldp+173,((((((IData)((0x5033U 
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
        tracep->fullBit(oldp+174,((((IData)((0x6033U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__inst_id))) 
                                    & (0U == (vlSelf->top__DOT__inst_id 
                                              >> 0x19U))) 
                                   | (IData)((0x6013U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__inst_id))))));
        tracep->fullBit(oldp+175,((((IData)((0x7033U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__inst_id))) 
                                    & (0U == (vlSelf->top__DOT__inst_id 
                                              >> 0x19U))) 
                                   | (IData)((0x7013U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__inst_id))))));
        tracep->fullBit(oldp+176,(vlSelf->top__DOT__idu__DOT__inst_addiw));
        tracep->fullBit(oldp+177,(vlSelf->top__DOT__idu__DOT__inst_slliw));
        tracep->fullBit(oldp+178,(vlSelf->top__DOT__idu__DOT__inst_srliw));
        tracep->fullBit(oldp+179,(vlSelf->top__DOT__idu__DOT__inst_sraiw));
        tracep->fullBit(oldp+180,(vlSelf->top__DOT__idu__DOT__inst_addw));
        tracep->fullBit(oldp+181,(vlSelf->top__DOT__idu__DOT__inst_subw));
        tracep->fullBit(oldp+182,(vlSelf->top__DOT__idu__DOT__inst_sllw));
        tracep->fullBit(oldp+183,(vlSelf->top__DOT__idu__DOT__inst_srlw));
        tracep->fullBit(oldp+184,(vlSelf->top__DOT__idu__DOT__inst_sraw));
        tracep->fullQData(oldp+185,((((- (QData)((IData)(
                                                         (vlSelf->top__DOT__inst_id 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 (vlSelf->top__DOT__inst_id 
                                                                  >> 0x14U))))),64);
        tracep->fullQData(oldp+187,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->top__DOT__inst_id 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (0xfffff000U 
                                                                   & vlSelf->top__DOT__inst_id))))),64);
        tracep->fullQData(oldp+189,((((- (QData)((IData)(
                                                         (vlSelf->top__DOT__inst_id 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 ((0xfe0U 
                                                                   & (vlSelf->top__DOT__inst_id 
                                                                      >> 0x14U)) 
                                                                  | (0x1fU 
                                                                     & (vlSelf->top__DOT__inst_id 
                                                                        >> 7U))))))),64);
        tracep->fullQData(oldp+191,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+193,((((- (QData)((IData)(
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
        tracep->fullCData(oldp+195,((0x7fU & vlSelf->top__DOT__inst_id)),7);
        tracep->fullCData(oldp+196,((vlSelf->top__DOT__inst_id 
                                     >> 0x19U)),7);
        tracep->fullCData(oldp+197,((7U & (vlSelf->top__DOT__inst_id 
                                           >> 0xcU))),3);
        tracep->fullQData(oldp+198,(vlSelf->top__DOT__common_reg__DOT__reg_com[0]),64);
        tracep->fullQData(oldp+200,(vlSelf->top__DOT__common_reg__DOT__reg_com[1]),64);
        tracep->fullQData(oldp+202,(vlSelf->top__DOT__common_reg__DOT__reg_com[2]),64);
        tracep->fullQData(oldp+204,(vlSelf->top__DOT__common_reg__DOT__reg_com[3]),64);
        tracep->fullQData(oldp+206,(vlSelf->top__DOT__common_reg__DOT__reg_com[4]),64);
        tracep->fullQData(oldp+208,(vlSelf->top__DOT__common_reg__DOT__reg_com[5]),64);
        tracep->fullQData(oldp+210,(vlSelf->top__DOT__common_reg__DOT__reg_com[6]),64);
        tracep->fullQData(oldp+212,(vlSelf->top__DOT__common_reg__DOT__reg_com[7]),64);
        tracep->fullQData(oldp+214,(vlSelf->top__DOT__common_reg__DOT__reg_com[8]),64);
        tracep->fullQData(oldp+216,(vlSelf->top__DOT__common_reg__DOT__reg_com[9]),64);
        tracep->fullQData(oldp+218,(vlSelf->top__DOT__common_reg__DOT__reg_com[10]),64);
        tracep->fullQData(oldp+220,(vlSelf->top__DOT__common_reg__DOT__reg_com[11]),64);
        tracep->fullQData(oldp+222,(vlSelf->top__DOT__common_reg__DOT__reg_com[12]),64);
        tracep->fullQData(oldp+224,(vlSelf->top__DOT__common_reg__DOT__reg_com[13]),64);
        tracep->fullQData(oldp+226,(vlSelf->top__DOT__common_reg__DOT__reg_com[14]),64);
        tracep->fullQData(oldp+228,(vlSelf->top__DOT__common_reg__DOT__reg_com[15]),64);
        tracep->fullQData(oldp+230,(vlSelf->top__DOT__common_reg__DOT__reg_com[16]),64);
        tracep->fullQData(oldp+232,(vlSelf->top__DOT__common_reg__DOT__reg_com[17]),64);
        tracep->fullQData(oldp+234,(vlSelf->top__DOT__common_reg__DOT__reg_com[18]),64);
        tracep->fullQData(oldp+236,(vlSelf->top__DOT__common_reg__DOT__reg_com[19]),64);
        tracep->fullQData(oldp+238,(vlSelf->top__DOT__common_reg__DOT__reg_com[20]),64);
        tracep->fullQData(oldp+240,(vlSelf->top__DOT__common_reg__DOT__reg_com[21]),64);
        tracep->fullQData(oldp+242,(vlSelf->top__DOT__common_reg__DOT__reg_com[22]),64);
        tracep->fullQData(oldp+244,(vlSelf->top__DOT__common_reg__DOT__reg_com[23]),64);
        tracep->fullQData(oldp+246,(vlSelf->top__DOT__common_reg__DOT__reg_com[24]),64);
        tracep->fullQData(oldp+248,(vlSelf->top__DOT__common_reg__DOT__reg_com[25]),64);
        tracep->fullQData(oldp+250,(vlSelf->top__DOT__common_reg__DOT__reg_com[26]),64);
        tracep->fullQData(oldp+252,(vlSelf->top__DOT__common_reg__DOT__reg_com[27]),64);
        tracep->fullQData(oldp+254,(vlSelf->top__DOT__common_reg__DOT__reg_com[28]),64);
        tracep->fullQData(oldp+256,(vlSelf->top__DOT__common_reg__DOT__reg_com[29]),64);
        tracep->fullQData(oldp+258,(vlSelf->top__DOT__common_reg__DOT__reg_com[30]),64);
        tracep->fullQData(oldp+260,(vlSelf->top__DOT__common_reg__DOT__reg_com[31]),64);
        tracep->fullQData(oldp+262,(vlSelf->top__DOT__pc_sel_check__DOT__pc_src1),64);
        tracep->fullQData(oldp+264,(vlSelf->top__DOT__pc_sel_check__DOT__b_src2),64);
        tracep->fullBit(oldp+266,((1U & ((((((((IData)(vlSelf->top__DOT__b_check) 
                                               >> 5U) 
                                              & (IData)(vlSelf->top__DOT__pc_sel_check__DOT__beq_check)) 
                                             | (((IData)(vlSelf->top__DOT__b_check) 
                                                 >> 4U) 
                                                & (~ (IData)(vlSelf->top__DOT__pc_sel_check__DOT__beq_check)))) 
                                            | (((IData)(vlSelf->top__DOT__b_check) 
                                                >> 3U) 
                                               & (IData)(vlSelf->top__DOT__pc_sel_check__DOT__blt_check))) 
                                           | (((IData)(vlSelf->top__DOT__b_check) 
                                               >> 2U) 
                                              & (~ (IData)(vlSelf->top__DOT__pc_sel_check__DOT__blt_check)))) 
                                          | (((IData)(vlSelf->top__DOT__b_check) 
                                              >> 1U) 
                                             & (~ (IData)(vlSelf->top__DOT__pc_sel_check__DOT__data_cout)))) 
                                         | ((IData)(vlSelf->top__DOT__b_check) 
                                            & (IData)(vlSelf->top__DOT__pc_sel_check__DOT__data_cout))))));
        tracep->fullBit(oldp+267,(vlSelf->top__DOT__pc_sel_check__DOT__beq_check));
        tracep->fullBit(oldp+268,((1U & (~ (IData)(vlSelf->top__DOT__pc_sel_check__DOT__beq_check)))));
        tracep->fullBit(oldp+269,(vlSelf->top__DOT__pc_sel_check__DOT__blt_check));
        tracep->fullBit(oldp+270,((1U & (~ (IData)(vlSelf->top__DOT__pc_sel_check__DOT__blt_check)))));
        tracep->fullBit(oldp+271,((1U & (~ (IData)(vlSelf->top__DOT__pc_sel_check__DOT__data_cout)))));
        tracep->fullBit(oldp+272,(vlSelf->top__DOT__pc_sel_check__DOT__data_cout));
        tracep->fullQData(oldp+273,((~ vlSelf->top__DOT__pc_sel_check__DOT__b_src2)),64);
        tracep->fullQData(oldp+275,((1ULL + (vlSelf->top__DOT__pc_sel_check__DOT__pc_src1 
                                             + (~ vlSelf->top__DOT__pc_sel_check__DOT__b_src2)))),64);
        tracep->fullSData(oldp+277,((0x7fffU & (IData)(vlSelf->top__DOT__op))),15);
        tracep->fullBit(oldp+278,((1U & ((IData)(vlSelf->top__DOT__exe_reg_s_bhwd) 
                                         >> 2U))));
        tracep->fullBit(oldp+279,((1U & ((IData)(vlSelf->top__DOT__exe_reg_s_bhwd) 
                                         >> 1U))));
        tracep->fullBit(oldp+280,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 0xeU))));
        tracep->fullBit(oldp+281,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 0xcU))));
        tracep->fullBit(oldp+282,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 0xdU))));
        tracep->fullBit(oldp+283,((1U & (IData)(vlSelf->top__DOT__exe_reg_s_bhwd))));
        tracep->fullBit(oldp+284,((1U & (IData)(vlSelf->top__DOT__exe_reg_op))));
        tracep->fullBit(oldp+285,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 1U))));
        tracep->fullBit(oldp+286,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 2U))));
        tracep->fullBit(oldp+287,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 3U))));
        tracep->fullBit(oldp+288,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 4U))));
        tracep->fullBit(oldp+289,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 5U))));
        tracep->fullBit(oldp+290,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 6U))));
        tracep->fullBit(oldp+291,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 7U))));
        tracep->fullBit(oldp+292,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 8U))));
        tracep->fullBit(oldp+293,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 9U))));
        tracep->fullBit(oldp+294,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 0xaU))));
        tracep->fullBit(oldp+295,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 0xbU))));
        tracep->fullIData(oldp+296,(vlSelf->top__DOT__alu__DOT__srl_w1_result),32);
        tracep->fullIData(oldp+297,(vlSelf->top__DOT__alu__DOT__sra_w1_result),32);
        tracep->fullQData(oldp+298,(((IData)(vlSelf->top__DOT__exe_reg_w_check)
                                      ? (((QData)((IData)(
                                                          (- (IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__alu__DOT__data_result 
                                                                                >> 0x1fU))))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->top__DOT__alu__DOT__data_result)))
                                      : vlSelf->top__DOT__alu__DOT__data_result)),64);
        tracep->fullQData(oldp+300,(((IData)(vlSelf->top__DOT__exe_reg_w_check)
                                      ? (((QData)((IData)(
                                                          (- (IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__alu__DOT__rem_d_result 
                                                                                >> 0x1fU))))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->top__DOT__alu__DOT__rem_d_result)))
                                      : vlSelf->top__DOT__alu__DOT__rem_d_result)),64);
        tracep->fullQData(oldp+302,(vlSelf->top__DOT__alu__DOT__rem_d_result),64);
        tracep->fullQData(oldp+304,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__alu__DOT__rem_d_result 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__alu__DOT__rem_d_result)))),64);
        tracep->fullQData(oldp+306,(VL_DIVS_QQQ(64, vlSelf->top__DOT__src1, vlSelf->top__DOT__src2)),64);
        tracep->fullQData(oldp+308,(((0ULL == vlSelf->top__DOT__src2)
                                      ? 0xffffffffffffffffULL
                                      : ((IData)(vlSelf->top__DOT__exe_reg_w_check)
                                          ? (((QData)((IData)(
                                                              (- (IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT__alu__DOT__div_d_result 
                                                                                >> 0x1fU))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->top__DOT__alu__DOT__div_d_result)))
                                          : vlSelf->top__DOT__alu__DOT__div_d_result))),64);
        tracep->fullQData(oldp+310,(((IData)(vlSelf->top__DOT__exe_reg_w_check)
                                      ? (((QData)((IData)(
                                                          (- (IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__alu__DOT__mul_d_result 
                                                                                >> 0x1fU))))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->top__DOT__alu__DOT__mul_d_result)))
                                      : vlSelf->top__DOT__alu__DOT__mul_d_result)),64);
        tracep->fullQData(oldp+312,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__alu__DOT__div_d_result 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__alu__DOT__div_d_result)))),64);
        tracep->fullQData(oldp+314,(vlSelf->top__DOT__alu__DOT__div_d_result),64);
        tracep->fullQData(oldp+316,(vlSelf->top__DOT__alu__DOT__mul_d_result),64);
        tracep->fullQData(oldp+318,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__alu__DOT__mul_d_result 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__alu__DOT__mul_d_result)))),64);
        tracep->fullQData(oldp+320,(vlSelf->top__DOT__alu__DOT__sll_w1_result),64);
        tracep->fullQData(oldp+322,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__alu__DOT__sll_w1_result 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__alu__DOT__sll_w1_result)))),64);
        tracep->fullQData(oldp+324,((vlSelf->top__DOT__src1 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__src2)))),64);
        tracep->fullQData(oldp+326,(VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__src1, 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->top__DOT__src2)))),64);
        tracep->fullQData(oldp+328,((vlSelf->top__DOT__src1 
                                     << (0x3fU & (IData)(vlSelf->top__DOT__src2)))),64);
        tracep->fullQData(oldp+330,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->top__DOT__alu__DOT__srl_w1_result 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__alu__DOT__srl_w1_result)))),64);
        tracep->fullQData(oldp+332,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->top__DOT__alu__DOT__sra_w1_result 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__alu__DOT__sra_w1_result)))),64);
        tracep->fullQData(oldp+334,(vlSelf->top__DOT__alu__DOT__add_sub_result),64);
        tracep->fullQData(oldp+336,((QData)((IData)(
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
        tracep->fullQData(oldp+338,((vlSelf->top__DOT__src1 
                                     + vlSelf->top__DOT__exe_reg_imm)),64);
        VL_EXTEND_WQ(65,64, __Vtemp38, vlSelf->top__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp39, vlSelf->top__DOT__alu__DOT__data_b);
        VL_ADD_W(3, __Vtemp40, __Vtemp38, __Vtemp39);
        VL_EXTEND_WI(65,1, __Vtemp41, (IData)(vlSelf->top__DOT__alu__DOT__data_cin));
        VL_ADD_W(3, __Vtemp42, __Vtemp40, __Vtemp41);
        tracep->fullQData(oldp+340,((QData)((IData)(
                                                    (1U 
                                                     & (~ 
                                                        (1U 
                                                         & __Vtemp42[2U])))))),64);
        tracep->fullQData(oldp+342,((vlSelf->top__DOT__src1 
                                     & vlSelf->top__DOT__src2)),64);
        tracep->fullQData(oldp+344,((vlSelf->top__DOT__src1 
                                     | vlSelf->top__DOT__src2)),64);
        tracep->fullQData(oldp+346,((vlSelf->top__DOT__src1 
                                     ^ vlSelf->top__DOT__src2)),64);
        tracep->fullQData(oldp+348,(((IData)(vlSelf->top__DOT__exe_reg_w_check)
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
        tracep->fullQData(oldp+350,(((IData)(vlSelf->top__DOT__exe_reg_w_check)
                                      ? (((QData)((IData)(
                                                          (- (IData)(
                                                                     (vlSelf->top__DOT__alu__DOT__srl_w1_result 
                                                                      >> 0x1fU))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->top__DOT__alu__DOT__srl_w1_result)))
                                      : (vlSelf->top__DOT__src1 
                                         >> (0x3fU 
                                             & (IData)(vlSelf->top__DOT__src2))))),64);
        tracep->fullQData(oldp+352,(((IData)(vlSelf->top__DOT__exe_reg_w_check)
                                      ? (((QData)((IData)(
                                                          (- (IData)(
                                                                     (vlSelf->top__DOT__alu__DOT__sra_w1_result 
                                                                      >> 0x1fU))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->top__DOT__alu__DOT__sra_w1_result)))
                                      : VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__src1, 
                                                       (0x3fU 
                                                        & (IData)(vlSelf->top__DOT__src2))))),64);
        tracep->fullQData(oldp+354,((4ULL + vlSelf->top__DOT__src1)),64);
        tracep->fullQData(oldp+356,(vlSelf->top__DOT__alu__DOT__data_b),64);
        tracep->fullQData(oldp+358,(vlSelf->top__DOT__alu__DOT__data_result),64);
        tracep->fullBit(oldp+360,(vlSelf->top__DOT__alu__DOT__data_cin));
        VL_EXTEND_WQ(65,64, __Vtemp45, vlSelf->top__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp46, vlSelf->top__DOT__alu__DOT__data_b);
        VL_ADD_W(3, __Vtemp47, __Vtemp45, __Vtemp46);
        VL_EXTEND_WI(65,1, __Vtemp48, (IData)(vlSelf->top__DOT__alu__DOT__data_cin));
        VL_ADD_W(3, __Vtemp49, __Vtemp47, __Vtemp48);
        tracep->fullBit(oldp+361,((1U & __Vtemp49[2U])));
        tracep->fullBit(oldp+362,((1U & ((IData)(vlSelf->top__DOT__mem_reg_s_bhwd) 
                                         >> 2U))));
        __Vtemp52[0U] = 0x60000000U;
        __Vtemp52[1U] = 0xffffffffU;
        __Vtemp52[2U] = 0U;
        VL_EXTEND_WQ(65,64, __Vtemp53, vlSelf->top__DOT__cpu_pc);
        VL_ADD_W(3, __Vtemp54, __Vtemp52, __Vtemp53);
        tracep->fullBit(oldp+363,((1U & __Vtemp54[2U])));
        tracep->fullBit(oldp+364,((1U & ((IData)(vlSelf->top__DOT__mem_reg_s_bhwd) 
                                         >> 1U))));
        tracep->fullBit(oldp+365,((1U & (IData)(vlSelf->top__DOT__mem_reg_s_bhwd))));
        tracep->fullBit(oldp+366,((1U & ((IData)(vlSelf->top__DOT__mem_reg_l_bhw) 
                                         >> 5U))));
        tracep->fullBit(oldp+367,((1U & ((IData)(vlSelf->top__DOT__mem_reg_l_bhw) 
                                         >> 4U))));
        tracep->fullBit(oldp+368,((1U & ((IData)(vlSelf->top__DOT__mem_reg_l_bhw) 
                                         >> 3U))));
        tracep->fullBit(oldp+369,((1U & ((IData)(vlSelf->top__DOT__mem_reg_l_bhw) 
                                         >> 2U))));
        tracep->fullBit(oldp+370,((1U & ((IData)(vlSelf->top__DOT__mem_reg_l_bhw) 
                                         >> 1U))));
        tracep->fullBit(oldp+371,((1U & (IData)(vlSelf->top__DOT__mem_reg_l_bhw))));
        tracep->fullIData(oldp+372,((0x3ffffffeU & 
                                     ((vlSelf->top__DOT__mem_reg_ram_addr 
                                       - (IData)(0x80000000U)) 
                                      >> 2U))),32);
        tracep->fullIData(oldp+373,(((vlSelf->top__DOT__mem_reg_ram_addr 
                                      - (IData)(0x80000000U)) 
                                     >> 3U)),32);
        tracep->fullIData(oldp+374,((IData)(((vlSelf->top__DOT__cpu_pc 
                                              - 0x80000000ULL) 
                                             >> 2U))),32);
        tracep->fullQData(oldp+375,(vlSelf->top__DOT__ram__DOT__rdata_out),64);
        tracep->fullQData(oldp+377,((0xffffffff60000000ULL 
                                     + vlSelf->top__DOT__cpu_pc)),64);
        tracep->fullQData(oldp+379,(vlSelf->top__DOT__ram__DOT__rom),64);
        tracep->fullBit(oldp+381,(vlSelf->top__DOT__ebreak_list__DOT__ebreak_1));
        tracep->fullBit(oldp+382,(vlSelf->clk));
        tracep->fullBit(oldp+383,(vlSelf->rst));
        tracep->fullBit(oldp+384,(vlSelf->success));
        tracep->fullCData(oldp+385,(vlSelf->top__DOT__exe_reg_pc_sel),3);
        tracep->fullSData(oldp+386,(vlSelf->top__DOT__inst_addr),16);
        tracep->fullIData(oldp+387,(vlSelf->top__DOT__inst_out),32);
        tracep->fullQData(oldp+388,(vlSelf->top__DOT__b_src2),64);
        tracep->fullQData(oldp+390,(vlSelf->top__DOT__pc_src1),64);
        tracep->fullQData(oldp+392,(vlSelf->top__DOT__one_src1),64);
        tracep->fullQData(oldp+394,(vlSelf->top__DOT__one_src2),64);
        tracep->fullQData(oldp+396,(vlSelf->top__DOT__exe_reg_src1),64);
        tracep->fullQData(oldp+398,(vlSelf->top__DOT__exe_reg_src2),64);
        tracep->fullQData(oldp+400,(vlSelf->top__DOT__mem_reg_cpu_dnpc_in1),64);
        tracep->fullQData(oldp+402,(vlSelf->top__DOT__mem_reg_cpu_dnpc_in2),64);
        tracep->fullQData(oldp+404,(vlSelf->top__DOT__wb_reg_cpu_dnpc_in1),64);
        tracep->fullQData(oldp+406,(vlSelf->top__DOT__wb_reg_cpu_dnpc_in2),64);
        tracep->fullQData(oldp+408,(vlSelf->top__DOT__cpu_ifpc),64);
        tracep->fullQData(oldp+410,(vlSelf->top__DOT__if_reg_pc),64);
        tracep->fullBit(oldp+412,(1U));
        tracep->fullIData(oldp+413,(vlSelf->top__DOT__alu__DOT__div_w1_result),32);
        tracep->fullIData(oldp+414,(vlSelf->top__DOT__alu__DOT__rem_w1_result),32);
        tracep->fullQData(oldp+415,(vlSelf->top__DOT__alu__DOT__srl_mid_result),64);
    }
}
