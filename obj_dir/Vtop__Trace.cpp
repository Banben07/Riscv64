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
    VlWide<3>/*95:0*/ __Vtemp33;
    VlWide<3>/*95:0*/ __Vtemp34;
    VlWide<3>/*95:0*/ __Vtemp35;
    VlWide<3>/*95:0*/ __Vtemp36;
    VlWide<3>/*95:0*/ __Vtemp37;
    VlWide<3>/*95:0*/ __Vtemp40;
    VlWide<3>/*95:0*/ __Vtemp41;
    VlWide<3>/*95:0*/ __Vtemp42;
    VlWide<3>/*95:0*/ __Vtemp43;
    VlWide<3>/*95:0*/ __Vtemp44;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(((IData)((0x2023U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__inst_id)))
                                     ? 1U : 0U)));
            tracep->chgBit(oldp+1,(((IData)(vlSelf->top__DOT__stall_control)
                                     ? 0U : ((IData)(
                                                     (0x2023U 
                                                      == 
                                                      (0x707fU 
                                                       & vlSelf->top__DOT__inst_id)))
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
            tracep->chgBit(oldp+4,(((IData)((0x3003U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__inst_id)))
                                     ? 1U : 0U)));
            tracep->chgBit(oldp+5,(vlSelf->top__DOT__exe_reg_data_ren));
            tracep->chgBit(oldp+6,(vlSelf->top__DOT__mem_reg_data_ren));
            tracep->chgBit(oldp+7,(((1U == (IData)(vlSelf->top__DOT__pc_sel))
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
            tracep->chgCData(oldp+20,((((((0x6fU == 
                                           (0x7fU & vlSelf->top__DOT__inst_id)) 
                                          | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_U)) 
                                         | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_I)) 
                                        | (0x23U == 
                                           (0x7fU & vlSelf->top__DOT__inst_id)))
                                        ? 1U : 2U)),2);
            tracep->chgCData(oldp+21,(vlSelf->top__DOT__exe_reg_src2_sel),2);
            tracep->chgCData(oldp+22,(((IData)((0x2003U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->top__DOT__inst_id)))
                                        ? 2U : 1U)),2);
            tracep->chgCData(oldp+23,(vlSelf->top__DOT__exe_reg_load_sel),2);
            tracep->chgCData(oldp+24,(vlSelf->top__DOT__pc_sel),3);
            tracep->chgCData(oldp+25,(vlSelf->top__DOT__pc_add_rs1_sel),3);
            tracep->chgCData(oldp+26,(vlSelf->top__DOT__src1_sel_plus),3);
            tracep->chgCData(oldp+27,(vlSelf->top__DOT__src2_sel_plus),3);
            tracep->chgCData(oldp+28,(vlSelf->top__DOT__wb_reg_pc_sel),3);
            tracep->chgCData(oldp+29,(vlSelf->top__DOT__mem_reg_pc_sel),3);
            tracep->chgCData(oldp+30,(vlSelf->top__DOT__rs1),5);
            tracep->chgCData(oldp+31,((0x1fU & (vlSelf->top__DOT__inst_id 
                                                >> 0x14U))),5);
            tracep->chgCData(oldp+32,(vlSelf->top__DOT__exe_reg_rs1),5);
            tracep->chgCData(oldp+33,(vlSelf->top__DOT__exe_reg_rs2),5);
            tracep->chgCData(oldp+34,((0x1fU & (vlSelf->top__DOT__inst_id 
                                                >> 7U))),5);
            tracep->chgCData(oldp+35,(vlSelf->top__DOT__mem_reg_rd),5);
            tracep->chgCData(oldp+36,(vlSelf->top__DOT__exe_reg_rd),5);
            tracep->chgCData(oldp+37,(vlSelf->top__DOT__wb_reg_rd),5);
            tracep->chgSData(oldp+38,(vlSelf->top__DOT__op),12);
            tracep->chgSData(oldp+39,(vlSelf->top__DOT__op_out),12);
            tracep->chgSData(oldp+40,(vlSelf->top__DOT__exe_reg_op),12);
            tracep->chgSData(oldp+41,((0xffffU & (IData)(
                                                         ((vlSelf->top__DOT__cpu_pc 
                                                           - 0x80000000ULL) 
                                                          >> 2U)))),16);
            tracep->chgIData(oldp+42,(vlSelf->top__DOT__inst),32);
            tracep->chgIData(oldp+43,((IData)(vlSelf->top__DOT__alu__DOT__data_result)),32);
            tracep->chgIData(oldp+44,(vlSelf->top__DOT__mem_reg_ram_addr),32);
            tracep->chgIData(oldp+45,(vlSelf->top__DOT__inst_id),32);
            tracep->chgIData(oldp+46,(vlSelf->top__DOT__inst_out),32);
            tracep->chgQData(oldp+47,(vlSelf->top__DOT__imm),64);
            tracep->chgQData(oldp+49,(((1U == (IData)(vlSelf->top__DOT__pc_add_rs1_sel))
                                        ? vlSelf->top__DOT__src1_rs1
                                        : ((2U == (IData)(vlSelf->top__DOT__pc_add_rs1_sel))
                                            ? vlSelf->top__DOT__mem_reg_data_rd_in
                                            : vlSelf->top__DOT__wb_reg_data_rd_in))),64);
            tracep->chgQData(oldp+51,(vlSelf->top__DOT__common_reg__DOT__reg_com
                                      [0xaU]),64);
            tracep->chgQData(oldp+53,(((1U == (IData)(vlSelf->top__DOT__exe_reg_src1_sel))
                                        ? vlSelf->top__DOT__exe_reg_pc
                                        : vlSelf->top__DOT__exe_reg_src1_rs1)),64);
            tracep->chgQData(oldp+55,(((1U == (IData)(vlSelf->top__DOT__exe_reg_src2_sel))
                                        ? vlSelf->top__DOT__exe_reg_imm
                                        : vlSelf->top__DOT__exe_reg_src2_rs2)),64);
            tracep->chgQData(oldp+57,(vlSelf->top__DOT__if_pc),64);
            tracep->chgQData(oldp+59,(vlSelf->top__DOT__exe_reg_src1_rs1),64);
            tracep->chgQData(oldp+61,(vlSelf->top__DOT__exe_reg_src2_rs2),64);
            tracep->chgQData(oldp+63,(vlSelf->top__DOT__mem_reg_pc),64);
            tracep->chgQData(oldp+65,(vlSelf->top__DOT__wb_reg_rdata),64);
            tracep->chgQData(oldp+67,(vlSelf->top__DOT__wb_reg_data_rd_in),64);
            tracep->chgQData(oldp+69,(vlSelf->top__DOT__mem_reg_src2_rs2),64);
            tracep->chgQData(oldp+71,(vlSelf->top__DOT__mem_reg_data_rd_in),64);
            tracep->chgQData(oldp+73,(vlSelf->top__DOT__exe_reg_imm),64);
            tracep->chgQData(oldp+75,(vlSelf->top__DOT__cpu_pc),64);
            tracep->chgQData(oldp+77,(vlSelf->top__DOT__wb_reg_pc),64);
            tracep->chgQData(oldp+79,(vlSelf->top__DOT__exe_reg_pc),64);
            tracep->chgQData(oldp+81,(vlSelf->top__DOT__id_reg_pc),64);
            tracep->chgQData(oldp+83,(((1U == (IData)(vlSelf->top__DOT__pc_sel))
                                        ? (4ULL + vlSelf->top__DOT__cpu_pc)
                                        : ((2U == (IData)(vlSelf->top__DOT__pc_sel))
                                            ? (vlSelf->top__DOT__id_reg_pc 
                                               + vlSelf->top__DOT__imm)
                                            : (0xfffffffffffffffeULL 
                                               & (((1U 
                                                    == (IData)(vlSelf->top__DOT__pc_add_rs1_sel))
                                                    ? vlSelf->top__DOT__src1_rs1
                                                    : 
                                                   ((2U 
                                                     == (IData)(vlSelf->top__DOT__pc_add_rs1_sel))
                                                     ? vlSelf->top__DOT__mem_reg_data_rd_in
                                                     : vlSelf->top__DOT__wb_reg_data_rd_in)) 
                                                  + vlSelf->top__DOT__imm))))),64);
            tracep->chgQData(oldp+85,((4ULL + vlSelf->top__DOT__cpu_pc)),64);
            tracep->chgQData(oldp+87,(vlSelf->top__DOT__rdata),64);
            tracep->chgQData(oldp+89,(vlSelf->top__DOT__src1_rs1),64);
            tracep->chgQData(oldp+91,(((0U == (0x1fU 
                                               & (vlSelf->top__DOT__inst_id 
                                                  >> 0x14U)))
                                        ? 0ULL : vlSelf->top__DOT__common_reg__DOT__reg_com
                                       [(0x1fU & (vlSelf->top__DOT__inst_id 
                                                  >> 0x14U))])),64);
            tracep->chgQData(oldp+93,((vlSelf->top__DOT__id_reg_pc 
                                       + vlSelf->top__DOT__imm)),64);
            tracep->chgQData(oldp+95,((0xfffffffffffffffeULL 
                                       & (((1U == (IData)(vlSelf->top__DOT__pc_add_rs1_sel))
                                            ? vlSelf->top__DOT__src1_rs1
                                            : ((2U 
                                                == (IData)(vlSelf->top__DOT__pc_add_rs1_sel))
                                                ? vlSelf->top__DOT__mem_reg_data_rd_in
                                                : vlSelf->top__DOT__wb_reg_data_rd_in)) 
                                          + vlSelf->top__DOT__imm))),64);
            tracep->chgQData(oldp+97,(vlSelf->top__DOT__src1),64);
            tracep->chgQData(oldp+99,(vlSelf->top__DOT__src2),64);
            tracep->chgQData(oldp+101,(vlSelf->top__DOT__data_rd_in),64);
            tracep->chgBit(oldp+103,(vlSelf->top__DOT__idu__DOT__TYPE_I));
            tracep->chgBit(oldp+104,(vlSelf->top__DOT__idu__DOT__TYPE_U));
            tracep->chgBit(oldp+105,((0x23U == (0x7fU 
                                                & vlSelf->top__DOT__inst_id))));
            tracep->chgBit(oldp+106,((0x6fU == (0x7fU 
                                                & vlSelf->top__DOT__inst_id))));
            tracep->chgBit(oldp+107,((0x63U == (0x7fU 
                                                & vlSelf->top__DOT__inst_id))));
            tracep->chgBit(oldp+108,((0x33U == (0x7fU 
                                                & vlSelf->top__DOT__inst_id))));
            tracep->chgQData(oldp+109,((((- (QData)((IData)(
                                                            (vlSelf->top__DOT__inst_id 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    (vlSelf->top__DOT__inst_id 
                                                                     >> 0x14U))))),64);
            tracep->chgQData(oldp+111,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->top__DOT__inst_id 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (0xfffff000U 
                                                           & vlSelf->top__DOT__inst_id))))),64);
            tracep->chgQData(oldp+113,((((- (QData)((IData)(
                                                            (vlSelf->top__DOT__inst_id 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & (vlSelf->top__DOT__inst_id 
                                                                         >> 0x14U)) 
                                                                     | (0x1fU 
                                                                        & (vlSelf->top__DOT__inst_id 
                                                                           >> 7U))))))),64);
            tracep->chgQData(oldp+115,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+117,((((- (QData)((IData)(
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
            tracep->chgCData(oldp+119,((0x7fU & vlSelf->top__DOT__inst_id)),7);
            tracep->chgCData(oldp+120,((vlSelf->top__DOT__inst_id 
                                        >> 0x19U)),7);
            tracep->chgCData(oldp+121,((7U & (vlSelf->top__DOT__inst_id 
                                              >> 0xcU))),3);
            tracep->chgQData(oldp+122,(vlSelf->top__DOT__common_reg__DOT__reg_com[0]),64);
            tracep->chgQData(oldp+124,(vlSelf->top__DOT__common_reg__DOT__reg_com[1]),64);
            tracep->chgQData(oldp+126,(vlSelf->top__DOT__common_reg__DOT__reg_com[2]),64);
            tracep->chgQData(oldp+128,(vlSelf->top__DOT__common_reg__DOT__reg_com[3]),64);
            tracep->chgQData(oldp+130,(vlSelf->top__DOT__common_reg__DOT__reg_com[4]),64);
            tracep->chgQData(oldp+132,(vlSelf->top__DOT__common_reg__DOT__reg_com[5]),64);
            tracep->chgQData(oldp+134,(vlSelf->top__DOT__common_reg__DOT__reg_com[6]),64);
            tracep->chgQData(oldp+136,(vlSelf->top__DOT__common_reg__DOT__reg_com[7]),64);
            tracep->chgQData(oldp+138,(vlSelf->top__DOT__common_reg__DOT__reg_com[8]),64);
            tracep->chgQData(oldp+140,(vlSelf->top__DOT__common_reg__DOT__reg_com[9]),64);
            tracep->chgQData(oldp+142,(vlSelf->top__DOT__common_reg__DOT__reg_com[10]),64);
            tracep->chgQData(oldp+144,(vlSelf->top__DOT__common_reg__DOT__reg_com[11]),64);
            tracep->chgQData(oldp+146,(vlSelf->top__DOT__common_reg__DOT__reg_com[12]),64);
            tracep->chgQData(oldp+148,(vlSelf->top__DOT__common_reg__DOT__reg_com[13]),64);
            tracep->chgQData(oldp+150,(vlSelf->top__DOT__common_reg__DOT__reg_com[14]),64);
            tracep->chgQData(oldp+152,(vlSelf->top__DOT__common_reg__DOT__reg_com[15]),64);
            tracep->chgQData(oldp+154,(vlSelf->top__DOT__common_reg__DOT__reg_com[16]),64);
            tracep->chgQData(oldp+156,(vlSelf->top__DOT__common_reg__DOT__reg_com[17]),64);
            tracep->chgQData(oldp+158,(vlSelf->top__DOT__common_reg__DOT__reg_com[18]),64);
            tracep->chgQData(oldp+160,(vlSelf->top__DOT__common_reg__DOT__reg_com[19]),64);
            tracep->chgQData(oldp+162,(vlSelf->top__DOT__common_reg__DOT__reg_com[20]),64);
            tracep->chgQData(oldp+164,(vlSelf->top__DOT__common_reg__DOT__reg_com[21]),64);
            tracep->chgQData(oldp+166,(vlSelf->top__DOT__common_reg__DOT__reg_com[22]),64);
            tracep->chgQData(oldp+168,(vlSelf->top__DOT__common_reg__DOT__reg_com[23]),64);
            tracep->chgQData(oldp+170,(vlSelf->top__DOT__common_reg__DOT__reg_com[24]),64);
            tracep->chgQData(oldp+172,(vlSelf->top__DOT__common_reg__DOT__reg_com[25]),64);
            tracep->chgQData(oldp+174,(vlSelf->top__DOT__common_reg__DOT__reg_com[26]),64);
            tracep->chgQData(oldp+176,(vlSelf->top__DOT__common_reg__DOT__reg_com[27]),64);
            tracep->chgQData(oldp+178,(vlSelf->top__DOT__common_reg__DOT__reg_com[28]),64);
            tracep->chgQData(oldp+180,(vlSelf->top__DOT__common_reg__DOT__reg_com[29]),64);
            tracep->chgQData(oldp+182,(vlSelf->top__DOT__common_reg__DOT__reg_com[30]),64);
            tracep->chgQData(oldp+184,(vlSelf->top__DOT__common_reg__DOT__reg_com[31]),64);
            tracep->chgBit(oldp+186,((1U & (IData)(vlSelf->top__DOT__exe_reg_op))));
            tracep->chgBit(oldp+187,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                            >> 1U))));
            tracep->chgBit(oldp+188,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                            >> 2U))));
            tracep->chgBit(oldp+189,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                            >> 3U))));
            tracep->chgBit(oldp+190,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                            >> 4U))));
            tracep->chgBit(oldp+191,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                            >> 5U))));
            tracep->chgBit(oldp+192,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                            >> 6U))));
            tracep->chgBit(oldp+193,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                            >> 7U))));
            tracep->chgBit(oldp+194,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                            >> 8U))));
            tracep->chgBit(oldp+195,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                            >> 9U))));
            tracep->chgBit(oldp+196,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+197,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                            >> 0xbU))));
            tracep->chgQData(oldp+198,(vlSelf->top__DOT__alu__DOT__data_result),64);
            tracep->chgQData(oldp+200,((QData)((IData)(
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
            VL_EXTEND_WQ(65,64, __Vtemp33, vlSelf->top__DOT__src1);
            VL_EXTEND_WQ(65,64, __Vtemp34, vlSelf->top__DOT__alu__DOT__data_b);
            VL_ADD_W(3, __Vtemp35, __Vtemp33, __Vtemp34);
            VL_EXTEND_WI(65,1, __Vtemp36, (IData)(vlSelf->top__DOT__alu__DOT__data_cin));
            VL_ADD_W(3, __Vtemp37, __Vtemp35, __Vtemp36);
            tracep->chgQData(oldp+202,((QData)((IData)(
                                                       (1U 
                                                        & (~ 
                                                           (1U 
                                                            & __Vtemp37[2U])))))),64);
            tracep->chgQData(oldp+204,((vlSelf->top__DOT__src1 
                                        & vlSelf->top__DOT__src2)),64);
            tracep->chgQData(oldp+206,((vlSelf->top__DOT__src1 
                                        | vlSelf->top__DOT__src2)),64);
            tracep->chgQData(oldp+208,((vlSelf->top__DOT__src1 
                                        ^ vlSelf->top__DOT__src2)),64);
            tracep->chgQData(oldp+210,((vlSelf->top__DOT__src1 
                                        << (0x3fU & (IData)(vlSelf->top__DOT__src2)))),64);
            tracep->chgQData(oldp+212,((vlSelf->top__DOT__src1 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__src2)))),64);
            tracep->chgQData(oldp+214,((vlSelf->top__DOT__src1 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__src2)))),64);
            tracep->chgQData(oldp+216,((4ULL + vlSelf->top__DOT__src1)),64);
            tracep->chgQData(oldp+218,(vlSelf->top__DOT__alu__DOT__data_b),64);
            tracep->chgBit(oldp+220,(vlSelf->top__DOT__alu__DOT__data_cin));
            VL_EXTEND_WQ(65,64, __Vtemp40, vlSelf->top__DOT__src1);
            VL_EXTEND_WQ(65,64, __Vtemp41, vlSelf->top__DOT__alu__DOT__data_b);
            VL_ADD_W(3, __Vtemp42, __Vtemp40, __Vtemp41);
            VL_EXTEND_WI(65,1, __Vtemp43, (IData)(vlSelf->top__DOT__alu__DOT__data_cin));
            VL_ADD_W(3, __Vtemp44, __Vtemp42, __Vtemp43);
            tracep->chgBit(oldp+221,((1U & __Vtemp44[2U])));
            tracep->chgQData(oldp+222,(vlSelf->top__DOT__data_ram__DOT__ram[0]),64);
            tracep->chgQData(oldp+224,(vlSelf->top__DOT__data_ram__DOT__ram[1]),64);
            tracep->chgSData(oldp+226,(vlSelf->top__DOT__ebreak_list__DOT__op_1),12);
            tracep->chgBit(oldp+227,(vlSelf->top__DOT__ebreak_list__DOT__ebreak_1));
            tracep->chgIData(oldp+228,(vlSelf->top__DOT__ebreak_list__DOT__inst_1),32);
        }
        tracep->chgBit(oldp+229,(vlSelf->clk));
        tracep->chgBit(oldp+230,(vlSelf->rst));
        tracep->chgQData(oldp+231,(vlSelf->data_rd),64);
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
