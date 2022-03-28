// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vsing_top__Syms.h"


void Vsing_top___024root__traceChgSub0(Vsing_top___024root* vlSelf, VerilatedVcd* tracep);

void Vsing_top___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vsing_top___024root* const __restrict vlSelf = static_cast<Vsing_top___024root*>(voidSelf);
    Vsing_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vsing_top___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vsing_top___024root__traceChgSub0(Vsing_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vsing_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp32;
    VlWide<3>/*95:0*/ __Vtemp33;
    VlWide<3>/*95:0*/ __Vtemp34;
    VlWide<3>/*95:0*/ __Vtemp35;
    VlWide<3>/*95:0*/ __Vtemp36;
    VlWide<3>/*95:0*/ __Vtemp39;
    VlWide<3>/*95:0*/ __Vtemp40;
    VlWide<3>/*95:0*/ __Vtemp41;
    VlWide<3>/*95:0*/ __Vtemp42;
    VlWide<3>/*95:0*/ __Vtemp43;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+0,(((IData)((0x2023U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__inst_id)))
                                     ? 1U : 0U)));
            tracep->chgBit(oldp+1,((((((0x33U == (0x7fU 
                                                  & vlSelf->top__DOT__inst_id)) 
                                       | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_I)) 
                                      | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_U)) 
                                     | (0x6fU == (0x7fU 
                                                  & vlSelf->top__DOT__inst_id)))
                                     ? 1U : 0U)));
            tracep->chgBit(oldp+2,(vlSelf->top__DOT__mem_reg_reg_wen));
            tracep->chgBit(oldp+3,(vlSelf->top__DOT__mem_reg_data_wen));
            tracep->chgBit(oldp+4,(vlSelf->top__DOT__exe_reg_data_wen));
            tracep->chgBit(oldp+5,(vlSelf->top__DOT__exe_reg_reg_wen));
            tracep->chgBit(oldp+6,(vlSelf->top__DOT__wb_reg_reg_wen));
            tracep->chgCData(oldp+7,((((0x6fU == (0x7fU 
                                                  & vlSelf->top__DOT__inst_id)) 
                                       | (0x17U == 
                                          (0x7fU & vlSelf->top__DOT__inst_id)))
                                       ? 1U : 2U)),2);
            tracep->chgCData(oldp+8,(vlSelf->top__DOT__wb_reg_load_sel),2);
            tracep->chgCData(oldp+9,(vlSelf->top__DOT__mem_reg_load_sel),2);
            tracep->chgCData(oldp+10,(vlSelf->top__DOT__exe_reg_src1_sel),2);
            tracep->chgCData(oldp+11,((((((0x6fU == 
                                           (0x7fU & vlSelf->top__DOT__inst_id)) 
                                          | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_U)) 
                                         | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_I)) 
                                        | (0x23U == 
                                           (0x7fU & vlSelf->top__DOT__inst_id)))
                                        ? 1U : 2U)),2);
            tracep->chgCData(oldp+12,(vlSelf->top__DOT__exe_reg_src2_sel),2);
            tracep->chgCData(oldp+13,(((IData)((0x2003U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->top__DOT__inst_id)))
                                        ? 2U : 1U)),2);
            tracep->chgCData(oldp+14,(vlSelf->top__DOT__exe_reg_load_sel),2);
            tracep->chgCData(oldp+15,(((IData)((0x67U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->top__DOT__inst_id)))
                                        ? 4U : ((0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->top__DOT__inst_id))
                                                 ? 2U
                                                 : 1U))),3);
            tracep->chgCData(oldp+16,(vlSelf->top__DOT__wb_reg_pc_sel),3);
            tracep->chgCData(oldp+17,(vlSelf->top__DOT__mem_reg_pc_sel),3);
            tracep->chgCData(oldp+18,(vlSelf->top__DOT__exe_reg_pc_sel),3);
            tracep->chgCData(oldp+19,(vlSelf->top__DOT__rs1),5);
            tracep->chgCData(oldp+20,((0x1fU & (vlSelf->top__DOT__inst_id 
                                                >> 0x14U))),5);
            tracep->chgCData(oldp+21,((0x1fU & (vlSelf->top__DOT__inst_id 
                                                >> 7U))),5);
            tracep->chgCData(oldp+22,(vlSelf->top__DOT__mem_reg_rd),5);
            tracep->chgCData(oldp+23,(vlSelf->top__DOT__exe_reg_rd),5);
            tracep->chgCData(oldp+24,(vlSelf->top__DOT__wb_reg_rd),5);
            tracep->chgSData(oldp+25,(vlSelf->top__DOT__op),12);
            tracep->chgSData(oldp+26,(vlSelf->top__DOT__exe_reg_op),12);
            tracep->chgSData(oldp+27,((0xffffU & (IData)(
                                                         ((vlSelf->top__DOT__cpu_dnpc 
                                                           - 0x80000000ULL) 
                                                          >> 2U)))),16);
            tracep->chgIData(oldp+28,(vlSelf->top__DOT__inst),32);
            tracep->chgIData(oldp+29,((IData)(vlSelf->top__DOT__alu__DOT__data_result)),32);
            tracep->chgIData(oldp+30,(vlSelf->top__DOT__mem_reg_ram_addr),32);
            tracep->chgIData(oldp+31,(vlSelf->top__DOT__inst_id),32);
            tracep->chgQData(oldp+32,(((IData)(vlSelf->top__DOT__idu__DOT__TYPE_I)
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
                                                ? (
                                                   ((- (QData)((IData)(
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
                                                : (
                                                   (0x6fU 
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
                                                     : 0ULL)))))),64);
            tracep->chgQData(oldp+34,(vlSelf->top__DOT__exe_reg_src1_rs1),64);
            tracep->chgQData(oldp+36,(vlSelf->top__DOT__exe_reg_src2_rs2),64);
            tracep->chgQData(oldp+38,(vlSelf->top__DOT__mem_reg_pc),64);
            tracep->chgQData(oldp+40,(vlSelf->top__DOT__wb_reg_rdata),64);
            tracep->chgQData(oldp+42,(vlSelf->top__DOT__wb_reg_data_rd_in),64);
            tracep->chgQData(oldp+44,(vlSelf->top__DOT__mem_reg_src2_rs2),64);
            tracep->chgQData(oldp+46,(vlSelf->top__DOT__mem_reg_data_rd_in),64);
            tracep->chgQData(oldp+48,(vlSelf->top__DOT__mem_reg_cpu_dnpc_in1),64);
            tracep->chgQData(oldp+50,(vlSelf->top__DOT__mem_reg_cpu_dnpc_in2),64);
            tracep->chgQData(oldp+52,(vlSelf->top__DOT__exe_reg_imm),64);
            tracep->chgQData(oldp+54,(vlSelf->top__DOT__cpu_pc),64);
            tracep->chgQData(oldp+56,(vlSelf->top__DOT__wb_reg_pc),64);
            tracep->chgQData(oldp+58,(vlSelf->top__DOT__exe_reg_pc),64);
            tracep->chgQData(oldp+60,(vlSelf->top__DOT__id_reg_pc),64);
            tracep->chgQData(oldp+62,(vlSelf->top__DOT__cpu_dnpc),64);
            tracep->chgQData(oldp+64,((4ULL + vlSelf->top__DOT__cpu_pc)),64);
            tracep->chgQData(oldp+66,(vlSelf->top__DOT__rdata),64);
            tracep->chgQData(oldp+68,(((0U == (IData)(vlSelf->top__DOT__rs1))
                                        ? 0ULL : vlSelf->top__DOT__common_reg__DOT__reg_com
                                       [vlSelf->top__DOT__rs1])),64);
            tracep->chgQData(oldp+70,(((0U == (0x1fU 
                                               & (vlSelf->top__DOT__inst_id 
                                                  >> 0x14U)))
                                        ? 0ULL : vlSelf->top__DOT__common_reg__DOT__reg_com
                                       [(0x1fU & (vlSelf->top__DOT__inst_id 
                                                  >> 0x14U))])),64);
            tracep->chgQData(oldp+72,(vlSelf->top__DOT__alu__DOT__data_result),64);
            tracep->chgQData(oldp+74,((0xfffffffffffffffeULL 
                                       & vlSelf->top__DOT__alu__DOT__data_result)),64);
            tracep->chgQData(oldp+76,(vlSelf->top__DOT__src1),64);
            tracep->chgQData(oldp+78,(vlSelf->top__DOT__src2),64);
            tracep->chgQData(oldp+80,(vlSelf->top__DOT__data_rd_in),64);
            tracep->chgBit(oldp+82,(vlSelf->top__DOT__idu__DOT__TYPE_I));
            tracep->chgBit(oldp+83,(vlSelf->top__DOT__idu__DOT__TYPE_U));
            tracep->chgBit(oldp+84,((0x23U == (0x7fU 
                                               & vlSelf->top__DOT__inst_id))));
            tracep->chgBit(oldp+85,((0x6fU == (0x7fU 
                                               & vlSelf->top__DOT__inst_id))));
            tracep->chgBit(oldp+86,((0x63U == (0x7fU 
                                               & vlSelf->top__DOT__inst_id))));
            tracep->chgBit(oldp+87,((0x33U == (0x7fU 
                                               & vlSelf->top__DOT__inst_id))));
            tracep->chgQData(oldp+88,((((- (QData)((IData)(
                                                           (vlSelf->top__DOT__inst_id 
                                                            >> 0x1fU)))) 
                                        << 0xcU) | (QData)((IData)(
                                                                   (vlSelf->top__DOT__inst_id 
                                                                    >> 0x14U))))),64);
            tracep->chgQData(oldp+90,((((QData)((IData)(
                                                        (- (IData)(
                                                                   (vlSelf->top__DOT__inst_id 
                                                                    >> 0x1fU))))) 
                                        << 0x20U) | (QData)((IData)(
                                                                    (0xfffff000U 
                                                                     & vlSelf->top__DOT__inst_id))))),64);
            tracep->chgQData(oldp+92,((((- (QData)((IData)(
                                                           (vlSelf->top__DOT__inst_id 
                                                            >> 0x1fU)))) 
                                        << 0xcU) | (QData)((IData)(
                                                                   ((0xfe0U 
                                                                     & (vlSelf->top__DOT__inst_id 
                                                                        >> 0x14U)) 
                                                                    | (0x1fU 
                                                                       & (vlSelf->top__DOT__inst_id 
                                                                          >> 7U))))))),64);
            tracep->chgQData(oldp+94,((((- (QData)((IData)(
                                                           (vlSelf->top__DOT__inst_id 
                                                            >> 0x1fU)))) 
                                        << 0x15U) | (QData)((IData)(
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
            tracep->chgQData(oldp+96,((((- (QData)((IData)(
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
            tracep->chgCData(oldp+98,((0x7fU & vlSelf->top__DOT__inst_id)),7);
            tracep->chgCData(oldp+99,((vlSelf->top__DOT__inst_id 
                                       >> 0x19U)),7);
            tracep->chgCData(oldp+100,((7U & (vlSelf->top__DOT__inst_id 
                                              >> 0xcU))),3);
            tracep->chgQData(oldp+101,(vlSelf->top__DOT__common_reg__DOT__reg_com[0]),64);
            tracep->chgQData(oldp+103,(vlSelf->top__DOT__common_reg__DOT__reg_com[1]),64);
            tracep->chgQData(oldp+105,(vlSelf->top__DOT__common_reg__DOT__reg_com[2]),64);
            tracep->chgQData(oldp+107,(vlSelf->top__DOT__common_reg__DOT__reg_com[3]),64);
            tracep->chgQData(oldp+109,(vlSelf->top__DOT__common_reg__DOT__reg_com[4]),64);
            tracep->chgQData(oldp+111,(vlSelf->top__DOT__common_reg__DOT__reg_com[5]),64);
            tracep->chgQData(oldp+113,(vlSelf->top__DOT__common_reg__DOT__reg_com[6]),64);
            tracep->chgQData(oldp+115,(vlSelf->top__DOT__common_reg__DOT__reg_com[7]),64);
            tracep->chgQData(oldp+117,(vlSelf->top__DOT__common_reg__DOT__reg_com[8]),64);
            tracep->chgQData(oldp+119,(vlSelf->top__DOT__common_reg__DOT__reg_com[9]),64);
            tracep->chgQData(oldp+121,(vlSelf->top__DOT__common_reg__DOT__reg_com[10]),64);
            tracep->chgQData(oldp+123,(vlSelf->top__DOT__common_reg__DOT__reg_com[11]),64);
            tracep->chgQData(oldp+125,(vlSelf->top__DOT__common_reg__DOT__reg_com[12]),64);
            tracep->chgQData(oldp+127,(vlSelf->top__DOT__common_reg__DOT__reg_com[13]),64);
            tracep->chgQData(oldp+129,(vlSelf->top__DOT__common_reg__DOT__reg_com[14]),64);
            tracep->chgQData(oldp+131,(vlSelf->top__DOT__common_reg__DOT__reg_com[15]),64);
            tracep->chgQData(oldp+133,(vlSelf->top__DOT__common_reg__DOT__reg_com[16]),64);
            tracep->chgQData(oldp+135,(vlSelf->top__DOT__common_reg__DOT__reg_com[17]),64);
            tracep->chgQData(oldp+137,(vlSelf->top__DOT__common_reg__DOT__reg_com[18]),64);
            tracep->chgQData(oldp+139,(vlSelf->top__DOT__common_reg__DOT__reg_com[19]),64);
            tracep->chgQData(oldp+141,(vlSelf->top__DOT__common_reg__DOT__reg_com[20]),64);
            tracep->chgQData(oldp+143,(vlSelf->top__DOT__common_reg__DOT__reg_com[21]),64);
            tracep->chgQData(oldp+145,(vlSelf->top__DOT__common_reg__DOT__reg_com[22]),64);
            tracep->chgQData(oldp+147,(vlSelf->top__DOT__common_reg__DOT__reg_com[23]),64);
            tracep->chgQData(oldp+149,(vlSelf->top__DOT__common_reg__DOT__reg_com[24]),64);
            tracep->chgQData(oldp+151,(vlSelf->top__DOT__common_reg__DOT__reg_com[25]),64);
            tracep->chgQData(oldp+153,(vlSelf->top__DOT__common_reg__DOT__reg_com[26]),64);
            tracep->chgQData(oldp+155,(vlSelf->top__DOT__common_reg__DOT__reg_com[27]),64);
            tracep->chgQData(oldp+157,(vlSelf->top__DOT__common_reg__DOT__reg_com[28]),64);
            tracep->chgQData(oldp+159,(vlSelf->top__DOT__common_reg__DOT__reg_com[29]),64);
            tracep->chgQData(oldp+161,(vlSelf->top__DOT__common_reg__DOT__reg_com[30]),64);
            tracep->chgQData(oldp+163,(vlSelf->top__DOT__common_reg__DOT__reg_com[31]),64);
            tracep->chgBit(oldp+165,((1U & (IData)(vlSelf->top__DOT__exe_reg_op))));
            tracep->chgBit(oldp+166,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                            >> 1U))));
            tracep->chgBit(oldp+167,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                            >> 2U))));
            tracep->chgBit(oldp+168,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                            >> 3U))));
            tracep->chgBit(oldp+169,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                            >> 4U))));
            tracep->chgBit(oldp+170,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                            >> 5U))));
            tracep->chgBit(oldp+171,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                            >> 6U))));
            tracep->chgBit(oldp+172,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                            >> 7U))));
            tracep->chgBit(oldp+173,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                            >> 8U))));
            tracep->chgBit(oldp+174,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                            >> 9U))));
            tracep->chgBit(oldp+175,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+176,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                            >> 0xbU))));
            tracep->chgQData(oldp+177,((QData)((IData)(
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
            VL_EXTEND_WQ(65,64, __Vtemp32, vlSelf->top__DOT__src1);
            VL_EXTEND_WQ(65,64, __Vtemp33, vlSelf->top__DOT__alu__DOT__data_b);
            VL_ADD_W(3, __Vtemp34, __Vtemp32, __Vtemp33);
            VL_EXTEND_WI(65,1, __Vtemp35, (IData)(vlSelf->top__DOT__alu__DOT__data_cin));
            VL_ADD_W(3, __Vtemp36, __Vtemp34, __Vtemp35);
            tracep->chgQData(oldp+179,((QData)((IData)(
                                                       (1U 
                                                        & (~ 
                                                           (1U 
                                                            & __Vtemp36[2U])))))),64);
            tracep->chgQData(oldp+181,((vlSelf->top__DOT__src1 
                                        & vlSelf->top__DOT__src2)),64);
            tracep->chgQData(oldp+183,((vlSelf->top__DOT__src1 
                                        | vlSelf->top__DOT__src2)),64);
            tracep->chgQData(oldp+185,((vlSelf->top__DOT__src1 
                                        ^ vlSelf->top__DOT__src2)),64);
            tracep->chgQData(oldp+187,((vlSelf->top__DOT__src1 
                                        << (0x3fU & (IData)(vlSelf->top__DOT__src2)))),64);
            tracep->chgQData(oldp+189,((vlSelf->top__DOT__src1 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__src2)))),64);
            tracep->chgQData(oldp+191,((vlSelf->top__DOT__src1 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__src2)))),64);
            tracep->chgQData(oldp+193,((4ULL + vlSelf->top__DOT__src1)),64);
            tracep->chgQData(oldp+195,(vlSelf->top__DOT__alu__DOT__data_b),64);
            tracep->chgBit(oldp+197,(vlSelf->top__DOT__alu__DOT__data_cin));
            VL_EXTEND_WQ(65,64, __Vtemp39, vlSelf->top__DOT__src1);
            VL_EXTEND_WQ(65,64, __Vtemp40, vlSelf->top__DOT__alu__DOT__data_b);
            VL_ADD_W(3, __Vtemp41, __Vtemp39, __Vtemp40);
            VL_EXTEND_WI(65,1, __Vtemp42, (IData)(vlSelf->top__DOT__alu__DOT__data_cin));
            VL_ADD_W(3, __Vtemp43, __Vtemp41, __Vtemp42);
            tracep->chgBit(oldp+198,((1U & __Vtemp43[2U])));
            tracep->chgQData(oldp+199,(vlSelf->top__DOT__data_ram__DOT__ram[0]),64);
            tracep->chgQData(oldp+201,(vlSelf->top__DOT__data_ram__DOT__ram[1]),64);
        }
        tracep->chgBit(oldp+203,(vlSelf->clk));
        tracep->chgBit(oldp+204,(vlSelf->rst));
        tracep->chgQData(oldp+205,(vlSelf->data_rd),64);
    }
}

void Vsing_top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vsing_top___024root* const __restrict vlSelf = static_cast<Vsing_top___024root*>(voidSelf);
    Vsing_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
