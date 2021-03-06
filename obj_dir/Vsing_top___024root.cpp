// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vsing_top.h for the primary calling header

#include "Vsing_top___024root.h"
#include "Vsing_top__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vsing_top___024root____Vdpiimwrap_top__DOT__common_reg__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsing_top___024root____Vdpiimwrap_top__DOT__common_reg__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {31, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

extern "C" void set_ram_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void Vsing_top___024root____Vdpiimwrap_top__DOT__data_ram__DOT__set_ram_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 2> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsing_top___024root____Vdpiimwrap_top__DOT__data_ram__DOT__set_ram_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {-1, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_ram_ptr(&a__Vopenarray);
}

VL_INLINE_OPT void Vsing_top___024root___sequent__TOP__1(Vsing_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsing_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsing_top___024root___sequent__TOP__1\n"); );
    // Variables
    CData/*4:0*/ __Vdlyvdim0__top__DOT__common_reg__DOT__reg_com__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__common_reg__DOT__reg_com__v0;
    CData/*0:0*/ __Vdlyvdim0__top__DOT__data_ram__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__data_ram__DOT__ram__v0;
    VlWide<3>/*95:0*/ __Vtemp1;
    VlWide<3>/*95:0*/ __Vtemp3;
    VlWide<3>/*95:0*/ __Vtemp4;
    VlWide<3>/*95:0*/ __Vtemp5;
    VlWide<3>/*95:0*/ __Vtemp6;
    VlWide<3>/*95:0*/ __Vtemp7;
    QData/*63:0*/ __Vdlyvval__top__DOT__common_reg__DOT__reg_com__v0;
    QData/*63:0*/ __Vdlyvval__top__DOT__data_ram__DOT__ram__v0;
    // Body
    __Vdlyvset__top__DOT__data_ram__DOT__ram__v0 = 0U;
    __Vdlyvset__top__DOT__common_reg__DOT__reg_com__v0 = 0U;
    if (VL_UNLIKELY(((0x100073U == vlSelf->top__DOT__inst) 
                     & (0ULL == ((0U == (IData)(vlSelf->top__DOT__rs1))
                                  ? 0ULL : vlSelf->top__DOT__common_reg__DOT__reg_com
                                 [vlSelf->top__DOT__rs1]))))) {
        VL_WRITEF("\033[1;32mHIT GOOD TRAP\033[0m\n");
        VL_FINISH_MT("vsrc/top.v", 198, "");
    } else if (VL_UNLIKELY(((0x100073U == vlSelf->top__DOT__inst) 
                            & (0ULL != ((0U == (IData)(vlSelf->top__DOT__rs1))
                                         ? 0ULL : vlSelf->top__DOT__common_reg__DOT__reg_com
                                        [vlSelf->top__DOT__rs1]))))) {
        VL_WRITEF("\033[1;31mHIT BAD TRAP\033[0m\n");
        VL_FINISH_MT("vsrc/top.v", 201, "");
    } else if (VL_UNLIKELY(((0x80000000ULL <= vlSelf->top__DOT__cpu_pc) 
                            & (0U == (IData)(vlSelf->top__DOT__op))))) {
        VL_WRITEF("\033[1;31mPaused at: PC=0x%x\033[0m\n\033[1;31mFAIL! Please add instructions!\033[0m\n",
                  32,(IData)(vlSelf->top__DOT__id_reg_pc));
        VL_FINISH_MT("vsrc/top.v", 204, "");
    } else if (VL_UNLIKELY(((0x80000004ULL <= vlSelf->top__DOT__cpu_pc) 
                            & (0U != (IData)(vlSelf->top__DOT__op))))) {
        VL_WRITEF("\033[1;32mPC=0x%x\033[0m\n",32,(IData)(vlSelf->top__DOT__id_reg_pc));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__mem_reg_cpu_dnpc_in1 = vlSelf->top__DOT__alu__DOT__data_result;
        vlSelf->top__DOT__mem_reg_cpu_dnpc_in2 = (0xfffffffffffffffeULL 
                                                  & vlSelf->top__DOT__alu__DOT__data_result);
        vlSelf->top__DOT__wb_reg_data_rd_in = vlSelf->top__DOT__mem_reg_data_rd_in;
        vlSelf->top__DOT__wb_reg_rdata = vlSelf->top__DOT__rdata;
        vlSelf->top__DOT__exe_reg_src1_rs1 = ((0U == (IData)(vlSelf->top__DOT__rs1))
                                               ? 0ULL
                                               : vlSelf->top__DOT__common_reg__DOT__reg_com
                                              [vlSelf->top__DOT__rs1]);
        vlSelf->top__DOT__wb_reg_load_sel = vlSelf->top__DOT__mem_reg_load_sel;
        vlSelf->top__DOT__wb_reg_pc_sel = vlSelf->top__DOT__mem_reg_pc_sel;
    } else {
        vlSelf->top__DOT__mem_reg_cpu_dnpc_in1 = 0ULL;
        vlSelf->top__DOT__mem_reg_cpu_dnpc_in2 = 0ULL;
        vlSelf->top__DOT__wb_reg_data_rd_in = 0ULL;
        vlSelf->top__DOT__wb_reg_rdata = 0ULL;
        vlSelf->top__DOT__exe_reg_src1_rs1 = 0ULL;
        vlSelf->top__DOT__wb_reg_load_sel = 0U;
        vlSelf->top__DOT__wb_reg_pc_sel = 1U;
    }
    if (vlSelf->top__DOT__mem_reg_data_wen) {
        __Vdlyvval__top__DOT__data_ram__DOT__ram__v0 
            = vlSelf->top__DOT__mem_reg_src2_rs2;
        __Vdlyvset__top__DOT__data_ram__DOT__ram__v0 = 1U;
        __Vdlyvdim0__top__DOT__data_ram__DOT__ram__v0 
            = (1U & ((IData)(1U) + vlSelf->top__DOT__mem_reg_ram_addr));
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__exe_reg_src1_sel = (((0x6fU 
                                                == 
                                                (0x7fU 
                                                 & vlSelf->top__DOT__inst_id)) 
                                               | (0x17U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__inst_id)))
                                               ? 1U
                                               : 2U);
        vlSelf->top__DOT__wb_reg_pc = vlSelf->top__DOT__mem_reg_pc;
        vlSelf->top__DOT__exe_reg_op = vlSelf->top__DOT__op;
    } else {
        vlSelf->top__DOT__exe_reg_src1_sel = 0U;
        vlSelf->top__DOT__wb_reg_pc = 0x80000000ULL;
        vlSelf->top__DOT__exe_reg_op = 0U;
    }
    if (((IData)(vlSelf->top__DOT__wb_reg_reg_wen) 
         & (0U != (IData)(vlSelf->top__DOT__wb_reg_rd)))) {
        __Vdlyvval__top__DOT__common_reg__DOT__reg_com__v0 
            = vlSelf->data_rd;
        __Vdlyvset__top__DOT__common_reg__DOT__reg_com__v0 = 1U;
        __Vdlyvdim0__top__DOT__common_reg__DOT__reg_com__v0 
            = vlSelf->top__DOT__wb_reg_rd;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__exe_reg_src2_rs2 = ((0U == 
                                               (0x1fU 
                                                & (vlSelf->top__DOT__inst_id 
                                                   >> 0x14U)))
                                               ? 0ULL
                                               : vlSelf->top__DOT__common_reg__DOT__reg_com
                                              [(0x1fU 
                                                & (vlSelf->top__DOT__inst_id 
                                                   >> 0x14U))]);
        vlSelf->top__DOT__exe_reg_src2_sel = (((((0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__inst_id)) 
                                                 | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_U)) 
                                                | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_I)) 
                                               | (0x23U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__inst_id)))
                                               ? 1U
                                               : 2U);
        vlSelf->top__DOT__exe_reg_imm = ((IData)(vlSelf->top__DOT__idu__DOT__TYPE_I)
                                          ? (((- (QData)((IData)(
                                                                 (vlSelf->top__DOT__inst_id 
                                                                  >> 0x1fU)))) 
                                              << 0xcU) 
                                             | (QData)((IData)(
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
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__inst_id))
                                                  ? 
                                                 (((- (QData)((IData)(
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
                                                  : 
                                                 ((0x6fU 
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
                                                    : 0ULL)))));
    } else {
        vlSelf->top__DOT__exe_reg_src2_rs2 = 0ULL;
        vlSelf->top__DOT__exe_reg_src2_sel = 0U;
        vlSelf->top__DOT__exe_reg_imm = 0ULL;
    }
    if (__Vdlyvset__top__DOT__common_reg__DOT__reg_com__v0) {
        vlSelf->top__DOT__common_reg__DOT__reg_com[__Vdlyvdim0__top__DOT__common_reg__DOT__reg_com__v0] 
            = __Vdlyvval__top__DOT__common_reg__DOT__reg_com__v0;
    }
    vlSelf->top__DOT__mem_reg_data_rd_in = ((IData)(vlSelf->rst)
                                             ? vlSelf->top__DOT__data_rd_in
                                             : 0ULL);
    vlSelf->top__DOT__rdata = vlSelf->top__DOT__data_ram__DOT__ram
        [(1U & ((IData)(1U) + vlSelf->top__DOT__mem_reg_ram_addr))];
    vlSelf->data_rd = ((1U == (IData)(vlSelf->top__DOT__wb_reg_load_sel))
                        ? vlSelf->top__DOT__wb_reg_data_rd_in
                        : vlSelf->top__DOT__wb_reg_rdata);
    if (vlSelf->rst) {
        vlSelf->top__DOT__mem_reg_load_sel = vlSelf->top__DOT__exe_reg_load_sel;
        vlSelf->top__DOT__mem_reg_pc_sel = vlSelf->top__DOT__exe_reg_pc_sel;
        vlSelf->top__DOT__mem_reg_src2_rs2 = vlSelf->top__DOT__exe_reg_src2;
        vlSelf->top__DOT__mem_reg_data_wen = ((IData)(vlSelf->top__DOT__exe_reg_data_wen) 
                                              & 1U);
        vlSelf->top__DOT__mem_reg_pc = vlSelf->top__DOT__exe_reg_pc;
    } else {
        vlSelf->top__DOT__mem_reg_load_sel = 0U;
        vlSelf->top__DOT__mem_reg_pc_sel = 1U;
        vlSelf->top__DOT__mem_reg_src2_rs2 = 0ULL;
        vlSelf->top__DOT__mem_reg_data_wen = 0U;
        vlSelf->top__DOT__mem_reg_pc = 0x80000000ULL;
    }
    vlSelf->top__DOT__alu__DOT__data_cin = (IData)(
                                                   (0U 
                                                    != 
                                                    (0xeU 
                                                     & (IData)(vlSelf->top__DOT__exe_reg_op))));
    if (vlSelf->rst) {
        vlSelf->top__DOT__wb_reg_rd = vlSelf->top__DOT__mem_reg_rd;
        vlSelf->top__DOT__wb_reg_reg_wen = ((IData)(vlSelf->top__DOT__mem_reg_reg_wen) 
                                            & 1U);
    } else {
        vlSelf->top__DOT__wb_reg_rd = 0U;
        vlSelf->top__DOT__wb_reg_reg_wen = 0U;
    }
    vlSelf->top__DOT__src2 = ((1U == (IData)(vlSelf->top__DOT__exe_reg_src2_sel))
                               ? vlSelf->top__DOT__exe_reg_imm
                               : vlSelf->top__DOT__exe_reg_src2_rs2);
    if (__Vdlyvset__top__DOT__data_ram__DOT__ram__v0) {
        vlSelf->top__DOT__data_ram__DOT__ram[__Vdlyvdim0__top__DOT__data_ram__DOT__ram__v0] 
            = __Vdlyvval__top__DOT__data_ram__DOT__ram__v0;
    }
    vlSelf->top__DOT__alu__DOT__data_b = ((IData)((0U 
                                                   != 
                                                   (0xeU 
                                                    & (IData)(vlSelf->top__DOT__exe_reg_op))))
                                           ? (~ vlSelf->top__DOT__src2)
                                           : vlSelf->top__DOT__src2);
    if (vlSelf->rst) {
        vlSelf->top__DOT__mem_reg_ram_addr = (IData)(vlSelf->top__DOT__alu__DOT__data_result);
        vlSelf->top__DOT__exe_reg_load_sel = ((IData)(
                                                      (0x2003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__inst_id)))
                                               ? 2U
                                               : 1U);
        vlSelf->top__DOT__exe_reg_pc_sel = ((IData)(
                                                    (0x67U 
                                                     == 
                                                     (0x707fU 
                                                      & vlSelf->top__DOT__inst_id)))
                                             ? 4U : 
                                            ((0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->top__DOT__inst_id))
                                              ? 2U : 1U));
        vlSelf->top__DOT__exe_reg_data_wen = (((IData)(
                                                       (0x2023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlSelf->top__DOT__inst_id)))
                                                ? 1U
                                                : 0U) 
                                              & 1U);
        vlSelf->top__DOT__exe_reg_pc = vlSelf->top__DOT__id_reg_pc;
        vlSelf->top__DOT__mem_reg_rd = vlSelf->top__DOT__exe_reg_rd;
        vlSelf->top__DOT__mem_reg_reg_wen = ((IData)(vlSelf->top__DOT__exe_reg_reg_wen) 
                                             & 1U);
    } else {
        vlSelf->top__DOT__mem_reg_ram_addr = 0U;
        vlSelf->top__DOT__exe_reg_load_sel = 0U;
        vlSelf->top__DOT__exe_reg_pc_sel = 1U;
        vlSelf->top__DOT__exe_reg_data_wen = 0U;
        vlSelf->top__DOT__exe_reg_pc = 0x80000000ULL;
        vlSelf->top__DOT__mem_reg_rd = 0U;
        vlSelf->top__DOT__mem_reg_reg_wen = 0U;
    }
    vlSelf->top__DOT__src1 = ((1U == (IData)(vlSelf->top__DOT__exe_reg_src1_sel))
                               ? vlSelf->top__DOT__exe_reg_pc
                               : vlSelf->top__DOT__exe_reg_src1_rs1);
    if (vlSelf->rst) {
        vlSelf->top__DOT__id_reg_pc = vlSelf->top__DOT__cpu_pc;
        vlSelf->top__DOT__exe_reg_rd = (0x1fU & (vlSelf->top__DOT__inst_id 
                                                 >> 7U));
        vlSelf->top__DOT__exe_reg_reg_wen = ((((((0x33U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__inst_id)) 
                                                 | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_I)) 
                                                | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_U)) 
                                               | (0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__inst_id)))
                                               ? 1U
                                               : 0U) 
                                             & 1U);
    } else {
        vlSelf->top__DOT__id_reg_pc = 0x80000000ULL;
        vlSelf->top__DOT__exe_reg_rd = 0U;
        vlSelf->top__DOT__exe_reg_reg_wen = 0U;
    }
    VL_EXTEND_WI(65,1, __Vtemp1, (IData)(vlSelf->top__DOT__alu__DOT__data_cin));
    vlSelf->top__DOT__alu__DOT__data_result = ((vlSelf->top__DOT__src1 
                                                + vlSelf->top__DOT__alu__DOT__data_b) 
                                               + (((QData)((IData)(
                                                                   __Vtemp1[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    __Vtemp1[0U]))));
    VL_EXTEND_WQ(65,64, __Vtemp3, vlSelf->top__DOT__src1);
    VL_EXTEND_WQ(65,64, __Vtemp4, vlSelf->top__DOT__alu__DOT__data_b);
    VL_ADD_W(3, __Vtemp5, __Vtemp3, __Vtemp4);
    VL_EXTEND_WI(65,1, __Vtemp6, (IData)(vlSelf->top__DOT__alu__DOT__data_cin));
    VL_ADD_W(3, __Vtemp7, __Vtemp5, __Vtemp6);
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
                                                                      & __Vtemp7[2U]))))))) 
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
    if (vlSelf->rst) {
        vlSelf->top__DOT__cpu_pc = vlSelf->top__DOT__cpu_dnpc;
        vlSelf->top__DOT__inst_id = vlSelf->top__DOT__inst;
    } else {
        vlSelf->top__DOT__cpu_pc = 0x80000000ULL;
        vlSelf->top__DOT__inst_id = 0x413U;
    }
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
    vlSelf->top__DOT__inst = vlSelf->top__DOT__inst_ram__DOT__rom
        [(0xffffU & (IData)(((vlSelf->top__DOT__cpu_dnpc 
                              - 0x80000000ULL) >> 2U)))];
    vlSelf->top__DOT__cpu_dnpc = ((1U == (IData)(vlSelf->top__DOT__mem_reg_pc_sel))
                                   ? (4ULL + vlSelf->top__DOT__cpu_pc)
                                   : ((2U == (IData)(vlSelf->top__DOT__mem_reg_pc_sel))
                                       ? vlSelf->top__DOT__mem_reg_cpu_dnpc_in1
                                       : vlSelf->top__DOT__mem_reg_cpu_dnpc_in2));
}

void Vsing_top___024root___eval(Vsing_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsing_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsing_top___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vsing_top___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData Vsing_top___024root___change_request_1(Vsing_top___024root* vlSelf);

VL_INLINE_OPT QData Vsing_top___024root___change_request(Vsing_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsing_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsing_top___024root___change_request\n"); );
    // Body
    return (Vsing_top___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vsing_top___024root___change_request_1(Vsing_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsing_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsing_top___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void Vsing_top___024root___eval_debug_assertions(Vsing_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vsing_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vsing_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
