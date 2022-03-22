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
        tracep->declBit(c+239,"clk", false,-1);
        tracep->declBit(c+240,"rst", false,-1);
        tracep->declQuad(c+241,"data_rd", false,-1, 63,0);
        tracep->declBit(c+239,"top clk", false,-1);
        tracep->declBit(c+240,"top rst", false,-1);
        tracep->declQuad(c+241,"top data_rd", false,-1, 63,0);
        tracep->declQuad(c+1,"top cpu_pc", false,-1, 63,0);
        tracep->declQuad(c+3,"top cpu_dnpc", false,-1, 63,0);
        tracep->declBus(c+5,"top inst_addr", false,-1, 7,0);
        tracep->declBus(c+6,"top op", false,-1, 11,0);
        tracep->declBus(c+7,"top rs1", false,-1, 4,0);
        tracep->declBus(c+8,"top rs2", false,-1, 4,0);
        tracep->declBus(c+9,"top rd", false,-1, 4,0);
        tracep->declBus(c+10,"top inst", false,-1, 31,0);
        tracep->declQuad(c+11,"top imm", false,-1, 63,0);
        tracep->declQuad(c+13,"top rdata", false,-1, 63,0);
        tracep->declQuad(c+15,"top src1_rs1", false,-1, 63,0);
        tracep->declQuad(c+17,"top src2_rs2", false,-1, 63,0);
        tracep->declQuad(c+19,"top cpu_dnpc_in", false,-1, 63,0);
        tracep->declQuad(c+21,"top src1", false,-1, 63,0);
        tracep->declQuad(c+23,"top src2", false,-1, 63,0);
        tracep->declQuad(c+25,"top data_rd_in", false,-1, 63,0);
        tracep->declBus(c+27,"top ram_addr", false,-1, 31,0);
        tracep->declBus(c+28,"top check", false,-1, 31,0);
        tracep->declBus(c+29,"top src1_sel", false,-1, 1,0);
        tracep->declBus(c+30,"top src2_sel", false,-1, 1,0);
        tracep->declBus(c+31,"top pc_sel", false,-1, 1,0);
        tracep->declBus(c+32,"top load_sel", false,-1, 1,0);
        tracep->declBit(c+33,"top data_wen", false,-1);
        tracep->declBit(c+34,"top data_ren", false,-1);
        tracep->declBit(c+35,"top reg_wen", false,-1);
        tracep->declBus(c+243,"top pc_sel_choice NR_KEY", false,-1, 31,0);
        tracep->declBus(c+243,"top pc_sel_choice KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+244,"top pc_sel_choice DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+3,"top pc_sel_choice out", false,-1, 63,0);
        tracep->declBus(c+31,"top pc_sel_choice key", false,-1, 1,0);
        tracep->declArray(c+36,"top pc_sel_choice lut", false,-1, 131,0);
        tracep->declBus(c+243,"top pc_sel_choice i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+243,"top pc_sel_choice i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+244,"top pc_sel_choice i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+245,"top pc_sel_choice i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+3,"top pc_sel_choice i0 out", false,-1, 63,0);
        tracep->declBus(c+31,"top pc_sel_choice i0 key", false,-1, 1,0);
        tracep->declQuad(c+246,"top pc_sel_choice i0 default_out", false,-1, 63,0);
        tracep->declArray(c+36,"top pc_sel_choice i0 lut", false,-1, 131,0);
        tracep->declBus(c+248,"top pc_sel_choice i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+41+i*3,"top pc_sel_choice i0 pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+47+i*1,"top pc_sel_choice i0 key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+49+i*2,"top pc_sel_choice i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+53,"top pc_sel_choice i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+55,"top pc_sel_choice i0 hit", false,-1);
        tracep->declBus(c+249,"top pc_sel_choice i0 i", false,-1, 31,0);
        tracep->declBit(c+239,"top pc clk", false,-1);
        tracep->declBit(c+240,"top pc rst", false,-1);
        tracep->declQuad(c+3,"top pc cpu_dnpc", false,-1, 63,0);
        tracep->declQuad(c+1,"top pc cpu_pc", false,-1, 63,0);
        tracep->declQuad(c+1,"top inf pc", false,-1, 63,0);
        tracep->declBit(c+239,"top inf clk", false,-1);
        tracep->declBus(c+5,"top inf addr", false,-1, 7,0);
        tracep->declQuad(c+56,"top inf count", false,-1, 63,0);
        tracep->declBus(c+5,"top inst_ram addr", false,-1, 7,0);
        tracep->declBus(c+10,"top inst_ram inst", false,-1, 31,0);
        tracep->declBus(c+10,"top idu inst", false,-1, 31,0);
        tracep->declBus(c+6,"top idu op", false,-1, 11,0);
        tracep->declBus(c+9,"top idu rd", false,-1, 4,0);
        tracep->declBus(c+7,"top idu rs1", false,-1, 4,0);
        tracep->declBus(c+8,"top idu rs2", false,-1, 4,0);
        tracep->declQuad(c+11,"top idu imm", false,-1, 63,0);
        tracep->declBus(c+29,"top idu src1_sel", false,-1, 1,0);
        tracep->declBus(c+30,"top idu src2_sel", false,-1, 1,0);
        tracep->declBus(c+31,"top idu pc_sel", false,-1, 1,0);
        tracep->declBit(c+33,"top idu data_wen", false,-1);
        tracep->declBit(c+34,"top idu data_ren", false,-1);
        tracep->declBit(c+35,"top idu reg_wen", false,-1);
        tracep->declBus(c+32,"top idu load_sel", false,-1, 1,0);
        tracep->declBit(c+58,"top idu TYPE_I", false,-1);
        tracep->declBit(c+59,"top idu TYPE_U", false,-1);
        tracep->declBit(c+60,"top idu TYPE_S", false,-1);
        tracep->declBit(c+61,"top idu TYPE_J", false,-1);
        tracep->declBit(c+62,"top idu TYPE_B", false,-1);
        tracep->declBit(c+63,"top idu TYPE_R", false,-1);
        tracep->declQuad(c+64,"top idu immI", false,-1, 63,0);
        tracep->declQuad(c+66,"top idu immU", false,-1, 63,0);
        tracep->declQuad(c+68,"top idu immS", false,-1, 63,0);
        tracep->declQuad(c+70,"top idu immJ", false,-1, 63,0);
        tracep->declQuad(c+72,"top idu immB", false,-1, 63,0);
        tracep->declBus(c+74,"top idu opcode", false,-1, 6,0);
        tracep->declBus(c+75,"top idu funct7", false,-1, 6,0);
        tracep->declBus(c+76,"top idu funct3", false,-1, 2,0);
        tracep->declBus(c+9,"top common_reg addr_rd", false,-1, 4,0);
        tracep->declBus(c+7,"top common_reg addr_rs1", false,-1, 4,0);
        tracep->declBus(c+8,"top common_reg addr_rs2", false,-1, 4,0);
        tracep->declQuad(c+241,"top common_reg data_rd", false,-1, 63,0);
        tracep->declBit(c+35,"top common_reg en", false,-1);
        tracep->declBit(c+239,"top common_reg clk", false,-1);
        tracep->declQuad(c+15,"top common_reg data_rs1", false,-1, 63,0);
        tracep->declQuad(c+17,"top common_reg data_rs2", false,-1, 63,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declQuad(c+77+i*2,"top common_reg reg_com", true,(i+0), 63,0);}}
        tracep->declBus(c+27,"top data_ram ram_addr", false,-1, 31,0);
        tracep->declQuad(c+17,"top data_ram wdata", false,-1, 63,0);
        tracep->declBit(c+34,"top data_ram data_ren", false,-1);
        tracep->declBit(c+33,"top data_ram data_wen", false,-1);
        tracep->declBit(c+239,"top data_ram clk", false,-1);
        tracep->declQuad(c+13,"top data_ram rdata", false,-1, 63,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+141+i*2,"top data_ram ram", true,(i+-1), 63,0);}}
        tracep->declBus(c+243,"top src1_sel_choice NR_KEY", false,-1, 31,0);
        tracep->declBus(c+243,"top src1_sel_choice KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+244,"top src1_sel_choice DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+21,"top src1_sel_choice out", false,-1, 63,0);
        tracep->declBus(c+29,"top src1_sel_choice key", false,-1, 1,0);
        tracep->declArray(c+145,"top src1_sel_choice lut", false,-1, 131,0);
        tracep->declBus(c+243,"top src1_sel_choice i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+243,"top src1_sel_choice i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+244,"top src1_sel_choice i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+245,"top src1_sel_choice i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+21,"top src1_sel_choice i0 out", false,-1, 63,0);
        tracep->declBus(c+29,"top src1_sel_choice i0 key", false,-1, 1,0);
        tracep->declQuad(c+246,"top src1_sel_choice i0 default_out", false,-1, 63,0);
        tracep->declArray(c+145,"top src1_sel_choice i0 lut", false,-1, 131,0);
        tracep->declBus(c+248,"top src1_sel_choice i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+150+i*3,"top src1_sel_choice i0 pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+156+i*1,"top src1_sel_choice i0 key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+158+i*2,"top src1_sel_choice i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+162,"top src1_sel_choice i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+164,"top src1_sel_choice i0 hit", false,-1);
        tracep->declBus(c+249,"top src1_sel_choice i0 i", false,-1, 31,0);
        tracep->declBus(c+243,"top src2_sel_choice NR_KEY", false,-1, 31,0);
        tracep->declBus(c+243,"top src2_sel_choice KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+244,"top src2_sel_choice DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+23,"top src2_sel_choice out", false,-1, 63,0);
        tracep->declBus(c+30,"top src2_sel_choice key", false,-1, 1,0);
        tracep->declArray(c+165,"top src2_sel_choice lut", false,-1, 131,0);
        tracep->declBus(c+243,"top src2_sel_choice i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+243,"top src2_sel_choice i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+244,"top src2_sel_choice i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+245,"top src2_sel_choice i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+23,"top src2_sel_choice i0 out", false,-1, 63,0);
        tracep->declBus(c+30,"top src2_sel_choice i0 key", false,-1, 1,0);
        tracep->declQuad(c+246,"top src2_sel_choice i0 default_out", false,-1, 63,0);
        tracep->declArray(c+165,"top src2_sel_choice i0 lut", false,-1, 131,0);
        tracep->declBus(c+248,"top src2_sel_choice i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+170+i*3,"top src2_sel_choice i0 pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+176+i*1,"top src2_sel_choice i0 key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+178+i*2,"top src2_sel_choice i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+182,"top src2_sel_choice i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+184,"top src2_sel_choice i0 hit", false,-1);
        tracep->declBus(c+249,"top src2_sel_choice i0 i", false,-1, 31,0);
        tracep->declQuad(c+21,"top alu src1", false,-1, 63,0);
        tracep->declQuad(c+23,"top alu src2", false,-1, 63,0);
        tracep->declBus(c+6,"top alu op", false,-1, 11,0);
        tracep->declQuad(c+19,"top alu cpu_dnpc_in", false,-1, 63,0);
        tracep->declQuad(c+25,"top alu data_rd", false,-1, 63,0);
        tracep->declBus(c+27,"top alu ram_raddr", false,-1, 31,0);
        tracep->declBit(c+185,"top alu op_add", false,-1);
        tracep->declBit(c+186,"top alu op_sub", false,-1);
        tracep->declBit(c+187,"top alu op_slt", false,-1);
        tracep->declBit(c+188,"top alu op_sltu", false,-1);
        tracep->declBit(c+189,"top alu op_and", false,-1);
        tracep->declBit(c+190,"top alu op_or", false,-1);
        tracep->declBit(c+191,"top alu op_xor", false,-1);
        tracep->declBit(c+192,"top alu op_sll", false,-1);
        tracep->declBit(c+193,"top alu op_srl", false,-1);
        tracep->declBit(c+194,"top alu op_sra", false,-1);
        tracep->declBit(c+195,"top alu op_lui", false,-1);
        tracep->declBit(c+196,"top alu op_jal", false,-1);
        tracep->declQuad(c+19,"top alu add_sub_result", false,-1, 63,0);
        tracep->declQuad(c+197,"top alu slt_result", false,-1, 63,0);
        tracep->declQuad(c+199,"top alu sltu_result", false,-1, 63,0);
        tracep->declQuad(c+201,"top alu and_result", false,-1, 63,0);
        tracep->declQuad(c+203,"top alu or_result", false,-1, 63,0);
        tracep->declQuad(c+205,"top alu xor_result", false,-1, 63,0);
        tracep->declQuad(c+207,"top alu sll_result", false,-1, 63,0);
        tracep->declQuad(c+209,"top alu srl_result", false,-1, 63,0);
        tracep->declQuad(c+211,"top alu sra_result", false,-1, 63,0);
        tracep->declQuad(c+23,"top alu lui_result", false,-1, 63,0);
        tracep->declQuad(c+213,"top alu jal_result", false,-1, 63,0);
        tracep->declQuad(c+21,"top alu data_a", false,-1, 63,0);
        tracep->declQuad(c+215,"top alu data_b", false,-1, 63,0);
        tracep->declQuad(c+19,"top alu data_result", false,-1, 63,0);
        tracep->declQuad(c+213,"top alu data_pc", false,-1, 63,0);
        tracep->declBit(c+217,"top alu data_cin", false,-1);
        tracep->declBit(c+218,"top alu data_cout", false,-1);
        tracep->declBus(c+243,"top data_rd_choice NR_KEY", false,-1, 31,0);
        tracep->declBus(c+243,"top data_rd_choice KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+244,"top data_rd_choice DATA_LEN", false,-1, 31,0);
        tracep->declQuad(c+241,"top data_rd_choice out", false,-1, 63,0);
        tracep->declBus(c+32,"top data_rd_choice key", false,-1, 1,0);
        tracep->declArray(c+219,"top data_rd_choice lut", false,-1, 131,0);
        tracep->declBus(c+243,"top data_rd_choice i0 NR_KEY", false,-1, 31,0);
        tracep->declBus(c+243,"top data_rd_choice i0 KEY_LEN", false,-1, 31,0);
        tracep->declBus(c+244,"top data_rd_choice i0 DATA_LEN", false,-1, 31,0);
        tracep->declBus(c+245,"top data_rd_choice i0 HAS_DEFAULT", false,-1, 31,0);
        tracep->declQuad(c+241,"top data_rd_choice i0 out", false,-1, 63,0);
        tracep->declBus(c+32,"top data_rd_choice i0 key", false,-1, 1,0);
        tracep->declQuad(c+246,"top data_rd_choice i0 default_out", false,-1, 63,0);
        tracep->declArray(c+219,"top data_rd_choice i0 lut", false,-1, 131,0);
        tracep->declBus(c+248,"top data_rd_choice i0 PAIR_LEN", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declArray(c+224+i*3,"top data_rd_choice i0 pair_list", true,(i+0), 65,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+230+i*1,"top data_rd_choice i0 key_list", true,(i+0), 1,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+232+i*2,"top data_rd_choice i0 data_list", true,(i+0), 63,0);}}
        tracep->declQuad(c+236,"top data_rd_choice i0 lut_out", false,-1, 63,0);
        tracep->declBit(c+238,"top data_rd_choice i0 hit", false,-1);
        tracep->declBus(c+249,"top data_rd_choice i0 i", false,-1, 31,0);
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
    VlWide<3>/*95:0*/ __Vtemp138;
    VlWide<3>/*95:0*/ __Vtemp139;
    VlWide<3>/*95:0*/ __Vtemp140;
    VlWide<3>/*95:0*/ __Vtemp141;
    VlWide<3>/*95:0*/ __Vtemp142;
    VlWide<3>/*95:0*/ __Vtemp145;
    VlWide<3>/*95:0*/ __Vtemp146;
    VlWide<3>/*95:0*/ __Vtemp147;
    VlWide<3>/*95:0*/ __Vtemp148;
    VlWide<3>/*95:0*/ __Vtemp149;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullQData(oldp+1,(vlSelf->top__DOT__cpu_pc),64);
        tracep->fullQData(oldp+3,(vlSelf->top__DOT__cpu_dnpc),64);
        tracep->fullCData(oldp+5,((0xffU & (IData)(vlSelf->top__DOT__inf__DOT__count))),8);
        tracep->fullSData(oldp+6,(vlSelf->top__DOT__op),12);
        tracep->fullCData(oldp+7,((0x1fU & (vlSelf->top__DOT__inst 
                                            >> 0xfU))),5);
        tracep->fullCData(oldp+8,((0x1fU & (vlSelf->top__DOT__inst 
                                            >> 0x14U))),5);
        tracep->fullCData(oldp+9,((0x1fU & (vlSelf->top__DOT__inst 
                                            >> 7U))),5);
        tracep->fullIData(oldp+10,(vlSelf->top__DOT__inst),32);
        tracep->fullQData(oldp+11,(((IData)(vlSelf->top__DOT__idu__DOT__TYPE_I)
                                     ? (((- (QData)((IData)(
                                                            (vlSelf->top__DOT__inst 
                                                             >> 0x1fU)))) 
                                         << 0xcU) | (QData)((IData)(
                                                                    (vlSelf->top__DOT__inst 
                                                                     >> 0x14U))))
                                     : ((IData)(vlSelf->top__DOT__idu__DOT__TYPE_U)
                                         ? (((QData)((IData)(
                                                             (- (IData)(
                                                                        (vlSelf->top__DOT__inst 
                                                                         >> 0x1fU))))) 
                                             << 0x20U) 
                                            | (QData)((IData)(
                                                              (0xfffff000U 
                                                               & vlSelf->top__DOT__inst))))
                                         : ((0x23U 
                                             == (0x7fU 
                                                 & vlSelf->top__DOT__inst))
                                             ? (((- (QData)((IData)(
                                                                    (vlSelf->top__DOT__inst 
                                                                     >> 0x1fU)))) 
                                                 << 0xcU) 
                                                | (QData)((IData)(
                                                                  ((0xfe0U 
                                                                    & (vlSelf->top__DOT__inst 
                                                                       >> 0x14U)) 
                                                                   | (0x1fU 
                                                                      & (vlSelf->top__DOT__inst 
                                                                         >> 7U))))))
                                             : ((0x6fU 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->top__DOT__inst))
                                                 ? 
                                                (((- (QData)((IData)(
                                                                     (vlSelf->top__DOT__inst 
                                                                      >> 0x1fU)))) 
                                                  << 0x15U) 
                                                 | (QData)((IData)(
                                                                   ((0x100000U 
                                                                     & (vlSelf->top__DOT__inst 
                                                                        >> 0xbU)) 
                                                                    | ((0xff000U 
                                                                        & vlSelf->top__DOT__inst) 
                                                                       | ((0x800U 
                                                                           & (vlSelf->top__DOT__inst 
                                                                              >> 9U)) 
                                                                          | (0x7feU 
                                                                             & (vlSelf->top__DOT__inst 
                                                                                >> 0x14U))))))))
                                                 : 
                                                ((0x63U 
                                                  == 
                                                  (0x7fU 
                                                   & vlSelf->top__DOT__inst))
                                                  ? 
                                                 (((- (QData)((IData)(
                                                                      (vlSelf->top__DOT__inst 
                                                                       >> 0x1fU)))) 
                                                   << 0xdU) 
                                                  | (QData)((IData)(
                                                                    ((0x1000U 
                                                                      & (vlSelf->top__DOT__inst 
                                                                         >> 0x13U)) 
                                                                     | ((0x800U 
                                                                         & (vlSelf->top__DOT__inst 
                                                                            << 4U)) 
                                                                        | ((0x7e0U 
                                                                            & (vlSelf->top__DOT__inst 
                                                                               >> 0x14U)) 
                                                                           | (0x1eU 
                                                                              & (vlSelf->top__DOT__inst 
                                                                                >> 7U))))))))
                                                  : 0ULL)))))),64);
        tracep->fullQData(oldp+13,(((IData)(vlSelf->top__DOT__data_ren)
                                     ? vlSelf->top__DOT__data_ram__DOT__ram
                                    [(1U & ((IData)(1U) 
                                            + (IData)(vlSelf->top__DOT__data_ren)))]
                                     : 0ULL)),64);
        tracep->fullQData(oldp+15,(((0U == (0x1fU & 
                                            (vlSelf->top__DOT__inst 
                                             >> 0xfU)))
                                     ? 0ULL : vlSelf->top__DOT__common_reg__DOT__reg_com
                                    [(0x1fU & (vlSelf->top__DOT__inst 
                                               >> 0xfU))])),64);
        tracep->fullQData(oldp+17,(vlSelf->top__DOT__src2_rs2),64);
        tracep->fullQData(oldp+19,(vlSelf->top__DOT__alu__DOT__data_result),64);
        tracep->fullQData(oldp+21,(vlSelf->top__DOT__src1),64);
        tracep->fullQData(oldp+23,(vlSelf->top__DOT__src2),64);
        tracep->fullQData(oldp+25,(vlSelf->top__DOT__data_rd_in),64);
        tracep->fullIData(oldp+27,((IData)(vlSelf->top__DOT__alu__DOT__data_result)),32);
        tracep->fullIData(oldp+28,(vlSelf->top__DOT__check),32);
        tracep->fullCData(oldp+29,(((0x6fU == (0x7fU 
                                               & vlSelf->top__DOT__inst))
                                     ? 1U : 2U)),2);
        tracep->fullCData(oldp+30,(vlSelf->top__DOT__src2_sel),2);
        tracep->fullCData(oldp+31,(((0x6fU == (0x7fU 
                                               & vlSelf->top__DOT__inst))
                                     ? 2U : 1U)),2);
        tracep->fullCData(oldp+32,(vlSelf->top__DOT__load_sel),2);
        tracep->fullBit(oldp+33,(((IData)((0x2023U 
                                           == (0x707fU 
                                               & vlSelf->top__DOT__inst)))
                                   ? 1U : 0U)));
        tracep->fullBit(oldp+34,(vlSelf->top__DOT__data_ren));
        tracep->fullBit(oldp+35,((((((0x33U == (0x7fU 
                                                & vlSelf->top__DOT__inst)) 
                                     | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_I)) 
                                    | (IData)(vlSelf->top__DOT__idu__DOT__TYPE_U)) 
                                   | (0x6fU == (0x7fU 
                                                & vlSelf->top__DOT__inst)))
                                   ? 1U : 0U)));
        tracep->fullWData(oldp+36,(vlSelf->top__DOT____Vcellinp__pc_sel_choice____pinNumber3),132);
        tracep->fullWData(oldp+41,(vlSelf->top__DOT__pc_sel_choice__DOT__i0__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+44,(vlSelf->top__DOT__pc_sel_choice__DOT__i0__DOT__pair_list[1]),66);
        tracep->fullCData(oldp+47,(vlSelf->top__DOT__pc_sel_choice__DOT__i0__DOT__key_list[0]),2);
        tracep->fullCData(oldp+48,(vlSelf->top__DOT__pc_sel_choice__DOT__i0__DOT__key_list[1]),2);
        tracep->fullQData(oldp+49,(vlSelf->top__DOT__pc_sel_choice__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+51,(vlSelf->top__DOT__pc_sel_choice__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+53,(vlSelf->top__DOT__pc_sel_choice__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+55,(vlSelf->top__DOT__pc_sel_choice__DOT__i0__DOT__hit));
        tracep->fullQData(oldp+56,(vlSelf->top__DOT__inf__DOT__count),64);
        tracep->fullBit(oldp+58,(vlSelf->top__DOT__idu__DOT__TYPE_I));
        tracep->fullBit(oldp+59,(vlSelf->top__DOT__idu__DOT__TYPE_U));
        tracep->fullBit(oldp+60,((0x23U == (0x7fU & vlSelf->top__DOT__inst))));
        tracep->fullBit(oldp+61,((0x6fU == (0x7fU & vlSelf->top__DOT__inst))));
        tracep->fullBit(oldp+62,((0x63U == (0x7fU & vlSelf->top__DOT__inst))));
        tracep->fullBit(oldp+63,((0x33U == (0x7fU & vlSelf->top__DOT__inst))));
        tracep->fullQData(oldp+64,((((- (QData)((IData)(
                                                        (vlSelf->top__DOT__inst 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                (vlSelf->top__DOT__inst 
                                                                 >> 0x14U))))),64);
        tracep->fullQData(oldp+66,((((QData)((IData)(
                                                     (- (IData)(
                                                                (vlSelf->top__DOT__inst 
                                                                 >> 0x1fU))))) 
                                     << 0x20U) | (QData)((IData)(
                                                                 (0xfffff000U 
                                                                  & vlSelf->top__DOT__inst))))),64);
        tracep->fullQData(oldp+68,((((- (QData)((IData)(
                                                        (vlSelf->top__DOT__inst 
                                                         >> 0x1fU)))) 
                                     << 0xcU) | (QData)((IData)(
                                                                ((0xfe0U 
                                                                  & (vlSelf->top__DOT__inst 
                                                                     >> 0x14U)) 
                                                                 | (0x1fU 
                                                                    & (vlSelf->top__DOT__inst 
                                                                       >> 7U))))))),64);
        tracep->fullQData(oldp+70,((((- (QData)((IData)(
                                                        (vlSelf->top__DOT__inst 
                                                         >> 0x1fU)))) 
                                     << 0x15U) | (QData)((IData)(
                                                                 ((0x100000U 
                                                                   & (vlSelf->top__DOT__inst 
                                                                      >> 0xbU)) 
                                                                  | ((0xff000U 
                                                                      & vlSelf->top__DOT__inst) 
                                                                     | ((0x800U 
                                                                         & (vlSelf->top__DOT__inst 
                                                                            >> 9U)) 
                                                                        | (0x7feU 
                                                                           & (vlSelf->top__DOT__inst 
                                                                              >> 0x14U))))))))),64);
        tracep->fullQData(oldp+72,((((- (QData)((IData)(
                                                        (vlSelf->top__DOT__inst 
                                                         >> 0x1fU)))) 
                                     << 0xdU) | (QData)((IData)(
                                                                ((0x1000U 
                                                                  & (vlSelf->top__DOT__inst 
                                                                     >> 0x13U)) 
                                                                 | ((0x800U 
                                                                     & (vlSelf->top__DOT__inst 
                                                                        << 4U)) 
                                                                    | ((0x7e0U 
                                                                        & (vlSelf->top__DOT__inst 
                                                                           >> 0x14U)) 
                                                                       | (0x1eU 
                                                                          & (vlSelf->top__DOT__inst 
                                                                             >> 7U))))))))),64);
        tracep->fullCData(oldp+74,((0x7fU & vlSelf->top__DOT__inst)),7);
        tracep->fullCData(oldp+75,((vlSelf->top__DOT__inst 
                                    >> 0x19U)),7);
        tracep->fullCData(oldp+76,((7U & (vlSelf->top__DOT__inst 
                                          >> 0xcU))),3);
        tracep->fullQData(oldp+77,(vlSelf->top__DOT__common_reg__DOT__reg_com[0]),64);
        tracep->fullQData(oldp+79,(vlSelf->top__DOT__common_reg__DOT__reg_com[1]),64);
        tracep->fullQData(oldp+81,(vlSelf->top__DOT__common_reg__DOT__reg_com[2]),64);
        tracep->fullQData(oldp+83,(vlSelf->top__DOT__common_reg__DOT__reg_com[3]),64);
        tracep->fullQData(oldp+85,(vlSelf->top__DOT__common_reg__DOT__reg_com[4]),64);
        tracep->fullQData(oldp+87,(vlSelf->top__DOT__common_reg__DOT__reg_com[5]),64);
        tracep->fullQData(oldp+89,(vlSelf->top__DOT__common_reg__DOT__reg_com[6]),64);
        tracep->fullQData(oldp+91,(vlSelf->top__DOT__common_reg__DOT__reg_com[7]),64);
        tracep->fullQData(oldp+93,(vlSelf->top__DOT__common_reg__DOT__reg_com[8]),64);
        tracep->fullQData(oldp+95,(vlSelf->top__DOT__common_reg__DOT__reg_com[9]),64);
        tracep->fullQData(oldp+97,(vlSelf->top__DOT__common_reg__DOT__reg_com[10]),64);
        tracep->fullQData(oldp+99,(vlSelf->top__DOT__common_reg__DOT__reg_com[11]),64);
        tracep->fullQData(oldp+101,(vlSelf->top__DOT__common_reg__DOT__reg_com[12]),64);
        tracep->fullQData(oldp+103,(vlSelf->top__DOT__common_reg__DOT__reg_com[13]),64);
        tracep->fullQData(oldp+105,(vlSelf->top__DOT__common_reg__DOT__reg_com[14]),64);
        tracep->fullQData(oldp+107,(vlSelf->top__DOT__common_reg__DOT__reg_com[15]),64);
        tracep->fullQData(oldp+109,(vlSelf->top__DOT__common_reg__DOT__reg_com[16]),64);
        tracep->fullQData(oldp+111,(vlSelf->top__DOT__common_reg__DOT__reg_com[17]),64);
        tracep->fullQData(oldp+113,(vlSelf->top__DOT__common_reg__DOT__reg_com[18]),64);
        tracep->fullQData(oldp+115,(vlSelf->top__DOT__common_reg__DOT__reg_com[19]),64);
        tracep->fullQData(oldp+117,(vlSelf->top__DOT__common_reg__DOT__reg_com[20]),64);
        tracep->fullQData(oldp+119,(vlSelf->top__DOT__common_reg__DOT__reg_com[21]),64);
        tracep->fullQData(oldp+121,(vlSelf->top__DOT__common_reg__DOT__reg_com[22]),64);
        tracep->fullQData(oldp+123,(vlSelf->top__DOT__common_reg__DOT__reg_com[23]),64);
        tracep->fullQData(oldp+125,(vlSelf->top__DOT__common_reg__DOT__reg_com[24]),64);
        tracep->fullQData(oldp+127,(vlSelf->top__DOT__common_reg__DOT__reg_com[25]),64);
        tracep->fullQData(oldp+129,(vlSelf->top__DOT__common_reg__DOT__reg_com[26]),64);
        tracep->fullQData(oldp+131,(vlSelf->top__DOT__common_reg__DOT__reg_com[27]),64);
        tracep->fullQData(oldp+133,(vlSelf->top__DOT__common_reg__DOT__reg_com[28]),64);
        tracep->fullQData(oldp+135,(vlSelf->top__DOT__common_reg__DOT__reg_com[29]),64);
        tracep->fullQData(oldp+137,(vlSelf->top__DOT__common_reg__DOT__reg_com[30]),64);
        tracep->fullQData(oldp+139,(vlSelf->top__DOT__common_reg__DOT__reg_com[31]),64);
        tracep->fullQData(oldp+141,(vlSelf->top__DOT__data_ram__DOT__ram[0]),64);
        tracep->fullQData(oldp+143,(vlSelf->top__DOT__data_ram__DOT__ram[1]),64);
        tracep->fullWData(oldp+145,(vlSelf->top__DOT____Vcellinp__src1_sel_choice____pinNumber3),132);
        tracep->fullWData(oldp+150,(vlSelf->top__DOT__src1_sel_choice__DOT__i0__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+153,(vlSelf->top__DOT__src1_sel_choice__DOT__i0__DOT__pair_list[1]),66);
        tracep->fullCData(oldp+156,(vlSelf->top__DOT__src1_sel_choice__DOT__i0__DOT__key_list[0]),2);
        tracep->fullCData(oldp+157,(vlSelf->top__DOT__src1_sel_choice__DOT__i0__DOT__key_list[1]),2);
        tracep->fullQData(oldp+158,(vlSelf->top__DOT__src1_sel_choice__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+160,(vlSelf->top__DOT__src1_sel_choice__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+162,(vlSelf->top__DOT__src1_sel_choice__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+164,(vlSelf->top__DOT__src1_sel_choice__DOT__i0__DOT__hit));
        tracep->fullWData(oldp+165,(vlSelf->top__DOT____Vcellinp__src2_sel_choice____pinNumber3),132);
        tracep->fullWData(oldp+170,(vlSelf->top__DOT__src2_sel_choice__DOT__i0__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+173,(vlSelf->top__DOT__src2_sel_choice__DOT__i0__DOT__pair_list[1]),66);
        tracep->fullCData(oldp+176,(vlSelf->top__DOT__src2_sel_choice__DOT__i0__DOT__key_list[0]),2);
        tracep->fullCData(oldp+177,(vlSelf->top__DOT__src2_sel_choice__DOT__i0__DOT__key_list[1]),2);
        tracep->fullQData(oldp+178,(vlSelf->top__DOT__src2_sel_choice__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+180,(vlSelf->top__DOT__src2_sel_choice__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+182,(vlSelf->top__DOT__src2_sel_choice__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+184,(vlSelf->top__DOT__src2_sel_choice__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+185,((1U & (IData)(vlSelf->top__DOT__op))));
        tracep->fullBit(oldp+186,((1U & ((IData)(vlSelf->top__DOT__op) 
                                         >> 1U))));
        tracep->fullBit(oldp+187,((1U & ((IData)(vlSelf->top__DOT__op) 
                                         >> 2U))));
        tracep->fullBit(oldp+188,((1U & ((IData)(vlSelf->top__DOT__op) 
                                         >> 3U))));
        tracep->fullBit(oldp+189,((1U & ((IData)(vlSelf->top__DOT__op) 
                                         >> 4U))));
        tracep->fullBit(oldp+190,((1U & ((IData)(vlSelf->top__DOT__op) 
                                         >> 5U))));
        tracep->fullBit(oldp+191,((1U & ((IData)(vlSelf->top__DOT__op) 
                                         >> 6U))));
        tracep->fullBit(oldp+192,((1U & ((IData)(vlSelf->top__DOT__op) 
                                         >> 7U))));
        tracep->fullBit(oldp+193,((1U & ((IData)(vlSelf->top__DOT__op) 
                                         >> 8U))));
        tracep->fullBit(oldp+194,((1U & ((IData)(vlSelf->top__DOT__op) 
                                         >> 9U))));
        tracep->fullBit(oldp+195,((1U & ((IData)(vlSelf->top__DOT__op) 
                                         >> 0xaU))));
        tracep->fullBit(oldp+196,((1U & ((IData)(vlSelf->top__DOT__op) 
                                         >> 0xbU))));
        tracep->fullQData(oldp+197,((QData)((IData)(
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
        VL_EXTEND_WQ(65,64, __Vtemp138, vlSelf->top__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp139, vlSelf->top__DOT__alu__DOT__data_b);
        VL_ADD_W(3, __Vtemp140, __Vtemp138, __Vtemp139);
        VL_EXTEND_WI(65,1, __Vtemp141, (IData)(vlSelf->top__DOT__alu__DOT__data_cin));
        VL_ADD_W(3, __Vtemp142, __Vtemp140, __Vtemp141);
        tracep->fullQData(oldp+199,((QData)((IData)(
                                                    (1U 
                                                     & (~ 
                                                        (1U 
                                                         & __Vtemp142[2U])))))),64);
        tracep->fullQData(oldp+201,((vlSelf->top__DOT__src1 
                                     & vlSelf->top__DOT__src2)),64);
        tracep->fullQData(oldp+203,((vlSelf->top__DOT__src1 
                                     | vlSelf->top__DOT__src2)),64);
        tracep->fullQData(oldp+205,((vlSelf->top__DOT__src1 
                                     ^ vlSelf->top__DOT__src2)),64);
        tracep->fullQData(oldp+207,((vlSelf->top__DOT__src1 
                                     << (0x3fU & (IData)(vlSelf->top__DOT__src2)))),64);
        tracep->fullQData(oldp+209,((vlSelf->top__DOT__src1 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__src2)))),64);
        tracep->fullQData(oldp+211,((vlSelf->top__DOT__src1 
                                     >> (0x3fU & (IData)(vlSelf->top__DOT__src2)))),64);
        tracep->fullQData(oldp+213,((4ULL + vlSelf->top__DOT__src1)),64);
        tracep->fullQData(oldp+215,(vlSelf->top__DOT__alu__DOT__data_b),64);
        tracep->fullBit(oldp+217,(vlSelf->top__DOT__alu__DOT__data_cin));
        VL_EXTEND_WQ(65,64, __Vtemp145, vlSelf->top__DOT__src1);
        VL_EXTEND_WQ(65,64, __Vtemp146, vlSelf->top__DOT__alu__DOT__data_b);
        VL_ADD_W(3, __Vtemp147, __Vtemp145, __Vtemp146);
        VL_EXTEND_WI(65,1, __Vtemp148, (IData)(vlSelf->top__DOT__alu__DOT__data_cin));
        VL_ADD_W(3, __Vtemp149, __Vtemp147, __Vtemp148);
        tracep->fullBit(oldp+218,((1U & __Vtemp149[2U])));
        tracep->fullWData(oldp+219,(vlSelf->top__DOT____Vcellinp__data_rd_choice____pinNumber3),132);
        tracep->fullWData(oldp+224,(vlSelf->top__DOT__data_rd_choice__DOT__i0__DOT__pair_list[0]),66);
        tracep->fullWData(oldp+227,(vlSelf->top__DOT__data_rd_choice__DOT__i0__DOT__pair_list[1]),66);
        tracep->fullCData(oldp+230,(vlSelf->top__DOT__data_rd_choice__DOT__i0__DOT__key_list[0]),2);
        tracep->fullCData(oldp+231,(vlSelf->top__DOT__data_rd_choice__DOT__i0__DOT__key_list[1]),2);
        tracep->fullQData(oldp+232,(vlSelf->top__DOT__data_rd_choice__DOT__i0__DOT__data_list[0]),64);
        tracep->fullQData(oldp+234,(vlSelf->top__DOT__data_rd_choice__DOT__i0__DOT__data_list[1]),64);
        tracep->fullQData(oldp+236,(vlSelf->top__DOT__data_rd_choice__DOT__i0__DOT__lut_out),64);
        tracep->fullBit(oldp+238,(vlSelf->top__DOT__data_rd_choice__DOT__i0__DOT__hit));
        tracep->fullBit(oldp+239,(vlSelf->clk));
        tracep->fullBit(oldp+240,(vlSelf->rst));
        tracep->fullQData(oldp+241,(vlSelf->data_rd),64);
        tracep->fullIData(oldp+243,(2U),32);
        tracep->fullIData(oldp+244,(0x40U),32);
        tracep->fullIData(oldp+245,(0U),32);
        tracep->fullQData(oldp+246,(0ULL),64);
        tracep->fullIData(oldp+248,(0x42U),32);
        tracep->fullIData(oldp+249,(2U),32);
    }
}
