// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VYSYX_22040125_B_CHECK__Syms.h"


void VYSYX_22040125_B_CHECK___024root__traceChgSub0(VYSYX_22040125_B_CHECK___024root* vlSelf, VerilatedVcd* tracep);

void VYSYX_22040125_B_CHECK___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    VYSYX_22040125_B_CHECK___024root* const __restrict vlSelf = static_cast<VYSYX_22040125_B_CHECK___024root*>(voidSelf);
    VYSYX_22040125_B_CHECK__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        VYSYX_22040125_B_CHECK___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void VYSYX_22040125_B_CHECK___024root__traceChgSub0(VYSYX_22040125_B_CHECK___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VYSYX_22040125_B_CHECK__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            tracep->chgBit(oldp+1,(((IData)(vlSelf->top__DOT__stall_id)
                                     ? 0U : ((0x23U 
                                              == (0x7fU 
                                                  & vlSelf->top__DOT__inst_id))
                                              ? 1U : 0U))));
            tracep->chgBit(oldp+2,(((IData)(vlSelf->top__DOT__stall_id)
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
            tracep->chgBit(oldp+3,(vlSelf->top__DOT__stall_id));
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
            tracep->chgCData(oldp+25,(vlSelf->top__DOT__pc_sel_out),3);
            tracep->chgCData(oldp+26,(vlSelf->top__DOT__src1_sel_plus),3);
            tracep->chgCData(oldp+27,(vlSelf->top__DOT__src2_sel_plus),3);
            tracep->chgCData(oldp+28,(vlSelf->top__DOT__wb_reg_pc_sel),3);
            tracep->chgCData(oldp+29,(vlSelf->top__DOT__mem_reg_pc_sel),3);
            tracep->chgCData(oldp+30,(vlSelf->top__DOT__pc_add_rs1_sel),4);
            tracep->chgCData(oldp+31,(vlSelf->top__DOT__rs1),5);
            tracep->chgCData(oldp+32,((0x1fU & (vlSelf->top__DOT__inst_id 
                                                >> 0x14U))),5);
            tracep->chgCData(oldp+33,(vlSelf->top__DOT__exe_reg_rs1),5);
            tracep->chgCData(oldp+34,(vlSelf->top__DOT__exe_reg_rs2),5);
            tracep->chgCData(oldp+35,((0x1fU & (vlSelf->top__DOT__inst_id 
                                                >> 7U))),5);
            tracep->chgCData(oldp+36,(vlSelf->top__DOT__mem_reg_rd),5);
            tracep->chgCData(oldp+37,(vlSelf->top__DOT__exe_reg_rd),5);
            tracep->chgCData(oldp+38,(vlSelf->top__DOT__wb_reg_rd),5);
            tracep->chgCData(oldp+39,(vlSelf->top__DOT__b_check),6);
            tracep->chgSData(oldp+40,(vlSelf->top__DOT__op),12);
            tracep->chgSData(oldp+41,(vlSelf->top__DOT__op_out),12);
            tracep->chgSData(oldp+42,(vlSelf->top__DOT__exe_reg_op),12);
            tracep->chgSData(oldp+43,((0xffffU & (IData)(
                                                         ((vlSelf->top__DOT__cpu_pc 
                                                           - 0x80000000ULL) 
                                                          >> 2U)))),16);
            tracep->chgIData(oldp+44,(vlSelf->top__DOT__inst),32);
            tracep->chgIData(oldp+45,((IData)(vlSelf->top__DOT__alu__DOT__add_sub_result)),32);
            tracep->chgIData(oldp+46,(vlSelf->top__DOT__mem_reg_ram_addr),32);
            tracep->chgIData(oldp+47,(vlSelf->top__DOT__inst_id),32);
            tracep->chgIData(oldp+48,(vlSelf->top__DOT__inst_out),32);
            tracep->chgQData(oldp+49,(vlSelf->top__DOT__imm),64);
            tracep->chgQData(oldp+51,(((1U == (IData)(vlSelf->top__DOT__pc_add_rs1_sel))
                                        ? vlSelf->top__DOT__src1_rs1
                                        : ((2U == (IData)(vlSelf->top__DOT__pc_add_rs1_sel))
                                            ? vlSelf->top__DOT__data_rd_in
                                            : ((4U 
                                                == (IData)(vlSelf->top__DOT__pc_add_rs1_sel))
                                                ? vlSelf->top__DOT__mem_reg_data_rd_in
                                                : vlSelf->top__DOT__wb_reg_data_rd_in)))),64);
            tracep->chgQData(oldp+53,(vlSelf->top__DOT__common_reg__DOT__reg_com
                                      [0xaU]),64);
            tracep->chgQData(oldp+55,(((1U == (IData)(vlSelf->top__DOT__exe_reg_src1_sel))
                                        ? vlSelf->top__DOT__exe_reg_pc
                                        : vlSelf->top__DOT__exe_reg_src1_rs1)),64);
            tracep->chgQData(oldp+57,(vlSelf->top__DOT__one_src2),64);
            tracep->chgQData(oldp+59,(vlSelf->top__DOT__if_pc),64);
            tracep->chgQData(oldp+61,(vlSelf->top__DOT__exe_reg_src1_rs1),64);
            tracep->chgQData(oldp+63,(vlSelf->top__DOT__exe_reg_src2_rs2),64);
            tracep->chgQData(oldp+65,(vlSelf->top__DOT__mem_reg_pc),64);
            tracep->chgQData(oldp+67,(vlSelf->top__DOT__wb_reg_rdata),64);
            tracep->chgQData(oldp+69,(vlSelf->top__DOT__wb_reg_data_rd_in),64);
            tracep->chgQData(oldp+71,(vlSelf->top__DOT__mem_reg_src2_rs2),64);
            tracep->chgQData(oldp+73,(vlSelf->top__DOT__mem_reg_data_rd_in),64);
            tracep->chgQData(oldp+75,(vlSelf->top__DOT__exe_reg_imm),64);
            tracep->chgQData(oldp+77,(vlSelf->top__DOT__cpu_pc),64);
            tracep->chgQData(oldp+79,(vlSelf->top__DOT__wb_reg_pc),64);
            tracep->chgQData(oldp+81,(vlSelf->top__DOT__exe_reg_pc),64);
            tracep->chgQData(oldp+83,(vlSelf->top__DOT__id_reg_pc),64);
            tracep->chgQData(oldp+85,(((1U == (IData)(vlSelf->top__DOT__pc_sel_out))
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
            tracep->chgQData(oldp+87,((4ULL + vlSelf->top__DOT__cpu_pc)),64);
            tracep->chgQData(oldp+89,(vlSelf->top__DOT__rdata),64);
            tracep->chgQData(oldp+91,(vlSelf->top__DOT__src1_rs1),64);
            tracep->chgQData(oldp+93,(vlSelf->top__DOT__src2_rs2),64);
            tracep->chgQData(oldp+95,((vlSelf->top__DOT__id_reg_pc 
                                       + vlSelf->top__DOT__imm)),64);
            tracep->chgQData(oldp+97,((0xfffffffffffffffeULL 
                                       & (((1U == (IData)(vlSelf->top__DOT__pc_add_rs1_sel))
                                            ? vlSelf->top__DOT__src1_rs1
                                            : ((2U 
                                                == (IData)(vlSelf->top__DOT__pc_add_rs1_sel))
                                                ? vlSelf->top__DOT__data_rd_in
                                                : (
                                                   (4U 
                                                    == (IData)(vlSelf->top__DOT__pc_add_rs1_sel))
                                                    ? vlSelf->top__DOT__mem_reg_data_rd_in
                                                    : vlSelf->top__DOT__wb_reg_data_rd_in))) 
                                          + vlSelf->top__DOT__imm))),64);
            tracep->chgQData(oldp+99,(vlSelf->top__DOT__src1),64);
            tracep->chgQData(oldp+101,(vlSelf->top__DOT__src2),64);
            tracep->chgQData(oldp+103,(vlSelf->top__DOT__data_rd_in),64);
            tracep->chgBit(oldp+105,(vlSelf->top__DOT__idu__DOT__TYPE_I));
            tracep->chgBit(oldp+106,(vlSelf->top__DOT__idu__DOT__TYPE_U));
            tracep->chgBit(oldp+107,((0x23U == (0x7fU 
                                                & vlSelf->top__DOT__inst_id))));
            tracep->chgBit(oldp+108,((0x6fU == (0x7fU 
                                                & vlSelf->top__DOT__inst_id))));
            tracep->chgBit(oldp+109,((0x63U == (0x7fU 
                                                & vlSelf->top__DOT__inst_id))));
            tracep->chgBit(oldp+110,((0x33U == (0x7fU 
                                                & vlSelf->top__DOT__inst_id))));
            tracep->chgBit(oldp+111,((0x37U == (0x7fU 
                                                & vlSelf->top__DOT__inst_id))));
            tracep->chgBit(oldp+112,((0x17U == (0x7fU 
                                                & vlSelf->top__DOT__inst_id))));
            tracep->chgBit(oldp+113,((IData)((0x63U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__inst_id)))));
            tracep->chgBit(oldp+114,((IData)((0x1063U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__inst_id)))));
            tracep->chgBit(oldp+115,((IData)((0x4063U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__inst_id)))));
            tracep->chgBit(oldp+116,((IData)((0x5063U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__inst_id)))));
            tracep->chgBit(oldp+117,((IData)((0x6063U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__inst_id)))));
            tracep->chgBit(oldp+118,((IData)((0x7063U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__inst_id)))));
            tracep->chgBit(oldp+119,(vlSelf->top__DOT__idu__DOT__inst_jalr));
            tracep->chgBit(oldp+120,(vlSelf->top__DOT__idu__DOT__inst_lb));
            tracep->chgBit(oldp+121,(vlSelf->top__DOT__idu__DOT__inst_lh));
            tracep->chgBit(oldp+122,(vlSelf->top__DOT__idu__DOT__inst_lw));
            tracep->chgBit(oldp+123,(vlSelf->top__DOT__idu__DOT__inst_ld));
            tracep->chgBit(oldp+124,(vlSelf->top__DOT__idu__DOT__inst_lbu));
            tracep->chgBit(oldp+125,(vlSelf->top__DOT__idu__DOT__inst_lhu));
            tracep->chgBit(oldp+126,((IData)((0x13U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__inst_id)))));
            tracep->chgBit(oldp+127,((IData)((0x2013U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__inst_id)))));
            tracep->chgBit(oldp+128,((IData)((0x3013U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__inst_id)))));
            tracep->chgBit(oldp+129,((IData)((0x4013U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__inst_id)))));
            tracep->chgBit(oldp+130,((IData)((0x6013U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__inst_id)))));
            tracep->chgBit(oldp+131,((IData)((0x7013U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__inst_id)))));
            tracep->chgBit(oldp+132,(((IData)((0x1013U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__inst_id))) 
                                      & (0U == (vlSelf->top__DOT__inst_id 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+133,(((IData)((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__inst_id))) 
                                      & (0U == (vlSelf->top__DOT__inst_id 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+134,(((IData)((0x5013U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__inst_id))) 
                                      & (0x20U == (vlSelf->top__DOT__inst_id 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+135,((IData)((0x23U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__inst_id)))));
            tracep->chgBit(oldp+136,((IData)((0x1023U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__inst_id)))));
            tracep->chgBit(oldp+137,((IData)((0x2023U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__inst_id)))));
            tracep->chgBit(oldp+138,((IData)((0x3023U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__inst_id)))));
            tracep->chgBit(oldp+139,(((IData)((0x33U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__inst_id))) 
                                      & (0U == (vlSelf->top__DOT__inst_id 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+140,(((IData)((0x33U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__inst_id))) 
                                      & (0x20U == (vlSelf->top__DOT__inst_id 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+141,(((IData)((0x1033U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__inst_id))) 
                                      & (0U == (vlSelf->top__DOT__inst_id 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+142,(((IData)((0x2033U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__inst_id))) 
                                      & (0U == (vlSelf->top__DOT__inst_id 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+143,(((IData)((0x3033U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__inst_id))) 
                                      & (0U == (vlSelf->top__DOT__inst_id 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+144,(((IData)((0x4033U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__inst_id))) 
                                      & (0U == (vlSelf->top__DOT__inst_id 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+145,(((IData)((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__inst_id))) 
                                      & (0U == (vlSelf->top__DOT__inst_id 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+146,(((IData)((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__inst_id))) 
                                      & (0x20U == (vlSelf->top__DOT__inst_id 
                                                   >> 0x19U)))));
            tracep->chgBit(oldp+147,(((IData)((0x6033U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__inst_id))) 
                                      & (0U == (vlSelf->top__DOT__inst_id 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+148,(((IData)((0x7033U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__inst_id))) 
                                      & (0U == (vlSelf->top__DOT__inst_id 
                                                >> 0x19U)))));
            tracep->chgQData(oldp+149,((((- (QData)((IData)(
                                                            (vlSelf->top__DOT__inst_id 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    (vlSelf->top__DOT__inst_id 
                                                                     >> 0x14U))))),64);
            tracep->chgQData(oldp+151,((((QData)((IData)(
                                                         (- (IData)(
                                                                    (vlSelf->top__DOT__inst_id 
                                                                     >> 0x1fU))))) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          (0xfffff000U 
                                                           & vlSelf->top__DOT__inst_id))))),64);
            tracep->chgQData(oldp+153,((((- (QData)((IData)(
                                                            (vlSelf->top__DOT__inst_id 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    ((0xfe0U 
                                                                      & (vlSelf->top__DOT__inst_id 
                                                                         >> 0x14U)) 
                                                                     | (0x1fU 
                                                                        & (vlSelf->top__DOT__inst_id 
                                                                           >> 7U))))))),64);
            tracep->chgQData(oldp+155,((((- (QData)((IData)(
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
            tracep->chgQData(oldp+157,((((- (QData)((IData)(
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
            tracep->chgCData(oldp+159,((0x7fU & vlSelf->top__DOT__inst_id)),7);
            tracep->chgCData(oldp+160,((vlSelf->top__DOT__inst_id 
                                        >> 0x19U)),7);
            tracep->chgCData(oldp+161,((7U & (vlSelf->top__DOT__inst_id 
                                              >> 0xcU))),3);
            tracep->chgBit(oldp+162,((1U & ((((((IData)(vlSelf->top__DOT__b_check) 
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
            tracep->chgBit(oldp+163,(vlSelf->top__DOT__b_check_out__DOT__blt_check));
            tracep->chgBit(oldp+164,((1U & (~ (IData)(vlSelf->top__DOT__b_check_out__DOT__blt_check)))));
            tracep->chgBit(oldp+165,((1U & (~ (IData)(vlSelf->top__DOT__b_check_out__DOT__data_cout)))));
            tracep->chgBit(oldp+166,(vlSelf->top__DOT__b_check_out__DOT__data_cout));
            tracep->chgQData(oldp+167,((~ vlSelf->top__DOT__src2_rs2)),64);
            tracep->chgQData(oldp+169,((1ULL + (vlSelf->top__DOT__src1_rs1 
                                                + (~ vlSelf->top__DOT__src2_rs2)))),64);
            tracep->chgQData(oldp+171,(vlSelf->top__DOT__common_reg__DOT__reg_com[0]),64);
            tracep->chgQData(oldp+173,(vlSelf->top__DOT__common_reg__DOT__reg_com[1]),64);
            tracep->chgQData(oldp+175,(vlSelf->top__DOT__common_reg__DOT__reg_com[2]),64);
            tracep->chgQData(oldp+177,(vlSelf->top__DOT__common_reg__DOT__reg_com[3]),64);
            tracep->chgQData(oldp+179,(vlSelf->top__DOT__common_reg__DOT__reg_com[4]),64);
            tracep->chgQData(oldp+181,(vlSelf->top__DOT__common_reg__DOT__reg_com[5]),64);
            tracep->chgQData(oldp+183,(vlSelf->top__DOT__common_reg__DOT__reg_com[6]),64);
            tracep->chgQData(oldp+185,(vlSelf->top__DOT__common_reg__DOT__reg_com[7]),64);
            tracep->chgQData(oldp+187,(vlSelf->top__DOT__common_reg__DOT__reg_com[8]),64);
            tracep->chgQData(oldp+189,(vlSelf->top__DOT__common_reg__DOT__reg_com[9]),64);
            tracep->chgQData(oldp+191,(vlSelf->top__DOT__common_reg__DOT__reg_com[10]),64);
            tracep->chgQData(oldp+193,(vlSelf->top__DOT__common_reg__DOT__reg_com[11]),64);
            tracep->chgQData(oldp+195,(vlSelf->top__DOT__common_reg__DOT__reg_com[12]),64);
            tracep->chgQData(oldp+197,(vlSelf->top__DOT__common_reg__DOT__reg_com[13]),64);
            tracep->chgQData(oldp+199,(vlSelf->top__DOT__common_reg__DOT__reg_com[14]),64);
            tracep->chgQData(oldp+201,(vlSelf->top__DOT__common_reg__DOT__reg_com[15]),64);
            tracep->chgQData(oldp+203,(vlSelf->top__DOT__common_reg__DOT__reg_com[16]),64);
            tracep->chgQData(oldp+205,(vlSelf->top__DOT__common_reg__DOT__reg_com[17]),64);
            tracep->chgQData(oldp+207,(vlSelf->top__DOT__common_reg__DOT__reg_com[18]),64);
            tracep->chgQData(oldp+209,(vlSelf->top__DOT__common_reg__DOT__reg_com[19]),64);
            tracep->chgQData(oldp+211,(vlSelf->top__DOT__common_reg__DOT__reg_com[20]),64);
            tracep->chgQData(oldp+213,(vlSelf->top__DOT__common_reg__DOT__reg_com[21]),64);
            tracep->chgQData(oldp+215,(vlSelf->top__DOT__common_reg__DOT__reg_com[22]),64);
            tracep->chgQData(oldp+217,(vlSelf->top__DOT__common_reg__DOT__reg_com[23]),64);
            tracep->chgQData(oldp+219,(vlSelf->top__DOT__common_reg__DOT__reg_com[24]),64);
            tracep->chgQData(oldp+221,(vlSelf->top__DOT__common_reg__DOT__reg_com[25]),64);
            tracep->chgQData(oldp+223,(vlSelf->top__DOT__common_reg__DOT__reg_com[26]),64);
            tracep->chgQData(oldp+225,(vlSelf->top__DOT__common_reg__DOT__reg_com[27]),64);
            tracep->chgQData(oldp+227,(vlSelf->top__DOT__common_reg__DOT__reg_com[28]),64);
            tracep->chgQData(oldp+229,(vlSelf->top__DOT__common_reg__DOT__reg_com[29]),64);
            tracep->chgQData(oldp+231,(vlSelf->top__DOT__common_reg__DOT__reg_com[30]),64);
            tracep->chgQData(oldp+233,(vlSelf->top__DOT__common_reg__DOT__reg_com[31]),64);
            tracep->chgBit(oldp+235,((1U & (IData)(vlSelf->top__DOT__exe_reg_op))));
            tracep->chgBit(oldp+236,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                            >> 1U))));
            tracep->chgBit(oldp+237,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                            >> 2U))));
            tracep->chgBit(oldp+238,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                            >> 3U))));
            tracep->chgBit(oldp+239,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                            >> 4U))));
            tracep->chgBit(oldp+240,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                            >> 5U))));
            tracep->chgBit(oldp+241,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                            >> 6U))));
            tracep->chgBit(oldp+242,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                            >> 7U))));
            tracep->chgBit(oldp+243,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                            >> 8U))));
            tracep->chgBit(oldp+244,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                            >> 9U))));
            tracep->chgBit(oldp+245,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+246,((1U & ((IData)(vlSelf->top__DOT__exe_reg_op) 
                                            >> 0xbU))));
            tracep->chgQData(oldp+247,(vlSelf->top__DOT__alu__DOT__add_sub_result),64);
            tracep->chgQData(oldp+249,((QData)((IData)(
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
            tracep->chgQData(oldp+251,((vlSelf->top__DOT__src1 
                                        + vlSelf->top__DOT__exe_reg_imm)),64);
            VL_EXTEND_WQ(65,64, __Vtemp47, vlSelf->top__DOT__src1);
            VL_EXTEND_WQ(65,64, __Vtemp48, vlSelf->top__DOT__alu__DOT__data_b);
            VL_ADD_W(3, __Vtemp49, __Vtemp47, __Vtemp48);
            VL_EXTEND_WI(65,1, __Vtemp50, (IData)(vlSelf->top__DOT__alu__DOT__data_cin));
            VL_ADD_W(3, __Vtemp51, __Vtemp49, __Vtemp50);
            tracep->chgQData(oldp+253,((QData)((IData)(
                                                       (1U 
                                                        & (~ 
                                                           (1U 
                                                            & __Vtemp51[2U])))))),64);
            tracep->chgQData(oldp+255,((vlSelf->top__DOT__src1 
                                        & vlSelf->top__DOT__src2)),64);
            tracep->chgQData(oldp+257,((vlSelf->top__DOT__src1 
                                        | vlSelf->top__DOT__src2)),64);
            tracep->chgQData(oldp+259,((vlSelf->top__DOT__src1 
                                        ^ vlSelf->top__DOT__src2)),64);
            tracep->chgQData(oldp+261,((vlSelf->top__DOT__src1 
                                        << (0x3fU & (IData)(vlSelf->top__DOT__src2)))),64);
            tracep->chgQData(oldp+263,((vlSelf->top__DOT__src1 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__src2)))),64);
            tracep->chgQData(oldp+265,((vlSelf->top__DOT__src1 
                                        >> (0x3fU & (IData)(vlSelf->top__DOT__src2)))),64);
            tracep->chgQData(oldp+267,((4ULL + vlSelf->top__DOT__src1)),64);
            tracep->chgQData(oldp+269,(vlSelf->top__DOT__alu__DOT__data_b),64);
            tracep->chgQData(oldp+271,(vlSelf->top__DOT__alu__DOT__data_result),64);
            tracep->chgBit(oldp+273,(vlSelf->top__DOT__alu__DOT__data_cin));
            VL_EXTEND_WQ(65,64, __Vtemp54, vlSelf->top__DOT__src1);
            VL_EXTEND_WQ(65,64, __Vtemp55, vlSelf->top__DOT__alu__DOT__data_b);
            VL_ADD_W(3, __Vtemp56, __Vtemp54, __Vtemp55);
            VL_EXTEND_WI(65,1, __Vtemp57, (IData)(vlSelf->top__DOT__alu__DOT__data_cin));
            VL_ADD_W(3, __Vtemp58, __Vtemp56, __Vtemp57);
            tracep->chgBit(oldp+274,((1U & __Vtemp58[2U])));
            tracep->chgQData(oldp+275,(vlSelf->top__DOT__data_ram__DOT__ram[0]),64);
            tracep->chgQData(oldp+277,(vlSelf->top__DOT__data_ram__DOT__ram[1]),64);
            tracep->chgSData(oldp+279,(vlSelf->top__DOT__ebreak_list__DOT__op_1),12);
            tracep->chgBit(oldp+280,(vlSelf->top__DOT__ebreak_list__DOT__ebreak_1));
            tracep->chgIData(oldp+281,(vlSelf->top__DOT__ebreak_list__DOT__inst_1),32);
        }
        tracep->chgBit(oldp+282,(vlSelf->clk));
        tracep->chgBit(oldp+283,(vlSelf->rst));
        tracep->chgQData(oldp+284,(vlSelf->data_rd),64);
    }
}

void VYSYX_22040125_B_CHECK___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VYSYX_22040125_B_CHECK___024root* const __restrict vlSelf = static_cast<VYSYX_22040125_B_CHECK___024root*>(voidSelf);
    VYSYX_22040125_B_CHECK__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    }
}
