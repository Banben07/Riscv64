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
extern const VlWide<13>/*415:0*/ Vtop__ConstPool__CONST_9604d1c4_0;
void Vtop___024root____Vdpiimwrap_top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);
void Vtop___024root____Vdpiimwrap_top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__set_ram_ptr__Vdpioc2_TOP(const VlUnpacked<IData/*31:0*/, 400001> &a);

void Vtop___024root___initial__TOP__1(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___initial__TOP__1\n"); );
    // Body
    VL_READMEM_N(true, 32, 400001, 0, VL_CVT_PACK_STR_NW(13, Vtop__ConstPool__CONST_100c5227_0)
                 ,  &(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__ram)
                 , 0, ~0ULL);
    VL_READMEM_N(true, 32, 400001, 0, VL_CVT_PACK_STR_NW(13, Vtop__ConstPool__CONST_9604d1c4_0)
                 ,  &(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__ram)
                 , 0, ~0ULL);
    Vtop___024root____Vdpiimwrap_top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com);
    Vtop___024root____Vdpiimwrap_top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__set_ram_ptr__Vdpioc2_TOP(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__ram);
}

void Vtop___024root___settle__TOP__3(Vtop___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root___settle__TOP__3\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp16;
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
    // Body
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__data_cin 
        = (IData)((0U != (0xeU & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op))));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__data_rd 
        = ((1U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_load_sel))
            ? vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_data_rd_in
            : vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_rdata);
    vlSelf->top__DOT__wdata = ((3U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_write_state))
                                ? vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_src2_rs2
                                : 0ULL);
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
    vlSelf->top__DOT__arvalid = ((1U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_read_state)) 
                                 | (6U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_read_state)));
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
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__stall_mem 
        = (((~ (IData)(vlSelf->top__DOT__data_r_valid)) 
            & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_data_ren)) 
           | ((~ (IData)(vlSelf->top__DOT__data_w_valid)) 
              & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_data_wen)));
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
    vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__ar_check 
        = ((1U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state)) 
           & (IData)(vlSelf->top__DOT__arvalid));
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
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__l_check 
        = (((((((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lb) 
                | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lh)) 
               | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lw)) 
              | (IData)((0x3003U == (0x707fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))) 
             | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lbu)) 
            | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lhu)) 
           | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lwu));
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
    VL_EXTEND_WI(65,1, __Vtemp16, (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__data_cin));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__data_result 
        = ((vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1 
            + vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__data_b) 
           + (((QData)((IData)(__Vtemp16[1U])) << 0x20U) 
              | (QData)((IData)(__Vtemp16[0U]))));
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__stall 
        = ((4U & ((~ (IData)(vlSelf->top__DOT__inst_r_valid)) 
                  << 2U)) | (((0U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__op)) 
                              << 1U) | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__stall_mem)));
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
    VL_EXTEND_WQ(65,64, __Vtemp18, vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1);
    VL_EXTEND_WQ(65,64, __Vtemp19, vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__data_b);
    VL_ADD_W(3, __Vtemp20, __Vtemp18, __Vtemp19);
    VL_EXTEND_WI(65,1, __Vtemp21, (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__data_cin));
    VL_ADD_W(3, __Vtemp22, __Vtemp20, __Vtemp21);
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
                                                   & __Vtemp22[2U]))))))) 
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
    __Vtemp25[0U] = 1U;
    __Vtemp25[1U] = 0U;
    __Vtemp25[2U] = 0U;
    VL_EXTEND_WQ(65,64, __Vtemp26, vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__pc_src1);
    VL_EXTEND_WQ(65,64, __Vtemp27, (~ vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__b_src2));
    VL_ADD_W(3, __Vtemp28, __Vtemp26, __Vtemp27);
    VL_ADD_W(3, __Vtemp29, __Vtemp25, __Vtemp28);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__data_cout 
        = (1U & __Vtemp29[2U]);
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
    vlSelf->success = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__data_r_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__data_w_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__inst_r_valid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__data_w_mask = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__inst_r = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__data_r = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__arvalid = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__rready = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__rresp = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__bresp = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__awcache = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__rid = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__bid = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__wdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__rlast = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__stall_l = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__stall_mem = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_w_check = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_data_ren = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_data_ren = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__ebreak_out = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_reg_wen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_data_wen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_data_wen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_reg_wen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_reg_wen = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_load_sel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_load_sel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_src1_sel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_src2_sel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_load_sel = VL_RAND_RESET_I(2);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__stall = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_s_bhwd = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_s_bhwd = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_out = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1_sel_plus = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2_sel_plus = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_pc_sel = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_pc_sel = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_pc_sel = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_add_rs1_sel = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__b_check_rs2_sel = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__b_check = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_l_bhw = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_l_bhw = VL_RAND_RESET_I(6);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op = VL_RAND_RESET_I(15);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__op = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_ram_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_out = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__imm = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__data_rd = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__b_src2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_src1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__one_src1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__one_src2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__if_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_src1_rs1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_src1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_src2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_src2_rs2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_rdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_data_rd_in = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_src2_rs2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_data_rd_in = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_cpu_dnpc_in1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_cpu_dnpc_in2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_imm = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__cpu_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_cpu_dnpc_in1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_cpu_dnpc_in2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__cpu_ifpc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__if_reg_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id_reg_pc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__cpu_dnpc = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__rdata = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1_rs1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2_rs2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__data_rd_in = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__TYPE_I = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__TYPE_U = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_remw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_mulw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_divw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lwu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_jalr = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lb = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lh = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lbu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lhu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__l_check = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_addiw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_slliw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_srliw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_sraiw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_addw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_subw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_sllw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_srlw = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_sraw = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__pc_src1 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__b_src2 = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__beq_check = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__blt_check = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__data_cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__srl_w1_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__sra_w1_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__div_w1_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__rem_w1_result = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__rem_d_result = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__div_d_result = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__mul_d_result = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__sll_w1_result = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__add_sub_result = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__srl_mid_result = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__data_b = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__data_result = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__data_cin = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem__DOT__data_cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__ebreak_list__DOT__ebreak_1 = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__ar_check = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__aw_check = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__w_check = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__b_check = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_read_state = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_write_state = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_r_back_state = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_w_back_state = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__test_data = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_en = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_size = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_size = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_rid = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state = VL_RAND_RESET_I(4);
    vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__data_cout = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__op_lbu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__op_lhu = VL_RAND_RESET_I(1);
    vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__op_lwu = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<400001; ++__Vi0) {
        vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__rom = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__rdata_da = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound1 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound2 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound3 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound4 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound5 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound6 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound7 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound8 = VL_RAND_RESET_I(8);
    vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound9 = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound10 = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound11 = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound12 = VL_RAND_RESET_I(16);
    vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound13 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound14 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound15 = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound16 = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
