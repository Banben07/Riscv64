// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep);

void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vtop___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceChgSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp32;
    VlWide<3>/*95:0*/ __Vtemp33;
    VlWide<3>/*95:0*/ __Vtemp34;
    VlWide<3>/*95:0*/ __Vtemp35;
    VlWide<3>/*95:0*/ __Vtemp36;
    VlWide<3>/*95:0*/ __Vtemp39;
    VlWide<3>/*95:0*/ __Vtemp40;
    VlWide<3>/*95:0*/ __Vtemp41;
    VlWide<3>/*95:0*/ __Vtemp42;
    VlWide<3>/*95:0*/ __Vtemp43;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(((IData)((0x2023U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__inst)))
                                     ? 1U : 0U)));
            tracep->chgBit(oldp+1,((((((0x33U == (0x7fU 
                                                  & vlSelf->top__DOT__inst)) 
                                       | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_I)) 
                                      | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_U)) 
                                     | (0x6fU == (0x7fU 
                                                  & vlSelf->top__DOT__inst)))
                                     ? 1U : 0U)));
            tracep->chgCData(oldp+2,((((0x6fU == (0x7fU 
                                                  & vlSelf->top__DOT__inst)) 
                                       | (0x17U == 
                                          (0x7fU & vlSelf->top__DOT__inst)))
                                       ? 1U : 2U)),2);
            tracep->chgCData(oldp+3,((((((0x6fU == 
                                          (0x7fU & vlSelf->top__DOT__inst)) 
                                         | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_U)) 
                                        | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_I)) 
                                       | (0x23U == 
                                          (0x7fU & vlSelf->top__DOT__inst)))
                                       ? 1U : 2U)),2);
            tracep->chgCData(oldp+4,(((IData)((0x2003U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__inst)))
                                       ? 2U : 1U)),2);
            tracep->chgCData(oldp+5,(vlSelf->top__DOT__pc_sel),3);
            tracep->chgCData(oldp+6,(vlSelf->top__DOT__rs1),5);
            tracep->chgCData(oldp+7,((0x1fU & (vlSelf->top__DOT__inst 
                                               >> 0x14U))),5);
            tracep->chgCData(oldp+8,((0x1fU & (vlSelf->top__DOT__inst 
                                               >> 7U))),5);
            tracep->chgSData(oldp+9,(vlSelf->top__DOT__op),12);
            tracep->chgSData(oldp+10,((0xffffU & (IData)(
                                                         ((vlSelf->top__DOT__cpu_pc 
                                                           - 0x80000000ULL) 
                                                          >> 2U)))),16);
            tracep->chgIData(oldp+11,(vlSelf->top__DOT__inst),32);
            tracep->chgIData(oldp+12,((IData)(vlSelf->top__DOT__alu__DOT__data_result)),32);
            tracep->chgQData(oldp+13,(((IData)(vlSelf->top__DOT__idu__DOT__TYPE_I)
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
            tracep->chgQData(oldp+15,(vlSelf->top__DOT__cpu_pc),64);
            tracep->chgQData(oldp+17,(((1U == (IData)(vlSelf->top__DOT__pc_sel))
                                        ? (4ULL + vlSelf->top__DOT__cpu_pc)
                                        : ((2U == (IData)(vlSelf->top__DOT__pc_sel))
                                            ? vlSelf->top__DOT__alu__DOT__data_result
                                            : (0xfffffffffffffffeULL 
                                               & vlSelf->top__DOT__alu__DOT__data_result)))),64);
            tracep->chgQData(oldp+19,((4ULL + vlSelf->top__DOT__cpu_pc)),64);
            tracep->chgQData(oldp+21,(vlSelf->top__DOT__data_ram__DOT__ram
                                      [(1U & ((IData)(1U) 
                                              + (IData)(vlSelf->top__DOT__alu__DOT__data_result)))]),64);
            tracep->chgQData(oldp+23,(((0U == (IData)(vlSelf->top__DOT__rs1))
                                        ? 0ULL : vlSelf->top__DOT__common_reg__DOT__reg_com
                                       [vlSelf->top__DOT__rs1])),64);
            tracep->chgQData(oldp+25,(vlSelf->top__DOT__src2_rs2),64);
            tracep->chgQData(oldp+27,(vlSelf->top__DOT__alu__DOT__data_result),64);
            tracep->chgQData(oldp+29,((0xfffffffffffffffeULL 
                                       & vlSelf->top__DOT__alu__DOT__data_result)),64);
            tracep->chgQData(oldp+31,(vlSelf->top__DOT__src1),64);
            tracep->chgQData(oldp+33,(vlSelf->top__DOT__src2),64);
            tracep->chgQData(oldp+35,(vlSelf->top__DOT__data_rd_in),64);
            tracep->chgBit(oldp+37,(vlSelf->top__DOT__idu__DOT__TYPE_I));
            tracep->chgBit(oldp+38,(vlSelf->top__DOT__idu__DOT__TYPE_U));
            tracep->chgBit(oldp+39,((0x23U == (0x7fU 
                                               & vlSelf->top__DOT__inst))));
            tracep->chgBit(oldp+40,((0x6fU == (0x7fU 
                                               & vlSelf->top__DOT__inst))));
            tracep->chgBit(oldp+41,((0x63U == (0x7fU 
                                               & vlSelf->top__DOT__inst))));
            tracep->chgBit(oldp+42,((0x33U == (0x7fU 
                                               & vlSelf->top__DOT__inst))));
            tracep->chgQData(oldp+43,((((- (QData)((IData)(
                                                           (vlSelf->top__DOT__inst 
                                                            >> 0x1fU)))) 
                                        << 0xcU) | (QData)((IData)(
                                                                   (vlSelf->top__DOT__inst 
                                                                    >> 0x14U))))),64);
            tracep->chgQData(oldp+45,((((QData)((IData)(
                                                        (- (IData)(
                                                                   (vlSelf->top__DOT__inst 
                                                                    >> 0x1fU))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (0xfffff000U 
                                                                     & vlSelf->top__DOT__inst))))),64);
            tracep->chgQData(oldp+47,((((- (QData)((IData)(
                                                           (vlSelf->top__DOT__inst 
                                                            >> 0x1fU)))) 
                                        << 0xcU) | (QData)((IData)(
                                                                   ((0xfe0U 
                                                                     & (vlSelf->top__DOT__inst 
                                                                        >> 0x14U)) 
                                                                    | (0x1fU 
                                                                       & (vlSelf->top__DOT__inst 
                                                                          >> 7U))))))),64);
            tracep->chgQData(oldp+49,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+51,((((- (QData)((IData)(
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
            tracep->chgCData(oldp+53,((0x7fU & vlSelf->top__DOT__inst)),7);
            tracep->chgCData(oldp+54,((vlSelf->top__DOT__inst 
                                       >> 0x19U)),7);
            tracep->chgCData(oldp+55,((7U & (vlSelf->top__DOT__inst 
                                             >> 0xcU))),3);
            tracep->chgQData(oldp+56,(vlSelf->top__DOT__common_reg__DOT__reg_com[0]),64);
            tracep->chgQData(oldp+58,(vlSelf->top__DOT__common_reg__DOT__reg_com[1]),64);
            tracep->chgQData(oldp+60,(vlSelf->top__DOT__common_reg__DOT__reg_com[2]),64);
            tracep->chgQData(oldp+62,(vlSelf->top__DOT__common_reg__DOT__reg_com[3]),64);
            tracep->chgQData(oldp+64,(vlSelf->top__DOT__common_reg__DOT__reg_com[4]),64);
            tracep->chgQData(oldp+66,(vlSelf->top__DOT__common_reg__DOT__reg_com[5]),64);
            tracep->chgQData(oldp+68,(vlSelf->top__DOT__common_reg__DOT__reg_com[6]),64);
            tracep->chgQData(oldp+70,(vlSelf->top__DOT__common_reg__DOT__reg_com[7]),64);
            tracep->chgQData(oldp+72,(vlSelf->top__DOT__common_reg__DOT__reg_com[8]),64);
            tracep->chgQData(oldp+74,(vlSelf->top__DOT__common_reg__DOT__reg_com[9]),64);
            tracep->chgQData(oldp+76,(vlSelf->top__DOT__common_reg__DOT__reg_com[10]),64);
            tracep->chgQData(oldp+78,(vlSelf->top__DOT__common_reg__DOT__reg_com[11]),64);
            tracep->chgQData(oldp+80,(vlSelf->top__DOT__common_reg__DOT__reg_com[12]),64);
            tracep->chgQData(oldp+82,(vlSelf->top__DOT__common_reg__DOT__reg_com[13]),64);
            tracep->chgQData(oldp+84,(vlSelf->top__DOT__common_reg__DOT__reg_com[14]),64);
            tracep->chgQData(oldp+86,(vlSelf->top__DOT__common_reg__DOT__reg_com[15]),64);
            tracep->chgQData(oldp+88,(vlSelf->top__DOT__common_reg__DOT__reg_com[16]),64);
            tracep->chgQData(oldp+90,(vlSelf->top__DOT__common_reg__DOT__reg_com[17]),64);
            tracep->chgQData(oldp+92,(vlSelf->top__DOT__common_reg__DOT__reg_com[18]),64);
            tracep->chgQData(oldp+94,(vlSelf->top__DOT__common_reg__DOT__reg_com[19]),64);
            tracep->chgQData(oldp+96,(vlSelf->top__DOT__common_reg__DOT__reg_com[20]),64);
            tracep->chgQData(oldp+98,(vlSelf->top__DOT__common_reg__DOT__reg_com[21]),64);
            tracep->chgQData(oldp+100,(vlSelf->top__DOT__common_reg__DOT__reg_com[22]),64);
            tracep->chgQData(oldp+102,(vlSelf->top__DOT__common_reg__DOT__reg_com[23]),64);
            tracep->chgQData(oldp+104,(vlSelf->top__DOT__common_reg__DOT__reg_com[24]),64);
            tracep->chgQData(oldp+106,(vlSelf->top__DOT__common_reg__DOT__reg_com[25]),64);
            tracep->chgQData(oldp+108,(vlSelf->top__DOT__common_reg__DOT__reg_com[26]),64);
            tracep->chgQData(oldp+110,(vlSelf->top__DOT__common_reg__DOT__reg_com[27]),64);
            tracep->chgQData(oldp+112,(vlSelf->top__DOT__common_reg__DOT__reg_com[28]),64);
            tracep->chgQData(oldp+114,(vlSelf->top__DOT__common_reg__DOT__reg_com[29]),64);
            tracep->chgQData(oldp+116,(vlSelf->top__DOT__common_reg__DOT__reg_com[30]),64);
            tracep->chgQData(oldp+118,(vlSelf->top__DOT__common_reg__DOT__reg_com[31]),64);
            tracep->chgQData(oldp+120,(vlSelf->top__DOT__data_ram__DOT__ram[0]),64);
            tracep->chgQData(oldp+122,(vlSelf->top__DOT__data_ram__DOT__ram[1]),64);
            tracep->chgBit(oldp+124,((1U & (IData)(vlSelf->top__DOT__op))));
            tracep->chgBit(oldp+125,((1U & ((IData)(vlSelf->top__DOT__op) 
                                            >> 1U))));
            tracep->chgBit(oldp+126,((1U & ((IData)(vlSelf->top__DOT__op) 
                                            >> 2U))));
            tracep->chgBit(oldp+127,((1U & ((IData)(vlSelf->top__DOT__op) 
                                            >> 3U))));
            tracep->chgBit(oldp+128,((1U & ((IData)(vlSelf->top__DOT__op) 
                                            >> 4U))));
            tracep->chgBit(oldp+129,((1U & ((IData)(vlSelf->top__DOT__op) 
                                            >> 5U))));
            tracep->chgBit(oldp+130,((1U & ((IData)(vlSelf->top__DOT__op) 
                                            >> 6U))));
            tracep->chgBit(oldp+131,((1U & ((IData)(vlSelf->top__DOT__op) 
                                            >> 7U))));
            tracep->chgBit(oldp+132,((1U & ((IData)(vlSelf->top__DOT__op) 
                                            >> 8U))));
            tracep->chgBit(oldp+133,((1U & ((IData)(vlSelf->top__DOT__op) 
                                            >> 9U))));
            tracep->chgBit(oldp+134,((1U & ((IData)(vlSelf->top__DOT__op) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+135,((1U & ((IData)(vlSelf->top__DOT__op) 
                                            >> 0xbU))));
            tracep->chgQData(oldp+136,((QData)((IData)(
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
            VL_EXTEND_WQ(65,64, __Vtemp32, vlSelf->top__DOT__src1);
            VL_EXTEND_WQ(65,64, __Vtemp33, vlSelf->top__DOT__alu__DOT__data_b);
            VL_ADD_W(3, __Vtemp34, __Vtemp32, __Vtemp33);
            VL_EXTEND_WI(65,1, __Vtemp35, (IData)(vlSelf->top__DOT__alu__DOT__data_cin));
            VL_ADD_W(3, __Vtemp36, __Vtemp34, __Vtemp35);
            tracep->chgQData(oldp+138,((QData)((IData)(
                                                       (1U 
                                                        & (~ 
                                                           (1U 
                                                            & __Vtemp36[2U])))))),64);
            tracep->chgQData(oldp+140,((vlSelf->top__DOT__src1 
                                        & vlSelf->top__DOT__src2)),64);
            tracep->chgQData(oldp+142,((vlSelf->top__DOT__src1 
                                        | vlSelf->top__DOT__src2)),64);
            tracep->chgQData(oldp+144,((vlSelf->top__DOT__src1 
                                        ^ vlSelf->top__DOT__src2)),64);
            tracep->chgQData(oldp+146,((vlSelf->top__DOT__src1 
                                        << (0x3fU & (IData)(vlSelf->top__DOT__src2)))),64);
            tracep->chgQData(oldp+148,((vlSelf->top__DOT__src1 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__src2)))),64);
            tracep->chgQData(oldp+150,((vlSelf->top__DOT__src1 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__src2)))),64);
            tracep->chgQData(oldp+152,((4ULL + vlSelf->top__DOT__src1)),64);
            tracep->chgQData(oldp+154,(vlSelf->top__DOT__alu__DOT__data_b),64);
            tracep->chgBit(oldp+156,(vlSelf->top__DOT__alu__DOT__data_cin));
            VL_EXTEND_WQ(65,64, __Vtemp39, vlSelf->top__DOT__src1);
            VL_EXTEND_WQ(65,64, __Vtemp40, vlSelf->top__DOT__alu__DOT__data_b);
            VL_ADD_W(3, __Vtemp41, __Vtemp39, __Vtemp40);
            VL_EXTEND_WI(65,1, __Vtemp42, (IData)(vlSelf->top__DOT__alu__DOT__data_cin));
            VL_ADD_W(3, __Vtemp43, __Vtemp41, __Vtemp42);
            tracep->chgBit(oldp+157,((1U & __Vtemp43[2U])));
        }
        tracep->chgBit(oldp+158,(vlSelf->clk));
        tracep->chgBit(oldp+159,(vlSelf->rst));
        tracep->chgQData(oldp+160,(vlSelf->data_rd),64);
    }
}

void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
