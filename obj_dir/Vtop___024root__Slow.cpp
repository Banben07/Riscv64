// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========


void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf);

Vtop___024root::Vtop___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vtop___024root___ctor_var_reset(this);
}

void Vtop___024root::__Vconfigure(Vtop__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vtop___024root::~Vtop___024root() {
}

extern const VlWide<13>/*415:0*/ Vtop__ConstPool__CONST_100c5227_0;
void Vtop___024root____Vdpiimwrap_top__DOT__common_reg__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);
void Vtop___024root____Vdpiimwrap_top__DOT__data_ram__DOT__set_ram_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 2> &a);

void Vtop___024root___initial__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__1\n"); );
    // Body
    VL_READMEM_N(true, 32, 65536, 0, VL_CVT_PACK_STR_NW(13, Vtop__ConstPool__CONST_100c5227_0)
                 ,  &(vlSelf->top__DOT__inst_ram__DOT__rom)
                 , 0, ~0ULL);
    Vtop___024root____Vdpiimwrap_top__DOT__common_reg__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->top__DOT__common_reg__DOT__reg_com);
    Vtop___024root____Vdpiimwrap_top__DOT__data_ram__DOT__set_ram_ptr__Vdpioc2_TOP(vlSelf->top__DOT__data_ram__DOT__ram);
}

void Vtop___024root___settle__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__3\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp9;
    VlWide<3>/*95:0*/ __Vtemp11;
    VlWide<3>/*95:0*/ __Vtemp12;
    VlWide<3>/*95:0*/ __Vtemp13;
    VlWide<3>/*95:0*/ __Vtemp14;
    VlWide<3>/*95:0*/ __Vtemp15;
    // Body
    vlSelf->top__DOT__inst = vlSelf->top__DOT__inst_ram__DOT__rom
        [(0xffffU & (IData)(((vlSelf->top__DOT__cpu_pc 
                              - 0x80000000ULL) >> 2U)))];
    vlSelf->top__DOT__pc_sel = ((IData)((0x67U == (0x707fU 
                                                   & vlSelf->top__DOT__inst)))
                                 ? 4U : ((0x6fU == 
                                          (0x7fU & vlSelf->top__DOT__inst))
                                          ? 2U : 1U));
    vlSelf->top__DOT__rs1 = ((0x100073U == vlSelf->top__DOT__inst)
                              ? 0xaU : (0x1fU & (vlSelf->top__DOT__inst 
                                                 >> 0xfU)));
    vlSelf->top__DOT__op = (((IData)((0x33U == (0x707fU 
                                                & vlSelf->top__DOT__inst))) 
                             & (0U == (vlSelf->top__DOT__inst 
                                       >> 0x19U))) ? 1U
                             : ((IData)((0x13U == (0x707fU 
                                                   & vlSelf->top__DOT__inst)))
                                 ? 1U : ((IData)((0x3003U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__inst)))
                                          ? 1U : ((IData)(
                                                          (0x3023U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__inst)))
                                                   ? 1U
                                                   : 
                                                  ((0x17U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT__inst))
                                                    ? 1U
                                                    : 
                                                   (((IData)(
                                                             (0x33U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__inst))) 
                                                     & (0x20U 
                                                        == 
                                                        (vlSelf->top__DOT__inst 
                                                         >> 0x19U)))
                                                     ? 2U
                                                     : 
                                                    (((IData)(
                                                              (0x1033U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top__DOT__inst))) 
                                                      & (0U 
                                                         == 
                                                         (vlSelf->top__DOT__inst 
                                                          >> 0x19U)))
                                                      ? 0x80U
                                                      : 
                                                     (((IData)(
                                                               (0x2033U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__inst))) 
                                                       & (0U 
                                                          == 
                                                          (vlSelf->top__DOT__inst 
                                                           >> 0x19U)))
                                                       ? 4U
                                                       : 
                                                      (((IData)(
                                                                (0x3033U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->top__DOT__inst))) 
                                                        & (0U 
                                                           == 
                                                           (vlSelf->top__DOT__inst 
                                                            >> 0x19U)))
                                                        ? 8U
                                                        : 
                                                       (((IData)(
                                                                 (0x4033U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->top__DOT__inst))) 
                                                         & (0U 
                                                            == 
                                                            (vlSelf->top__DOT__inst 
                                                             >> 0x19U)))
                                                         ? 0x40U
                                                         : 
                                                        (((IData)(
                                                                  (0x5033U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->top__DOT__inst))) 
                                                          & (0U 
                                                             == 
                                                             (vlSelf->top__DOT__inst 
                                                              >> 0x19U)))
                                                          ? 0x100U
                                                          : 
                                                         (((IData)(
                                                                   (0x5033U 
                                                                    == 
                                                                    (0x707fU 
                                                                     & vlSelf->top__DOT__inst))) 
                                                           & (0x20U 
                                                              == 
                                                              (vlSelf->top__DOT__inst 
                                                               >> 0x19U)))
                                                           ? 0x200U
                                                           : 
                                                          (((IData)(
                                                                    (0x6033U 
                                                                     == 
                                                                     (0x707fU 
                                                                      & vlSelf->top__DOT__inst))) 
                                                            & (0U 
                                                               == 
                                                               (vlSelf->top__DOT__inst 
                                                                >> 0x19U)))
                                                            ? 0x20U
                                                            : 
                                                           (((IData)(
                                                                     (0x7033U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->top__DOT__inst))) 
                                                             & (0U 
                                                                == 
                                                                (vlSelf->top__DOT__inst 
                                                                 >> 0x19U)))
                                                             ? 0x10U
                                                             : 
                                                            ((0x37U 
                                                              == 
                                                              (0x7fU 
                                                               & vlSelf->top__DOT__inst))
                                                              ? 0x400U
                                                              : 
                                                             ((0x6fU 
                                                               == 
                                                               (0x7fU 
                                                                & vlSelf->top__DOT__inst))
                                                               ? 0x800U
                                                               : 
                                                              ((IData)(
                                                                       (0x67U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->top__DOT__inst)))
                                                                ? 0x800U
                                                                : 0U)))))))))))))))));
    vlSelf->top__DOT__idu__DOT__TYPE_I = (((((0x13U 
                                              == (0x7fU 
                                                  & vlSelf->top__DOT__inst)) 
                                             | (0x73U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->top__DOT__inst))) 
                                            | (0x67U 
                                               == (0x7fU 
                                                   & vlSelf->top__DOT__inst))) 
                                           | (3U == 
                                              (0x7fU 
                                               & vlSelf->top__DOT__inst))) 
                                          | (0xfU == 
                                             (0x7fU 
                                              & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__idu__DOT__TYPE_U = ((0x37U == 
                                           (0x7fU & vlSelf->top__DOT__inst)) 
                                          | (0x17U 
                                             == (0x7fU 
                                                 & vlSelf->top__DOT__inst)));
    vlSelf->top__DOT__src2_rs2 = ((0U == (0x1fU & (vlSelf->top__DOT__inst 
                                                   >> 0x14U)))
                                   ? 0ULL : vlSelf->top__DOT__common_reg__DOT__reg_com
                                  [(0x1fU & (vlSelf->top__DOT__inst 
                                             >> 0x14U))]);
    vlSelf->top__DOT__src1 = ((1U == (((0x6fU == (0x7fU 
                                                  & vlSelf->top__DOT__inst)) 
                                       | (0x17U == 
                                          (0x7fU & vlSelf->top__DOT__inst)))
                                       ? 1U : 2U)) ? vlSelf->top__DOT__cpu_pc
                               : ((0U == (IData)(vlSelf->top__DOT__rs1))
                                   ? 0ULL : vlSelf->top__DOT__common_reg__DOT__reg_com
                                  [vlSelf->top__DOT__rs1]));
    vlSelf->top__DOT__alu__DOT__data_cin = (IData)(
                                                   (0U 
                                                    != 
                                                    (0xeU 
                                                     & (IData)(vlSelf->top__DOT__op))));
    vlSelf->top__DOT__src2 = ((1U == (((((0x6fU == 
                                          (0x7fU & vlSelf->top__DOT__inst)) 
                                         | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_U)) 
                                        | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_I)) 
                                       | (0x23U == 
                                          (0x7fU & vlSelf->top__DOT__inst)))
                                       ? 1U : 2U)) ? 
                              ((IData)(vlSelf->top__DOT__idu__DOT__TYPE_I)
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
                                        << 0x20U) | (QData)((IData)(
                                                                    (0xfffff000U 
                                                                     & vlSelf->top__DOT__inst))))
                                    : ((0x23U == (0x7fU 
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
                                        : ((0x6fU == 
                                            (0x7fU 
                                             & vlSelf->top__DOT__inst))
                                            ? (((- (QData)((IData)(
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
                                            : ((0x63U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->top__DOT__inst))
                                                ? (
                                                   ((- (QData)((IData)(
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
                                                : 0ULL)))))
                               : vlSelf->top__DOT__src2_rs2);
    vlSelf->top__DOT__alu__DOT__data_b = ((IData)((0U 
                                                   != 
                                                   (0xeU 
                                                    & (IData)(vlSelf->top__DOT__op))))
                                           ? (~ vlSelf->top__DOT__src2)
                                           : vlSelf->top__DOT__src2);
    VL_EXTEND_WI(65,1, __Vtemp9, (IData)(vlSelf->top__DOT__alu__DOT__data_cin));
    vlSelf->top__DOT__alu__DOT__data_result = ((vlSelf->top__DOT__src1 
                                                + vlSelf->top__DOT__alu__DOT__data_b) 
                                               + (((QData)((IData)(
                                                                   __Vtemp9[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    __Vtemp9[0U]))));
    vlSelf->top__DOT__cpu_dnpc = ((1U == (IData)(vlSelf->top__DOT__pc_sel))
                                   ? (4ULL + vlSelf->top__DOT__cpu_pc)
                                   : ((2U == (IData)(vlSelf->top__DOT__pc_sel))
                                       ? vlSelf->top__DOT__alu__DOT__data_result
                                       : (0xfffffffffffffffeULL 
                                          & vlSelf->top__DOT__alu__DOT__data_result)));
    VL_EXTEND_WQ(65,64, __Vtemp11, vlSelf->top__DOT__src1);
    VL_EXTEND_WQ(65,64, __Vtemp12, vlSelf->top__DOT__alu__DOT__data_b);
    VL_ADD_W(3, __Vtemp13, __Vtemp11, __Vtemp12);
    VL_EXTEND_WI(65,1, __Vtemp14, (IData)(vlSelf->top__DOT__alu__DOT__data_cin));
    VL_ADD_W(3, __Vtemp15, __Vtemp13, __Vtemp14);
    vlSelf->top__DOT__data_rd_in = ((((((((((((QData)((IData)(
                                                              (- (IData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (IData)(vlSelf->top__DOT__op)))))))) 
                                              & vlSelf->top__DOT__alu__DOT__data_result) 
                                             | ((QData)((IData)(
                                                                (- (IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelf->top__DOT__op) 
                                                                               >> 2U)))))) 
                                                & (QData)((IData)(
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
                                                                                >> 0x3fU))))))))) 
                                            | ((QData)((IData)(
                                                               (- (IData)(
                                                                          (1U 
                                                                           & ((IData)(vlSelf->top__DOT__op) 
                                                                              >> 3U)))))) 
                                               & (QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (1U 
                                                                      & __Vtemp15[2U]))))))) 
                                           | ((QData)((IData)(
                                                              (- (IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->top__DOT__op) 
                                                                             >> 4U)))))) 
                                              & (vlSelf->top__DOT__src1 
                                                 & vlSelf->top__DOT__src2))) 
                                          | ((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->top__DOT__op) 
                                                                            >> 5U)))))) 
                                             & (vlSelf->top__DOT__src1 
                                                | vlSelf->top__DOT__src2))) 
                                         | ((QData)((IData)(
                                                            (- (IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelf->top__DOT__op) 
                                                                           >> 6U)))))) 
                                            & (vlSelf->top__DOT__src1 
                                               ^ vlSelf->top__DOT__src2))) 
                                        | ((QData)((IData)(
                                                           (- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->top__DOT__op) 
                                                                          >> 7U)))))) 
                                           & (vlSelf->top__DOT__src1 
                                              << (0x3fU 
                                                  & (IData)(vlSelf->top__DOT__src2))))) 
                                       | ((QData)((IData)(
                                                          (- (IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->top__DOT__op) 
                                                                         >> 8U)))))) 
                                          & (vlSelf->top__DOT__src1 
                                             >> (0x3fU 
                                                 & (IData)(vlSelf->top__DOT__src2))))) 
                                      | ((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->top__DOT__op) 
                                                                        >> 9U)))))) 
                                         & (vlSelf->top__DOT__src1 
                                            >> (0x3fU 
                                                & (IData)(vlSelf->top__DOT__src2))))) 
                                     | ((QData)((IData)(
                                                        (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->top__DOT__op) 
                                                                       >> 0xaU)))))) 
                                        & vlSelf->top__DOT__src2)) 
                                    | ((QData)((IData)(
                                                       (- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->top__DOT__op) 
                                                                      >> 0xbU)))))) 
                                       & (4ULL + vlSelf->top__DOT__src1)));
    vlSelf->data_rd = ((1U == ((IData)((0x2003U == 
                                        (0x707fU & vlSelf->top__DOT__inst)))
                                ? 2U : 1U)) ? vlSelf->top__DOT__data_rd_in
                        : vlSelf->top__DOT__data_ram__DOT__ram
                       [(1U & ((IData)(1U) + (IData)(vlSelf->top__DOT__alu__DOT__data_result)))]);
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    Vtop___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

void Vtop___024root___eval_settle(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_settle\n"); );
    // Body
    Vtop___024root___settle__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vtop___024root___final(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___final\n"); );
}

void Vtop___024root___ctor_var_reset(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->data_rd = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__pc_sel = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__op = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__cpu_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_dnpc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__src2_rs2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__src1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__src2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__data_rd_in = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<65536; ++__Vi0) {
        vlSelf->top__DOT__inst_ram__DOT__rom[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__idu__DOT__TYPE_I = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__idu__DOT__TYPE_U = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__common_reg__DOT__reg_com[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__data_ram__DOT__ram[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__alu__DOT__data_b = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__alu__DOT__data_result = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__alu__DOT__data_cin = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
