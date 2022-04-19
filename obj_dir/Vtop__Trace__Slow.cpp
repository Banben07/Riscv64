// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceInitTop(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vtop___024root__traceInitSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+424,"clk", false,-1);
        tracep->declBit(c+425,"rst", false,-1);
        tracep->declBit(c+426,"success", false,-1);
        tracep->declBit(c+424,"top clk", false,-1);
        tracep->declBit(c+425,"top rst", false,-1);
        tracep->declBit(c+426,"top success", false,-1);
        tracep->declBit(c+1,"top inst_r_en", false,-1);
        tracep->declBit(c+2,"top data_r_en", false,-1);
        tracep->declBit(c+3,"top data_w_en", false,-1);
        tracep->declBit(c+4,"top data_r_valid", false,-1);
        tracep->declBit(c+5,"top data_w_valid", false,-1);
        tracep->declBit(c+6,"top inst_r_valid", false,-1);
        tracep->declBus(c+7,"top cpu_arsize", false,-1, 2,0);
        tracep->declBus(c+8,"top cpu_awsize", false,-1, 2,0);
        tracep->declBus(c+9,"top data_w_mask", false,-1, 7,0);
        tracep->declBus(c+10,"top inst_addr", false,-1, 31,0);
        tracep->declBus(c+11,"top inst_r", false,-1, 31,0);
        tracep->declBus(c+12,"top data_r_addr", false,-1, 31,0);
        tracep->declBus(c+12,"top data_w_addr", false,-1, 31,0);
        tracep->declQuad(c+13,"top data_w", false,-1, 63,0);
        tracep->declQuad(c+15,"top data_r", false,-1, 63,0);
        tracep->declBus(c+17,"top arid", false,-1, 3,0);
        tracep->declBus(c+18,"top araddr", false,-1, 31,0);
        tracep->declBus(c+428,"top arlen", false,-1, 7,0);
        tracep->declBus(c+7,"top arsize", false,-1, 2,0);
        tracep->declBus(c+429,"top arburst", false,-1, 1,0);
        tracep->declBus(c+430,"top arlock", false,-1, 1,0);
        tracep->declBus(c+431,"top arcache", false,-1, 3,0);
        tracep->declBus(c+432,"top arprot", false,-1, 2,0);
        tracep->declBit(c+19,"top arvalid", false,-1);
        tracep->declBit(c+20,"top rready", false,-1);
        tracep->declBus(c+433,"top awid", false,-1, 3,0);
        tracep->declBus(c+21,"top awaddr", false,-1, 31,0);
        tracep->declBus(c+428,"top awlen", false,-1, 7,0);
        tracep->declBus(c+8,"top awsize", false,-1, 2,0);
        tracep->declBus(c+429,"top awburst", false,-1, 1,0);
        tracep->declBus(c+430,"top awlock", false,-1, 1,0);
        tracep->declBus(c+434,"top rresp", false,-1, 1,0);
        tracep->declBus(c+435,"top bresp", false,-1, 1,0);
        tracep->declBus(c+436,"top awcache", false,-1, 3,0);
        tracep->declBus(c+432,"top awprot", false,-1, 2,0);
        tracep->declBit(c+22,"top awvalid", false,-1);
        tracep->declBus(c+433,"top wid", false,-1, 3,0);
        tracep->declBus(c+23,"top rid", false,-1, 3,0);
        tracep->declBus(c+437,"top bid", false,-1, 3,0);
        tracep->declQuad(c+24,"top wdata", false,-1, 63,0);
        tracep->declQuad(c+26,"top rdata", false,-1, 63,0);
        tracep->declBus(c+28,"top wstrb", false,-1, 7,0);
        tracep->declBit(c+438,"top wlast", false,-1);
        tracep->declBit(c+439,"top rlast", false,-1);
        tracep->declBit(c+29,"top bvalid", false,-1);
        tracep->declBit(c+30,"top rvalid", false,-1);
        tracep->declBit(c+31,"top awready", false,-1);
        tracep->declBit(c+32,"top wready", false,-1);
        tracep->declBit(c+33,"top wvalid", false,-1);
        tracep->declBit(c+34,"top bready", false,-1);
        tracep->declBit(c+31,"top arready", false,-1);
        tracep->declBit(c+424,"top u_ysyx_22040125_CPU clk", false,-1);
        tracep->declBit(c+425,"top u_ysyx_22040125_CPU rst", false,-1);
        tracep->declBit(c+4,"top u_ysyx_22040125_CPU data_r_valid", false,-1);
        tracep->declBit(c+5,"top u_ysyx_22040125_CPU data_w_valid", false,-1);
        tracep->declBit(c+6,"top u_ysyx_22040125_CPU inst_r_valid", false,-1);
        tracep->declBus(c+11,"top u_ysyx_22040125_CPU inst_r", false,-1, 31,0);
        tracep->declQuad(c+15,"top u_ysyx_22040125_CPU data_r", false,-1, 63,0);
        tracep->declBit(c+1,"top u_ysyx_22040125_CPU inst_r_en", false,-1);
        tracep->declBit(c+2,"top u_ysyx_22040125_CPU data_r_en", false,-1);
        tracep->declBit(c+3,"top u_ysyx_22040125_CPU data_w_en", false,-1);
        tracep->declBus(c+7,"top u_ysyx_22040125_CPU cpu_arsize", false,-1, 2,0);
        tracep->declBus(c+8,"top u_ysyx_22040125_CPU cpu_awsize", false,-1, 2,0);
        tracep->declBus(c+9,"top u_ysyx_22040125_CPU data_w_mask", false,-1, 7,0);
        tracep->declBus(c+10,"top u_ysyx_22040125_CPU inst_addr", false,-1, 31,0);
        tracep->declBus(c+12,"top u_ysyx_22040125_CPU data_r_addr", false,-1, 31,0);
        tracep->declBus(c+12,"top u_ysyx_22040125_CPU data_w_addr", false,-1, 31,0);
        tracep->declQuad(c+13,"top u_ysyx_22040125_CPU data_w", false,-1, 63,0);
        tracep->declBit(c+426,"top u_ysyx_22040125_CPU success", false,-1);
        tracep->declBit(c+35,"top u_ysyx_22040125_CPU w_check", false,-1);
        tracep->declBit(c+36,"top u_ysyx_22040125_CPU stall_l", false,-1);
        tracep->declBit(c+37,"top u_ysyx_22040125_CPU stall_if", false,-1);
        tracep->declBit(c+38,"top u_ysyx_22040125_CPU stall_mem", false,-1);
        tracep->declBit(c+39,"top u_ysyx_22040125_CPU data_ren_out", false,-1);
        tracep->declBit(c+40,"top u_ysyx_22040125_CPU exe_reg_w_check", false,-1);
        tracep->declBit(c+41,"top u_ysyx_22040125_CPU data_wen", false,-1);
        tracep->declBit(c+42,"top u_ysyx_22040125_CPU data_wen_out", false,-1);
        tracep->declBit(c+43,"top u_ysyx_22040125_CPU reg_wen_out", false,-1);
        tracep->declBit(c+44,"top u_ysyx_22040125_CPU stall_id", false,-1);
        tracep->declBit(c+45,"top u_ysyx_22040125_CPU data_ren", false,-1);
        tracep->declBit(c+46,"top u_ysyx_22040125_CPU exe_reg_data_ren", false,-1);
        tracep->declBit(c+2,"top u_ysyx_22040125_CPU mem_reg_data_ren", false,-1);
        tracep->declBit(c+47,"top u_ysyx_22040125_CPU IF_Flush", false,-1);
        tracep->declBit(c+48,"top u_ysyx_22040125_CPU ebreak", false,-1);
        tracep->declBit(c+49,"top u_ysyx_22040125_CPU ebreak_out", false,-1);
        tracep->declBit(c+50,"top u_ysyx_22040125_CPU reg_wen", false,-1);
        tracep->declBit(c+51,"top u_ysyx_22040125_CPU mem_reg_reg_wen", false,-1);
        tracep->declBit(c+3,"top u_ysyx_22040125_CPU mem_reg_data_wen", false,-1);
        tracep->declBit(c+52,"top u_ysyx_22040125_CPU exe_reg_data_wen", false,-1);
        tracep->declBit(c+53,"top u_ysyx_22040125_CPU exe_reg_reg_wen", false,-1);
        tracep->declBit(c+54,"top u_ysyx_22040125_CPU wb_reg_reg_wen", false,-1);
        tracep->declBus(c+55,"top u_ysyx_22040125_CPU src1_sel", false,-1, 1,0);
        tracep->declBus(c+56,"top u_ysyx_22040125_CPU wb_reg_load_sel", false,-1, 1,0);
        tracep->declBus(c+57,"top u_ysyx_22040125_CPU mem_reg_load_sel", false,-1, 1,0);
        tracep->declBus(c+58,"top u_ysyx_22040125_CPU exe_reg_src1_sel", false,-1, 1,0);
        tracep->declBus(c+59,"top u_ysyx_22040125_CPU src2_sel", false,-1, 1,0);
        tracep->declBus(c+60,"top u_ysyx_22040125_CPU exe_reg_src2_sel", false,-1, 1,0);
        tracep->declBus(c+61,"top u_ysyx_22040125_CPU load_sel", false,-1, 1,0);
        tracep->declBus(c+62,"top u_ysyx_22040125_CPU exe_reg_load_sel", false,-1, 1,0);
        tracep->declBus(c+63,"top u_ysyx_22040125_CPU pc_sel", false,-1, 2,0);
        tracep->declBus(c+64,"top u_ysyx_22040125_CPU stall", false,-1, 2,0);
        tracep->declBus(c+8,"top u_ysyx_22040125_CPU mem_reg_s_bhwd", false,-1, 2,0);
        tracep->declBus(c+65,"top u_ysyx_22040125_CPU s_bhwd", false,-1, 2,0);
        tracep->declBus(c+66,"top u_ysyx_22040125_CPU exe_reg_s_bhwd", false,-1, 2,0);
        tracep->declBus(c+67,"top u_ysyx_22040125_CPU pc_sel_out", false,-1, 2,0);
        tracep->declBus(c+68,"top u_ysyx_22040125_CPU src1_sel_plus", false,-1, 2,0);
        tracep->declBus(c+69,"top u_ysyx_22040125_CPU src2_sel_plus", false,-1, 2,0);
        tracep->declBus(c+70,"top u_ysyx_22040125_CPU wb_reg_pc_sel", false,-1, 2,0);
        tracep->declBus(c+71,"top u_ysyx_22040125_CPU mem_reg_pc_sel", false,-1, 2,0);
        tracep->declBus(c+440,"top u_ysyx_22040125_CPU exe_reg_pc_sel", false,-1, 2,0);
        tracep->declBus(c+72,"top u_ysyx_22040125_CPU pc_add_rs1_sel", false,-1, 3,0);
        tracep->declBus(c+73,"top u_ysyx_22040125_CPU b_check_rs2_sel", false,-1, 3,0);
        tracep->declBus(c+74,"top u_ysyx_22040125_CPU rs1", false,-1, 4,0);
        tracep->declBus(c+75,"top u_ysyx_22040125_CPU rs2", false,-1, 4,0);
        tracep->declBus(c+76,"top u_ysyx_22040125_CPU exe_reg_rs1", false,-1, 4,0);
        tracep->declBus(c+77,"top u_ysyx_22040125_CPU exe_reg_rs2", false,-1, 4,0);
        tracep->declBus(c+78,"top u_ysyx_22040125_CPU rd", false,-1, 4,0);
        tracep->declBus(c+79,"top u_ysyx_22040125_CPU mem_reg_rd", false,-1, 4,0);
        tracep->declBus(c+80,"top u_ysyx_22040125_CPU exe_reg_rd", false,-1, 4,0);
        tracep->declBus(c+81,"top u_ysyx_22040125_CPU wb_reg_rd", false,-1, 4,0);
        tracep->declBus(c+82,"top u_ysyx_22040125_CPU b_check", false,-1, 5,0);
        tracep->declBus(c+83,"top u_ysyx_22040125_CPU l_bhw", false,-1, 5,0);
        tracep->declBus(c+84,"top u_ysyx_22040125_CPU exe_reg_l_bhw", false,-1, 5,0);
        tracep->declBus(c+85,"top u_ysyx_22040125_CPU mem_reg_l_bhw", false,-1, 5,0);
        tracep->declBus(c+86,"top u_ysyx_22040125_CPU exe_reg_op", false,-1, 14,0);
        tracep->declBus(c+87,"top u_ysyx_22040125_CPU op", false,-1, 15,0);
        tracep->declBus(c+441,"top u_ysyx_22040125_CPU inst", false,-1, 31,0);
        tracep->declBus(c+88,"top u_ysyx_22040125_CPU ram_addr", false,-1, 31,0);
        tracep->declBus(c+89,"top u_ysyx_22040125_CPU mem_reg_ram_addr", false,-1, 31,0);
        tracep->declBus(c+90,"top u_ysyx_22040125_CPU inst_id", false,-1, 31,0);
        tracep->declBus(c+442,"top u_ysyx_22040125_CPU inst_out", false,-1, 31,0);
        tracep->declQuad(c+91,"top u_ysyx_22040125_CPU imm", false,-1, 63,0);
        tracep->declQuad(c+93,"top u_ysyx_22040125_CPU data_rd", false,-1, 63,0);
        tracep->declQuad(c+443,"top u_ysyx_22040125_CPU b_src2", false,-1, 63,0);
        tracep->declQuad(c+95,"top u_ysyx_22040125_CPU src2_out", false,-1, 63,0);
        tracep->declQuad(c+445,"top u_ysyx_22040125_CPU pc_src1", false,-1, 63,0);
        tracep->declQuad(c+97,"top u_ysyx_22040125_CPU data_a0", false,-1, 63,0);
        tracep->declQuad(c+447,"top u_ysyx_22040125_CPU one_src1", false,-1, 63,0);
        tracep->declQuad(c+449,"top u_ysyx_22040125_CPU one_src2", false,-1, 63,0);
        tracep->declQuad(c+451,"top u_ysyx_22040125_CPU if_pc", false,-1, 63,0);
        tracep->declQuad(c+99,"top u_ysyx_22040125_CPU exe_reg_src1_rs1", false,-1, 63,0);
        tracep->declQuad(c+453,"top u_ysyx_22040125_CPU exe_reg_src1", false,-1, 63,0);
        tracep->declQuad(c+455,"top u_ysyx_22040125_CPU exe_reg_src2", false,-1, 63,0);
        tracep->declQuad(c+101,"top u_ysyx_22040125_CPU exe_reg_src2_rs2", false,-1, 63,0);
        tracep->declQuad(c+103,"top u_ysyx_22040125_CPU mem_reg_pc", false,-1, 63,0);
        tracep->declQuad(c+105,"top u_ysyx_22040125_CPU wb_reg_rdata", false,-1, 63,0);
        tracep->declQuad(c+107,"top u_ysyx_22040125_CPU wb_reg_data_rd_in", false,-1, 63,0);
        tracep->declQuad(c+13,"top u_ysyx_22040125_CPU mem_reg_src2_rs2", false,-1, 63,0);
        tracep->declQuad(c+109,"top u_ysyx_22040125_CPU mem_reg_data_rd_in", false,-1, 63,0);
        tracep->declQuad(c+457,"top u_ysyx_22040125_CPU mem_reg_cpu_dnpc_in1", false,-1, 63,0);
        tracep->declQuad(c+459,"top u_ysyx_22040125_CPU mem_reg_cpu_dnpc_in2", false,-1, 63,0);
        tracep->declQuad(c+111,"top u_ysyx_22040125_CPU exe_reg_imm", false,-1, 63,0);
        tracep->declQuad(c+113,"top u_ysyx_22040125_CPU cpu_pc", false,-1, 63,0);
        tracep->declQuad(c+115,"top u_ysyx_22040125_CPU wb_reg_pc", false,-1, 63,0);
        tracep->declQuad(c+461,"top u_ysyx_22040125_CPU wb_reg_cpu_dnpc_in1", false,-1, 63,0);
        tracep->declQuad(c+463,"top u_ysyx_22040125_CPU wb_reg_cpu_dnpc_in2", false,-1, 63,0);
        tracep->declQuad(c+117,"top u_ysyx_22040125_CPU exe_reg_pc", false,-1, 63,0);
        tracep->declQuad(c+465,"top u_ysyx_22040125_CPU cpu_ifpc", false,-1, 63,0);
        tracep->declQuad(c+467,"top u_ysyx_22040125_CPU if_reg_pc", false,-1, 63,0);
        tracep->declQuad(c+119,"top u_ysyx_22040125_CPU id_reg_pc", false,-1, 63,0);
        tracep->declQuad(c+121,"top u_ysyx_22040125_CPU cpu_dnpc", false,-1, 63,0);
        tracep->declQuad(c+123,"top u_ysyx_22040125_CPU cpu_snpc", false,-1, 63,0);
        tracep->declQuad(c+125,"top u_ysyx_22040125_CPU rdata", false,-1, 63,0);
        tracep->declQuad(c+127,"top u_ysyx_22040125_CPU src1_rs1", false,-1, 63,0);
        tracep->declQuad(c+129,"top u_ysyx_22040125_CPU src2_rs2", false,-1, 63,0);
        tracep->declQuad(c+131,"top u_ysyx_22040125_CPU cpu_dnpc_in1", false,-1, 63,0);
        tracep->declQuad(c+133,"top u_ysyx_22040125_CPU cpu_dnpc_in2", false,-1, 63,0);
        tracep->declQuad(c+135,"top u_ysyx_22040125_CPU src1", false,-1, 63,0);
        tracep->declQuad(c+137,"top u_ysyx_22040125_CPU src2", false,-1, 63,0);
        tracep->declQuad(c+139,"top u_ysyx_22040125_CPU data_rd_in", false,-1, 63,0);
        tracep->declBus(c+67,"top u_ysyx_22040125_CPU ctrl pc_jump", false,-1, 2,0);
        tracep->declBit(c+41,"top u_ysyx_22040125_CPU ctrl data_wen", false,-1);
        tracep->declBit(c+45,"top u_ysyx_22040125_CPU ctrl data_ren", false,-1);
        tracep->declBit(c+50,"top u_ysyx_22040125_CPU ctrl reg_wen", false,-1);
        tracep->declBit(c+37,"top u_ysyx_22040125_CPU ctrl stall_if", false,-1);
        tracep->declBit(c+44,"top u_ysyx_22040125_CPU ctrl stall_id", false,-1);
        tracep->declBit(c+38,"top u_ysyx_22040125_CPU ctrl stall_mem", false,-1);
        tracep->declBit(c+36,"top u_ysyx_22040125_CPU ctrl stall_l", false,-1);
        tracep->declBit(c+47,"top u_ysyx_22040125_CPU ctrl IF_Flush", false,-1);
        tracep->declBit(c+42,"top u_ysyx_22040125_CPU ctrl data_wen_out", false,-1);
        tracep->declBit(c+39,"top u_ysyx_22040125_CPU ctrl data_ren_out", false,-1);
        tracep->declBit(c+43,"top u_ysyx_22040125_CPU ctrl reg_wen_out", false,-1);
        tracep->declBus(c+64,"top u_ysyx_22040125_CPU ctrl stall", false,-1, 2,0);
        tracep->declQuad(c+123,"top u_ysyx_22040125_CPU pc_sel_choice in0", false,-1, 63,0);
        tracep->declQuad(c+131,"top u_ysyx_22040125_CPU pc_sel_choice in1", false,-1, 63,0);
        tracep->declQuad(c+133,"top u_ysyx_22040125_CPU pc_sel_choice in2", false,-1, 63,0);
        tracep->declBus(c+67,"top u_ysyx_22040125_CPU pc_sel_choice key", false,-1, 2,0);
        tracep->declQuad(c+121,"top u_ysyx_22040125_CPU pc_sel_choice out", false,-1, 63,0);
        tracep->declQuad(c+121,"top u_ysyx_22040125_CPU pc cpu_dnpc", false,-1, 63,0);
        tracep->declBit(c+424,"top u_ysyx_22040125_CPU pc clk", false,-1);
        tracep->declBit(c+425,"top u_ysyx_22040125_CPU pc rst", false,-1);
        tracep->declBit(c+36,"top u_ysyx_22040125_CPU pc stall", false,-1);
        tracep->declQuad(c+113,"top u_ysyx_22040125_CPU pc cpu_pc", false,-1, 63,0);
        tracep->declQuad(c+113,"top u_ysyx_22040125_CPU ifu pc", false,-1, 63,0);
        tracep->declBit(c+6,"top u_ysyx_22040125_CPU ifu inst_r_valid", false,-1);
        tracep->declBit(c+38,"top u_ysyx_22040125_CPU ifu stall_mem", false,-1);
        tracep->declBit(c+37,"top u_ysyx_22040125_CPU ifu stall_if", false,-1);
        tracep->declBus(c+10,"top u_ysyx_22040125_CPU ifu inst_addr", false,-1, 31,0);
        tracep->declBit(c+1,"top u_ysyx_22040125_CPU ifu inst_r_en", false,-1);
        tracep->declBit(c+424,"top u_ysyx_22040125_CPU id_reg clk", false,-1);
        tracep->declBit(c+425,"top u_ysyx_22040125_CPU id_reg rst", false,-1);
        tracep->declBit(c+36,"top u_ysyx_22040125_CPU id_reg stall", false,-1);
        tracep->declBit(c+47,"top u_ysyx_22040125_CPU id_reg IF_Flush", false,-1);
        tracep->declBus(c+11,"top u_ysyx_22040125_CPU id_reg inst", false,-1, 31,0);
        tracep->declQuad(c+113,"top u_ysyx_22040125_CPU id_reg if_pc", false,-1, 63,0);
        tracep->declBus(c+90,"top u_ysyx_22040125_CPU id_reg id_inst_id", false,-1, 31,0);
        tracep->declQuad(c+119,"top u_ysyx_22040125_CPU id_reg id_reg_pc", false,-1, 63,0);
        tracep->declBus(c+90,"top u_ysyx_22040125_CPU id inst", false,-1, 31,0);
        tracep->declBus(c+80,"top u_ysyx_22040125_CPU id exe_reg_rd", false,-1, 4,0);
        tracep->declBus(c+76,"top u_ysyx_22040125_CPU id exe_reg_rs1", false,-1, 4,0);
        tracep->declBus(c+77,"top u_ysyx_22040125_CPU id exe_reg_rs2", false,-1, 4,0);
        tracep->declBus(c+81,"top u_ysyx_22040125_CPU id wb_reg_rd", false,-1, 4,0);
        tracep->declBus(c+79,"top u_ysyx_22040125_CPU id mem_reg_rd", false,-1, 4,0);
        tracep->declBus(c+58,"top u_ysyx_22040125_CPU id exe_reg_src1_sel", false,-1, 1,0);
        tracep->declBus(c+60,"top u_ysyx_22040125_CPU id exe_reg_src2_sel", false,-1, 1,0);
        tracep->declBit(c+46,"top u_ysyx_22040125_CPU id exe_reg_data_ren", false,-1);
        tracep->declBit(c+2,"top u_ysyx_22040125_CPU id mem_reg_data_ren", false,-1);
        tracep->declBit(c+54,"top u_ysyx_22040125_CPU id wb_reg_reg_wen", false,-1);
        tracep->declBit(c+53,"top u_ysyx_22040125_CPU id exe_reg_reg_wen", false,-1);
        tracep->declBit(c+51,"top u_ysyx_22040125_CPU id mem_reg_reg_wen", false,-1);
        tracep->declQuad(c+91,"top u_ysyx_22040125_CPU id imm", false,-1, 63,0);
        tracep->declBus(c+87,"top u_ysyx_22040125_CPU id op", false,-1, 15,0);
        tracep->declBus(c+82,"top u_ysyx_22040125_CPU id b_check", false,-1, 5,0);
        tracep->declBus(c+83,"top u_ysyx_22040125_CPU id l_bhw", false,-1, 5,0);
        tracep->declBus(c+78,"top u_ysyx_22040125_CPU id rd", false,-1, 4,0);
        tracep->declBus(c+68,"top u_ysyx_22040125_CPU id src1_sel_plus", false,-1, 2,0);
        tracep->declBus(c+69,"top u_ysyx_22040125_CPU id src2_sel_plus", false,-1, 2,0);
        tracep->declBus(c+72,"top u_ysyx_22040125_CPU id pc_add_rs1_sel", false,-1, 3,0);
        tracep->declBus(c+73,"top u_ysyx_22040125_CPU id b_check_rs2_sel", false,-1, 3,0);
        tracep->declBit(c+44,"top u_ysyx_22040125_CPU id stall_id", false,-1);
        tracep->declBit(c+36,"top u_ysyx_22040125_CPU id stall_l", false,-1);
        tracep->declBus(c+74,"top u_ysyx_22040125_CPU id rs1", false,-1, 4,0);
        tracep->declBus(c+75,"top u_ysyx_22040125_CPU id rs2", false,-1, 4,0);
        tracep->declBus(c+65,"top u_ysyx_22040125_CPU id s_bhwd", false,-1, 2,0);
        tracep->declBus(c+63,"top u_ysyx_22040125_CPU id pc_sel", false,-1, 2,0);
        tracep->declBus(c+55,"top u_ysyx_22040125_CPU id src1_sel", false,-1, 1,0);
        tracep->declBus(c+59,"top u_ysyx_22040125_CPU id src2_sel", false,-1, 1,0);
        tracep->declBus(c+61,"top u_ysyx_22040125_CPU id load_sel", false,-1, 1,0);
        tracep->declBit(c+41,"top u_ysyx_22040125_CPU id data_wen", false,-1);
        tracep->declBit(c+45,"top u_ysyx_22040125_CPU id data_ren", false,-1);
        tracep->declBit(c+48,"top u_ysyx_22040125_CPU id ebreak", false,-1);
        tracep->declBit(c+50,"top u_ysyx_22040125_CPU id reg_wen", false,-1);
        tracep->declBit(c+35,"top u_ysyx_22040125_CPU id w_check", false,-1);
        tracep->declBit(c+141,"top u_ysyx_22040125_CPU id TYPE_I", false,-1);
        tracep->declBit(c+142,"top u_ysyx_22040125_CPU id TYPE_U", false,-1);
        tracep->declBit(c+41,"top u_ysyx_22040125_CPU id TYPE_S", false,-1);
        tracep->declBit(c+143,"top u_ysyx_22040125_CPU id TYPE_J", false,-1);
        tracep->declBit(c+144,"top u_ysyx_22040125_CPU id TYPE_B", false,-1);
        tracep->declBit(c+145,"top u_ysyx_22040125_CPU id TYPE_R", false,-1);
        tracep->declBit(c+146,"top u_ysyx_22040125_CPU id inst_lui", false,-1);
        tracep->declBit(c+147,"top u_ysyx_22040125_CPU id inst_rem", false,-1);
        tracep->declBit(c+148,"top u_ysyx_22040125_CPU id inst_remw", false,-1);
        tracep->declBit(c+149,"top u_ysyx_22040125_CPU id inst_mul", false,-1);
        tracep->declBit(c+150,"top u_ysyx_22040125_CPU id inst_mulw", false,-1);
        tracep->declBit(c+151,"top u_ysyx_22040125_CPU id inst_div", false,-1);
        tracep->declBit(c+152,"top u_ysyx_22040125_CPU id inst_divw", false,-1);
        tracep->declBit(c+153,"top u_ysyx_22040125_CPU id inst_lwu", false,-1);
        tracep->declBit(c+154,"top u_ysyx_22040125_CPU id inst_auipc", false,-1);
        tracep->declBit(c+143,"top u_ysyx_22040125_CPU id inst_jal", false,-1);
        tracep->declBit(c+155,"top u_ysyx_22040125_CPU id inst_beq", false,-1);
        tracep->declBit(c+156,"top u_ysyx_22040125_CPU id inst_bne", false,-1);
        tracep->declBit(c+157,"top u_ysyx_22040125_CPU id inst_blt", false,-1);
        tracep->declBit(c+158,"top u_ysyx_22040125_CPU id inst_bge", false,-1);
        tracep->declBit(c+159,"top u_ysyx_22040125_CPU id inst_bltu", false,-1);
        tracep->declBit(c+160,"top u_ysyx_22040125_CPU id inst_bgeu", false,-1);
        tracep->declBit(c+161,"top u_ysyx_22040125_CPU id inst_jalr", false,-1);
        tracep->declBit(c+162,"top u_ysyx_22040125_CPU id inst_lb", false,-1);
        tracep->declBit(c+163,"top u_ysyx_22040125_CPU id inst_lh", false,-1);
        tracep->declBit(c+164,"top u_ysyx_22040125_CPU id inst_lw", false,-1);
        tracep->declBit(c+165,"top u_ysyx_22040125_CPU id inst_ld", false,-1);
        tracep->declBit(c+166,"top u_ysyx_22040125_CPU id inst_lbu", false,-1);
        tracep->declBit(c+167,"top u_ysyx_22040125_CPU id inst_lhu", false,-1);
        tracep->declBit(c+168,"top u_ysyx_22040125_CPU id inst_addi", false,-1);
        tracep->declBit(c+169,"top u_ysyx_22040125_CPU id inst_slti", false,-1);
        tracep->declBit(c+170,"top u_ysyx_22040125_CPU id inst_sltiu", false,-1);
        tracep->declBit(c+171,"top u_ysyx_22040125_CPU id inst_xori", false,-1);
        tracep->declBit(c+172,"top u_ysyx_22040125_CPU id inst_ori", false,-1);
        tracep->declBit(c+173,"top u_ysyx_22040125_CPU id inst_andi", false,-1);
        tracep->declBit(c+174,"top u_ysyx_22040125_CPU id inst_slli", false,-1);
        tracep->declBit(c+175,"top u_ysyx_22040125_CPU id inst_srli", false,-1);
        tracep->declBit(c+176,"top u_ysyx_22040125_CPU id inst_srai", false,-1);
        tracep->declBit(c+48,"top u_ysyx_22040125_CPU id inst_ebreak", false,-1);
        tracep->declBit(c+177,"top u_ysyx_22040125_CPU id inst_sb", false,-1);
        tracep->declBit(c+178,"top u_ysyx_22040125_CPU id inst_sh", false,-1);
        tracep->declBit(c+179,"top u_ysyx_22040125_CPU id inst_sw", false,-1);
        tracep->declBit(c+180,"top u_ysyx_22040125_CPU id inst_sd", false,-1);
        tracep->declBit(c+181,"top u_ysyx_22040125_CPU id inst_add", false,-1);
        tracep->declBit(c+182,"top u_ysyx_22040125_CPU id inst_sub", false,-1);
        tracep->declBit(c+183,"top u_ysyx_22040125_CPU id inst_sll", false,-1);
        tracep->declBit(c+184,"top u_ysyx_22040125_CPU id inst_slt", false,-1);
        tracep->declBit(c+185,"top u_ysyx_22040125_CPU id inst_sltu", false,-1);
        tracep->declBit(c+186,"top u_ysyx_22040125_CPU id inst_xor", false,-1);
        tracep->declBit(c+187,"top u_ysyx_22040125_CPU id inst_srl", false,-1);
        tracep->declBit(c+188,"top u_ysyx_22040125_CPU id inst_sra", false,-1);
        tracep->declBit(c+189,"top u_ysyx_22040125_CPU id inst_or", false,-1);
        tracep->declBit(c+190,"top u_ysyx_22040125_CPU id inst_and", false,-1);
        tracep->declBit(c+45,"top u_ysyx_22040125_CPU id l_check", false,-1);
        tracep->declBit(c+191,"top u_ysyx_22040125_CPU id op_sll", false,-1);
        tracep->declBit(c+192,"top u_ysyx_22040125_CPU id op_rem", false,-1);
        tracep->declBit(c+193,"top u_ysyx_22040125_CPU id op_mul", false,-1);
        tracep->declBit(c+194,"top u_ysyx_22040125_CPU id op_div", false,-1);
        tracep->declBit(c+195,"top u_ysyx_22040125_CPU id op_slt", false,-1);
        tracep->declBit(c+196,"top u_ysyx_22040125_CPU id op_sltu", false,-1);
        tracep->declBit(c+197,"top u_ysyx_22040125_CPU id op_xor", false,-1);
        tracep->declBit(c+198,"top u_ysyx_22040125_CPU id op_srl", false,-1);
        tracep->declBit(c+199,"top u_ysyx_22040125_CPU id op_sra", false,-1);
        tracep->declBit(c+200,"top u_ysyx_22040125_CPU id op_or", false,-1);
        tracep->declBit(c+201,"top u_ysyx_22040125_CPU id op_and", false,-1);
        tracep->declBit(c+202,"top u_ysyx_22040125_CPU id inst_addiw", false,-1);
        tracep->declBit(c+203,"top u_ysyx_22040125_CPU id inst_slliw", false,-1);
        tracep->declBit(c+204,"top u_ysyx_22040125_CPU id inst_srliw", false,-1);
        tracep->declBit(c+205,"top u_ysyx_22040125_CPU id inst_sraiw", false,-1);
        tracep->declBit(c+206,"top u_ysyx_22040125_CPU id inst_addw", false,-1);
        tracep->declBit(c+207,"top u_ysyx_22040125_CPU id inst_subw", false,-1);
        tracep->declBit(c+208,"top u_ysyx_22040125_CPU id inst_sllw", false,-1);
        tracep->declBit(c+209,"top u_ysyx_22040125_CPU id inst_srlw", false,-1);
        tracep->declBit(c+210,"top u_ysyx_22040125_CPU id inst_sraw", false,-1);
        tracep->declQuad(c+211,"top u_ysyx_22040125_CPU id immI", false,-1, 63,0);
        tracep->declQuad(c+213,"top u_ysyx_22040125_CPU id immU", false,-1, 63,0);
        tracep->declQuad(c+215,"top u_ysyx_22040125_CPU id immS", false,-1, 63,0);
        tracep->declQuad(c+217,"top u_ysyx_22040125_CPU id immJ", false,-1, 63,0);
        tracep->declQuad(c+219,"top u_ysyx_22040125_CPU id immB", false,-1, 63,0);
        tracep->declBus(c+221,"top u_ysyx_22040125_CPU id opcode", false,-1, 6,0);
        tracep->declBus(c+222,"top u_ysyx_22040125_CPU id funct7", false,-1, 6,0);
        tracep->declBus(c+223,"top u_ysyx_22040125_CPU id funct3", false,-1, 2,0);
        tracep->declQuad(c+93,"top u_ysyx_22040125_CPU common_reg data_rd", false,-1, 63,0);
        tracep->declBus(c+81,"top u_ysyx_22040125_CPU common_reg addr_rd", false,-1, 4,0);
        tracep->declBus(c+74,"top u_ysyx_22040125_CPU common_reg addr_rs1", false,-1, 4,0);
        tracep->declBus(c+75,"top u_ysyx_22040125_CPU common_reg addr_rs2", false,-1, 4,0);
        tracep->declBit(c+54,"top u_ysyx_22040125_CPU common_reg en", false,-1);
        tracep->declBit(c+424,"top u_ysyx_22040125_CPU common_reg clk", false,-1);
        tracep->declQuad(c+97,"top u_ysyx_22040125_CPU common_reg data_a0", false,-1, 63,0);
        tracep->declQuad(c+127,"top u_ysyx_22040125_CPU common_reg data_rs1", false,-1, 63,0);
        tracep->declQuad(c+129,"top u_ysyx_22040125_CPU common_reg data_rs2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+224+i*2,"top u_ysyx_22040125_CPU common_reg reg_com", true,(i+0), 63,0);}}
        tracep->declQuad(c+127,"top u_ysyx_22040125_CPU pc_sel_check src1_rs1", false,-1, 63,0);
        tracep->declQuad(c+139,"top u_ysyx_22040125_CPU pc_sel_check data_rd_in", false,-1, 63,0);
        tracep->declQuad(c+109,"top u_ysyx_22040125_CPU pc_sel_check mem_reg_data_rd_in", false,-1, 63,0);
        tracep->declQuad(c+93,"top u_ysyx_22040125_CPU pc_sel_check data_rd", false,-1, 63,0);
        tracep->declQuad(c+129,"top u_ysyx_22040125_CPU pc_sel_check src2_rs2", false,-1, 63,0);
        tracep->declBus(c+72,"top u_ysyx_22040125_CPU pc_sel_check pc_add_rs1_sel", false,-1, 3,0);
        tracep->declBus(c+73,"top u_ysyx_22040125_CPU pc_sel_check b_check_rs2_sel", false,-1, 3,0);
        tracep->declQuad(c+119,"top u_ysyx_22040125_CPU pc_sel_check id_reg_pc", false,-1, 63,0);
        tracep->declQuad(c+91,"top u_ysyx_22040125_CPU pc_sel_check imm", false,-1, 63,0);
        tracep->declBus(c+82,"top u_ysyx_22040125_CPU pc_sel_check b_check", false,-1, 5,0);
        tracep->declBus(c+63,"top u_ysyx_22040125_CPU pc_sel_check pc_sel", false,-1, 2,0);
        tracep->declBus(c+67,"top u_ysyx_22040125_CPU pc_sel_check pc_sel_out", false,-1, 2,0);
        tracep->declQuad(c+131,"top u_ysyx_22040125_CPU pc_sel_check cpu_dnpc_in1", false,-1, 63,0);
        tracep->declQuad(c+133,"top u_ysyx_22040125_CPU pc_sel_check cpu_dnpc_in2", false,-1, 63,0);
        tracep->declQuad(c+288,"top u_ysyx_22040125_CPU pc_sel_check pc_src1", false,-1, 63,0);
        tracep->declQuad(c+290,"top u_ysyx_22040125_CPU pc_sel_check b_src2", false,-1, 63,0);
        tracep->declBit(c+292,"top u_ysyx_22040125_CPU pc_sel_check b_en", false,-1);
        tracep->declBit(c+293,"top u_ysyx_22040125_CPU pc_sel_check beq_check", false,-1);
        tracep->declBit(c+294,"top u_ysyx_22040125_CPU pc_sel_check bne_check", false,-1);
        tracep->declBit(c+295,"top u_ysyx_22040125_CPU pc_sel_check blt_check", false,-1);
        tracep->declBit(c+296,"top u_ysyx_22040125_CPU pc_sel_check bge_check", false,-1);
        tracep->declBit(c+297,"top u_ysyx_22040125_CPU pc_sel_check bltu_check", false,-1);
        tracep->declBit(c+298,"top u_ysyx_22040125_CPU pc_sel_check bgeu_check", false,-1);
        tracep->declBit(c+438,"top u_ysyx_22040125_CPU pc_sel_check data_cin", false,-1);
        tracep->declBit(c+298,"top u_ysyx_22040125_CPU pc_sel_check data_cout", false,-1);
        tracep->declQuad(c+288,"top u_ysyx_22040125_CPU pc_sel_check data_a", false,-1, 63,0);
        tracep->declQuad(c+299,"top u_ysyx_22040125_CPU pc_sel_check data_b", false,-1, 63,0);
        tracep->declQuad(c+301,"top u_ysyx_22040125_CPU pc_sel_check data_result", false,-1, 63,0);
        tracep->declQuad(c+127,"top u_ysyx_22040125_CPU pc_sel_check pc_add_src1_choice in0", false,-1, 63,0);
        tracep->declQuad(c+139,"top u_ysyx_22040125_CPU pc_sel_check pc_add_src1_choice in1", false,-1, 63,0);
        tracep->declQuad(c+109,"top u_ysyx_22040125_CPU pc_sel_check pc_add_src1_choice in2", false,-1, 63,0);
        tracep->declQuad(c+93,"top u_ysyx_22040125_CPU pc_sel_check pc_add_src1_choice in3", false,-1, 63,0);
        tracep->declBus(c+72,"top u_ysyx_22040125_CPU pc_sel_check pc_add_src1_choice key", false,-1, 3,0);
        tracep->declQuad(c+288,"top u_ysyx_22040125_CPU pc_sel_check pc_add_src1_choice out", false,-1, 63,0);
        tracep->declQuad(c+129,"top u_ysyx_22040125_CPU pc_sel_check b_check_rs2_choice in0", false,-1, 63,0);
        tracep->declQuad(c+139,"top u_ysyx_22040125_CPU pc_sel_check b_check_rs2_choice in1", false,-1, 63,0);
        tracep->declQuad(c+109,"top u_ysyx_22040125_CPU pc_sel_check b_check_rs2_choice in2", false,-1, 63,0);
        tracep->declQuad(c+93,"top u_ysyx_22040125_CPU pc_sel_check b_check_rs2_choice in3", false,-1, 63,0);
        tracep->declBus(c+73,"top u_ysyx_22040125_CPU pc_sel_check b_check_rs2_choice key", false,-1, 3,0);
        tracep->declQuad(c+290,"top u_ysyx_22040125_CPU pc_sel_check b_check_rs2_choice out", false,-1, 63,0);
        tracep->declBit(c+424,"top u_ysyx_22040125_CPU exe_reg clk", false,-1);
        tracep->declBit(c+425,"top u_ysyx_22040125_CPU exe_reg rst", false,-1);
        tracep->declQuad(c+119,"top u_ysyx_22040125_CPU exe_reg id_reg_pc", false,-1, 63,0);
        tracep->declBus(c+303,"top u_ysyx_22040125_CPU exe_reg exe_op_in", false,-1, 14,0);
        tracep->declBus(c+78,"top u_ysyx_22040125_CPU exe_reg exe_reg_rd_in", false,-1, 4,0);
        tracep->declQuad(c+127,"top u_ysyx_22040125_CPU exe_reg exe_reg_src1_in", false,-1, 63,0);
        tracep->declBus(c+55,"top u_ysyx_22040125_CPU exe_reg exe_reg_src1_sel_in", false,-1, 1,0);
        tracep->declQuad(c+129,"top u_ysyx_22040125_CPU exe_reg exe_reg_src2_in", false,-1, 63,0);
        tracep->declBit(c+42,"top u_ysyx_22040125_CPU exe_reg exe_reg_in7", false,-1);
        tracep->declBit(c+43,"top u_ysyx_22040125_CPU exe_reg exe_reg_in8", false,-1);
        tracep->declBus(c+61,"top u_ysyx_22040125_CPU exe_reg exe_reg_in9", false,-1, 1,0);
        tracep->declBus(c+59,"top u_ysyx_22040125_CPU exe_reg exe_op_in0", false,-1, 1,0);
        tracep->declQuad(c+91,"top u_ysyx_22040125_CPU exe_reg exe_op_in1", false,-1, 63,0);
        tracep->declBus(c+74,"top u_ysyx_22040125_CPU exe_reg exe_op_in2", false,-1, 4,0);
        tracep->declBus(c+75,"top u_ysyx_22040125_CPU exe_reg exe_op_in3", false,-1, 4,0);
        tracep->declBit(c+39,"top u_ysyx_22040125_CPU exe_reg exe_op_in4", false,-1);
        tracep->declBus(c+65,"top u_ysyx_22040125_CPU exe_reg exe_op_in5", false,-1, 2,0);
        tracep->declBus(c+83,"top u_ysyx_22040125_CPU exe_reg exe_op_in6", false,-1, 5,0);
        tracep->declBit(c+35,"top u_ysyx_22040125_CPU exe_reg exe_op_in7", false,-1);
        tracep->declQuad(c+117,"top u_ysyx_22040125_CPU exe_reg exe_reg_out0", false,-1, 63,0);
        tracep->declBus(c+86,"top u_ysyx_22040125_CPU exe_reg exe_reg_out1", false,-1, 14,0);
        tracep->declBus(c+80,"top u_ysyx_22040125_CPU exe_reg exe_reg_out2", false,-1, 4,0);
        tracep->declQuad(c+99,"top u_ysyx_22040125_CPU exe_reg exe_reg_out3", false,-1, 63,0);
        tracep->declBus(c+58,"top u_ysyx_22040125_CPU exe_reg exe_reg_out4", false,-1, 1,0);
        tracep->declQuad(c+101,"top u_ysyx_22040125_CPU exe_reg exe_reg_out5", false,-1, 63,0);
        tracep->declBit(c+52,"top u_ysyx_22040125_CPU exe_reg exe_reg_out7", false,-1);
        tracep->declBit(c+53,"top u_ysyx_22040125_CPU exe_reg exe_reg_out8", false,-1);
        tracep->declBus(c+62,"top u_ysyx_22040125_CPU exe_reg exe_reg_out9", false,-1, 1,0);
        tracep->declBus(c+60,"top u_ysyx_22040125_CPU exe_reg exe_reg_out10", false,-1, 1,0);
        tracep->declQuad(c+111,"top u_ysyx_22040125_CPU exe_reg exe_reg_out11", false,-1, 63,0);
        tracep->declBus(c+76,"top u_ysyx_22040125_CPU exe_reg exe_reg_out12", false,-1, 4,0);
        tracep->declBus(c+77,"top u_ysyx_22040125_CPU exe_reg exe_reg_out13", false,-1, 4,0);
        tracep->declBit(c+46,"top u_ysyx_22040125_CPU exe_reg exe_reg_out14", false,-1);
        tracep->declBus(c+66,"top u_ysyx_22040125_CPU exe_reg exe_reg_out15", false,-1, 2,0);
        tracep->declBus(c+84,"top u_ysyx_22040125_CPU exe_reg exe_reg_out16", false,-1, 5,0);
        tracep->declBit(c+40,"top u_ysyx_22040125_CPU exe_reg exe_reg_out17", false,-1);
        tracep->declQuad(c+117,"top u_ysyx_22040125_CPU src_sel exe_reg_pc", false,-1, 63,0);
        tracep->declQuad(c+99,"top u_ysyx_22040125_CPU src_sel exe_reg_src1_rs1", false,-1, 63,0);
        tracep->declQuad(c+109,"top u_ysyx_22040125_CPU src_sel mem_reg_data_rd_in", false,-1, 63,0);
        tracep->declQuad(c+93,"top u_ysyx_22040125_CPU src_sel data_rd", false,-1, 63,0);
        tracep->declBus(c+58,"top u_ysyx_22040125_CPU src_sel exe_reg_src1_sel", false,-1, 1,0);
        tracep->declBus(c+68,"top u_ysyx_22040125_CPU src_sel src1_sel_plus", false,-1, 2,0);
        tracep->declQuad(c+135,"top u_ysyx_22040125_CPU src_sel src1", false,-1, 63,0);
        tracep->declQuad(c+111,"top u_ysyx_22040125_CPU src_sel exe_reg_imm", false,-1, 63,0);
        tracep->declQuad(c+101,"top u_ysyx_22040125_CPU src_sel exe_reg_src2_rs2", false,-1, 63,0);
        tracep->declBus(c+60,"top u_ysyx_22040125_CPU src_sel exe_reg_src2_sel", false,-1, 1,0);
        tracep->declBus(c+69,"top u_ysyx_22040125_CPU src_sel src2_sel_plus", false,-1, 2,0);
        tracep->declQuad(c+137,"top u_ysyx_22040125_CPU src_sel src2", false,-1, 63,0);
        tracep->declQuad(c+135,"top u_ysyx_22040125_CPU alu src1", false,-1, 63,0);
        tracep->declQuad(c+137,"top u_ysyx_22040125_CPU alu src2", false,-1, 63,0);
        tracep->declQuad(c+111,"top u_ysyx_22040125_CPU alu imm", false,-1, 63,0);
        tracep->declBus(c+86,"top u_ysyx_22040125_CPU alu op", false,-1, 14,0);
        tracep->declBus(c+66,"top u_ysyx_22040125_CPU alu s_bhwd", false,-1, 2,0);
        tracep->declBit(c+52,"top u_ysyx_22040125_CPU alu s_check", false,-1);
        tracep->declBit(c+40,"top u_ysyx_22040125_CPU alu w_check", false,-1);
        tracep->declQuad(c+95,"top u_ysyx_22040125_CPU alu src2_out", false,-1, 63,0);
        tracep->declQuad(c+139,"top u_ysyx_22040125_CPU alu data_rd", false,-1, 63,0);
        tracep->declBus(c+88,"top u_ysyx_22040125_CPU alu ram_raddr", false,-1, 31,0);
        tracep->declBit(c+304,"top u_ysyx_22040125_CPU alu op_sb", false,-1);
        tracep->declBit(c+305,"top u_ysyx_22040125_CPU alu op_sh", false,-1);
        tracep->declBit(c+306,"top u_ysyx_22040125_CPU alu op_rem", false,-1);
        tracep->declBit(c+307,"top u_ysyx_22040125_CPU alu op_mul", false,-1);
        tracep->declBit(c+308,"top u_ysyx_22040125_CPU alu op_div", false,-1);
        tracep->declBit(c+309,"top u_ysyx_22040125_CPU alu op_sw", false,-1);
        tracep->declBit(c+310,"top u_ysyx_22040125_CPU alu op_add", false,-1);
        tracep->declBit(c+311,"top u_ysyx_22040125_CPU alu op_sub", false,-1);
        tracep->declBit(c+312,"top u_ysyx_22040125_CPU alu op_slt", false,-1);
        tracep->declBit(c+313,"top u_ysyx_22040125_CPU alu op_sltu", false,-1);
        tracep->declBit(c+314,"top u_ysyx_22040125_CPU alu op_and", false,-1);
        tracep->declBit(c+315,"top u_ysyx_22040125_CPU alu op_or", false,-1);
        tracep->declBit(c+316,"top u_ysyx_22040125_CPU alu op_xor", false,-1);
        tracep->declBit(c+317,"top u_ysyx_22040125_CPU alu op_sll", false,-1);
        tracep->declBit(c+318,"top u_ysyx_22040125_CPU alu op_srl", false,-1);
        tracep->declBit(c+319,"top u_ysyx_22040125_CPU alu op_sra", false,-1);
        tracep->declBit(c+320,"top u_ysyx_22040125_CPU alu op_lui", false,-1);
        tracep->declBit(c+321,"top u_ysyx_22040125_CPU alu op_jal", false,-1);
        tracep->declBus(c+322,"top u_ysyx_22040125_CPU alu srl_w1_result", false,-1, 31,0);
        tracep->declBus(c+323,"top u_ysyx_22040125_CPU alu sra_w1_result", false,-1, 31,0);
        tracep->declBus(c+469,"top u_ysyx_22040125_CPU alu div_w1_result", false,-1, 31,0);
        tracep->declBus(c+470,"top u_ysyx_22040125_CPU alu rem_w1_result", false,-1, 31,0);
        tracep->declQuad(c+324,"top u_ysyx_22040125_CPU alu data_result_w", false,-1, 63,0);
        tracep->declQuad(c+326,"top u_ysyx_22040125_CPU alu rem_result", false,-1, 63,0);
        tracep->declQuad(c+328,"top u_ysyx_22040125_CPU alu rem_d_result", false,-1, 63,0);
        tracep->declQuad(c+330,"top u_ysyx_22040125_CPU alu rem_w_result", false,-1, 63,0);
        tracep->declQuad(c+332,"top u_ysyx_22040125_CPU alu div_d1_result", false,-1, 63,0);
        tracep->declQuad(c+334,"top u_ysyx_22040125_CPU alu div_result", false,-1, 63,0);
        tracep->declQuad(c+336,"top u_ysyx_22040125_CPU alu mul_result", false,-1, 63,0);
        tracep->declQuad(c+338,"top u_ysyx_22040125_CPU alu div_w_result", false,-1, 63,0);
        tracep->declQuad(c+340,"top u_ysyx_22040125_CPU alu div_d_result", false,-1, 63,0);
        tracep->declQuad(c+342,"top u_ysyx_22040125_CPU alu mul_d_result", false,-1, 63,0);
        tracep->declQuad(c+344,"top u_ysyx_22040125_CPU alu mul_w_result", false,-1, 63,0);
        tracep->declQuad(c+346,"top u_ysyx_22040125_CPU alu sll_w1_result", false,-1, 63,0);
        tracep->declQuad(c+348,"top u_ysyx_22040125_CPU alu sll_w_result", false,-1, 63,0);
        tracep->declQuad(c+350,"top u_ysyx_22040125_CPU alu srl_d_result", false,-1, 63,0);
        tracep->declQuad(c+352,"top u_ysyx_22040125_CPU alu sra_d_result", false,-1, 63,0);
        tracep->declQuad(c+354,"top u_ysyx_22040125_CPU alu sll_mid_result", false,-1, 63,0);
        tracep->declQuad(c+356,"top u_ysyx_22040125_CPU alu srl_w_result", false,-1, 63,0);
        tracep->declQuad(c+358,"top u_ysyx_22040125_CPU alu sra_w_result", false,-1, 63,0);
        tracep->declQuad(c+360,"top u_ysyx_22040125_CPU alu add_sub_result", false,-1, 63,0);
        tracep->declQuad(c+471,"top u_ysyx_22040125_CPU alu srl_mid_result", false,-1, 63,0);
        tracep->declQuad(c+362,"top u_ysyx_22040125_CPU alu slt_result", false,-1, 63,0);
        tracep->declQuad(c+364,"top u_ysyx_22040125_CPU alu s_result", false,-1, 63,0);
        tracep->declQuad(c+366,"top u_ysyx_22040125_CPU alu sltu_result", false,-1, 63,0);
        tracep->declQuad(c+368,"top u_ysyx_22040125_CPU alu and_result", false,-1, 63,0);
        tracep->declQuad(c+370,"top u_ysyx_22040125_CPU alu or_result", false,-1, 63,0);
        tracep->declQuad(c+372,"top u_ysyx_22040125_CPU alu xor_result", false,-1, 63,0);
        tracep->declQuad(c+374,"top u_ysyx_22040125_CPU alu sll_result", false,-1, 63,0);
        tracep->declQuad(c+376,"top u_ysyx_22040125_CPU alu srl_result", false,-1, 63,0);
        tracep->declQuad(c+378,"top u_ysyx_22040125_CPU alu sra_result", false,-1, 63,0);
        tracep->declQuad(c+137,"top u_ysyx_22040125_CPU alu lui_result", false,-1, 63,0);
        tracep->declQuad(c+380,"top u_ysyx_22040125_CPU alu jal_result", false,-1, 63,0);
        tracep->declQuad(c+135,"top u_ysyx_22040125_CPU alu data_a", false,-1, 63,0);
        tracep->declQuad(c+382,"top u_ysyx_22040125_CPU alu data_b", false,-1, 63,0);
        tracep->declQuad(c+384,"top u_ysyx_22040125_CPU alu data_result", false,-1, 63,0);
        tracep->declQuad(c+380,"top u_ysyx_22040125_CPU alu data_pc", false,-1, 63,0);
        tracep->declBit(c+386,"top u_ysyx_22040125_CPU alu data_cin", false,-1);
        tracep->declBit(c+387,"top u_ysyx_22040125_CPU alu data_cout", false,-1);
        tracep->declBit(c+424,"top u_ysyx_22040125_CPU mem_reg clk", false,-1);
        tracep->declBit(c+425,"top u_ysyx_22040125_CPU mem_reg rst", false,-1);
        tracep->declBus(c+80,"top u_ysyx_22040125_CPU mem_reg mem_reg_in0", false,-1, 4,0);
        tracep->declBus(c+440,"top u_ysyx_22040125_CPU mem_reg mem_reg_in1", false,-1, 2,0);
        tracep->declBit(c+52,"top u_ysyx_22040125_CPU mem_reg mem_reg_in2", false,-1);
        tracep->declBit(c+53,"top u_ysyx_22040125_CPU mem_reg mem_reg_in3", false,-1);
        tracep->declBus(c+62,"top u_ysyx_22040125_CPU mem_reg mem_reg_in4", false,-1, 1,0);
        tracep->declQuad(c+139,"top u_ysyx_22040125_CPU mem_reg mem_reg_in7", false,-1, 63,0);
        tracep->declBus(c+88,"top u_ysyx_22040125_CPU mem_reg mem_reg_in8", false,-1, 31,0);
        tracep->declQuad(c+95,"top u_ysyx_22040125_CPU mem_reg mem_reg_in9", false,-1, 63,0);
        tracep->declQuad(c+117,"top u_ysyx_22040125_CPU mem_reg mem_reg_in10", false,-1, 63,0);
        tracep->declBit(c+46,"top u_ysyx_22040125_CPU mem_reg mem_reg_in11", false,-1);
        tracep->declBus(c+66,"top u_ysyx_22040125_CPU mem_reg mem_reg_in12", false,-1, 2,0);
        tracep->declBus(c+84,"top u_ysyx_22040125_CPU mem_reg mem_reg_in13", false,-1, 5,0);
        tracep->declBus(c+79,"top u_ysyx_22040125_CPU mem_reg mem_reg_out0", false,-1, 4,0);
        tracep->declBus(c+71,"top u_ysyx_22040125_CPU mem_reg mem_reg_out1", false,-1, 2,0);
        tracep->declBit(c+3,"top u_ysyx_22040125_CPU mem_reg mem_reg_out2", false,-1);
        tracep->declBit(c+51,"top u_ysyx_22040125_CPU mem_reg mem_reg_out3", false,-1);
        tracep->declBus(c+57,"top u_ysyx_22040125_CPU mem_reg mem_reg_out4", false,-1, 1,0);
        tracep->declQuad(c+109,"top u_ysyx_22040125_CPU mem_reg mem_reg_out7", false,-1, 63,0);
        tracep->declBus(c+89,"top u_ysyx_22040125_CPU mem_reg mem_reg_out8", false,-1, 31,0);
        tracep->declQuad(c+13,"top u_ysyx_22040125_CPU mem_reg mem_reg_out9", false,-1, 63,0);
        tracep->declQuad(c+103,"top u_ysyx_22040125_CPU mem_reg mem_reg_out10", false,-1, 63,0);
        tracep->declBit(c+2,"top u_ysyx_22040125_CPU mem_reg mem_reg_out11", false,-1);
        tracep->declBus(c+8,"top u_ysyx_22040125_CPU mem_reg mem_reg_out12", false,-1, 2,0);
        tracep->declBus(c+85,"top u_ysyx_22040125_CPU mem_reg mem_reg_out13", false,-1, 5,0);
        tracep->declBus(c+89,"top u_ysyx_22040125_CPU mem ram_addr", false,-1, 31,0);
        tracep->declQuad(c+13,"top u_ysyx_22040125_CPU mem wdata", false,-1, 63,0);
        tracep->declQuad(c+15,"top u_ysyx_22040125_CPU mem rdata", false,-1, 63,0);
        tracep->declBus(c+8,"top u_ysyx_22040125_CPU mem s_bhwd", false,-1, 2,0);
        tracep->declBus(c+85,"top u_ysyx_22040125_CPU mem l_bhw", false,-1, 5,0);
        tracep->declBit(c+3,"top u_ysyx_22040125_CPU mem data_wen", false,-1);
        tracep->declBit(c+2,"top u_ysyx_22040125_CPU mem data_ren", false,-1);
        tracep->declBit(c+4,"top u_ysyx_22040125_CPU mem data_r_valid", false,-1);
        tracep->declBit(c+5,"top u_ysyx_22040125_CPU mem data_w_valid", false,-1);
        tracep->declBit(c+2,"top u_ysyx_22040125_CPU mem data_r_en", false,-1);
        tracep->declBit(c+3,"top u_ysyx_22040125_CPU mem data_w_en", false,-1);
        tracep->declBit(c+38,"top u_ysyx_22040125_CPU mem stall_mem", false,-1);
        tracep->declBus(c+7,"top u_ysyx_22040125_CPU mem arsize", false,-1, 2,0);
        tracep->declBus(c+8,"top u_ysyx_22040125_CPU mem awsize", false,-1, 2,0);
        tracep->declBus(c+9,"top u_ysyx_22040125_CPU mem data_w_mask", false,-1, 7,0);
        tracep->declBus(c+12,"top u_ysyx_22040125_CPU mem data_r_addr", false,-1, 31,0);
        tracep->declBus(c+12,"top u_ysyx_22040125_CPU mem data_w_addr", false,-1, 31,0);
        tracep->declQuad(c+13,"top u_ysyx_22040125_CPU mem data_w", false,-1, 63,0);
        tracep->declQuad(c+125,"top u_ysyx_22040125_CPU mem mem_data_r", false,-1, 63,0);
        tracep->declBus(c+388,"top u_ysyx_22040125_CPU mem addr1", false,-1, 31,0);
        tracep->declBus(c+12,"top u_ysyx_22040125_CPU mem addr", false,-1, 31,0);
        tracep->declBit(c+389,"top u_ysyx_22040125_CPU mem op_sb", false,-1);
        tracep->declBit(c+473,"top u_ysyx_22040125_CPU mem data_cout", false,-1);
        tracep->declBit(c+390,"top u_ysyx_22040125_CPU mem op_sh", false,-1);
        tracep->declBit(c+391,"top u_ysyx_22040125_CPU mem op_sw", false,-1);
        tracep->declBit(c+392,"top u_ysyx_22040125_CPU mem op_lb", false,-1);
        tracep->declBit(c+393,"top u_ysyx_22040125_CPU mem op_lbu", false,-1);
        tracep->declBit(c+394,"top u_ysyx_22040125_CPU mem op_lh", false,-1);
        tracep->declBit(c+395,"top u_ysyx_22040125_CPU mem op_lhu", false,-1);
        tracep->declBit(c+396,"top u_ysyx_22040125_CPU mem op_lw", false,-1);
        tracep->declBit(c+397,"top u_ysyx_22040125_CPU mem op_lwu", false,-1);
        tracep->declBit(c+424,"top u_ysyx_22040125_CPU wb_reg clk", false,-1);
        tracep->declBit(c+425,"top u_ysyx_22040125_CPU wb_reg rst", false,-1);
        tracep->declQuad(c+103,"top u_ysyx_22040125_CPU wb_reg wb_reg_in0", false,-1, 63,0);
        tracep->declBus(c+71,"top u_ysyx_22040125_CPU wb_reg wb_reg_in1", false,-1, 2,0);
        tracep->declBit(c+51,"top u_ysyx_22040125_CPU wb_reg wb_reg_in2", false,-1);
        tracep->declBus(c+57,"top u_ysyx_22040125_CPU wb_reg wb_reg_in3", false,-1, 1,0);
        tracep->declQuad(c+109,"top u_ysyx_22040125_CPU wb_reg wb_reg_in4", false,-1, 63,0);
        tracep->declQuad(c+125,"top u_ysyx_22040125_CPU wb_reg wb_reg_in5", false,-1, 63,0);
        tracep->declBus(c+79,"top u_ysyx_22040125_CPU wb_reg wb_reg_in6", false,-1, 4,0);
        tracep->declQuad(c+115,"top u_ysyx_22040125_CPU wb_reg wb_reg_out0", false,-1, 63,0);
        tracep->declBus(c+70,"top u_ysyx_22040125_CPU wb_reg wb_reg_out1", false,-1, 2,0);
        tracep->declBit(c+54,"top u_ysyx_22040125_CPU wb_reg wb_reg_out2", false,-1);
        tracep->declBus(c+56,"top u_ysyx_22040125_CPU wb_reg wb_reg_out3", false,-1, 1,0);
        tracep->declQuad(c+107,"top u_ysyx_22040125_CPU wb_reg wb_reg_out4", false,-1, 63,0);
        tracep->declQuad(c+105,"top u_ysyx_22040125_CPU wb_reg wb_reg_out5", false,-1, 63,0);
        tracep->declBus(c+81,"top u_ysyx_22040125_CPU wb_reg wb_reg_out6", false,-1, 4,0);
        tracep->declQuad(c+107,"top u_ysyx_22040125_CPU wb in0", false,-1, 63,0);
        tracep->declQuad(c+105,"top u_ysyx_22040125_CPU wb in1", false,-1, 63,0);
        tracep->declBus(c+56,"top u_ysyx_22040125_CPU wb key", false,-1, 1,0);
        tracep->declQuad(c+93,"top u_ysyx_22040125_CPU wb out", false,-1, 63,0);
        tracep->declBit(c+424,"top u_ysyx_22040125_CPU ebreak_list clk", false,-1);
        tracep->declBit(c+425,"top u_ysyx_22040125_CPU ebreak_list rst", false,-1);
        tracep->declBit(c+48,"top u_ysyx_22040125_CPU ebreak_list ebreak", false,-1);
        tracep->declBit(c+49,"top u_ysyx_22040125_CPU ebreak_list ebreak_out", false,-1);
        tracep->declBit(c+398,"top u_ysyx_22040125_CPU ebreak_list ebreak_1", false,-1);
        tracep->declBit(c+424,"top u_ysyx_22040125_AXI aclk", false,-1);
        tracep->declBit(c+425,"top u_ysyx_22040125_AXI aresetn", false,-1);
        tracep->declBus(c+17,"top u_ysyx_22040125_AXI arid", false,-1, 3,0);
        tracep->declBus(c+18,"top u_ysyx_22040125_AXI araddr", false,-1, 31,0);
        tracep->declBus(c+428,"top u_ysyx_22040125_AXI arlen", false,-1, 7,0);
        tracep->declBus(c+7,"top u_ysyx_22040125_AXI arsize", false,-1, 2,0);
        tracep->declBus(c+429,"top u_ysyx_22040125_AXI arburst", false,-1, 1,0);
        tracep->declBus(c+430,"top u_ysyx_22040125_AXI arlock", false,-1, 1,0);
        tracep->declBus(c+431,"top u_ysyx_22040125_AXI arcache", false,-1, 3,0);
        tracep->declBus(c+432,"top u_ysyx_22040125_AXI arprot", false,-1, 2,0);
        tracep->declBit(c+19,"top u_ysyx_22040125_AXI arvalid", false,-1);
        tracep->declBit(c+31,"top u_ysyx_22040125_AXI arready", false,-1);
        tracep->declBus(c+23,"top u_ysyx_22040125_AXI rid", false,-1, 3,0);
        tracep->declQuad(c+26,"top u_ysyx_22040125_AXI rdata", false,-1, 63,0);
        tracep->declBus(c+434,"top u_ysyx_22040125_AXI rresp", false,-1, 1,0);
        tracep->declBit(c+439,"top u_ysyx_22040125_AXI rlast", false,-1);
        tracep->declBit(c+30,"top u_ysyx_22040125_AXI rvalid", false,-1);
        tracep->declBit(c+20,"top u_ysyx_22040125_AXI rready", false,-1);
        tracep->declBus(c+433,"top u_ysyx_22040125_AXI awid", false,-1, 3,0);
        tracep->declBus(c+21,"top u_ysyx_22040125_AXI awaddr", false,-1, 31,0);
        tracep->declBus(c+428,"top u_ysyx_22040125_AXI awlen", false,-1, 7,0);
        tracep->declBus(c+8,"top u_ysyx_22040125_AXI awsize", false,-1, 2,0);
        tracep->declBus(c+429,"top u_ysyx_22040125_AXI awburst", false,-1, 1,0);
        tracep->declBus(c+430,"top u_ysyx_22040125_AXI awlock", false,-1, 1,0);
        tracep->declBus(c+436,"top u_ysyx_22040125_AXI awcache", false,-1, 3,0);
        tracep->declBus(c+432,"top u_ysyx_22040125_AXI awprot", false,-1, 2,0);
        tracep->declBit(c+22,"top u_ysyx_22040125_AXI awvalid", false,-1);
        tracep->declBit(c+31,"top u_ysyx_22040125_AXI awready", false,-1);
        tracep->declBus(c+433,"top u_ysyx_22040125_AXI wid", false,-1, 3,0);
        tracep->declQuad(c+24,"top u_ysyx_22040125_AXI wdata", false,-1, 63,0);
        tracep->declBus(c+28,"top u_ysyx_22040125_AXI wstrb", false,-1, 7,0);
        tracep->declBit(c+438,"top u_ysyx_22040125_AXI wlast", false,-1);
        tracep->declBit(c+33,"top u_ysyx_22040125_AXI wvalid", false,-1);
        tracep->declBit(c+32,"top u_ysyx_22040125_AXI wready", false,-1);
        tracep->declBus(c+437,"top u_ysyx_22040125_AXI bid", false,-1, 3,0);
        tracep->declBus(c+435,"top u_ysyx_22040125_AXI bresp", false,-1, 1,0);
        tracep->declBit(c+29,"top u_ysyx_22040125_AXI bvalid", false,-1);
        tracep->declBit(c+34,"top u_ysyx_22040125_AXI bready", false,-1);
        tracep->declBit(c+4,"top u_ysyx_22040125_AXI data_r_valid", false,-1);
        tracep->declBit(c+5,"top u_ysyx_22040125_AXI data_w_valid", false,-1);
        tracep->declBit(c+6,"top u_ysyx_22040125_AXI inst_r_valid", false,-1);
        tracep->declBit(c+1,"top u_ysyx_22040125_AXI inst_r_en", false,-1);
        tracep->declBus(c+10,"top u_ysyx_22040125_AXI inst_addr", false,-1, 31,0);
        tracep->declBus(c+11,"top u_ysyx_22040125_AXI inst_r", false,-1, 31,0);
        tracep->declBit(c+2,"top u_ysyx_22040125_AXI data_r_en", false,-1);
        tracep->declBit(c+3,"top u_ysyx_22040125_AXI data_w_en", false,-1);
        tracep->declBus(c+12,"top u_ysyx_22040125_AXI data_r_addr", false,-1, 31,0);
        tracep->declQuad(c+13,"top u_ysyx_22040125_AXI data_w", false,-1, 63,0);
        tracep->declBus(c+12,"top u_ysyx_22040125_AXI data_w_addr", false,-1, 31,0);
        tracep->declBus(c+9,"top u_ysyx_22040125_AXI data_w_mask", false,-1, 7,0);
        tracep->declQuad(c+15,"top u_ysyx_22040125_AXI data_r", false,-1, 63,0);
        tracep->declBus(c+7,"top u_ysyx_22040125_AXI cpu_arsize", false,-1, 2,0);
        tracep->declBus(c+8,"top u_ysyx_22040125_AXI cpu_awsize", false,-1, 2,0);
        tracep->declBit(c+399,"top u_ysyx_22040125_AXI ar_check", false,-1);
        tracep->declBit(c+400,"top u_ysyx_22040125_AXI r_check", false,-1);
        tracep->declBit(c+401,"top u_ysyx_22040125_AXI aw_check", false,-1);
        tracep->declBit(c+402,"top u_ysyx_22040125_AXI w_check", false,-1);
        tracep->declBit(c+403,"top u_ysyx_22040125_AXI b_check", false,-1);
        tracep->declBit(c+400,"top u_ysyx_22040125_AXI r_finish", false,-1);
        tracep->declBit(c+402,"top u_ysyx_22040125_AXI w_finish", false,-1);
        tracep->declBus(c+404,"top u_ysyx_22040125_AXI axi_read_state", false,-1, 2,0);
        tracep->declBus(c+405,"top u_ysyx_22040125_AXI axi_write_state", false,-1, 2,0);
        tracep->declBus(c+406,"top u_ysyx_22040125_AXI axi_r_back_state", false,-1, 2,0);
        tracep->declBus(c+474,"top u_ysyx_22040125_AXI axi_w_back_state", false,-1, 2,0);
        tracep->declQuad(c+475,"top u_ysyx_22040125_AXI test_data", false,-1, 63,0);
        tracep->declQuad(c+26,"top u_ysyx_22040125_AXI test_data_wire", false,-1, 63,0);
        tracep->declBit(c+424,"top u_ysyx_22040125_AXI_RAM aclk", false,-1);
        tracep->declBit(c+425,"top u_ysyx_22040125_AXI_RAM aresetn", false,-1);
        tracep->declBus(c+17,"top u_ysyx_22040125_AXI_RAM arid", false,-1, 3,0);
        tracep->declBus(c+18,"top u_ysyx_22040125_AXI_RAM araddr", false,-1, 31,0);
        tracep->declBus(c+428,"top u_ysyx_22040125_AXI_RAM arlen", false,-1, 7,0);
        tracep->declBus(c+7,"top u_ysyx_22040125_AXI_RAM arsize", false,-1, 2,0);
        tracep->declBus(c+429,"top u_ysyx_22040125_AXI_RAM arburst", false,-1, 1,0);
        tracep->declBus(c+430,"top u_ysyx_22040125_AXI_RAM arlock", false,-1, 1,0);
        tracep->declBus(c+431,"top u_ysyx_22040125_AXI_RAM arcache", false,-1, 3,0);
        tracep->declBus(c+432,"top u_ysyx_22040125_AXI_RAM arprot", false,-1, 2,0);
        tracep->declBit(c+19,"top u_ysyx_22040125_AXI_RAM arvalid", false,-1);
        tracep->declBit(c+31,"top u_ysyx_22040125_AXI_RAM arready", false,-1);
        tracep->declBus(c+23,"top u_ysyx_22040125_AXI_RAM rid", false,-1, 3,0);
        tracep->declQuad(c+26,"top u_ysyx_22040125_AXI_RAM rdata", false,-1, 63,0);
        tracep->declBus(c+434,"top u_ysyx_22040125_AXI_RAM rresp", false,-1, 1,0);
        tracep->declBit(c+439,"top u_ysyx_22040125_AXI_RAM rlast", false,-1);
        tracep->declBit(c+30,"top u_ysyx_22040125_AXI_RAM rvalid", false,-1);
        tracep->declBit(c+20,"top u_ysyx_22040125_AXI_RAM rready", false,-1);
        tracep->declBus(c+433,"top u_ysyx_22040125_AXI_RAM awid", false,-1, 3,0);
        tracep->declBus(c+21,"top u_ysyx_22040125_AXI_RAM awaddr", false,-1, 31,0);
        tracep->declBus(c+428,"top u_ysyx_22040125_AXI_RAM awlen", false,-1, 7,0);
        tracep->declBus(c+8,"top u_ysyx_22040125_AXI_RAM awsize", false,-1, 2,0);
        tracep->declBus(c+429,"top u_ysyx_22040125_AXI_RAM awburst", false,-1, 1,0);
        tracep->declBus(c+430,"top u_ysyx_22040125_AXI_RAM awlock", false,-1, 1,0);
        tracep->declBus(c+436,"top u_ysyx_22040125_AXI_RAM awcache", false,-1, 3,0);
        tracep->declBus(c+432,"top u_ysyx_22040125_AXI_RAM awprot", false,-1, 2,0);
        tracep->declBit(c+22,"top u_ysyx_22040125_AXI_RAM awvalid", false,-1);
        tracep->declBit(c+31,"top u_ysyx_22040125_AXI_RAM awready", false,-1);
        tracep->declBus(c+433,"top u_ysyx_22040125_AXI_RAM wid", false,-1, 3,0);
        tracep->declQuad(c+24,"top u_ysyx_22040125_AXI_RAM wdata", false,-1, 63,0);
        tracep->declBus(c+28,"top u_ysyx_22040125_AXI_RAM wstrb", false,-1, 7,0);
        tracep->declBit(c+438,"top u_ysyx_22040125_AXI_RAM wlast", false,-1);
        tracep->declBit(c+33,"top u_ysyx_22040125_AXI_RAM wvalid", false,-1);
        tracep->declBit(c+32,"top u_ysyx_22040125_AXI_RAM wready", false,-1);
        tracep->declBus(c+437,"top u_ysyx_22040125_AXI_RAM bid", false,-1, 3,0);
        tracep->declBus(c+435,"top u_ysyx_22040125_AXI_RAM bresp", false,-1, 1,0);
        tracep->declBit(c+29,"top u_ysyx_22040125_AXI_RAM bvalid", false,-1);
        tracep->declBit(c+34,"top u_ysyx_22040125_AXI_RAM bready", false,-1);
        tracep->declBit(c+30,"top u_ysyx_22040125_AXI_RAM r_en", false,-1);
        tracep->declBit(c+407,"top u_ysyx_22040125_AXI_RAM w_en", false,-1);
        tracep->declBit(c+427,"top u_ysyx_22040125_AXI_RAM rst_ram", false,-1);
        tracep->declBus(c+408,"top u_ysyx_22040125_AXI_RAM r_size", false,-1, 2,0);
        tracep->declBus(c+409,"top u_ysyx_22040125_AXI_RAM w_size", false,-1, 2,0);
        tracep->declBus(c+410,"top u_ysyx_22040125_AXI_RAM r_rid", false,-1, 3,0);
        tracep->declBus(c+28,"top u_ysyx_22040125_AXI_RAM w_strb", false,-1, 7,0);
        tracep->declBus(c+411,"top u_ysyx_22040125_AXI_RAM r_addr", false,-1, 31,0);
        tracep->declBus(c+412,"top u_ysyx_22040125_AXI_RAM w_addr", false,-1, 31,0);
        tracep->declQuad(c+26,"top u_ysyx_22040125_AXI_RAM data_r", false,-1, 63,0);
        tracep->declQuad(c+24,"top u_ysyx_22040125_AXI_RAM data_w", false,-1, 63,0);
        tracep->declBus(c+413,"top u_ysyx_22040125_AXI_RAM state", false,-1, 3,0);
        tracep->declBus(c+431,"top u_ysyx_22040125_AXI_RAM RESET", false,-1, 3,0);
        tracep->declBus(c+433,"top u_ysyx_22040125_AXI_RAM IDEL", false,-1, 3,0);
        tracep->declBus(c+477,"top u_ysyx_22040125_AXI_RAM R_RDY", false,-1, 3,0);
        tracep->declBus(c+478,"top u_ysyx_22040125_AXI_RAM W_WAR", false,-1, 3,0);
        tracep->declBus(c+479,"top u_ysyx_22040125_AXI_RAM W_WDA", false,-1, 3,0);
        tracep->declQuad(c+24,"top u_ysyx_22040125_AXI_RAM axiram wdata", false,-1, 63,0);
        tracep->declBit(c+427,"top u_ysyx_22040125_AXI_RAM axiram rst", false,-1);
        tracep->declBus(c+410,"top u_ysyx_22040125_AXI_RAM axiram r_rid", false,-1, 3,0);
        tracep->declBus(c+411,"top u_ysyx_22040125_AXI_RAM axiram r_addr", false,-1, 31,0);
        tracep->declBus(c+412,"top u_ysyx_22040125_AXI_RAM axiram w_addr", false,-1, 31,0);
        tracep->declBus(c+408,"top u_ysyx_22040125_AXI_RAM axiram arsize", false,-1, 2,0);
        tracep->declBus(c+409,"top u_ysyx_22040125_AXI_RAM axiram awsize", false,-1, 2,0);
        tracep->declBit(c+407,"top u_ysyx_22040125_AXI_RAM axiram data_wen", false,-1);
        tracep->declBit(c+30,"top u_ysyx_22040125_AXI_RAM axiram data_ren", false,-1);
        tracep->declBit(c+424,"top u_ysyx_22040125_AXI_RAM axiram clk", false,-1);
        tracep->declQuad(c+26,"top u_ysyx_22040125_AXI_RAM axiram rdata", false,-1, 63,0);
        tracep->declBit(c+414,"top u_ysyx_22040125_AXI_RAM axiram op_sb", false,-1);
        tracep->declBit(c+480,"top u_ysyx_22040125_AXI_RAM axiram data_cout", false,-1);
        tracep->declBit(c+415,"top u_ysyx_22040125_AXI_RAM axiram op_sh", false,-1);
        tracep->declBit(c+416,"top u_ysyx_22040125_AXI_RAM axiram op_sw", false,-1);
        tracep->declBit(c+417,"top u_ysyx_22040125_AXI_RAM axiram op_lb", false,-1);
        tracep->declBit(c+481,"top u_ysyx_22040125_AXI_RAM axiram op_lbu", false,-1);
        tracep->declBit(c+418,"top u_ysyx_22040125_AXI_RAM axiram op_lh", false,-1);
        tracep->declBit(c+482,"top u_ysyx_22040125_AXI_RAM axiram op_lhu", false,-1);
        tracep->declBit(c+419,"top u_ysyx_22040125_AXI_RAM axiram op_lw", false,-1);
        tracep->declBit(c+483,"top u_ysyx_22040125_AXI_RAM axiram op_lwu", false,-1);
        tracep->declQuad(c+420,"top u_ysyx_22040125_AXI_RAM axiram rom", false,-1, 63,0);
        tracep->declQuad(c+422,"top u_ysyx_22040125_AXI_RAM axiram rdata_da", false,-1, 63,0);
    }
}

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vtop___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vtop___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vtop___024root__traceRegister(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vtop___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vtop___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vtop___024root__traceCleanup, vlSelf);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vtop___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vtop___024root* const __restrict vlSelf = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vtop___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vtop___024root__traceFullSub0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullBit(oldp+1,((1U & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__stall_mem)))));
        tracep->fullBit(oldp+2,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_data_ren));
        tracep->fullBit(oldp+3,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_data_wen));
        tracep->fullBit(oldp+4,(vlSelf->top__DOT__data_r_valid));
        tracep->fullBit(oldp+5,(vlSelf->top__DOT__data_w_valid));
        tracep->fullBit(oldp+6,(vlSelf->top__DOT__inst_r_valid));
        tracep->fullCData(oldp+7,((((IData)((0U != 
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
        tracep->fullCData(oldp+8,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_s_bhwd),3);
        tracep->fullCData(oldp+9,(vlSelf->top__DOT__data_w_mask),8);
        tracep->fullIData(oldp+10,((IData)(((vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__cpu_pc 
                                             - 0x80000000ULL) 
                                            >> 2U))),32);
        tracep->fullIData(oldp+11,(vlSelf->top__DOT__inst_r),32);
        tracep->fullIData(oldp+12,((0x3ffffffeU & (
                                                   (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_ram_addr 
                                                    - (IData)(0x80000000U)) 
                                                   >> 2U))),32);
        tracep->fullQData(oldp+13,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_src2_rs2),64);
        tracep->fullQData(oldp+15,(vlSelf->top__DOT__data_r),64);
        tracep->fullCData(oldp+17,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_data_ren),4);
        tracep->fullIData(oldp+18,((((1U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_read_state)) 
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
        tracep->fullBit(oldp+19,(vlSelf->top__DOT__arvalid));
        tracep->fullBit(oldp+20,(vlSelf->top__DOT__rready));
        tracep->fullIData(oldp+21,((0x3ffffffeU & (
                                                   (- (IData)((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_data_wen))) 
                                                   & ((vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_ram_addr 
                                                       - (IData)(0x80000000U)) 
                                                      >> 2U)))),32);
        tracep->fullBit(oldp+22,((3U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_write_state))));
        tracep->fullCData(oldp+23,(vlSelf->top__DOT__rid),4);
        tracep->fullQData(oldp+24,(vlSelf->top__DOT__wdata),64);
        tracep->fullQData(oldp+26,(((2U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state))
                                     ? ((0U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_rid))
                                         ? vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__rom
                                         : vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__rdata_da)
                                     : 0ULL)),64);
        tracep->fullCData(oldp+28,(((3U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_write_state))
                                     ? (IData)(vlSelf->top__DOT__data_w_mask)
                                     : 0U)),8);
        tracep->fullBit(oldp+29,((4U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state))));
        tracep->fullBit(oldp+30,((2U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state))));
        tracep->fullBit(oldp+31,((1U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state))));
        tracep->fullBit(oldp+32,((3U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state))));
        tracep->fullBit(oldp+33,((4U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_write_state))));
        tracep->fullBit(oldp+34,((5U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_write_state))));
        tracep->fullBit(oldp+35,(((((((((((((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_addiw) 
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
        tracep->fullBit(oldp+36,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__stall_l));
        tracep->fullBit(oldp+37,((1U & (~ (IData)(vlSelf->top__DOT__inst_r_valid)))));
        tracep->fullBit(oldp+38,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__stall_mem));
        tracep->fullBit(oldp+39,(((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__stall_l)
                                   ? 0U : (1U & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__l_check)))));
        tracep->fullBit(oldp+40,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_w_check));
        tracep->fullBit(oldp+41,((0x23U == (0x7fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))));
        tracep->fullBit(oldp+42,(((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__stall_l)
                                   ? 0U : (IData)((0x23U 
                                                   == 
                                                   (0x7fU 
                                                    & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))))));
        tracep->fullBit(oldp+43,(((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__stall_l)
                                   ? 0U : (1U & (((
                                                   ((0x33U 
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
        tracep->fullBit(oldp+44,((0U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__op))));
        tracep->fullBit(oldp+45,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__l_check));
        tracep->fullBit(oldp+46,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_data_ren));
        tracep->fullBit(oldp+47,(((1U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_out))
                                   ? 0U : 1U)));
        tracep->fullBit(oldp+48,((0x100073U == vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)));
        tracep->fullBit(oldp+49,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__ebreak_out));
        tracep->fullBit(oldp+50,((((((0x33U == (0x7fU 
                                                & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)) 
                                     | (0x3bU == (0x7fU 
                                                  & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                    | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__TYPE_I)) 
                                   | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__TYPE_U)) 
                                  | (0x6fU == (0x7fU 
                                               & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))));
        tracep->fullBit(oldp+51,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_reg_wen));
        tracep->fullBit(oldp+52,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_data_wen));
        tracep->fullBit(oldp+53,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_reg_wen));
        tracep->fullBit(oldp+54,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_reg_wen));
        tracep->fullCData(oldp+55,(((((0x6fU == (0x7fU 
                                                 & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)) 
                                      | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_jalr)) 
                                     | (0x17U == (0x7fU 
                                                  & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))
                                     ? 1U : 2U)),2);
        tracep->fullCData(oldp+56,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_load_sel),2);
        tracep->fullCData(oldp+57,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_load_sel),2);
        tracep->fullCData(oldp+58,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_src1_sel),2);
        tracep->fullCData(oldp+59,(((((0x6fU == (0x7fU 
                                                 & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)) 
                                      | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__TYPE_U)) 
                                     | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__TYPE_I))
                                     ? 1U : 2U)),2);
        tracep->fullCData(oldp+60,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_src2_sel),2);
        tracep->fullCData(oldp+61,(((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__l_check)
                                     ? 2U : 1U)),2);
        tracep->fullCData(oldp+62,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_load_sel),2);
        tracep->fullCData(oldp+63,(((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_jalr)
                                     ? 4U : ((0x6fU 
                                              == (0x7fU 
                                                  & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))
                                              ? 2U : 1U))),3);
        tracep->fullCData(oldp+64,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__stall),3);
        tracep->fullCData(oldp+65,((((IData)((0x23U 
                                              == (0x707fU 
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
        tracep->fullCData(oldp+66,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_s_bhwd),3);
        tracep->fullCData(oldp+67,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_out),3);
        tracep->fullCData(oldp+68,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1_sel_plus),3);
        tracep->fullCData(oldp+69,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2_sel_plus),3);
        tracep->fullCData(oldp+70,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_pc_sel),3);
        tracep->fullCData(oldp+71,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_pc_sel),3);
        tracep->fullCData(oldp+72,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_add_rs1_sel),4);
        tracep->fullCData(oldp+73,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__b_check_rs2_sel),4);
        tracep->fullCData(oldp+74,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__rs1),5);
        tracep->fullCData(oldp+75,((0x1fU & (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                             >> 0x14U))),5);
        tracep->fullCData(oldp+76,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_rs1),5);
        tracep->fullCData(oldp+77,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_rs2),5);
        tracep->fullCData(oldp+78,((0x1fU & (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                             >> 7U))),5);
        tracep->fullCData(oldp+79,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_rd),5);
        tracep->fullCData(oldp+80,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_rd),5);
        tracep->fullCData(oldp+81,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_rd),5);
        tracep->fullCData(oldp+82,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__b_check),6);
        tracep->fullCData(oldp+83,((((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lb) 
                                     << 5U) | (((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lbu) 
                                                << 4U) 
                                               | (((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lh) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lhu) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lw) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lwu))))))),6);
        tracep->fullCData(oldp+84,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_l_bhw),6);
        tracep->fullCData(oldp+85,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_l_bhw),6);
        tracep->fullSData(oldp+86,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op),15);
        tracep->fullSData(oldp+87,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__op),16);
        tracep->fullIData(oldp+88,((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__add_sub_result)),32);
        tracep->fullIData(oldp+89,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_ram_addr),32);
        tracep->fullIData(oldp+90,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id),32);
        tracep->fullQData(oldp+91,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__imm),64);
        tracep->fullQData(oldp+93,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__data_rd),64);
        tracep->fullQData(oldp+95,(((4U & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_s_bhwd))
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
                                         : ((1U & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_s_bhwd))
                                             ? (((QData)((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)))
                                             : vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)))),64);
        tracep->fullQData(oldp+97,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com
                                   [0xaU]),64);
        tracep->fullQData(oldp+99,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_src1_rs1),64);
        tracep->fullQData(oldp+101,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_src2_rs2),64);
        tracep->fullQData(oldp+103,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_pc),64);
        tracep->fullQData(oldp+105,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_rdata),64);
        tracep->fullQData(oldp+107,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_data_rd_in),64);
        tracep->fullQData(oldp+109,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_data_rd_in),64);
        tracep->fullQData(oldp+111,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_imm),64);
        tracep->fullQData(oldp+113,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__cpu_pc),64);
        tracep->fullQData(oldp+115,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_pc),64);
        tracep->fullQData(oldp+117,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_pc),64);
        tracep->fullQData(oldp+119,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id_reg_pc),64);
        tracep->fullQData(oldp+121,(((1U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_out))
                                      ? (4ULL + vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__cpu_pc)
                                      : ((2U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_out))
                                          ? (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id_reg_pc 
                                             + vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__imm)
                                          : (0xfffffffffffffffeULL 
                                             & (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__pc_src1 
                                                + vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__imm))))),64);
        tracep->fullQData(oldp+123,((4ULL + vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__cpu_pc)),64);
        tracep->fullQData(oldp+125,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__rdata),64);
        tracep->fullQData(oldp+127,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1_rs1),64);
        tracep->fullQData(oldp+129,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2_rs2),64);
        tracep->fullQData(oldp+131,((vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id_reg_pc 
                                     + vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__imm)),64);
        tracep->fullQData(oldp+133,((0xfffffffffffffffeULL 
                                     & (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__pc_src1 
                                        + vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__imm))),64);
        tracep->fullQData(oldp+135,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1),64);
        tracep->fullQData(oldp+137,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2),64);
        tracep->fullQData(oldp+139,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__data_rd_in),64);
        tracep->fullBit(oldp+141,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__TYPE_I));
        tracep->fullBit(oldp+142,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__TYPE_U));
        tracep->fullBit(oldp+143,((0x6fU == (0x7fU 
                                             & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))));
        tracep->fullBit(oldp+144,((0x63U == (0x7fU 
                                             & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))));
        tracep->fullBit(oldp+145,(((0x33U == (0x7fU 
                                              & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)) 
                                   | (0x3bU == (0x7fU 
                                                & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))));
        tracep->fullBit(oldp+146,((0x37U == (0x7fU 
                                             & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))));
        tracep->fullBit(oldp+147,(((IData)((0x6033U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                   & (1U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+148,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_remw));
        tracep->fullBit(oldp+149,(((IData)((0x33U == 
                                            (0x707fU 
                                             & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                   & (1U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+150,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_mulw));
        tracep->fullBit(oldp+151,(((IData)((0x4033U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                   & (1U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+152,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_divw));
        tracep->fullBit(oldp+153,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lwu));
        tracep->fullBit(oldp+154,((0x17U == (0x7fU 
                                             & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))));
        tracep->fullBit(oldp+155,((IData)((0x63U == 
                                           (0x707fU 
                                            & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))));
        tracep->fullBit(oldp+156,((IData)((0x1063U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))));
        tracep->fullBit(oldp+157,((IData)((0x4063U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))));
        tracep->fullBit(oldp+158,((IData)((0x5063U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))));
        tracep->fullBit(oldp+159,((IData)((0x6063U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))));
        tracep->fullBit(oldp+160,((IData)((0x7063U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))));
        tracep->fullBit(oldp+161,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_jalr));
        tracep->fullBit(oldp+162,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lb));
        tracep->fullBit(oldp+163,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lh));
        tracep->fullBit(oldp+164,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lw));
        tracep->fullBit(oldp+165,((IData)((0x3003U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))));
        tracep->fullBit(oldp+166,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lbu));
        tracep->fullBit(oldp+167,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_lhu));
        tracep->fullBit(oldp+168,((IData)((0x13U == 
                                           (0x707fU 
                                            & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))));
        tracep->fullBit(oldp+169,((IData)((0x2013U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))));
        tracep->fullBit(oldp+170,((IData)((0x3013U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))));
        tracep->fullBit(oldp+171,((IData)((0x4013U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))));
        tracep->fullBit(oldp+172,((IData)((0x6013U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))));
        tracep->fullBit(oldp+173,((IData)((0x7013U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))));
        tracep->fullBit(oldp+174,(((IData)((0x1013U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                             >> 0x1aU)))));
        tracep->fullBit(oldp+175,(((IData)((0x5013U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                             >> 0x1aU)))));
        tracep->fullBit(oldp+176,(((IData)((0x5013U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                   & (0x10U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                >> 0x1aU)))));
        tracep->fullBit(oldp+177,((IData)((0x23U == 
                                           (0x707fU 
                                            & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))));
        tracep->fullBit(oldp+178,((IData)((0x1023U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))));
        tracep->fullBit(oldp+179,((IData)((0x2023U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))));
        tracep->fullBit(oldp+180,((IData)((0x3023U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)))));
        tracep->fullBit(oldp+181,(((IData)((0x33U == 
                                            (0x707fU 
                                             & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+182,(((IData)((0x33U == 
                                            (0x707fU 
                                             & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                   & (0x20U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+183,(((IData)((0x1033U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+184,(((IData)((0x2033U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+185,(((IData)((0x3033U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+186,(((IData)((0x4033U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+187,(((IData)((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+188,(((IData)((0x5033U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                   & (0x20U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                >> 0x19U)))));
        tracep->fullBit(oldp+189,(((IData)((0x6033U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+190,(((IData)((0x7033U 
                                            == (0x707fU 
                                                & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                   & (0U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                             >> 0x19U)))));
        tracep->fullBit(oldp+191,((((((IData)((0x1033U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                      & (0U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                >> 0x19U))) 
                                     | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_sllw)) 
                                    | ((IData)((0x1013U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                       & (0U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                 >> 0x1aU)))) 
                                   | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_slliw))));
        tracep->fullBit(oldp+192,((((IData)((0x6033U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                    & (1U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                              >> 0x19U))) 
                                   | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_remw))));
        tracep->fullBit(oldp+193,((((IData)((0x33U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                    & (1U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                              >> 0x19U))) 
                                   | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_mulw))));
        tracep->fullBit(oldp+194,((((IData)((0x4033U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                    & (1U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                              >> 0x19U))) 
                                   | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_divw))));
        tracep->fullBit(oldp+195,((((IData)((0x2033U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                    & (0U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                              >> 0x19U))) 
                                   | (IData)((0x2013U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))))));
        tracep->fullBit(oldp+196,((((IData)((0x3033U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                    & (0U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                              >> 0x19U))) 
                                   | (IData)((0x3013U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))))));
        tracep->fullBit(oldp+197,((((IData)((0x4033U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                    & (0U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                              >> 0x19U))) 
                                   | (IData)((0x4013U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))))));
        tracep->fullBit(oldp+198,((((((IData)((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                      & (0U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                >> 0x19U))) 
                                     | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_srlw)) 
                                    | ((IData)((0x5013U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                       & (0U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                 >> 0x1aU)))) 
                                   | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_srliw))));
        tracep->fullBit(oldp+199,((((((IData)((0x5033U 
                                               == (0x707fU 
                                                   & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                      & (0x20U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                   >> 0x19U))) 
                                     | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_sraw)) 
                                    | ((IData)((0x5013U 
                                                == 
                                                (0x707fU 
                                                 & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                       & (0x10U == 
                                          (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                           >> 0x1aU)))) 
                                   | (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_sraiw))));
        tracep->fullBit(oldp+200,((((IData)((0x6033U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                    & (0U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                              >> 0x19U))) 
                                   | (IData)((0x6013U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))))));
        tracep->fullBit(oldp+201,((((IData)((0x7033U 
                                             == (0x707fU 
                                                 & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))) 
                                    & (0U == (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                              >> 0x19U))) 
                                   | (IData)((0x7013U 
                                              == (0x707fU 
                                                  & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))))));
        tracep->fullBit(oldp+202,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_addiw));
        tracep->fullBit(oldp+203,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_slliw));
        tracep->fullBit(oldp+204,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_srliw));
        tracep->fullBit(oldp+205,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_sraiw));
        tracep->fullBit(oldp+206,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_addw));
        tracep->fullBit(oldp+207,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_subw));
        tracep->fullBit(oldp+208,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_sllw));
        tracep->fullBit(oldp+209,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_srlw));
        tracep->fullBit(oldp+210,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__id__DOT__inst_sraw));
        tracep->fullQData(oldp+211,((((- (QData)((IData)(
                                                         (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                                  >> 0x14U))))),64);
        tracep->fullQData(oldp+213,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(
                                                                  (0xfffff000U 
                                                                   & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id))))),64);
        tracep->fullQData(oldp+215,((((- (QData)((IData)(
                                                         (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                          >> 0x1fU)))) 
                                      << 0xcU) | (QData)((IData)(
                                                                 ((0xfe0U 
                                                                   & (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                                      >> 0x14U)) 
                                                                  | (0x1fU 
                                                                     & (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                                        >> 7U))))))),64);
        tracep->fullQData(oldp+217,((((- (QData)((IData)(
                                                         (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                                          >> 0x1fU)))) 
                                      << 0x15U) | (QData)((IData)(
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
        tracep->fullQData(oldp+219,((((- (QData)((IData)(
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
        tracep->fullCData(oldp+221,((0x7fU & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id)),7);
        tracep->fullCData(oldp+222,((vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                     >> 0x19U)),7);
        tracep->fullCData(oldp+223,((7U & (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_id 
                                           >> 0xcU))),3);
        tracep->fullQData(oldp+224,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[0]),64);
        tracep->fullQData(oldp+226,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[1]),64);
        tracep->fullQData(oldp+228,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[2]),64);
        tracep->fullQData(oldp+230,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[3]),64);
        tracep->fullQData(oldp+232,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[4]),64);
        tracep->fullQData(oldp+234,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[5]),64);
        tracep->fullQData(oldp+236,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[6]),64);
        tracep->fullQData(oldp+238,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[7]),64);
        tracep->fullQData(oldp+240,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[8]),64);
        tracep->fullQData(oldp+242,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[9]),64);
        tracep->fullQData(oldp+244,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[10]),64);
        tracep->fullQData(oldp+246,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[11]),64);
        tracep->fullQData(oldp+248,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[12]),64);
        tracep->fullQData(oldp+250,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[13]),64);
        tracep->fullQData(oldp+252,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[14]),64);
        tracep->fullQData(oldp+254,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[15]),64);
        tracep->fullQData(oldp+256,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[16]),64);
        tracep->fullQData(oldp+258,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[17]),64);
        tracep->fullQData(oldp+260,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[18]),64);
        tracep->fullQData(oldp+262,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[19]),64);
        tracep->fullQData(oldp+264,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[20]),64);
        tracep->fullQData(oldp+266,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[21]),64);
        tracep->fullQData(oldp+268,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[22]),64);
        tracep->fullQData(oldp+270,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[23]),64);
        tracep->fullQData(oldp+272,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[24]),64);
        tracep->fullQData(oldp+274,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[25]),64);
        tracep->fullQData(oldp+276,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[26]),64);
        tracep->fullQData(oldp+278,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[27]),64);
        tracep->fullQData(oldp+280,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[28]),64);
        tracep->fullQData(oldp+282,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[29]),64);
        tracep->fullQData(oldp+284,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[30]),64);
        tracep->fullQData(oldp+286,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__common_reg__DOT__reg_com[31]),64);
        tracep->fullQData(oldp+288,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__pc_src1),64);
        tracep->fullQData(oldp+290,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__b_src2),64);
        tracep->fullBit(oldp+292,((1U & ((((((((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__b_check) 
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
        tracep->fullBit(oldp+293,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__beq_check));
        tracep->fullBit(oldp+294,((1U & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__beq_check)))));
        tracep->fullBit(oldp+295,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__blt_check));
        tracep->fullBit(oldp+296,((1U & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__blt_check)))));
        tracep->fullBit(oldp+297,((1U & (~ (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__data_cout)))));
        tracep->fullBit(oldp+298,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__data_cout));
        tracep->fullQData(oldp+299,((~ vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__b_src2)),64);
        tracep->fullQData(oldp+301,((1ULL + (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__pc_src1 
                                             + (~ vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_sel_check__DOT__b_src2)))),64);
        tracep->fullSData(oldp+303,((0x7fffU & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__op))),15);
        tracep->fullBit(oldp+304,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_s_bhwd) 
                                         >> 2U))));
        tracep->fullBit(oldp+305,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_s_bhwd) 
                                         >> 1U))));
        tracep->fullBit(oldp+306,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op) 
                                         >> 0xeU))));
        tracep->fullBit(oldp+307,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op) 
                                         >> 0xcU))));
        tracep->fullBit(oldp+308,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op) 
                                         >> 0xdU))));
        tracep->fullBit(oldp+309,((1U & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_s_bhwd))));
        tracep->fullBit(oldp+310,((1U & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op))));
        tracep->fullBit(oldp+311,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op) 
                                         >> 1U))));
        tracep->fullBit(oldp+312,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op) 
                                         >> 2U))));
        tracep->fullBit(oldp+313,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op) 
                                         >> 3U))));
        tracep->fullBit(oldp+314,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op) 
                                         >> 4U))));
        tracep->fullBit(oldp+315,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op) 
                                         >> 5U))));
        tracep->fullBit(oldp+316,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op) 
                                         >> 6U))));
        tracep->fullBit(oldp+317,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op) 
                                         >> 7U))));
        tracep->fullBit(oldp+318,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op) 
                                         >> 8U))));
        tracep->fullBit(oldp+319,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op) 
                                         >> 9U))));
        tracep->fullBit(oldp+320,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op) 
                                         >> 0xaU))));
        tracep->fullBit(oldp+321,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_op) 
                                         >> 0xbU))));
        tracep->fullIData(oldp+322,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__srl_w1_result),32);
        tracep->fullIData(oldp+323,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__sra_w1_result),32);
        tracep->fullQData(oldp+324,(((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_w_check)
                                      ? (((QData)((IData)(
                                                          (- (IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__data_result 
                                                                                >> 0x1fU))))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__data_result)))
                                      : vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__data_result)),64);
        tracep->fullQData(oldp+326,(((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_w_check)
                                      ? (((QData)((IData)(
                                                          (- (IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__rem_d_result 
                                                                                >> 0x1fU))))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__rem_d_result)))
                                      : vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__rem_d_result)),64);
        tracep->fullQData(oldp+328,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__rem_d_result),64);
        tracep->fullQData(oldp+330,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__rem_d_result 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__rem_d_result)))),64);
        tracep->fullQData(oldp+332,(VL_DIVS_QQQ(64, vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1, vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)),64);
        tracep->fullQData(oldp+334,(((0ULL == vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)
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
        tracep->fullQData(oldp+336,(((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_w_check)
                                      ? (((QData)((IData)(
                                                          (- (IData)(
                                                                     (1U 
                                                                      & (IData)(
                                                                                (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__mul_d_result 
                                                                                >> 0x1fU))))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__mul_d_result)))
                                      : vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__mul_d_result)),64);
        tracep->fullQData(oldp+338,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__div_d_result 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__div_d_result)))),64);
        tracep->fullQData(oldp+340,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__div_d_result),64);
        tracep->fullQData(oldp+342,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__mul_d_result),64);
        tracep->fullQData(oldp+344,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__mul_d_result 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__mul_d_result)))),64);
        tracep->fullQData(oldp+346,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__sll_w1_result),64);
        tracep->fullQData(oldp+348,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (1U 
                                                                  & (IData)(
                                                                            (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__sll_w1_result 
                                                                             >> 0x1fU))))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__sll_w1_result)))),64);
        tracep->fullQData(oldp+350,((vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)))),64);
        tracep->fullQData(oldp+352,(VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1, 
                                                   (0x3fU 
                                                    & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)))),64);
        tracep->fullQData(oldp+354,((vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1 
                                     << (0x3fU & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)))),64);
        tracep->fullQData(oldp+356,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__srl_w1_result 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__srl_w1_result)))),64);
        tracep->fullQData(oldp+358,((((QData)((IData)(
                                                      (- (IData)(
                                                                 (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__sra_w1_result 
                                                                  >> 0x1fU))))) 
                                      << 0x20U) | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__sra_w1_result)))),64);
        tracep->fullQData(oldp+360,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__add_sub_result),64);
        tracep->fullQData(oldp+362,((QData)((IData)(
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
        tracep->fullQData(oldp+364,((vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1 
                                     + vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_imm)),64);
        VL_EXTEND_WQ(65,64, __Vtemp32, vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp33, vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__data_b);
        VL_ADD_W(3, __Vtemp34, __Vtemp32, __Vtemp33);
        VL_EXTEND_WI(65,1, __Vtemp35, (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__data_cin));
        VL_ADD_W(3, __Vtemp36, __Vtemp34, __Vtemp35);
        tracep->fullQData(oldp+366,((QData)((IData)(
                                                    (1U 
                                                     & (~ 
                                                        (1U 
                                                         & __Vtemp36[2U])))))),64);
        tracep->fullQData(oldp+368,((vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1 
                                     & vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)),64);
        tracep->fullQData(oldp+370,((vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1 
                                     | vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)),64);
        tracep->fullQData(oldp+372,((vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1 
                                     ^ vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2)),64);
        tracep->fullQData(oldp+374,(((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_w_check)
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
        tracep->fullQData(oldp+376,(((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_w_check)
                                      ? (((QData)((IData)(
                                                          (- (IData)(
                                                                     (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__srl_w1_result 
                                                                      >> 0x1fU))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__srl_w1_result)))
                                      : (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1 
                                         >> (0x3fU 
                                             & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2))))),64);
        tracep->fullQData(oldp+378,(((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_w_check)
                                      ? (((QData)((IData)(
                                                          (- (IData)(
                                                                     (vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__sra_w1_result 
                                                                      >> 0x1fU))))) 
                                          << 0x20U) 
                                         | (QData)((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__sra_w1_result)))
                                      : VL_SHIFTRS_QQI(64,64,6, vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1, 
                                                       (0x3fU 
                                                        & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src2))))),64);
        tracep->fullQData(oldp+380,((4ULL + vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1)),64);
        tracep->fullQData(oldp+382,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__data_b),64);
        tracep->fullQData(oldp+384,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__data_result),64);
        tracep->fullBit(oldp+386,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__data_cin));
        VL_EXTEND_WQ(65,64, __Vtemp39, vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp40, vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__data_b);
        VL_ADD_W(3, __Vtemp41, __Vtemp39, __Vtemp40);
        VL_EXTEND_WI(65,1, __Vtemp42, (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__data_cin));
        VL_ADD_W(3, __Vtemp43, __Vtemp41, __Vtemp42);
        tracep->fullBit(oldp+387,((1U & __Vtemp43[2U])));
        tracep->fullIData(oldp+388,(((vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_ram_addr 
                                      - (IData)(0x80000000U)) 
                                     >> 3U)),32);
        tracep->fullBit(oldp+389,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_s_bhwd) 
                                         >> 2U))));
        tracep->fullBit(oldp+390,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_s_bhwd) 
                                         >> 1U))));
        tracep->fullBit(oldp+391,((1U & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_s_bhwd))));
        tracep->fullBit(oldp+392,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_l_bhw) 
                                         >> 5U))));
        tracep->fullBit(oldp+393,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_l_bhw) 
                                         >> 4U))));
        tracep->fullBit(oldp+394,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_l_bhw) 
                                         >> 3U))));
        tracep->fullBit(oldp+395,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_l_bhw) 
                                         >> 2U))));
        tracep->fullBit(oldp+396,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_l_bhw) 
                                         >> 1U))));
        tracep->fullBit(oldp+397,((1U & (IData)(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_l_bhw))));
        tracep->fullBit(oldp+398,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__ebreak_list__DOT__ebreak_1));
        tracep->fullBit(oldp+399,(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__ar_check));
        tracep->fullBit(oldp+400,(((IData)(vlSelf->top__DOT__rready) 
                                   & (2U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state)))));
        tracep->fullBit(oldp+401,(((1U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state)) 
                                   & (3U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_write_state)))));
        tracep->fullBit(oldp+402,(((3U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state)) 
                                   & (4U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_write_state)))));
        tracep->fullBit(oldp+403,(((5U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_write_state)) 
                                   & (4U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state)))));
        tracep->fullCData(oldp+404,(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_read_state),3);
        tracep->fullCData(oldp+405,(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_write_state),3);
        tracep->fullCData(oldp+406,(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_r_back_state),3);
        tracep->fullBit(oldp+407,(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_en));
        tracep->fullCData(oldp+408,(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_size),3);
        tracep->fullCData(oldp+409,(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_size),3);
        tracep->fullCData(oldp+410,(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_rid),4);
        tracep->fullIData(oldp+411,(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_addr),32);
        tracep->fullIData(oldp+412,(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_addr),32);
        tracep->fullCData(oldp+413,(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state),4);
        tracep->fullBit(oldp+414,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_size) 
                                         >> 2U))));
        tracep->fullBit(oldp+415,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_size) 
                                         >> 1U))));
        tracep->fullBit(oldp+416,((1U & (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__w_size))));
        tracep->fullBit(oldp+417,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_size) 
                                         >> 2U))));
        tracep->fullBit(oldp+418,((1U & ((IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_size) 
                                         >> 1U))));
        tracep->fullBit(oldp+419,((1U & (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__r_size))));
        tracep->fullQData(oldp+420,(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__rom),64);
        tracep->fullQData(oldp+422,(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__rdata_da),64);
        tracep->fullBit(oldp+424,(vlSelf->clk));
        tracep->fullBit(oldp+425,(vlSelf->rst));
        tracep->fullBit(oldp+426,(vlSelf->success));
        tracep->fullBit(oldp+427,(((0U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state)) 
                                   | ((~ (IData)(vlSelf->rst)) 
                                      & (1U == (IData)(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__state))))));
        tracep->fullCData(oldp+428,(0U),8);
        tracep->fullCData(oldp+429,(1U),2);
        tracep->fullCData(oldp+430,(0U),2);
        tracep->fullCData(oldp+431,(0U),4);
        tracep->fullCData(oldp+432,(0U),3);
        tracep->fullCData(oldp+433,(1U),4);
        tracep->fullCData(oldp+434,(vlSelf->top__DOT__rresp),2);
        tracep->fullCData(oldp+435,(vlSelf->top__DOT__bresp),2);
        tracep->fullCData(oldp+436,(vlSelf->top__DOT__awcache),4);
        tracep->fullCData(oldp+437,(vlSelf->top__DOT__bid),4);
        tracep->fullBit(oldp+438,(1U));
        tracep->fullBit(oldp+439,(vlSelf->top__DOT__rlast));
        tracep->fullCData(oldp+440,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_pc_sel),3);
        tracep->fullIData(oldp+441,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst),32);
        tracep->fullIData(oldp+442,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__inst_out),32);
        tracep->fullQData(oldp+443,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__b_src2),64);
        tracep->fullQData(oldp+445,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__pc_src1),64);
        tracep->fullQData(oldp+447,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__one_src1),64);
        tracep->fullQData(oldp+449,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__one_src2),64);
        tracep->fullQData(oldp+451,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__if_pc),64);
        tracep->fullQData(oldp+453,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_src1),64);
        tracep->fullQData(oldp+455,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__exe_reg_src2),64);
        tracep->fullQData(oldp+457,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_cpu_dnpc_in1),64);
        tracep->fullQData(oldp+459,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem_reg_cpu_dnpc_in2),64);
        tracep->fullQData(oldp+461,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_cpu_dnpc_in1),64);
        tracep->fullQData(oldp+463,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__wb_reg_cpu_dnpc_in2),64);
        tracep->fullQData(oldp+465,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__cpu_ifpc),64);
        tracep->fullQData(oldp+467,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__if_reg_pc),64);
        tracep->fullIData(oldp+469,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__div_w1_result),32);
        tracep->fullIData(oldp+470,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__rem_w1_result),32);
        tracep->fullQData(oldp+471,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__alu__DOT__srl_mid_result),64);
        tracep->fullBit(oldp+473,(vlSelf->top__DOT__u_ysyx_22040125_CPU__DOT__mem__DOT__data_cout));
        tracep->fullCData(oldp+474,(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__axi_w_back_state),3);
        tracep->fullQData(oldp+475,(vlSelf->top__DOT__u_ysyx_22040125_AXI__DOT__test_data),64);
        tracep->fullCData(oldp+477,(2U),4);
        tracep->fullCData(oldp+478,(3U),4);
        tracep->fullCData(oldp+479,(4U),4);
        tracep->fullBit(oldp+480,(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__data_cout));
        tracep->fullBit(oldp+481,(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__op_lbu));
        tracep->fullBit(oldp+482,(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__op_lhu));
        tracep->fullBit(oldp+483,(vlSelf->top__DOT__u_ysyx_22040125_AXI_RAM__DOT__axiram__DOT__op_lwu));
    }
}
