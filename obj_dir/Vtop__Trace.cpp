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
    VlWide<3>/*95:0*/ __Vtemp47;
    VlWide<3>/*95:0*/ __Vtemp48;
    VlWide<3>/*95:0*/ __Vtemp49;
    VlWide<3>/*95:0*/ __Vtemp50;
    VlWide<3>/*95:0*/ __Vtemp51;
    VlWide<3>/*95:0*/ __Vtemp54;
    VlWide<3>/*95:0*/ __Vtemp55;
    VlWide<3>/*95:0*/ __Vtemp56;
    VlWide<3>/*95:0*/ __Vtemp57;
    VlWide<3>/*95:0*/ __Vtemp58;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(((0x23U == (0x7fU 
                                               & vlSelf->top__DOT__inst_id))
                                     ? 1U : 0U)));
            tracep->chgBit(oldp+1,(((IData)(vlSelf->top__DOT__stall_control)
                                     ? 0U : ((0x23U 
                                              == (0x7fU 
                                                  & vlSelf->top__DOT__inst_id))
                                              ? 1U : 0U))));
            tracep->chgBit(oldp+2,(((IData)(vlSelf->top__DOT__stall_control)
                                     ? 0U : (((((0x33U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->top__DOT__inst_id)) 
                                                | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_I)) 
                                               | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_U)) 
                                              | (0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->top__DOT__inst_id)))
                                              ? 1U : 0U))));
            tracep->chgBit(oldp+3,(vlSelf->top__DOT__stall_control));
            tracep->chgBit(oldp+4,((((((((IData)(vlSelf->top__DOT__idu__DOT__inst_lb) 
                                         | (IData)(vlSelf->top__DOT__idu__DOT__inst_lh)) 
                                        | (IData)(vlSelf->top__DOT__idu__DOT__inst_lw)) 
                                       | (IData)(vlSelf->top__DOT__idu__DOT__inst_ld)) 
                                      | (IData)(vlSelf->top__DOT__idu__DOT__inst_lbu)) 
                                     | (IData)(vlSelf->top__DOT__idu__DOT__inst_lhu))
                                     ? 1U : 0U)));
            tracep->chgBit(oldp+5,(vlSelf->top__DOT__exe_reg_data_ren));
            tracep->chgBit(oldp+6,(vlSelf->top__DOT__mem_reg_data_ren));
            tracep->chgBit(oldp+7,(((1U == (IData)(vlSelf->top__DOT__pc_sel_out))
                                     ? 0U : 1U)));
            tracep->chgBit(oldp+8,((0x100073U == vlSelf->top__DOT__inst_id)));
            tracep->chgBit(oldp+9,(vlSelf->top__DOT__ebreak_out));
            tracep->chgBit(oldp+10,((((((0x33U == (0x7fU 
                                                   & vlSelf->top__DOT__inst_id)) 
                                        | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_I)) 
                                       | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_U)) 
                                      | (0x6fU == (0x7fU 
                                                   & vlSelf->top__DOT__inst_id)))
                                      ? 1U : 0U)));
            tracep->chgBit(oldp+11,(vlSelf->top__DOT__mem_reg_reg_wen));
            tracep->chgBit(oldp+12,(vlSelf->top__DOT__mem_reg_data_wen));
            tracep->chgBit(oldp+13,(vlSelf->top__DOT__exe_reg_data_wen));
            tracep->chgBit(oldp+14,(vlSelf->top__DOT__exe_reg_reg_wen));
            tracep->chgBit(oldp+15,(vlSelf->top__DOT__wb_reg_reg_wen));
            tracep->chgCData(oldp+16,((((0x6fU == (0x7fU 
                                                   & vlSelf->top__DOT__inst_id)) 
                                        | (0x17U == 
                                           (0x7fU & vlSelf->top__DOT__inst_id)))
                                        ? 1U : 2U)),2);
            tracep->chgCData(oldp+17,(vlSelf->top__DOT__wb_reg_load_sel),2);
            tracep->chgCData(oldp+18,(vlSelf->top__DOT__mem_reg_load_sel),2);
            tracep->chgCData(oldp+19,(vlSelf->top__DOT__exe_reg_src1_sel),2);
            tracep->chgCData(oldp+20,(((((0x6fU == 
                                          (0x7fU & vlSelf->top__DOT__inst_id)) 
                                         | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_U)) 
                                        | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_I))
                                        ? 1U : 2U)),2);
            tracep->chgCData(oldp+21,(vlSelf->top__DOT__exe_reg_src2_sel),2);
            tracep->chgCData(oldp+22,((((((((IData)(vlSelf->top__DOT__idu__DOT__inst_lb) 
                                            | (IData)(vlSelf->top__DOT__idu__DOT__inst_lh)) 
                                           | (IData)(vlSelf->top__DOT__idu__DOT__inst_lw)) 
                                          | (IData)(vlSelf->top__DOT__idu__DOT__inst_ld)) 
                                         | (IData)(vlSelf->top__DOT__idu__DOT__inst_lbu)) 
                                        | (IData)(vlSelf->top__DOT__idu__DOT__inst_lhu))
                                        ? 2U : 1U)),2);
            tracep->chgCData(oldp+23,(vlSelf->top__DOT__exe_reg_load_sel),2);
            tracep->chgCData(oldp+24,(((IData)(vlSelf->top__DOT__idu__DOT__inst_jalr)
                                        ? 4U : ((0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->top__DOT__inst_id))
                                                 ? 2U
                                                 : 1U))),3);
            tracep->chgCData(oldp+25,(vlSelf->top__DOT__mem_reg_s_bhwd),3);
            tracep->chgCData(oldp+26,((((IData)((0x23U 
                                                 == 
                                                 (0x707fU 
                                                  & vlSelf->top__DOT__inst_id))) 
                                        << 2U) | (((IData)(
                                                           (0x1023U 
                                                            == 
                                                            (0x707fU 
                                                             & vlSelf->top__DOT__inst_id))) 
                                                   << 1U) 
                                                  | (IData)(
                                                            (0x2023U 
                                                             == 
                                                             (0x707fU 
                                                              & vlSelf->top__DOT__inst_id)))))),3);
            tracep->chgCData(oldp+27,(vlSelf->top__DOT__exe_reg_s_bhwd),3);
            tracep->chgCData(oldp+28,(vlSelf->top__DOT__pc_sel_out),3);
            tracep->chgCData(oldp+29,(vlSelf->top__DOT__src1_sel_plus),3);
            tracep->chgCData(oldp+30,(vlSelf->top__DOT__src2_sel_plus),3);
            tracep->chgCData(oldp+31,(vlSelf->top__DOT__wb_reg_pc_sel),3);
            tracep->chgCData(oldp+32,(vlSelf->top__DOT__mem_reg_pc_sel),3);
            tracep->chgCData(oldp+33,(vlSelf->top__DOT__pc_add_rs1_sel),4);
            tracep->chgCData(oldp+34,(vlSelf->top__DOT__rs1),5);
            tracep->chgCData(oldp+35,((0x1fU & (vlSelf->top__DOT__inst_id 
                                                >> 0x14U))),5);
            tracep->chgCData(oldp+36,(vlSelf->top__DOT__exe_reg_rs1),5);
            tracep->chgCData(oldp+37,(vlSelf->top__DOT__exe_reg_rs2),5);
            tracep->chgCData(oldp+38,((0x1fU & (vlSelf->top__DOT__inst_id 
                                                >> 7U))),5);
            tracep->chgCData(oldp+39,(vlSelf->top__DOT__mem_reg_rd),5);
            tracep->chgCData(oldp+40,(vlSelf->top__DOT__exe_reg_rd),5);
            tracep->chgCData(oldp+41,(vlSelf->top__DOT__wb_reg_rd),5);
            tracep->chgCData(oldp+42,(vlSelf->top__DOT__b_check),6);
            tracep->chgCData(oldp+43,((((IData)(vlSelf->top__DOT__idu__DOT__inst_lb) 
                                        << 5U) | (((IData)(vlSelf->top__DOT__idu__DOT__inst_lbu) 
                                                   << 4U) 
                                                  | (((IData)(vlSelf->top__DOT__idu__DOT__inst_lh) 
                                                      << 3U) 
                                                     | (((IData)(vlSelf->top__DOT__idu__DOT__inst_lhu) 
                                                         << 2U) 
                                                        | (((IData)(vlSelf->top__DOT__idu__DOT__inst_lw) 
                                                            << 1U) 
                                                           | (IData)(vlSelf->top__DOT__idu__DOT__inst_lwu))))))),6);
            tracep->chgCData(oldp+44,(vlSelf->top__DOT__exe_reg_l_bhw),6);
            tracep->chgCData(oldp+45,(vlSelf->top__DOT__mem_reg_l_bhw),6);
            tracep->chgSData(oldp+46,(vlSelf->top__DOT__op),12);
            tracep->chgSData(oldp+47,(vlSelf->top__DOT__op_out),12);
            tracep->chgSData(oldp+48,(vlSelf->top__DOT__exe_reg_op),12);
            tracep->chgIData(oldp+49,(vlSelf->top__DOT__inst),32);
            tracep->chgIData(oldp+50,((IData)(vlSelf->top__DOT__alu__DOT__add_sub_result)),32);
            tracep->chgIData(oldp+51,(vlSelf->top__DOT__mem_reg_ram_addr),32);
            tracep->chgIData(oldp+52,(vlSelf->top__DOT__inst_id),32);
            tracep->chgIData(oldp+53,(vlSelf->top__DOT__inst_out),32);
            tracep->chgQData(oldp+54,(vlSelf->top__DOT__imm),64);
            tracep->chgQData(oldp+56,(((4U & (IData)(vlSelf->top__DOT__exe_reg_s_bhwd))
                                        ? (((QData)((IData)(
                                                            (0xffU 
                                                             & (IData)(vlSelf->top__DOT__src2)))) 
                                            << 0x38U) 
                                           | (((QData)((IData)(
                                                               (0xffU 
                                                                & (IData)(vlSelf->top__DOT__src2)))) 
                                               << 0x30U) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & (IData)(vlSelf->top__DOT__src2)))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0xffU 
                                                                      & (IData)(vlSelf->top__DOT__src2)))) 
                                                     << 0x20U) 
                                                    | (((QData)((IData)(
                                                                        (0xffU 
                                                                         & (IData)(vlSelf->top__DOT__src2)))) 
                                                        << 0x18U) 
                                                       | (((QData)((IData)(
                                                                           (0xffU 
                                                                            & (IData)(vlSelf->top__DOT__src2)))) 
                                                           << 0x10U) 
                                                          | (((QData)((IData)(
                                                                              (0xffU 
                                                                               & (IData)(vlSelf->top__DOT__src2)))) 
                                                              << 8U) 
                                                             | (QData)((IData)(
                                                                               (0xffU 
                                                                                & (IData)(vlSelf->top__DOT__src2)))))))))))
                                        : ((2U & (IData)(vlSelf->top__DOT__exe_reg_s_bhwd))
                                            ? (((QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlSelf->top__DOT__src2)))) 
                                                << 0x30U) 
                                               | (((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->top__DOT__src2)))) 
                                                   << 0x20U) 
                                                  | (((QData)((IData)(
                                                                      (0xffffU 
                                                                       & (IData)(vlSelf->top__DOT__src2)))) 
                                                      << 0x10U) 
                                                     | (QData)((IData)(
                                                                       (0xffffU 
                                                                        & (IData)(vlSelf->top__DOT__src2)))))))
                                            : ((1U 
                                                & (IData)(vlSelf->top__DOT__exe_reg_s_bhwd))
                                                ? (
                                                   ((QData)((IData)(vlSelf->top__DOT__src2)) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(vlSelf->top__DOT__src2)))
                                                : vlSelf->top__DOT__src2)))),64);
            tracep->chgQData(oldp+58,(((1U == (IData)(vlSelf->top__DOT__pc_add_rs1_sel))
                                        ? vlSelf->top__DOT__src1_rs1
                                        : ((2U == (IData)(vlSelf->top__DOT__pc_add_rs1_sel))
                                            ? vlSelf->top__DOT__data_rd_in
                                            : ((4U 
                                                == (IData)(vlSelf->top__DOT__pc_add_rs1_sel))
                                                ? vlSelf->top__DOT__mem_reg_data_rd_in
                                                : vlSelf->top__DOT__wb_reg_data_rd_in)))),64);
            tracep->chgQData(oldp+60,(vlSelf->top__DOT__common_reg__DOT__reg_com
                                      [0xaU]),64);
            tracep->chgQData(oldp+62,(((1U == (IData)(vlSelf->top__DOT__exe_reg_src1_sel))
                                        ? vlSelf->top__DOT__exe_reg_pc
                                        : vlSelf->top__DOT__exe_reg_src1_rs1)),64);
            tracep->chgQData(oldp+64,(((1U == (IData)(vlSelf->top__DOT__exe_reg_src2_sel))
                                        ? vlSelf->top__DOT__exe_reg_imm
                                        : vlSelf->top__DOT__exe_reg_src2_rs2)),64);
            tracep->chgQData(oldp+66,(vlSelf->top__DOT__if_pc),64);
            tracep->chgQData(oldp+68,(vlSelf->top__DOT__exe_reg_src1_rs1),64);
            tracep->chgQData(oldp+70,(vlSelf->top__DOT__exe_reg_src2_rs2),64);
            tracep->chgQData(oldp+72,(vlSelf->top__DOT__mem_reg_pc),64);
            tracep->chgQData(oldp+74,(vlSelf->top__DOT__wb_reg_rdata),64);
            tracep->chgQData(oldp+76,(vlSelf->top__DOT__wb_reg_data_rd_in),64);
            tracep->chgQData(oldp+78,(vlSelf->top__DOT__mem_reg_src2_rs2),64);
            tracep->chgQData(oldp+80,(vlSelf->top__DOT__mem_reg_data_rd_in),64);
            tracep->chgQData(oldp+82,(vlSelf->top__DOT__exe_reg_imm),64);
            tracep->chgQData(oldp+84,(vlSelf->top__DOT__cpu_pc),64);
            tracep->chgQData(oldp+86,(vlSelf->top__DOT__wb_reg_pc),64);
            tracep->chgQData(oldp+88,(vlSelf->top__DOT__exe_reg_pc),64);
            tracep->chgQData(oldp+90,(vlSelf->top__DOT__id_reg_pc),64);
            tracep->chgQData(oldp+92,(((1U == (IData)(vlSelf->top__DOT__pc_sel_out))
                                        ? (4ULL + vlSelf->top__DOT__cpu_pc)
                                        : ((2U == (IData)(vlSelf->top__DOT__pc_sel_out))
                                            ? (vlSelf->top__DOT__id_reg_pc 
                                               + vlSelf->top__DOT__imm)
                                            : (0xfffffffffffffffeULL 
                                               & (((1U 
                                                    == (IData)(vlSelf->top__DOT__pc_add_rs1_sel))
                                                    ? vlSelf->top__DOT__src1_rs1
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->top__DOT__pc_add_rs1_sel))
                                                     ? vlSelf->top__DOT__data_rd_in
                                                     : 
                                                    ((4U 
                                                      == (IData)(vlSelf->top__DOT__pc_add_rs1_sel))
                                                      ? vlSelf->top__DOT__mem_reg_data_rd_in
                                                      : vlSelf->top__DOT__wb_reg_data_rd_in))) 
                                                  + vlSelf->top__DOT__imm))))),64);
            tracep->chgQData(oldp+94,((4ULL + vlSelf->top__DOT__cpu_pc)),64);
            tracep->chgQData(oldp+96,(vlSelf->top__DOT__rdata),64);
            tracep->chgQData(oldp+98,(vlSelf->top__DOT__src1_rs1),64);
            tracep->chgQData(oldp+100,(vlSelf->top__DOT__src2_rs2),64);
            tracep->chgQData(oldp+102,((vlSelf->top__DOT__id_reg_pc 
                                        + vlSelf->top__DOT__imm)),64);
            tracep->chgQData(oldp+104,((0xfffffffffffffffeULL 
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
                                           + vlSelf->top__DOT__imm))),64);
            tracep->chgQData(oldp+106,(vlSelf->top__DOT__src1),64);
            tracep->chgQData(oldp+108,(vlSelf->top__DOT__src2),64);
            tracep->chgQData(oldp+110,(vlSelf->top__DOT__data_rd_in),64);
            tracep->chgSData(oldp+112,((0xffffU & (IData)(
                                                          ((vlSelf->top__DOT__cpu_pc 
                                                            - 0x80000000ULL) 
                                                           >> 2U)))),16);
            tracep->chgBit(oldp+113,(vlSelf->top__DOT__idu__DOT__TYPE_I));
            tracep->chgBit(oldp+114,(vlSelf->top__DOT__idu__DOT__TYPE_U));
            tracep->chgBit(oldp+115,((0x23U == (0x7fU 
                                                & vlSelf->top__DOT__inst_id))));
            tracep->chgBit(oldp+116,((0x6fU == (0x7fU 
                                                & vlSelf->top__DOT__inst_id))));
            tracep->chgBit(oldp+117,((0x63U == (0x7fU 
                                                & vlSelf->top__DOT__inst_id))));
            tracep->chgBit(oldp+118,((0x33U == (0x7fU 
                                                & vlSelf->top__DOT__inst_id))));
            tracep->chgBit(oldp+119,((0x37U == (0x7fU 
                                                & vlSelf->top__DOT__inst_id))));
            tracep->chgBit(oldp+120,(vlSelf->top__DOT__idu__DOT__inst_lwu));
            tracep->chgBit(oldp+121,((0x17U == (0x7fU 
                                                & vlSelf->top__DOT__inst_id))));
            tracep->chgBit(oldp+122,((IData)((0x63U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__inst_id)))));
            tracep->chgBit(oldp+123,((IData)((0x1063U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__inst_id)))));
            tracep->chgBit(oldp+124,((IData)((0x4063U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__inst_id)))));
            tracep->chgBit(oldp+125,((IData)((0x5063U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__inst_id)))));
            tracep->chgBit(oldp+126,((IData)((0x6063U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__inst_id)))));
            tracep->chgBit(oldp+127,((IData)((0x7063U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__inst_id)))));
            tracep->chgBit(oldp+128,(vlSelf->top__DOT__idu__DOT__inst_jalr));
            tracep->chgBit(oldp+129,(vlSelf->top__DOT__idu__DOT__inst_lb));
            tracep->chgBit(oldp+130,(vlSelf->top__DOT__idu__DOT__inst_lh));
            tracep->chgBit(oldp+131,(vlSelf->top__DOT__idu__DOT__inst_lw));
            tracep->chgBit(oldp+132,(vlSelf->top__DOT__idu__DOT__inst_ld));
            tracep->chgBit(oldp+133,(vlSelf->top__DOT__idu__DOT__inst_lbu));
            tracep->chgBit(oldp+134,(vlSelf->top__DOT__idu__DOT__inst_lhu));
            tracep->chgBit(oldp+135,((IData)((0x13U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__inst_id)))));
            tracep->chgBit(oldp+136,((IData)((0x2013U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__inst_id)))));
            tracep->chgBit(oldp+137,((IData)((0x3013U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__inst_id)))));
            tracep->chgBit(oldp+138,((IData)((0x4013U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__inst_id)))));
            tracep->chgBit(oldp+139,((IData)((0x6013U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__inst_id)))));
            tracep->chgBit(oldp+140,((IData)((0x7013U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__inst_id)))));
            tracep->chgBit(oldp+141,(((IData)((0x1013U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__inst_id))) 
                                      & (0U == (vlSelf->top__DOT__inst_id 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+142,(((IData)((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__inst_id))) 
                                      & (0U == (vlSelf->top__DOT__inst_id 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+143,(((IData)((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__inst_id))) 
                                      & (0x20U == (vlSelf->top__DOT__inst_id 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+144,((IData)((0x23U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__inst_id)))));
            tracep->chgBit(oldp+145,((IData)((0x1023U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__inst_id)))));
            tracep->chgBit(oldp+146,((IData)((0x2023U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__inst_id)))));
            tracep->chgBit(oldp+147,((IData)((0x3023U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__inst_id)))));
            tracep->chgBit(oldp+148,(((IData)((0x33U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__inst_id))) 
                                      & (0U == (vlSelf->top__DOT__inst_id 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+149,(((IData)((0x33U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__inst_id))) 
                                      & (0x20U == (vlSelf->top__DOT__inst_id 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+150,(((IData)((0x1033U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__inst_id))) 
                                      & (0U == (vlSelf->top__DOT__inst_id 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+151,(((IData)((0x2033U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__inst_id))) 
                                      & (0U == (vlSelf->top__DOT__inst_id 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+152,(((IData)((0x3033U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__inst_id))) 
                                      & (0U == (vlSelf->top__DOT__inst_id 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+153,(((IData)((0x4033U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__inst_id))) 
                                      & (0U == (vlSelf->top__DOT__inst_id 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+154,(((IData)((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__inst_id))) 
                                      & (0U == (vlSelf->top__DOT__inst_id 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+155,(((IData)((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__inst_id))) 
                                      & (0x20U == (vlSelf->top__DOT__inst_id 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+156,(((IData)((0x6033U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__inst_id))) 
                                      & (0U == (vlSelf->top__DOT__inst_id 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+157,(((IData)((0x7033U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__inst_id))) 
                                      & (0U == (vlSelf->top__DOT__inst_id 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+158,((((((((IData)(vlSelf->top__DOT__idu__DOT__inst_lb) 
                                           | (IData)(vlSelf->top__DOT__idu__DOT__inst_lh)) 
                                          | (IData)(vlSelf->top__DOT__idu__DOT__inst_lw)) 
                                         | (IData)(vlSelf->top__DOT__idu__DOT__inst_ld)) 
                                        | (IData)(vlSelf->top__DOT__idu__DOT__inst_lbu)) 
                                       | (IData)(vlSelf->top__DOT__idu__DOT__inst_lhu)) 
                                      | (IData)(vlSelf->top__DOT__idu__DOT__inst_lwu))));
            tracep->chgQData(oldp+159,((((- (QData)((IData)(
                                                            (vlSelf->top__DOT__inst_id 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    (vlSelf->top__DOT__inst_id 
                                                                     >> 0x14U))))),64);
            tracep->chgQData(oldp+161,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->top__DOT__inst_id 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (0xfffff000U 
                                                           & vlSelf->top__DOT__inst_id))))),64);
            tracep->chgQData(oldp+163,((((- (QData)((IData)(
                                                            (vlSelf->top__DOT__inst_id 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & (vlSelf->top__DOT__inst_id 
                                                                         >> 0x14U)) 
                                                                     | (0x1fU 
                                                                        & (vlSelf->top__DOT__inst_id 
                                                                           >> 7U))))))),64);
            tracep->chgQData(oldp+165,((((- (QData)((IData)(
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
                                                                       >> 0x14U))))))))),64);
            tracep->chgQData(oldp+167,((((- (QData)((IData)(
                                                            (vlSelf->top__DOT__inst_id 
                                                             >> 0x1fU)))) 
                                         << 0xdU) | (QData)((IData)(
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
                                                                                >> 7U))))))))),64);
            tracep->chgCData(oldp+169,((0x7fU & vlSelf->top__DOT__inst_id)),7);
            tracep->chgCData(oldp+170,((vlSelf->top__DOT__inst_id 
                                        >> 0x19U)),7);
            tracep->chgCData(oldp+171,((7U & (vlSelf->top__DOT__inst_id 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+172,((1U & ((((((IData)(vlSelf->top__DOT__b_check) 
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
                                               & (IData)(vlSelf->top__DOT__b_check_out__DOT__data_cout))))));
            tracep->chgBit(oldp+173,(vlSelf->top__DOT__b_check_out__DOT__blt_check));
            tracep->chgBit(oldp+174,((1U & (~ (IData)(vlSelf->top__DOT__b_check_out__DOT__blt_check)))));
            tracep->chgBit(oldp+175,((1U & (~ (IData)(vlSelf->top__DOT__b_check_out__DOT__data_cout)))));
            tracep->chgBit(oldp+176,(vlSelf->top__DOT__b_check_out__DOT__data_cout));
            tracep->chgQData(oldp+177,((~ vlSelf->top__DOT__src2_rs2)),64);
            tracep->chgQData(oldp+179,((1ULL + (vlSelf->top__DOT__src1_rs1 
                                                + (~ vlSelf->top__DOT__src2_rs2)))),64);
            tracep->chgQData(oldp+181,(vlSelf->top__DOT__common_reg__DOT__reg_com[0]),64);
            tracep->chgQData(oldp+183,(vlSelf->top__DOT__common_reg__DOT__reg_com[1]),64);
            tracep->chgQData(oldp+185,(vlSelf->top__DOT__common_reg__DOT__reg_com[2]),64);
            tracep->chgQData(oldp+187,(vlSelf->top__DOT__common_reg__DOT__reg_com[3]),64);
            tracep->chgQData(oldp+189,(vlSelf->top__DOT__common_reg__DOT__reg_com[4]),64);
            tracep->chgQData(oldp+191,(vlSelf->top__DOT__common_reg__DOT__reg_com[5]),64);
            tracep->chgQData(oldp+193,(vlSelf->top__DOT__common_reg__DOT__reg_com[6]),64);
            tracep->chgQData(oldp+195,(vlSelf->top__DOT__common_reg__DOT__reg_com[7]),64);
            tracep->chgQData(oldp+197,(vlSelf->top__DOT__common_reg__DOT__reg_com[8]),64);
            tracep->chgQData(oldp+199,(vlSelf->top__DOT__common_reg__DOT__reg_com[9]),64);
            tracep->chgQData(oldp+201,(vlSelf->top__DOT__common_reg__DOT__reg_com[10]),64);
            tracep->chgQData(oldp+203,(vlSelf->top__DOT__common_reg__DOT__reg_com[11]),64);
            tracep->chgQData(oldp+205,(vlSelf->top__DOT__common_reg__DOT__reg_com[12]),64);
            tracep->chgQData(oldp+207,(vlSelf->top__DOT__common_reg__DOT__reg_com[13]),64);
            tracep->chgQData(oldp+209,(vlSelf->top__DOT__common_reg__DOT__reg_com[14]),64);
            tracep->chgQData(oldp+211,(vlSelf->top__DOT__common_reg__DOT__reg_com[15]),64);
            tracep->chgQData(oldp+213,(vlSelf->top__DOT__common_reg__DOT__reg_com[16]),64);
            tracep->chgQData(oldp+215,(vlSelf->top__DOT__common_reg__DOT__reg_com[17]),64);
            tracep->chgQData(oldp+217,(vlSelf->top__DOT__common_reg__DOT__reg_com[18]),64);
            tracep->chgQData(oldp+219,(vlSelf->top__DOT__common_reg__DOT__reg_com[19]),64);
            tracep->chgQData(oldp+221,(vlSelf->top__DOT__common_reg__DOT__reg_com[20]),64);
            tracep->chgQData(oldp+223,(vlSelf->top__DOT__common_reg__DOT__reg_com[21]),64);
            tracep->chgQData(oldp+225,(vlSelf->top__DOT__common_reg__DOT__reg_com[22]),64);
            tracep->chgQData(oldp+227,(vlSelf->top__DOT__common_reg__DOT__reg_com[23]),64);
            tracep->chgQData(oldp+229,(vlSelf->top__DOT__common_reg__DOT__reg_com[24]),64);
            tracep->chgQData(oldp+231,(vlSelf->top__DOT__common_reg__DOT__reg_com[25]),64);
            tracep->chgQData(oldp+233,(vlSelf->top__DOT__common_reg__DOT__reg_com[26]),64);
            tracep->chgQData(oldp+235,(vlSelf->top__DOT__common_reg__DOT__reg_com[27]),64);
            tracep->chgQData(oldp+237,(vlSelf->top__DOT__common_reg__DOT__reg_com[28]),64);
            tracep->chgQData(oldp+239,(vlSelf->top__DOT__common_reg__DOT__reg_com[29]),64);
            tracep->chgQData(oldp+241,(vlSelf->top__DOT__common_reg__DOT__reg_com[30]),64);
            tracep->chgQData(oldp+243,(vlSelf->top__DOT__common_reg__DOT__reg_com[31]),64);
            tracep->chgBit(oldp+245,((1U & ((IData)(vlSelf->top__DOT__exe_reg_s_bhwd) 
                                            >> 2U))));
            tracep->chgBit(oldp+246,((1U & ((IData)(vlSelf->top__DOT__exe_reg_s_bhwd) 
                                            >> 1U))));
            tracep->chgBit(oldp+247,((1U & (IData)(vlSelf->top__DOT__exe_reg_s_bhwd))));
            tracep->chgBit(oldp+248,((1U & (IData)(vlSelf->top__DOT__exe_reg_op))));
            tracep->chgBit(oldp+249,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                            >> 1U))));
            tracep->chgBit(oldp+250,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                            >> 2U))));
            tracep->chgBit(oldp+251,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                            >> 3U))));
            tracep->chgBit(oldp+252,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                            >> 4U))));
            tracep->chgBit(oldp+253,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                            >> 5U))));
            tracep->chgBit(oldp+254,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                            >> 6U))));
            tracep->chgBit(oldp+255,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                            >> 7U))));
            tracep->chgBit(oldp+256,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                            >> 8U))));
            tracep->chgBit(oldp+257,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                            >> 9U))));
            tracep->chgBit(oldp+258,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+259,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                            >> 0xbU))));
            tracep->chgQData(oldp+260,(vlSelf->top__DOT__alu__DOT__add_sub_result),64);
            tracep->chgQData(oldp+262,((QData)((IData)(
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
            tracep->chgQData(oldp+264,((vlSelf->top__DOT__src1 
                                        + vlSelf->top__DOT__exe_reg_imm)),64);
            VL_EXTEND_WQ(65,64, __Vtemp47, vlSelf->top__DOT__src1);
            VL_EXTEND_WQ(65,64, __Vtemp48, vlSelf->top__DOT__alu__DOT__data_b);
            VL_ADD_W(3, __Vtemp49, __Vtemp47, __Vtemp48);
            VL_EXTEND_WI(65,1, __Vtemp50, (IData)(vlSelf->top__DOT__alu__DOT__data_cin));
            VL_ADD_W(3, __Vtemp51, __Vtemp49, __Vtemp50);
            tracep->chgQData(oldp+266,((QData)((IData)(
                                                       (1U 
                                                        & (~ 
                                                           (1U 
                                                            & __Vtemp51[2U])))))),64);
            tracep->chgQData(oldp+268,((vlSelf->top__DOT__src1 
                                        & vlSelf->top__DOT__src2)),64);
            tracep->chgQData(oldp+270,((vlSelf->top__DOT__src1 
                                        | vlSelf->top__DOT__src2)),64);
            tracep->chgQData(oldp+272,((vlSelf->top__DOT__src1 
                                        ^ vlSelf->top__DOT__src2)),64);
            tracep->chgQData(oldp+274,((vlSelf->top__DOT__src1 
                                        << (0x3fU & (IData)(vlSelf->top__DOT__src2)))),64);
            tracep->chgQData(oldp+276,((vlSelf->top__DOT__src1 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__src2)))),64);
            tracep->chgQData(oldp+278,((vlSelf->top__DOT__src1 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__src2)))),64);
            tracep->chgQData(oldp+280,((4ULL + vlSelf->top__DOT__src1)),64);
            tracep->chgQData(oldp+282,(vlSelf->top__DOT__alu__DOT__data_b),64);
            tracep->chgQData(oldp+284,(vlSelf->top__DOT__alu__DOT__data_result),64);
            tracep->chgBit(oldp+286,(vlSelf->top__DOT__alu__DOT__data_cin));
            VL_EXTEND_WQ(65,64, __Vtemp54, vlSelf->top__DOT__src1);
            VL_EXTEND_WQ(65,64, __Vtemp55, vlSelf->top__DOT__alu__DOT__data_b);
            VL_ADD_W(3, __Vtemp56, __Vtemp54, __Vtemp55);
            VL_EXTEND_WI(65,1, __Vtemp57, (IData)(vlSelf->top__DOT__alu__DOT__data_cin));
            VL_ADD_W(3, __Vtemp58, __Vtemp56, __Vtemp57);
            tracep->chgBit(oldp+287,((1U & __Vtemp58[2U])));
            tracep->chgBit(oldp+288,((1U & ((IData)(vlSelf->top__DOT__mem_reg_s_bhwd) 
                                            >> 2U))));
            tracep->chgBit(oldp+289,((1U & ((IData)(vlSelf->top__DOT__mem_reg_s_bhwd) 
                                            >> 1U))));
            tracep->chgBit(oldp+290,((1U & (IData)(vlSelf->top__DOT__mem_reg_s_bhwd))));
            tracep->chgBit(oldp+291,((1U & ((IData)(vlSelf->top__DOT__mem_reg_l_bhw) 
                                            >> 5U))));
            tracep->chgBit(oldp+292,((1U & ((IData)(vlSelf->top__DOT__mem_reg_l_bhw) 
                                            >> 4U))));
            tracep->chgBit(oldp+293,((1U & ((IData)(vlSelf->top__DOT__mem_reg_l_bhw) 
                                            >> 3U))));
            tracep->chgBit(oldp+294,((1U & ((IData)(vlSelf->top__DOT__mem_reg_l_bhw) 
                                            >> 2U))));
            tracep->chgBit(oldp+295,((1U & ((IData)(vlSelf->top__DOT__mem_reg_l_bhw) 
                                            >> 1U))));
            tracep->chgBit(oldp+296,((1U & (IData)(vlSelf->top__DOT__mem_reg_l_bhw))));
            tracep->chgQData(oldp+297,(vlSelf->top__DOT__data_ram__DOT__rdata_out),64);
            tracep->chgQData(oldp+299,(vlSelf->top__DOT__data_ram__DOT__ram[0]),64);
            tracep->chgQData(oldp+301,(vlSelf->top__DOT__data_ram__DOT__ram[1]),64);
            tracep->chgSData(oldp+303,(vlSelf->top__DOT__ebreak_list__DOT__op_1),12);
            tracep->chgBit(oldp+304,(vlSelf->top__DOT__ebreak_list__DOT__ebreak_1));
            tracep->chgIData(oldp+305,(vlSelf->top__DOT__ebreak_list__DOT__inst_1),32);
        }
        tracep->chgBit(oldp+306,(vlSelf->clk));
        tracep->chgBit(oldp+307,(vlSelf->rst));
        tracep->chgQData(oldp+308,(vlSelf->data_rd),64);
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
