// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "Vmycpu_top___024unit.h"
#include "Vmycpu_top__Syms.h"

//==========


void Vmycpu_top___024unit___ctor_var_reset(Vmycpu_top___024unit* vlSelf);

Vmycpu_top___024unit::Vmycpu_top___024unit(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vmycpu_top___024unit___ctor_var_reset(this);
}

void Vmycpu_top___024unit::__Vconfigure(Vmycpu_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vmycpu_top___024unit::~Vmycpu_top___024unit() {
}

void Vmycpu_top___024unit___ctor_var_reset(Vmycpu_top___024unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vmycpu_top___024unit___ctor_var_reset\n"); );
}
