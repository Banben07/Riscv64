// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vsing_top.h"
#include "Vsing_top__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vsing_top::Vsing_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vsing_top__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , data_rd{vlSymsp->TOP.data_rd}
    , rootp{&(vlSymsp->TOP)}
{
}

Vsing_top::Vsing_top(const char* _vcname__)
    : Vsing_top(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vsing_top::~Vsing_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vsing_top___024root___eval_initial(Vsing_top___024root* vlSelf);
void Vsing_top___024root___eval_settle(Vsing_top___024root* vlSelf);
void Vsing_top___024root___eval(Vsing_top___024root* vlSelf);
QData Vsing_top___024root___change_request(Vsing_top___024root* vlSelf);
#ifdef VL_DEBUG
void Vsing_top___024root___eval_debug_assertions(Vsing_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vsing_top___024root___final(Vsing_top___024root* vlSelf);

static void _eval_initial_loop(Vsing_top__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vsing_top___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vsing_top___024root___eval_settle(&(vlSymsp->TOP));
        Vsing_top___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vsing_top___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vsrc/top.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vsing_top___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vsing_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vsing_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vsing_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vsing_top___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vsing_top___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vsrc/top.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vsing_top___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vsing_top::final() {
    Vsing_top___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vsing_top::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vsing_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vsing_top___024root__traceInitTop(Vsing_top___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vsing_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vsing_top___024root*>(voidSelf);
    Vsing_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vsing_top___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vsing_top___024root__traceRegister(Vsing_top___024root* vlSelf, VerilatedVcd* tracep);

void Vsing_top::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vsing_top___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
