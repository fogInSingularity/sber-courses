// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_register.h for the primary calling header

#include "Valu_register__pch.h"
#include "Valu_register___024root.h"

VL_ATTR_COLD void Valu_register___024root___eval_initial__TOP(Valu_register___024root* vlSelf);
VlCoroutine Valu_register___024root___eval_initial__TOP__Vtiming__0(Valu_register___024root* vlSelf);
VlCoroutine Valu_register___024root___eval_initial__TOP__Vtiming__1(Valu_register___024root* vlSelf);

void Valu_register___024root___eval_initial(Valu_register___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_register___024root___eval_initial\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Valu_register___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Valu_register___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Valu_register___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__alu_register_tb__DOT__arstn_i__0 
        = vlSelfRef.alu_register_tb__DOT__arstn_i;
    vlSelfRef.__Vtrigprevexpr___TOP__alu_register_tb__DOT__clk_i__0 
        = vlSelfRef.alu_register_tb__DOT__clk_i;
}

VL_INLINE_OPT VlCoroutine Valu_register___024root___eval_initial__TOP__Vtiming__0(Valu_register___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_register___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.alu_register_tb__DOT__clk_i = 1U;
    vlSelfRef.alu_register_tb__DOT__arstn_i = 1U;
    vlSelfRef.alu_register_tb__DOT__first_i = 0U;
    vlSelfRef.alu_register_tb__DOT__second_i = 0U;
    vlSelfRef.alu_register_tb__DOT__opcode_i = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/alu_register_tb.v", 
                                         37);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_register_tb__DOT__arstn_i = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x2710ULL, 
                                         nullptr, "tb/alu_register_tb.v", 
                                         39);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_register_tb__DOT__arstn_i = 1U;
    co_await vlSelfRef.__VtrigSched_h633cef3d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge alu_register_tb.clk_i)", 
                                                         "tb/alu_register_tb.v", 
                                                         42);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_register_tb__DOT__first_i = 0xffU;
    vlSelfRef.alu_register_tb__DOT__second_i = 0U;
    vlSelfRef.alu_register_tb__DOT__opcode_i = 0U;
    co_await vlSelfRef.__VtrigSched_h633cef7e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge alu_register_tb.clk_i)", 
                                                         "tb/alu_register_tb.v", 
                                                         44);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_register_tb__DOT__first_i = 0xaaU;
    vlSelfRef.alu_register_tb__DOT__second_i = 0x55U;
    vlSelfRef.alu_register_tb__DOT__opcode_i = 1U;
    co_await vlSelfRef.__VtrigSched_h633cef7e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge alu_register_tb.clk_i)", 
                                                         "tb/alu_register_tb.v", 
                                                         49);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_register_tb__DOT__first_i = 1U;
    vlSelfRef.alu_register_tb__DOT__second_i = 2U;
    vlSelfRef.alu_register_tb__DOT__opcode_i = 2U;
    co_await vlSelfRef.__VtrigSched_h633cef7e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge alu_register_tb.clk_i)", 
                                                         "tb/alu_register_tb.v", 
                                                         54);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_register_tb__DOT__first_i = 0xffU;
    vlSelfRef.alu_register_tb__DOT__second_i = 1U;
    vlSelfRef.alu_register_tb__DOT__opcode_i = 3U;
    co_await vlSelfRef.__VtrigSched_h633cef7e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge alu_register_tb.clk_i)", 
                                                         "tb/alu_register_tb.v", 
                                                         59);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_register_tb__DOT__second_i = 0xaaU;
    vlSelfRef.alu_register_tb__DOT__opcode_i = 4U;
    co_await vlSelfRef.__VtrigSched_h633cef7e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge alu_register_tb.clk_i)", 
                                                         "tb/alu_register_tb.v", 
                                                         64);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_register_tb__DOT__first_i = 0xaaU;
    vlSelfRef.alu_register_tb__DOT__second_i = 0x55U;
    vlSelfRef.alu_register_tb__DOT__opcode_i = 5U;
    co_await vlSelfRef.__VtrigSched_h633cef7e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge alu_register_tb.clk_i)", 
                                                         "tb/alu_register_tb.v", 
                                                         69);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_register_tb__DOT__first_i = 0x12U;
    vlSelfRef.alu_register_tb__DOT__second_i = 0x12U;
    vlSelfRef.alu_register_tb__DOT__opcode_i = 6U;
    co_await vlSelfRef.__VtrigSched_h633cef7e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge alu_register_tb.clk_i)", 
                                                         "tb/alu_register_tb.v", 
                                                         74);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_register_tb__DOT__first_i = 0x12U;
    vlSelfRef.alu_register_tb__DOT__second_i = 0x34U;
    vlSelfRef.alu_register_tb__DOT__opcode_i = 6U;
    co_await vlSelfRef.__VtrigSched_h633cef7e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge alu_register_tb.clk_i)", 
                                                         "tb/alu_register_tb.v", 
                                                         79);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_register_tb__DOT__first_i = 0xffU;
    vlSelfRef.alu_register_tb__DOT__second_i = 3U;
    vlSelfRef.alu_register_tb__DOT__opcode_i = 7U;
    co_await vlSelfRef.__VtrigSched_h633cef7e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge alu_register_tb.clk_i)", 
                                                         "tb/alu_register_tb.v", 
                                                         84);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_register_tb__DOT__first_i = 0xffU;
    vlSelfRef.alu_register_tb__DOT__second_i = 8U;
    vlSelfRef.alu_register_tb__DOT__opcode_i = 7U;
    co_await vlSelfRef.__VtrigSched_h633cef7e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge alu_register_tb.clk_i)", 
                                                         "tb/alu_register_tb.v", 
                                                         89);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_register_tb__DOT__first_i = 0xffU;
    vlSelfRef.alu_register_tb__DOT__second_i = 0xffU;
    vlSelfRef.alu_register_tb__DOT__opcode_i = 6U;
    co_await vlSelfRef.__VtrigSched_h633cef7e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge alu_register_tb.clk_i)", 
                                                         "tb/alu_register_tb.v", 
                                                         94);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_register_tb__DOT__arstn_i = 0U;
    co_await vlSelfRef.__VtrigSched_h633cef7e__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge alu_register_tb.clk_i)", 
                                                         "tb/alu_register_tb.v", 
                                                         99);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.alu_register_tb__DOT__arstn_i = 1U;
    co_await vlSelfRef.__VdlySched.delay(0xc350ULL, 
                                         nullptr, "tb/alu_register_tb.v", 
                                         103);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("All tests completed!\n",0);
    VL_FINISH_MT("tb/alu_register_tb.v", 105, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
}

void Valu_register___024root___eval_act(Valu_register___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_register___024root___eval_act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}

void Valu_register___024root___nba_sequent__TOP__0(Valu_register___024root* vlSelf);
void Valu_register___024root___nba_sequent__TOP__1(Valu_register___024root* vlSelf);

void Valu_register___024root___eval_nba(Valu_register___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_register___024root___eval_nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((4ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Valu_register___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Valu_register___024root___nba_sequent__TOP__1(vlSelf);
    }
}

VL_INLINE_OPT void Valu_register___024root___nba_sequent__TOP__0(Valu_register___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_register___024root___nba_sequent__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__alu_register_tb__DOT__clk_i__v0) {
        vlSelfRef.__VdlySet__alu_register_tb__DOT__clk_i__v0 = 0U;
        vlSelfRef.alu_register_tb__DOT__clk_i = vlSelfRef.__VdlyVal__alu_register_tb__DOT__clk_i__v0;
    }
}

VL_INLINE_OPT void Valu_register___024root___nba_sequent__TOP__1(Valu_register___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_register___024root___nba_sequent__TOP__1\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.alu_register_tb__DOT__DUT__DOT__res_reg 
        = ((IData)(vlSelfRef.alu_register_tb__DOT__arstn_i)
            ? (0xffU & ((4U & (IData)(vlSelfRef.alu_register_tb__DOT__opcode_i))
                         ? ((2U & (IData)(vlSelfRef.alu_register_tb__DOT__opcode_i))
                             ? ((1U & (IData)(vlSelfRef.alu_register_tb__DOT__opcode_i))
                                 ? VL_SHIFTR_III(8,8,8, (IData)(vlSelfRef.alu_register_tb__DOT__first_i), (IData)(vlSelfRef.alu_register_tb__DOT__second_i))
                                 : (((IData)(vlSelfRef.alu_register_tb__DOT__first_i) 
                                     == (IData)(vlSelfRef.alu_register_tb__DOT__second_i))
                                     ? 0xffU : 0U))
                             : ((1U & (IData)(vlSelfRef.alu_register_tb__DOT__opcode_i))
                                 ? (~ ((IData)(vlSelfRef.alu_register_tb__DOT__first_i) 
                                       ^ (IData)(vlSelfRef.alu_register_tb__DOT__second_i)))
                                 : (~ (IData)(vlSelfRef.alu_register_tb__DOT__second_i))))
                         : ((2U & (IData)(vlSelfRef.alu_register_tb__DOT__opcode_i))
                             ? ((1U & (IData)(vlSelfRef.alu_register_tb__DOT__opcode_i))
                                 ? ((IData)(vlSelfRef.alu_register_tb__DOT__first_i) 
                                    + (IData)(vlSelfRef.alu_register_tb__DOT__second_i))
                                 : ((IData)(vlSelfRef.alu_register_tb__DOT__first_i) 
                                    + (IData)(vlSelfRef.alu_register_tb__DOT__second_i)))
                             : ((1U & (IData)(vlSelfRef.alu_register_tb__DOT__opcode_i))
                                 ? ((IData)(vlSelfRef.alu_register_tb__DOT__first_i) 
                                    & (IData)(vlSelfRef.alu_register_tb__DOT__second_i))
                                 : (~ ((IData)(vlSelfRef.alu_register_tb__DOT__first_i) 
                                       | (IData)(vlSelfRef.alu_register_tb__DOT__second_i)))))))
            : 0U);
}

void Valu_register___024root___timing_resume(Valu_register___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_register___024root___timing_resume\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((8ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h633cef3d__0.resume(
                                                   "@(negedge alu_register_tb.clk_i)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h633cef7e__0.resume(
                                                   "@(posedge alu_register_tb.clk_i)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Valu_register___024root___timing_commit(Valu_register___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_register___024root___timing_commit\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (8ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h633cef3d__0.commit(
                                                   "@(negedge alu_register_tb.clk_i)");
    }
    if ((! (2ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h633cef7e__0.commit(
                                                   "@(posedge alu_register_tb.clk_i)");
    }
}

void Valu_register___024root___eval_triggers__act(Valu_register___024root* vlSelf);

bool Valu_register___024root___eval_phase__act(Valu_register___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_register___024root___eval_phase__act\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<4> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Valu_register___024root___eval_triggers__act(vlSelf);
    Valu_register___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Valu_register___024root___timing_resume(vlSelf);
        Valu_register___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Valu_register___024root___eval_phase__nba(Valu_register___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_register___024root___eval_phase__nba\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Valu_register___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_register___024root___dump_triggers__nba(Valu_register___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Valu_register___024root___dump_triggers__act(Valu_register___024root* vlSelf);
#endif  // VL_DEBUG

void Valu_register___024root___eval(Valu_register___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_register___024root___eval\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Valu_register___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/alu_register_tb.v", 3, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Valu_register___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/alu_register_tb.v", 3, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Valu_register___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Valu_register___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Valu_register___024root___eval_debug_assertions(Valu_register___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_register___024root___eval_debug_assertions\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
