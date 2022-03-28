// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsing_top.h for the primary calling header

#include "Vsing_top___024root.h"
#include "Vsing_top__Syms.h"

#include "verilated_dpi.h"

//==========


void Vsing_top___024root___ctor_var_reset(Vsing_top___024root* vlSelf);

Vsing_top___024root::Vsing_top___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vsing_top___024root___ctor_var_reset(this);
}

void Vsing_top___024root::__Vconfigure(Vsing_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vsing_top___024root::~Vsing_top___024root() {
}

void Vsing_top___024root____Vdpiimwrap_top__DOT__common_reg__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a);
void Vsing_top___024root____Vdpiimwrap_top__DOT__data_ram__DOT__set_ram_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 2> &a);
extern const VlWide<13>/*415:0*/ Vsing_top__ConstPool__CONST_100c5227_0;

void Vsing_top___024root___initial__TOP__2(Vsing_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsing_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsing_top___024root___initial__TOP__2\n"); );
    // Body
    Vsing_top___024root____Vdpiimwrap_top__DOT__common_reg__DOT__set_gpr_ptr__Vdpioc2_TOP(vlSelf->top__DOT__common_reg__DOT__reg_com);
    Vsing_top___024root____Vdpiimwrap_top__DOT__data_ram__DOT__set_ram_ptr__Vdpioc2_TOP(vlSelf->top__DOT__data_ram__DOT__ram);
    VL_READMEM_N(true, 32, 65536, 0, VL_CVT_PACK_STR_NW(13, Vsing_top__ConstPool__CONST_100c5227_0)
                 ,  &(vlSelf->top__DOT__inst_ram__DOT__rom)
                 , 0, ~0ULL);
}

void Vsing_top___024root___settle__TOP__3(Vsing_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsing_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsing_top___024root___settle__TOP__3\n"); );
    // Variables
    VlWide<3>/*95:0*/ __Vtemp9;
    VlWide<3>/*95:0*/ __Vtemp11;
    VlWide<3>/*95:0*/ __Vtemp12;
    VlWide<3>/*95:0*/ __Vtemp13;
    VlWide<3>/*95:0*/ __Vtemp14;
    VlWide<3>/*95:0*/ __Vtemp15;
    // Body
    vlSelf->data_rd = ((1U == (IData)(vlSelf->top__DOT__wb_reg_load_sel))
                        ? vlSelf->top__DOT__wb_reg_data_rd_in
                        : vlSelf->top__DOT__wb_reg_rdata);
    vlSelf->top__DOT__alu__DOT__data_cin = (IData)(
                                                   (0U 
                                                    != 
                                                    (0xeU 
                                                     & (IData)(vlSelf->top__DOT__exe_reg_op))));
    vlSelf->top__DOT__src2 = ((1U == (IData)(vlSelf->top__DOT__exe_reg_src2_sel))
                               ? vlSelf->top__DOT__exe_reg_imm
                               : vlSelf->top__DOT__exe_reg_src2_rs2);
    vlSelf->top__DOT__src1 = ((1U == (IData)(vlSelf->top__DOT__exe_reg_src1_sel))
                               ? vlSelf->top__DOT__exe_reg_pc
                               : vlSelf->top__DOT__exe_reg_src1_rs1);
    vlSelf->top__DOT__rs1 = ((0x100073U == vlSelf->top__DOT__inst_id)
                              ? 0xaU : (0x1fU & (vlSelf->top__DOT__inst_id 
                                                 >> 0xfU)));
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
    vlSelf->top__DOT__op = (((IData)((0x33U == (0x707fU 
                                                & vlSelf->top__DOT__inst_id))) 
                             & (0U == (vlSelf->top__DOT__inst_id 
                                       >> 0x19U))) ? 1U
                             : ((IData)((0x13U == (0x707fU 
                                                   & vlSelf->top__DOT__inst_id)))
                                 ? 1U : ((IData)((0x3003U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__inst_id)))
                                          ? 1U : ((IData)(
                                                          (0x3023U 
                                                           == 
                                                           (0x707fU 
                                                            & vlSelf->top__DOT__inst_id)))
                                                   ? 1U
                                                   : 
                                                  ((0x17U 
                                                    == 
                                                    (0x7fU 
                                                     & vlSelf->top__DOT__inst_id))
                                                    ? 1U
                                                    : 
                                                   (((IData)(
                                                             (0x33U 
                                                              == 
                                                              (0x707fU 
                                                               & vlSelf->top__DOT__inst_id))) 
                                                     & (0x20U 
                                                        == 
                                                        (vlSelf->top__DOT__inst_id 
                                                         >> 0x19U)))
                                                     ? 2U
                                                     : 
                                                    (((IData)(
                                                              (0x1033U 
                                                               == 
                                                               (0x707fU 
                                                                & vlSelf->top__DOT__inst_id))) 
                                                      & (0U 
                                                         == 
                                                         (vlSelf->top__DOT__inst_id 
                                                          >> 0x19U)))
                                                      ? 0x80U
                                                      : 
                                                     (((IData)(
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
                                                              ((IData)(
                                                                       (0x67U 
                                                                        == 
                                                                        (0x707fU 
                                                                         & vlSelf->top__DOT__inst_id)))
                                                                ? 0x800U
                                                                : 0U)))))))))))))))));
    vlSelf->top__DOT__cpu_dnpc = ((1U == (IData)(vlSelf->top__DOT__mem_reg_pc_sel))
                                   ? (4ULL + vlSelf->top__DOT__cpu_pc)
                                   : ((2U == (IData)(vlSelf->top__DOT__mem_reg_pc_sel))
                                       ? vlSelf->top__DOT__mem_reg_cpu_dnpc_in1
                                       : vlSelf->top__DOT__mem_reg_cpu_dnpc_in2));
    vlSelf->top__DOT__alu__DOT__data_b = ((IData)((0U 
                                                   != 
                                                   (0xeU 
                                                    & (IData)(vlSelf->top__DOT__exe_reg_op))))
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
                                                                                & (IData)(vlSelf->top__DOT__exe_reg_op)))))))) 
                                              & vlSelf->top__DOT__alu__DOT__data_result) 
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
                                                                      & __Vtemp15[2U]))))))) 
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
}

void Vsing_top___024root___eval_initial(Vsing_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsing_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsing_top___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    Vsing_top___024root___initial__TOP__2(vlSelf);
}

void Vsing_top___024root___eval_settle(Vsing_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsing_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsing_top___024root___eval_settle\n"); );
    // Body
    Vsing_top___024root___settle__TOP__3(vlSelf);
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vsing_top___024root___final(Vsing_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsing_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsing_top___024root___final\n"); );
}

void Vsing_top___024root___ctor_var_reset(Vsing_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsing_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsing_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->data_rd = VL_RAND_RESET_Q(64);
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
    vlSelf->top__DOT__wb_reg_pc_sel = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__mem_reg_pc_sel = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__exe_reg_pc_sel = VL_RAND_RESET_I(3);
    vlSelf->top__DOT__rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__mem_reg_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__exe_reg_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__exe_reg_rs1 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__exe_reg_rs2 = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__wb_reg_rd = VL_RAND_RESET_I(5);
    vlSelf->top__DOT__op = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__exe_reg_op = VL_RAND_RESET_I(12);
    vlSelf->top__DOT__inst = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__mem_reg_ram_addr = VL_RAND_RESET_I(32);
    vlSelf->top__DOT__inst_id = VL_RAND_RESET_I(32);
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
    vlSelf->top__DOT__alu__DOT__data_b = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__alu__DOT__data_result = VL_RAND_RESET_Q(64);
    vlSelf->top__DOT__alu__DOT__data_cin = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->top__DOT__data_ram__DOT__ram[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
