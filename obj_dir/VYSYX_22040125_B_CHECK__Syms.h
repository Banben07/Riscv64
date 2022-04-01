// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VYSYX_22040125_B_CHECK__SYMS_H_
#define VERILATED_VYSYX_22040125_B_CHECK__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODEL CLASS

#include "VYSYX_22040125_B_CHECK.h"

// INCLUDE MODULE CLASSES
#include "VYSYX_22040125_B_CHECK___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class VYSYX_22040125_B_CHECK__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VYSYX_22040125_B_CHECK* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VYSYX_22040125_B_CHECK___024root TOP;

    // CONSTRUCTORS
    VYSYX_22040125_B_CHECK__Syms(VerilatedContext* contextp, const char* namep, VYSYX_22040125_B_CHECK* modelp);
    ~VYSYX_22040125_B_CHECK__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
