// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmycpu_top.h for the primary calling header

#ifndef VERILATED_VMYCPU_TOP___024UNIT_H_
#define VERILATED_VMYCPU_TOP___024UNIT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vmycpu_top__Syms;
class Vmycpu_top_VerilatedVcd;


//----------

VL_MODULE(Vmycpu_top___024unit) {
  public:

    // INTERNAL VARIABLES
    Vmycpu_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vmycpu_top___024unit);  ///< Copying not allowed
  public:
    Vmycpu_top___024unit(const char* name);
    ~Vmycpu_top___024unit();

    // INTERNAL METHODS
    void __Vconfigure(Vmycpu_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
