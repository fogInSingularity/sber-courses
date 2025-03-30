// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Valu_register__Syms.h"


VL_ATTR_COLD void Valu_register___024root__trace_init_sub__TOP__0(Valu_register___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_register___024root__trace_init_sub__TOP__0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("alu_register_tb", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+8,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+6,0,"clk_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"arstn_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"first_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"second_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+4,0,"opcode_i",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+7,0,"result_o",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->pushPrefix("DUT", VerilatedTracePrefixType::SCOPE_MODULE);
    tracep->declBus(c+8,0,"WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+6,0,"clk_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+1,0,"arstn_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+2,0,"first_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+3,0,"second_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+4,0,"opcode_i",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+7,0,"result_o",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+7,0,"res_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->declBus(c+5,0,"comb_res",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 7,0);
    tracep->popPrefix();
    tracep->popPrefix();
}

VL_ATTR_COLD void Valu_register___024root__trace_init_top(Valu_register___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_register___024root__trace_init_top\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Valu_register___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Valu_register___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp);
VL_ATTR_COLD void Valu_register___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Valu_register___024root__trace_chg_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Valu_register___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Valu_register___024root__trace_register(Valu_register___024root* vlSelf, VerilatedFst* tracep) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_register___024root__trace_register\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Valu_register___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&Valu_register___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&Valu_register___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&Valu_register___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Valu_register___024root__trace_const_0_sub_0(Valu_register___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Valu_register___024root__trace_const_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_register___024root__trace_const_0\n"); );
    // Init
    Valu_register___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu_register___024root*>(voidSelf);
    Valu_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Valu_register___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Valu_register___024root__trace_const_0_sub_0(Valu_register___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_register___024root__trace_const_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+8,(8U),32);
}

VL_ATTR_COLD void Valu_register___024root__trace_full_0_sub_0(Valu_register___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Valu_register___024root__trace_full_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_register___024root__trace_full_0\n"); );
    // Init
    Valu_register___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu_register___024root*>(voidSelf);
    Valu_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Valu_register___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Valu_register___024root__trace_full_0_sub_0(Valu_register___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    (void)vlSelf;  // Prevent unused variable warning
    Valu_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu_register___024root__trace_full_0_sub_0\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelfRef.alu_register_tb__DOT__arstn_i));
    bufp->fullCData(oldp+2,(vlSelfRef.alu_register_tb__DOT__first_i),8);
    bufp->fullCData(oldp+3,(vlSelfRef.alu_register_tb__DOT__second_i),8);
    bufp->fullCData(oldp+4,(vlSelfRef.alu_register_tb__DOT__opcode_i),3);
    bufp->fullCData(oldp+5,((0xffU & ((4U & (IData)(vlSelfRef.alu_register_tb__DOT__opcode_i))
                                       ? ((2U & (IData)(vlSelfRef.alu_register_tb__DOT__opcode_i))
                                           ? ((1U & (IData)(vlSelfRef.alu_register_tb__DOT__opcode_i))
                                               ? VL_SHIFTR_III(8,8,8, (IData)(vlSelfRef.alu_register_tb__DOT__first_i), (IData)(vlSelfRef.alu_register_tb__DOT__second_i))
                                               : (((IData)(vlSelfRef.alu_register_tb__DOT__first_i) 
                                                   == (IData)(vlSelfRef.alu_register_tb__DOT__second_i))
                                                   ? 0xffU
                                                   : 0U))
                                           : ((1U & (IData)(vlSelfRef.alu_register_tb__DOT__opcode_i))
                                               ? (~ 
                                                  ((IData)(vlSelfRef.alu_register_tb__DOT__first_i) 
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
                                               : (~ 
                                                  ((IData)(vlSelfRef.alu_register_tb__DOT__first_i) 
                                                   | (IData)(vlSelfRef.alu_register_tb__DOT__second_i)))))))),8);
    bufp->fullBit(oldp+6,(vlSelfRef.alu_register_tb__DOT__clk_i));
    bufp->fullCData(oldp+7,(vlSelfRef.alu_register_tb__DOT__DUT__DOT__res_reg),8);
}
