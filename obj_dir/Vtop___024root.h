// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop.h for the primary calling header

#ifndef VERILATED_VTOP___024ROOT_H_
#define VERILATED_VTOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vtop__Syms;
class Vtop_VerilatedVcd;


//----------

VL_MODULE(Vtop___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT64(data_rd,63,0);

    // LOCAL SIGNALS
    CData/*1:0*/ top__DOT__src2_sel;
    CData/*1:0*/ top__DOT__load_sel;
    CData/*0:0*/ top__DOT__data_ren;
    CData/*0:0*/ top__DOT__pc_sel_choice__DOT__i0__DOT__hit;
    CData/*0:0*/ top__DOT__idu__DOT__TYPE_I;
    CData/*0:0*/ top__DOT__idu__DOT__TYPE_U;
    CData/*0:0*/ top__DOT__src1_sel_choice__DOT__i0__DOT__hit;
    CData/*0:0*/ top__DOT__src2_sel_choice__DOT__i0__DOT__hit;
    CData/*0:0*/ top__DOT__alu__DOT__data_cin;
    CData/*0:0*/ top__DOT__data_rd_choice__DOT__i0__DOT__hit;
    SData/*11:0*/ top__DOT__op;
    IData/*31:0*/ top__DOT__inst;
    IData/*31:0*/ top__DOT__check;
    QData/*63:0*/ top__DOT__cpu_pc;
    QData/*63:0*/ top__DOT__cpu_dnpc;
    QData/*63:0*/ top__DOT__src2_rs2;
    QData/*63:0*/ top__DOT__src1;
    QData/*63:0*/ top__DOT__src2;
    QData/*63:0*/ top__DOT__data_rd_in;
    QData/*63:0*/ top__DOT__pc_sel_choice__DOT__i0__DOT__lut_out;
    QData/*63:0*/ top__DOT__inf__DOT__count;
    QData/*63:0*/ top__DOT__src1_sel_choice__DOT__i0__DOT__lut_out;
    QData/*63:0*/ top__DOT__src2_sel_choice__DOT__i0__DOT__lut_out;
    QData/*63:0*/ top__DOT__alu__DOT__data_b;
    QData/*63:0*/ top__DOT__alu__DOT__data_result;
    QData/*63:0*/ top__DOT__data_rd_choice__DOT__i0__DOT__lut_out;
    VlUnpacked<VlWide<3>/*65:0*/, 2> top__DOT__pc_sel_choice__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*1:0*/, 2> top__DOT__pc_sel_choice__DOT__i0__DOT__key_list;
    VlUnpacked<QData/*63:0*/, 2> top__DOT__pc_sel_choice__DOT__i0__DOT__data_list;
    VlUnpacked<IData/*31:0*/, 256> top__DOT__inst_ram__DOT__rom;
    VlUnpacked<QData/*63:0*/, 32> top__DOT__common_reg__DOT__reg_com;
    VlUnpacked<QData/*63:0*/, 2> top__DOT__data_ram__DOT__ram;
    VlUnpacked<VlWide<3>/*65:0*/, 2> top__DOT__src1_sel_choice__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*1:0*/, 2> top__DOT__src1_sel_choice__DOT__i0__DOT__key_list;
    VlUnpacked<QData/*63:0*/, 2> top__DOT__src1_sel_choice__DOT__i0__DOT__data_list;
    VlUnpacked<VlWide<3>/*65:0*/, 2> top__DOT__src2_sel_choice__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*1:0*/, 2> top__DOT__src2_sel_choice__DOT__i0__DOT__key_list;
    VlUnpacked<QData/*63:0*/, 2> top__DOT__src2_sel_choice__DOT__i0__DOT__data_list;
    VlUnpacked<VlWide<3>/*65:0*/, 2> top__DOT__data_rd_choice__DOT__i0__DOT__pair_list;
    VlUnpacked<CData/*1:0*/, 2> top__DOT__data_rd_choice__DOT__i0__DOT__key_list;
    VlUnpacked<QData/*63:0*/, 2> top__DOT__data_rd_choice__DOT__i0__DOT__data_list;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
    VlWide<5>/*131:0*/ top__DOT____Vcellinp__pc_sel_choice____pinNumber3;
    VlWide<5>/*131:0*/ top__DOT____Vcellinp__src1_sel_choice____pinNumber3;
    VlWide<5>/*131:0*/ top__DOT____Vcellinp__src2_sel_choice____pinNumber3;
    VlWide<5>/*131:0*/ top__DOT____Vcellinp__data_rd_choice____pinNumber3;
    IData/*31:0*/ __Vfunc_top__DOT__ebreak_check__0__Vfuncout;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;

    // INTERNAL VARIABLES
    Vtop__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtop___024root);  ///< Copying not allowed
  public:
    Vtop___024root(const char* name);
    ~Vtop___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vtop__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
