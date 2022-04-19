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
    VlWide<3>/*95:0*/ __Vtemp46;
    VlWide<3>/*95:0*/ __Vtemp47;
    VlWide<3>/*95:0*/ __Vtemp48;
    VlWide<3>/*95:0*/ __Vtemp49;
    VlWide<3>/*95:0*/ __Vtemp50;
    VlWide<3>/*95:0*/ __Vtemp53;
    VlWide<3>/*95:0*/ __Vtemp54;
    VlWide<3>/*95:0*/ __Vtemp55;
    VlWide<3>/*95:0*/ __Vtemp56;
    VlWide<3>/*95:0*/ __Vtemp57;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,((1U & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__stall_mem)))));
            tracep->chgBit(oldp+1,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_data_ren));
            tracep->chgBit(oldp+2,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_data_wen));
            tracep->chgBit(oldp+3,(vlSelf->top__DOT__data_r_valid));
            tracep->chgBit(oldp+4,(vlSelf->top__DOT__data_w_valid));
            tracep->chgBit(oldp+5,(vlSelf->top__DOT__inst_r_valid));
            tracep->chgCData(oldp+6,((((IData)((0U 
                                                != 
                                                (0x30U 
                                                 & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_l_bhw)))) 
                                       << 2U) | (((IData)(
                                                          (0U 
                                                           != 
                                                           (0xcU 
                                                            & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_l_bhw)))) 
                                                  << 1U) 
                                                 | (IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_l_bhw))))))),3);
            tracep->chgCData(oldp+7,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_s_bhwd),3);
            tracep->chgCData(oldp+8,(vlSelf->top__DOT__data_w_mask),8);
            tracep->chgIData(oldp+9,((IData)(((vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__cpu_pc 
                                               - 0x80000000ULL) 
                                              >> 2U))),32);
            tracep->chgIData(oldp+10,(vlSelf->top__DOT__inst_r),32);
            tracep->chgIData(oldp+11,((0x3ffffffeU 
                                       & ((vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_ram_addr 
                                           - (IData)(0x80000000U)) 
                                          >> 2U))),32);
            tracep->chgQData(oldp+12,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_src2_rs2),64);
            tracep->chgQData(oldp+14,(vlSelf->top__DOT__data_r),64);
            tracep->chgCData(oldp+16,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_data_ren),4);
            tracep->chgIData(oldp+17,((((1U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_read_state)) 
                                        | (6U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_read_state)))
                                        ? (((- (IData)(
                                                       (1U 
                                                        & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__stall_mem))))) 
                                            & (IData)(
                                                      ((vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__cpu_pc 
                                                        - 0x80000000ULL) 
                                                       >> 2U))) 
                                           | (0x3ffffffeU 
                                              & ((- (IData)((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_data_ren))) 
                                                 & ((vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_ram_addr 
                                                     - (IData)(0x80000000U)) 
                                                    >> 2U))))
                                        : 0U)),32);
            tracep->chgBit(oldp+18,(vlSelf->top__DOT__arvalid));
            tracep->chgBit(oldp+19,(vlSelf->top__DOT__rready));
            tracep->chgIData(oldp+20,((0x3ffffffeU 
                                       & ((- (IData)((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_data_wen))) 
                                          & ((vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_ram_addr 
                                              - (IData)(0x80000000U)) 
                                             >> 2U)))),32);
            tracep->chgBit(oldp+21,((3U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_write_state))));
            tracep->chgCData(oldp+22,(vlSelf->top__DOT__rid),4);
            tracep->chgQData(oldp+23,(vlSelf->top__DOT__wdata),64);
            tracep->chgQData(oldp+25,(((2U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state))
                                        ? ((0U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_rid))
                                            ? vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__rom
                                            : vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__rdata_da)
                                        : 0ULL)),64);
            tracep->chgCData(oldp+27,(((3U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_write_state))
                                        ? (IData)(vlSelf->top__DOT__data_w_mask)
                                        : 0U)),8);
            tracep->chgBit(oldp+28,((4U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state))));
            tracep->chgBit(oldp+29,((2U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state))));
            tracep->chgBit(oldp+30,((1U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state))));
            tracep->chgBit(oldp+31,((3U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state))));
            tracep->chgBit(oldp+32,((4U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_write_state))));
            tracep->chgBit(oldp+33,((5U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_write_state))));
            tracep->chgBit(oldp+34,(((((((((((((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_addiw) 
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
                                     | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_divw))));
            tracep->chgBit(oldp+35,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__stall_l));
            tracep->chgBit(oldp+36,((1U & (~ (IData)(vlSelf->top__DOT__inst_r_valid)))));
            tracep->chgBit(oldp+37,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__stall_mem));
            tracep->chgBit(oldp+38,(((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__stall_l)
                                      ? 0U : (1U & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__l_check)))));
            tracep->chgBit(oldp+39,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_w_check));
            tracep->chgBit(oldp+40,((0x23U == (0x7fU 
                                               & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))));
            tracep->chgBit(oldp+41,(((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__stall_l)
                                      ? 0U : (IData)(
                                                     (0x23U 
                                                      == 
                                                      (0x7fU 
                                                       & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))))));
            tracep->chgBit(oldp+42,(((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__stall_l)
                                      ? 0U : (1U & 
                                              (((((0x33U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)) 
                                                  | (0x3bU 
                                                     == 
                                                     (0x7fU 
                                                      & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                                 | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__TYPE_I)) 
                                                | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__TYPE_U)) 
                                               | (0x6fU 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))))));
            tracep->chgBit(oldp+43,((0U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__op))));
            tracep->chgBit(oldp+44,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__l_check));
            tracep->chgBit(oldp+45,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_data_ren));
            tracep->chgBit(oldp+46,(((1U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_out))
                                      ? 0U : 1U)));
            tracep->chgBit(oldp+47,((0x100073U == vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)));
            tracep->chgBit(oldp+48,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__ebreak_out));
            tracep->chgBit(oldp+49,((((((0x33U == (0x7fU 
                                                   & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)) 
                                        | (0x3bU == 
                                           (0x7fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                       | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__TYPE_I)) 
                                      | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__TYPE_U)) 
                                     | (0x6fU == (0x7fU 
                                                  & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))));
            tracep->chgBit(oldp+50,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_reg_wen));
            tracep->chgBit(oldp+51,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_data_wen));
            tracep->chgBit(oldp+52,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_reg_wen));
            tracep->chgBit(oldp+53,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_reg_wen));
            tracep->chgCData(oldp+54,(((((0x6fU == 
                                          (0x7fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)) 
                                         | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_jalr)) 
                                        | (0x17U == 
                                           (0x7fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))
                                        ? 1U : 2U)),2);
            tracep->chgCData(oldp+55,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_load_sel),2);
            tracep->chgCData(oldp+56,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_load_sel),2);
            tracep->chgCData(oldp+57,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_src1_sel),2);
            tracep->chgCData(oldp+58,(((((0x6fU == 
                                          (0x7fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)) 
                                         | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__TYPE_U)) 
                                        | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__TYPE_I))
                                        ? 1U : 2U)),2);
            tracep->chgCData(oldp+59,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_src2_sel),2);
            tracep->chgCData(oldp+60,(((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__l_check)
                                        ? 2U : 1U)),2);
            tracep->chgCData(oldp+61,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_load_sel),2);
            tracep->chgCData(oldp+62,(((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_jalr)
                                        ? 4U : ((0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))
                                                 ? 2U
                                                 : 1U))),3);
            tracep->chgCData(oldp+63,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__stall),3);
            tracep->chgCData(oldp+64,((((IData)((0x23U 
                                                 == 
                                                 (0x707fU 
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
                                                              & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))))),3);
            tracep->chgCData(oldp+65,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_s_bhwd),3);
            tracep->chgCData(oldp+66,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_out),3);
            tracep->chgCData(oldp+67,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1_sel_plus),3);
            tracep->chgCData(oldp+68,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2_sel_plus),3);
            tracep->chgCData(oldp+69,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_pc_sel),3);
            tracep->chgCData(oldp+70,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_pc_sel),3);
            tracep->chgCData(oldp+71,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_add_rs1_sel),4);
            tracep->chgCData(oldp+72,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__b_check_rs2_sel),4);
            tracep->chgCData(oldp+73,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__rs1),5);
            tracep->chgCData(oldp+74,((0x1fU & (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                >> 0x14U))),5);
            tracep->chgCData(oldp+75,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_rs1),5);
            tracep->chgCData(oldp+76,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_rs2),5);
            tracep->chgCData(oldp+77,((0x1fU & (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                >> 7U))),5);
            tracep->chgCData(oldp+78,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_rd),5);
            tracep->chgCData(oldp+79,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_rd),5);
            tracep->chgCData(oldp+80,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_rd),5);
            tracep->chgCData(oldp+81,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__b_check),6);
            tracep->chgCData(oldp+82,((((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lb) 
                                        << 5U) | (((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lbu) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lh) 
                                                      << 3U) 
                                                     | (((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lhu) 
                                                         << 2U) 
                                                        | (((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lw) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lwu))))))),6);
            tracep->chgCData(oldp+83,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_l_bhw),6);
            tracep->chgCData(oldp+84,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_l_bhw),6);
            tracep->chgSData(oldp+85,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op),15);
            tracep->chgSData(oldp+86,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__op),16);
            tracep->chgIData(oldp+87,((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__add_sub_result)),32);
            tracep->chgIData(oldp+88,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_ram_addr),32);
            tracep->chgIData(oldp+89,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id),32);
            tracep->chgQData(oldp+90,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__imm),64);
            tracep->chgQData(oldp+92,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__data_rd),64);
            tracep->chgQData(oldp+94,(((4U & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_s_bhwd))
                                        ? (((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)))) 
                                            << 0x38U) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)))) 
                                               << 0x30U) 
                                              | (((QData)((IData)(
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
                                            ? (((QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)))) 
                                                << 0x30U) 
                                               | (((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)))) 
                                                   << 0x20U) 
                                                  | (((QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)))) 
                                                      << 0x10U) 
                                                     | (QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)))))))
                                            : ((1U 
                                                & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_s_bhwd))
                                                ? (
                                                   ((QData)((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)))
                                                : vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)))),64);
            tracep->chgQData(oldp+96,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com
                                      [0xaU]),64);
            tracep->chgQData(oldp+98,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_src1_rs1),64);
            tracep->chgQData(oldp+100,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_src2_rs2),64);
            tracep->chgQData(oldp+102,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_pc),64);
            tracep->chgQData(oldp+104,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_rdata),64);
            tracep->chgQData(oldp+106,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_data_rd_in),64);
            tracep->chgQData(oldp+108,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_data_rd_in),64);
            tracep->chgQData(oldp+110,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_imm),64);
            tracep->chgQData(oldp+112,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__cpu_pc),64);
            tracep->chgQData(oldp+114,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_pc),64);
            tracep->chgQData(oldp+116,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_pc),64);
            tracep->chgQData(oldp+118,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id_reg_pc),64);
            tracep->chgQData(oldp+120,(((1U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_out))
                                         ? (4ULL + vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__cpu_pc)
                                         : ((2U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_out))
                                             ? (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id_reg_pc 
                                                + vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__imm)
                                             : (0xfffffffffffffffeULL 
                                                & (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__pc_src1 
                                                   + vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__imm))))),64);
            tracep->chgQData(oldp+122,((4ULL + vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__cpu_pc)),64);
            tracep->chgQData(oldp+124,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__rdata),64);
            tracep->chgQData(oldp+126,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1_rs1),64);
            tracep->chgQData(oldp+128,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2_rs2),64);
            tracep->chgQData(oldp+130,((vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id_reg_pc 
                                        + vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__imm)),64);
            tracep->chgQData(oldp+132,((0xfffffffffffffffeULL 
                                        & (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__pc_src1 
                                           + vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__imm))),64);
            tracep->chgQData(oldp+134,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1),64);
            tracep->chgQData(oldp+136,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2),64);
            tracep->chgQData(oldp+138,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__data_rd_in),64);
            tracep->chgBit(oldp+140,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__TYPE_I));
            tracep->chgBit(oldp+141,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__TYPE_U));
            tracep->chgBit(oldp+142,((0x6fU == (0x7fU 
                                                & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))));
            tracep->chgBit(oldp+143,((0x63U == (0x7fU 
                                                & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))));
            tracep->chgBit(oldp+144,(((0x33U == (0x7fU 
                                                 & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)) 
                                      | (0x3bU == (0x7fU 
                                                   & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))));
            tracep->chgBit(oldp+145,((0x37U == (0x7fU 
                                                & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))));
            tracep->chgBit(oldp+146,(((IData)((0x6033U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                      & (1U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+147,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_remw));
            tracep->chgBit(oldp+148,(((IData)((0x33U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                      & (1U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+149,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_mulw));
            tracep->chgBit(oldp+150,(((IData)((0x4033U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                      & (1U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+151,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_divw));
            tracep->chgBit(oldp+152,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lwu));
            tracep->chgBit(oldp+153,((0x17U == (0x7fU 
                                                & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))));
            tracep->chgBit(oldp+154,((IData)((0x63U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))));
            tracep->chgBit(oldp+155,((IData)((0x1063U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))));
            tracep->chgBit(oldp+156,((IData)((0x4063U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))));
            tracep->chgBit(oldp+157,((IData)((0x5063U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))));
            tracep->chgBit(oldp+158,((IData)((0x6063U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))));
            tracep->chgBit(oldp+159,((IData)((0x7063U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))));
            tracep->chgBit(oldp+160,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_jalr));
            tracep->chgBit(oldp+161,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lb));
            tracep->chgBit(oldp+162,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lh));
            tracep->chgBit(oldp+163,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lw));
            tracep->chgBit(oldp+164,((IData)((0x3003U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))));
            tracep->chgBit(oldp+165,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lbu));
            tracep->chgBit(oldp+166,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lhu));
            tracep->chgBit(oldp+167,((IData)((0x13U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))));
            tracep->chgBit(oldp+168,((IData)((0x2013U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))));
            tracep->chgBit(oldp+169,((IData)((0x3013U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))));
            tracep->chgBit(oldp+170,((IData)((0x4013U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))));
            tracep->chgBit(oldp+171,((IData)((0x6013U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))));
            tracep->chgBit(oldp+172,((IData)((0x7013U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))));
            tracep->chgBit(oldp+173,(((IData)((0x1013U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                      & (0U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                >> 0x1aU)))));
            tracep->chgBit(oldp+174,(((IData)((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                      & (0U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                >> 0x1aU)))));
            tracep->chgBit(oldp+175,(((IData)((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                      & (0x10U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                   >> 0x1aU)))));
            tracep->chgBit(oldp+176,((IData)((0x23U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))));
            tracep->chgBit(oldp+177,((IData)((0x1023U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))));
            tracep->chgBit(oldp+178,((IData)((0x2023U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))));
            tracep->chgBit(oldp+179,((IData)((0x3023U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))));
            tracep->chgBit(oldp+180,(((IData)((0x33U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                      & (0U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+181,(((IData)((0x33U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                      & (0x20U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+182,(((IData)((0x1033U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                      & (0U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+183,(((IData)((0x2033U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                      & (0U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+184,(((IData)((0x3033U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                      & (0U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+185,(((IData)((0x4033U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                      & (0U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+186,(((IData)((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                      & (0U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+187,(((IData)((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                      & (0x20U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+188,(((IData)((0x6033U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                      & (0U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+189,(((IData)((0x7033U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                      & (0U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+190,((((((IData)((0x1033U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                         & (0U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                   >> 0x19U))) 
                                        | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_sllw)) 
                                       | ((IData)((0x1013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                          & (0U == 
                                             (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                              >> 0x1aU)))) 
                                      | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_slliw))));
            tracep->chgBit(oldp+191,((((IData)((0x6033U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                       & (1U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                 >> 0x19U))) 
                                      | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_remw))));
            tracep->chgBit(oldp+192,((((IData)((0x33U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                       & (1U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                 >> 0x19U))) 
                                      | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_mulw))));
            tracep->chgBit(oldp+193,((((IData)((0x4033U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                       & (1U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                 >> 0x19U))) 
                                      | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_divw))));
            tracep->chgBit(oldp+194,((((IData)((0x2033U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                       & (0U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                 >> 0x19U))) 
                                      | (IData)((0x2013U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))))));
            tracep->chgBit(oldp+195,((((IData)((0x3033U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                       & (0U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                 >> 0x19U))) 
                                      | (IData)((0x3013U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))))));
            tracep->chgBit(oldp+196,((((IData)((0x4033U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                       & (0U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                 >> 0x19U))) 
                                      | (IData)((0x4013U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))))));
            tracep->chgBit(oldp+197,((((((IData)((0x5033U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                         & (0U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                   >> 0x19U))) 
                                        | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_srlw)) 
                                       | ((IData)((0x5013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                          & (0U == 
                                             (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                              >> 0x1aU)))) 
                                      | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_srliw))));
            tracep->chgBit(oldp+198,((((((IData)((0x5033U 
                                                  == 
                                                  (0x707fU 
                                                   & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                         & (0x20U == 
                                            (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                             >> 0x19U))) 
                                        | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_sraw)) 
                                       | ((IData)((0x5013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                          & (0x10U 
                                             == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                 >> 0x1aU)))) 
                                      | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_sraiw))));
            tracep->chgBit(oldp+199,((((IData)((0x6033U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                       & (0U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                 >> 0x19U))) 
                                      | (IData)((0x6013U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))))));
            tracep->chgBit(oldp+200,((((IData)((0x7033U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                       & (0U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                 >> 0x19U))) 
                                      | (IData)((0x7013U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))))));
            tracep->chgBit(oldp+201,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_addiw));
            tracep->chgBit(oldp+202,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_slliw));
            tracep->chgBit(oldp+203,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_srliw));
            tracep->chgBit(oldp+204,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_sraiw));
            tracep->chgBit(oldp+205,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_addw));
            tracep->chgBit(oldp+206,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_subw));
            tracep->chgBit(oldp+207,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_sllw));
            tracep->chgBit(oldp+208,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_srlw));
            tracep->chgBit(oldp+209,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_sraw));
            tracep->chgQData(oldp+210,((((- (QData)((IData)(
                                                            (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                                     >> 0x14U))))),64);
            tracep->chgQData(oldp+212,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (0xfffff000U 
                                                           & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))))),64);
            tracep->chgQData(oldp+214,((((- (QData)((IData)(
                                                            (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                                         >> 0x14U)) 
                                                                     | (0x1fU 
                                                                        & (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                                           >> 7U))))))),64);
            tracep->chgQData(oldp+216,((((- (QData)((IData)(
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
                                                                       >> 0x14U))))))))),64);
            tracep->chgQData(oldp+218,((((- (QData)((IData)(
                                                            (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                             >> 0x1fU)))) 
                                         << 0xdU) | (QData)((IData)(
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
                                                                                >> 7U))))))))),64);
            tracep->chgCData(oldp+220,((0x7fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)),7);
            tracep->chgCData(oldp+221,((vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                        >> 0x19U)),7);
            tracep->chgCData(oldp+222,((7U & (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                              >> 0xcU))),3);
            tracep->chgQData(oldp+223,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[0]),64);
            tracep->chgQData(oldp+225,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[1]),64);
            tracep->chgQData(oldp+227,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[2]),64);
            tracep->chgQData(oldp+229,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[3]),64);
            tracep->chgQData(oldp+231,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[4]),64);
            tracep->chgQData(oldp+233,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[5]),64);
            tracep->chgQData(oldp+235,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[6]),64);
            tracep->chgQData(oldp+237,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[7]),64);
            tracep->chgQData(oldp+239,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[8]),64);
            tracep->chgQData(oldp+241,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[9]),64);
            tracep->chgQData(oldp+243,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[10]),64);
            tracep->chgQData(oldp+245,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[11]),64);
            tracep->chgQData(oldp+247,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[12]),64);
            tracep->chgQData(oldp+249,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[13]),64);
            tracep->chgQData(oldp+251,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[14]),64);
            tracep->chgQData(oldp+253,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[15]),64);
            tracep->chgQData(oldp+255,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[16]),64);
            tracep->chgQData(oldp+257,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[17]),64);
            tracep->chgQData(oldp+259,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[18]),64);
            tracep->chgQData(oldp+261,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[19]),64);
            tracep->chgQData(oldp+263,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[20]),64);
            tracep->chgQData(oldp+265,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[21]),64);
            tracep->chgQData(oldp+267,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[22]),64);
            tracep->chgQData(oldp+269,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[23]),64);
            tracep->chgQData(oldp+271,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[24]),64);
            tracep->chgQData(oldp+273,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[25]),64);
            tracep->chgQData(oldp+275,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[26]),64);
            tracep->chgQData(oldp+277,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[27]),64);
            tracep->chgQData(oldp+279,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[28]),64);
            tracep->chgQData(oldp+281,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[29]),64);
            tracep->chgQData(oldp+283,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[30]),64);
            tracep->chgQData(oldp+285,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[31]),64);
            tracep->chgQData(oldp+287,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__pc_src1),64);
            tracep->chgQData(oldp+289,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__b_src2),64);
            tracep->chgBit(oldp+291,((1U & ((((((((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__b_check) 
                                                  >> 5U) 
                                                 & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__beq_check)) 
                                                | (((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__b_check) 
                                                    >> 4U) 
                                                   & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__beq_check)))) 
                                               | (((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__b_check) 
                                                   >> 3U) 
                                                  & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__blt_check))) 
                                              | (((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__b_check) 
                                                  >> 2U) 
                                                 & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__blt_check)))) 
                                             | (((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__b_check) 
                                                 >> 1U) 
                                                & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__data_cout)))) 
                                            | ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__b_check) 
                                               & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__data_cout))))));
            tracep->chgBit(oldp+292,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__beq_check));
            tracep->chgBit(oldp+293,((1U & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__beq_check)))));
            tracep->chgBit(oldp+294,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__blt_check));
            tracep->chgBit(oldp+295,((1U & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__blt_check)))));
            tracep->chgBit(oldp+296,((1U & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__data_cout)))));
            tracep->chgBit(oldp+297,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__data_cout));
            tracep->chgQData(oldp+298,((~ vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__b_src2)),64);
            tracep->chgQData(oldp+300,((1ULL + (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__pc_src1 
                                                + (~ vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__b_src2)))),64);
            tracep->chgSData(oldp+302,((0x7fffU & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__op))),15);
            tracep->chgBit(oldp+303,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_s_bhwd) 
                                            >> 2U))));
            tracep->chgBit(oldp+304,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_s_bhwd) 
                                            >> 1U))));
            tracep->chgBit(oldp+305,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+306,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+307,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op) 
                                            >> 0xdU))));
            tracep->chgBit(oldp+308,((1U & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_s_bhwd))));
            tracep->chgBit(oldp+309,((1U & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op))));
            tracep->chgBit(oldp+310,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op) 
                                            >> 1U))));
            tracep->chgBit(oldp+311,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op) 
                                            >> 2U))));
            tracep->chgBit(oldp+312,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op) 
                                            >> 3U))));
            tracep->chgBit(oldp+313,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op) 
                                            >> 4U))));
            tracep->chgBit(oldp+314,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op) 
                                            >> 5U))));
            tracep->chgBit(oldp+315,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op) 
                                            >> 6U))));
            tracep->chgBit(oldp+316,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op) 
                                            >> 7U))));
            tracep->chgBit(oldp+317,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op) 
                                            >> 8U))));
            tracep->chgBit(oldp+318,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op) 
                                            >> 9U))));
            tracep->chgBit(oldp+319,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+320,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op) 
                                            >> 0xbU))));
            tracep->chgIData(oldp+321,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__srl_w1_result),32);
            tracep->chgIData(oldp+322,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__sra_w1_result),32);
            tracep->chgQData(oldp+323,(((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_w_check)
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__data_result 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__data_result)))
                                         : vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__data_result)),64);
            tracep->chgQData(oldp+325,(((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_w_check)
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__rem_d_result 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__rem_d_result)))
                                         : vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__rem_d_result)),64);
            tracep->chgQData(oldp+327,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__rem_d_result),64);
            tracep->chgQData(oldp+329,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__rem_d_result 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__rem_d_result)))),64);
            tracep->chgQData(oldp+331,(VL_DIVS_QQQ(64, vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1, vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)),64);
            tracep->chgQData(oldp+333,(((0ULL == vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)
                                         ? 0xffffffffffffffffULL
                                         : ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_w_check)
                                             ? (((QData)((IData)(
                                                                 (- (IData)(
                                                                            (1U 
                                                                             & (IData)(
                                                                                (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__div_d_result 
                                                                                >> 0x1fU))))))) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__div_d_result)))
                                             : vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__div_d_result))),64);
            tracep->chgQData(oldp+335,(((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_w_check)
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__mul_d_result 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__mul_d_result)))
                                         : vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__mul_d_result)),64);
            tracep->chgQData(oldp+337,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__div_d_result 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__div_d_result)))),64);
            tracep->chgQData(oldp+339,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__div_d_result),64);
            tracep->chgQData(oldp+341,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__mul_d_result),64);
            tracep->chgQData(oldp+343,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__mul_d_result 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__mul_d_result)))),64);
            tracep->chgQData(oldp+345,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__sll_w1_result),64);
            tracep->chgQData(oldp+347,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (1U 
                                                                     & (IData)(
                                                                               (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__sll_w1_result 
                                                                                >> 0x1fU))))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__sll_w1_result)))),64);
            tracep->chgQData(oldp+349,((vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)))),64);
            tracep->chgQData(oldp+351,(VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1, 
                                                      (0x3fU 
                                                       & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)))),64);
            tracep->chgQData(oldp+353,((vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1 
                                        << (0x3fU & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)))),64);
            tracep->chgQData(oldp+355,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__srl_w1_result 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__srl_w1_result)))),64);
            tracep->chgQData(oldp+357,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__sra_w1_result 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__sra_w1_result)))),64);
            tracep->chgQData(oldp+359,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__add_sub_result),64);
            tracep->chgQData(oldp+361,((QData)((IData)(
                                                       (1U 
                                                        & (((IData)(
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
                                                                         >> 0x3fU)))))))),64);
            tracep->chgQData(oldp+363,((vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1 
                                        + vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_imm)),64);
            VL_EXTEND_WQ(65,64, __Vtemp46, vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1);
            VL_EXTEND_WQ(65,64, __Vtemp47, vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__data_b);
            VL_ADD_W(3, __Vtemp48, __Vtemp46, __Vtemp47);
            VL_EXTEND_WI(65,1, __Vtemp49, (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__data_cin));
            VL_ADD_W(3, __Vtemp50, __Vtemp48, __Vtemp49);
            tracep->chgQData(oldp+365,((QData)((IData)(
                                                       (1U 
                                                        & (~ 
                                                           (1U 
                                                            & __Vtemp50[2U])))))),64);
            tracep->chgQData(oldp+367,((vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1 
                                        & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)),64);
            tracep->chgQData(oldp+369,((vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1 
                                        | vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)),64);
            tracep->chgQData(oldp+371,((vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1 
                                        ^ vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)),64);
            tracep->chgQData(oldp+373,(((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_w_check)
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (1U 
                                                                         & (IData)(
                                                                                (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__sll_w1_result 
                                                                                >> 0x1fU))))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__sll_w1_result)))
                                         : (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1 
                                            << (0x3fU 
                                                & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2))))),64);
            tracep->chgQData(oldp+375,(((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_w_check)
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__srl_w1_result 
                                                                         >> 0x1fU))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__srl_w1_result)))
                                         : (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1 
                                            >> (0x3fU 
                                                & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2))))),64);
            tracep->chgQData(oldp+377,(((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_w_check)
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__sra_w1_result 
                                                                         >> 0x1fU))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__sra_w1_result)))
                                         : VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1, 
                                                          (0x3fU 
                                                           & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2))))),64);
            tracep->chgQData(oldp+379,((4ULL + vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1)),64);
            tracep->chgQData(oldp+381,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__data_b),64);
            tracep->chgQData(oldp+383,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__data_result),64);
            tracep->chgBit(oldp+385,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__data_cin));
            VL_EXTEND_WQ(65,64, __Vtemp53, vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1);
            VL_EXTEND_WQ(65,64, __Vtemp54, vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__data_b);
            VL_ADD_W(3, __Vtemp55, __Vtemp53, __Vtemp54);
            VL_EXTEND_WI(65,1, __Vtemp56, (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__data_cin));
            VL_ADD_W(3, __Vtemp57, __Vtemp55, __Vtemp56);
            tracep->chgBit(oldp+386,((1U & __Vtemp57[2U])));
            tracep->chgIData(oldp+387,(((vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_ram_addr 
                                         - (IData)(0x80000000U)) 
                                        >> 3U)),32);
            tracep->chgBit(oldp+388,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_s_bhwd) 
                                            >> 2U))));
            tracep->chgBit(oldp+389,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_s_bhwd) 
                                            >> 1U))));
            tracep->chgBit(oldp+390,((1U & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_s_bhwd))));
            tracep->chgBit(oldp+391,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_l_bhw) 
                                            >> 5U))));
            tracep->chgBit(oldp+392,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_l_bhw) 
                                            >> 4U))));
            tracep->chgBit(oldp+393,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_l_bhw) 
                                            >> 3U))));
            tracep->chgBit(oldp+394,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_l_bhw) 
                                            >> 2U))));
            tracep->chgBit(oldp+395,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_l_bhw) 
                                            >> 1U))));
            tracep->chgBit(oldp+396,((1U & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_l_bhw))));
            tracep->chgBit(oldp+397,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__ebreak_list__DOT__ebreak_1));
            tracep->chgBit(oldp+398,(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__ar_check));
            tracep->chgBit(oldp+399,(((IData)(vlSelf->top__DOT__rready) 
                                      & (2U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state)))));
            tracep->chgBit(oldp+400,(((1U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state)) 
                                      & (3U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_write_state)))));
            tracep->chgBit(oldp+401,(((3U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state)) 
                                      & (4U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_write_state)))));
            tracep->chgBit(oldp+402,(((5U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_write_state)) 
                                      & (4U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state)))));
            tracep->chgCData(oldp+403,(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_read_state),3);
            tracep->chgCData(oldp+404,(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_write_state),3);
            tracep->chgCData(oldp+405,(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_r_back_state),3);
            tracep->chgBit(oldp+406,(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_en));
            tracep->chgCData(oldp+407,(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_size),3);
            tracep->chgCData(oldp+408,(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_size),3);
            tracep->chgCData(oldp+409,(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_rid),4);
            tracep->chgIData(oldp+410,(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_addr),32);
            tracep->chgIData(oldp+411,(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr),32);
            tracep->chgCData(oldp+412,(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state),4);
            tracep->chgBit(oldp+413,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_size) 
                                            >> 2U))));
            tracep->chgBit(oldp+414,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_size) 
                                            >> 1U))));
            tracep->chgBit(oldp+415,((1U & (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_size))));
            tracep->chgBit(oldp+416,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_size) 
                                            >> 2U))));
            tracep->chgBit(oldp+417,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_size) 
                                            >> 1U))));
            tracep->chgBit(oldp+418,((1U & (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_size))));
            tracep->chgQData(oldp+419,(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__rom),64);
            tracep->chgQData(oldp+421,(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__rdata_da),64);
        }
        tracep->chgBit(oldp+423,(vlSelf->clk));
        tracep->chgBit(oldp+424,(vlSelf->rst));
        tracep->chgBit(oldp+425,(vlSelf->success));
        tracep->chgBit(oldp+426,(((0U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state)) 
                                  | ((~ (IData)(vlSelf->rst)) 
                                     & (1U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state))))));
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
