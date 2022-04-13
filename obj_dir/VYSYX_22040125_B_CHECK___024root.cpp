// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VYSYX_22040125_B_CHECK.h for the primary calling header

#include "VYSYX_22040125_B_CHECK___024root.h"
#include "VYSYX_22040125_B_CHECK__Syms.h"

#include "verilated_dpi.h"

//==========

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void VYSYX_22040125_B_CHECK___024root____Vdpiimwrap_top__DOT__common_reg__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 32> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VYSYX_22040125_B_CHECK___024root____Vdpiimwrap_top__DOT__common_reg__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {31, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

extern "C" void set_ram_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void VYSYX_22040125_B_CHECK___024root____Vdpiimwrap_top__DOT__data_ram__DOT__set_ram_ptr__Vdpioc2_TOP(const VlUnpacked<QData/*63:0*/, 2> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VYSYX_22040125_B_CHECK___024root____Vdpiimwrap_top__DOT__data_ram__DOT__set_ram_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {-1, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT64, VLVD_IN, VerilatedVarProps::Packed(), 63, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_ram_ptr(&a__Vopenarray);
}

VL_INLINE_OPT void VYSYX_22040125_B_CHECK___024root___sequent__TOP__1(VYSYX_22040125_B_CHECK___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VYSYX_22040125_B_CHECK__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VYSYX_22040125_B_CHECK___024root___sequent__TOP__1\n"); );
    // Variables
    IData/*31:0*/ __Vdly__top__DOT__inst_id;
    VlWide<3>/*95:0*/ __Vtemp2;
    VlWide<3>/*95:0*/ __Vtemp4;
    VlWide<3>/*95:0*/ __Vtemp5;
    VlWide<3>/*95:0*/ __Vtemp6;
    VlWide<3>/*95:0*/ __Vtemp7;
    VlWide<3>/*95:0*/ __Vtemp8;
    VlWide<3>/*95:0*/ __Vtemp11;
    VlWide<3>/*95:0*/ __Vtemp12;
    VlWide<3>/*95:0*/ __Vtemp13;
    VlWide<3>/*95:0*/ __Vtemp14;
    VlWide<3>/*95:0*/ __Vtemp15;
    QData/*63:0*/ __Vdly__top__DOT__id_reg_pc;
    // Body
    __Vdly__top__DOT__id_reg_pc = vlSelf->top__DOT__id_reg_pc;
    __Vdly__top__DOT__inst_id = vlSelf->top__DOT__inst_id;
    if ((1U & (~ (IData)(vlSelf->rst)))) {
        vlSelf->top__DOT__if_pc = 0ULL;
    }
    vlSelf->top__DOT__if_pc = vlSelf->top__DOT__cpu_pc;
    vlSelf->top__DOT__inst = ((IData)(vlSelf->rst) ? 
                              vlSelf->top__DOT__inst_ram__DOT__rom
                              [(0xffffU & (IData)((
                                                   (vlSelf->top__DOT__cpu_pc 
                                                    - 0x80000000ULL) 
                                                   >> 2U)))]
                               : vlSelf->top__DOT__inst_ram__DOT__rom
                              [0U]);
    if (vlSelf->top__DOT__mem_reg_data_wen) {
        vlSelf->top__DOT__data_ram__DOT__ram[(1U & 
                                              ((IData)(1U) 
                                               + vlSelf->top__DOT__mem_reg_ram_addr))] 
            = vlSelf->top__DOT__mem_reg_src2_rs2;
    }
    if (vlSelf->top__DOT__mem_reg_data_ren) {
        vlSelf->top__DOT__rdata = vlSelf->top__DOT__data_ram__DOT__ram
            [(1U & ((IData)(1U) + vlSelf->top__DOT__mem_reg_ram_addr))];
    }
    if (VL_UNLIKELY(((IData)(vlSelf->top__DOT__ebreak_out) 
                     & (0ULL == vlSelf->top__DOT__common_reg__DOT__reg_com
                        [0xaU])))) {
        VL_WRITEF("\033[1;32mHIT GOOD TRAP\033[0m\n");
        VL_FINISH_MT("vsrc/top.v", 296, "");
    } else if (VL_UNLIKELY(((IData)(vlSelf->top__DOT__ebreak_out) 
                            & (0ULL != vlSelf->top__DOT__common_reg__DOT__reg_com
                               [0xaU])))) {
        VL_WRITEF("\033[1;31mHIT BAD TRAP\033[0m\n");
        VL_FINISH_MT("vsrc/top.v", 300, "");
    } else if ((0xffffffffU != vlSelf->top__DOT__inst_out)) {
        if (VL_UNLIKELY(((0x80000010ULL <= vlSelf->top__DOT__cpu_pc) 
                         & (0U == (IData)(vlSelf->top__DOT__op_out))))) {
            VL_WRITEF("\033[1;31mPaused at: PC=0x%x\033[0m\n\033[1;31mFAIL! Please add instructions!\033[0m\n",
                      32,(IData)(vlSelf->top__DOT__id_reg_pc));
            VL_FINISH_MT("vsrc/top.v", 305, "");
        }
    }
    if (VL_UNLIKELY(((0x80000004ULL <= vlSelf->top__DOT__cpu_pc) 
                     & (0xffffffffU != vlSelf->top__DOT__inst_id)))) {
        VL_WRITEF("\033[1;32mPC=0x%x\033[0m\n",32,(IData)(vlSelf->top__DOT__id_reg_pc));
    }
    if (((IData)(vlSelf->top__DOT__wb_reg_reg_wen) 
         & (0U != (IData)(vlSelf->top__DOT__wb_reg_rd)))) {
        vlSelf->top__DOT__common_reg__DOT__reg_com[vlSelf->top__DOT__wb_reg_rd] 
            = vlSelf->data_rd;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__wb_reg_rdata = vlSelf->top__DOT__rdata;
        vlSelf->top__DOT__wb_reg_pc_sel = vlSelf->top__DOT__mem_reg_pc_sel;
        vlSelf->top__DOT__cpu_pc = ((IData)(vlSelf->top__DOT__stall_id)
                                     ? vlSelf->top__DOT__cpu_pc
                                     : vlSelf->top__DOT__cpu_dnpc);
        __Vdly__top__DOT__id_reg_pc = (((1U == (IData)(vlSelf->top__DOT__pc_sel_out))
                                         ? 0U : 1U)
                                        ? vlSelf->top__DOT__if_pc
                                        : ((IData)(vlSelf->top__DOT__stall_id)
                                            ? vlSelf->top__DOT__id_reg_pc
                                            : vlSelf->top__DOT__if_pc));
        vlSelf->top__DOT__wb_reg_load_sel = vlSelf->top__DOT__mem_reg_load_sel;
        vlSelf->top__DOT__wb_reg_pc = vlSelf->top__DOT__mem_reg_pc;
        vlSelf->top__DOT__exe_reg_src1_rs1 = vlSelf->top__DOT__src1_rs1;
        vlSelf->top__DOT__exe_reg_op = vlSelf->top__DOT__op;
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
        vlSelf->top__DOT__exe_reg_rs1 = vlSelf->top__DOT__rs1;
        __Vdly__top__DOT__inst_id = (((1U == (IData)(vlSelf->top__DOT__pc_sel_out))
                                       ? 0U : 1U) ? 0xffffffffU
                                      : ((IData)(vlSelf->top__DOT__stall_id)
                                          ? vlSelf->top__DOT__inst_id
                                          : vlSelf->top__DOT__inst));
        vlSelf->top__DOT__exe_reg_imm = vlSelf->top__DOT__imm;
        vlSelf->top__DOT__exe_reg_src2_rs2 = vlSelf->top__DOT__src2_rs2;
        vlSelf->top__DOT__exe_reg_rs2 = (0x1fU & (vlSelf->top__DOT__inst_id 
                                                  >> 0x14U));
        vlSelf->top__DOT__exe_reg_src2_sel = ((((0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->top__DOT__inst_id)) 
                                                | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_U)) 
                                               | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_I))
                                               ? 1U
                                               : 2U);
        vlSelf->top__DOT__wb_reg_data_rd_in = vlSelf->top__DOT__mem_reg_data_rd_in;
        vlSelf->top__DOT__mem_reg_ram_addr = (IData)(vlSelf->top__DOT__alu__DOT__add_sub_result);
        vlSelf->top__DOT__mem_reg_data_ren = ((IData)(vlSelf->top__DOT__exe_reg_data_ren) 
                                              & 1U);
        vlSelf->top__DOT__mem_reg_data_wen = ((IData)(vlSelf->top__DOT__exe_reg_data_wen) 
                                              & 1U);
        vlSelf->top__DOT__mem_reg_src2_rs2 = vlSelf->top__DOT__one_src2;
        vlSelf->top__DOT__op_out = vlSelf->top__DOT__ebreak_list__DOT__op_1;
        vlSelf->top__DOT__ebreak_out = ((IData)(vlSelf->top__DOT__ebreak_list__DOT__ebreak_1) 
                                        & 1U);
    } else {
        vlSelf->top__DOT__wb_reg_rdata = 0ULL;
        vlSelf->top__DOT__wb_reg_pc_sel = 1U;
        vlSelf->top__DOT__cpu_pc = 0x80000000ULL;
        __Vdly__top__DOT__id_reg_pc = 0ULL;
        vlSelf->top__DOT__wb_reg_load_sel = 0U;
        vlSelf->top__DOT__wb_reg_pc = 0ULL;
        vlSelf->top__DOT__exe_reg_src1_rs1 = 0ULL;
        vlSelf->top__DOT__exe_reg_op = 0U;
        vlSelf->top__DOT__exe_reg_src1_sel = 0U;
        vlSelf->top__DOT__exe_reg_rs1 = 0U;
        __Vdly__top__DOT__inst_id = 0U;
        vlSelf->top__DOT__exe_reg_imm = 0ULL;
        vlSelf->top__DOT__exe_reg_src2_rs2 = 0ULL;
        vlSelf->top__DOT__exe_reg_rs2 = 0U;
        vlSelf->top__DOT__exe_reg_src2_sel = 0U;
        vlSelf->top__DOT__wb_reg_data_rd_in = 0ULL;
        vlSelf->top__DOT__mem_reg_ram_addr = 0U;
        vlSelf->top__DOT__mem_reg_data_ren = 0U;
        vlSelf->top__DOT__mem_reg_data_wen = 0U;
        vlSelf->top__DOT__mem_reg_src2_rs2 = 0ULL;
        vlSelf->top__DOT__op_out = 0xfffU;
        vlSelf->top__DOT__ebreak_out = 0U;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__inst_out = vlSelf->top__DOT__ebreak_list__DOT__inst_1;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__wb_reg_rd = vlSelf->top__DOT__mem_reg_rd;
        vlSelf->top__DOT__wb_reg_reg_wen = ((IData)(vlSelf->top__DOT__mem_reg_reg_wen) 
                                            & 1U);
        vlSelf->top__DOT__mem_reg_pc_sel = vlSelf->top__DOT__exe_reg_pc_sel;
        vlSelf->top__DOT__mem_reg_load_sel = vlSelf->top__DOT__exe_reg_load_sel;
        vlSelf->top__DOT__mem_reg_pc = vlSelf->top__DOT__exe_reg_pc;
    } else {
        vlSelf->top__DOT__wb_reg_rd = 0U;
        vlSelf->top__DOT__wb_reg_reg_wen = 0U;
        vlSelf->top__DOT__mem_reg_pc_sel = 1U;
        vlSelf->top__DOT__mem_reg_load_sel = 0U;
        vlSelf->top__DOT__mem_reg_pc = 0ULL;
    }
    vlSelf->top__DOT__alu__DOT__data_cin = (IData)(
                                                   (0U 
                                                    != 
                                                    (0xeU 
                                                     & (IData)(vlSelf->top__DOT__exe_reg_op))));
    vlSelf->data_rd = ((1U == (IData)(vlSelf->top__DOT__wb_reg_load_sel))
                        ? vlSelf->top__DOT__wb_reg_data_rd_in
                        : vlSelf->top__DOT__wb_reg_rdata);
    vlSelf->top__DOT__mem_reg_data_rd_in = ((IData)(vlSelf->rst)
                                             ? vlSelf->top__DOT__data_rd_in
                                             : 0ULL);
    vlSelf->top__DOT__one_src2 = ((1U == (IData)(vlSelf->top__DOT__exe_reg_src2_sel))
                                   ? vlSelf->top__DOT__exe_reg_imm
                                   : vlSelf->top__DOT__exe_reg_src2_rs2);
    vlSelf->top__DOT__exe_reg_data_ren = ((IData)(vlSelf->rst) 
                                          & (((((((IData)(vlSelf->top__DOT__idu__DOT__inst_lb) 
                                                  | (IData)(vlSelf->top__DOT__idu__DOT__inst_lh)) 
                                                 | (IData)(vlSelf->top__DOT__idu__DOT__inst_lw)) 
                                                | (IData)(vlSelf->top__DOT__idu__DOT__inst_ld)) 
                                               | (IData)(vlSelf->top__DOT__idu__DOT__inst_lbu)) 
                                              | (IData)(vlSelf->top__DOT__idu__DOT__inst_lhu))
                                              ? 1U : 0U));
    vlSelf->top__DOT__exe_reg_data_wen = ((IData)(vlSelf->rst) 
                                          & ((IData)(vlSelf->top__DOT__stall_id)
                                              ? 0U : 
                                             ((0x23U 
                                               == (0x7fU 
                                                   & vlSelf->top__DOT__inst_id))
                                               ? 1U
                                               : 0U)));
    if (vlSelf->rst) {
        vlSelf->top__DOT__ebreak_list__DOT__op_1 = vlSelf->top__DOT__op;
        vlSelf->top__DOT__ebreak_list__DOT__ebreak_1 
            = ((0x100073U == vlSelf->top__DOT__inst_id) 
               & 1U);
    } else {
        vlSelf->top__DOT__ebreak_list__DOT__op_1 = 0xfffU;
        vlSelf->top__DOT__ebreak_list__DOT__ebreak_1 = 0U;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__ebreak_list__DOT__inst_1 
            = vlSelf->top__DOT__inst_id;
    }
    if (vlSelf->rst) {
        vlSelf->top__DOT__mem_reg_rd = vlSelf->top__DOT__exe_reg_rd;
        vlSelf->top__DOT__mem_reg_reg_wen = ((IData)(vlSelf->top__DOT__exe_reg_reg_wen) 
                                             & 1U);
        vlSelf->top__DOT__exe_reg_load_sel = (((((((IData)(vlSelf->top__DOT__idu__DOT__inst_lb) 
                                                   | (IData)(vlSelf->top__DOT__idu__DOT__inst_lh)) 
                                                  | (IData)(vlSelf->top__DOT__idu__DOT__inst_lw)) 
                                                 | (IData)(vlSelf->top__DOT__idu__DOT__inst_ld)) 
                                                | (IData)(vlSelf->top__DOT__idu__DOT__inst_lbu)) 
                                               | (IData)(vlSelf->top__DOT__idu__DOT__inst_lhu))
                                               ? 2U
                                               : 1U);
        vlSelf->top__DOT__exe_reg_pc = vlSelf->top__DOT__id_reg_pc;
    } else {
        vlSelf->top__DOT__mem_reg_rd = 0U;
        vlSelf->top__DOT__mem_reg_reg_wen = 0U;
        vlSelf->top__DOT__exe_reg_load_sel = 0U;
        vlSelf->top__DOT__exe_reg_pc = 0ULL;
    }
    vlSelf->top__DOT__id_reg_pc = __Vdly__top__DOT__id_reg_pc;
    if (vlSelf->rst) {
        vlSelf->top__DOT__exe_reg_rd = (0x1fU & (vlSelf->top__DOT__inst_id 
                                                 >> 7U));
        vlSelf->top__DOT__exe_reg_reg_wen = (((IData)(vlSelf->top__DOT__stall_id)
                                               ? 0U
                                               : ((
                                                   (((0x33U 
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
                                                   : 0U)) 
                                             & 1U);
    } else {
        vlSelf->top__DOT__exe_reg_rd = 0U;
        vlSelf->top__DOT__exe_reg_reg_wen = 0U;
    }
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
    vlSelf->top__DOT__inst_id = __Vdly__top__DOT__inst_id;
    vlSelf->top__DOT__src1 = ((1U == (IData)(vlSelf->top__DOT__src1_sel_plus))
                               ? ((1U == (IData)(vlSelf->top__DOT__exe_reg_src1_sel))
                                   ? vlSelf->top__DOT__exe_reg_pc
                                   : vlSelf->top__DOT__exe_reg_src1_rs1)
                               : ((2U == (IData)(vlSelf->top__DOT__src1_sel_plus))
                                   ? vlSelf->top__DOT__mem_reg_data_rd_in
                                   : vlSelf->top__DOT__wb_reg_data_rd_in));
    vlSelf->top__DOT__src2 = ((1U == (IData)(vlSelf->top__DOT__src2_sel_plus))
                               ? vlSelf->top__DOT__one_src2
                               : ((2U == (IData)(vlSelf->top__DOT__src2_sel_plus))
                                   ? vlSelf->top__DOT__mem_reg_data_rd_in
                                   : vlSelf->top__DOT__wb_reg_data_rd_in));
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
    vlSelf->top__DOT__idu__DOT__inst_ld = (IData)((0x3003U 
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
    vlSelf->top__DOT__alu__DOT__data_b = ((IData)((0U 
                                                   != 
                                                   (0xeU 
                                                    & (IData)(vlSelf->top__DOT__exe_reg_op))))
                                           ? (~ vlSelf->top__DOT__src2)
                                           : vlSelf->top__DOT__src2);
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
    vlSelf->top__DOT__op = (((IData)((0x33U == (0x707fU 
                                                & vlSelf->top__DOT__inst_id))) 
                             & (0U == (vlSelf->top__DOT__inst_id 
                                       >> 0x19U))) ? 1U
                             : ((IData)((0x13U == (0x707fU 
                                                   & vlSelf->top__DOT__inst_id)))
                                 ? 1U : ((IData)(vlSelf->top__DOT__idu__DOT__inst_ld)
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
                                                   ((0x63U 
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
                                                               ((IData)(vlSelf->top__DOT__idu__DOT__inst_jalr)
                                                                 ? 0x800U
                                                                 : 0U))))))))))))))))));
    vlSelf->top__DOT__stall_id = (((IData)(vlSelf->top__DOT__exe_reg_data_ren) 
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
    VL_EXTEND_WI(65,1, __Vtemp2, (IData)(vlSelf->top__DOT__alu__DOT__data_cin));
    vlSelf->top__DOT__alu__DOT__data_result = ((vlSelf->top__DOT__src1 
                                                + vlSelf->top__DOT__alu__DOT__data_b) 
                                               + (((QData)((IData)(
                                                                   __Vtemp2[1U])) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(
                                                                    __Vtemp2[0U]))));
    __Vtemp4[0U] = 1U;
    __Vtemp4[1U] = 0U;
    __Vtemp4[2U] = 0U;
    VL_EXTEND_WQ(65,64, __Vtemp5, vlSelf->top__DOT__src1_rs1);
    VL_EXTEND_WQ(65,64, __Vtemp6, (~ vlSelf->top__DOT__src2_rs2));
    VL_ADD_W(3, __Vtemp7, __Vtemp5, __Vtemp6);
    VL_ADD_W(3, __Vtemp8, __Vtemp4, __Vtemp7);
    vlSelf->top__DOT__b_check_out__DOT__data_cout = 
        (1U & __Vtemp8[2U]);
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
    vlSelf->top__DOT__alu__DOT__add_sub_result = ((IData)(vlSelf->top__DOT__exe_reg_data_wen)
                                                   ? 
                                                  (vlSelf->top__DOT__src1 
                                                   + vlSelf->top__DOT__exe_reg_imm)
                                                   : vlSelf->top__DOT__alu__DOT__data_result);
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

void VYSYX_22040125_B_CHECK___024root___eval(VYSYX_22040125_B_CHECK___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VYSYX_22040125_B_CHECK__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VYSYX_22040125_B_CHECK___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VYSYX_22040125_B_CHECK___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
}

QData VYSYX_22040125_B_CHECK___024root___change_request_1(VYSYX_22040125_B_CHECK___024root* vlSelf);

VL_INLINE_OPT QData VYSYX_22040125_B_CHECK___024root___change_request(VYSYX_22040125_B_CHECK___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VYSYX_22040125_B_CHECK__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VYSYX_22040125_B_CHECK___024root___change_request\n"); );
    // Body
    return (VYSYX_22040125_B_CHECK___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VYSYX_22040125_B_CHECK___024root___change_request_1(VYSYX_22040125_B_CHECK___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VYSYX_22040125_B_CHECK__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VYSYX_22040125_B_CHECK___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VYSYX_22040125_B_CHECK___024root___eval_debug_assertions(VYSYX_22040125_B_CHECK___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VYSYX_22040125_B_CHECK__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VYSYX_22040125_B_CHECK___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG
