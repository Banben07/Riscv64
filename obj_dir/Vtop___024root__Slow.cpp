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

void Vtop___024root____Vdpiimwrap_top__DOT__common_reg__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);
void Vtop___024root____Vdpiimwrap_top__DOT__data_ram__DOT__set_ram_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 2> &a);
extern const VlWide<13>/*415:0*/ Vtop__ConstPool__CONST_100c5227_0;

void Vtop___024root___initial__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__2\n"); );
    // Body
    Vtop___024root____Vdpiimwrap_top__DOT__common_reg__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->top__DOT__common_reg__DOT__reg_com);
    Vtop___024root____Vdpiimwrap_top__DOT__data_ram__DOT__set_ram_ptr__Vdpioc2_TOP(vlSelf->top__DOT__data_ram__DOT__ram);
    VL_READMEM_N(true, 32, 65536, 0, VL_CVT_PACK_STR_NW(13, Vtop__ConstPool__CONST_100c5227_0)
                 ,  &(vlSelf->top__DOT__inst_ram__DOT__rom)
                 , 0, ~0ULL);
}

void Vtop___024root___settle__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__3\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp18;
    VlWide<3>/*95:0*/ __Vtemp19;
    VlWide<3>/*95:0*/ __Vtemp20;
    VlWide<3>/*95:0*/ __Vtemp21;
    VlWide<3>/*95:0*/ __Vtemp22;
    VlWide<3>/*95:0*/ __Vtemp24;
    VlWide<3>/*95:0*/ __Vtemp26;
    VlWide<3>/*95:0*/ __Vtemp27;
    VlWide<3>/*95:0*/ __Vtemp28;
    VlWide<3>/*95:0*/ __Vtemp29;
    VlWide<3>/*95:0*/ __Vtemp30;
    // Body
    vlSelf->data_rd = ((1U == (IData)(vlSelf->top__DOT__wb_reg_load_sel))
                        ? vlSelf->top__DOT__wb_reg_data_rd_in
                        : vlSelf->top__DOT__wb_reg_rdata);
    vlSelf->top__DOT__alu__DOT__data_cin = (IData)(
                                                   (0U 
                                                    != 
                                                    (0xeU 
                                                     & (IData)(vlSelf->top__DOT__exe_reg_op))));
    vlSelf->top__DOT__data_ram__DOT__rdata_out = ((
                                                   ((IData)(vlSelf->top__DOT__mem_reg_l_bhw) 
                                                    >> 5U) 
                                                   & (0U 
                                                      == 
                                                      (7U 
                                                       & vlSelf->top__DOT__mem_reg_ram_addr)))
                                                   ? 
                                                  (((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__data_ram__DOT__ram
                                                                                [
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__mem_reg_ram_addr))] 
                                                                                >> 7U)))))) 
                                                    << 8U) 
                                                   | (QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(
                                                                                vlSelf->top__DOT__data_ram__DOT__ram
                                                                                [
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__mem_reg_ram_addr))])))))
                                                   : 
                                                  ((((IData)(vlSelf->top__DOT__mem_reg_l_bhw) 
                                                     >> 5U) 
                                                    & (1U 
                                                       == 
                                                       (7U 
                                                        & vlSelf->top__DOT__mem_reg_ram_addr)))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__data_ram__DOT__ram
                                                                                [
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__mem_reg_ram_addr))] 
                                                                                >> 0xfU)))))) 
                                                     << 8U) 
                                                    | (QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__data_ram__DOT__ram
                                                                                [
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__mem_reg_ram_addr))] 
                                                                                >> 8U))))))
                                                    : 
                                                   ((((IData)(vlSelf->top__DOT__mem_reg_l_bhw) 
                                                      >> 5U) 
                                                     & (2U 
                                                        == 
                                                        (7U 
                                                         & vlSelf->top__DOT__mem_reg_ram_addr)))
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT__data_ram__DOT__ram
                                                                                [
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__mem_reg_ram_addr))] 
                                                                                >> 0x17U)))))) 
                                                      << 8U) 
                                                     | (QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__data_ram__DOT__ram
                                                                                [
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__mem_reg_ram_addr))] 
                                                                                >> 0x10U))))))
                                                     : 
                                                    ((((IData)(vlSelf->top__DOT__mem_reg_l_bhw) 
                                                       >> 5U) 
                                                      & (3U 
                                                         == 
                                                         (7U 
                                                          & vlSelf->top__DOT__mem_reg_ram_addr)))
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          (1U 
                                                                           & (IData)(
                                                                                (vlSelf->top__DOT__data_ram__DOT__ram
                                                                                [
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__mem_reg_ram_addr))] 
                                                                                >> 0x1fU)))))) 
                                                       << 8U) 
                                                      | (QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__data_ram__DOT__ram
                                                                                [
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__mem_reg_ram_addr))] 
                                                                                >> 0x18U))))))
                                                      : 
                                                     ((((IData)(vlSelf->top__DOT__mem_reg_l_bhw) 
                                                        >> 5U) 
                                                       & (4U 
                                                          == 
                                                          (7U 
                                                           & vlSelf->top__DOT__mem_reg_ram_addr)))
                                                       ? 
                                                      (((- (QData)((IData)(
                                                                           (1U 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT__data_ram__DOT__ram
                                                                                [
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__mem_reg_ram_addr))] 
                                                                                >> 0x27U)))))) 
                                                        << 8U) 
                                                       | (QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT__data_ram__DOT__ram
                                                                                [
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__mem_reg_ram_addr))] 
                                                                                >> 0x20U))))))
                                                       : 
                                                      ((((IData)(vlSelf->top__DOT__mem_reg_l_bhw) 
                                                         >> 5U) 
                                                        & (5U 
                                                           == 
                                                           (7U 
                                                            & vlSelf->top__DOT__mem_reg_ram_addr)))
                                                        ? 
                                                       (((- (QData)((IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT__data_ram__DOT__ram
                                                                                [
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__mem_reg_ram_addr))] 
                                                                                >> 0x2fU)))))) 
                                                         << 8U) 
                                                        | (QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(
                                                                                (vlSelf->top__DOT__data_ram__DOT__ram
                                                                                [
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__mem_reg_ram_addr))] 
                                                                                >> 0x28U))))))
                                                        : 
                                                       ((((IData)(vlSelf->top__DOT__mem_reg_l_bhw) 
                                                          >> 5U) 
                                                         & (6U 
                                                            == 
                                                            (7U 
                                                             & vlSelf->top__DOT__mem_reg_ram_addr)))
                                                         ? 
                                                        (((- (QData)((IData)(
                                                                             (1U 
                                                                              & (IData)(
                                                                                (vlSelf->top__DOT__data_ram__DOT__ram
                                                                                [
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__mem_reg_ram_addr))] 
                                                                                >> 0x37U)))))) 
                                                          << 8U) 
                                                         | (QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(
                                                                                (vlSelf->top__DOT__data_ram__DOT__ram
                                                                                [
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__mem_reg_ram_addr))] 
                                                                                >> 0x30U))))))
                                                         : 
                                                        ((((IData)(vlSelf->top__DOT__mem_reg_l_bhw) 
                                                           >> 5U) 
                                                          & (7U 
                                                             == 
                                                             (7U 
                                                              & vlSelf->top__DOT__mem_reg_ram_addr)))
                                                          ? 
                                                         (((- (QData)((IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->top__DOT__data_ram__DOT__ram
                                                                                [
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__mem_reg_ram_addr))] 
                                                                                >> 0x3fU)))))) 
                                                           << 8U) 
                                                          | (QData)((IData)(
                                                                            (0xffU 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT__data_ram__DOT__ram
                                                                                [
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__mem_reg_ram_addr))] 
                                                                                >> 0x38U))))))
                                                          : 
                                                         ((((IData)(vlSelf->top__DOT__mem_reg_l_bhw) 
                                                            >> 4U) 
                                                           & (0U 
                                                              == 
                                                              (7U 
                                                               & vlSelf->top__DOT__mem_reg_ram_addr)))
                                                           ? (QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(
                                                                                vlSelf->top__DOT__data_ram__DOT__ram
                                                                                [
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__mem_reg_ram_addr))]))))
                                                           : 
                                                          ((((IData)(vlSelf->top__DOT__mem_reg_l_bhw) 
                                                             >> 4U) 
                                                            & (1U 
                                                               == 
                                                               (7U 
                                                                & vlSelf->top__DOT__mem_reg_ram_addr)))
                                                            ? (QData)((IData)(
                                                                              (0xffU 
                                                                               & (IData)(
                                                                                (vlSelf->top__DOT__data_ram__DOT__ram
                                                                                [
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__mem_reg_ram_addr))] 
                                                                                >> 8U)))))
                                                            : 
                                                           ((((IData)(vlSelf->top__DOT__mem_reg_l_bhw) 
                                                              >> 4U) 
                                                             & (2U 
                                                                == 
                                                                (7U 
                                                                 & vlSelf->top__DOT__mem_reg_ram_addr)))
                                                             ? (QData)((IData)(
                                                                               (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__data_ram__DOT__ram
                                                                                [
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__mem_reg_ram_addr))] 
                                                                                >> 0x10U)))))
                                                             : 
                                                            ((((IData)(vlSelf->top__DOT__mem_reg_l_bhw) 
                                                               >> 4U) 
                                                              & (3U 
                                                                 == 
                                                                 (7U 
                                                                  & vlSelf->top__DOT__mem_reg_ram_addr)))
                                                              ? (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__data_ram__DOT__ram
                                                                                [
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__mem_reg_ram_addr))] 
                                                                                >> 0x18U)))))
                                                              : 
                                                             ((((IData)(vlSelf->top__DOT__mem_reg_l_bhw) 
                                                                >> 4U) 
                                                               & (4U 
                                                                  == 
                                                                  (7U 
                                                                   & vlSelf->top__DOT__mem_reg_ram_addr)))
                                                               ? (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__data_ram__DOT__ram
                                                                                [
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__mem_reg_ram_addr))] 
                                                                                >> 0x20U)))))
                                                               : 
                                                              ((((IData)(vlSelf->top__DOT__mem_reg_l_bhw) 
                                                                 >> 4U) 
                                                                & (5U 
                                                                   == 
                                                                   (7U 
                                                                    & vlSelf->top__DOT__mem_reg_ram_addr)))
                                                                ? (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__data_ram__DOT__ram
                                                                                [
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__mem_reg_ram_addr))] 
                                                                                >> 0x28U)))))
                                                                : 
                                                               ((((IData)(vlSelf->top__DOT__mem_reg_l_bhw) 
                                                                  >> 4U) 
                                                                 & (5U 
                                                                    == 
                                                                    (7U 
                                                                     & vlSelf->top__DOT__mem_reg_ram_addr)))
                                                                 ? (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__data_ram__DOT__ram
                                                                                [
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__mem_reg_ram_addr))] 
                                                                                >> 0x30U)))))
                                                                 : 
                                                                ((((IData)(vlSelf->top__DOT__mem_reg_l_bhw) 
                                                                   >> 4U) 
                                                                  & (7U 
                                                                     == 
                                                                     (7U 
                                                                      & vlSelf->top__DOT__mem_reg_ram_addr)))
                                                                  ? (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__data_ram__DOT__ram
                                                                                [
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__mem_reg_ram_addr))] 
                                                                                >> 0x38U)))))
                                                                  : 
                                                                 ((((IData)(vlSelf->top__DOT__mem_reg_l_bhw) 
                                                                    >> 3U) 
                                                                   & (0U 
                                                                      == 
                                                                      (7U 
                                                                       & vlSelf->top__DOT__mem_reg_ram_addr)))
                                                                   ? 
                                                                  (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__data_ram__DOT__ram
                                                                                [
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__mem_reg_ram_addr))] 
                                                                                >> 0xfU)))))) 
                                                                    << 0x10U) 
                                                                   | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(
                                                                                vlSelf->top__DOT__data_ram__DOT__ram
                                                                                [
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__mem_reg_ram_addr))])))))
                                                                   : 
                                                                  ((((IData)(vlSelf->top__DOT__mem_reg_l_bhw) 
                                                                     >> 3U) 
                                                                    & (2U 
                                                                       == 
                                                                       (7U 
                                                                        & vlSelf->top__DOT__mem_reg_ram_addr)))
                                                                    ? 
                                                                   (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__data_ram__DOT__ram
                                                                                [
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__mem_reg_ram_addr))] 
                                                                                >> 0x1fU)))))) 
                                                                     << 0x10U) 
                                                                    | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__data_ram__DOT__ram
                                                                                [
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__mem_reg_ram_addr))] 
                                                                                >> 0x10U))))))
                                                                    : 
                                                                   ((((IData)(vlSelf->top__DOT__mem_reg_l_bhw) 
                                                                      >> 3U) 
                                                                     & (4U 
                                                                        == 
                                                                        (7U 
                                                                         & vlSelf->top__DOT__mem_reg_ram_addr)))
                                                                     ? 
                                                                    (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__data_ram__DOT__ram
                                                                                [
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__mem_reg_ram_addr))] 
                                                                                >> 0x2fU)))))) 
                                                                      << 0x10U) 
                                                                     | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__data_ram__DOT__ram
                                                                                [
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__mem_reg_ram_addr))] 
                                                                                >> 0x20U))))))
                                                                     : 
                                                                    ((((IData)(vlSelf->top__DOT__mem_reg_l_bhw) 
                                                                       >> 3U) 
                                                                      & (6U 
                                                                         == 
                                                                         (7U 
                                                                          & vlSelf->top__DOT__mem_reg_ram_addr)))
                                                                      ? 
                                                                     (((- (QData)((IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__data_ram__DOT__ram
                                                                                [
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__mem_reg_ram_addr))] 
                                                                                >> 0x3fU)))))) 
                                                                       << 0x10U) 
                                                                      | (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__data_ram__DOT__ram
                                                                                [
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__mem_reg_ram_addr))] 
                                                                                >> 0x30U))))))
                                                                      : 
                                                                     ((((IData)(vlSelf->top__DOT__mem_reg_l_bhw) 
                                                                        >> 2U) 
                                                                       & (0U 
                                                                          == 
                                                                          (7U 
                                                                           & vlSelf->top__DOT__mem_reg_ram_addr)))
                                                                       ? (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(
                                                                                vlSelf->top__DOT__data_ram__DOT__ram
                                                                                [
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__mem_reg_ram_addr))]))))
                                                                       : 
                                                                      ((((IData)(vlSelf->top__DOT__mem_reg_l_bhw) 
                                                                         >> 2U) 
                                                                        & (2U 
                                                                           == 
                                                                           (7U 
                                                                            & vlSelf->top__DOT__mem_reg_ram_addr)))
                                                                        ? (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__data_ram__DOT__ram
                                                                                [
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__mem_reg_ram_addr))] 
                                                                                >> 0x10U)))))
                                                                        : 
                                                                       ((((IData)(vlSelf->top__DOT__mem_reg_l_bhw) 
                                                                          >> 2U) 
                                                                         & (4U 
                                                                            == 
                                                                            (7U 
                                                                             & vlSelf->top__DOT__mem_reg_ram_addr)))
                                                                         ? (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__data_ram__DOT__ram
                                                                                [
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__mem_reg_ram_addr))] 
                                                                                >> 0x20U)))))
                                                                         : 
                                                                        ((((IData)(vlSelf->top__DOT__mem_reg_l_bhw) 
                                                                           >> 2U) 
                                                                          & (6U 
                                                                             == 
                                                                             (7U 
                                                                              & vlSelf->top__DOT__mem_reg_ram_addr)))
                                                                          ? (QData)((IData)(
                                                                                (0xffffU 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__data_ram__DOT__ram
                                                                                [
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__mem_reg_ram_addr))] 
                                                                                >> 0x30U)))))
                                                                          : 
                                                                         ((((IData)(vlSelf->top__DOT__mem_reg_l_bhw) 
                                                                            >> 1U) 
                                                                           & (0U 
                                                                              == 
                                                                              (7U 
                                                                               & vlSelf->top__DOT__mem_reg_ram_addr)))
                                                                           ? 
                                                                          (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__data_ram__DOT__ram
                                                                                [
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__mem_reg_ram_addr))] 
                                                                                >> 0x1fU))))))) 
                                                                            << 0x20U) 
                                                                           | (QData)((IData)(
                                                                                vlSelf->top__DOT__data_ram__DOT__ram
                                                                                [
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__mem_reg_ram_addr))])))
                                                                           : 
                                                                          ((((IData)(vlSelf->top__DOT__mem_reg_l_bhw) 
                                                                             >> 1U) 
                                                                            & (4U 
                                                                               == 
                                                                               (7U 
                                                                                & vlSelf->top__DOT__mem_reg_ram_addr)))
                                                                            ? 
                                                                           (((QData)((IData)(
                                                                                (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__data_ram__DOT__ram
                                                                                [
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__mem_reg_ram_addr))] 
                                                                                >> 0x3fU))))))) 
                                                                             << 0x20U) 
                                                                            | (QData)((IData)(
                                                                                (vlSelf->top__DOT__data_ram__DOT__ram
                                                                                [
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__mem_reg_ram_addr))] 
                                                                                >> 0x20U))))
                                                                            : 
                                                                           (((IData)(vlSelf->top__DOT__mem_reg_l_bhw) 
                                                                             & (0U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->top__DOT__mem_reg_ram_addr)))
                                                                             ? (QData)((IData)(
                                                                                vlSelf->top__DOT__data_ram__DOT__ram
                                                                                [
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__mem_reg_ram_addr))]))
                                                                             : 
                                                                            (((IData)(vlSelf->top__DOT__mem_reg_l_bhw) 
                                                                              & (4U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->top__DOT__mem_reg_ram_addr)))
                                                                              ? (QData)((IData)(
                                                                                (vlSelf->top__DOT__data_ram__DOT__ram
                                                                                [
                                                                                (1U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__mem_reg_ram_addr))] 
                                                                                >> 0x20U)))
                                                                              : 
                                                                             vlSelf->top__DOT__data_ram__DOT__ram
                                                                             [
                                                                             (1U 
                                                                              & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__mem_reg_ram_addr))]))))))))))))))))))))))))))));
    vlSelf->top__DOT__src1_sel_plus = ((((IData)(vlSelf->top__DOT__mem_reg_reg_wen) 
                                         & (0U != (IData)(vlSelf->top__DOT__mem_reg_rd))) 
                                        & ((IData)(vlSelf->top__DOT__exe_reg_rs1) 
                                           == (IData)(vlSelf->top__DOT__mem_reg_rd)))
                                        ? 2U : ((((IData)(vlSelf->top__DOT__wb_reg_reg_wen) 
                                                  & (0U 
                                                     != (IData)(vlSelf->top__DOT__wb_reg_rd))) 
                                                 & ((IData)(vlSelf->top__DOT__exe_reg_rs1) 
                                                    == (IData)(vlSelf->top__DOT__wb_reg_rd)))
                                                 ? 4U
                                                 : 1U));
    vlSelf->top__DOT__src2_sel_plus = ((((IData)(vlSelf->top__DOT__mem_reg_reg_wen) 
                                         & (0U != (IData)(vlSelf->top__DOT__mem_reg_rd))) 
                                        & ((IData)(vlSelf->top__DOT__exe_reg_rs2) 
                                           == (IData)(vlSelf->top__DOT__mem_reg_rd)))
                                        ? 2U : ((((IData)(vlSelf->top__DOT__wb_reg_reg_wen) 
                                                  & (0U 
                                                     != (IData)(vlSelf->top__DOT__wb_reg_rd))) 
                                                 & ((IData)(vlSelf->top__DOT__exe_reg_rs2) 
                                                    == (IData)(vlSelf->top__DOT__wb_reg_rd)))
                                                 ? 4U
                                                 : 1U));
    vlSelf->top__DOT__idu__DOT__inst_lb = (IData)((3U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__inst_id)));
    vlSelf->top__DOT__idu__DOT__inst_lh = (IData)((0x1003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__inst_id)));
    vlSelf->top__DOT__idu__DOT__inst_lw = (IData)((0x2003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__inst_id)));
    vlSelf->top__DOT__idu__DOT__inst_ld = (IData)((0x3003U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__inst_id)));
    vlSelf->top__DOT__idu__DOT__inst_lbu = (IData)(
                                                   (0x4003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__inst_id)));
    vlSelf->top__DOT__idu__DOT__inst_lhu = (IData)(
                                                   (0x5003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__inst_id)));
    vlSelf->top__DOT__idu__DOT__inst_lwu = (IData)(
                                                   (0x6003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__inst_id)));
    vlSelf->top__DOT__idu__DOT__TYPE_I = (((((0x13U 
                                              == (0x7fU 
                                                  & vlSelf->top__DOT__inst_id)) 
                                             | (0x73U 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->top__DOT__inst_id))) 
                                            | (0x67U 
                                               == (0x7fU 
                                                   & vlSelf->top__DOT__inst_id))) 
                                           | (3U == 
                                              (0x7fU 
                                               & vlSelf->top__DOT__inst_id))) 
                                          | (0xfU == 
                                             (0x7fU 
                                              & vlSelf->top__DOT__inst_id)));
    vlSelf->top__DOT__idu__DOT__TYPE_U = ((0x37U == 
                                           (0x7fU & vlSelf->top__DOT__inst_id)) 
                                          | (0x17U 
                                             == (0x7fU 
                                                 & vlSelf->top__DOT__inst_id)));
    vlSelf->top__DOT__b_check = (((IData)((0x63U == 
                                           (0x707fU 
                                            & vlSelf->top__DOT__inst_id))) 
                                  << 5U) | (((IData)(
                                                     (0x1063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__inst_id))) 
                                             << 4U) 
                                            | (((IData)(
                                                        (0x4063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__inst_id))) 
                                                << 3U) 
                                               | (((IData)(
                                                           (0x5063U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__inst_id))) 
                                                   << 2U) 
                                                  | (((IData)(
                                                              (0x6063U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top__DOT__inst_id))) 
                                                      << 1U) 
                                                     | (IData)(
                                                               (0x7063U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__inst_id))))))));
    vlSelf->top__DOT__idu__DOT__inst_jalr = (IData)(
                                                    (0x67U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__inst_id)));
    vlSelf->top__DOT__src2_rs2 = ((0U == (0x1fU & (vlSelf->top__DOT__inst_id 
                                                   >> 0x14U)))
                                   ? 0ULL : vlSelf->top__DOT__common_reg__DOT__reg_com
                                  [(0x1fU & (vlSelf->top__DOT__inst_id 
                                             >> 0x14U))]);
    vlSelf->top__DOT__rs1 = ((0x100073U == vlSelf->top__DOT__inst_id)
                              ? 0xaU : (0x1fU & (vlSelf->top__DOT__inst_id 
                                                 >> 0xfU)));
    vlSelf->top__DOT__src1 = ((1U == (IData)(vlSelf->top__DOT__src1_sel_plus))
                               ? ((1U == (IData)(vlSelf->top__DOT__exe_reg_src1_sel))
                                   ? vlSelf->top__DOT__exe_reg_pc
                                   : vlSelf->top__DOT__exe_reg_src1_rs1)
                               : ((2U == (IData)(vlSelf->top__DOT__src1_sel_plus))
                                   ? vlSelf->top__DOT__mem_reg_data_rd_in
                                   : vlSelf->top__DOT__wb_reg_data_rd_in));
    vlSelf->top__DOT__src2 = ((1U == (IData)(vlSelf->top__DOT__src2_sel_plus))
                               ? ((1U == (IData)(vlSelf->top__DOT__exe_reg_src2_sel))
                                   ? vlSelf->top__DOT__exe_reg_imm
                                   : vlSelf->top__DOT__exe_reg_src2_rs2)
                               : ((2U == (IData)(vlSelf->top__DOT__src2_sel_plus))
                                   ? vlSelf->top__DOT__mem_reg_data_rd_in
                                   : vlSelf->top__DOT__wb_reg_data_rd_in));
    vlSelf->top__DOT__imm = ((IData)(vlSelf->top__DOT__idu__DOT__TYPE_I)
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
                                      << 0x20U) | (QData)((IData)(
                                                                  (0xfffff000U 
                                                                   & vlSelf->top__DOT__inst_id))))
                                  : ((0x23U == (0x7fU 
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
                                      : ((0x6fU == 
                                          (0x7fU & vlSelf->top__DOT__inst_id))
                                          ? (((- (QData)((IData)(
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
                                          : ((0x63U 
                                              == (0x7fU 
                                                  & vlSelf->top__DOT__inst_id))
                                              ? (((- (QData)((IData)(
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
                                              : 0ULL)))));
    vlSelf->top__DOT__op = ((((((((IData)((0x33U == 
                                           (0x707fU 
                                            & vlSelf->top__DOT__inst_id))) 
                                  & (0U == (vlSelf->top__DOT__inst_id 
                                            >> 0x19U))) 
                                 | (IData)((0x13U == 
                                            (0x707fU 
                                             & vlSelf->top__DOT__inst_id)))) 
                                | (((((((IData)(vlSelf->top__DOT__idu__DOT__inst_lb) 
                                        | (IData)(vlSelf->top__DOT__idu__DOT__inst_lh)) 
                                       | (IData)(vlSelf->top__DOT__idu__DOT__inst_lw)) 
                                      | (IData)(vlSelf->top__DOT__idu__DOT__inst_ld)) 
                                     | (IData)(vlSelf->top__DOT__idu__DOT__inst_lbu)) 
                                    | (IData)(vlSelf->top__DOT__idu__DOT__inst_lhu)) 
                                   | (IData)(vlSelf->top__DOT__idu__DOT__inst_lwu))) 
                               | (0x23U == (0x7fU & vlSelf->top__DOT__inst_id))) 
                              | (0x17U == (0x7fU & vlSelf->top__DOT__inst_id))) 
                             | (0x63U == (0x7fU & vlSelf->top__DOT__inst_id)))
                             ? 1U : (((IData)((0x33U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__inst_id))) 
                                      & (0x20U == (vlSelf->top__DOT__inst_id 
                                                   >> 0x19U)))
                                      ? 2U : (((IData)(
                                                       (0x1033U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__inst_id))) 
                                               & (0U 
                                                  == 
                                                  (vlSelf->top__DOT__inst_id 
                                                   >> 0x19U)))
                                               ? 0x80U
                                               : (((IData)(
                                                           (0x2033U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__inst_id))) 
                                                   & (0U 
                                                      == 
                                                      (vlSelf->top__DOT__inst_id 
                                                       >> 0x19U)))
                                                   ? 4U
                                                   : 
                                                  (((IData)(
                                                            (0x3033U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__inst_id))) 
                                                    & (0U 
                                                       == 
                                                       (vlSelf->top__DOT__inst_id 
                                                        >> 0x19U)))
                                                    ? 8U
                                                    : 
                                                   (((IData)(
                                                             (0x4033U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__inst_id))) 
                                                     & (0U 
                                                        == 
                                                        (vlSelf->top__DOT__inst_id 
                                                         >> 0x19U)))
                                                     ? 0x40U
                                                     : 
                                                    (((IData)(
                                                              (0x5033U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top__DOT__inst_id))) 
                                                      & (0U 
                                                         == 
                                                         (vlSelf->top__DOT__inst_id 
                                                          >> 0x19U)))
                                                      ? 0x100U
                                                      : 
                                                     (((IData)(
                                                               (0x5033U 
                                                                == 
                                                                (0x707fU 
                                                                 & vlSelf->top__DOT__inst_id))) 
                                                       & (0x20U 
                                                          == 
                                                          (vlSelf->top__DOT__inst_id 
                                                           >> 0x19U)))
                                                       ? 0x200U
                                                       : 
                                                      (((IData)(
                                                                (0x6033U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->top__DOT__inst_id))) 
                                                        & (0U 
                                                           == 
                                                           (vlSelf->top__DOT__inst_id 
                                                            >> 0x19U)))
                                                        ? 0x20U
                                                        : 
                                                       (((IData)(
                                                                 (0x7033U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->top__DOT__inst_id))) 
                                                         & (0U 
                                                            == 
                                                            (vlSelf->top__DOT__inst_id 
                                                             >> 0x19U)))
                                                         ? 0x10U
                                                         : 
                                                        ((0x37U 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->top__DOT__inst_id))
                                                          ? 0x400U
                                                          : 
                                                         ((0x6fU 
                                                           == 
                                                           (0x7fU 
                                                            & vlSelf->top__DOT__inst_id))
                                                           ? 0x800U
                                                           : 
                                                          ((IData)(vlSelf->top__DOT__idu__DOT__inst_jalr)
                                                            ? 0x800U
                                                            : 0U)))))))))))));
    vlSelf->top__DOT__stall_control = (((IData)(vlSelf->top__DOT__exe_reg_data_ren) 
                                        & (((IData)(vlSelf->top__DOT__exe_reg_rd) 
                                            == (IData)(vlSelf->top__DOT__rs1)) 
                                           | ((IData)(vlSelf->top__DOT__exe_reg_rd) 
                                              == (0x1fU 
                                                  & (vlSelf->top__DOT__inst_id 
                                                     >> 0x14U)))))
                                        ? 1U : 0U);
    vlSelf->top__DOT__pc_add_rs1_sel = ((((IData)(vlSelf->top__DOT__exe_reg_reg_wen) 
                                          & (0U != (IData)(vlSelf->top__DOT__exe_reg_rd))) 
                                         & ((IData)(vlSelf->top__DOT__rs1) 
                                            == (IData)(vlSelf->top__DOT__exe_reg_rd)))
                                         ? 2U : ((((IData)(vlSelf->top__DOT__mem_reg_reg_wen) 
                                                   & (0U 
                                                      != (IData)(vlSelf->top__DOT__mem_reg_rd))) 
                                                  & ((IData)(vlSelf->top__DOT__rs1) 
                                                     == (IData)(vlSelf->top__DOT__mem_reg_rd)))
                                                  ? 4U
                                                  : 
                                                 ((((IData)(vlSelf->top__DOT__wb_reg_reg_wen) 
                                                    & (0U 
                                                       != (IData)(vlSelf->top__DOT__wb_reg_rd))) 
                                                   & ((IData)(vlSelf->top__DOT__rs1) 
                                                      == (IData)(vlSelf->top__DOT__wb_reg_rd)))
                                                   ? 8U
                                                   : 1U)));
    vlSelf->top__DOT__src1_rs1 = ((0U == (IData)(vlSelf->top__DOT__rs1))
                                   ? 0ULL : vlSelf->top__DOT__common_reg__DOT__reg_com
                                  [vlSelf->top__DOT__rs1]);
    vlSelf->top__DOT__alu__DOT__data_b = ((IData)((0U 
                                                   != 
                                                   (0xeU 
                                                    & (IData)(vlSelf->top__DOT__exe_reg_op))))
                                           ? (~ vlSelf->top__DOT__src2)
                                           : vlSelf->top__DOT__src2);
    __Vtemp18[0U] = 1U;
    __Vtemp18[1U] = 0U;
    __Vtemp18[2U] = 0U;
    VL_EXTEND_WQ(65,64, __Vtemp19, vlSelf->top__DOT__src1_rs1);
    VL_EXTEND_WQ(65,64, __Vtemp20, (~ vlSelf->top__DOT__src2_rs2));
    VL_ADD_W(3, __Vtemp21, __Vtemp19, __Vtemp20);
    VL_ADD_W(3, __Vtemp22, __Vtemp18, __Vtemp21);
    vlSelf->top__DOT__b_check_out__DOT__data_cout = 
        (1U & __Vtemp22[2U]);
    vlSelf->top__DOT__b_check_out__DOT__blt_check = 
        (1U & (((IData)((vlSelf->top__DOT__src1_rs1 
                         >> 0x3fU)) & (~ (IData)((vlSelf->top__DOT__src2_rs2 
                                                  >> 0x3fU)))) 
               | ((~ ((IData)((vlSelf->top__DOT__src1_rs1 
                               >> 0x3fU)) ^ (IData)(
                                                    (vlSelf->top__DOT__src2_rs2 
                                                     >> 0x3fU)))) 
                  & (IData)(((1ULL + (vlSelf->top__DOT__src1_rs1 
                                      + (~ vlSelf->top__DOT__src2_rs2))) 
                             >> 0x3fU)))));
    VL_EXTEND_WI(65,1, __Vtemp24, (IData)(vlSelf->top__DOT__alu__DOT__data_cin));
    vlSelf->top__DOT__alu__DOT__data_result = ((vlSelf->top__DOT__src1 
                                                + vlSelf->top__DOT__alu__DOT__data_b) 
                                               + (((QData)((IData)(
                                                                   __Vtemp24[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    __Vtemp24[0U]))));
    vlSelf->top__DOT__pc_sel_out = ((1U & ((((((IData)(vlSelf->top__DOT__b_check) 
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
                                              & (IData)(vlSelf->top__DOT__b_check_out__DOT__data_cout))))
                                     ? 2U : ((IData)(vlSelf->top__DOT__idu__DOT__inst_jalr)
                                              ? 4U : 
                                             ((0x6fU 
                                               == (0x7fU 
                                                   & vlSelf->top__DOT__inst_id))
                                               ? 2U
                                               : 1U)));
    vlSelf->top__DOT__alu__DOT__add_sub_result = ((IData)(vlSelf->top__DOT__exe_reg_data_wen)
                                                   ? 
                                                  (vlSelf->top__DOT__src1 
                                                   + vlSelf->top__DOT__exe_reg_imm)
                                                   : vlSelf->top__DOT__alu__DOT__data_result);
    VL_EXTEND_WQ(65,64, __Vtemp26, vlSelf->top__DOT__src1);
    VL_EXTEND_WQ(65,64, __Vtemp27, vlSelf->top__DOT__alu__DOT__data_b);
    VL_ADD_W(3, __Vtemp28, __Vtemp26, __Vtemp27);
    VL_EXTEND_WI(65,1, __Vtemp29, (IData)(vlSelf->top__DOT__alu__DOT__data_cin));
    VL_ADD_W(3, __Vtemp30, __Vtemp28, __Vtemp29);
    vlSelf->top__DOT__data_rd_in = ((((((((((((QData)((IData)(
                                                              (- (IData)((IData)(
                                                                                (0U 
                                                                                != 
                                                                                (3U 
                                                                                & (IData)(vlSelf->top__DOT__exe_reg_op)))))))) 
                                              & vlSelf->top__DOT__alu__DOT__add_sub_result) 
                                             | ((QData)((IData)(
                                                                (- (IData)(
                                                                           (1U 
                                                                            & ((IData)(vlSelf->top__DOT__exe_reg_op) 
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
                                                                           & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                                                              >> 3U)))))) 
                                               & (QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (1U 
                                                                      & __Vtemp30[2U]))))))) 
                                           | ((QData)((IData)(
                                                              (- (IData)(
                                                                         (1U 
                                                                          & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                                                             >> 4U)))))) 
                                              & (vlSelf->top__DOT__src1 
                                                 & vlSelf->top__DOT__src2))) 
                                          | ((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                                                            >> 5U)))))) 
                                             & (vlSelf->top__DOT__src1 
                                                | vlSelf->top__DOT__src2))) 
                                         | ((QData)((IData)(
                                                            (- (IData)(
                                                                       (1U 
                                                                        & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                                                           >> 6U)))))) 
                                            & (vlSelf->top__DOT__src1 
                                               ^ vlSelf->top__DOT__src2))) 
                                        | ((QData)((IData)(
                                                           (- (IData)(
                                                                      (1U 
                                                                       & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                                                          >> 7U)))))) 
                                           & (vlSelf->top__DOT__src1 
                                              << (0x3fU 
                                                  & (IData)(vlSelf->top__DOT__src2))))) 
                                       | ((QData)((IData)(
                                                          (- (IData)(
                                                                     (1U 
                                                                      & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                                                         >> 8U)))))) 
                                          & (vlSelf->top__DOT__src1 
                                             >> (0x3fU 
                                                 & (IData)(vlSelf->top__DOT__src2))))) 
                                      | ((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                                                        >> 9U)))))) 
                                         & (vlSelf->top__DOT__src1 
                                            >> (0x3fU 
                                                & (IData)(vlSelf->top__DOT__src2))))) 
                                     | ((QData)((IData)(
                                                        (- (IData)(
                                                                   (1U 
                                                                    & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                                                       >> 0xaU)))))) 
                                        & vlSelf->top__DOT__src2)) 
                                    | ((QData)((IData)(
                                                       (- (IData)(
                                                                  (1U 
                                                                   & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                                                      >> 0xbU)))))) 
                                       & (4ULL + vlSelf->top__DOT__src1)));
    vlSelf->top__DOT__cpu_dnpc = ((1U == (IData)(vlSelf->top__DOT__pc_sel_out))
                                   ? (4ULL + vlSelf->top__DOT__cpu_pc)
                                   : ((2U == (IData)(vlSelf->top__DOT__pc_sel_out))
                                       ? (vlSelf->top__DOT__id_reg_pc 
                                          + vlSelf->top__DOT__imm)
                                       : (0xfffffffffffffffeULL 
                                          & (((1U == (IData)(vlSelf->top__DOT__pc_add_rs1_sel))
                                               ? vlSelf->top__DOT__src1_rs1
                                               : ((2U 
                                                   == (IData)(vlSelf->top__DOT__pc_add_rs1_sel))
                                                   ? vlSelf->top__DOT__data_rd_in
                                                   : 
                                                  ((4U 
                                                    == (IData)(vlSelf->top__DOT__pc_add_rs1_sel))
                                                    ? vlSelf->top__DOT__mem_reg_data_rd_in
                                                    : vlSelf->top__DOT__wb_reg_data_rd_in))) 
                                             + vlSelf->top__DOT__imm))));
}

void Vtop___024root___eval_initial(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vtop___024root___initial__TOP__2(vlSelf);
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
    vlSelf->top__DOT__stall_control = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__exe_reg_data_ren = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mem_reg_data_ren = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ebreak_out = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mem_reg_reg_wen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__mem_reg_data_wen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__exe_reg_data_wen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__exe_reg_reg_wen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__wb_reg_reg_wen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__wb_reg_load_sel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__mem_reg_load_sel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__exe_reg_src1_sel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__exe_reg_src2_sel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__exe_reg_load_sel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__mem_reg_s_bhwd = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__exe_reg_s_bhwd = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__pc_sel_out = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__src1_sel_plus = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__src2_sel_plus = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__wb_reg_pc_sel = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__mem_reg_pc_sel = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__exe_reg_pc_sel = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__pc_add_rs1_sel = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__exe_reg_rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__exe_reg_rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__mem_reg_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__exe_reg_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__wb_reg_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__b_check = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__exe_reg_l_bhw = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__mem_reg_l_bhw = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__op = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__op_out = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__exe_reg_op = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__inst_addr = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mem_reg_ram_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__inst_id = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__inst_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__imm = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__if_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exe_reg_src1_rs1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exe_reg_src1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exe_reg_src2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exe_reg_src2_rs2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mem_reg_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__wb_reg_rdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__wb_reg_data_rd_in = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mem_reg_src2_rs2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mem_reg_data_rd_in = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mem_reg_cpu_dnpc_in1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__mem_reg_cpu_dnpc_in2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exe_reg_imm = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__wb_reg_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__wb_reg_cpu_dnpc_in1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__wb_reg_cpu_dnpc_in2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__exe_reg_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_ifpc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__if_reg_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__id_reg_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__cpu_dnpc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__rdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__src1_rs1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__src2_rs2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__src1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__src2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__data_rd_in = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<65536; ++__Vi0) {
        vlSelf->top__DOT__inst_ram__DOT__rom[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__idu__DOT__TYPE_I = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__idu__DOT__TYPE_U = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__idu__DOT__inst_lwu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__idu__DOT__inst_jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__idu__DOT__inst_lb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__idu__DOT__inst_lh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__idu__DOT__inst_lw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__idu__DOT__inst_ld = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__idu__DOT__inst_lbu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__idu__DOT__inst_lhu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__b_check_out__DOT__blt_check = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__b_check_out__DOT__data_cout = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__common_reg__DOT__reg_com[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__alu__DOT__add_sub_result = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__alu__DOT__data_b = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__alu__DOT__data_result = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__alu__DOT__data_cin = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__data_ram__DOT__rdata_out = VL_RAND_RESET_Q(64);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__data_ram__DOT__ram[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__ebreak_list__DOT__op_1 = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__ebreak_list__DOT__ebreak_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__ebreak_list__DOT__inst_1 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
