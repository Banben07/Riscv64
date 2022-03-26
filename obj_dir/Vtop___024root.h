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
    CData/*2:0*/ top__DOT__pc_sel;
    CData/*4:0*/ top__DOT__rs1;
    CData/*0:0*/ top__DOT__idu__DOT__TYPE_I;
    CData/*0:0*/ top__DOT__idu__DOT__TYPE_U;
    CData/*0:0*/ top__DOT__alu__DOT__data_cin;
    SData/*11:0*/ top__DOT__op;
    IData/*31:0*/ top__DOT__inst;
    QData/*63:0*/ top__DOT__cpu_pc;
    QData/*63:0*/ top__DOT__cpu_dnpc;
    QData/*63:0*/ top__DOT__src2_rs2;
    QData/*63:0*/ top__DOT__src1;
    QData/*63:0*/ top__DOT__src2;
    QData/*63:0*/ top__DOT__data_rd_in;
    QData/*63:0*/ top__DOT__alu__DOT__data_b;
    QData/*63:0*/ top__DOT__alu__DOT__data_result;
    VlUnpacked<IData/*31:0*/, 65536> top__DOT__inst_ram__DOT__rom;
    VlUnpacked<QData/*63:0*/, 32> top__DOT__common_reg__DOT__reg_com;
    VlUnpacked<QData/*63:0*/, 2> top__DOT__data_ram__DOT__ram;

    // LOCAL VARIABLES
    CData/*0:0*/ __Vclklast__TOP__clk;
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
