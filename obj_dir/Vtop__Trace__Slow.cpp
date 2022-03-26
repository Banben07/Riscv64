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
        tracep->declBit(c+159,"clk", false,-1);
        tracep->declBit(c+160,"rst", false,-1);
        tracep->declQuad(c+161,"data_rd", false,-1, 63,0);
        tracep->declBit(c+159,"top clk", false,-1);
        tracep->declBit(c+160,"top rst", false,-1);
        tracep->declQuad(c+161,"top data_rd", false,-1, 63,0);
        tracep->declBit(c+1,"top data_wen", false,-1);
        tracep->declBit(c+2,"top reg_wen", false,-1);
        tracep->declBus(c+3,"top src1_sel", false,-1, 1,0);
        tracep->declBus(c+4,"top src2_sel", false,-1, 1,0);
        tracep->declBus(c+5,"top load_sel", false,-1, 1,0);
        tracep->declBus(c+6,"top pc_sel", false,-1, 2,0);
        tracep->declBus(c+7,"top rs1", false,-1, 4,0);
        tracep->declBus(c+8,"top rs2", false,-1, 4,0);
        tracep->declBus(c+9,"top rd", false,-1, 4,0);
        tracep->declBus(c+10,"top op", false,-1, 11,0);
        tracep->declBus(c+11,"top inst_addr", false,-1, 15,0);
        tracep->declBus(c+12,"top inst", false,-1, 31,0);
        tracep->declBus(c+13,"top ram_addr", false,-1, 31,0);
        tracep->declQuad(c+14,"top imm", false,-1, 63,0);
        tracep->declQuad(c+16,"top cpu_pc", false,-1, 63,0);
        tracep->declQuad(c+18,"top cpu_dnpc", false,-1, 63,0);
        tracep->declQuad(c+20,"top cpu_snpc", false,-1, 63,0);
        tracep->declQuad(c+22,"top rdata", false,-1, 63,0);
        tracep->declQuad(c+24,"top src1_rs1", false,-1, 63,0);
        tracep->declQuad(c+26,"top src2_rs2", false,-1, 63,0);
        tracep->declQuad(c+28,"top cpu_dnpc_in1", false,-1, 63,0);
        tracep->declQuad(c+30,"top cpu_dnpc_in2", false,-1, 63,0);
        tracep->declQuad(c+32,"top src1", false,-1, 63,0);
        tracep->declQuad(c+34,"top src2", false,-1, 63,0);
        tracep->declQuad(c+36,"top data_rd_in", false,-1, 63,0);
        tracep->declQuad(c+20,"top pc_sel_choice in0", false,-1, 63,0);
        tracep->declQuad(c+28,"top pc_sel_choice in1", false,-1, 63,0);
        tracep->declQuad(c+30,"top pc_sel_choice in2", false,-1, 63,0);
        tracep->declBus(c+6,"top pc_sel_choice key", false,-1, 2,0);
        tracep->declQuad(c+18,"top pc_sel_choice out", false,-1, 63,0);
        tracep->declQuad(c+18,"top pc cpu_dnpc", false,-1, 63,0);
        tracep->declBit(c+159,"top pc clk", false,-1);
        tracep->declBit(c+160,"top pc rst", false,-1);
        tracep->declQuad(c+16,"top pc cpu_pc", false,-1, 63,0);
        tracep->declQuad(c+16,"top inf pc", false,-1, 63,0);
        tracep->declBus(c+11,"top inf addr", false,-1, 15,0);
        tracep->declBus(c+11,"top inst_ram addr", false,-1, 15,0);
        tracep->declBus(c+12,"top inst_ram inst", false,-1, 31,0);
        tracep->declBus(c+12,"top idu inst", false,-1, 31,0);
        tracep->declQuad(c+14,"top idu imm", false,-1, 63,0);
        tracep->declBus(c+10,"top idu op", false,-1, 11,0);
        tracep->declBus(c+9,"top idu rd", false,-1, 4,0);
        tracep->declBus(c+7,"top idu rs1", false,-1, 4,0);
        tracep->declBus(c+8,"top idu rs2", false,-1, 4,0);
        tracep->declBus(c+6,"top idu pc_sel", false,-1, 2,0);
        tracep->declBus(c+3,"top idu src1_sel", false,-1, 1,0);
        tracep->declBus(c+4,"top idu src2_sel", false,-1, 1,0);
        tracep->declBus(c+5,"top idu load_sel", false,-1, 1,0);
        tracep->declBit(c+1,"top idu data_wen", false,-1);
        tracep->declBit(c+2,"top idu reg_wen", false,-1);
        tracep->declBit(c+38,"top idu TYPE_I", false,-1);
        tracep->declBit(c+39,"top idu TYPE_U", false,-1);
        tracep->declBit(c+40,"top idu TYPE_S", false,-1);
        tracep->declBit(c+41,"top idu TYPE_J", false,-1);
        tracep->declBit(c+42,"top idu TYPE_B", false,-1);
        tracep->declBit(c+43,"top idu TYPE_R", false,-1);
        tracep->declQuad(c+44,"top idu immI", false,-1, 63,0);
        tracep->declQuad(c+46,"top idu immU", false,-1, 63,0);
        tracep->declQuad(c+48,"top idu immS", false,-1, 63,0);
        tracep->declQuad(c+50,"top idu immJ", false,-1, 63,0);
        tracep->declQuad(c+52,"top idu immB", false,-1, 63,0);
        tracep->declBus(c+54,"top idu opcode", false,-1, 6,0);
        tracep->declBus(c+55,"top idu funct7", false,-1, 6,0);
        tracep->declBus(c+56,"top idu funct3", false,-1, 2,0);
        tracep->declQuad(c+161,"top common_reg data_rd", false,-1, 63,0);
        tracep->declBus(c+9,"top common_reg addr_rd", false,-1, 4,0);
        tracep->declBus(c+7,"top common_reg addr_rs1", false,-1, 4,0);
        tracep->declBus(c+8,"top common_reg addr_rs2", false,-1, 4,0);
        tracep->declBit(c+2,"top common_reg en", false,-1);
        tracep->declBit(c+159,"top common_reg clk", false,-1);
        tracep->declQuad(c+24,"top common_reg data_rs1", false,-1, 63,0);
        tracep->declQuad(c+26,"top common_reg data_rs2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+57+i*2,"top common_reg reg_com", true,(i+0), 63,0);}}
        tracep->declQuad(c+26,"top data_ram wdata", false,-1, 63,0);
        tracep->declBus(c+13,"top data_ram ram_addr", false,-1, 31,0);
        tracep->declBit(c+1,"top data_ram data_wen", false,-1);
        tracep->declBit(c+159,"top data_ram clk", false,-1);
        tracep->declQuad(c+22,"top data_ram rdata", false,-1, 63,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+121+i*2,"top data_ram ram", true,(i+-1), 63,0);}}
        tracep->declQuad(c+16,"top src1_sel_choice in0", false,-1, 63,0);
        tracep->declQuad(c+24,"top src1_sel_choice in1", false,-1, 63,0);
        tracep->declBus(c+3,"top src1_sel_choice key", false,-1, 1,0);
        tracep->declQuad(c+32,"top src1_sel_choice out", false,-1, 63,0);
        tracep->declQuad(c+14,"top src2_sel_choice in0", false,-1, 63,0);
        tracep->declQuad(c+26,"top src2_sel_choice in1", false,-1, 63,0);
        tracep->declBus(c+4,"top src2_sel_choice key", false,-1, 1,0);
        tracep->declQuad(c+34,"top src2_sel_choice out", false,-1, 63,0);
        tracep->declQuad(c+32,"top alu src1", false,-1, 63,0);
        tracep->declQuad(c+34,"top alu src2", false,-1, 63,0);
        tracep->declBus(c+10,"top alu op", false,-1, 11,0);
        tracep->declQuad(c+28,"top alu cpu_dnpc_in1", false,-1, 63,0);
        tracep->declQuad(c+30,"top alu cpu_dnpc_in2", false,-1, 63,0);
        tracep->declQuad(c+36,"top alu data_rd", false,-1, 63,0);
        tracep->declBus(c+13,"top alu ram_raddr", false,-1, 31,0);
        tracep->declBit(c+125,"top alu op_add", false,-1);
        tracep->declBit(c+126,"top alu op_sub", false,-1);
        tracep->declBit(c+127,"top alu op_slt", false,-1);
        tracep->declBit(c+128,"top alu op_sltu", false,-1);
        tracep->declBit(c+129,"top alu op_and", false,-1);
        tracep->declBit(c+130,"top alu op_or", false,-1);
        tracep->declBit(c+131,"top alu op_xor", false,-1);
        tracep->declBit(c+132,"top alu op_sll", false,-1);
        tracep->declBit(c+133,"top alu op_srl", false,-1);
        tracep->declBit(c+134,"top alu op_sra", false,-1);
        tracep->declBit(c+135,"top alu op_lui", false,-1);
        tracep->declBit(c+136,"top alu op_jal", false,-1);
        tracep->declQuad(c+28,"top alu add_sub_result", false,-1, 63,0);
        tracep->declQuad(c+137,"top alu slt_result", false,-1, 63,0);
        tracep->declQuad(c+139,"top alu sltu_result", false,-1, 63,0);
        tracep->declQuad(c+141,"top alu and_result", false,-1, 63,0);
        tracep->declQuad(c+143,"top alu or_result", false,-1, 63,0);
        tracep->declQuad(c+145,"top alu xor_result", false,-1, 63,0);
        tracep->declQuad(c+147,"top alu sll_result", false,-1, 63,0);
        tracep->declQuad(c+149,"top alu srl_result", false,-1, 63,0);
        tracep->declQuad(c+151,"top alu sra_result", false,-1, 63,0);
        tracep->declQuad(c+34,"top alu lui_result", false,-1, 63,0);
        tracep->declQuad(c+153,"top alu jal_result", false,-1, 63,0);
        tracep->declQuad(c+32,"top alu data_a", false,-1, 63,0);
        tracep->declQuad(c+155,"top alu data_b", false,-1, 63,0);
        tracep->declQuad(c+28,"top alu data_result", false,-1, 63,0);
        tracep->declQuad(c+153,"top alu data_pc", false,-1, 63,0);
        tracep->declBit(c+157,"top alu data_cin", false,-1);
        tracep->declBit(c+158,"top alu data_cout", false,-1);
        tracep->declQuad(c+36,"top data_rd_choice in0", false,-1, 63,0);
        tracep->declQuad(c+22,"top data_rd_choice in1", false,-1, 63,0);
        tracep->declBus(c+5,"top data_rd_choice key", false,-1, 1,0);
        tracep->declQuad(c+161,"top data_rd_choice out", false,-1, 63,0);
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
                                           & vlSelf->top__DOT__inst)))
                                  ? 1U : 0U)));
        tracep->fullBit(oldp+2,((((((0x33U == (0x7fU 
                                               & vlSelf->top__DOT__inst)) 
                                    | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_I)) 
                                   | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_U)) 
                                  | (0x6fU == (0x7fU 
                                               & vlSelf->top__DOT__inst)))
                                  ? 1U : 0U)));
        tracep->fullCData(oldp+3,((((0x6fU == (0x7fU 
                                               & vlSelf->top__DOT__inst)) 
                                    | (0x17U == (0x7fU 
                                                 & vlSelf->top__DOT__inst)))
                                    ? 1U : 2U)),2);
        tracep->fullCData(oldp+4,((((((0x6fU == (0x7fU 
                                                 & vlSelf->top__DOT__inst)) 
                                      | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_U)) 
                                     | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_I)) 
                                    | (0x23U == (0x7fU 
                                                 & vlSelf->top__DOT__inst)))
                                    ? 1U : 2U)),2);
        tracep->fullCData(oldp+5,(((IData)((0x2003U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__inst)))
                                    ? 2U : 1U)),2);
        tracep->fullCData(oldp+6,(vlSelf->top__DOT__pc_sel),3);
        tracep->fullCData(oldp+7,(vlSelf->top__DOT__rs1),5);
        tracep->fullCData(oldp+8,((0x1fU & (vlSelf->top__DOT__inst 
                                            >> 0x14U))),5);
        tracep->fullCData(oldp+9,((0x1fU & (vlSelf->top__DOT__inst 
                                            >> 7U))),5);
        tracep->fullSData(oldp+10,(vlSelf->top__DOT__op),12);
        tracep->fullSData(oldp+11,((0xffffU & (IData)(
                                                      ((vlSelf->top__DOT__cpu_pc 
                                                        - 0x80000000ULL) 
                                                       >> 2U)))),16);
        tracep->fullIData(oldp+12,(vlSelf->top__DOT__inst),32);
        tracep->fullIData(oldp+13,((IData)(vlSelf->top__DOT__alu__DOT__data_result)),32);
        tracep->fullQData(oldp+14,(((IData)(vlSelf->top__DOT__idu__DOT__TYPE_I)
                                     ? (((- (QData)((IData)(
                                                            (vlSelf->top__DOT__inst 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    (vlSelf->top__DOT__inst 
                                                                     >> 0x14U))))
                                     : ((IData)(vlSelf->top__DOT__idu__DOT__TYPE_U)
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (vlSelf->top__DOT__inst 
                                                                         >> 0x1fU))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              (0xfffff000U 
                                                               & vlSelf->top__DOT__inst))))
                                         : ((0x23U 
                                             == (0x7fU 
                                                 & vlSelf->top__DOT__inst))
                                             ? (((- (QData)((IData)(
                                                                    (vlSelf->top__DOT__inst 
                                                                     >> 0x1fU)))) 
                                                 << 0xcU) 
                                                | (QData)((IData)(
                                                                  ((0xfe0U 
                                                                    & (vlSelf->top__DOT__inst 
                                                                       >> 0x14U)) 
                                                                   | (0x1fU 
                                                                      & (vlSelf->top__DOT__inst 
                                                                         >> 7U))))))
                                             : ((0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->top__DOT__inst))
                                                 ? 
                                                (((- (QData)((IData)(
                                                                     (vlSelf->top__DOT__inst 
                                                                      >> 0x1fU)))) 
                                                  << 0x15U) 
                                                 | (QData)((IData)(
                                                                   ((0x100000U 
                                                                     & (vlSelf->top__DOT__inst 
                                                                        >> 0xbU)) 
                                                                    | ((0xff000U 
                                                                        & vlSelf->top__DOT__inst) 
                                                                       | ((0x800U 
                                                                           & (vlSelf->top__DOT__inst 
                                                                              >> 9U)) 
                                                                          | (0x7feU 
                                                                             & (vlSelf->top__DOT__inst 
                                                                                >> 0x14U))))))))
                                                 : 
                                                ((0x63U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__inst))
                                                  ? 
                                                 (((- (QData)((IData)(
                                                                      (vlSelf->top__DOT__inst 
                                                                       >> 0x1fU)))) 
                                                   << 0xdU) 
                                                  | (QData)((IData)(
                                                                    ((0x1000U 
                                                                      & (vlSelf->top__DOT__inst 
                                                                         >> 0x13U)) 
                                                                     | ((0x800U 
                                                                         & (vlSelf->top__DOT__inst 
                                                                            << 4U)) 
                                                                        | ((0x7e0U 
                                                                            & (vlSelf->top__DOT__inst 
                                                                               >> 0x14U)) 
                                                                           | (0x1eU 
                                                                              & (vlSelf->top__DOT__inst 
                                                                                >> 7U))))))))
                                                  : 0ULL)))))),64);
        tracep->fullQData(oldp+16,(vlSelf->top__DOT__cpu_pc),64);
        tracep->fullQData(oldp+18,(((1U == (IData)(vlSelf->top__DOT__pc_sel))
                                     ? (4ULL + vlSelf->top__DOT__cpu_pc)
                                     : ((2U == (IData)(vlSelf->top__DOT__pc_sel))
                                         ? vlSelf->top__DOT__alu__DOT__data_result
                                         : (0xfffffffffffffffeULL 
                                            & vlSelf->top__DOT__alu__DOT__data_result)))),64);
        tracep->fullQData(oldp+20,((4ULL + vlSelf->top__DOT__cpu_pc)),64);
        tracep->fullQData(oldp+22,(vlSelf->top__DOT__data_ram__DOT__ram
                                   [(1U & ((IData)(1U) 
                                           + (IData)(vlSelf->top__DOT__alu__DOT__data_result)))]),64);
        tracep->fullQData(oldp+24,(((0U == (IData)(vlSelf->top__DOT__rs1))
                                     ? 0ULL : vlSelf->top__DOT__common_reg__DOT__reg_com
                                    [vlSelf->top__DOT__rs1])),64);
        tracep->fullQData(oldp+26,(vlSelf->top__DOT__src2_rs2),64);
        tracep->fullQData(oldp+28,(vlSelf->top__DOT__alu__DOT__data_result),64);
        tracep->fullQData(oldp+30,((0xfffffffffffffffeULL 
                                    & vlSelf->top__DOT__alu__DOT__data_result)),64);
        tracep->fullQData(oldp+32,(vlSelf->top__DOT__src1),64);
        tracep->fullQData(oldp+34,(vlSelf->top__DOT__src2),64);
        tracep->fullQData(oldp+36,(vlSelf->top__DOT__data_rd_in),64);
        tracep->fullBit(oldp+38,(vlSelf->top__DOT__idu__DOT__TYPE_I));
        tracep->fullBit(oldp+39,(vlSelf->top__DOT__idu__DOT__TYPE_U));
        tracep->fullBit(oldp+40,((0x23U == (0x7fU & vlSelf->top__DOT__inst))));
        tracep->fullBit(oldp+41,((0x6fU == (0x7fU & vlSelf->top__DOT__inst))));
        tracep->fullBit(oldp+42,((0x63U == (0x7fU & vlSelf->top__DOT__inst))));
        tracep->fullBit(oldp+43,((0x33U == (0x7fU & vlSelf->top__DOT__inst))));
        tracep->fullQData(oldp+44,((((- (QData)((IData)(
                                                        (vlSelf->top__DOT__inst 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                (vlSelf->top__DOT__inst 
                                                                 >> 0x14U))))),64);
        tracep->fullQData(oldp+46,((((QData)((IData)(
                                                     (- (IData)(
                                                                (vlSelf->top__DOT__inst 
                                                                 >> 0x1fU))))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (0xfffff000U 
                                                                  & vlSelf->top__DOT__inst))))),64);
        tracep->fullQData(oldp+48,((((- (QData)((IData)(
                                                        (vlSelf->top__DOT__inst 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                ((0xfe0U 
                                                                  & (vlSelf->top__DOT__inst 
                                                                     >> 0x14U)) 
                                                                 | (0x1fU 
                                                                    & (vlSelf->top__DOT__inst 
                                                                       >> 7U))))))),64);
        tracep->fullQData(oldp+50,((((- (QData)((IData)(
                                                        (vlSelf->top__DOT__inst 
                                                         >> 0x1fU)))) 
                                     << 0x15U) | (QData)((IData)(
                                                                 ((0x100000U 
                                                                   & (vlSelf->top__DOT__inst 
                                                                      >> 0xbU)) 
                                                                  | ((0xff000U 
                                                                      & vlSelf->top__DOT__inst) 
                                                                     | ((0x800U 
                                                                         & (vlSelf->top__DOT__inst 
                                                                            >> 9U)) 
                                                                        | (0x7feU 
                                                                           & (vlSelf->top__DOT__inst 
                                                                              >> 0x14U))))))))),64);
        tracep->fullQData(oldp+52,((((- (QData)((IData)(
                                                        (vlSelf->top__DOT__inst 
                                                         >> 0x1fU)))) 
                                     << 0xdU) | (QData)((IData)(
                                                                ((0x1000U 
                                                                  & (vlSelf->top__DOT__inst 
                                                                     >> 0x13U)) 
                                                                 | ((0x800U 
                                                                     & (vlSelf->top__DOT__inst 
                                                                        << 4U)) 
                                                                    | ((0x7e0U 
                                                                        & (vlSelf->top__DOT__inst 
                                                                           >> 0x14U)) 
                                                                       | (0x1eU 
                                                                          & (vlSelf->top__DOT__inst 
                                                                             >> 7U))))))))),64);
        tracep->fullCData(oldp+54,((0x7fU & vlSelf->top__DOT__inst)),7);
        tracep->fullCData(oldp+55,((vlSelf->top__DOT__inst 
                                    >> 0x19U)),7);
        tracep->fullCData(oldp+56,((7U & (vlSelf->top__DOT__inst 
                                          >> 0xcU))),3);
        tracep->fullQData(oldp+57,(vlSelf->top__DOT__common_reg__DOT__reg_com[0]),64);
        tracep->fullQData(oldp+59,(vlSelf->top__DOT__common_reg__DOT__reg_com[1]),64);
        tracep->fullQData(oldp+61,(vlSelf->top__DOT__common_reg__DOT__reg_com[2]),64);
        tracep->fullQData(oldp+63,(vlSelf->top__DOT__common_reg__DOT__reg_com[3]),64);
        tracep->fullQData(oldp+65,(vlSelf->top__DOT__common_reg__DOT__reg_com[4]),64);
        tracep->fullQData(oldp+67,(vlSelf->top__DOT__common_reg__DOT__reg_com[5]),64);
        tracep->fullQData(oldp+69,(vlSelf->top__DOT__common_reg__DOT__reg_com[6]),64);
        tracep->fullQData(oldp+71,(vlSelf->top__DOT__common_reg__DOT__reg_com[7]),64);
        tracep->fullQData(oldp+73,(vlSelf->top__DOT__common_reg__DOT__reg_com[8]),64);
        tracep->fullQData(oldp+75,(vlSelf->top__DOT__common_reg__DOT__reg_com[9]),64);
        tracep->fullQData(oldp+77,(vlSelf->top__DOT__common_reg__DOT__reg_com[10]),64);
        tracep->fullQData(oldp+79,(vlSelf->top__DOT__common_reg__DOT__reg_com[11]),64);
        tracep->fullQData(oldp+81,(vlSelf->top__DOT__common_reg__DOT__reg_com[12]),64);
        tracep->fullQData(oldp+83,(vlSelf->top__DOT__common_reg__DOT__reg_com[13]),64);
        tracep->fullQData(oldp+85,(vlSelf->top__DOT__common_reg__DOT__reg_com[14]),64);
        tracep->fullQData(oldp+87,(vlSelf->top__DOT__common_reg__DOT__reg_com[15]),64);
        tracep->fullQData(oldp+89,(vlSelf->top__DOT__common_reg__DOT__reg_com[16]),64);
        tracep->fullQData(oldp+91,(vlSelf->top__DOT__common_reg__DOT__reg_com[17]),64);
        tracep->fullQData(oldp+93,(vlSelf->top__DOT__common_reg__DOT__reg_com[18]),64);
        tracep->fullQData(oldp+95,(vlSelf->top__DOT__common_reg__DOT__reg_com[19]),64);
        tracep->fullQData(oldp+97,(vlSelf->top__DOT__common_reg__DOT__reg_com[20]),64);
        tracep->fullQData(oldp+99,(vlSelf->top__DOT__common_reg__DOT__reg_com[21]),64);
        tracep->fullQData(oldp+101,(vlSelf->top__DOT__common_reg__DOT__reg_com[22]),64);
        tracep->fullQData(oldp+103,(vlSelf->top__DOT__common_reg__DOT__reg_com[23]),64);
        tracep->fullQData(oldp+105,(vlSelf->top__DOT__common_reg__DOT__reg_com[24]),64);
        tracep->fullQData(oldp+107,(vlSelf->top__DOT__common_reg__DOT__reg_com[25]),64);
        tracep->fullQData(oldp+109,(vlSelf->top__DOT__common_reg__DOT__reg_com[26]),64);
        tracep->fullQData(oldp+111,(vlSelf->top__DOT__common_reg__DOT__reg_com[27]),64);
        tracep->fullQData(oldp+113,(vlSelf->top__DOT__common_reg__DOT__reg_com[28]),64);
        tracep->fullQData(oldp+115,(vlSelf->top__DOT__common_reg__DOT__reg_com[29]),64);
        tracep->fullQData(oldp+117,(vlSelf->top__DOT__common_reg__DOT__reg_com[30]),64);
        tracep->fullQData(oldp+119,(vlSelf->top__DOT__common_reg__DOT__reg_com[31]),64);
        tracep->fullQData(oldp+121,(vlSelf->top__DOT__data_ram__DOT__ram[0]),64);
        tracep->fullQData(oldp+123,(vlSelf->top__DOT__data_ram__DOT__ram[1]),64);
        tracep->fullBit(oldp+125,((1U & (IData)(vlSelf->top__DOT__op))));
        tracep->fullBit(oldp+126,((1U & ((IData)(vlSelf->top__DOT__op) 
                                         >> 1U))));
        tracep->fullBit(oldp+127,((1U & ((IData)(vlSelf->top__DOT__op) 
                                         >> 2U))));
        tracep->fullBit(oldp+128,((1U & ((IData)(vlSelf->top__DOT__op) 
                                         >> 3U))));
        tracep->fullBit(oldp+129,((1U & ((IData)(vlSelf->top__DOT__op) 
                                         >> 4U))));
        tracep->fullBit(oldp+130,((1U & ((IData)(vlSelf->top__DOT__op) 
                                         >> 5U))));
        tracep->fullBit(oldp+131,((1U & ((IData)(vlSelf->top__DOT__op) 
                                         >> 6U))));
        tracep->fullBit(oldp+132,((1U & ((IData)(vlSelf->top__DOT__op) 
                                         >> 7U))));
        tracep->fullBit(oldp+133,((1U & ((IData)(vlSelf->top__DOT__op) 
                                         >> 8U))));
        tracep->fullBit(oldp+134,((1U & ((IData)(vlSelf->top__DOT__op) 
                                         >> 9U))));
        tracep->fullBit(oldp+135,((1U & ((IData)(vlSelf->top__DOT__op) 
                                         >> 0xaU))));
        tracep->fullBit(oldp+136,((1U & ((IData)(vlSelf->top__DOT__op) 
                                         >> 0xbU))));
        tracep->fullQData(oldp+137,((QData)((IData)(
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
        tracep->fullQData(oldp+139,((QData)((IData)(
                                                    (1U 
                                                     & (~ 
                                                        (1U 
                                                         & __Vtemp22[2U])))))),64);
        tracep->fullQData(oldp+141,((vlSelf->top__DOT__src1 
                                     & vlSelf->top__DOT__src2)),64);
        tracep->fullQData(oldp+143,((vlSelf->top__DOT__src1 
                                     | vlSelf->top__DOT__src2)),64);
        tracep->fullQData(oldp+145,((vlSelf->top__DOT__src1 
                                     ^ vlSelf->top__DOT__src2)),64);
        tracep->fullQData(oldp+147,((vlSelf->top__DOT__src1 
                                     << (0x3fU & (IData)(vlSelf->top__DOT__src2)))),64);
        tracep->fullQData(oldp+149,((vlSelf->top__DOT__src1 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__src2)))),64);
        tracep->fullQData(oldp+151,((vlSelf->top__DOT__src1 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__src2)))),64);
        tracep->fullQData(oldp+153,((4ULL + vlSelf->top__DOT__src1)),64);
        tracep->fullQData(oldp+155,(vlSelf->top__DOT__alu__DOT__data_b),64);
        tracep->fullBit(oldp+157,(vlSelf->top__DOT__alu__DOT__data_cin));
        VL_EXTEND_WQ(65,64, __Vtemp25, vlSelf->top__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp26, vlSelf->top__DOT__alu__DOT__data_b);
        VL_ADD_W(3, __Vtemp27, __Vtemp25, __Vtemp26);
        VL_EXTEND_WI(65,1, __Vtemp28, (IData)(vlSelf->top__DOT__alu__DOT__data_cin));
        VL_ADD_W(3, __Vtemp29, __Vtemp27, __Vtemp28);
        tracep->fullBit(oldp+158,((1U & __Vtemp29[2U])));
        tracep->fullBit(oldp+159,(vlSelf->clk));
        tracep->fullBit(oldp+160,(vlSelf->rst));
        tracep->fullQData(oldp+161,(vlSelf->data_rd),64);
    }
}
