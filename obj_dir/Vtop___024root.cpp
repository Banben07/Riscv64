// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "Vtop___024root.h"
#include "Vtop__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {31, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

extern "C" void set_ram_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vtop___024root____Vdpiimwrap_top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__set_ram_ptr__Vdpioc2_TOP(const VlUnpacked<IData/*31:0*/, 400001> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root____Vdpiimwrap_top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__set_ram_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {400000, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT32, VLVD_IN, VerilatedVarProps::Packed(), 31, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_ram_ptr(&a__Vopenarray);
}

extern const VlUnpacked<CData/*0:0*/, 1024> Vtop__ConstPool__TABLE_8ef07147_0;
extern const VlUnpacked<CData/*3:0*/, 1024> Vtop__ConstPool__TABLE_f6766401_0;

VL_INLINE_OPT void Vtop___024root___sequent__TOP__2(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___sequent__TOP__2\n"); );
    // Variables
    CData/*2:0*/ __Vdly__top__DOT__u_ysyx_22040125_AXI__DOT__axi_write_state;
    CData/*2:0*/ __Vdly__top__DOT__u_ysyx_22040125_AXI__DOT__axi_read_state;
    CData/*2:0*/ __Vdly__top__DOT__u_ysyx_22040125_AXI__DOT__axi_r_back_state;
    CData/*3:0*/ __Vdly__top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state;
    SData/*9:0*/ __Vtableidx1;
    IData/*31:0*/ __Vdly__top__DOT__u_ysyx_22040125_CPU__DOT__inst_id;
    VlWide<3>/*95:0*/ __Vtemp1;
    VlWide<3>/*95:0*/ __Vtemp3;
    VlWide<3>/*95:0*/ __Vtemp4;
    VlWide<3>/*95:0*/ __Vtemp5;
    VlWide<3>/*95:0*/ __Vtemp6;
    VlWide<3>/*95:0*/ __Vtemp7;
    VlWide<3>/*95:0*/ __Vtemp10;
    VlWide<3>/*95:0*/ __Vtemp11;
    VlWide<3>/*95:0*/ __Vtemp12;
    VlWide<3>/*95:0*/ __Vtemp13;
    VlWide<3>/*95:0*/ __Vtemp14;
    QData/*63:0*/ __Vdly__top__DOT__u_ysyx_22040125_CPU__DOT__cpu_pc;
    QData/*63:0*/ __Vdly__top__DOT__u_ysyx_22040125_CPU__DOT__id_reg_pc;
    // Body
    __Vdly__top__DOT__u_ysyx_22040125_CPU__DOT__cpu_pc 
        = vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__cpu_pc;
    __Vdly__top__DOT__u_ysyx_22040125_CPU__DOT__id_reg_pc 
        = vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id_reg_pc;
    __Vdly__top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state 
        = vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state;
    __Vdly__top__DOT__u_ysyx_22040125_AXI__DOT__axi_r_back_state 
        = vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_r_back_state;
    __Vdly__top__DOT__u_ysyx_22040125_AXI__DOT__axi_read_state 
        = vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_read_state;
    __Vdly__top__DOT__u_ysyx_22040125_AXI__DOT__axi_write_state 
        = vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_write_state;
    __Vdly__top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
        = vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id;
    if ((((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_en) 
          & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_size) 
             >> 2U)) & (0U == (7U & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr)))) {
        vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound1 
            = (0xffU & (IData)(vlSelf->top__DOT__wdata));
        if ((0x61a80U >= (0x7ffffU & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr))) {
            vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__ram[(0x7ffffU 
                                                                              & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr)] 
                = ((0xffffff00U & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__ram
                    [(0x7ffffU & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr)]) 
                   | (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound1));
        }
    }
    if ((((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_en) 
          & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_size) 
             >> 2U)) & (1U == (7U & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr)))) {
        vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound2 
            = (0xffU & (IData)(vlSelf->top__DOT__wdata));
        if ((0x61a80U >= (0x7ffffU & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr))) {
            vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__ram[(0x7ffffU 
                                                                              & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr)] 
                = ((0xffff00ffU & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__ram
                    [(0x7ffffU & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr)]) 
                   | ((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound2) 
                      << 8U));
        }
    }
    if ((((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_en) 
          & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_size) 
             >> 2U)) & (2U == (7U & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr)))) {
        vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound3 
            = (0xffU & (IData)(vlSelf->top__DOT__wdata));
        if ((0x61a80U >= (0x7ffffU & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr))) {
            vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__ram[(0x7ffffU 
                                                                              & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr)] 
                = ((0xff00ffffU & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__ram
                    [(0x7ffffU & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr)]) 
                   | ((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound3) 
                      << 0x10U));
        }
    }
    if ((((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_en) 
          & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_size) 
             >> 2U)) & (3U == (7U & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr)))) {
        vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound4 
            = (0xffU & (IData)(vlSelf->top__DOT__wdata));
        if ((0x61a80U >= (0x7ffffU & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr))) {
            vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__ram[(0x7ffffU 
                                                                              & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr)] 
                = ((0xffffffU & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__ram
                    [(0x7ffffU & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr)]) 
                   | ((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound4) 
                      << 0x18U));
        }
    }
    if ((((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_en) 
          & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_size) 
             >> 2U)) & (4U == (7U & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr)))) {
        vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound5 
            = (0xffU & (IData)(vlSelf->top__DOT__wdata));
        if ((0x61a80U >= (0x7ffffU & ((IData)(1U) + vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr)))) {
            vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__ram[(0x7ffffU 
                                                                              & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr))] 
                = ((0xffffff00U & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__ram
                    [(0x7ffffU & ((IData)(1U) + vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr))]) 
                   | (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound5));
        }
    }
    if ((((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_en) 
          & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_size) 
             >> 2U)) & (5U == (7U & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr)))) {
        vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound6 
            = (0xffU & (IData)(vlSelf->top__DOT__wdata));
        if ((0x61a80U >= (0x7ffffU & ((IData)(1U) + vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr)))) {
            vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__ram[(0x7ffffU 
                                                                              & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr))] 
                = ((0xffff00ffU & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__ram
                    [(0x7ffffU & ((IData)(1U) + vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr))]) 
                   | ((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound6) 
                      << 8U));
        }
    }
    if ((((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_en) 
          & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_size) 
             >> 2U)) & (6U == (7U & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr)))) {
        vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound7 
            = (0xffU & (IData)(vlSelf->top__DOT__wdata));
        if ((0x61a80U >= (0x7ffffU & ((IData)(1U) + vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr)))) {
            vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__ram[(0x7ffffU 
                                                                              & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr))] 
                = ((0xff00ffffU & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__ram
                    [(0x7ffffU & ((IData)(1U) + vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr))]) 
                   | ((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound7) 
                      << 0x10U));
        }
    }
    if ((((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_en) 
          & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_size) 
             >> 2U)) & (7U == (7U & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr)))) {
        vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound8 
            = (0xffU & (IData)(vlSelf->top__DOT__wdata));
        if ((0x61a80U >= (0x7ffffU & ((IData)(1U) + vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr)))) {
            vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__ram[(0x7ffffU 
                                                                              & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr))] 
                = ((0xffffffU & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__ram
                    [(0x7ffffU & ((IData)(1U) + vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr))]) 
                   | ((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound8) 
                      << 0x18U));
        }
    }
    if ((((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_en) 
          & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_size) 
             >> 1U)) & (0U == (7U & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr)))) {
        vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound9 
            = (0xffffU & (IData)(vlSelf->top__DOT__wdata));
        if ((0x61a80U >= (0x7ffffU & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr))) {
            vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__ram[(0x7ffffU 
                                                                              & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr)] 
                = ((0xffff0000U & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__ram
                    [(0x7ffffU & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr)]) 
                   | (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound9));
        }
    }
    if ((((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_en) 
          & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_size) 
             >> 1U)) & (2U == (7U & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr)))) {
        vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound10 
            = (0xffffU & (IData)(vlSelf->top__DOT__wdata));
        if ((0x61a80U >= (0x7ffffU & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr))) {
            vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__ram[(0x7ffffU 
                                                                              & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr)] 
                = ((0xffffU & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__ram
                    [(0x7ffffU & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr)]) 
                   | ((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound10) 
                      << 0x10U));
        }
    }
    if ((((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_en) 
          & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_size) 
             >> 1U)) & (4U == (7U & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr)))) {
        vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound11 
            = (0xffffU & (IData)(vlSelf->top__DOT__wdata));
        if ((0x61a80U >= (0x7ffffU & ((IData)(1U) + vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr)))) {
            vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__ram[(0x7ffffU 
                                                                              & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr))] 
                = ((0xffff0000U & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__ram
                    [(0x7ffffU & ((IData)(1U) + vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr))]) 
                   | (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound11));
        }
    }
    if ((((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_en) 
          & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_size) 
             >> 1U)) & (6U == (7U & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr)))) {
        vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound12 
            = (0xffffU & (IData)(vlSelf->top__DOT__wdata));
        if ((0x61a80U >= (0x7ffffU & ((IData)(1U) + vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr)))) {
            vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__ram[(0x7ffffU 
                                                                              & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr))] 
                = ((0xffffU & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__ram
                    [(0x7ffffU & ((IData)(1U) + vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr))]) 
                   | ((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound12) 
                      << 0x10U));
        }
    }
    if ((((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_en) 
          & (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_size)) 
         & (0U == (7U & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr)))) {
        vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound13 
            = (IData)(vlSelf->top__DOT__wdata);
        if ((0x61a80U >= (0x7ffffU & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr))) {
            vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__ram[(0x7ffffU 
                                                                              & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr)] 
                = vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound13;
        }
    }
    if ((((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_en) 
          & (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_size)) 
         & (4U == (7U & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr)))) {
        vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound14 
            = (IData)(vlSelf->top__DOT__wdata);
        if ((0x61a80U >= (0x7ffffU & ((IData)(1U) + vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr)))) {
            vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__ram[(0x7ffffU 
                                                                              & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr))] 
                = vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound14;
        }
    }
    if (((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_en) 
         & (0U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_size)))) {
        vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound15 
            = (IData)((vlSelf->top__DOT__wdata >> 0x20U));
        if ((0x61a80U >= (0x7ffffU & ((IData)(1U) + vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr)))) {
            vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__ram[(0x7ffffU 
                                                                              & ((IData)(1U) 
                                                                                + vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr))] 
                = vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound15;
        }
        vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound16 
            = (IData)(vlSelf->top__DOT__wdata);
        if ((0x61a80U >= (0x7ffffU & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr))) {
            vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__ram[(0x7ffffU 
                                                                              & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr)] 
                = vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound16;
        }
    }
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        vlSelf->success = 0U;
    }
    if (VL_UNLIKELY(((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__ebreak_out) 
                     & (0ULL == vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com
                        [0xaU])))) {
        VL_WRITEF("\033[1;32mHIT GOOD TRAP\033[0m\n");
        vlSelf->success = 1U;
        VL_FINISH_MT("vsrc/ysyx_22040125_CPU.v", 313, "");
    } else if (VL_UNLIKELY(((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__ebreak_out) 
                            & (0ULL != vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com
                               [0xaU])))) {
        VL_WRITEF("\033[1;31mHIT BAD TRAP\033[0m\n");
        VL_FINISH_MT("vsrc/ysyx_22040125_CPU.v", 317, "");
    } else if (VL_UNLIKELY(((0x80000100ULL <= vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__cpu_pc) 
                            & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__stall) 
                               >> 1U)))) {
        VL_WRITEF("\033[1;31mPaused at: PC=0x%x\033[0m\n\033[1;31mFAIL! Please add instructions!\033[0m\n",
                  32,(IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id_reg_pc));
        VL_FINISH_MT("vsrc/ysyx_22040125_CPU.v", 321, "");
    } else if (VL_UNLIKELY(((0x80000100ULL <= vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__cpu_pc) 
                            & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__stall) 
                               >> 2U)))) {
        VL_WRITEF("\033[1;31mPaused at: PC=0x%x\033[0m\n\033[1;31mFAIL! Please check the inst's addr!\033[0m\n",
                  32,(IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__cpu_pc));
        VL_FINISH_MT("vsrc/ysyx_22040125_CPU.v", 325, "");
    }
    if (VL_UNLIKELY(((0x80000004ULL <= vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__cpu_pc) 
                     & (0x13U != vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))) {
        VL_WRITEF("\033[1;32mPC=0x%x\033[0m\n",32,(IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_pc));
    }
    if (((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_reg_wen) 
         & (0U != (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_rd)))) {
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_rd] 
            = vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__data_rd;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_pc_sel 
            = vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_pc_sel;
        __Vdly__top__DOT__u_ysyx_22040125_CPU__DOT__cpu_pc 
            = ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__stall_l)
                ? vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__cpu_pc
                : vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__cpu_dnpc);
        __Vdly__top__DOT__u_ysyx_22040125_CPU__DOT__id_reg_pc 
            = ((1U & (((1U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_out))
                        ? 0U : 1U) & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__stall_l))))
                ? vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__cpu_pc
                : ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__stall_l)
                    ? vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id_reg_pc
                    : vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__cpu_pc));
    } else {
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_pc_sel = 1U;
        __Vdly__top__DOT__u_ysyx_22040125_CPU__DOT__cpu_pc = 0x80000000ULL;
        __Vdly__top__DOT__u_ysyx_22040125_CPU__DOT__id_reg_pc = 0ULL;
    }
    __Vtableidx1 = (((5U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_write_state)) 
                     << 9U) | (((4U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_write_state)) 
                                << 8U) | (((IData)(vlSelf->top__DOT__rready) 
                                           << 7U) | 
                                          (((3U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_write_state)) 
                                            << 6U) 
                                           | (((IData)(vlSelf->top__DOT__arvalid) 
                                               << 5U) 
                                              | (((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->rst)))))));
    if (Vtop__ConstPool__TABLE_8ef07147_0[__Vtableidx1]) {
        __Vdly__top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state 
            = Vtop__ConstPool__TABLE_f6766401_0[__Vtableidx1];
    }
    if (((IData)(vlSelf->top__DOT__arvalid) & (1U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state)))) {
        vlSelf->top__DOT__rid = vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_data_ren;
    }
    if (((IData)(vlSelf->top__DOT__arvalid) & (1U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state)))) {
        vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_size 
            = (((IData)((0U != (0x30U & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_l_bhw)))) 
                << 2U) | (((IData)((0U != (0xcU & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_l_bhw)))) 
                           << 1U) | (IData)((0U != 
                                             (3U & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_l_bhw))))));
    }
    if (((IData)(vlSelf->top__DOT__arvalid) & (1U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state)))) {
        vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_addr 
            = (((1U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_read_state)) 
                | (6U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_read_state)))
                ? (((- (IData)((1U & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__stall_mem))))) 
                    & (IData)(((vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__cpu_pc 
                                - 0x80000000ULL) >> 2U))) 
                   | (0x3ffffffeU & ((- (IData)((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_data_ren))) 
                                     & ((vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_ram_addr 
                                         - (IData)(0x80000000U)) 
                                        >> 2U)))) : 0U);
    }
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_w_check 
        = ((IData)(vlSelf->rst) & ((((((((((((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_addiw) 
                                             | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_remw)) 
                                            | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_slliw)) 
                                           | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_srliw)) 
                                          | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_sraiw)) 
                                         | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_addw)) 
                                        | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_subw)) 
                                       | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_sllw)) 
                                      | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_srlw)) 
                                     | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_sraw)) 
                                    | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_mulw)) 
                                   | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_divw)));
    if (vlSelf->rst) {
        if ((4U & (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_write_state))) {
            if ((2U & (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_write_state))) {
                __Vdly__top__DOT__u_ysyx_22040125_AXI__DOT__axi_write_state = 0U;
                vlSelf->top__DOT__data_w_valid = 0U;
            } else if ((1U & (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_write_state))) {
                if (vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__b_check) {
                    __Vdly__top__DOT__u_ysyx_22040125_AXI__DOT__axi_write_state = 0U;
                    vlSelf->top__DOT__data_w_valid = 1U;
                }
            } else if (vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__w_check) {
                __Vdly__top__DOT__u_ysyx_22040125_AXI__DOT__axi_write_state = 5U;
            }
        } else if ((2U & (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_write_state))) {
            if ((1U & (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_write_state))) {
                if (vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__aw_check) {
                    __Vdly__top__DOT__u_ysyx_22040125_AXI__DOT__axi_write_state = 4U;
                }
            } else {
                __Vdly__top__DOT__u_ysyx_22040125_AXI__DOT__axi_write_state = 0U;
                vlSelf->top__DOT__data_w_valid = 0U;
            }
        } else if ((1U & (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_write_state))) {
            __Vdly__top__DOT__u_ysyx_22040125_AXI__DOT__axi_write_state = 0U;
            vlSelf->top__DOT__data_w_valid = 0U;
        } else {
            vlSelf->top__DOT__data_w_valid = 0U;
            if (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_data_wen) {
                __Vdly__top__DOT__u_ysyx_22040125_AXI__DOT__axi_write_state = 3U;
            }
        }
    } else {
        __Vdly__top__DOT__u_ysyx_22040125_AXI__DOT__axi_write_state = 0U;
        vlSelf->top__DOT__data_w_valid = 0U;
    }
    if (vlSelf->rst) {
        __Vdly__top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
            = ((1U & (((1U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_out))
                        ? 0U : 1U) & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__stall_l))))
                ? 0x13U : ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__stall_l)
                            ? vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id
                            : vlSelf->top__DOT__inst_r));
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_src2_rs2 
            = ((4U & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_s_bhwd))
                ? (((QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)))) 
                    << 0x38U) | (((QData)((IData)((0xffU 
                                                   & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)))) 
                                  << 0x30U) | (((QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)))) 
                                                << 0x28U) 
                                               | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)))) 
                                                   << 0x20U) 
                                                  | (((QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)))) 
                                                      << 0x18U) 
                                                     | (((QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)))) 
                                                         << 0x10U) 
                                                        | (((QData)((IData)(
                                                                            (0xffU 
                                                                             & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)))) 
                                                            << 8U) 
                                                           | (QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)))))))))))
                : ((2U & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_s_bhwd))
                    ? (((QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)))) 
                        << 0x30U) | (((QData)((IData)(
                                                      (0xffffU 
                                                       & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)))) 
                                      << 0x20U) | (
                                                   ((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)))))))
                    : ((1U & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_s_bhwd))
                        ? (((QData)((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)) 
                            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)))
                        : vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)));
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op 
            = (0x7fffU & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__op));
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_pc 
            = vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_pc;
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_src1_rs1 
            = vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1_rs1;
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_src2_rs2 
            = vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2_rs2;
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_imm 
            = vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__imm;
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_rs1 
            = vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__rs1;
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_rs2 
            = (0x1fU & (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                        >> 0x14U));
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_src1_sel 
            = ((((0x6fU == (0x7fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)) 
                 | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_jalr)) 
                | (0x17U == (0x7fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))
                ? 1U : 2U);
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_src2_sel 
            = ((((0x6fU == (0x7fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)) 
                 | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__TYPE_U)) 
                | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__TYPE_I))
                ? 1U : 2U);
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_rdata 
            = vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__rdata;
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_load_sel 
            = vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_load_sel;
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_data_rd_in 
            = vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_data_rd_in;
    } else {
        __Vdly__top__DOT__u_ysyx_22040125_CPU__DOT__inst_id = 0U;
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_src2_rs2 = 0ULL;
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op = 0U;
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_pc = 0ULL;
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_src1_rs1 = 0ULL;
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_src2_rs2 = 0ULL;
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_imm = 0ULL;
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_rs1 = 0U;
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_rs2 = 0U;
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_src1_sel = 0U;
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_src2_sel = 0U;
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_rdata = 0ULL;
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_load_sel = 0U;
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_data_rd_in = 0ULL;
    }
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__cpu_pc 
        = __Vdly__top__DOT__u_ysyx_22040125_CPU__DOT__cpu_pc;
    if ((1U & (~ ((IData)(vlSelf->top__DOT__arvalid) 
                  & (1U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state)))))) {
        if (((3U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_write_state)) 
             & (1U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state)))) {
            vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_size 
                = vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_s_bhwd;
        }
    }
    if ((1U & (~ ((IData)(vlSelf->top__DOT__arvalid) 
                  & (1U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state)))))) {
        if (((3U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_write_state)) 
             & (1U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state)))) {
            vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr 
                = (0x3ffffffeU & ((- (IData)((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_data_wen))) 
                                  & ((vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_ram_addr 
                                      - (IData)(0x80000000U)) 
                                     >> 2U)));
        }
    }
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__ebreak_out 
        = ((IData)(vlSelf->rst) & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__ebreak_list__DOT__ebreak_1));
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_rd 
            = vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_rd;
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_reg_wen 
            = ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_reg_wen) 
               & 1U);
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_pc_sel 
            = vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_pc_sel;
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_l_bhw 
            = vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_l_bhw;
    } else {
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_rd = 0U;
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_reg_wen = 0U;
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_pc_sel = 1U;
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_l_bhw = 0U;
    }
    if (vlSelf->rst) {
        if ((0U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_read_state))) {
            if (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_data_ren) {
                __Vdly__top__DOT__u_ysyx_22040125_AXI__DOT__axi_read_state = 1U;
            }
            if ((1U & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__stall_mem)))) {
                __Vdly__top__DOT__u_ysyx_22040125_AXI__DOT__axi_read_state = 6U;
            }
        } else if ((1U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_read_state))) {
            if (vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__ar_check) {
                __Vdly__top__DOT__u_ysyx_22040125_AXI__DOT__axi_read_state = 0U;
                __Vdly__top__DOT__u_ysyx_22040125_AXI__DOT__axi_r_back_state = 2U;
            }
        } else if ((6U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_read_state))) {
            if (vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__ar_check) {
                __Vdly__top__DOT__u_ysyx_22040125_AXI__DOT__axi_read_state = 0U;
                __Vdly__top__DOT__u_ysyx_22040125_AXI__DOT__axi_r_back_state = 7U;
            }
        } else {
            __Vdly__top__DOT__u_ysyx_22040125_AXI__DOT__axi_read_state = 0U;
            vlSelf->top__DOT__data_r = 0ULL;
            vlSelf->top__DOT__inst_r = 0U;
        }
        if ((0U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_r_back_state))) {
            vlSelf->top__DOT__inst_r_valid = 0U;
            vlSelf->top__DOT__data_r_valid = 0U;
        } else if ((2U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_r_back_state))) {
            if (((IData)(vlSelf->top__DOT__rready) 
                 & (2U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state)))) {
                vlSelf->top__DOT__data_r = ((2U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state))
                                             ? ((0U 
                                                 == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_rid))
                                                 ? vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__rom
                                                 : vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__rdata_da)
                                             : 0ULL);
                vlSelf->top__DOT__data_r_valid = 1U;
                __Vdly__top__DOT__u_ysyx_22040125_AXI__DOT__axi_r_back_state = 0U;
            }
        } else if ((7U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_r_back_state))) {
            if (((IData)(vlSelf->top__DOT__rready) 
                 & (2U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state)))) {
                vlSelf->top__DOT__inst_r = (IData)(
                                                   ((2U 
                                                     == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state))
                                                     ? 
                                                    ((0U 
                                                      == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_rid))
                                                      ? vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__rom
                                                      : vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__rdata_da)
                                                     : 0ULL));
                vlSelf->top__DOT__inst_r_valid = 1U;
                __Vdly__top__DOT__u_ysyx_22040125_AXI__DOT__axi_r_back_state = 0U;
            }
        } else {
            __Vdly__top__DOT__u_ysyx_22040125_AXI__DOT__axi_r_back_state = 0U;
            vlSelf->top__DOT__data_r = 0ULL;
            vlSelf->top__DOT__inst_r = 0U;
        }
    } else {
        __Vdly__top__DOT__u_ysyx_22040125_AXI__DOT__axi_read_state = 0U;
        vlSelf->top__DOT__data_r = 0ULL;
        vlSelf->top__DOT__inst_r = 0U;
        vlSelf->top__DOT__data_r_valid = 0U;
        vlSelf->top__DOT__inst_r_valid = 0U;
    }
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__data_cin 
        = (IData)((0U != (0xeU & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op))));
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_pc 
            = vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_pc;
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_load_sel 
            = vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_load_sel;
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_data_rd_in 
            = vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__data_rd_in;
    } else {
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_pc = 0ULL;
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_load_sel = 0U;
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_data_rd_in = 0ULL;
    }
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__data_rd 
        = ((1U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_load_sel))
            ? vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_data_rd_in
            : vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_rdata);
    vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_write_state 
        = __Vdly__top__DOT__u_ysyx_22040125_AXI__DOT__axi_write_state;
    vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_r_back_state 
        = __Vdly__top__DOT__u_ysyx_22040125_AXI__DOT__axi_r_back_state;
    vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_read_state 
        = __Vdly__top__DOT__u_ysyx_22040125_AXI__DOT__axi_read_state;
    vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__rom 
        = (((QData)((IData)(((0x61a80U >= (0x7ffffU 
                                           & ((IData)(1U) 
                                              + vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_addr)))
                              ? vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__ram
                             [(0x7ffffU & ((IData)(1U) 
                                           + vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_addr))]
                              : 0U))) << 0x20U) | (QData)((IData)(
                                                                  ((0x61a80U 
                                                                    >= 
                                                                    (0x7ffffU 
                                                                     & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_addr))
                                                                    ? 
                                                                   vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__ram
                                                                   [
                                                                   (0x7ffffU 
                                                                    & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_addr)]
                                                                    : 0U))));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_s_bhwd 
        = ((IData)(vlSelf->rst) ? (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_s_bhwd)
            : 0U);
    vlSelf->top__DOT__wdata = ((3U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_write_state))
                                ? vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_src2_rs2
                                : 0ULL);
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_ram_addr 
            = (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__add_sub_result);
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_data_wen 
            = ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_data_wen) 
               & 1U);
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__ebreak_list__DOT__ebreak_1 
            = ((0x100073U == vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id) 
               & 1U);
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_rd 
            = vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_rd;
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_reg_wen 
            = ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_reg_wen) 
               & 1U);
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_l_bhw 
            = (((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lb) 
                << 5U) | (((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lbu) 
                           << 4U) | (((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lh) 
                                      << 3U) | (((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lhu) 
                                                 << 2U) 
                                                | (((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lw) 
                                                    << 1U) 
                                                   | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lwu))))));
    } else {
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_ram_addr = 0U;
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_data_wen = 0U;
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__ebreak_list__DOT__ebreak_1 = 0U;
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_rd = 0U;
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_reg_wen = 0U;
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_l_bhw = 0U;
    }
    vlSelf->top__DOT__rready = ((2U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_r_back_state)) 
                                | (7U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_r_back_state)));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__rdata 
        = ((((((((- (QData)((IData)((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_l_bhw) 
                                           >> 5U))))) 
                 & (((- (QData)((IData)((1U & (IData)(
                                                      (vlSelf->top__DOT__data_r 
                                                       >> 7U)))))) 
                     << 8U) | (QData)((IData)((0xffU 
                                               & (IData)(vlSelf->top__DOT__data_r)))))) 
                | ((- (QData)((IData)((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_l_bhw) 
                                             >> 4U))))) 
                   & (QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__data_r)))))) 
               | ((- (QData)((IData)((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_l_bhw) 
                                            >> 3U))))) 
                  & (((- (QData)((IData)((1U & (IData)(
                                                       (vlSelf->top__DOT__data_r 
                                                        >> 0xfU)))))) 
                      << 0x10U) | (QData)((IData)((0xffffU 
                                                   & (IData)(vlSelf->top__DOT__data_r))))))) 
              | ((- (QData)((IData)((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_l_bhw) 
                                           >> 2U))))) 
                 & (QData)((IData)((0xffffU & (IData)(vlSelf->top__DOT__data_r)))))) 
             | ((- (QData)((IData)((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_l_bhw) 
                                          >> 1U))))) 
                & (((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__data_r 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__data_r))))) 
            | ((- (QData)((IData)((1U & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_l_bhw))))) 
               & (QData)((IData)(vlSelf->top__DOT__data_r)))) 
           | ((- (QData)((IData)((0U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_l_bhw))))) 
              & vlSelf->top__DOT__data_r));
    vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__rdata_da 
        = ((((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_size) 
             >> 2U) & (0U == (7U & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_addr)))
            ? (((- (QData)((IData)((1U & (IData)((vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__rom 
                                                  >> 7U)))))) 
                << 8U) | (QData)((IData)((0xffU & (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__rom)))))
            : ((((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_size) 
                 >> 2U) & (1U == (7U & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_addr)))
                ? (((- (QData)((IData)((1U & (IData)(
                                                     (vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__rom 
                                                      >> 0xfU)))))) 
                    << 8U) | (QData)((IData)((0xffU 
                                              & (IData)(
                                                        (vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__rom 
                                                         >> 8U))))))
                : ((((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_size) 
                     >> 2U) & (2U == (7U & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_addr)))
                    ? (((- (QData)((IData)((1U & (IData)(
                                                         (vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__rom 
                                                          >> 0x17U)))))) 
                        << 8U) | (QData)((IData)((0xffU 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__rom 
                                                             >> 0x10U))))))
                    : ((((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_size) 
                         >> 2U) & (3U == (7U & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_addr)))
                        ? (((- (QData)((IData)((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__rom 
                                                           >> 0x1fU)))))) 
                            << 8U) | (QData)((IData)(
                                                     (0xffU 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__rom 
                                                                 >> 0x18U))))))
                        : ((((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_size) 
                             >> 2U) & (4U == (7U & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_addr)))
                            ? (((- (QData)((IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__rom 
                                                               >> 0x27U)))))) 
                                << 8U) | (QData)((IData)(
                                                         (0xffU 
                                                          & (IData)(
                                                                    (vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__rom 
                                                                     >> 0x20U))))))
                            : ((((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_size) 
                                 >> 2U) & (5U == (7U 
                                                  & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_addr)))
                                ? (((- (QData)((IData)(
                                                       (1U 
                                                        & (IData)(
                                                                  (vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__rom 
                                                                   >> 0x2fU)))))) 
                                    << 8U) | (QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__rom 
                                                                         >> 0x28U))))))
                                : ((((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_size) 
                                     >> 2U) & (6U == 
                                               (7U 
                                                & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_addr)))
                                    ? (((- (QData)((IData)(
                                                           (1U 
                                                            & (IData)(
                                                                      (vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__rom 
                                                                       >> 0x37U)))))) 
                                        << 8U) | (QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__rom 
                                                                             >> 0x30U))))))
                                    : ((((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_size) 
                                         >> 2U) & (7U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_addr)))
                                        ? (((- (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__rom 
                                                                           >> 0x3fU)))))) 
                                            << 8U) 
                                           | (QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(
                                                                        (vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__rom 
                                                                         >> 0x38U))))))
                                        : ((((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_size) 
                                             >> 1U) 
                                            & (0U == 
                                               (7U 
                                                & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_addr)))
                                            ? (((- (QData)((IData)(
                                                                   (1U 
                                                                    & (IData)(
                                                                              (vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__rom 
                                                                               >> 0xfU)))))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__rom)))))
                                            : ((((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_size) 
                                                 >> 1U) 
                                                & (2U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_addr)))
                                                ? (
                                                   ((- (QData)((IData)(
                                                                       (1U 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__rom 
                                                                                >> 0x1fU)))))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__rom 
                                                                                >> 0x10U))))))
                                                : (
                                                   (((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_size) 
                                                     >> 1U) 
                                                    & (4U 
                                                       == 
                                                       (7U 
                                                        & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_addr)))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__rom 
                                                                                >> 0x2fU)))))) 
                                                     << 0x10U) 
                                                    | (QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(
                                                                                (vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__rom 
                                                                                >> 0x20U))))))
                                                    : 
                                                   ((((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_size) 
                                                      >> 1U) 
                                                     & (6U 
                                                        == 
                                                        (7U 
                                                         & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_addr)))
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (1U 
                                                                          & (IData)(
                                                                                (vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__rom 
                                                                                >> 0x3fU)))))) 
                                                      << 0x10U) 
                                                     | (QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(
                                                                                (vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__rom 
                                                                                >> 0x30U))))))
                                                     : 
                                                    (((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_size) 
                                                      & (0U 
                                                         == 
                                                         (7U 
                                                          & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_addr)))
                                                      ? 
                                                     (((QData)((IData)(
                                                                       (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__rom 
                                                                                >> 0x1fU))))))) 
                                                       << 0x20U) 
                                                      | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__rom)))
                                                      : 
                                                     (((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_size) 
                                                       & (4U 
                                                          == 
                                                          (7U 
                                                           & vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_addr)))
                                                       ? 
                                                      (((QData)((IData)(
                                                                        (- (IData)(
                                                                                (1U 
                                                                                & (IData)(
                                                                                (vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__rom 
                                                                                >> 0x3fU))))))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         (vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__rom 
                                                                          >> 0x20U))))
                                                       : vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__rom))))))))))))));
    if (((IData)(vlSelf->top__DOT__arvalid) & (1U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state)))) {
        vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_rid 
            = vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_data_ren;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_pc 
            = vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id_reg_pc;
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_load_sel 
            = ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__l_check)
                ? 2U : 1U);
    } else {
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_pc = 0ULL;
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_load_sel = 0U;
    }
    vlSelf->top__DOT__arvalid = ((1U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_read_state)) 
                                 | (6U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_read_state)));
    vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state 
        = __Vdly__top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state;
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id_reg_pc 
        = __Vdly__top__DOT__u_ysyx_22040125_CPU__DOT__id_reg_pc;
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_s_bhwd 
        = ((IData)(vlSelf->rst) ? (((IData)((0x23U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                    << 2U) | (((IData)(
                                                       (0x1023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                               << 1U) 
                                              | (IData)(
                                                        (0x2023U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))))
            : 0U);
    vlSelf->top__DOT__data_w_mask = (0xffU & ((((((
                                                   (((((((((1U 
                                                            & (- (IData)(
                                                                         (((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_s_bhwd) 
                                                                           >> 2U) 
                                                                          & (0U 
                                                                             == 
                                                                             (7U 
                                                                              & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_ram_addr)))))) 
                                                           | (2U 
                                                              & (- (IData)(
                                                                           (((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_s_bhwd) 
                                                                             >> 2U) 
                                                                            & (1U 
                                                                               == 
                                                                               (7U 
                                                                                & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_ram_addr))))))) 
                                                          | (4U 
                                                             & (- (IData)(
                                                                          (((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_s_bhwd) 
                                                                            >> 2U) 
                                                                           & (2U 
                                                                              == 
                                                                              (7U 
                                                                               & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_ram_addr))))))) 
                                                         | (8U 
                                                            & (- (IData)(
                                                                         (((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_s_bhwd) 
                                                                           >> 2U) 
                                                                          & (3U 
                                                                             == 
                                                                             (7U 
                                                                              & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_ram_addr))))))) 
                                                        | (0x10U 
                                                           & (- (IData)(
                                                                        (((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_s_bhwd) 
                                                                          >> 2U) 
                                                                         & (4U 
                                                                            == 
                                                                            (7U 
                                                                             & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_ram_addr))))))) 
                                                       | (0x20U 
                                                          & (- (IData)(
                                                                       (((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_s_bhwd) 
                                                                         >> 2U) 
                                                                        & (5U 
                                                                           == 
                                                                           (7U 
                                                                            & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_ram_addr))))))) 
                                                      | (0x40U 
                                                         & (- (IData)(
                                                                      (((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_s_bhwd) 
                                                                        >> 2U) 
                                                                       & (6U 
                                                                          == 
                                                                          (7U 
                                                                           & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_ram_addr))))))) 
                                                     | (0x80U 
                                                        & (- (IData)(
                                                                     (((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_s_bhwd) 
                                                                       >> 2U) 
                                                                      & (7U 
                                                                         == 
                                                                         (7U 
                                                                          & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_ram_addr))))))) 
                                                    | (3U 
                                                       & (- (IData)(
                                                                    (((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_s_bhwd) 
                                                                      >> 1U) 
                                                                     & (0U 
                                                                        == 
                                                                        (7U 
                                                                         & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_ram_addr))))))) 
                                                   | (0xcU 
                                                      & (- (IData)(
                                                                   (((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_s_bhwd) 
                                                                     >> 1U) 
                                                                    & (2U 
                                                                       == 
                                                                       (7U 
                                                                        & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_ram_addr))))))) 
                                                  | (0x30U 
                                                     & (- (IData)(
                                                                  (((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_s_bhwd) 
                                                                    >> 1U) 
                                                                   & (4U 
                                                                      == 
                                                                      (7U 
                                                                       & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_ram_addr))))))) 
                                                 | (0xc0U 
                                                    & (- (IData)(
                                                                 (((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_s_bhwd) 
                                                                   >> 1U) 
                                                                  & (6U 
                                                                     == 
                                                                     (7U 
                                                                      & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_ram_addr))))))) 
                                                | (0xfU 
                                                   & (- (IData)(
                                                                ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_s_bhwd) 
                                                                 & (0U 
                                                                    == 
                                                                    (7U 
                                                                     & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_ram_addr))))))) 
                                               | (0xf0U 
                                                  & (- (IData)(
                                                               ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_s_bhwd) 
                                                                & (4U 
                                                                   == 
                                                                   (7U 
                                                                    & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_ram_addr))))))) 
                                              | (- (IData)(
                                                           ((0U 
                                                             == (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_s_bhwd)) 
                                                            & (0U 
                                                               == 
                                                               (7U 
                                                                & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_ram_addr)))))));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_data_wen 
        = ((IData)(vlSelf->rst) & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__stall_l)
                                    ? 0U : (0x23U == 
                                            (0x7fU 
                                             & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))));
    if (vlSelf->rst) {
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_rd 
            = (0x1fU & (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                        >> 7U));
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_reg_wen 
            = (((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__stall_l)
                 ? 0U : (((((0x33U == (0x7fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)) 
                            | (0x3bU == (0x7fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                           | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__TYPE_I)) 
                          | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__TYPE_U)) 
                         | (0x6fU == (0x7fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))) 
               & 1U);
    } else {
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_rd = 0U;
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_reg_wen = 0U;
    }
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1_sel_plus 
        = (((((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_reg_wen) 
              & (0U != (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_rd))) 
             & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_rs1) 
                == (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_rd))) 
            & (2U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_src1_sel)))
            ? 2U : (((((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_reg_wen) 
                       & (0U != (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_rd))) 
                      & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_rs1) 
                         == (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_rd))) 
                     & (2U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_src1_sel)))
                     ? 4U : 1U));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2_sel_plus 
        = (((((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_reg_wen) 
              & (0U != (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_rd))) 
             & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_rs2) 
                == (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_rd))) 
            & (2U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_src2_sel)))
            ? 2U : (((((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_reg_wen) 
                       & (0U != (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_rd))) 
                      & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_rs2) 
                         == (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_rd))) 
                     & (2U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_src2_sel)))
                     ? 4U : 1U));
    vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__ar_check 
        = ((1U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state)) 
           & (IData)(vlSelf->top__DOT__arvalid));
    vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__aw_check 
        = ((1U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state)) 
           & (3U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_write_state)));
    vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__w_check 
        = ((3U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state)) 
           & (4U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_write_state)));
    vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__b_check 
        = ((5U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_write_state)) 
           & (4U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state)));
    vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_en 
        = ((4U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_write_state)) 
           & (3U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state)));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_data_ren 
        = ((IData)(vlSelf->rst) & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_data_ren));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
        = __Vdly__top__DOT__u_ysyx_22040125_CPU__DOT__inst_id;
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1 
        = (((((- (QData)((IData)((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1_sel_plus) 
                                        >> 2U))))) 
              & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__data_rd) 
             | ((- (QData)((IData)((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1_sel_plus) 
                                          >> 1U))))) 
                & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_data_rd_in)) 
            | (((- (QData)((IData)((1U & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1_sel_plus))))) 
                & (- (QData)((IData)((1U & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_src1_sel)))))) 
               & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_pc)) 
           | (((- (QData)((IData)((1U & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1_sel_plus))))) 
               & (- (QData)((IData)((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_src1_sel) 
                                           >> 1U)))))) 
              & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_src1_rs1));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2 
        = (((((- (QData)((IData)((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2_sel_plus) 
                                        >> 2U))))) 
              & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__data_rd) 
             | ((- (QData)((IData)((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2_sel_plus) 
                                          >> 1U))))) 
                & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_data_rd_in)) 
            | (((- (QData)((IData)((1U & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2_sel_plus))))) 
                & (- (QData)((IData)((1U & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_src2_sel)))))) 
               & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_imm)) 
           | (((- (QData)((IData)((1U & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2_sel_plus))))) 
               & (- (QData)((IData)((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_src2_sel) 
                                           >> 1U)))))) 
              & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_src2_rs2));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__TYPE_I 
        = ((((((0x13U == (0x7fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)) 
               | (0x73U == (0x7fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
              | (0x67U == (0x7fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
             | (3U == (0x7fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
            | (0xfU == (0x7fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
           | (0x1bU == (0x7fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__TYPE_U 
        = ((0x37U == (0x7fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)) 
           | (0x17U == (0x7fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__b_check 
        = (((IData)((0x63U == (0x707fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
            << 5U) | (((IData)((0x1063U == (0x707fU 
                                            & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                       << 4U) | (((IData)((0x4063U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                  << 3U) | (((IData)(
                                                     (0x5063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                             << 2U) 
                                            | (((IData)(
                                                        (0x6063U 
                                                         == 
                                                         (0x707fU 
                                                          & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                                << 1U) 
                                               | (IData)(
                                                         (0x7063U 
                                                          == 
                                                          (0x707fU 
                                                           & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))))))));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_addiw 
        = (IData)((0x1bU == (0x707fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_slliw 
        = ((IData)((0x101bU == (0x707fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
           & (0U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                     >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_srliw 
        = ((IData)((0x501bU == (0x707fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
           & (0U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                     >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_sraiw 
        = ((IData)((0x501bU == (0x707fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
           & (0x20U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                        >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_addw 
        = ((IData)((0x3bU == (0x707fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
           & (0U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                     >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_subw 
        = ((IData)((0x3bU == (0x707fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
           & (0x20U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                        >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_sllw 
        = ((IData)((0x103bU == (0x707fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
           & (0U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                     >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_srlw 
        = ((IData)((0x503bU == (0x707fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
           & (0U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                     >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_sraw 
        = ((IData)((0x503bU == (0x707fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
           & (0x20U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                        >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_mulw 
        = ((IData)((0x3bU == (0x707fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
           & (1U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                     >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_divw 
        = ((IData)((0x403bU == (0x707fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
           & (1U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                     >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_remw 
        = ((IData)((0x603bU == (0x707fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
           & (1U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                     >> 0x19U)));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_jalr 
        = (IData)((0x67U == (0x707fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lb 
        = (IData)((3U == (0x707fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lh 
        = (IData)((0x1003U == (0x707fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lw 
        = (IData)((0x2003U == (0x707fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lbu 
        = (IData)((0x4003U == (0x707fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lhu 
        = (IData)((0x5003U == (0x707fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lwu 
        = (IData)((0x6003U == (0x707fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2_rs2 
        = ((0U == (0x1fU & (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                            >> 0x14U))) ? 0ULL : ((
                                                   ((0x1fU 
                                                     & (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                        >> 0x14U)) 
                                                    == (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_rd)) 
                                                   & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_reg_wen))
                                                   ? vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__data_rd
                                                   : 
                                                  vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com
                                                  [
                                                  (0x1fU 
                                                   & (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                      >> 0x14U))]));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__b_check_rs2_sel 
        = ((((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_reg_wen) 
             & (0U != (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_rd))) 
            & ((0x1fU & (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                         >> 0x14U)) == (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_rd)))
            ? 2U : ((((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_reg_wen) 
                      & (0U != (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_rd))) 
                     & ((0x1fU & (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                  >> 0x14U)) == (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_rd)))
                     ? 4U : ((((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_reg_wen) 
                               & (0U != (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_rd))) 
                              & ((0x1fU & (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                           >> 0x14U)) 
                                 == (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_rd)))
                              ? 8U : 1U)));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__rs1 
        = ((0x100073U == vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)
            ? 0xaU : (0x1fU & (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                               >> 0xfU)));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__sll_w1_result 
        = (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1 
           << (0x1fU & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__srl_w1_result 
        = ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1) 
           >> (0x1fU & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__sra_w1_result 
        = VL_SHIFTRS_III(32,32,5, (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1), 
                         (0x1fU & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__mul_d_result 
        = (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1 
           * vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__div_d_result 
        = ((0xffffffffffffffffULL == vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)
            ? vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1
            : VL_DIVS_QQQ(64, vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1, vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__rem_d_result 
        = VL_MODDIVS_QQQ(64, vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1, vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__data_b 
        = ((IData)((0U != (0xeU & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op))))
            ? (~ vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)
            : vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__stall_mem 
        = (((~ (IData)(vlSelf->top__DOT__data_r_valid)) 
            & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_data_ren)) 
           | ((~ (IData)(vlSelf->top__DOT__data_w_valid)) 
              & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_data_wen)));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_data_ren 
        = ((IData)(vlSelf->rst) & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__stall_l)
                                    ? 0U : (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__l_check)));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__imm 
        = ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__TYPE_I)
            ? (((- (QData)((IData)((vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                    >> 0x1fU)))) << 0xcU) 
               | (QData)((IData)((vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                  >> 0x14U)))) : ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__TYPE_U)
                                                   ? 
                                                  (((QData)((IData)(
                                                                    (- (IData)(
                                                                               (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                                                >> 0x1fU))))) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     (0xfffff000U 
                                                                      & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))))
                                                   : 
                                                  ((0x23U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))
                                                    ? 
                                                   (((- (QData)((IData)(
                                                                        (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                                         >> 0x1fU)))) 
                                                     << 0xcU) 
                                                    | (QData)((IData)(
                                                                      ((0xfe0U 
                                                                        & (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                                           >> 0x14U)) 
                                                                       | (0x1fU 
                                                                          & (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                                             >> 7U))))))
                                                    : 
                                                   ((0x6fU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))
                                                     ? 
                                                    (((- (QData)((IData)(
                                                                         (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                                          >> 0x1fU)))) 
                                                      << 0x15U) 
                                                     | (QData)((IData)(
                                                                       ((0x100000U 
                                                                         & (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                                            >> 0xbU)) 
                                                                        | ((0xff000U 
                                                                            & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id) 
                                                                           | ((0x800U 
                                                                               & (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                                                >> 9U)) 
                                                                              | (0x7feU 
                                                                                & (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                                                >> 0x14U))))))))
                                                     : 
                                                    ((0x63U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))
                                                      ? 
                                                     (((- (QData)((IData)(
                                                                          (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                                           >> 0x1fU)))) 
                                                       << 0xdU) 
                                                      | (QData)((IData)(
                                                                        ((0x1000U 
                                                                          & (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                                             >> 0x13U)) 
                                                                         | ((0x800U 
                                                                             & (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                                                << 4U)) 
                                                                            | ((0x7e0U 
                                                                                & (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                                                >> 0x14U)) 
                                                                               | (0x1eU 
                                                                                & (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                                                >> 7U))))))))
                                                      : 0ULL)))));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1_rs1 
        = ((0U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__rs1))
            ? 0ULL : ((((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__rs1) 
                        == (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_rd)) 
                       & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_reg_wen))
                       ? vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__data_rd
                       : vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com
                      [vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__rs1]));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_add_rs1_sel 
        = ((((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_reg_wen) 
             & (0U != (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_rd))) 
            & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__rs1) 
               == (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_rd)))
            ? 2U : ((((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_reg_wen) 
                      & (0U != (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_rd))) 
                     & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__rs1) 
                        == (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_rd)))
                     ? 4U : ((((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_reg_wen) 
                               & (0U != (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_rd))) 
                              & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__rs1) 
                                 == (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_rd)))
                              ? 8U : 1U)));
    VL_EXTEND_WI(65,1, __Vtemp1, (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__data_cin));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__data_result 
        = ((vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1 
            + vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__data_b) 
           + (((QData)((IData)(__Vtemp1[1U])) << 0x20U) 
              | (QData)((IData)(__Vtemp1[0U]))));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__l_check 
        = (((((((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lb) 
                | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lh)) 
               | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lw)) 
              | (IData)((0x3003U == (0x707fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))) 
             | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lbu)) 
            | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lhu)) 
           | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lwu));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__add_sub_result 
        = ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_data_wen)
            ? (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1 
               + vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_imm)
            : ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_w_check)
                ? (((QData)((IData)((- (IData)((1U 
                                                & (IData)(
                                                          (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__data_result 
                                                           >> 0x1fU))))))) 
                    << 0x20U) | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__data_result)))
                : vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__data_result));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__stall_l 
        = ((((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_data_ren) 
             & (((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_rd) 
                 == (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__rs1)) 
                | ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_rd) 
                   == (0x1fU & (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                >> 0x14U))))) | ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_data_ren) 
                                                 & (((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_rd) 
                                                     == (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__rs1)) 
                                                    | ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_rd) 
                                                       == 
                                                       (0x1fU 
                                                        & (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                           >> 0x14U))))))
            ? 1U : 0U);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__op 
        = ((((((((((IData)((0x33U == (0x707fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                   & (0U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                             >> 0x19U))) | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_addw)) 
                 | (IData)((0x13U == (0x707fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))) 
                | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_addiw)) 
               | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__l_check)) 
              | (0x23U == (0x7fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
             | (0x17U == (0x7fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
            | (0x63U == (0x7fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))
            ? 1U : ((((IData)((0x33U == (0x707fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                      & (0x20U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                   >> 0x19U))) | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_subw))
                     ? 2U : ((((((IData)((0x1033U == 
                                          (0x707fU 
                                           & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                 & (0U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                           >> 0x19U))) 
                                | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_sllw)) 
                               | ((IData)((0x1013U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                  & (0U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                            >> 0x1aU)))) 
                              | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_slliw))
                              ? 0x80U : ((((IData)(
                                                   (0x2033U 
                                                    == 
                                                    (0x707fU 
                                                     & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                           & (0U == 
                                              (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                               >> 0x19U))) 
                                          | (IData)(
                                                    (0x2013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))))
                                          ? 4U : ((
                                                   ((IData)(
                                                            (0x3033U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                                    & (0U 
                                                       == 
                                                       (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                        >> 0x19U))) 
                                                   | (IData)(
                                                             (0x3013U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))))
                                                   ? 8U
                                                   : 
                                                  ((((IData)(
                                                             (0x4033U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                                     & (0U 
                                                        == 
                                                        (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                         >> 0x19U))) 
                                                    | (IData)(
                                                              (0x4013U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))))
                                                    ? 0x40U
                                                    : 
                                                   ((((((IData)(
                                                                (0x5033U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                                        & (0U 
                                                           == 
                                                           (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                            >> 0x19U))) 
                                                       | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_srlw)) 
                                                      | ((IData)(
                                                                 (0x5013U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                                         & (0U 
                                                            == 
                                                            (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                             >> 0x1aU)))) 
                                                     | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_srliw))
                                                     ? 0x100U
                                                     : 
                                                    ((((((IData)(
                                                                 (0x5033U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                                         & (0x20U 
                                                            == 
                                                            (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                             >> 0x19U))) 
                                                        | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_sraw)) 
                                                       | ((IData)(
                                                                  (0x5013U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                                          & (0x10U 
                                                             == 
                                                             (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                              >> 0x1aU)))) 
                                                      | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_sraiw))
                                                      ? 0x200U
                                                      : 
                                                     ((((IData)(
                                                                (0x6033U 
                                                                 == 
                                                                 (0x707fU 
                                                                  & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                                        & (0U 
                                                           == 
                                                           (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                            >> 0x19U))) 
                                                       | (IData)(
                                                                 (0x6013U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))))
                                                       ? 0x20U
                                                       : 
                                                      ((((IData)(
                                                                 (0x7033U 
                                                                  == 
                                                                  (0x707fU 
                                                                   & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                                         & (0U 
                                                            == 
                                                            (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                             >> 0x19U))) 
                                                        | (IData)(
                                                                  (0x7013U 
                                                                   == 
                                                                   (0x707fU 
                                                                    & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))))
                                                        ? 0x10U
                                                        : 
                                                       ((0x37U 
                                                         == 
                                                         (0x7fU 
                                                          & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))
                                                         ? 0x400U
                                                         : 
                                                        ((0x6fU 
                                                          == 
                                                          (0x7fU 
                                                           & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))
                                                          ? 0x800U
                                                          : 
                                                         ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_jalr)
                                                           ? 0x800U
                                                           : 
                                                          ((((IData)(
                                                                     (0x33U 
                                                                      == 
                                                                      (0x707fU 
                                                                       & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                                             & (1U 
                                                                == 
                                                                (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                                 >> 0x19U))) 
                                                            | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_mulw))
                                                            ? 0x1000U
                                                            : 
                                                           ((((IData)(
                                                                      (0x4033U 
                                                                       == 
                                                                       (0x707fU 
                                                                        & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                                              & (1U 
                                                                 == 
                                                                 (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                                  >> 0x19U))) 
                                                             | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_divw))
                                                             ? 0x2000U
                                                             : 
                                                            ((((IData)(
                                                                       (0x6033U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                                               & (1U 
                                                                  == 
                                                                  (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                                   >> 0x19U))) 
                                                              | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_remw))
                                                              ? 0x4000U
                                                              : 
                                                             ((0x100073U 
                                                               == vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)
                                                               ? 0x8000U
                                                               : 0U)))))))))))))))));
    VL_EXTEND_WQ(65,64, __Vtemp3, vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1);
    VL_EXTEND_WQ(65,64, __Vtemp4, vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__data_b);
    VL_ADD_W(3, __Vtemp5, __Vtemp3, __Vtemp4);
    VL_EXTEND_WI(65,1, __Vtemp6, (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__data_cin));
    VL_ADD_W(3, __Vtemp7, __Vtemp5, __Vtemp6);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__data_rd_in 
        = (((((((((((((((- (QData)((IData)((0U != (3U 
                                                   & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op)))))) 
                        & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__add_sub_result) 
                       | ((- (QData)((IData)((1U & 
                                              ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op) 
                                               >> 2U))))) 
                          & (QData)((IData)((1U & (
                                                   ((IData)(
                                                            (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1 
                                                             >> 0x3fU)) 
                                                    & (~ (IData)(
                                                                 (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2 
                                                                  >> 0x3fU)))) 
                                                   | ((~ 
                                                       ((IData)(
                                                                (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1 
                                                                 >> 0x3fU)) 
                                                        ^ (IData)(
                                                                  (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2 
                                                                   >> 0x3fU)))) 
                                                      & (IData)(
                                                                (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__data_result 
                                                                 >> 0x3fU))))))))) 
                      | ((- (QData)((IData)((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op) 
                                                   >> 3U))))) 
                         & (QData)((IData)((1U & (~ 
                                                  (1U 
                                                   & __Vtemp7[2U]))))))) 
                     | ((- (QData)((IData)((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op) 
                                                  >> 4U))))) 
                        & (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1 
                           & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2))) 
                    | ((- (QData)((IData)((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op) 
                                                 >> 5U))))) 
                       & (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1 
                          | vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2))) 
                   | ((- (QData)((IData)((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op) 
                                                >> 6U))))) 
                      & (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1 
                         ^ vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2))) 
                  | ((- (QData)((IData)((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op) 
                                               >> 7U))))) 
                     & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_w_check)
                         ? (((QData)((IData)((- (IData)(
                                                        (1U 
                                                         & (IData)(
                                                                   (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__sll_w1_result 
                                                                    >> 0x1fU))))))) 
                             << 0x20U) | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__sll_w1_result)))
                         : (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1 
                            << (0x3fU & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)))))) 
                 | ((- (QData)((IData)((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op) 
                                              >> 8U))))) 
                    & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_w_check)
                        ? (((QData)((IData)((- (IData)(
                                                       (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__srl_w1_result 
                                                        >> 0x1fU))))) 
                            << 0x20U) | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__srl_w1_result)))
                        : (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1 
                           >> (0x3fU & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)))))) 
                | ((- (QData)((IData)((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op) 
                                             >> 9U))))) 
                   & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_w_check)
                       ? (((QData)((IData)((- (IData)(
                                                      (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__sra_w1_result 
                                                       >> 0x1fU))))) 
                           << 0x20U) | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__sra_w1_result)))
                       : VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1, 
                                        (0x3fU & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)))))) 
               | ((- (QData)((IData)((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op) 
                                            >> 0xaU))))) 
                  & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)) 
              | ((- (QData)((IData)((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op) 
                                           >> 0xbU))))) 
                 & (4ULL + vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1))) 
             | ((- (QData)((IData)((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op) 
                                          >> 0xcU))))) 
                & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_w_check)
                    ? (((QData)((IData)((- (IData)(
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__mul_d_result 
                                                               >> 0x1fU))))))) 
                        << 0x20U) | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__mul_d_result)))
                    : vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__mul_d_result))) 
            | ((- (QData)((IData)((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op) 
                                         >> 0xdU))))) 
               & ((0ULL == vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)
                   ? 0xffffffffffffffffULL : ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_w_check)
                                               ? (((QData)((IData)(
                                                                   (- (IData)(
                                                                              (1U 
                                                                               & (IData)(
                                                                                (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__div_d_result 
                                                                                >> 0x1fU))))))) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__div_d_result)))
                                               : vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__div_d_result)))) 
           | ((- (QData)((IData)((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op) 
                                        >> 0xeU))))) 
              & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_w_check)
                  ? (((QData)((IData)((- (IData)((1U 
                                                  & (IData)(
                                                            (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__rem_d_result 
                                                             >> 0x1fU))))))) 
                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__rem_d_result)))
                  : vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__rem_d_result)));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__stall 
        = ((4U & ((~ (IData)(vlSelf->top__DOT__inst_r_valid)) 
                  << 2U)) | (((0U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__op)) 
                              << 1U) | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__stall_mem)));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__b_src2 
        = ((1U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__b_check_rs2_sel))
            ? vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2_rs2
            : ((2U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__b_check_rs2_sel))
                ? vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__data_rd_in
                : ((4U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__b_check_rs2_sel))
                    ? vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_data_rd_in
                    : vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__data_rd)));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__pc_src1 
        = ((1U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_add_rs1_sel))
            ? vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1_rs1
            : ((2U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_add_rs1_sel))
                ? vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__data_rd_in
                : ((4U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_add_rs1_sel))
                    ? vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_data_rd_in
                    : vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__data_rd)));
    __Vtemp10[0U] = 1U;
    __Vtemp10[1U] = 0U;
    __Vtemp10[2U] = 0U;
    VL_EXTEND_WQ(65,64, __Vtemp11, vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__pc_src1);
    VL_EXTEND_WQ(65,64, __Vtemp12, (~ vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__b_src2));
    VL_ADD_W(3, __Vtemp13, __Vtemp11, __Vtemp12);
    VL_ADD_W(3, __Vtemp14, __Vtemp10, __Vtemp13);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__data_cout 
        = (1U & __Vtemp14[2U]);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__beq_check 
        = (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__pc_src1 
           == vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__b_src2);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__blt_check 
        = (1U & (((IData)((vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__pc_src1 
                           >> 0x3fU)) & (~ (IData)(
                                                   (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__b_src2 
                                                    >> 0x3fU)))) 
                 | ((~ ((IData)((vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__pc_src1 
                                 >> 0x3fU)) ^ (IData)(
                                                      (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__b_src2 
                                                       >> 0x3fU)))) 
                    & (IData)(((1ULL + (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__pc_src1 
                                        + (~ vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__b_src2))) 
                               >> 0x3fU)))));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_out 
        = ((1U & ((((((((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__b_check) 
                        >> 5U) & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__beq_check)) 
                      | (((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__b_check) 
                          >> 4U) & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__beq_check)))) 
                     | (((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__b_check) 
                         >> 3U) & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__blt_check))) 
                    | (((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__b_check) 
                        >> 2U) & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__blt_check)))) 
                   | (((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__b_check) 
                       >> 1U) & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__data_cout)))) 
                  | ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__b_check) 
                     & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__data_cout))))
            ? 2U : ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_jalr)
                     ? 4U : ((0x6fU == (0x7fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))
                              ? 2U : 1U)));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__cpu_dnpc 
        = ((1U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_out))
            ? (4ULL + vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__cpu_pc)
            : ((2U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_out))
                ? (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id_reg_pc 
                   + vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__imm)
                : (0xfffffffffffffffeULL & (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__pc_src1 
                                            + vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__imm))));
}

void Vtop___024root___eval(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vtop___024root___sequent__TOP__2(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vtop___024root___change_request_1(Vtop___024root* vlSelf);

VL_INLINE_OPT QData Vtop___024root___change_request(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request\n"); );
    // Body
    return (Vtop___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vtop___024root___change_request_1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vtop___024root___eval_debug_assertions(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
