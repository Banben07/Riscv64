// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vconfig.h"
#include "Vconfig__Syms.h"
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"

//============================================================
// Constructors

Vconfig::Vconfig(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vconfig__Syms(_vcontextp__, _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , rst{vlSymsp->TOP.rst}
    , data_rd{vlSymsp->TOP.data_rd}
    , rootp{&(vlSymsp->TOP)}
{
}

Vconfig::Vconfig(const char* _vcname__)
    : Vconfig(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vconfig::~Vconfig() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vconfig___024root___eval_initial(Vconfig___024root* vlSelf);
void Vconfig___024root___eval_settle(Vconfig___024root* vlSelf);
void Vconfig___024root___eval(Vconfig___024root* vlSelf);
QData Vconfig___024root___change_request(Vconfig___024root* vlSelf);
#ifdef VL_DEBUG
void Vconfig___024root___eval_debug_assertions(Vconfig___024root* vlSelf);
#endif  // VL_DEBUG
void Vconfig___024root___final(Vconfig___024root* vlSelf);

static void _eval_initial_loop(Vconfig__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vconfig___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vconfig___024root___eval_settle(&(vlSymsp->TOP));
        Vconfig___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vconfig___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vsrc/top.v", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vconfig___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vconfig::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vconfig::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vconfig___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vconfig___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vconfig___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("vsrc/top.v", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vconfig___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vconfig::final() {
    Vconfig___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vconfig::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vconfig::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vconfig___024root__traceInitTop(Vconfig___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vconfig___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vconfig___024root*>(voidSelf);
    Vconfig__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vconfig___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vconfig___024root__traceRegister(Vconfig___024root* vlSelf, VerilatedVcd* tracep);

void Vconfig::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vconfig___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
