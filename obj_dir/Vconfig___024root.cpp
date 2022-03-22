// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vconfig.h for the primary calling header

#include "Vconfig___024root.h"
#include "Vconfig__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" int ebreak_check(int a);

VL_INLINE_OPT void Vconfig___024root____Vdpiimwrap_top__DOT__ebreak_check_TOP(IData/*31:0*/ a, IData/*31:0*/ &ebreak_check__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfig___024root____Vdpiimwrap_top__DOT__ebreak_check_TOP\n"); );
    // Body
    int a__Vcvt;
    for (size_t a__Vidx = 0; a__Vidx < 1; ++a__Vidx) a__Vcvt = a;
    int ebreak_check__Vfuncrtn__Vcvt;
    ebreak_check__Vfuncrtn__Vcvt = ebreak_check(a__Vcvt);
    ebreak_check__Vfuncrtn = ebreak_check__Vfuncrtn__Vcvt;
}

VL_INLINE_OPT void Vconfig___024root___sequent__TOP__2(Vconfig___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfig__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfig___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__top__DOT__common_reg__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__common_reg__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvdim0__top__DOT__data_ram__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__data_ram__DOT__ram__v0;
    VlWide<5>/*159:0*/ __Vtemp5;
    VlWide<3>/*95:0*/ __Vtemp31;
    VlWide<3>/*95:0*/ __Vtemp36;
    VlWide<3>/*95:0*/ __Vtemp37;
    VlWide<3>/*95:0*/ __Vtemp38;
    VlWide<3>/*95:0*/ __Vtemp39;
    VlWide<3>/*95:0*/ __Vtemp40;
    QData/*63:0*/ __Vdlyvval__top__DOT__common_reg__DOT__ram__v0;
    QData/*63:0*/ __Vdlyvval__top__DOT__data_ram__DOT__ram__v0;
    // Body
    __Vdlyvset__top__DOT__data_ram__DOT__ram__v0 = 0U;
    __Vdlyvset__top__DOT__common_reg__DOT__ram__v0 = 0U;
    if (VL_UNLIKELY((1U == vlSelf->top__DOT__check))) {
        VL_FINISH_MT("vsrc/top.v", 106, "");
    }
    if (((IData)((0x2023U == (0x707fU & vlSelf->top__DOT__inst)))
          ? 1U : 0U)) {
        __Vdlyvval__top__DOT__data_ram__DOT__ram__v0 
            = vlSelf->top__DOT__src2_rs2;
        __Vdlyvset__top__DOT__data_ram__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top__DOT__data_ram__DOT__ram__v0 
            = (1U & ((IData)(1U) + (IData)(vlSelf->top__DOT__alu__DOT__data_result)));
    }
    if (((((((0x33U == (0x7fU & vlSelf->top__DOT__inst)) 
             | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_I)) 
            | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_U)) 
           | (0x6fU == (0x7fU & vlSelf->top__DOT__inst)))
           ? 1U : 0U) & (0U != (0x1fU & (vlSelf->top__DOT__inst 
                                         >> 7U))))) {
        __Vdlyvval__top__DOT__common_reg__DOT__ram__v0 
            = vlSelf->data_rd;
        __Vdlyvset__top__DOT__common_reg__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top__DOT__common_reg__DOT__ram__v0 
            = (0x1fU & (vlSelf->top__DOT__inst >> 7U));
    }
    vlSelf->top__DOT__inf__DOT__count = ((vlSelf->top__DOT__cpu_pc 
                                          - 0x80000000ULL) 
                                         >> 2U);
    if (__Vdlyvset__top__DOT__data_ram__DOT__ram__v0) {
        vlSelf->top__DOT__data_ram__DOT__ram[__Vdlyvdim0__top__DOT__data_ram__DOT__ram__v0] 
            = __Vdlyvval__top__DOT__data_ram__DOT__ram__v0;
    }
    if (__Vdlyvset__top__DOT__common_reg__DOT__ram__v0) {
        vlSelf->top__DOT__common_reg__DOT__ram[__Vdlyvdim0__top__DOT__common_reg__DOT__ram__v0] 
            = __Vdlyvval__top__DOT__common_reg__DOT__ram__v0;
    }
    vlSelf->top__DOT__cpu_pc = ((IData)(vlSelf->rst)
                                 ? vlSelf->top__DOT__cpu_dnpc
                                 : 0x80000000ULL);
    vlSelf->top__DOT__inst = vlSelf->top__DOT__inst_ram__DOT__rom
        [(0xffU & (IData)(vlSelf->top__DOT__inf__DOT__count))];
    Vconfig___024root____Vdpiimwrap_top__DOT__ebreak_check_TOP(vlSelf->top__DOT__inst, vlSelf->__Vfunc_top__DOT__ebreak_check__0__Vfuncout);
    vlSelf->top__DOT__check = vlSelf->__Vfunc_top__DOT__ebreak_check__0__Vfuncout;
    if ((IData)((0x2003U == (0x707fU & vlSelf->top__DOT__inst)))) {
        vlSelf->top__DOT__load_sel = 2U;
        vlSelf->top__DOT__data_ren = 1U;
    } else {
        vlSelf->top__DOT__load_sel = 1U;
        vlSelf->top__DOT__data_ren = 0U;
    }
    vlSelf->top__DOT__op = (((IData)((0x33U == (0x707fU 
                                                & vlSelf->top__DOT__inst))) 
                             & (0U == (vlSelf->top__DOT__inst 
                                       >> 0x19U))) ? 1U
                             : ((IData)((0x2003U == 
                                         (0x707fU & vlSelf->top__DOT__inst)))
                                 ? 1U : ((IData)((0x2023U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__inst)))
                                          ? 1U : (((IData)(
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
                                                             : 0U))))))))))))));
    vlSelf->top__DOT__src2_rs2 = ((0U == (0x1fU & (vlSelf->top__DOT__inst 
                                                   >> 0x14U)))
                                   ? 0ULL : vlSelf->top__DOT__common_reg__DOT__ram
                                  [(0x1fU & (vlSelf->top__DOT__inst 
                                             >> 0x14U))]);
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
    vlSelf->top__DOT____Vcellinp__src1_sel_choice____pinNumber3[0U] 
        = (IData)(((0U == (0x1fU & (vlSelf->top__DOT__inst 
                                    >> 0xfU))) ? 0ULL
                    : vlSelf->top__DOT__common_reg__DOT__ram
                   [(0x1fU & (vlSelf->top__DOT__inst 
                              >> 0xfU))]));
    vlSelf->top__DOT____Vcellinp__src1_sel_choice____pinNumber3[1U] 
        = (IData)((((0U == (0x1fU & (vlSelf->top__DOT__inst 
                                     >> 0xfU))) ? 0ULL
                     : vlSelf->top__DOT__common_reg__DOT__ram
                    [(0x1fU & (vlSelf->top__DOT__inst 
                               >> 0xfU))]) >> 0x20U));
    vlSelf->top__DOT____Vcellinp__src1_sel_choice____pinNumber3[2U] 
        = (2U | ((IData)(vlSelf->top__DOT__cpu_pc) 
                 << 2U));
    vlSelf->top__DOT____Vcellinp__src1_sel_choice____pinNumber3[3U] 
        = (((IData)(vlSelf->top__DOT__cpu_pc) >> 0x1eU) 
           | ((IData)((vlSelf->top__DOT__cpu_pc >> 0x20U)) 
              << 2U));
    vlSelf->top__DOT____Vcellinp__src1_sel_choice____pinNumber3[4U] 
        = (4U | ((IData)((vlSelf->top__DOT__cpu_pc 
                          >> 0x20U)) >> 0x1eU));
    vlSelf->top__DOT__alu__DOT__data_cin = (IData)(
                                                   (0U 
                                                    != 
                                                    (0xeU 
                                                     & (IData)(vlSelf->top__DOT__op))));
    vlSelf->top__DOT__src2_sel = (((((0x6fU == (0x7fU 
                                                & vlSelf->top__DOT__inst)) 
                                     | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_U)) 
                                    | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_I)) 
                                   | (0x23U == (0x7fU 
                                                & vlSelf->top__DOT__inst)))
                                   ? 1U : 2U);
    __Vtemp5[2U] = (2U | ((IData)(((IData)(vlSelf->top__DOT__idu__DOT__TYPE_I)
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
                                        : ((0x23U == 
                                            (0x7fU 
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
                                                ? (
                                                   ((- (QData)((IData)(
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
                                                : (
                                                   (0x63U 
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
                                                    : 0ULL)))))) 
                          << 2U));
    __Vtemp5[3U] = (((IData)(((IData)(vlSelf->top__DOT__idu__DOT__TYPE_I)
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
                                           (0x7fU & vlSelf->top__DOT__inst))
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
                                               == (0x7fU 
                                                   & vlSelf->top__DOT__inst))
                                               ? ((
                                                   (- (QData)((IData)(
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
                                               : 0ULL)))))) 
                     >> 0x1eU) | ((IData)((((IData)(vlSelf->top__DOT__idu__DOT__TYPE_I)
                                             ? (((- (QData)((IData)(
                                                                    (vlSelf->top__DOT__inst 
                                                                     >> 0x1fU)))) 
                                                 << 0xcU) 
                                                | (QData)((IData)(
                                                                  (vlSelf->top__DOT__inst 
                                                                   >> 0x14U))))
                                             : ((IData)(vlSelf->top__DOT__idu__DOT__TYPE_U)
                                                 ? 
                                                (((QData)((IData)(
                                                                  (- (IData)(
                                                                             (vlSelf->top__DOT__inst 
                                                                              >> 0x1fU))))) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   (0xfffff000U 
                                                                    & vlSelf->top__DOT__inst))))
                                                 : 
                                                ((0x23U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__inst))
                                                  ? 
                                                 (((- (QData)((IData)(
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
                                                  : 
                                                 ((0x6fU 
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
                                                    : 0ULL))))) 
                                           >> 0x20U)) 
                                  << 2U));
    __Vtemp5[4U] = ((IData)((((IData)(vlSelf->top__DOT__idu__DOT__TYPE_I)
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
                                           (0x7fU & vlSelf->top__DOT__inst))
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
                                               == (0x7fU 
                                                   & vlSelf->top__DOT__inst))
                                               ? ((
                                                   (- (QData)((IData)(
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
                             >> 0x20U)) >> 0x1eU);
    vlSelf->top__DOT____Vcellinp__src2_sel_choice____pinNumber3[0U] 
        = (IData)(vlSelf->top__DOT__src2_rs2);
    vlSelf->top__DOT____Vcellinp__src2_sel_choice____pinNumber3[1U] 
        = (IData)((vlSelf->top__DOT__src2_rs2 >> 0x20U));
    vlSelf->top__DOT____Vcellinp__src2_sel_choice____pinNumber3[2U] 
        = __Vtemp5[2U];
    vlSelf->top__DOT____Vcellinp__src2_sel_choice____pinNumber3[3U] 
        = __Vtemp5[3U];
    vlSelf->top__DOT____Vcellinp__src2_sel_choice____pinNumber3[4U] 
        = (4U | __Vtemp5[4U]);
    vlSelf->top__DOT__src1_sel_choice__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT____Vcellinp__src1_sel_choice____pinNumber3[0U];
    vlSelf->top__DOT__src1_sel_choice__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT____Vcellinp__src1_sel_choice____pinNumber3[1U];
    vlSelf->top__DOT__src1_sel_choice__DOT__i0__DOT__pair_list[0U][2U] 
        = (3U & vlSelf->top__DOT____Vcellinp__src1_sel_choice____pinNumber3[2U]);
    vlSelf->top__DOT__src1_sel_choice__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT____Vcellinp__src1_sel_choice____pinNumber3[3U] 
            << 0x1eU) | (vlSelf->top__DOT____Vcellinp__src1_sel_choice____pinNumber3[2U] 
                         >> 2U));
    vlSelf->top__DOT__src1_sel_choice__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT____Vcellinp__src1_sel_choice____pinNumber3[4U] 
            << 0x1eU) | (vlSelf->top__DOT____Vcellinp__src1_sel_choice____pinNumber3[3U] 
                         >> 2U));
    vlSelf->top__DOT__src1_sel_choice__DOT__i0__DOT__pair_list[1U][2U] 
        = (3U & (vlSelf->top__DOT____Vcellinp__src1_sel_choice____pinNumber3[4U] 
                 >> 2U));
    vlSelf->top__DOT__src2_sel_choice__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT____Vcellinp__src2_sel_choice____pinNumber3[0U];
    vlSelf->top__DOT__src2_sel_choice__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT____Vcellinp__src2_sel_choice____pinNumber3[1U];
    vlSelf->top__DOT__src2_sel_choice__DOT__i0__DOT__pair_list[0U][2U] 
        = (3U & vlSelf->top__DOT____Vcellinp__src2_sel_choice____pinNumber3[2U]);
    vlSelf->top__DOT__src2_sel_choice__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT____Vcellinp__src2_sel_choice____pinNumber3[3U] 
            << 0x1eU) | (vlSelf->top__DOT____Vcellinp__src2_sel_choice____pinNumber3[2U] 
                         >> 2U));
    vlSelf->top__DOT__src2_sel_choice__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT____Vcellinp__src2_sel_choice____pinNumber3[4U] 
            << 0x1eU) | (vlSelf->top__DOT____Vcellinp__src2_sel_choice____pinNumber3[3U] 
                         >> 2U));
    vlSelf->top__DOT__src2_sel_choice__DOT__i0__DOT__pair_list[1U][2U] 
        = (3U & (vlSelf->top__DOT____Vcellinp__src2_sel_choice____pinNumber3[4U] 
                 >> 2U));
    vlSelf->top__DOT__src1_sel_choice__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__src1_sel_choice__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__src1_sel_choice__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__src1_sel_choice__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__src1_sel_choice__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__src1_sel_choice__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__src1_sel_choice__DOT__i0__DOT__key_list[0U] 
        = (3U & vlSelf->top__DOT__src1_sel_choice__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__src1_sel_choice__DOT__i0__DOT__key_list[1U] 
        = (3U & vlSelf->top__DOT__src1_sel_choice__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__src2_sel_choice__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__src2_sel_choice__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__src2_sel_choice__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__src2_sel_choice__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__src2_sel_choice__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__src2_sel_choice__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__src2_sel_choice__DOT__i0__DOT__key_list[0U] 
        = (3U & vlSelf->top__DOT__src2_sel_choice__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__src2_sel_choice__DOT__i0__DOT__key_list[1U] 
        = (3U & vlSelf->top__DOT__src2_sel_choice__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__src1_sel_choice__DOT__i0__DOT__hit 
        = (((0x6fU == (0x7fU & vlSelf->top__DOT__inst))
             ? 1U : 2U) == vlSelf->top__DOT__src1_sel_choice__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__src1_sel_choice__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src1_sel_choice__DOT__i0__DOT__hit) 
           | (((0x6fU == (0x7fU & vlSelf->top__DOT__inst))
                ? 1U : 2U) == vlSelf->top__DOT__src1_sel_choice__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__src1_sel_choice__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)((((0x6fU == (0x7fU & vlSelf->top__DOT__inst))
                                 ? 1U : 2U) == vlSelf->top__DOT__src1_sel_choice__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__src1_sel_choice__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__src1_sel_choice__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__src1_sel_choice__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((((0x6fU == (0x7fU 
                                              & vlSelf->top__DOT__inst))
                                    ? 1U : 2U) == vlSelf->top__DOT__src1_sel_choice__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__src1_sel_choice__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__src1 = vlSelf->top__DOT__src1_sel_choice__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__src2_sel_choice__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src2_sel) == vlSelf->top__DOT__src2_sel_choice__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__src2_sel_choice__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__src2_sel_choice__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__src2_sel) == 
              vlSelf->top__DOT__src2_sel_choice__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__src2_sel_choice__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__src2_sel) 
                               == vlSelf->top__DOT__src2_sel_choice__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__src2_sel_choice__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__src2_sel_choice__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__src2_sel_choice__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__src2_sel) 
                                  == vlSelf->top__DOT__src2_sel_choice__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__src2_sel_choice__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__src2 = vlSelf->top__DOT__src2_sel_choice__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__alu__DOT__data_b = ((IData)((0U 
                                                   != 
                                                   (0xeU 
                                                    & (IData)(vlSelf->top__DOT__op))))
                                           ? (~ vlSelf->top__DOT__src2)
                                           : vlSelf->top__DOT__src2);
    VL_EXTEND_WI(65,1, __Vtemp31, (IData)(vlSelf->top__DOT__alu__DOT__data_cin));
    vlSelf->top__DOT__alu__DOT__data_result = ((vlSelf->top__DOT__src1 
                                                + vlSelf->top__DOT__alu__DOT__data_b) 
                                               + (((QData)((IData)(
                                                                   __Vtemp31[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    __Vtemp31[0U]))));
    vlSelf->top__DOT____Vcellinp__pc_sel_choice____pinNumber3[0U] 
        = (IData)(vlSelf->top__DOT__alu__DOT__data_result);
    vlSelf->top__DOT____Vcellinp__pc_sel_choice____pinNumber3[1U] 
        = (IData)((vlSelf->top__DOT__alu__DOT__data_result 
                   >> 0x20U));
    vlSelf->top__DOT____Vcellinp__pc_sel_choice____pinNumber3[2U] 
        = (2U | ((IData)((4ULL + vlSelf->top__DOT__cpu_pc)) 
                 << 2U));
    vlSelf->top__DOT____Vcellinp__pc_sel_choice____pinNumber3[3U] 
        = (((IData)((4ULL + vlSelf->top__DOT__cpu_pc)) 
            >> 0x1eU) | ((IData)(((4ULL + vlSelf->top__DOT__cpu_pc) 
                                  >> 0x20U)) << 2U));
    vlSelf->top__DOT____Vcellinp__pc_sel_choice____pinNumber3[4U] 
        = (4U | ((IData)(((4ULL + vlSelf->top__DOT__cpu_pc) 
                          >> 0x20U)) >> 0x1eU));
    VL_EXTEND_WQ(65,64, __Vtemp36, vlSelf->top__DOT__src1);
    VL_EXTEND_WQ(65,64, __Vtemp37, vlSelf->top__DOT__alu__DOT__data_b);
    VL_ADD_W(3, __Vtemp38, __Vtemp36, __Vtemp37);
    VL_EXTEND_WI(65,1, __Vtemp39, (IData)(vlSelf->top__DOT__alu__DOT__data_cin));
    VL_ADD_W(3, __Vtemp40, __Vtemp38, __Vtemp39);
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
                                                                      & __Vtemp40[2U]))))))) 
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
    vlSelf->top__DOT__pc_sel_choice__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT____Vcellinp__pc_sel_choice____pinNumber3[0U];
    vlSelf->top__DOT__pc_sel_choice__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT____Vcellinp__pc_sel_choice____pinNumber3[1U];
    vlSelf->top__DOT__pc_sel_choice__DOT__i0__DOT__pair_list[0U][2U] 
        = (3U & vlSelf->top__DOT____Vcellinp__pc_sel_choice____pinNumber3[2U]);
    vlSelf->top__DOT__pc_sel_choice__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT____Vcellinp__pc_sel_choice____pinNumber3[3U] 
            << 0x1eU) | (vlSelf->top__DOT____Vcellinp__pc_sel_choice____pinNumber3[2U] 
                         >> 2U));
    vlSelf->top__DOT__pc_sel_choice__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT____Vcellinp__pc_sel_choice____pinNumber3[4U] 
            << 0x1eU) | (vlSelf->top__DOT____Vcellinp__pc_sel_choice____pinNumber3[3U] 
                         >> 2U));
    vlSelf->top__DOT__pc_sel_choice__DOT__i0__DOT__pair_list[1U][2U] 
        = (3U & (vlSelf->top__DOT____Vcellinp__pc_sel_choice____pinNumber3[4U] 
                 >> 2U));
    vlSelf->top__DOT____Vcellinp__data_rd_choice____pinNumber3[0U] 
        = (IData)(((IData)(vlSelf->top__DOT__data_ren)
                    ? vlSelf->top__DOT__data_ram__DOT__ram
                   [(1U & ((IData)(1U) + (IData)(vlSelf->top__DOT__data_ren)))]
                    : 0ULL));
    vlSelf->top__DOT____Vcellinp__data_rd_choice____pinNumber3[1U] 
        = (IData)((((IData)(vlSelf->top__DOT__data_ren)
                     ? vlSelf->top__DOT__data_ram__DOT__ram
                    [(1U & ((IData)(1U) + (IData)(vlSelf->top__DOT__data_ren)))]
                     : 0ULL) >> 0x20U));
    vlSelf->top__DOT____Vcellinp__data_rd_choice____pinNumber3[2U] 
        = (2U | ((IData)(vlSelf->top__DOT__data_rd_in) 
                 << 2U));
    vlSelf->top__DOT____Vcellinp__data_rd_choice____pinNumber3[3U] 
        = (((IData)(vlSelf->top__DOT__data_rd_in) >> 0x1eU) 
           | ((IData)((vlSelf->top__DOT__data_rd_in 
                       >> 0x20U)) << 2U));
    vlSelf->top__DOT____Vcellinp__data_rd_choice____pinNumber3[4U] 
        = (4U | ((IData)((vlSelf->top__DOT__data_rd_in 
                          >> 0x20U)) >> 0x1eU));
    vlSelf->top__DOT__pc_sel_choice__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__pc_sel_choice__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__pc_sel_choice__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__pc_sel_choice__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__pc_sel_choice__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__pc_sel_choice__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__pc_sel_choice__DOT__i0__DOT__key_list[0U] 
        = (3U & vlSelf->top__DOT__pc_sel_choice__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__pc_sel_choice__DOT__i0__DOT__key_list[1U] 
        = (3U & vlSelf->top__DOT__pc_sel_choice__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__data_rd_choice__DOT__i0__DOT__pair_list[0U][0U] 
        = vlSelf->top__DOT____Vcellinp__data_rd_choice____pinNumber3[0U];
    vlSelf->top__DOT__data_rd_choice__DOT__i0__DOT__pair_list[0U][1U] 
        = vlSelf->top__DOT____Vcellinp__data_rd_choice____pinNumber3[1U];
    vlSelf->top__DOT__data_rd_choice__DOT__i0__DOT__pair_list[0U][2U] 
        = (3U & vlSelf->top__DOT____Vcellinp__data_rd_choice____pinNumber3[2U]);
    vlSelf->top__DOT__data_rd_choice__DOT__i0__DOT__pair_list[1U][0U] 
        = ((vlSelf->top__DOT____Vcellinp__data_rd_choice____pinNumber3[3U] 
            << 0x1eU) | (vlSelf->top__DOT____Vcellinp__data_rd_choice____pinNumber3[2U] 
                         >> 2U));
    vlSelf->top__DOT__data_rd_choice__DOT__i0__DOT__pair_list[1U][1U] 
        = ((vlSelf->top__DOT____Vcellinp__data_rd_choice____pinNumber3[4U] 
            << 0x1eU) | (vlSelf->top__DOT____Vcellinp__data_rd_choice____pinNumber3[3U] 
                         >> 2U));
    vlSelf->top__DOT__data_rd_choice__DOT__i0__DOT__pair_list[1U][2U] 
        = (3U & (vlSelf->top__DOT____Vcellinp__data_rd_choice____pinNumber3[4U] 
                 >> 2U));
    vlSelf->top__DOT__pc_sel_choice__DOT__i0__DOT__hit 
        = (((0x6fU == (0x7fU & vlSelf->top__DOT__inst))
             ? 2U : 1U) == vlSelf->top__DOT__pc_sel_choice__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__pc_sel_choice__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__pc_sel_choice__DOT__i0__DOT__hit) 
           | (((0x6fU == (0x7fU & vlSelf->top__DOT__inst))
                ? 2U : 1U) == vlSelf->top__DOT__pc_sel_choice__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__pc_sel_choice__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)((((0x6fU == (0x7fU & vlSelf->top__DOT__inst))
                                 ? 2U : 1U) == vlSelf->top__DOT__pc_sel_choice__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__pc_sel_choice__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__pc_sel_choice__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__pc_sel_choice__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)((((0x6fU == (0x7fU 
                                              & vlSelf->top__DOT__inst))
                                    ? 2U : 1U) == vlSelf->top__DOT__pc_sel_choice__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__pc_sel_choice__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->top__DOT__cpu_dnpc = vlSelf->top__DOT__pc_sel_choice__DOT__i0__DOT__lut_out;
    vlSelf->top__DOT__data_rd_choice__DOT__i0__DOT__data_list[0U] 
        = (((QData)((IData)(vlSelf->top__DOT__data_rd_choice__DOT__i0__DOT__pair_list
                            [0U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__data_rd_choice__DOT__i0__DOT__pair_list
                                                                   [0U][0U])));
    vlSelf->top__DOT__data_rd_choice__DOT__i0__DOT__data_list[1U] 
        = (((QData)((IData)(vlSelf->top__DOT__data_rd_choice__DOT__i0__DOT__pair_list
                            [1U][1U])) << 0x20U) | (QData)((IData)(
                                                                   vlSelf->top__DOT__data_rd_choice__DOT__i0__DOT__pair_list
                                                                   [1U][0U])));
    vlSelf->top__DOT__data_rd_choice__DOT__i0__DOT__key_list[0U] 
        = (3U & vlSelf->top__DOT__data_rd_choice__DOT__i0__DOT__pair_list
           [0U][2U]);
    vlSelf->top__DOT__data_rd_choice__DOT__i0__DOT__key_list[1U] 
        = (3U & vlSelf->top__DOT__data_rd_choice__DOT__i0__DOT__pair_list
           [1U][2U]);
    vlSelf->top__DOT__data_rd_choice__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__load_sel) == vlSelf->top__DOT__data_rd_choice__DOT__i0__DOT__key_list
           [0U]);
    vlSelf->top__DOT__data_rd_choice__DOT__i0__DOT__hit 
        = ((IData)(vlSelf->top__DOT__data_rd_choice__DOT__i0__DOT__hit) 
           | ((IData)(vlSelf->top__DOT__load_sel) == 
              vlSelf->top__DOT__data_rd_choice__DOT__i0__DOT__key_list
              [1U]));
    vlSelf->top__DOT__data_rd_choice__DOT__i0__DOT__lut_out 
        = ((- (QData)((IData)(((IData)(vlSelf->top__DOT__load_sel) 
                               == vlSelf->top__DOT__data_rd_choice__DOT__i0__DOT__key_list
                               [0U])))) & vlSelf->top__DOT__data_rd_choice__DOT__i0__DOT__data_list
           [0U]);
    vlSelf->top__DOT__data_rd_choice__DOT__i0__DOT__lut_out 
        = (vlSelf->top__DOT__data_rd_choice__DOT__i0__DOT__lut_out 
           | ((- (QData)((IData)(((IData)(vlSelf->top__DOT__load_sel) 
                                  == vlSelf->top__DOT__data_rd_choice__DOT__i0__DOT__key_list
                                  [1U])))) & vlSelf->top__DOT__data_rd_choice__DOT__i0__DOT__data_list
              [1U]));
    vlSelf->data_rd = vlSelf->top__DOT__data_rd_choice__DOT__i0__DOT__lut_out;
}

void Vconfig___024root___eval(Vconfig___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfig__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfig___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vconfig___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vconfig___024root___change_request_1(Vconfig___024root* vlSelf);

VL_INLINE_OPT QData Vconfig___024root___change_request(Vconfig___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfig__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfig___024root___change_request\n"); );
    // Body
    return (Vconfig___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vconfig___024root___change_request_1(Vconfig___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfig__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfig___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vconfig___024root___eval_debug_assertions(Vconfig___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vconfig__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vconfig___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
