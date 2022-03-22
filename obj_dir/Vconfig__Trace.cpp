// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vconfig__Syms.h"


void Vconfig___024root__traceChgSub0(Vconfig___024root* vlSelf, VerilatedVcd* tracep);

void Vconfig___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vconfig___024root* const __restrict vlSelf = static_cast<Vconfig___024root*>(voidSelf);
    Vconfig__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vconfig___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vconfig___024root__traceChgSub0(Vconfig___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfig__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp152;
    VlWide<3>/*95:0*/ __Vtemp153;
    VlWide<3>/*95:0*/ __Vtemp154;
    VlWide<3>/*95:0*/ __Vtemp155;
    VlWide<3>/*95:0*/ __Vtemp156;
    VlWide<3>/*95:0*/ __Vtemp159;
    VlWide<3>/*95:0*/ __Vtemp160;
    VlWide<3>/*95:0*/ __Vtemp161;
    VlWide<3>/*95:0*/ __Vtemp162;
    VlWide<3>/*95:0*/ __Vtemp163;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgQData(oldp+0,(vlSelf->top__DOT__cpu_pc),64);
            tracep->chgQData(oldp+2,(vlSelf->top__DOT__cpu_dnpc),64);
            tracep->chgCData(oldp+4,((0xffU & (IData)(vlSelf->top__DOT__inf__DOT__count))),8);
            tracep->chgSData(oldp+5,(vlSelf->top__DOT__op),12);
            tracep->chgCData(oldp+6,((0x1fU & (vlSelf->top__DOT__inst 
                                               >> 0xfU))),5);
            tracep->chgCData(oldp+7,((0x1fU & (vlSelf->top__DOT__inst 
                                               >> 0x14U))),5);
            tracep->chgCData(oldp+8,((0x1fU & (vlSelf->top__DOT__inst 
                                               >> 7U))),5);
            tracep->chgIData(oldp+9,(vlSelf->top__DOT__inst),32);
            tracep->chgQData(oldp+10,(((IData)(vlSelf->top__DOT__idu__DOT__TYPE_I)
                                        ? (((- (QData)((IData)(
                                                               (vlSelf->top__DOT__inst 
                                                                >> 0x1fU)))) 
                                            << 0xcU) 
                                           | (QData)((IData)(
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
                                                == 
                                                (0x7fU 
                                                 & vlSelf->top__DOT__inst))
                                                ? (
                                                   ((- (QData)((IData)(
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
                                                : (
                                                   (0x6fU 
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
            tracep->chgQData(oldp+12,(((IData)(vlSelf->top__DOT__data_ren)
                                        ? vlSelf->top__DOT__data_ram__DOT__ram
                                       [(1U & ((IData)(1U) 
                                               + (IData)(vlSelf->top__DOT__data_ren)))]
                                        : 0ULL)),64);
            tracep->chgQData(oldp+14,(((0U == (0x1fU 
                                               & (vlSelf->top__DOT__inst 
                                                  >> 0xfU)))
                                        ? 0ULL : vlSelf->top__DOT__common_reg__DOT__ram
                                       [(0x1fU & (vlSelf->top__DOT__inst 
                                                  >> 0xfU))])),64);
            tracep->chgQData(oldp+16,(vlSelf->top__DOT__src2_rs2),64);
            tracep->chgQData(oldp+18,(vlSelf->top__DOT__alu__DOT__data_result),64);
            tracep->chgQData(oldp+20,(vlSelf->top__DOT__src1),64);
            tracep->chgQData(oldp+22,(vlSelf->top__DOT__src2),64);
            tracep->chgQData(oldp+24,(vlSelf->top__DOT__data_rd_in),64);
            tracep->chgIData(oldp+26,((IData)(vlSelf->top__DOT__alu__DOT__data_result)),32);
            tracep->chgIData(oldp+27,(vlSelf->top__DOT__check),32);
            tracep->chgCData(oldp+28,(((0x6fU == (0x7fU 
                                                  & vlSelf->top__DOT__inst))
                                        ? 1U : 2U)),2);
            tracep->chgCData(oldp+29,(vlSelf->top__DOT__src2_sel),2);
            tracep->chgCData(oldp+30,(((0x6fU == (0x7fU 
                                                  & vlSelf->top__DOT__inst))
                                        ? 2U : 1U)),2);
            tracep->chgCData(oldp+31,(vlSelf->top__DOT__load_sel),2);
            tracep->chgBit(oldp+32,(((IData)((0x2023U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__inst)))
                                      ? 1U : 0U)));
            tracep->chgBit(oldp+33,(vlSelf->top__DOT__data_ren));
            tracep->chgBit(oldp+34,((((((0x33U == (0x7fU 
                                                   & vlSelf->top__DOT__inst)) 
                                        | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_I)) 
                                       | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_U)) 
                                      | (0x6fU == (0x7fU 
                                                   & vlSelf->top__DOT__inst)))
                                      ? 1U : 0U)));
            tracep->chgWData(oldp+35,(vlSelf->top__DOT____Vcellinp__pc_sel_choice____pinNumber3),132);
            tracep->chgWData(oldp+40,(vlSelf->top__DOT__pc_sel_choice__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+43,(vlSelf->top__DOT__pc_sel_choice__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgCData(oldp+46,(vlSelf->top__DOT__pc_sel_choice__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+47,(vlSelf->top__DOT__pc_sel_choice__DOT__i0__DOT__key_list[1]),2);
            tracep->chgQData(oldp+48,(vlSelf->top__DOT__pc_sel_choice__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+50,(vlSelf->top__DOT__pc_sel_choice__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+52,(vlSelf->top__DOT__pc_sel_choice__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+54,(vlSelf->top__DOT__pc_sel_choice__DOT__i0__DOT__hit));
            tracep->chgQData(oldp+55,(vlSelf->top__DOT__inf__DOT__count),64);
            tracep->chgBit(oldp+57,(vlSelf->top__DOT__idu__DOT__TYPE_I));
            tracep->chgBit(oldp+58,(vlSelf->top__DOT__idu__DOT__TYPE_U));
            tracep->chgBit(oldp+59,((0x23U == (0x7fU 
                                               & vlSelf->top__DOT__inst))));
            tracep->chgBit(oldp+60,((0x6fU == (0x7fU 
                                               & vlSelf->top__DOT__inst))));
            tracep->chgBit(oldp+61,((0x63U == (0x7fU 
                                               & vlSelf->top__DOT__inst))));
            tracep->chgBit(oldp+62,((0x33U == (0x7fU 
                                               & vlSelf->top__DOT__inst))));
            tracep->chgQData(oldp+63,((((- (QData)((IData)(
                                                           (vlSelf->top__DOT__inst 
                                                            >> 0x1fU)))) 
                                        << 0xcU) | (QData)((IData)(
                                                                   (vlSelf->top__DOT__inst 
                                                                    >> 0x14U))))),64);
            tracep->chgQData(oldp+65,((((QData)((IData)(
                                                        (- (IData)(
                                                                   (vlSelf->top__DOT__inst 
                                                                    >> 0x1fU))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (0xfffff000U 
                                                                     & vlSelf->top__DOT__inst))))),64);
            tracep->chgQData(oldp+67,((((- (QData)((IData)(
                                                           (vlSelf->top__DOT__inst 
                                                            >> 0x1fU)))) 
                                        << 0xcU) | (QData)((IData)(
                                                                   ((0xfe0U 
                                                                     & (vlSelf->top__DOT__inst 
                                                                        >> 0x14U)) 
                                                                    | (0x1fU 
                                                                       & (vlSelf->top__DOT__inst 
                                                                          >> 7U))))))),64);
            tracep->chgQData(oldp+69,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+71,((((- (QData)((IData)(
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
            tracep->chgCData(oldp+73,((0x7fU & vlSelf->top__DOT__inst)),7);
            tracep->chgCData(oldp+74,((vlSelf->top__DOT__inst 
                                       >> 0x19U)),7);
            tracep->chgCData(oldp+75,((7U & (vlSelf->top__DOT__inst 
                                             >> 0xcU))),3);
            tracep->chgQData(oldp+76,(vlSelf->top__DOT__common_reg__DOT__ram[0]),64);
            tracep->chgQData(oldp+78,(vlSelf->top__DOT__common_reg__DOT__ram[1]),64);
            tracep->chgQData(oldp+80,(vlSelf->top__DOT__common_reg__DOT__ram[2]),64);
            tracep->chgQData(oldp+82,(vlSelf->top__DOT__common_reg__DOT__ram[3]),64);
            tracep->chgQData(oldp+84,(vlSelf->top__DOT__common_reg__DOT__ram[4]),64);
            tracep->chgQData(oldp+86,(vlSelf->top__DOT__common_reg__DOT__ram[5]),64);
            tracep->chgQData(oldp+88,(vlSelf->top__DOT__common_reg__DOT__ram[6]),64);
            tracep->chgQData(oldp+90,(vlSelf->top__DOT__common_reg__DOT__ram[7]),64);
            tracep->chgQData(oldp+92,(vlSelf->top__DOT__common_reg__DOT__ram[8]),64);
            tracep->chgQData(oldp+94,(vlSelf->top__DOT__common_reg__DOT__ram[9]),64);
            tracep->chgQData(oldp+96,(vlSelf->top__DOT__common_reg__DOT__ram[10]),64);
            tracep->chgQData(oldp+98,(vlSelf->top__DOT__common_reg__DOT__ram[11]),64);
            tracep->chgQData(oldp+100,(vlSelf->top__DOT__common_reg__DOT__ram[12]),64);
            tracep->chgQData(oldp+102,(vlSelf->top__DOT__common_reg__DOT__ram[13]),64);
            tracep->chgQData(oldp+104,(vlSelf->top__DOT__common_reg__DOT__ram[14]),64);
            tracep->chgQData(oldp+106,(vlSelf->top__DOT__common_reg__DOT__ram[15]),64);
            tracep->chgQData(oldp+108,(vlSelf->top__DOT__common_reg__DOT__ram[16]),64);
            tracep->chgQData(oldp+110,(vlSelf->top__DOT__common_reg__DOT__ram[17]),64);
            tracep->chgQData(oldp+112,(vlSelf->top__DOT__common_reg__DOT__ram[18]),64);
            tracep->chgQData(oldp+114,(vlSelf->top__DOT__common_reg__DOT__ram[19]),64);
            tracep->chgQData(oldp+116,(vlSelf->top__DOT__common_reg__DOT__ram[20]),64);
            tracep->chgQData(oldp+118,(vlSelf->top__DOT__common_reg__DOT__ram[21]),64);
            tracep->chgQData(oldp+120,(vlSelf->top__DOT__common_reg__DOT__ram[22]),64);
            tracep->chgQData(oldp+122,(vlSelf->top__DOT__common_reg__DOT__ram[23]),64);
            tracep->chgQData(oldp+124,(vlSelf->top__DOT__common_reg__DOT__ram[24]),64);
            tracep->chgQData(oldp+126,(vlSelf->top__DOT__common_reg__DOT__ram[25]),64);
            tracep->chgQData(oldp+128,(vlSelf->top__DOT__common_reg__DOT__ram[26]),64);
            tracep->chgQData(oldp+130,(vlSelf->top__DOT__common_reg__DOT__ram[27]),64);
            tracep->chgQData(oldp+132,(vlSelf->top__DOT__common_reg__DOT__ram[28]),64);
            tracep->chgQData(oldp+134,(vlSelf->top__DOT__common_reg__DOT__ram[29]),64);
            tracep->chgQData(oldp+136,(vlSelf->top__DOT__common_reg__DOT__ram[30]),64);
            tracep->chgQData(oldp+138,(vlSelf->top__DOT__common_reg__DOT__ram[31]),64);
            tracep->chgQData(oldp+140,(vlSelf->top__DOT__data_ram__DOT__ram[0]),64);
            tracep->chgQData(oldp+142,(vlSelf->top__DOT__data_ram__DOT__ram[1]),64);
            tracep->chgWData(oldp+144,(vlSelf->top__DOT____Vcellinp__src1_sel_choice____pinNumber3),132);
            tracep->chgWData(oldp+149,(vlSelf->top__DOT__src1_sel_choice__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+152,(vlSelf->top__DOT__src1_sel_choice__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgCData(oldp+155,(vlSelf->top__DOT__src1_sel_choice__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+156,(vlSelf->top__DOT__src1_sel_choice__DOT__i0__DOT__key_list[1]),2);
            tracep->chgQData(oldp+157,(vlSelf->top__DOT__src1_sel_choice__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+159,(vlSelf->top__DOT__src1_sel_choice__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+161,(vlSelf->top__DOT__src1_sel_choice__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+163,(vlSelf->top__DOT__src1_sel_choice__DOT__i0__DOT__hit));
            tracep->chgWData(oldp+164,(vlSelf->top__DOT____Vcellinp__src2_sel_choice____pinNumber3),132);
            tracep->chgWData(oldp+169,(vlSelf->top__DOT__src2_sel_choice__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+172,(vlSelf->top__DOT__src2_sel_choice__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgCData(oldp+175,(vlSelf->top__DOT__src2_sel_choice__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+176,(vlSelf->top__DOT__src2_sel_choice__DOT__i0__DOT__key_list[1]),2);
            tracep->chgQData(oldp+177,(vlSelf->top__DOT__src2_sel_choice__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+179,(vlSelf->top__DOT__src2_sel_choice__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+181,(vlSelf->top__DOT__src2_sel_choice__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+183,(vlSelf->top__DOT__src2_sel_choice__DOT__i0__DOT__hit));
            tracep->chgBit(oldp+184,((1U & (IData)(vlSelf->top__DOT__op))));
            tracep->chgBit(oldp+185,((1U & ((IData)(vlSelf->top__DOT__op) 
                                            >> 1U))));
            tracep->chgBit(oldp+186,((1U & ((IData)(vlSelf->top__DOT__op) 
                                            >> 2U))));
            tracep->chgBit(oldp+187,((1U & ((IData)(vlSelf->top__DOT__op) 
                                            >> 3U))));
            tracep->chgBit(oldp+188,((1U & ((IData)(vlSelf->top__DOT__op) 
                                            >> 4U))));
            tracep->chgBit(oldp+189,((1U & ((IData)(vlSelf->top__DOT__op) 
                                            >> 5U))));
            tracep->chgBit(oldp+190,((1U & ((IData)(vlSelf->top__DOT__op) 
                                            >> 6U))));
            tracep->chgBit(oldp+191,((1U & ((IData)(vlSelf->top__DOT__op) 
                                            >> 7U))));
            tracep->chgBit(oldp+192,((1U & ((IData)(vlSelf->top__DOT__op) 
                                            >> 8U))));
            tracep->chgBit(oldp+193,((1U & ((IData)(vlSelf->top__DOT__op) 
                                            >> 9U))));
            tracep->chgBit(oldp+194,((1U & ((IData)(vlSelf->top__DOT__op) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+195,((1U & ((IData)(vlSelf->top__DOT__op) 
                                            >> 0xbU))));
            tracep->chgQData(oldp+196,((QData)((IData)(
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
            VL_EXTEND_WQ(65,64, __Vtemp152, vlSelf->top__DOT__src1);
            VL_EXTEND_WQ(65,64, __Vtemp153, vlSelf->top__DOT__alu__DOT__data_b);
            VL_ADD_W(3, __Vtemp154, __Vtemp152, __Vtemp153);
            VL_EXTEND_WI(65,1, __Vtemp155, (IData)(vlSelf->top__DOT__alu__DOT__data_cin));
            VL_ADD_W(3, __Vtemp156, __Vtemp154, __Vtemp155);
            tracep->chgQData(oldp+198,((QData)((IData)(
                                                       (1U 
                                                        & (~ 
                                                           (1U 
                                                            & __Vtemp156[2U])))))),64);
            tracep->chgQData(oldp+200,((vlSelf->top__DOT__src1 
                                        & vlSelf->top__DOT__src2)),64);
            tracep->chgQData(oldp+202,((vlSelf->top__DOT__src1 
                                        | vlSelf->top__DOT__src2)),64);
            tracep->chgQData(oldp+204,((vlSelf->top__DOT__src1 
                                        ^ vlSelf->top__DOT__src2)),64);
            tracep->chgQData(oldp+206,((vlSelf->top__DOT__src1 
                                        << (0x3fU & (IData)(vlSelf->top__DOT__src2)))),64);
            tracep->chgQData(oldp+208,((vlSelf->top__DOT__src1 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__src2)))),64);
            tracep->chgQData(oldp+210,((vlSelf->top__DOT__src1 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__src2)))),64);
            tracep->chgQData(oldp+212,((4ULL + vlSelf->top__DOT__src1)),64);
            tracep->chgQData(oldp+214,(vlSelf->top__DOT__alu__DOT__data_b),64);
            tracep->chgBit(oldp+216,(vlSelf->top__DOT__alu__DOT__data_cin));
            VL_EXTEND_WQ(65,64, __Vtemp159, vlSelf->top__DOT__src1);
            VL_EXTEND_WQ(65,64, __Vtemp160, vlSelf->top__DOT__alu__DOT__data_b);
            VL_ADD_W(3, __Vtemp161, __Vtemp159, __Vtemp160);
            VL_EXTEND_WI(65,1, __Vtemp162, (IData)(vlSelf->top__DOT__alu__DOT__data_cin));
            VL_ADD_W(3, __Vtemp163, __Vtemp161, __Vtemp162);
            tracep->chgBit(oldp+217,((1U & __Vtemp163[2U])));
            tracep->chgWData(oldp+218,(vlSelf->top__DOT____Vcellinp__data_rd_choice____pinNumber3),132);
            tracep->chgWData(oldp+223,(vlSelf->top__DOT__data_rd_choice__DOT__i0__DOT__pair_list[0]),66);
            tracep->chgWData(oldp+226,(vlSelf->top__DOT__data_rd_choice__DOT__i0__DOT__pair_list[1]),66);
            tracep->chgCData(oldp+229,(vlSelf->top__DOT__data_rd_choice__DOT__i0__DOT__key_list[0]),2);
            tracep->chgCData(oldp+230,(vlSelf->top__DOT__data_rd_choice__DOT__i0__DOT__key_list[1]),2);
            tracep->chgQData(oldp+231,(vlSelf->top__DOT__data_rd_choice__DOT__i0__DOT__data_list[0]),64);
            tracep->chgQData(oldp+233,(vlSelf->top__DOT__data_rd_choice__DOT__i0__DOT__data_list[1]),64);
            tracep->chgQData(oldp+235,(vlSelf->top__DOT__data_rd_choice__DOT__i0__DOT__lut_out),64);
            tracep->chgBit(oldp+237,(vlSelf->top__DOT__data_rd_choice__DOT__i0__DOT__hit));
        }
        tracep->chgBit(oldp+238,(vlSelf->clk));
        tracep->chgBit(oldp+239,(vlSelf->rst));
        tracep->chgQData(oldp+240,(vlSelf->data_rd),64);
    }
}

void Vconfig___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vconfig___024root* const __restrict vlSelf = static_cast<Vconfig___024root*>(voidSelf);
    Vconfig__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
