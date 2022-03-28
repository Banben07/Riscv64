// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsing_top__Syms.h"


void Vsing_top___024root__traceInitSub0(Vsing_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vsing_top___024root__traceInitTop(Vsing_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsing_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vsing_top___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vsing_top___024root__traceInitSub0(Vsing_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsing_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+204,"clk", false,-1);
        tracep->declBit(c+205,"rst", false,-1);
        tracep->declQuad(c+206,"data_rd", false,-1, 63,0);
        tracep->declBit(c+204,"top clk", false,-1);
        tracep->declBit(c+205,"top rst", false,-1);
        tracep->declQuad(c+206,"top data_rd", false,-1, 63,0);
        tracep->declBit(c+1,"top data_wen", false,-1);
        tracep->declBit(c+2,"top reg_wen", false,-1);
        tracep->declBit(c+3,"top mem_reg_reg_wen", false,-1);
        tracep->declBit(c+4,"top mem_reg_data_wen", false,-1);
        tracep->declBit(c+5,"top exe_reg_data_wen", false,-1);
        tracep->declBit(c+6,"top exe_reg_reg_wen", false,-1);
        tracep->declBit(c+7,"top wb_reg_reg_wen", false,-1);
        tracep->declBus(c+8,"top src1_sel", false,-1, 1,0);
        tracep->declBus(c+9,"top wb_reg_load_sel", false,-1, 1,0);
        tracep->declBus(c+10,"top mem_reg_load_sel", false,-1, 1,0);
        tracep->declBus(c+11,"top exe_reg_src1_sel", false,-1, 1,0);
        tracep->declBus(c+12,"top src2_sel", false,-1, 1,0);
        tracep->declBus(c+13,"top exe_reg_src2_sel", false,-1, 1,0);
        tracep->declBus(c+14,"top load_sel", false,-1, 1,0);
        tracep->declBus(c+15,"top exe_reg_load_sel", false,-1, 1,0);
        tracep->declBus(c+16,"top pc_sel", false,-1, 2,0);
        tracep->declBus(c+17,"top wb_reg_pc_sel", false,-1, 2,0);
        tracep->declBus(c+18,"top mem_reg_pc_sel", false,-1, 2,0);
        tracep->declBus(c+19,"top exe_reg_pc_sel", false,-1, 2,0);
        tracep->declBus(c+20,"top rs1", false,-1, 4,0);
        tracep->declBus(c+21,"top rs2", false,-1, 4,0);
        tracep->declBus(c+22,"top rd", false,-1, 4,0);
        tracep->declBus(c+23,"top mem_reg_rd", false,-1, 4,0);
        tracep->declBus(c+24,"top exe_reg_rd", false,-1, 4,0);
        tracep->declBus(c+208,"top exe_reg_rs1", false,-1, 4,0);
        tracep->declBus(c+209,"top exe_reg_rs2", false,-1, 4,0);
        tracep->declBus(c+25,"top wb_reg_rd", false,-1, 4,0);
        tracep->declBus(c+26,"top op", false,-1, 11,0);
        tracep->declBus(c+27,"top exe_reg_op", false,-1, 11,0);
        tracep->declBus(c+28,"top inst_addr", false,-1, 15,0);
        tracep->declBus(c+29,"top inst", false,-1, 31,0);
        tracep->declBus(c+30,"top ram_addr", false,-1, 31,0);
        tracep->declBus(c+31,"top mem_reg_ram_addr", false,-1, 31,0);
        tracep->declBus(c+32,"top inst_id", false,-1, 31,0);
        tracep->declQuad(c+33,"top imm", false,-1, 63,0);
        tracep->declQuad(c+35,"top exe_reg_src1_rs1", false,-1, 63,0);
        tracep->declQuad(c+210,"top exe_reg_src1", false,-1, 63,0);
        tracep->declQuad(c+212,"top exe_reg_src2", false,-1, 63,0);
        tracep->declQuad(c+37,"top exe_reg_src2_rs2", false,-1, 63,0);
        tracep->declQuad(c+39,"top mem_reg_pc", false,-1, 63,0);
        tracep->declQuad(c+41,"top wb_reg_rdata", false,-1, 63,0);
        tracep->declQuad(c+43,"top wb_reg_data_rd_in", false,-1, 63,0);
        tracep->declQuad(c+45,"top mem_reg_src2_rs2", false,-1, 63,0);
        tracep->declQuad(c+47,"top mem_reg_data_rd_in", false,-1, 63,0);
        tracep->declQuad(c+49,"top mem_reg_cpu_dnpc_in1", false,-1, 63,0);
        tracep->declQuad(c+51,"top mem_reg_cpu_dnpc_in2", false,-1, 63,0);
        tracep->declQuad(c+53,"top exe_reg_imm", false,-1, 63,0);
        tracep->declQuad(c+55,"top cpu_pc", false,-1, 63,0);
        tracep->declQuad(c+57,"top wb_reg_pc", false,-1, 63,0);
        tracep->declQuad(c+214,"top wb_reg_cpu_dnpc_in1", false,-1, 63,0);
        tracep->declQuad(c+216,"top wb_reg_cpu_dnpc_in2", false,-1, 63,0);
        tracep->declQuad(c+59,"top exe_reg_pc", false,-1, 63,0);
        tracep->declQuad(c+218,"top cpu_ifpc", false,-1, 63,0);
        tracep->declQuad(c+220,"top if_reg_pc", false,-1, 63,0);
        tracep->declQuad(c+61,"top id_reg_pc", false,-1, 63,0);
        tracep->declQuad(c+63,"top cpu_dnpc", false,-1, 63,0);
        tracep->declQuad(c+65,"top cpu_snpc", false,-1, 63,0);
        tracep->declQuad(c+67,"top rdata", false,-1, 63,0);
        tracep->declQuad(c+69,"top src1_rs1", false,-1, 63,0);
        tracep->declQuad(c+71,"top src2_rs2", false,-1, 63,0);
        tracep->declQuad(c+73,"top cpu_dnpc_in1", false,-1, 63,0);
        tracep->declQuad(c+75,"top cpu_dnpc_in2", false,-1, 63,0);
        tracep->declQuad(c+77,"top src1", false,-1, 63,0);
        tracep->declQuad(c+79,"top src2", false,-1, 63,0);
        tracep->declQuad(c+81,"top data_rd_in", false,-1, 63,0);
        tracep->declQuad(c+65,"top pc_sel_choice in0", false,-1, 63,0);
        tracep->declQuad(c+49,"top pc_sel_choice in1", false,-1, 63,0);
        tracep->declQuad(c+51,"top pc_sel_choice in2", false,-1, 63,0);
        tracep->declBus(c+18,"top pc_sel_choice key", false,-1, 2,0);
        tracep->declQuad(c+63,"top pc_sel_choice out", false,-1, 63,0);
        tracep->declQuad(c+63,"top pc cpu_dnpc", false,-1, 63,0);
        tracep->declBus(c+16,"top pc sel", false,-1, 2,0);
        tracep->declBit(c+204,"top pc clk", false,-1);
        tracep->declBit(c+205,"top pc rst", false,-1);
        tracep->declQuad(c+55,"top pc cpu_pc", false,-1, 63,0);
        tracep->declQuad(c+63,"top inf pc", false,-1, 63,0);
        tracep->declBus(c+28,"top inf addr", false,-1, 15,0);
        tracep->declBit(c+204,"top inst_ram clk", false,-1);
        tracep->declBus(c+28,"top inst_ram addr", false,-1, 15,0);
        tracep->declBus(c+29,"top inst_ram inst", false,-1, 31,0);
        tracep->declBit(c+204,"top id_reg clk", false,-1);
        tracep->declBit(c+205,"top id_reg rst", false,-1);
        tracep->declBus(c+29,"top id_reg id_reg_in0", false,-1, 31,0);
        tracep->declQuad(c+55,"top id_reg id_reg_in1", false,-1, 63,0);
        tracep->declBus(c+32,"top id_reg id_reg_out0", false,-1, 31,0);
        tracep->declQuad(c+61,"top id_reg id_reg_out1", false,-1, 63,0);
        tracep->declBus(c+32,"top idu inst", false,-1, 31,0);
        tracep->declQuad(c+33,"top idu imm", false,-1, 63,0);
        tracep->declBus(c+26,"top idu op", false,-1, 11,0);
        tracep->declBus(c+22,"top idu rd", false,-1, 4,0);
        tracep->declBus(c+20,"top idu rs1", false,-1, 4,0);
        tracep->declBus(c+21,"top idu rs2", false,-1, 4,0);
        tracep->declBus(c+16,"top idu pc_sel", false,-1, 2,0);
        tracep->declBus(c+8,"top idu src1_sel", false,-1, 1,0);
        tracep->declBus(c+12,"top idu src2_sel", false,-1, 1,0);
        tracep->declBus(c+14,"top idu load_sel", false,-1, 1,0);
        tracep->declBit(c+1,"top idu data_wen", false,-1);
        tracep->declBit(c+2,"top idu reg_wen", false,-1);
        tracep->declBit(c+83,"top idu TYPE_I", false,-1);
        tracep->declBit(c+84,"top idu TYPE_U", false,-1);
        tracep->declBit(c+85,"top idu TYPE_S", false,-1);
        tracep->declBit(c+86,"top idu TYPE_J", false,-1);
        tracep->declBit(c+87,"top idu TYPE_B", false,-1);
        tracep->declBit(c+88,"top idu TYPE_R", false,-1);
        tracep->declQuad(c+89,"top idu immI", false,-1, 63,0);
        tracep->declQuad(c+91,"top idu immU", false,-1, 63,0);
        tracep->declQuad(c+93,"top idu immS", false,-1, 63,0);
        tracep->declQuad(c+95,"top idu immJ", false,-1, 63,0);
        tracep->declQuad(c+97,"top idu immB", false,-1, 63,0);
        tracep->declBus(c+99,"top idu opcode", false,-1, 6,0);
        tracep->declBus(c+100,"top idu funct7", false,-1, 6,0);
        tracep->declBus(c+101,"top idu funct3", false,-1, 2,0);
        tracep->declQuad(c+206,"top common_reg data_rd", false,-1, 63,0);
        tracep->declBus(c+25,"top common_reg addr_rd", false,-1, 4,0);
        tracep->declBus(c+20,"top common_reg addr_rs1", false,-1, 4,0);
        tracep->declBus(c+21,"top common_reg addr_rs2", false,-1, 4,0);
        tracep->declBit(c+7,"top common_reg en", false,-1);
        tracep->declBit(c+204,"top common_reg clk", false,-1);
        tracep->declQuad(c+69,"top common_reg data_rs1", false,-1, 63,0);
        tracep->declQuad(c+71,"top common_reg data_rs2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+102+i*2,"top common_reg reg_com", true,(i+0), 63,0);}}
        tracep->declBit(c+204,"top exe_reg clk", false,-1);
        tracep->declBit(c+205,"top exe_reg rst", false,-1);
        tracep->declQuad(c+61,"top exe_reg exe_reg_in0", false,-1, 63,0);
        tracep->declBus(c+26,"top exe_reg exe_reg_in1", false,-1, 11,0);
        tracep->declBus(c+22,"top exe_reg exe_reg_in2", false,-1, 4,0);
        tracep->declQuad(c+69,"top exe_reg exe_reg_in3", false,-1, 63,0);
        tracep->declBus(c+8,"top exe_reg exe_reg_in4", false,-1, 1,0);
        tracep->declQuad(c+71,"top exe_reg exe_reg_in5", false,-1, 63,0);
        tracep->declBus(c+16,"top exe_reg exe_reg_in6", false,-1, 2,0);
        tracep->declBit(c+1,"top exe_reg exe_reg_in7", false,-1);
        tracep->declBit(c+2,"top exe_reg exe_reg_in8", false,-1);
        tracep->declBus(c+14,"top exe_reg exe_reg_in9", false,-1, 1,0);
        tracep->declBus(c+12,"top exe_reg exe_reg_in10", false,-1, 1,0);
        tracep->declQuad(c+33,"top exe_reg exe_reg_in11", false,-1, 63,0);
        tracep->declQuad(c+59,"top exe_reg exe_reg_out0", false,-1, 63,0);
        tracep->declBus(c+27,"top exe_reg exe_reg_out1", false,-1, 11,0);
        tracep->declBus(c+24,"top exe_reg exe_reg_out2", false,-1, 4,0);
        tracep->declQuad(c+35,"top exe_reg exe_reg_out3", false,-1, 63,0);
        tracep->declBus(c+11,"top exe_reg exe_reg_out4", false,-1, 1,0);
        tracep->declQuad(c+37,"top exe_reg exe_reg_out5", false,-1, 63,0);
        tracep->declBus(c+19,"top exe_reg exe_reg_out6", false,-1, 2,0);
        tracep->declBit(c+5,"top exe_reg exe_reg_out7", false,-1);
        tracep->declBit(c+6,"top exe_reg exe_reg_out8", false,-1);
        tracep->declBus(c+15,"top exe_reg exe_reg_out9", false,-1, 1,0);
        tracep->declBus(c+13,"top exe_reg exe_reg_out10", false,-1, 1,0);
        tracep->declQuad(c+53,"top exe_reg exe_reg_out11", false,-1, 63,0);
        tracep->declQuad(c+59,"top src1_sel_choice in0", false,-1, 63,0);
        tracep->declQuad(c+35,"top src1_sel_choice in1", false,-1, 63,0);
        tracep->declBus(c+11,"top src1_sel_choice key", false,-1, 1,0);
        tracep->declQuad(c+77,"top src1_sel_choice out", false,-1, 63,0);
        tracep->declQuad(c+53,"top src2_sel_choice in0", false,-1, 63,0);
        tracep->declQuad(c+37,"top src2_sel_choice in1", false,-1, 63,0);
        tracep->declBus(c+13,"top src2_sel_choice key", false,-1, 1,0);
        tracep->declQuad(c+79,"top src2_sel_choice out", false,-1, 63,0);
        tracep->declQuad(c+77,"top alu src1", false,-1, 63,0);
        tracep->declQuad(c+79,"top alu src2", false,-1, 63,0);
        tracep->declBus(c+27,"top alu op", false,-1, 11,0);
        tracep->declQuad(c+73,"top alu cpu_dnpc_in1", false,-1, 63,0);
        tracep->declQuad(c+75,"top alu cpu_dnpc_in2", false,-1, 63,0);
        tracep->declQuad(c+81,"top alu data_rd", false,-1, 63,0);
        tracep->declBus(c+30,"top alu ram_raddr", false,-1, 31,0);
        tracep->declBit(c+166,"top alu op_add", false,-1);
        tracep->declBit(c+167,"top alu op_sub", false,-1);
        tracep->declBit(c+168,"top alu op_slt", false,-1);
        tracep->declBit(c+169,"top alu op_sltu", false,-1);
        tracep->declBit(c+170,"top alu op_and", false,-1);
        tracep->declBit(c+171,"top alu op_or", false,-1);
        tracep->declBit(c+172,"top alu op_xor", false,-1);
        tracep->declBit(c+173,"top alu op_sll", false,-1);
        tracep->declBit(c+174,"top alu op_srl", false,-1);
        tracep->declBit(c+175,"top alu op_sra", false,-1);
        tracep->declBit(c+176,"top alu op_lui", false,-1);
        tracep->declBit(c+177,"top alu op_jal", false,-1);
        tracep->declQuad(c+73,"top alu add_sub_result", false,-1, 63,0);
        tracep->declQuad(c+178,"top alu slt_result", false,-1, 63,0);
        tracep->declQuad(c+180,"top alu sltu_result", false,-1, 63,0);
        tracep->declQuad(c+182,"top alu and_result", false,-1, 63,0);
        tracep->declQuad(c+184,"top alu or_result", false,-1, 63,0);
        tracep->declQuad(c+186,"top alu xor_result", false,-1, 63,0);
        tracep->declQuad(c+188,"top alu sll_result", false,-1, 63,0);
        tracep->declQuad(c+190,"top alu srl_result", false,-1, 63,0);
        tracep->declQuad(c+192,"top alu sra_result", false,-1, 63,0);
        tracep->declQuad(c+79,"top alu lui_result", false,-1, 63,0);
        tracep->declQuad(c+194,"top alu jal_result", false,-1, 63,0);
        tracep->declQuad(c+77,"top alu data_a", false,-1, 63,0);
        tracep->declQuad(c+196,"top alu data_b", false,-1, 63,0);
        tracep->declQuad(c+73,"top alu data_result", false,-1, 63,0);
        tracep->declQuad(c+194,"top alu data_pc", false,-1, 63,0);
        tracep->declBit(c+198,"top alu data_cin", false,-1);
        tracep->declBit(c+199,"top alu data_cout", false,-1);
        tracep->declBit(c+204,"top mem_reg clk", false,-1);
        tracep->declBit(c+205,"top mem_reg rst", false,-1);
        tracep->declBus(c+24,"top mem_reg mem_reg_in0", false,-1, 4,0);
        tracep->declBus(c+19,"top mem_reg mem_reg_in1", false,-1, 2,0);
        tracep->declBit(c+5,"top mem_reg mem_reg_in2", false,-1);
        tracep->declBit(c+6,"top mem_reg mem_reg_in3", false,-1);
        tracep->declBus(c+15,"top mem_reg mem_reg_in4", false,-1, 1,0);
        tracep->declQuad(c+73,"top mem_reg mem_reg_in5", false,-1, 63,0);
        tracep->declQuad(c+75,"top mem_reg mem_reg_in6", false,-1, 63,0);
        tracep->declQuad(c+81,"top mem_reg mem_reg_in7", false,-1, 63,0);
        tracep->declBus(c+30,"top mem_reg mem_reg_in8", false,-1, 31,0);
        tracep->declQuad(c+212,"top mem_reg mem_reg_in9", false,-1, 63,0);
        tracep->declQuad(c+59,"top mem_reg mem_reg_in10", false,-1, 63,0);
        tracep->declBus(c+23,"top mem_reg mem_reg_out0", false,-1, 4,0);
        tracep->declBus(c+18,"top mem_reg mem_reg_out1", false,-1, 2,0);
        tracep->declBit(c+4,"top mem_reg mem_reg_out2", false,-1);
        tracep->declBit(c+3,"top mem_reg mem_reg_out3", false,-1);
        tracep->declBus(c+10,"top mem_reg mem_reg_out4", false,-1, 1,0);
        tracep->declQuad(c+49,"top mem_reg mem_reg_out5", false,-1, 63,0);
        tracep->declQuad(c+51,"top mem_reg mem_reg_out6", false,-1, 63,0);
        tracep->declQuad(c+47,"top mem_reg mem_reg_out7", false,-1, 63,0);
        tracep->declBus(c+31,"top mem_reg mem_reg_out8", false,-1, 31,0);
        tracep->declQuad(c+45,"top mem_reg mem_reg_out9", false,-1, 63,0);
        tracep->declQuad(c+39,"top mem_reg mem_reg_out10", false,-1, 63,0);
        tracep->declQuad(c+45,"top data_ram wdata", false,-1, 63,0);
        tracep->declBus(c+31,"top data_ram ram_addr", false,-1, 31,0);
        tracep->declBit(c+4,"top data_ram data_wen", false,-1);
        tracep->declBit(c+204,"top data_ram clk", false,-1);
        tracep->declQuad(c+67,"top data_ram rdata", false,-1, 63,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+200+i*2,"top data_ram ram", true,(i+-1), 63,0);}}
        tracep->declBit(c+204,"top wb_reg clk", false,-1);
        tracep->declBit(c+205,"top wb_reg rst", false,-1);
        tracep->declQuad(c+39,"top wb_reg wb_reg_in0", false,-1, 63,0);
        tracep->declBus(c+18,"top wb_reg wb_reg_in1", false,-1, 2,0);
        tracep->declBit(c+3,"top wb_reg wb_reg_in2", false,-1);
        tracep->declBus(c+10,"top wb_reg wb_reg_in3", false,-1, 1,0);
        tracep->declQuad(c+47,"top wb_reg wb_reg_in4", false,-1, 63,0);
        tracep->declQuad(c+67,"top wb_reg wb_reg_in5", false,-1, 63,0);
        tracep->declBus(c+23,"top wb_reg wb_reg_in6", false,-1, 4,0);
        tracep->declQuad(c+57,"top wb_reg wb_reg_out0", false,-1, 63,0);
        tracep->declBus(c+17,"top wb_reg wb_reg_out1", false,-1, 2,0);
        tracep->declBit(c+7,"top wb_reg wb_reg_out2", false,-1);
        tracep->declBus(c+9,"top wb_reg wb_reg_out3", false,-1, 1,0);
        tracep->declQuad(c+43,"top wb_reg wb_reg_out4", false,-1, 63,0);
        tracep->declQuad(c+41,"top wb_reg wb_reg_out5", false,-1, 63,0);
        tracep->declBus(c+25,"top wb_reg wb_reg_out6", false,-1, 4,0);
        tracep->declQuad(c+43,"top data_rd_choice in0", false,-1, 63,0);
        tracep->declQuad(c+41,"top data_rd_choice in1", false,-1, 63,0);
        tracep->declBus(c+9,"top data_rd_choice key", false,-1, 1,0);
        tracep->declQuad(c+206,"top data_rd_choice out", false,-1, 63,0);
    }
}

void Vsing_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vsing_top___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vsing_top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vsing_top___024root__traceRegister(Vsing_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsing_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vsing_top___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vsing_top___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vsing_top___024root__traceCleanup, vlSelf);
    }
}

void Vsing_top___024root__traceFullSub0(Vsing_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vsing_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vsing_top___024root* const __restrict vlSelf = static_cast<Vsing_top___024root*>(voidSelf);
    Vsing_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vsing_top___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vsing_top___024root__traceFullSub0(Vsing_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsing_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp18;
    VlWide<3>/*95:0*/ __Vtemp19;
    VlWide<3>/*95:0*/ __Vtemp20;
    VlWide<3>/*95:0*/ __Vtemp21;
    VlWide<3>/*95:0*/ __Vtemp22;
    VlWide<3>/*95:0*/ __Vtemp25;
    VlWide<3>/*95:0*/ __Vtemp26;
    VlWide<3>/*95:0*/ __Vtemp27;
    VlWide<3>/*95:0*/ __Vtemp28;
    VlWide<3>/*95:0*/ __Vtemp29;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,(((IData)((0x2023U == 
                                          (0x707fU 
                                           & vlSelf->top__DOT__inst_id)))
                                  ? 1U : 0U)));
        tracep->fullBit(oldp+2,((((((0x33U == (0x7fU 
                                               & vlSelf->top__DOT__inst_id)) 
                                    | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_I)) 
                                   | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_U)) 
                                  | (0x6fU == (0x7fU 
                                               & vlSelf->top__DOT__inst_id)))
                                  ? 1U : 0U)));
        tracep->fullBit(oldp+3,(vlSelf->top__DOT__mem_reg_reg_wen));
        tracep->fullBit(oldp+4,(vlSelf->top__DOT__mem_reg_data_wen));
        tracep->fullBit(oldp+5,(vlSelf->top__DOT__exe_reg_data_wen));
        tracep->fullBit(oldp+6,(vlSelf->top__DOT__exe_reg_reg_wen));
        tracep->fullBit(oldp+7,(vlSelf->top__DOT__wb_reg_reg_wen));
        tracep->fullCData(oldp+8,((((0x6fU == (0x7fU 
                                               & vlSelf->top__DOT__inst_id)) 
                                    | (0x17U == (0x7fU 
                                                 & vlSelf->top__DOT__inst_id)))
                                    ? 1U : 2U)),2);
        tracep->fullCData(oldp+9,(vlSelf->top__DOT__wb_reg_load_sel),2);
        tracep->fullCData(oldp+10,(vlSelf->top__DOT__mem_reg_load_sel),2);
        tracep->fullCData(oldp+11,(vlSelf->top__DOT__exe_reg_src1_sel),2);
        tracep->fullCData(oldp+12,((((((0x6fU == (0x7fU 
                                                  & vlSelf->top__DOT__inst_id)) 
                                       | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_U)) 
                                      | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_I)) 
                                     | (0x23U == (0x7fU 
                                                  & vlSelf->top__DOT__inst_id)))
                                     ? 1U : 2U)),2);
        tracep->fullCData(oldp+13,(vlSelf->top__DOT__exe_reg_src2_sel),2);
        tracep->fullCData(oldp+14,(((IData)((0x2003U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__inst_id)))
                                     ? 2U : 1U)),2);
        tracep->fullCData(oldp+15,(vlSelf->top__DOT__exe_reg_load_sel),2);
        tracep->fullCData(oldp+16,(((IData)((0x67U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__inst_id)))
                                     ? 4U : ((0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->top__DOT__inst_id))
                                              ? 2U : 1U))),3);
        tracep->fullCData(oldp+17,(vlSelf->top__DOT__wb_reg_pc_sel),3);
        tracep->fullCData(oldp+18,(vlSelf->top__DOT__mem_reg_pc_sel),3);
        tracep->fullCData(oldp+19,(vlSelf->top__DOT__exe_reg_pc_sel),3);
        tracep->fullCData(oldp+20,(vlSelf->top__DOT__rs1),5);
        tracep->fullCData(oldp+21,((0x1fU & (vlSelf->top__DOT__inst_id 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+22,((0x1fU & (vlSelf->top__DOT__inst_id 
                                             >> 7U))),5);
        tracep->fullCData(oldp+23,(vlSelf->top__DOT__mem_reg_rd),5);
        tracep->fullCData(oldp+24,(vlSelf->top__DOT__exe_reg_rd),5);
        tracep->fullCData(oldp+25,(vlSelf->top__DOT__wb_reg_rd),5);
        tracep->fullSData(oldp+26,(vlSelf->top__DOT__op),12);
        tracep->fullSData(oldp+27,(vlSelf->top__DOT__exe_reg_op),12);
        tracep->fullSData(oldp+28,((0xffffU & (IData)(
                                                      ((vlSelf->top__DOT__cpu_dnpc 
                                                        - 0x80000000ULL) 
                                                       >> 2U)))),16);
        tracep->fullIData(oldp+29,(vlSelf->top__DOT__inst),32);
        tracep->fullIData(oldp+30,((IData)(vlSelf->top__DOT__alu__DOT__data_result)),32);
        tracep->fullIData(oldp+31,(vlSelf->top__DOT__mem_reg_ram_addr),32);
        tracep->fullIData(oldp+32,(vlSelf->top__DOT__inst_id),32);
        tracep->fullQData(oldp+33,(((IData)(vlSelf->top__DOT__idu__DOT__TYPE_I)
                                     ? (((- (QData)((IData)(
                                                            (vlSelf->top__DOT__inst_id 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    (vlSelf->top__DOT__inst_id 
                                                                     >> 0x14U))))
                                     : ((IData)(vlSelf->top__DOT__idu__DOT__TYPE_U)
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (vlSelf->top__DOT__inst_id 
                                                                         >> 0x1fU))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              (0xfffff000U 
                                                               & vlSelf->top__DOT__inst_id))))
                                         : ((0x23U 
                                             == (0x7fU 
                                                 & vlSelf->top__DOT__inst_id))
                                             ? (((- (QData)((IData)(
                                                                    (vlSelf->top__DOT__inst_id 
                                                                     >> 0x1fU)))) 
                                                 << 0xcU) 
                                                | (QData)((IData)(
                                                                  ((0xfe0U 
                                                                    & (vlSelf->top__DOT__inst_id 
                                                                       >> 0x14U)) 
                                                                   | (0x1fU 
                                                                      & (vlSelf->top__DOT__inst_id 
                                                                         >> 7U))))))
                                             : ((0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->top__DOT__inst_id))
                                                 ? 
                                                (((- (QData)((IData)(
                                                                     (vlSelf->top__DOT__inst_id 
                                                                      >> 0x1fU)))) 
                                                  << 0x15U) 
                                                 | (QData)((IData)(
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
                                                                                >> 0x14U))))))))
                                                 : 
                                                ((0x63U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__inst_id))
                                                  ? 
                                                 (((- (QData)((IData)(
                                                                      (vlSelf->top__DOT__inst_id 
                                                                       >> 0x1fU)))) 
                                                   << 0xdU) 
                                                  | (QData)((IData)(
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
                                                                                >> 7U))))))))
                                                  : 0ULL)))))),64);
        tracep->fullQData(oldp+35,(vlSelf->top__DOT__exe_reg_src1_rs1),64);
        tracep->fullQData(oldp+37,(vlSelf->top__DOT__exe_reg_src2_rs2),64);
        tracep->fullQData(oldp+39,(vlSelf->top__DOT__mem_reg_pc),64);
        tracep->fullQData(oldp+41,(vlSelf->top__DOT__wb_reg_rdata),64);
        tracep->fullQData(oldp+43,(vlSelf->top__DOT__wb_reg_data_rd_in),64);
        tracep->fullQData(oldp+45,(vlSelf->top__DOT__mem_reg_src2_rs2),64);
        tracep->fullQData(oldp+47,(vlSelf->top__DOT__mem_reg_data_rd_in),64);
        tracep->fullQData(oldp+49,(vlSelf->top__DOT__mem_reg_cpu_dnpc_in1),64);
        tracep->fullQData(oldp+51,(vlSelf->top__DOT__mem_reg_cpu_dnpc_in2),64);
        tracep->fullQData(oldp+53,(vlSelf->top__DOT__exe_reg_imm),64);
        tracep->fullQData(oldp+55,(vlSelf->top__DOT__cpu_pc),64);
        tracep->fullQData(oldp+57,(vlSelf->top__DOT__wb_reg_pc),64);
        tracep->fullQData(oldp+59,(vlSelf->top__DOT__exe_reg_pc),64);
        tracep->fullQData(oldp+61,(vlSelf->top__DOT__id_reg_pc),64);
        tracep->fullQData(oldp+63,(vlSelf->top__DOT__cpu_dnpc),64);
        tracep->fullQData(oldp+65,((4ULL + vlSelf->top__DOT__cpu_pc)),64);
        tracep->fullQData(oldp+67,(vlSelf->top__DOT__rdata),64);
        tracep->fullQData(oldp+69,(((0U == (IData)(vlSelf->top__DOT__rs1))
                                     ? 0ULL : vlSelf->top__DOT__common_reg__DOT__reg_com
                                    [vlSelf->top__DOT__rs1])),64);
        tracep->fullQData(oldp+71,(((0U == (0x1fU & 
                                            (vlSelf->top__DOT__inst_id 
                                             >> 0x14U)))
                                     ? 0ULL : vlSelf->top__DOT__common_reg__DOT__reg_com
                                    [(0x1fU & (vlSelf->top__DOT__inst_id 
                                               >> 0x14U))])),64);
        tracep->fullQData(oldp+73,(vlSelf->top__DOT__alu__DOT__data_result),64);
        tracep->fullQData(oldp+75,((0xfffffffffffffffeULL 
                                    & vlSelf->top__DOT__alu__DOT__data_result)),64);
        tracep->fullQData(oldp+77,(vlSelf->top__DOT__src1),64);
        tracep->fullQData(oldp+79,(vlSelf->top__DOT__src2),64);
        tracep->fullQData(oldp+81,(vlSelf->top__DOT__data_rd_in),64);
        tracep->fullBit(oldp+83,(vlSelf->top__DOT__idu__DOT__TYPE_I));
        tracep->fullBit(oldp+84,(vlSelf->top__DOT__idu__DOT__TYPE_U));
        tracep->fullBit(oldp+85,((0x23U == (0x7fU & vlSelf->top__DOT__inst_id))));
        tracep->fullBit(oldp+86,((0x6fU == (0x7fU & vlSelf->top__DOT__inst_id))));
        tracep->fullBit(oldp+87,((0x63U == (0x7fU & vlSelf->top__DOT__inst_id))));
        tracep->fullBit(oldp+88,((0x33U == (0x7fU & vlSelf->top__DOT__inst_id))));
        tracep->fullQData(oldp+89,((((- (QData)((IData)(
                                                        (vlSelf->top__DOT__inst_id 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                (vlSelf->top__DOT__inst_id 
                                                                 >> 0x14U))))),64);
        tracep->fullQData(oldp+91,((((QData)((IData)(
                                                     (- (IData)(
                                                                (vlSelf->top__DOT__inst_id 
                                                                 >> 0x1fU))))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (0xfffff000U 
                                                                  & vlSelf->top__DOT__inst_id))))),64);
        tracep->fullQData(oldp+93,((((- (QData)((IData)(
                                                        (vlSelf->top__DOT__inst_id 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                ((0xfe0U 
                                                                  & (vlSelf->top__DOT__inst_id 
                                                                     >> 0x14U)) 
                                                                 | (0x1fU 
                                                                    & (vlSelf->top__DOT__inst_id 
                                                                       >> 7U))))))),64);
        tracep->fullQData(oldp+95,((((- (QData)((IData)(
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
        tracep->fullQData(oldp+97,((((- (QData)((IData)(
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
        tracep->fullCData(oldp+99,((0x7fU & vlSelf->top__DOT__inst_id)),7);
        tracep->fullCData(oldp+100,((vlSelf->top__DOT__inst_id 
                                     >> 0x19U)),7);
        tracep->fullCData(oldp+101,((7U & (vlSelf->top__DOT__inst_id 
                                           >> 0xcU))),3);
        tracep->fullQData(oldp+102,(vlSelf->top__DOT__common_reg__DOT__reg_com[0]),64);
        tracep->fullQData(oldp+104,(vlSelf->top__DOT__common_reg__DOT__reg_com[1]),64);
        tracep->fullQData(oldp+106,(vlSelf->top__DOT__common_reg__DOT__reg_com[2]),64);
        tracep->fullQData(oldp+108,(vlSelf->top__DOT__common_reg__DOT__reg_com[3]),64);
        tracep->fullQData(oldp+110,(vlSelf->top__DOT__common_reg__DOT__reg_com[4]),64);
        tracep->fullQData(oldp+112,(vlSelf->top__DOT__common_reg__DOT__reg_com[5]),64);
        tracep->fullQData(oldp+114,(vlSelf->top__DOT__common_reg__DOT__reg_com[6]),64);
        tracep->fullQData(oldp+116,(vlSelf->top__DOT__common_reg__DOT__reg_com[7]),64);
        tracep->fullQData(oldp+118,(vlSelf->top__DOT__common_reg__DOT__reg_com[8]),64);
        tracep->fullQData(oldp+120,(vlSelf->top__DOT__common_reg__DOT__reg_com[9]),64);
        tracep->fullQData(oldp+122,(vlSelf->top__DOT__common_reg__DOT__reg_com[10]),64);
        tracep->fullQData(oldp+124,(vlSelf->top__DOT__common_reg__DOT__reg_com[11]),64);
        tracep->fullQData(oldp+126,(vlSelf->top__DOT__common_reg__DOT__reg_com[12]),64);
        tracep->fullQData(oldp+128,(vlSelf->top__DOT__common_reg__DOT__reg_com[13]),64);
        tracep->fullQData(oldp+130,(vlSelf->top__DOT__common_reg__DOT__reg_com[14]),64);
        tracep->fullQData(oldp+132,(vlSelf->top__DOT__common_reg__DOT__reg_com[15]),64);
        tracep->fullQData(oldp+134,(vlSelf->top__DOT__common_reg__DOT__reg_com[16]),64);
        tracep->fullQData(oldp+136,(vlSelf->top__DOT__common_reg__DOT__reg_com[17]),64);
        tracep->fullQData(oldp+138,(vlSelf->top__DOT__common_reg__DOT__reg_com[18]),64);
        tracep->fullQData(oldp+140,(vlSelf->top__DOT__common_reg__DOT__reg_com[19]),64);
        tracep->fullQData(oldp+142,(vlSelf->top__DOT__common_reg__DOT__reg_com[20]),64);
        tracep->fullQData(oldp+144,(vlSelf->top__DOT__common_reg__DOT__reg_com[21]),64);
        tracep->fullQData(oldp+146,(vlSelf->top__DOT__common_reg__DOT__reg_com[22]),64);
        tracep->fullQData(oldp+148,(vlSelf->top__DOT__common_reg__DOT__reg_com[23]),64);
        tracep->fullQData(oldp+150,(vlSelf->top__DOT__common_reg__DOT__reg_com[24]),64);
        tracep->fullQData(oldp+152,(vlSelf->top__DOT__common_reg__DOT__reg_com[25]),64);
        tracep->fullQData(oldp+154,(vlSelf->top__DOT__common_reg__DOT__reg_com[26]),64);
        tracep->fullQData(oldp+156,(vlSelf->top__DOT__common_reg__DOT__reg_com[27]),64);
        tracep->fullQData(oldp+158,(vlSelf->top__DOT__common_reg__DOT__reg_com[28]),64);
        tracep->fullQData(oldp+160,(vlSelf->top__DOT__common_reg__DOT__reg_com[29]),64);
        tracep->fullQData(oldp+162,(vlSelf->top__DOT__common_reg__DOT__reg_com[30]),64);
        tracep->fullQData(oldp+164,(vlSelf->top__DOT__common_reg__DOT__reg_com[31]),64);
        tracep->fullBit(oldp+166,((1U & (IData)(vlSelf->top__DOT__exe_reg_op))));
        tracep->fullBit(oldp+167,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 1U))));
        tracep->fullBit(oldp+168,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 2U))));
        tracep->fullBit(oldp+169,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 3U))));
        tracep->fullBit(oldp+170,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 4U))));
        tracep->fullBit(oldp+171,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 5U))));
        tracep->fullBit(oldp+172,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 6U))));
        tracep->fullBit(oldp+173,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 7U))));
        tracep->fullBit(oldp+174,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 8U))));
        tracep->fullBit(oldp+175,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 9U))));
        tracep->fullBit(oldp+176,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 0xaU))));
        tracep->fullBit(oldp+177,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                         >> 0xbU))));
        tracep->fullQData(oldp+178,((QData)((IData)(
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
        VL_EXTEND_WQ(65,64, __Vtemp18, vlSelf->top__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp19, vlSelf->top__DOT__alu__DOT__data_b);
        VL_ADD_W(3, __Vtemp20, __Vtemp18, __Vtemp19);
        VL_EXTEND_WI(65,1, __Vtemp21, (IData)(vlSelf->top__DOT__alu__DOT__data_cin));
        VL_ADD_W(3, __Vtemp22, __Vtemp20, __Vtemp21);
        tracep->fullQData(oldp+180,((QData)((IData)(
                                                    (1U 
                                                     & (~ 
                                                        (1U 
                                                         & __Vtemp22[2U])))))),64);
        tracep->fullQData(oldp+182,((vlSelf->top__DOT__src1 
                                     & vlSelf->top__DOT__src2)),64);
        tracep->fullQData(oldp+184,((vlSelf->top__DOT__src1 
                                     | vlSelf->top__DOT__src2)),64);
        tracep->fullQData(oldp+186,((vlSelf->top__DOT__src1 
                                     ^ vlSelf->top__DOT__src2)),64);
        tracep->fullQData(oldp+188,((vlSelf->top__DOT__src1 
                                     << (0x3fU & (IData)(vlSelf->top__DOT__src2)))),64);
        tracep->fullQData(oldp+190,((vlSelf->top__DOT__src1 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__src2)))),64);
        tracep->fullQData(oldp+192,((vlSelf->top__DOT__src1 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__src2)))),64);
        tracep->fullQData(oldp+194,((4ULL + vlSelf->top__DOT__src1)),64);
        tracep->fullQData(oldp+196,(vlSelf->top__DOT__alu__DOT__data_b),64);
        tracep->fullBit(oldp+198,(vlSelf->top__DOT__alu__DOT__data_cin));
        VL_EXTEND_WQ(65,64, __Vtemp25, vlSelf->top__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp26, vlSelf->top__DOT__alu__DOT__data_b);
        VL_ADD_W(3, __Vtemp27, __Vtemp25, __Vtemp26);
        VL_EXTEND_WI(65,1, __Vtemp28, (IData)(vlSelf->top__DOT__alu__DOT__data_cin));
        VL_ADD_W(3, __Vtemp29, __Vtemp27, __Vtemp28);
        tracep->fullBit(oldp+199,((1U & __Vtemp29[2U])));
        tracep->fullQData(oldp+200,(vlSelf->top__DOT__data_ram__DOT__ram[0]),64);
        tracep->fullQData(oldp+202,(vlSelf->top__DOT__data_ram__DOT__ram[1]),64);
        tracep->fullBit(oldp+204,(vlSelf->clk));
        tracep->fullBit(oldp+205,(vlSelf->rst));
        tracep->fullQData(oldp+206,(vlSelf->data_rd),64);
        tracep->fullCData(oldp+208,(vlSelf->top__DOT__exe_reg_rs1),5);
        tracep->fullCData(oldp+209,(vlSelf->top__DOT__exe_reg_rs2),5);
        tracep->fullQData(oldp+210,(vlSelf->top__DOT__exe_reg_src1),64);
        tracep->fullQData(oldp+212,(vlSelf->top__DOT__exe_reg_src2),64);
        tracep->fullQData(oldp+214,(vlSelf->top__DOT__wb_reg_cpu_dnpc_in1),64);
        tracep->fullQData(oldp+216,(vlSelf->top__DOT__wb_reg_cpu_dnpc_in2),64);
        tracep->fullQData(oldp+218,(vlSelf->top__DOT__cpu_ifpc),64);
        tracep->fullQData(oldp+220,(vlSelf->top__DOT__if_reg_pc),64);
    }
}
