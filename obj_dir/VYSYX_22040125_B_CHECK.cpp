// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VYSYX_22040125_B_CHECK.h"
#include "VYSYX_22040125_B_CHECK__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

VYSYX_22040125_B_CHECK::VYSYX_22040125_B_CHECK(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new VYSYX_22040125_B_CHECK__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , data_rd{vlSymsp->TOP.data_rd}
    , rootp{&(vlSymsp->TOP)}
{
}

VYSYX_22040125_B_CHECK::VYSYX_22040125_B_CHECK(const char* _vcname__)
    : VYSYX_22040125_B_CHECK(nullptr, _vcname__)
{
}

//============================================================
// Destructor

VYSYX_22040125_B_CHECK::~VYSYX_22040125_B_CHECK() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void VYSYX_22040125_B_CHECK___024root___eval_initial(VYSYX_22040125_B_CHECK___024root* vlSelf);
void VYSYX_22040125_B_CHECK___024root___eval_settle(VYSYX_22040125_B_CHECK___024root* vlSelf);
void VYSYX_22040125_B_CHECK___024root___eval(VYSYX_22040125_B_CHECK___024root* vlSelf);
QData VYSYX_22040125_B_CHECK___024root___change_request(VYSYX_22040125_B_CHECK___024root* vlSelf);
#ifdef VL_DEBUG
void VYSYX_22040125_B_CHECK___024root___eval_debug_assertions(VYSYX_22040125_B_CHECK___024root* vlSelf);
#endif  // VL_DEBUG
void VYSYX_22040125_B_CHECK___024root___final(VYSYX_22040125_B_CHECK___024root* vlSelf);

static void _eval_initial_loop(VYSYX_22040125_B_CHECK__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    VYSYX_22040125_B_CHECK___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        VYSYX_22040125_B_CHECK___024root___eval_settle(&(vlSymsp->TOP));
        VYSYX_22040125_B_CHECK___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VYSYX_22040125_B_CHECK___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vsrc/top.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VYSYX_22040125_B_CHECK___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VYSYX_22040125_B_CHECK::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VYSYX_22040125_B_CHECK::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VYSYX_22040125_B_CHECK___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        VYSYX_22040125_B_CHECK___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = VYSYX_22040125_B_CHECK___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vsrc/top.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = VYSYX_22040125_B_CHECK___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void VYSYX_22040125_B_CHECK::final() {
    VYSYX_22040125_B_CHECK___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* VYSYX_22040125_B_CHECK::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* VYSYX_22040125_B_CHECK::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void VYSYX_22040125_B_CHECK___024root__traceInitTop(VYSYX_22040125_B_CHECK___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VYSYX_22040125_B_CHECK___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VYSYX_22040125_B_CHECK___024root*>(voidSelf);
    VYSYX_22040125_B_CHECK__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    VYSYX_22040125_B_CHECK___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void VYSYX_22040125_B_CHECK___024root__traceRegister(VYSYX_22040125_B_CHECK___024root* vlSelf, VerilatedVcd* tracep);

void VYSYX_22040125_B_CHECK::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    VYSYX_22040125_B_CHECK___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
