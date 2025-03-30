// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Valu_register.h for the primary calling header

#include "Valu_register__pch.h"
#include "Valu_register__Syms.h"
#include "Valu_register___024root.h"

void Valu_register___024root___ctor_var_reset(Valu_register___024root* vlSelf);

Valu_register___024root::Valu_register___024root(Valu_register__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Valu_register___024root___ctor_var_reset(this);
}

void Valu_register___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Valu_register___024root::~Valu_register___024root() {
}
