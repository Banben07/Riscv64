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
    VL_OUT8(success,0,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ top__DOT__data_r_valid;
        CData/*0:0*/ top__DOT__data_w_valid;
        CData/*0:0*/ top__DOT__inst_r_valid;
        CData/*7:0*/ top__DOT__data_w_mask;
        CData/*0:0*/ top__DOT__arvalid;
        CData/*0:0*/ top__DOT__rready;
        CData/*1:0*/ top__DOT__rresp;
        CData/*1:0*/ top__DOT__bresp;
        CData/*3:0*/ top__DOT__awcache;
        CData/*3:0*/ top__DOT__rid;
        CData/*3:0*/ top__DOT__bid;
        CData/*0:0*/ top__DOT__rlast;
        CData/*0:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__stall_l;
        CData/*0:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__stall_mem;
        CData/*0:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_w_check;
        CData/*0:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_data_ren;
        CData/*0:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_data_ren;
        CData/*0:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__ebreak_out;
        CData/*0:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_reg_wen;
        CData/*0:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_data_wen;
        CData/*0:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_data_wen;
        CData/*0:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_reg_wen;
        CData/*0:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_reg_wen;
        CData/*1:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_load_sel;
        CData/*1:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_load_sel;
        CData/*1:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_src1_sel;
        CData/*1:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_src2_sel;
        CData/*1:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_load_sel;
        CData/*2:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__stall;
        CData/*2:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_s_bhwd;
        CData/*2:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_s_bhwd;
        CData/*2:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_out;
        CData/*2:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__src1_sel_plus;
        CData/*2:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__src2_sel_plus;
        CData/*2:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_pc_sel;
        CData/*2:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_pc_sel;
        CData/*2:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_pc_sel;
        CData/*3:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__pc_add_rs1_sel;
        CData/*3:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__b_check_rs2_sel;
        CData/*4:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__rs1;
        CData/*4:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_rs1;
        CData/*4:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_rs2;
        CData/*4:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_rd;
        CData/*4:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_rd;
        CData/*4:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_rd;
        CData/*5:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__b_check;
        CData/*5:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_l_bhw;
        CData/*5:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_l_bhw;
        CData/*0:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__TYPE_I;
        CData/*0:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__TYPE_U;
        CData/*0:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_remw;
        CData/*0:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_mulw;
        CData/*0:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_divw;
        CData/*0:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lwu;
        CData/*0:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_jalr;
        CData/*0:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lb;
        CData/*0:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lh;
        CData/*0:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lw;
        CData/*0:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lbu;
        CData/*0:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lhu;
        CData/*0:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__l_check;
        CData/*0:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_addiw;
        CData/*0:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_slliw;
        CData/*0:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_srliw;
    };
    struct {
        CData/*0:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_sraiw;
        CData/*0:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_addw;
        CData/*0:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_subw;
        CData/*0:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_sllw;
        CData/*0:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_srlw;
        CData/*0:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_sraw;
        CData/*0:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__beq_check;
        CData/*0:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__blt_check;
        CData/*0:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__data_cout;
        CData/*0:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__data_cin;
        CData/*0:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__mem__DOT__data_cout;
        CData/*0:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__ebreak_list__DOT__ebreak_1;
        CData/*0:0*/ top__DOT__u_ysyx_22040125_AXI__DOT__ar_check;
        CData/*0:0*/ top__DOT__u_ysyx_22040125_AXI__DOT__aw_check;
        CData/*0:0*/ top__DOT__u_ysyx_22040125_AXI__DOT__w_check;
        CData/*0:0*/ top__DOT__u_ysyx_22040125_AXI__DOT__b_check;
        CData/*2:0*/ top__DOT__u_ysyx_22040125_AXI__DOT__axi_read_state;
        CData/*2:0*/ top__DOT__u_ysyx_22040125_AXI__DOT__axi_write_state;
        CData/*2:0*/ top__DOT__u_ysyx_22040125_AXI__DOT__axi_r_back_state;
        CData/*2:0*/ top__DOT__u_ysyx_22040125_AXI__DOT__axi_w_back_state;
        CData/*0:0*/ top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_en;
        CData/*2:0*/ top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_size;
        CData/*2:0*/ top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_size;
        CData/*3:0*/ top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_rid;
        CData/*3:0*/ top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state;
        CData/*0:0*/ top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__data_cout;
        CData/*0:0*/ top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__op_lbu;
        CData/*0:0*/ top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__op_lhu;
        CData/*0:0*/ top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__op_lwu;
        SData/*14:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op;
        SData/*15:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__op;
        IData/*31:0*/ top__DOT__inst_r;
        IData/*31:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__inst;
        IData/*31:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_ram_addr;
        IData/*31:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__inst_id;
        IData/*31:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__inst_out;
        IData/*31:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__srl_w1_result;
        IData/*31:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__sra_w1_result;
        IData/*31:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__div_w1_result;
        IData/*31:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__rem_w1_result;
        IData/*31:0*/ top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_addr;
        IData/*31:0*/ top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr;
        QData/*63:0*/ top__DOT__data_r;
        QData/*63:0*/ top__DOT__wdata;
        QData/*63:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__imm;
        QData/*63:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__data_rd;
        QData/*63:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__b_src2;
        QData/*63:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__pc_src1;
        QData/*63:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__one_src1;
        QData/*63:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__one_src2;
        QData/*63:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__if_pc;
        QData/*63:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_src1_rs1;
        QData/*63:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_src1;
        QData/*63:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_src2;
        QData/*63:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_src2_rs2;
        QData/*63:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_pc;
        QData/*63:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_rdata;
        QData/*63:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_data_rd_in;
        QData/*63:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_src2_rs2;
        QData/*63:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_data_rd_in;
        QData/*63:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_cpu_dnpc_in1;
        QData/*63:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_cpu_dnpc_in2;
        QData/*63:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_imm;
        QData/*63:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__cpu_pc;
    };
    struct {
        QData/*63:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_pc;
        QData/*63:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_cpu_dnpc_in1;
        QData/*63:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_cpu_dnpc_in2;
        QData/*63:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_pc;
        QData/*63:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__cpu_ifpc;
        QData/*63:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__if_reg_pc;
        QData/*63:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__id_reg_pc;
        QData/*63:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__cpu_dnpc;
        QData/*63:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__rdata;
        QData/*63:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__src1_rs1;
        QData/*63:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__src2_rs2;
        QData/*63:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__src1;
        QData/*63:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__src2;
        QData/*63:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__data_rd_in;
        QData/*63:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__pc_src1;
        QData/*63:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__b_src2;
        QData/*63:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__rem_d_result;
        QData/*63:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__div_d_result;
        QData/*63:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__mul_d_result;
        QData/*63:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__sll_w1_result;
        QData/*63:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__add_sub_result;
        QData/*63:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__srl_mid_result;
        QData/*63:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__data_b;
        QData/*63:0*/ top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__data_result;
        QData/*63:0*/ top__DOT__u_ysyx_22040125_AXI__DOT__test_data;
        QData/*63:0*/ top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__rom;
        QData/*63:0*/ top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__rdata_da;
        VlUnpacked<QData/*63:0*/, 32> top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com;
        VlUnpacked<IData/*31:0*/, 400001> top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__ram;
    };

    // LOCAL VARIABLES
    CData/*7:0*/ top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound1;
    CData/*7:0*/ top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound2;
    CData/*7:0*/ top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound3;
    CData/*7:0*/ top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound4;
    CData/*7:0*/ top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound5;
    CData/*7:0*/ top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound6;
    CData/*7:0*/ top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound7;
    CData/*7:0*/ top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound8;
    CData/*0:0*/ __Vclklast__TOP__clk;
    SData/*15:0*/ top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound9;
    SData/*15:0*/ top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound10;
    SData/*15:0*/ top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound11;
    SData/*15:0*/ top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound12;
    IData/*31:0*/ top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound13;
    IData/*31:0*/ top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound14;
    IData/*31:0*/ top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound15;
    IData/*31:0*/ top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT____Vlvbound16;
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
