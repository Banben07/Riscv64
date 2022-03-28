// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vsing_top.h for the primary calling header

#ifndef VERILATED_VSING_TOP___024ROOT_H_
#define VERILATED_VSING_TOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vsing_top__Syms;
class Vsing_top_VerilatedVcd;


//----------

VL_MODULE(Vsing_top___024root) {
  public:

    // PORTS
    VL_IN8(clk,0,0);
    VL_IN8(rst,0,0);
    VL_OUT64(data_rd,63,0);

    // LOCAL SIGNALS
    CData/*0:0*/ top__DOT__mem_reg_reg_wen;
    CData/*0:0*/ top__DOT__mem_reg_data_wen;
    CData/*0:0*/ top__DOT__exe_reg_data_wen;
    CData/*0:0*/ top__DOT__exe_reg_reg_wen;
    CData/*0:0*/ top__DOT__wb_reg_reg_wen;
    CData/*1:0*/ top__DOT__wb_reg_load_sel;
    CData/*1:0*/ top__DOT__mem_reg_load_sel;
    CData/*1:0*/ top__DOT__exe_reg_src1_sel;
    CData/*1:0*/ top__DOT__exe_reg_src2_sel;
    CData/*1:0*/ top__DOT__exe_reg_load_sel;
    CData/*2:0*/ top__DOT__wb_reg_pc_sel;
    CData/*2:0*/ top__DOT__mem_reg_pc_sel;
    CData/*2:0*/ top__DOT__exe_reg_pc_sel;
    CData/*4:0*/ top__DOT__rs1;
    CData/*4:0*/ top__DOT__mem_reg_rd;
    CData/*4:0*/ top__DOT__exe_reg_rd;
    CData/*4:0*/ top__DOT__exe_reg_rs1;
    CData/*4:0*/ top__DOT__exe_reg_rs2;
    CData/*4:0*/ top__DOT__wb_reg_rd;
    CData/*0:0*/ top__DOT__idu__DOT__TYPE_I;
    CData/*0:0*/ top__DOT__idu__DOT__TYPE_U;
    CData/*0:0*/ top__DOT__alu__DOT__data_cin;
    SData/*11:0*/ top__DOT__op;
    SData/*11:0*/ top__DOT__exe_reg_op;
    IData/*31:0*/ top__DOT__inst;
    IData/*31:0*/ top__DOT__mem_reg_ram_addr;
    IData/*31:0*/ top__DOT__inst_id;
    QData/*63:0*/ top__DOT__exe_reg_src1_rs1;
    QData/*63:0*/ top__DOT__exe_reg_src1;
    QData/*63:0*/ top__DOT__exe_reg_src2;
    QData/*63:0*/ top__DOT__exe_reg_src2_rs2;
    QData/*63:0*/ top__DOT__mem_reg_pc;
    QData/*63:0*/ top__DOT__wb_reg_rdata;
    QData/*63:0*/ top__DOT__wb_reg_data_rd_in;
    QData/*63:0*/ top__DOT__mem_reg_src2_rs2;
    QData/*63:0*/ top__DOT__mem_reg_data_rd_in;
    QData/*63:0*/ top__DOT__mem_reg_cpu_dnpc_in1;
    QData/*63:0*/ top__DOT__mem_reg_cpu_dnpc_in2;
    QData/*63:0*/ top__DOT__exe_reg_imm;
    QData/*63:0*/ top__DOT__cpu_pc;
    QData/*63:0*/ top__DOT__wb_reg_pc;
    QData/*63:0*/ top__DOT__wb_reg_cpu_dnpc_in1;
    QData/*63:0*/ top__DOT__wb_reg_cpu_dnpc_in2;
    QData/*63:0*/ top__DOT__exe_reg_pc;
    QData/*63:0*/ top__DOT__cpu_ifpc;
    QData/*63:0*/ top__DOT__if_reg_pc;
    QData/*63:0*/ top__DOT__id_reg_pc;
    QData/*63:0*/ top__DOT__cpu_dnpc;
    QData/*63:0*/ top__DOT__rdata;
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
    Vsing_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vsing_top___024root);  ///< Copying not allowed
  public:
    Vsing_top___024root(const char* name);
    ~Vsing_top___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vsing_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
