// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_register.h for the primary calling header

#include "Valu_register__pch.h"
#include "Valu_register__Syms.h"
#include "Valu_register___024root.h"

VL_INLINE_OPT VlCoroutine Valu_register___024root___eval_initial__TOP__Vtiming__1(Valu_register___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_register___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        vlSymsp->_traceDumpOpen();
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "tb/alu_register_tb.v", 
                                             25);
        vlSymsp->_traceDumpOpen();
        vlSelfRef.__VdlyVal__alu_register_tb__DOT__clk_i__v0 
            = (1U & (~ (IData)(vlSelfRef.alu_register_tb__DOT__clk_i)));
        vlSelfRef.__VdlySet__alu_register_tb__DOT__clk_i__v0 = 1U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_register___024root___dump_triggers__act(Valu_register___024root* vlSelf);
#endif  // VL_DEBUG

void Valu_register___024root___eval_triggers__act(Valu_register___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_register___024root___eval_triggers__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((~ (IData)(vlSelfRef.alu_register_tb__DOT__arstn_i)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__alu_register_tb__DOT__arstn_i__0)));
    vlSelfRef.__VactTriggered.set(1U, ((IData)(vlSelfRef.alu_register_tb__DOT__clk_i) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__alu_register_tb__DOT__clk_i__0))));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__VactTriggered.set(3U, ((~ (IData)(vlSelfRef.alu_register_tb__DOT__clk_i)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__alu_register_tb__DOT__clk_i__0)));
    vlSelfRef.__Vtrigprevexpr___TOP__alu_register_tb__DOT__arstn_i__0 
        = vlSelfRef.alu_register_tb__DOT__arstn_i;
    vlSelfRef.__Vtrigprevexpr___TOP__alu_register_tb__DOT__clk_i__0 
        = vlSelfRef.alu_register_tb__DOT__clk_i;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Valu_register___024root___dump_triggers__act(vlSelf);
    }
#endif
}
