// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Valu_register__Syms.h"


void Valu_register___024root__trace_chg_0_sub_0(Valu_register___024root* vlSelf, VerilatedFst::Buffer* bufp);

void Valu_register___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_register___024root__trace_chg_0\n"); );
    // Init
    Valu_register___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu_register___024root*>(voidSelf);
    Valu_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Valu_register___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Valu_register___024root__trace_chg_0_sub_0(Valu_register___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_register___024root__trace_chg_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U] 
                     | vlSelfRef.__Vm_traceActivity
                     [2U]))) {
        bufp->chgBit(oldp+0,(vlSelfRef.alu_register_tb__DOT__arstn_i));
        bufp->chgCData(oldp+1,(vlSelfRef.alu_register_tb__DOT__first_i),8);
        bufp->chgCData(oldp+2,(vlSelfRef.alu_register_tb__DOT__second_i),8);
        bufp->chgCData(oldp+3,(vlSelfRef.alu_register_tb__DOT__opcode_i),3);
        bufp->chgCData(oldp+4,((0xffU & ((4U & (IData)(vlSelfRef.alu_register_tb__DOT__opcode_i))
                                          ? ((2U & (IData)(vlSelfRef.alu_register_tb__DOT__opcode_i))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.alu_register_tb__DOT__opcode_i))
                                                  ? 
                                                 VL_SHIFTR_III(8,8,8, (IData)(vlSelfRef.alu_register_tb__DOT__first_i), (IData)(vlSelfRef.alu_register_tb__DOT__second_i))
                                                  : 
                                                 (((IData)(vlSelfRef.alu_register_tb__DOT__first_i) 
                                                   == (IData)(vlSelfRef.alu_register_tb__DOT__second_i))
                                                   ? 0xffU
                                                   : 0U))
                                              : ((1U 
                                                  & (IData)(vlSelfRef.alu_register_tb__DOT__opcode_i))
                                                  ? 
                                                 (~ 
                                                  ((IData)(vlSelfRef.alu_register_tb__DOT__first_i) 
                                                   ^ (IData)(vlSelfRef.alu_register_tb__DOT__second_i)))
                                                  : 
                                                 (~ (IData)(vlSelfRef.alu_register_tb__DOT__second_i))))
                                          : ((2U & (IData)(vlSelfRef.alu_register_tb__DOT__opcode_i))
                                              ? ((1U 
                                                  & (IData)(vlSelfRef.alu_register_tb__DOT__opcode_i))
                                                  ? 
                                                 ((IData)(vlSelfRef.alu_register_tb__DOT__first_i) 
                                                  + (IData)(vlSelfRef.alu_register_tb__DOT__second_i))
                                                  : 
                                                 ((IData)(vlSelfRef.alu_register_tb__DOT__first_i) 
                                                  + (IData)(vlSelfRef.alu_register_tb__DOT__second_i)))
                                              : ((1U 
                                                  & (IData)(vlSelfRef.alu_register_tb__DOT__opcode_i))
                                                  ? 
                                                 ((IData)(vlSelfRef.alu_register_tb__DOT__first_i) 
                                                  & (IData)(vlSelfRef.alu_register_tb__DOT__second_i))
                                                  : 
                                                 (~ 
                                                  ((IData)(vlSelfRef.alu_register_tb__DOT__first_i) 
                                                   | (IData)(vlSelfRef.alu_register_tb__DOT__second_i)))))))),8);
    }
    bufp->chgBit(oldp+5,(vlSelfRef.alu_register_tb__DOT__clk_i));
    bufp->chgCData(oldp+6,(vlSelfRef.alu_register_tb__DOT__DUT__DOT__res_reg),8);
}

void Valu_register___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_register___024root__trace_cleanup\n"); );
    // Init
    Valu_register___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu_register___024root*>(voidSelf);
    Valu_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
