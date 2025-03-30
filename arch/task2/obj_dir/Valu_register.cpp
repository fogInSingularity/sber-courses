// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Valu_register__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Valu_register::Valu_register(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Valu_register__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Valu_register::Valu_register(const char* _vcname__)
    : Valu_register(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Valu_register::~Valu_register() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Valu_register___024root___eval_debug_assertions(Valu_register___024root* vlSelf);
#endif  // VL_DEBUG
void Valu_register___024root___eval_static(Valu_register___024root* vlSelf);
void Valu_register___024root___eval_initial(Valu_register___024root* vlSelf);
void Valu_register___024root___eval_settle(Valu_register___024root* vlSelf);
void Valu_register___024root___eval(Valu_register___024root* vlSelf);

void Valu_register::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Valu_register::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Valu_register___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Valu_register___024root___eval_static(&(vlSymsp->TOP));
        Valu_register___024root___eval_initial(&(vlSymsp->TOP));
        Valu_register___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Valu_register___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

void Valu_register::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Valu_register::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Valu_register::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty(); }

uint64_t Valu_register::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Valu_register::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Valu_register___024root___eval_final(Valu_register___024root* vlSelf);

VL_ATTR_COLD void Valu_register::final() {
    Valu_register___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Valu_register::hierName() const { return vlSymsp->name(); }
const char* Valu_register::modelName() const { return "Valu_register"; }
unsigned Valu_register::threads() const { return 1; }
void Valu_register::prepareClone() const { contextp()->prepareClone(); }
void Valu_register::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Valu_register::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Valu_register___024root__trace_decl_types(VerilatedFst* tracep);

void Valu_register___024root__trace_init_top(Valu_register___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Valu_register___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu_register___024root*>(voidSelf);
    Valu_register__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Valu_register___024root__trace_decl_types(tracep);
    Valu_register___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Valu_register___024root__trace_register(Valu_register___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Valu_register::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedFstC* const stfp = dynamic_cast<VerilatedFstC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Valu_register::trace()' called on non-VerilatedFstC object;"
            " use --trace-fst with VerilatedFst object, and --trace with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Valu_register___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
