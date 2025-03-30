// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Valu_register.h for the primary calling header

#ifndef VERILATED_VALU_REGISTER___024ROOT_H_
#define VERILATED_VALU_REGISTER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Valu_register__Syms;

class alignas(VL_CACHE_LINE_BYTES) Valu_register___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ alu_register_tb__DOT__clk_i;
    CData/*0:0*/ alu_register_tb__DOT__arstn_i;
    CData/*7:0*/ alu_register_tb__DOT__first_i;
    CData/*7:0*/ alu_register_tb__DOT__second_i;
    CData/*2:0*/ alu_register_tb__DOT__opcode_i;
    CData/*7:0*/ alu_register_tb__DOT__DUT__DOT__res_reg;
    CData/*0:0*/ __VdlyVal__alu_register_tb__DOT__clk_i__v0;
    CData/*0:0*/ __VdlySet__alu_register_tb__DOT__clk_i__v0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__alu_register_tb__DOT__arstn_i__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__alu_register_tb__DOT__clk_i__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h633cef3d__0;
    VlTriggerScheduler __VtrigSched_h633cef7e__0;
    VlTriggerVec<4> __VactTriggered;
    VlTriggerVec<4> __VnbaTriggered;

    // INTERNAL VARIABLES
    Valu_register__Syms* const vlSymsp;

    // CONSTRUCTORS
    Valu_register___024root(Valu_register__Syms* symsp, const char* v__name);
    ~Valu_register___024root();
    VL_UNCOPYABLE(Valu_register___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
