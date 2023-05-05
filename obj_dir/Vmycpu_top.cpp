// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmycpu_top.h"
#include "Vmycpu_top__Syms.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vmycpu_top::Vmycpu_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : vlSymsp{new Vmycpu_top__Syms(_vcontextp__, _vcname__, this)}
    , aclk{vlSymsp->TOP.aclk}
    , aresetn{vlSymsp->TOP.aresetn}
    , ext_int{vlSymsp->TOP.ext_int}
    , arid{vlSymsp->TOP.arid}
    , araddr{vlSymsp->TOP.araddr}
    , arlen{vlSymsp->TOP.arlen}
    , arsize{vlSymsp->TOP.arsize}
    , arburst{vlSymsp->TOP.arburst}
    , arlock{vlSymsp->TOP.arlock}
    , arcache{vlSymsp->TOP.arcache}
    , arprot{vlSymsp->TOP.arprot}
    , arvalid{vlSymsp->TOP.arvalid}
    , arready{vlSymsp->TOP.arready}
    , rid{vlSymsp->TOP.rid}
    , rdata{vlSymsp->TOP.rdata}
    , rresp{vlSymsp->TOP.rresp}
    , rlast{vlSymsp->TOP.rlast}
    , rvalid{vlSymsp->TOP.rvalid}
    , rready{vlSymsp->TOP.rready}
    , awid{vlSymsp->TOP.awid}
    , awaddr{vlSymsp->TOP.awaddr}
    , awlen{vlSymsp->TOP.awlen}
    , awsize{vlSymsp->TOP.awsize}
    , awburst{vlSymsp->TOP.awburst}
    , awlock{vlSymsp->TOP.awlock}
    , awcache{vlSymsp->TOP.awcache}
    , awprot{vlSymsp->TOP.awprot}
    , awvalid{vlSymsp->TOP.awvalid}
    , awready{vlSymsp->TOP.awready}
    , wid{vlSymsp->TOP.wid}
    , wdata{vlSymsp->TOP.wdata}
    , wstrb{vlSymsp->TOP.wstrb}
    , wlast{vlSymsp->TOP.wlast}
    , wvalid{vlSymsp->TOP.wvalid}
    , wready{vlSymsp->TOP.wready}
    , bid{vlSymsp->TOP.bid}
    , bresp{vlSymsp->TOP.bresp}
    , bvalid{vlSymsp->TOP.bvalid}
    , bready{vlSymsp->TOP.bready}
    , debug_wb_pc{vlSymsp->TOP.debug_wb_pc}
    , debug_wb_rf_wen{vlSymsp->TOP.debug_wb_rf_wen}
    , debug_wb_rf_wnum{vlSymsp->TOP.debug_wb_rf_wnum}
    , debug_wb_rf_wdata{vlSymsp->TOP.debug_wb_rf_wdata}
    , debug_cp0_count{vlSymsp->TOP.debug_cp0_count}
    , debug_cp0_random{vlSymsp->TOP.debug_cp0_random}
    , debug_cp0_cause{vlSymsp->TOP.debug_cp0_cause}
    , debug_int{vlSymsp->TOP.debug_int}
    , debug_commit{vlSymsp->TOP.debug_commit}
    , rootp{&(vlSymsp->TOP)}
{
}

Vmycpu_top::Vmycpu_top(const char* _vcname__)
    : Vmycpu_top(nullptr, _vcname__)
{
}

//============================================================
// Destructor

Vmycpu_top::~Vmycpu_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation loop

void Vmycpu_top___024root___eval_initial(Vmycpu_top___024root* vlSelf);
void Vmycpu_top___024root___eval_settle(Vmycpu_top___024root* vlSelf);
void Vmycpu_top___024root___eval(Vmycpu_top___024root* vlSelf);
QData Vmycpu_top___024root___change_request(Vmycpu_top___024root* vlSelf);
#ifdef VL_DEBUG
void Vmycpu_top___024root___eval_debug_assertions(Vmycpu_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vmycpu_top___024root___final(Vmycpu_top___024root* vlSelf);

static void _eval_initial_loop(Vmycpu_top__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    Vmycpu_top___024root___eval_initial(&(vlSymsp->TOP));
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial loop\n"););
        Vmycpu_top___024root___eval_settle(&(vlSymsp->TOP));
        Vmycpu_top___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vmycpu_top___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("../mycpu/../mycpu/mycpu_top.sv", 1, "",
                "Verilated model didn't DC converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vmycpu_top___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

void Vmycpu_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmycpu_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmycpu_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    vlSymsp->__Vm_activity = true;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        Vmycpu_top___024root___eval(&(vlSymsp->TOP));
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = Vmycpu_top___024root___change_request(&(vlSymsp->TOP));
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("../mycpu/../mycpu/mycpu_top.sv", 1, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
        } else {
            __Vchange = Vmycpu_top___024root___change_request(&(vlSymsp->TOP));
        }
    } while (VL_UNLIKELY(__Vchange));
}

//============================================================
// Invoke final blocks

void Vmycpu_top::final() {
    Vmycpu_top___024root___final(&(vlSymsp->TOP));
}

//============================================================
// Utilities

VerilatedContext* Vmycpu_top::contextp() const {
    return vlSymsp->_vm_contextp__;
}

const char* Vmycpu_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Trace configuration

void Vmycpu_top___024root__traceInitTop(Vmycpu_top___024root* vlSelf, VerilatedVcd* tracep);

static void traceInit(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmycpu_top___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmycpu_top___024root*>(voidSelf);
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->module(vlSymsp->name());
    tracep->scopeEscape(' ');
    Vmycpu_top___024root__traceInitTop(vlSelf, tracep);
    tracep->scopeEscape('.');
}

void Vmycpu_top___024root__traceRegister(Vmycpu_top___024root* vlSelf, VerilatedVcd* tracep);

void Vmycpu_top::trace(VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addInitCb(&traceInit, &(vlSymsp->TOP));
    Vmycpu_top___024root__traceRegister(&(vlSymsp->TOP), tfp->spTrace());
}
