// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_register.h for the primary calling header

#include "Valu_register__pch.h"
#include "Valu_register__Syms.h"
#include "Valu_register___024root.h"

VL_ATTR_COLD void Valu_register___024root___eval_initial__TOP(Valu_register___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_register___024root___eval_initial__TOP\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile(std::string{"dump.svc"});
}
