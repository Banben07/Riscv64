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
        tracep->declBit(c+230,"clk", false,-1);
        tracep->declBit(c+231,"rst", false,-1);
        tracep->declQuad(c+232,"data_rd", false,-1, 63,0);
        tracep->declBit(c+230,"top clk", false,-1);
        tracep->declBit(c+231,"top rst", false,-1);
        tracep->declQuad(c+232,"top data_rd", false,-1, 63,0);
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
        tracep->declBus(c+26,"top pc_add_rs1_sel", false,-1, 2,0);
        tracep->declBus(c+27,"top src1_sel_plus", false,-1, 2,0);
        tracep->declBus(c+28,"top src2_sel_plus", false,-1, 2,0);
        tracep->declBus(c+29,"top wb_reg_pc_sel", false,-1, 2,0);
        tracep->declBus(c+30,"top mem_reg_pc_sel", false,-1, 2,0);
        tracep->declBus(c+234,"top exe_reg_pc_sel", false,-1, 2,0);
        tracep->declBus(c+31,"top rs1", false,-1, 4,0);
        tracep->declBus(c+32,"top rs2", false,-1, 4,0);
        tracep->declBus(c+33,"top exe_reg_rs1", false,-1, 4,0);
        tracep->declBus(c+34,"top exe_reg_rs2", false,-1, 4,0);
        tracep->declBus(c+35,"top rd", false,-1, 4,0);
        tracep->declBus(c+36,"top mem_reg_rd", false,-1, 4,0);
        tracep->declBus(c+37,"top exe_reg_rd", false,-1, 4,0);
        tracep->declBus(c+38,"top wb_reg_rd", false,-1, 4,0);
        tracep->declBus(c+39,"top op", false,-1, 11,0);
        tracep->declBus(c+40,"top op_out", false,-1, 11,0);
        tracep->declBus(c+41,"top exe_reg_op", false,-1, 11,0);
        tracep->declBus(c+42,"top inst_addr", false,-1, 15,0);
        tracep->declBus(c+43,"top inst", false,-1, 31,0);
        tracep->declBus(c+44,"top ram_addr", false,-1, 31,0);
        tracep->declBus(c+45,"top mem_reg_ram_addr", false,-1, 31,0);
        tracep->declBus(c+46,"top inst_id", false,-1, 31,0);
        tracep->declBus(c+47,"top inst_out", false,-1, 31,0);
        tracep->declQuad(c+48,"top imm", false,-1, 63,0);
        tracep->declQuad(c+50,"top pc_src1", false,-1, 63,0);
        tracep->declQuad(c+52,"top data_a0", false,-1, 63,0);
        tracep->declQuad(c+54,"top one_src1", false,-1, 63,0);
        tracep->declQuad(c+56,"top one_src2", false,-1, 63,0);
        tracep->declQuad(c+58,"top if_pc", false,-1, 63,0);
        tracep->declQuad(c+60,"top exe_reg_src1_rs1", false,-1, 63,0);
        tracep->declQuad(c+235,"top exe_reg_src1", false,-1, 63,0);
        tracep->declQuad(c+237,"top exe_reg_src2", false,-1, 63,0);
        tracep->declQuad(c+62,"top exe_reg_src2_rs2", false,-1, 63,0);
        tracep->declQuad(c+64,"top mem_reg_pc", false,-1, 63,0);
        tracep->declQuad(c+66,"top wb_reg_rdata", false,-1, 63,0);
        tracep->declQuad(c+68,"top wb_reg_data_rd_in", false,-1, 63,0);
        tracep->declQuad(c+70,"top mem_reg_src2_rs2", false,-1, 63,0);
        tracep->declQuad(c+72,"top mem_reg_data_rd_in", false,-1, 63,0);
        tracep->declQuad(c+239,"top mem_reg_cpu_dnpc_in1", false,-1, 63,0);
        tracep->declQuad(c+241,"top mem_reg_cpu_dnpc_in2", false,-1, 63,0);
        tracep->declQuad(c+74,"top exe_reg_imm", false,-1, 63,0);
        tracep->declQuad(c+76,"top cpu_pc", false,-1, 63,0);
        tracep->declQuad(c+78,"top wb_reg_pc", false,-1, 63,0);
        tracep->declQuad(c+243,"top wb_reg_cpu_dnpc_in1", false,-1, 63,0);
        tracep->declQuad(c+245,"top wb_reg_cpu_dnpc_in2", false,-1, 63,0);
        tracep->declQuad(c+80,"top exe_reg_pc", false,-1, 63,0);
        tracep->declQuad(c+247,"top cpu_ifpc", false,-1, 63,0);
        tracep->declQuad(c+249,"top if_reg_pc", false,-1, 63,0);
        tracep->declQuad(c+82,"top id_reg_pc", false,-1, 63,0);
        tracep->declQuad(c+84,"top cpu_dnpc", false,-1, 63,0);
        tracep->declQuad(c+86,"top cpu_snpc", false,-1, 63,0);
        tracep->declQuad(c+88,"top rdata", false,-1, 63,0);
        tracep->declQuad(c+90,"top src1_rs1", false,-1, 63,0);
        tracep->declQuad(c+92,"top src2_rs2", false,-1, 63,0);
        tracep->declQuad(c+94,"top cpu_dnpc_in1", false,-1, 63,0);
        tracep->declQuad(c+96,"top cpu_dnpc_in2", false,-1, 63,0);
        tracep->declQuad(c+98,"top src1", false,-1, 63,0);
        tracep->declQuad(c+100,"top src2", false,-1, 63,0);
        tracep->declQuad(c+102,"top data_rd_in", false,-1, 63,0);
        tracep->declBus(c+25,"top Hazard_unit pc_jump", false,-1, 2,0);
        tracep->declBus(c+31,"top Hazard_unit rs1", false,-1, 4,0);
        tracep->declBus(c+32,"top Hazard_unit rs2", false,-1, 4,0);
        tracep->declBus(c+37,"top Hazard_unit exe_reg_rd", false,-1, 4,0);
        tracep->declBit(c+6,"top Hazard_unit exe_reg_data_ren", false,-1);
        tracep->declBit(c+4,"top Hazard_unit stall_control", false,-1);
        tracep->declBit(c+8,"top Hazard_unit IF_Flush", false,-1);
        tracep->declBus(c+33,"top Foward_unit exe_reg_rs1", false,-1, 4,0);
        tracep->declBus(c+34,"top Foward_unit exe_reg_rs2", false,-1, 4,0);
        tracep->declBus(c+31,"top Foward_unit pc_rs1", false,-1, 4,0);
        tracep->declBus(c+36,"top Foward_unit mem_reg_rd", false,-1, 4,0);
        tracep->declBus(c+38,"top Foward_unit wb_reg_rd", false,-1, 4,0);
        tracep->declBit(c+12,"top Foward_unit mem_reg_reg_wen", false,-1);
        tracep->declBit(c+16,"top Foward_unit wb_reg_reg_wen", false,-1);
        tracep->declBus(c+27,"top Foward_unit src1_sel_plus", false,-1, 2,0);
        tracep->declBus(c+28,"top Foward_unit src2_sel_plus", false,-1, 2,0);
        tracep->declBus(c+26,"top Foward_unit pc_add_rs1_sel", false,-1, 2,0);
        tracep->declQuad(c+86,"top pc_sel_choice in0", false,-1, 63,0);
        tracep->declQuad(c+94,"top pc_sel_choice in1", false,-1, 63,0);
        tracep->declQuad(c+96,"top pc_sel_choice in2", false,-1, 63,0);
        tracep->declBus(c+25,"top pc_sel_choice key", false,-1, 2,0);
        tracep->declQuad(c+84,"top pc_sel_choice out", false,-1, 63,0);
        tracep->declQuad(c+84,"top pc cpu_dnpc", false,-1, 63,0);
        tracep->declBit(c+230,"top pc clk", false,-1);
        tracep->declBit(c+231,"top pc rst", false,-1);
        tracep->declBit(c+4,"top pc stall", false,-1);
        tracep->declQuad(c+76,"top pc cpu_pc", false,-1, 63,0);
        tracep->declQuad(c+76,"top inf pc", false,-1, 63,0);
        tracep->declBus(c+42,"top inf addr", false,-1, 15,0);
        tracep->declBit(c+230,"top inst_ram clk", false,-1);
        tracep->declQuad(c+76,"top inst_ram cpu_pc", false,-1, 63,0);
        tracep->declBit(c+231,"top inst_ram rst", false,-1);
        tracep->declBus(c+42,"top inst_ram addr", false,-1, 15,0);
        tracep->declBus(c+43,"top inst_ram inst", false,-1, 31,0);
        tracep->declQuad(c+58,"top inst_ram if_pc", false,-1, 63,0);
        tracep->declBit(c+230,"top id_reg clk", false,-1);
        tracep->declBit(c+231,"top id_reg rst", false,-1);
        tracep->declBit(c+4,"top id_reg stall", false,-1);
        tracep->declBit(c+8,"top id_reg IF_Flush", false,-1);
        tracep->declBus(c+43,"top id_reg id_reg_in0", false,-1, 31,0);
        tracep->declQuad(c+58,"top id_reg id_reg_in1", false,-1, 63,0);
        tracep->declBus(c+46,"top id_reg id_reg_out0", false,-1, 31,0);
        tracep->declQuad(c+82,"top id_reg id_reg_out1", false,-1, 63,0);
        tracep->declBus(c+46,"top idu inst", false,-1, 31,0);
        tracep->declQuad(c+48,"top idu imm", false,-1, 63,0);
        tracep->declBus(c+39,"top idu op", false,-1, 11,0);
        tracep->declBus(c+35,"top idu rd", false,-1, 4,0);
        tracep->declBus(c+31,"top idu rs1", false,-1, 4,0);
        tracep->declBus(c+32,"top idu rs2", false,-1, 4,0);
        tracep->declBus(c+25,"top idu pc_sel", false,-1, 2,0);
        tracep->declBus(c+17,"top idu src1_sel", false,-1, 1,0);
        tracep->declBus(c+21,"top idu src2_sel", false,-1, 1,0);
        tracep->declBus(c+23,"top idu load_sel", false,-1, 1,0);
        tracep->declBit(c+1,"top idu data_wen", false,-1);
        tracep->declBit(c+5,"top idu data_ren", false,-1);
        tracep->declBit(c+9,"top idu ebreak", false,-1);
        tracep->declBit(c+11,"top idu reg_wen", false,-1);
        tracep->declBit(c+104,"top idu TYPE_I", false,-1);
        tracep->declBit(c+105,"top idu TYPE_U", false,-1);
        tracep->declBit(c+106,"top idu TYPE_S", false,-1);
        tracep->declBit(c+107,"top idu TYPE_J", false,-1);
        tracep->declBit(c+108,"top idu TYPE_B", false,-1);
        tracep->declBit(c+109,"top idu TYPE_R", false,-1);
        tracep->declQuad(c+110,"top idu immI", false,-1, 63,0);
        tracep->declQuad(c+112,"top idu immU", false,-1, 63,0);
        tracep->declQuad(c+114,"top idu immS", false,-1, 63,0);
        tracep->declQuad(c+116,"top idu immJ", false,-1, 63,0);
        tracep->declQuad(c+118,"top idu immB", false,-1, 63,0);
        tracep->declBus(c+120,"top idu opcode", false,-1, 6,0);
        tracep->declBus(c+121,"top idu funct7", false,-1, 6,0);
        tracep->declBus(c+122,"top idu funct3", false,-1, 2,0);
        tracep->declBit(c+1,"top control_stall data_wen", false,-1);
        tracep->declBit(c+11,"top control_stall reg_wen", false,-1);
        tracep->declBit(c+4,"top control_stall stall", false,-1);
        tracep->declBit(c+2,"top control_stall data_wen_out", false,-1);
        tracep->declBit(c+3,"top control_stall reg_wen_out", false,-1);
        tracep->declQuad(c+232,"top common_reg data_rd", false,-1, 63,0);
        tracep->declBus(c+38,"top common_reg addr_rd", false,-1, 4,0);
        tracep->declBus(c+31,"top common_reg addr_rs1", false,-1, 4,0);
        tracep->declBus(c+32,"top common_reg addr_rs2", false,-1, 4,0);
        tracep->declBit(c+16,"top common_reg en", false,-1);
        tracep->declBit(c+230,"top common_reg clk", false,-1);
        tracep->declQuad(c+52,"top common_reg data_a0", false,-1, 63,0);
        tracep->declQuad(c+90,"top common_reg data_rs1", false,-1, 63,0);
        tracep->declQuad(c+92,"top common_reg data_rs2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+123+i*2,"top common_reg reg_com", true,(i+0), 63,0);}}
        tracep->declQuad(c+90,"top pc_add_choice in0", false,-1, 63,0);
        tracep->declQuad(c+72,"top pc_add_choice in1", false,-1, 63,0);
        tracep->declQuad(c+68,"top pc_add_choice in2", false,-1, 63,0);
        tracep->declBus(c+26,"top pc_add_choice key", false,-1, 2,0);
        tracep->declQuad(c+50,"top pc_add_choice out", false,-1, 63,0);
        tracep->declQuad(c+82,"top pc_add pc_in", false,-1, 63,0);
        tracep->declQuad(c+50,"top pc_add src1_in", false,-1, 63,0);
        tracep->declQuad(c+48,"top pc_add imm_in", false,-1, 63,0);
        tracep->declQuad(c+94,"top pc_add cpu_dnpc_in1", false,-1, 63,0);
        tracep->declQuad(c+96,"top pc_add cpu_dnpc_in2", false,-1, 63,0);
        tracep->declBit(c+230,"top exe_reg clk", false,-1);
        tracep->declBit(c+231,"top exe_reg rst", false,-1);
        tracep->declQuad(c+82,"top exe_reg exe_reg_in0", false,-1, 63,0);
        tracep->declBus(c+39,"top exe_reg exe_reg_in1", false,-1, 11,0);
        tracep->declBus(c+35,"top exe_reg exe_reg_in2", false,-1, 4,0);
        tracep->declQuad(c+90,"top exe_reg exe_reg_in3", false,-1, 63,0);
        tracep->declBus(c+17,"top exe_reg exe_reg_in4", false,-1, 1,0);
        tracep->declQuad(c+92,"top exe_reg exe_reg_in5", false,-1, 63,0);
        tracep->declBit(c+2,"top exe_reg exe_reg_in7", false,-1);
        tracep->declBit(c+3,"top exe_reg exe_reg_in8", false,-1);
        tracep->declBus(c+23,"top exe_reg exe_reg_in9", false,-1, 1,0);
        tracep->declBus(c+21,"top exe_reg exe_reg_in10", false,-1, 1,0);
        tracep->declQuad(c+48,"top exe_reg exe_reg_in11", false,-1, 63,0);
        tracep->declBus(c+31,"top exe_reg exe_reg_in12", false,-1, 4,0);
        tracep->declBus(c+32,"top exe_reg exe_reg_in13", false,-1, 4,0);
        tracep->declBit(c+5,"top exe_reg exe_reg_in14", false,-1);
        tracep->declQuad(c+80,"top exe_reg exe_reg_out0", false,-1, 63,0);
        tracep->declBus(c+41,"top exe_reg exe_reg_out1", false,-1, 11,0);
        tracep->declBus(c+37,"top exe_reg exe_reg_out2", false,-1, 4,0);
        tracep->declQuad(c+60,"top exe_reg exe_reg_out3", false,-1, 63,0);
        tracep->declBus(c+20,"top exe_reg exe_reg_out4", false,-1, 1,0);
        tracep->declQuad(c+62,"top exe_reg exe_reg_out5", false,-1, 63,0);
        tracep->declBit(c+14,"top exe_reg exe_reg_out7", false,-1);
        tracep->declBit(c+15,"top exe_reg exe_reg_out8", false,-1);
        tracep->declBus(c+24,"top exe_reg exe_reg_out9", false,-1, 1,0);
        tracep->declBus(c+22,"top exe_reg exe_reg_out10", false,-1, 1,0);
        tracep->declQuad(c+74,"top exe_reg exe_reg_out11", false,-1, 63,0);
        tracep->declBus(c+33,"top exe_reg exe_reg_out12", false,-1, 4,0);
        tracep->declBus(c+34,"top exe_reg exe_reg_out13", false,-1, 4,0);
        tracep->declBit(c+6,"top exe_reg exe_reg_out14", false,-1);
        tracep->declQuad(c+80,"top src1_sel_choice in0", false,-1, 63,0);
        tracep->declQuad(c+60,"top src1_sel_choice in1", false,-1, 63,0);
        tracep->declBus(c+20,"top src1_sel_choice key", false,-1, 1,0);
        tracep->declQuad(c+54,"top src1_sel_choice out", false,-1, 63,0);
        tracep->declQuad(c+74,"top src2_sel_choice in0", false,-1, 63,0);
        tracep->declQuad(c+62,"top src2_sel_choice in1", false,-1, 63,0);
        tracep->declBus(c+22,"top src2_sel_choice key", false,-1, 1,0);
        tracep->declQuad(c+56,"top src2_sel_choice out", false,-1, 63,0);
        tracep->declQuad(c+54,"top src1_sel_choice_out in0", false,-1, 63,0);
        tracep->declQuad(c+72,"top src1_sel_choice_out in1", false,-1, 63,0);
        tracep->declQuad(c+68,"top src1_sel_choice_out in2", false,-1, 63,0);
        tracep->declBus(c+27,"top src1_sel_choice_out key", false,-1, 2,0);
        tracep->declQuad(c+98,"top src1_sel_choice_out out", false,-1, 63,0);
        tracep->declQuad(c+56,"top src2_sel_choice_out in0", false,-1, 63,0);
        tracep->declQuad(c+72,"top src2_sel_choice_out in1", false,-1, 63,0);
        tracep->declQuad(c+68,"top src2_sel_choice_out in2", false,-1, 63,0);
        tracep->declBus(c+28,"top src2_sel_choice_out key", false,-1, 2,0);
        tracep->declQuad(c+100,"top src2_sel_choice_out out", false,-1, 63,0);
        tracep->declQuad(c+98,"top alu src1", false,-1, 63,0);
        tracep->declQuad(c+100,"top alu src2", false,-1, 63,0);
        tracep->declBus(c+41,"top alu op", false,-1, 11,0);
        tracep->declQuad(c+102,"top alu data_rd", false,-1, 63,0);
        tracep->declBus(c+44,"top alu ram_raddr", false,-1, 31,0);
        tracep->declBit(c+187,"top alu op_add", false,-1);
        tracep->declBit(c+188,"top alu op_sub", false,-1);
        tracep->declBit(c+189,"top alu op_slt", false,-1);
        tracep->declBit(c+190,"top alu op_sltu", false,-1);
        tracep->declBit(c+191,"top alu op_and", false,-1);
        tracep->declBit(c+192,"top alu op_or", false,-1);
        tracep->declBit(c+193,"top alu op_xor", false,-1);
        tracep->declBit(c+194,"top alu op_sll", false,-1);
        tracep->declBit(c+195,"top alu op_srl", false,-1);
        tracep->declBit(c+196,"top alu op_sra", false,-1);
        tracep->declBit(c+197,"top alu op_lui", false,-1);
        tracep->declBit(c+198,"top alu op_jal", false,-1);
        tracep->declQuad(c+199,"top alu add_sub_result", false,-1, 63,0);
        tracep->declQuad(c+201,"top alu slt_result", false,-1, 63,0);
        tracep->declQuad(c+203,"top alu sltu_result", false,-1, 63,0);
        tracep->declQuad(c+205,"top alu and_result", false,-1, 63,0);
        tracep->declQuad(c+207,"top alu or_result", false,-1, 63,0);
        tracep->declQuad(c+209,"top alu xor_result", false,-1, 63,0);
        tracep->declQuad(c+211,"top alu sll_result", false,-1, 63,0);
        tracep->declQuad(c+213,"top alu srl_result", false,-1, 63,0);
        tracep->declQuad(c+215,"top alu sra_result", false,-1, 63,0);
        tracep->declQuad(c+100,"top alu lui_result", false,-1, 63,0);
        tracep->declQuad(c+217,"top alu jal_result", false,-1, 63,0);
        tracep->declQuad(c+98,"top alu data_a", false,-1, 63,0);
        tracep->declQuad(c+219,"top alu data_b", false,-1, 63,0);
        tracep->declQuad(c+199,"top alu data_result", false,-1, 63,0);
        tracep->declQuad(c+217,"top alu data_pc", false,-1, 63,0);
        tracep->declBit(c+221,"top alu data_cin", false,-1);
        tracep->declBit(c+222,"top alu data_cout", false,-1);
        tracep->declBit(c+230,"top mem_reg clk", false,-1);
        tracep->declBit(c+231,"top mem_reg rst", false,-1);
        tracep->declBus(c+37,"top mem_reg mem_reg_in0", false,-1, 4,0);
        tracep->declBus(c+234,"top mem_reg mem_reg_in1", false,-1, 2,0);
        tracep->declBit(c+14,"top mem_reg mem_reg_in2", false,-1);
        tracep->declBit(c+15,"top mem_reg mem_reg_in3", false,-1);
        tracep->declBus(c+24,"top mem_reg mem_reg_in4", false,-1, 1,0);
        tracep->declQuad(c+102,"top mem_reg mem_reg_in7", false,-1, 63,0);
        tracep->declBus(c+44,"top mem_reg mem_reg_in8", false,-1, 31,0);
        tracep->declQuad(c+237,"top mem_reg mem_reg_in9", false,-1, 63,0);
        tracep->declQuad(c+80,"top mem_reg mem_reg_in10", false,-1, 63,0);
        tracep->declBit(c+6,"top mem_reg mem_reg_in11", false,-1);
        tracep->declBus(c+36,"top mem_reg mem_reg_out0", false,-1, 4,0);
        tracep->declBus(c+30,"top mem_reg mem_reg_out1", false,-1, 2,0);
        tracep->declBit(c+13,"top mem_reg mem_reg_out2", false,-1);
        tracep->declBit(c+12,"top mem_reg mem_reg_out3", false,-1);
        tracep->declBus(c+19,"top mem_reg mem_reg_out4", false,-1, 1,0);
        tracep->declQuad(c+72,"top mem_reg mem_reg_out7", false,-1, 63,0);
        tracep->declBus(c+45,"top mem_reg mem_reg_out8", false,-1, 31,0);
        tracep->declQuad(c+70,"top mem_reg mem_reg_out9", false,-1, 63,0);
        tracep->declQuad(c+64,"top mem_reg mem_reg_out10", false,-1, 63,0);
        tracep->declBit(c+7,"top mem_reg mem_reg_out11", false,-1);
        tracep->declQuad(c+70,"top data_ram wdata", false,-1, 63,0);
        tracep->declBus(c+45,"top data_ram ram_addr", false,-1, 31,0);
        tracep->declBit(c+13,"top data_ram data_wen", false,-1);
        tracep->declBit(c+7,"top data_ram data_ren", false,-1);
        tracep->declBit(c+230,"top data_ram clk", false,-1);
        tracep->declQuad(c+88,"top data_ram rdata", false,-1, 63,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+223+i*2,"top data_ram ram", true,(i+-1), 63,0);}}
        tracep->declBit(c+230,"top wb_reg clk", false,-1);
        tracep->declBit(c+231,"top wb_reg rst", false,-1);
        tracep->declQuad(c+64,"top wb_reg wb_reg_in0", false,-1, 63,0);
        tracep->declBus(c+30,"top wb_reg wb_reg_in1", false,-1, 2,0);
        tracep->declBit(c+12,"top wb_reg wb_reg_in2", false,-1);
        tracep->declBus(c+19,"top wb_reg wb_reg_in3", false,-1, 1,0);
        tracep->declQuad(c+72,"top wb_reg wb_reg_in4", false,-1, 63,0);
        tracep->declQuad(c+88,"top wb_reg wb_reg_in5", false,-1, 63,0);
        tracep->declBus(c+36,"top wb_reg wb_reg_in6", false,-1, 4,0);
        tracep->declQuad(c+78,"top wb_reg wb_reg_out0", false,-1, 63,0);
        tracep->declBus(c+29,"top wb_reg wb_reg_out1", false,-1, 2,0);
        tracep->declBit(c+16,"top wb_reg wb_reg_out2", false,-1);
        tracep->declBus(c+18,"top wb_reg wb_reg_out3", false,-1, 1,0);
        tracep->declQuad(c+68,"top wb_reg wb_reg_out4", false,-1, 63,0);
        tracep->declQuad(c+66,"top wb_reg wb_reg_out5", false,-1, 63,0);
        tracep->declBus(c+38,"top wb_reg wb_reg_out6", false,-1, 4,0);
        tracep->declQuad(c+68,"top data_rd_choice in0", false,-1, 63,0);
        tracep->declQuad(c+66,"top data_rd_choice in1", false,-1, 63,0);
        tracep->declBus(c+18,"top data_rd_choice key", false,-1, 1,0);
        tracep->declQuad(c+232,"top data_rd_choice out", false,-1, 63,0);
        tracep->declBit(c+230,"top ebreak_list clk", false,-1);
        tracep->declBit(c+231,"top ebreak_list rst", false,-1);
        tracep->declBit(c+9,"top ebreak_list ebreak", false,-1);
        tracep->declBus(c+39,"top ebreak_list op", false,-1, 11,0);
        tracep->declBus(c+46,"top ebreak_list inst", false,-1, 31,0);
        tracep->declBit(c+10,"top ebreak_list ebreak_out", false,-1);
        tracep->declBus(c+40,"top ebreak_list op_out", false,-1, 11,0);
        tracep->declBus(c+47,"top ebreak_list inst_out", false,-1, 31,0);
        tracep->declBus(c+227,"top ebreak_list op_1", false,-1, 11,0);
        tracep->declBit(c+228,"top ebreak_list ebreak_1", false,-1);
        tracep->declBus(c+229,"top ebreak_list inst_1", false,-1, 31,0);
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
    VlWide<3>/*95:0*/ __Vtemp19;
    VlWide<3>/*95:0*/ __Vtemp20;
    VlWide<3>/*95:0*/ __Vtemp21;
    VlWide<3>/*95:0*/ __Vtemp22;
    VlWide<3>/*95:0*/ __Vtemp23;
    VlWide<3>/*95:0*/ __Vtemp26;
    VlWide<3>/*95:0*/ __Vtemp27;
    VlWide<3>/*95:0*/ __Vtemp28;
    VlWide<3>/*95:0*/ __Vtemp29;
    VlWide<3>/*95:0*/ __Vtemp30;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(((IData)((0x2023U == 
                                          (0x707fU 
                                           & vlSelf->top__DOT__inst_id)))
                                  ? 1U : 0U)));
        tracep->fullBit(oldp+2,(((IData)(vlSelf->top__DOT__stall_control)
                                  ? 0U : ((IData)((0x2023U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__inst_id)))
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
        tracep->fullBit(oldp+5,(((IData)((0x3003U == 
                                          (0x707fU 
                                           & vlSelf->top__DOT__inst_id)))
                                  ? 1U : 0U)));
        tracep->fullBit(oldp+6,(vlSelf->top__DOT__exe_reg_data_ren));
        tracep->fullBit(oldp+7,(vlSelf->top__DOT__mem_reg_data_ren));
        tracep->fullBit(oldp+8,(((1U == (IData)(vlSelf->top__DOT__pc_sel))
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
        tracep->fullCData(oldp+21,((((((0x6fU == (0x7fU 
                                                  & vlSelf->top__DOT__inst_id)) 
                                       | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_U)) 
                                      | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_I)) 
                                     | (0x23U == (0x7fU 
                                                  & vlSelf->top__DOT__inst_id)))
                                     ? 1U : 2U)),2);
        tracep->fullCData(oldp+22,(vlSelf->top__DOT__exe_reg_src2_sel),2);
        tracep->fullCData(oldp+23,(((IData)((0x2003U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__inst_id)))
                                     ? 2U : 1U)),2);
        tracep->fullCData(oldp+24,(vlSelf->top__DOT__exe_reg_load_sel),2);
        tracep->fullCData(oldp+25,(vlSelf->top__DOT__pc_sel),3);
        tracep->fullCData(oldp+26,(vlSelf->top__DOT__pc_add_rs1_sel),3);
        tracep->fullCData(oldp+27,(vlSelf->top__DOT__src1_sel_plus),3);
        tracep->fullCData(oldp+28,(vlSelf->top__DOT__src2_sel_plus),3);
        tracep->fullCData(oldp+29,(vlSelf->top__DOT__wb_reg_pc_sel),3);
        tracep->fullCData(oldp+30,(vlSelf->top__DOT__mem_reg_pc_sel),3);
        tracep->fullCData(oldp+31,(vlSelf->top__DOT__rs1),5);
        tracep->fullCData(oldp+32,((0x1fU & (vlSelf->top__DOT__inst_id 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+33,(vlSelf->top__DOT__exe_reg_rs1),5);
        tracep->fullCData(oldp+34,(vlSelf->top__DOT__exe_reg_rs2),5);
        tracep->fullCData(oldp+35,((0x1fU & (vlSelf->top__DOT__inst_id 
                                             >> 7U))),5);
        tracep->fullCData(oldp+36,(vlSelf->top__DOT__mem_reg_rd),5);
        tracep->fullCData(oldp+37,(vlSelf->top__DOT__exe_reg_rd),5);
        tracep->fullCData(oldp+38,(vlSelf->top__DOT__wb_reg_rd),5);
        tracep->fullSData(oldp+39,(vlSelf->top__DOT__op),12);
        tracep->fullSData(oldp+40,(vlSelf->top__DOT__op_out),12);
        tracep->fullSData(oldp+41,(vlSelf->top__DOT__exe_reg_op),12);
        tracep->fullSData(oldp+42,((0xffffU & (IData)(
                                                      ((vlSelf->top__DOT__cpu_pc 
                                                        - 0x80000000ULL) 
                                                       >> 2U)))),16);
        tracep->fullIData(oldp+43,(vlSelf->top__DOT__inst),32);
        tracep->fullIData(oldp+44,((IData)(vlSelf->top__DOT__alu__DOT__data_result)),32);
        tracep->fullIData(oldp+45,(vlSelf->top__DOT__mem_reg_ram_addr),32);
        tracep->fullIData(oldp+46,(vlSelf->top__DOT__inst_id),32);
        tracep->fullIData(oldp+47,(vlSelf->top__DOT__inst_out),32);
        tracep->fullQData(oldp+48,(vlSelf->top__DOT__imm),64);
        tracep->fullQData(oldp+50,(((1U == (IData)(vlSelf->top__DOT__pc_add_rs1_sel))
                                     ? vlSelf->top__DOT__src1_rs1
                                     : ((2U == (IData)(vlSelf->top__DOT__pc_add_rs1_sel))
                                         ? vlSelf->top__DOT__mem_reg_data_rd_in
                                         : vlSelf->top__DOT__wb_reg_data_rd_in))),64);
        tracep->fullQData(oldp+52,(vlSelf->top__DOT__common_reg__DOT__reg_com
                                   [0xaU]),64);
        tracep->fullQData(oldp+54,(((1U == (IData)(vlSelf->top__DOT__exe_reg_src1_sel))
                                     ? vlSelf->top__DOT__exe_reg_pc
                                     : vlSelf->top__DOT__exe_reg_src1_rs1)),64);
        tracep->fullQData(oldp+56,(((1U == (IData)(vlSelf->top__DOT__exe_reg_src2_sel))
                                     ? vlSelf->top__DOT__exe_reg_imm
                                     : vlSelf->top__DOT__exe_reg_src2_rs2)),64);
        tracep->fullQData(oldp+58,(vlSelf->top__DOT__if_pc),64);
        tracep->fullQData(oldp+60,(vlSelf->top__DOT__exe_reg_src1_rs1),64);
        tracep->fullQData(oldp+62,(vlSelf->top__DOT__exe_reg_src2_rs2),64);
        tracep->fullQData(oldp+64,(vlSelf->top__DOT__mem_reg_pc),64);
        tracep->fullQData(oldp+66,(vlSelf->top__DOT__wb_reg_rdata),64);
        tracep->fullQData(oldp+68,(vlSelf->top__DOT__wb_reg_data_rd_in),64);
        tracep->fullQData(oldp+70,(vlSelf->top__DOT__mem_reg_src2_rs2),64);
        tracep->fullQData(oldp+72,(vlSelf->top__DOT__mem_reg_data_rd_in),64);
        tracep->fullQData(oldp+74,(vlSelf->top__DOT__exe_reg_imm),64);
        tracep->fullQData(oldp+76,(vlSelf->top__DOT__cpu_pc),64);
        tracep->fullQData(oldp+78,(vlSelf->top__DOT__wb_reg_pc),64);
        tracep->fullQData(oldp+80,(vlSelf->top__DOT__exe_reg_pc),64);
        tracep->fullQData(oldp+82,(vlSelf->top__DOT__id_reg_pc),64);
        tracep->fullQData(oldp+84,(((1U == (IData)(vlSelf->top__DOT__pc_sel))
                                     ? (4ULL + vlSelf->top__DOT__cpu_pc)
                                     : ((2U == (IData)(vlSelf->top__DOT__pc_sel))
                                         ? (vlSelf->top__DOT__id_reg_pc 
                                            + vlSelf->top__DOT__imm)
                                         : (0xfffffffffffffffeULL 
                                            & (((1U 
                                                 == (IData)(vlSelf->top__DOT__pc_add_rs1_sel))
                                                 ? vlSelf->top__DOT__src1_rs1
                                                 : 
                                                ((2U 
                                                  == (IData)(vlSelf->top__DOT__pc_add_rs1_sel))
                                                  ? vlSelf->top__DOT__mem_reg_data_rd_in
                                                  : vlSelf->top__DOT__wb_reg_data_rd_in)) 
                                               + vlSelf->top__DOT__imm))))),64);
        tracep->fullQData(oldp+86,((4ULL + vlSelf->top__DOT__cpu_pc)),64);
        tracep->fullQData(oldp+88,(vlSelf->top__DOT__rdata),64);
        tracep->fullQData(oldp+90,(vlSelf->top__DOT__src1_rs1),64);
        tracep->fullQData(oldp+92,(((0U == (0x1fU & 
                                            (vlSelf->top__DOT__inst_id 
                                             >> 0x14U)))
                                     ? 0ULL : vlSelf->top__DOT__common_reg__DOT__reg_com
                                    [(0x1fU & (vlSelf->top__DOT__inst_id 
                                               >> 0x14U))])),64);
        tracep->fullQData(oldp+94,((vlSelf->top__DOT__id_reg_pc 
                                    + vlSelf->top__DOT__imm)),64);
        tracep->fullQData(oldp+96,((0xfffffffffffffffeULL 
                                    & (((1U == (IData)(vlSelf->top__DOT__pc_add_rs1_sel))
                                         ? vlSelf->top__DOT__src1_rs1
                                         : ((2U == (IData)(vlSelf->top__DOT__pc_add_rs1_sel))
                                             ? vlSelf->top__DOT__mem_reg_data_rd_in
                                             : vlSelf->top__DOT__wb_reg_data_rd_in)) 
                                       + vlSelf->top__DOT__imm))),64);
        tracep->fullQData(oldp+98,(vlSelf->top__DOT__src1),64);
        tracep->fullQData(oldp+100,(vlSelf->top__DOT__src2),64);
        tracep->fullQData(oldp+102,(vlSelf->top__DOT__data_rd_in),64);
        tracep->fullBit(oldp+104,(vlSelf->top__DOT__idu__DOT__TYPE_I));
        tracep->fullBit(oldp+105,(vlSelf->top__DOT__idu__DOT__TYPE_U));
        tracep->fullBit(oldp+106,((0x23U == (0x7fU 
                                             & vlSelf->top__DOT__inst_id))));
        tracep->fullBit(oldp+107,((0x6fU == (0x7fU 
                                             & vlSelf->top__DOT__inst_id))));
        tracep->fullBit(oldp+108,((0x63U == (0x7fU 
                                             & vlSelf->top__DOT__inst_id))));
        tracep->fullBit(oldp+109,((0x33U == (0x7fU 
                                             & vlSelf->top__DOT__inst_id))));
        tracep->fullQData(oldp+110,((((- (QData)((IData)(
                                                         (vlSelf->top__DOT__inst_id 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 (vlSelf->top__DOT__inst_id 
                                                                  >> 0x14U))))),64);
        tracep->fullQData(oldp+112,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->top__DOT__inst_id 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (0xfffff000U 
                                                                   & vlSelf->top__DOT__inst_id))))),64);
        tracep->fullQData(oldp+114,((((- (QData)((IData)(
                                                         (vlSelf->top__DOT__inst_id 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 ((0xfe0U 
                                                                   & (vlSelf->top__DOT__inst_id 
                                                                      >> 0x14U)) 
                                                                  | (0x1fU 
                                                                     & (vlSelf->top__DOT__inst_id 
                                                                        >> 7U))))))),64);
        tracep->fullQData(oldp+116,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+118,((((- (QData)((IData)(
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
        tracep->fullCData(oldp+120,((0x7fU & vlSelf->top__DOT__inst_id)),7);
        tracep->fullCData(oldp+121,((vlSelf->top__DOT__inst_id 
                                     >> 0x19U)),7);
        tracep->fullCData(oldp+122,((7U & (vlSelf->top__DOT__inst_id 
                                           >> 0xcU))),3);
        tracep->fullQData(oldp+123,(vlSelf->top__DOT__common_reg__DOT__reg_com[0]),64);
        tracep->fullQData(oldp+125,(vlSelf->top__DOT__common_reg__DOT__reg_com[1]),64);
        tracep->fullQData(oldp+127,(vlSelf->top__DOT__common_reg__DOT__reg_com[2]),64);
        tracep->fullQData(oldp+129,(vlSelf->top__DOT__common_reg__DOT__reg_com[3]),64);
        tracep->fullQData(oldp+131,(vlSelf->top__DOT__common_reg__DOT__reg_com[4]),64);
        tracep->fullQData(oldp+133,(vlSelf->top__DOT__common_reg__DOT__reg_com[5]),64);
        tracep->fullQData(oldp+135,(vlSelf->top__DOT__common_reg__DOT__reg_com[6]),64);
        tracep->fullQData(oldp+137,(vlSelf->top__DOT__common_reg__DOT__reg_com[7]),64);
        tracep->fullQData(oldp+139,(vlSelf->top__DOT__common_reg__DOT__reg_com[8]),64);
        tracep->fullQData(oldp+141,(vlSelf->top__DOT__common_reg__DOT__reg_com[9]),64);
        tracep->fullQData(oldp+143,(vlSelf->top__DOT__common_reg__DOT__reg_com[10]),64);
        tracep->fullQData(oldp+145,(vlSelf->top__DOT__common_reg__DOT__reg_com[11]),64);
        tracep->fullQData(oldp+147,(vlSelf->top__DOT__common_reg__DOT__reg_com[12]),64);
        tracep->fullQData(oldp+149,(vlSelf->top__DOT__common_reg__DOT__reg_com[13]),64);
        tracep->fullQData(oldp+151,(vlSelf->top__DOT__common_reg__DOT__reg_com[14]),64);
        tracep->fullQData(oldp+153,(vlSelf->top__DOT__common_reg__DOT__reg_com[15]),64);
        tracep->fullQData(oldp+155,(vlSelf->top__DOT__common_reg__DOT__reg_com[16]),64);
        tracep->fullQData(oldp+157,(vlSelf->top__DOT__common_reg__DOT__reg_com[17]),64);
        tracep->fullQData(oldp+159,(vlSelf->top__DOT__common_reg__DOT__reg_com[18]),64);
        tracep->fullQData(oldp+161,(vlSelf->top__DOT__common_reg__DOT__reg_com[19]),64);
        tracep->fullQData(oldp+163,(vlSelf->top__DOT__common_reg__DOT__reg_com[20]),64);
        tracep->fullQData(oldp+165,(vlSelf->top__DOT__common_reg__DOT__reg_com[21]),64);
        tracep->fullQData(oldp+167,(vlSelf->top__DOT__common_reg__DOT__reg_com[22]),64);
        tracep->fullQData(oldp+169,(vlSelf->top__DOT__common_reg__DOT__reg_com[23]),64);
        tracep->fullQData(oldp+171,(vlSelf->top__DOT__common_reg__DOT__reg_com[24]),64);
        tracep->fullQData(oldp+173,(vlSelf->top__DOT__common_reg__DOT__reg_com[25]),64);
        tracep->fullQData(oldp+175,(vlSelf->top__DOT__common_reg__DOT__reg_com[26]),64);
        tracep->fullQData(oldp+177,(vlSelf->top__DOT__common_reg__DOT__reg_com[27]),64);
        tracep->fullQData(oldp+179,(vlSelf->top__DOT__common_reg__DOT__reg_com[28]),64);
        tracep->fullQData(oldp+181,(vlSelf->top__DOT__common_reg__DOT__reg_com[29]),64);
        tracep->fullQData(oldp+183,(vlSelf->top__DOT__common_reg__DOT__reg_com[30]),64);
        tracep->fullQData(oldp+185,(vlSelf->top__DOT__common_reg__DOT__reg_com[31]),64);
        tracep->fullBit(oldp+187,((1U & (IData)(vlSelf->top__DOT__exe_reg_op))));
        tracep->fullBit(oldp+188,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 1U))));
        tracep->fullBit(oldp+189,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 2U))));
        tracep->fullBit(oldp+190,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 3U))));
        tracep->fullBit(oldp+191,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 4U))));
        tracep->fullBit(oldp+192,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 5U))));
        tracep->fullBit(oldp+193,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 6U))));
        tracep->fullBit(oldp+194,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 7U))));
        tracep->fullBit(oldp+195,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 8U))));
        tracep->fullBit(oldp+196,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 9U))));
        tracep->fullBit(oldp+197,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 0xaU))));
        tracep->fullBit(oldp+198,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 0xbU))));
        tracep->fullQData(oldp+199,(vlSelf->top__DOT__alu__DOT__data_result),64);
        tracep->fullQData(oldp+201,((QData)((IData)(
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
        VL_EXTEND_WQ(65,64, __Vtemp19, vlSelf->top__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp20, vlSelf->top__DOT__alu__DOT__data_b);
        VL_ADD_W(3, __Vtemp21, __Vtemp19, __Vtemp20);
        VL_EXTEND_WI(65,1, __Vtemp22, (IData)(vlSelf->top__DOT__alu__DOT__data_cin));
        VL_ADD_W(3, __Vtemp23, __Vtemp21, __Vtemp22);
        tracep->fullQData(oldp+203,((QData)((IData)(
                                                    (1U 
                                                     & (~ 
                                                        (1U 
                                                         & __Vtemp23[2U])))))),64);
        tracep->fullQData(oldp+205,((vlSelf->top__DOT__src1 
                                     & vlSelf->top__DOT__src2)),64);
        tracep->fullQData(oldp+207,((vlSelf->top__DOT__src1 
                                     | vlSelf->top__DOT__src2)),64);
        tracep->fullQData(oldp+209,((vlSelf->top__DOT__src1 
                                     ^ vlSelf->top__DOT__src2)),64);
        tracep->fullQData(oldp+211,((vlSelf->top__DOT__src1 
                                     << (0x3fU & (IData)(vlSelf->top__DOT__src2)))),64);
        tracep->fullQData(oldp+213,((vlSelf->top__DOT__src1 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__src2)))),64);
        tracep->fullQData(oldp+215,((vlSelf->top__DOT__src1 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__src2)))),64);
        tracep->fullQData(oldp+217,((4ULL + vlSelf->top__DOT__src1)),64);
        tracep->fullQData(oldp+219,(vlSelf->top__DOT__alu__DOT__data_b),64);
        tracep->fullBit(oldp+221,(vlSelf->top__DOT__alu__DOT__data_cin));
        VL_EXTEND_WQ(65,64, __Vtemp26, vlSelf->top__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp27, vlSelf->top__DOT__alu__DOT__data_b);
        VL_ADD_W(3, __Vtemp28, __Vtemp26, __Vtemp27);
        VL_EXTEND_WI(65,1, __Vtemp29, (IData)(vlSelf->top__DOT__alu__DOT__data_cin));
        VL_ADD_W(3, __Vtemp30, __Vtemp28, __Vtemp29);
        tracep->fullBit(oldp+222,((1U & __Vtemp30[2U])));
        tracep->fullQData(oldp+223,(vlSelf->top__DOT__data_ram__DOT__ram[0]),64);
        tracep->fullQData(oldp+225,(vlSelf->top__DOT__data_ram__DOT__ram[1]),64);
        tracep->fullSData(oldp+227,(vlSelf->top__DOT__ebreak_list__DOT__op_1),12);
        tracep->fullBit(oldp+228,(vlSelf->top__DOT__ebreak_list__DOT__ebreak_1));
        tracep->fullIData(oldp+229,(vlSelf->top__DOT__ebreak_list__DOT__inst_1),32);
        tracep->fullBit(oldp+230,(vlSelf->clk));
        tracep->fullBit(oldp+231,(vlSelf->rst));
        tracep->fullQData(oldp+232,(vlSelf->data_rd),64);
        tracep->fullCData(oldp+234,(vlSelf->top__DOT__exe_reg_pc_sel),3);
        tracep->fullQData(oldp+235,(vlSelf->top__DOT__exe_reg_src1),64);
        tracep->fullQData(oldp+237,(vlSelf->top__DOT__exe_reg_src2),64);
        tracep->fullQData(oldp+239,(vlSelf->top__DOT__mem_reg_cpu_dnpc_in1),64);
        tracep->fullQData(oldp+241,(vlSelf->top__DOT__mem_reg_cpu_dnpc_in2),64);
        tracep->fullQData(oldp+243,(vlSelf->top__DOT__wb_reg_cpu_dnpc_in1),64);
        tracep->fullQData(oldp+245,(vlSelf->top__DOT__wb_reg_cpu_dnpc_in2),64);
        tracep->fullQData(oldp+247,(vlSelf->top__DOT__cpu_ifpc),64);
        tracep->fullQData(oldp+249,(vlSelf->top__DOT__if_reg_pc),64);
    }
}
