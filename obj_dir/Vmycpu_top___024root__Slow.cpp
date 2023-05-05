// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "Vmycpu_top___024root.h"
#include "Vmycpu_top__Syms.h"

//==========


void Vmycpu_top___024root___ctor_var_reset(Vmycpu_top___024root* vlSelf);

Vmycpu_top___024root::Vmycpu_top___024root(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vmycpu_top___024root___ctor_var_reset(this);
}

void Vmycpu_top___024root::__Vconfigure(Vmycpu_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vmycpu_top___024root::~Vmycpu_top___024root() {
}

void Vmycpu_top___024root___initial__TOP__1(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___initial__TOP__1\n"); );
    // Variables
    IData/*31:0*/ __Vilp;
    // Body
    vlSelf->awid = 0U;
    vlSelf->awburst = 1U;
    vlSelf->awlock = 0U;
    vlSelf->awcache = 0U;
    vlSelf->awprot = 0U;
    vlSelf->wid = 0U;
    vlSelf->arburst = 1U;
    vlSelf->arlock = 0U;
    vlSelf->arcache = 0U;
    vlSelf->arprot = 0U;
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x200U, vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__j)) {
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram[(0x1ffU 
                                                                                & vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__j)] = 0ULL;
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__j 
            = ((IData)(1U) + vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__j);
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_tag__DOT__ram[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_tag__DOT__j = 0x40U;
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x200U, vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__j)) {
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram[(0x1ffU 
                                                                                & vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__j)] = 0ULL;
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__j 
            = ((IData)(1U) + vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__j);
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_tag__DOT__ram[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_tag__DOT__j = 0x40U;
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__j)) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram[(0x3ffU 
                                                                                & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__j)] = 0U;
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__j 
            = ((IData)(1U) + vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__j);
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_tag__DOT__ram[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_tag__DOT__j = 0x40U;
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__j = 0U;
    while (VL_GTS_III(1,32,32, 0x400U, vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__j)) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram[(0x3ffU 
                                                                                & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__j)] = 0U;
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__j 
            = ((IData)(1U) + vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__j);
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x3fU)) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_tag__DOT__ram[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_tag__DOT__j = 0x40U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg = 0x400000U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb[7U][0U] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb[7U][1U] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb[7U][2U] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb[6U][0U] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb[6U][1U] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb[6U][2U] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb[5U][0U] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb[5U][1U] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb[5U][2U] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb[4U][0U] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb[4U][1U] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb[4U][2U] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb[3U][0U] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb[3U][1U] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb[3U][2U] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb[2U][0U] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb[2U][1U] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb[2U][2U] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb[1U][0U] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb[1U][1U] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb[1U][2U] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb[0U][0U] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb[0U][1U] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb[0U][2U] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[0x1fU] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[0x1eU] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[0x1dU] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[0x1cU] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[0x1bU] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[0x1aU] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[0x19U] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[0x18U] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[0x17U] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[0x16U] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[0x15U] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[0x14U] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[0x13U] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[0x12U] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[0x11U] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[0x10U] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[0xfU] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[0xeU] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[0xdU] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[0xcU] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[0xbU] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[0xaU] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[9U] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[8U] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[7U] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[6U] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[5U] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[4U] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[3U] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[2U] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[1U] = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[0U] = 0U;
}

void Vmycpu_top___024root___settle__TOP__2(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___settle__TOP__2\n"); );
    // Body
    vlSelf->bready = 1U;
    vlSelf->debug_cp0_count = vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_debug_cp0_count;
    vlSelf->debug_cp0_random = vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_debug_cp0_random;
    vlSelf->debug_cp0_cause = vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_debug_cp0_cause;
    vlSelf->debug_int = vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_debug_int;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__fifo_empty 
        = (0U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__data_count));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__master_asciiW 
        = ((vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst 
            >> 0x1fU) ? ((0x40000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                          ? 0x4e2d52ULL : ((0x20000000U 
                                            & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                            ? ((0x10000000U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                                ? 0x4e2d52ULL
                                                : (
                                                   (0x8000000U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                                    ? 
                                                   ((0x4000000U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                                     ? 0x5357ULL
                                                     : 0x4e2d52ULL)
                                                    : 
                                                   ((0x4000000U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                                     ? 0x5348ULL
                                                     : 0x5342ULL)))
                                            : ((0x10000000U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                                ? (
                                                   (0x8000000U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                                    ? 0x4e2d52ULL
                                                    : 
                                                   ((0x4000000U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                                     ? 0x4c4855ULL
                                                     : 0x4c4255ULL))
                                                : (
                                                   (0x8000000U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                                    ? 
                                                   ((0x4000000U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                                     ? 0x4c57ULL
                                                     : 0x4e2d52ULL)
                                                    : 
                                                   ((0x4000000U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                                     ? 0x4c48ULL
                                                     : 0x4c42ULL)))))
            : ((0x40000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                ? ((0x20000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                    ? 0x4e2d52ULL : ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                      ? 0x4e2d52ULL
                                      : ((0x8000000U 
                                          & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                          ? 0x4e2d52ULL
                                          : ((0x4000000U 
                                              & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                              ? 0x4e2d52ULL
                                              : ((0x42000018U 
                                                  == vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                                  ? 0x45524554ULL
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst 
                                                       >> 0x15U)))
                                                   ? 0x4d544330ULL
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst 
                                                        >> 0x15U)))
                                                    ? 0x4d464330ULL
                                                    : 0x434f5030ULL)))))))
                : ((0x20000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                    ? ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                        ? ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                            ? ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                ? 0x4c5549ULL : 0x584f5249ULL)
                            : ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                ? 0x4f5249ULL : 0x414e4449ULL))
                        : ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                            ? ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                ? 0x534c544955ULL : 0x534c5449ULL)
                            : ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                ? 0x4144444955ULL : 0x41444449ULL)))
                    : ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                        ? ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                            ? ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                ? 0x4247545aULL : 0x424c455aULL)
                            : ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                ? 0x424e45ULL : 0x424551ULL))
                        : ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                            ? ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                ? 0x4a414cULL : 0x4aULL)
                            : ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                ? ((0x100000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                    ? ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                        ? 0x20ULL : 
                                       ((0x40000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                         ? 0x20ULL : 
                                        ((0x20000U 
                                          & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                          ? 0x20ULL
                                          : ((0x10000U 
                                              & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                              ? 0x4247455a414cULL
                                              : 0x424c545a414cULL))))
                                    : ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                        ? 0x20ULL : 
                                       ((0x40000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                         ? 0x20ULL : 
                                        ((0x20000U 
                                          & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                          ? 0x20ULL
                                          : ((0x10000U 
                                              & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                              ? 0x4247455aULL
                                              : 0x424c545aULL)))))
                                : ((0x20U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                    ? ((0x10U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                        ? 0x4e2d52ULL
                                        : ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                            ? ((4U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                                ? 0x4e2d52ULL
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                                     ? 0x534c5455ULL
                                                     : 0x534c54ULL)
                                                    : 0x4e2d52ULL))
                                            : ((4U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                                ? (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                                     ? 0x4e4f52ULL
                                                     : 0x584f52ULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                                     ? 0x4f52ULL
                                                     : 0x414e44ULL))
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                                     ? 0x53554255ULL
                                                     : 0x535542ULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                                     ? 0x41444455ULL
                                                     : 0x414444ULL)))))
                                    : ((0x10U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                        ? ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                            ? ((4U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                                ? 0x4e2d52ULL
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                                     ? 0x44495655ULL
                                                     : 0x444956ULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                                     ? 0x4d554c5455ULL
                                                     : 0x4d554c54ULL)))
                                            : ((4U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                                ? 0x4e2d52ULL
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                                     ? 0x4d544c4fULL
                                                     : 0x4d464c4fULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                                     ? 0x4d544849ULL
                                                     : 0x4d464849ULL))))
                                        : ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                            ? ((4U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                                ? (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                                    ? 0x4e2d52ULL
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                                     ? 0x425245ULL
                                                     : 0x53595343ULL))
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                                    ? 0x4e2d52ULL
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                                     ? 0x4a414c52ULL
                                                     : 0x4a52ULL)))
                                            : ((4U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                                ? (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                                     ? 0x53524156ULL
                                                     : 0x53524c56ULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                                     ? 0x4e2d52ULL
                                                     : 0x534c4c56ULL))
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                                     ? 0x535241ULL
                                                     : 0x53524cULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)
                                                     ? 0x4e2d52ULL
                                                     : 0x534c4cULL))))))))))));
    if ((0U == vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst)) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__master_asciiW = 0x4e4f50ULL;
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__slave_asciiW 
        = ((vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst 
            >> 0x1fU) ? ((0x40000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                          ? 0x4e2d52ULL : ((0x20000000U 
                                            & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                            ? ((0x10000000U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                                ? 0x4e2d52ULL
                                                : (
                                                   (0x8000000U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                                    ? 
                                                   ((0x4000000U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                                     ? 0x5357ULL
                                                     : 0x4e2d52ULL)
                                                    : 
                                                   ((0x4000000U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                                     ? 0x5348ULL
                                                     : 0x5342ULL)))
                                            : ((0x10000000U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                                ? (
                                                   (0x8000000U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                                    ? 0x4e2d52ULL
                                                    : 
                                                   ((0x4000000U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                                     ? 0x4c4855ULL
                                                     : 0x4c4255ULL))
                                                : (
                                                   (0x8000000U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                                    ? 
                                                   ((0x4000000U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                                     ? 0x4c57ULL
                                                     : 0x4e2d52ULL)
                                                    : 
                                                   ((0x4000000U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                                     ? 0x4c48ULL
                                                     : 0x4c42ULL)))))
            : ((0x40000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                ? ((0x20000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                    ? 0x4e2d52ULL : ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                      ? 0x4e2d52ULL
                                      : ((0x8000000U 
                                          & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                          ? 0x4e2d52ULL
                                          : ((0x4000000U 
                                              & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                              ? 0x4e2d52ULL
                                              : ((0x42000018U 
                                                  == vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                                  ? 0x45524554ULL
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst 
                                                       >> 0x15U)))
                                                   ? 0x4d544330ULL
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst 
                                                        >> 0x15U)))
                                                    ? 0x4d464330ULL
                                                    : 0x434f5030ULL)))))))
                : ((0x20000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                    ? ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                        ? ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                            ? ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                ? 0x4c5549ULL : 0x584f5249ULL)
                            : ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                ? 0x4f5249ULL : 0x414e4449ULL))
                        : ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                            ? ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                ? 0x534c544955ULL : 0x534c5449ULL)
                            : ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                ? 0x4144444955ULL : 0x41444449ULL)))
                    : ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                        ? ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                            ? ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                ? 0x4247545aULL : 0x424c455aULL)
                            : ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                ? 0x424e45ULL : 0x424551ULL))
                        : ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                            ? ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                ? 0x4a414cULL : 0x4aULL)
                            : ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                ? ((0x100000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                    ? ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                        ? 0x20ULL : 
                                       ((0x40000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                         ? 0x20ULL : 
                                        ((0x20000U 
                                          & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                          ? 0x20ULL
                                          : ((0x10000U 
                                              & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                              ? 0x4247455a414cULL
                                              : 0x424c545a414cULL))))
                                    : ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                        ? 0x20ULL : 
                                       ((0x40000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                         ? 0x20ULL : 
                                        ((0x20000U 
                                          & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                          ? 0x20ULL
                                          : ((0x10000U 
                                              & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                              ? 0x4247455aULL
                                              : 0x424c545aULL)))))
                                : ((0x20U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                    ? ((0x10U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                        ? 0x4e2d52ULL
                                        : ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                            ? ((4U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                                ? 0x4e2d52ULL
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                                     ? 0x534c5455ULL
                                                     : 0x534c54ULL)
                                                    : 0x4e2d52ULL))
                                            : ((4U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                                ? (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                                     ? 0x4e4f52ULL
                                                     : 0x584f52ULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                                     ? 0x4f52ULL
                                                     : 0x414e44ULL))
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                                     ? 0x53554255ULL
                                                     : 0x535542ULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                                     ? 0x41444455ULL
                                                     : 0x414444ULL)))))
                                    : ((0x10U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                        ? ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                            ? ((4U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                                ? 0x4e2d52ULL
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                                     ? 0x44495655ULL
                                                     : 0x444956ULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                                     ? 0x4d554c5455ULL
                                                     : 0x4d554c54ULL)))
                                            : ((4U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                                ? 0x4e2d52ULL
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                                     ? 0x4d544c4fULL
                                                     : 0x4d464c4fULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                                     ? 0x4d544849ULL
                                                     : 0x4d464849ULL))))
                                        : ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                            ? ((4U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                                ? (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                                    ? 0x4e2d52ULL
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                                     ? 0x425245ULL
                                                     : 0x53595343ULL))
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                                    ? 0x4e2d52ULL
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                                     ? 0x4a414c52ULL
                                                     : 0x4a52ULL)))
                                            : ((4U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                                ? (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                                     ? 0x53524156ULL
                                                     : 0x53524c56ULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                                     ? 0x4e2d52ULL
                                                     : 0x534c4c56ULL))
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                                     ? 0x535241ULL
                                                     : 0x53524cULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)
                                                     ? 0x4e2d52ULL
                                                     : 0x534c4cULL))))))))))));
    if ((0U == vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst)) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__slave_asciiW = 0x4e4f50ULL;
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__div_temp 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[1U])) 
                             - (QData)((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__divisor))));
    vlSelf->debug_wb_pc = ((IData)(vlSelf->aclk) ? vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_pc
                            : ((- (IData)((1U & (~ (IData)(
                                                           (0U 
                                                            != vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_except)))))) 
                               & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_pc));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_mem_addr 
        = (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_rs_value 
           + vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_imm_value);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_mem_addr 
        = (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rs_value 
           + vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_imm_value);
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_data[0U] 
        = vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellout__genblk1__BRA__0__KET____DOT__i_data__doutb;
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_data[1U] 
        = vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellout__genblk1__BRA__1__KET____DOT__i_data__doutb;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__mid_result 
        = ((((QData)((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__part_0)) 
             + ((QData)((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__part_1)) 
                << 0x10U)) + ((QData)((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__part_2)) 
                              << 0x10U)) + ((QData)((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__part_3)) 
                                            << 0x20U));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_find_vpn2[0U] 
        = (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg 
           >> 0xdU);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__fifo_full 
        = ((7U == (7U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__data_count) 
                         >> 1U))) | ((0xfU & ((IData)(1U) 
                                              + (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__write_pointer))) 
                                     == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_pointer)));
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_tag[0U] 
        = vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellout__genblk1__BRA__0__KET____DOT__i_tag__doutb;
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_tag[1U] 
        = vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellout__genblk1__BRA__1__KET____DOT__i_tag__doutb;
    vlSelf->mycpu_top__DOT__data_rlen = 0U;
    if ((0x20U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM))) {
        if ((0x10U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM))) {
            if ((8U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM))) {
                if ((1U & (~ ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM)))) {
                            vlSelf->mycpu_top__DOT__data_rlen = 2U;
                        }
                    }
                }
            } else if ((1U & (~ ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM) 
                                 >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM)))) {
                        vlSelf->mycpu_top__DOT__data_rlen = 2U;
                    }
                }
            }
        } else if ((8U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM))) {
            if ((4U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM))) {
                if ((2U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM))) {
                    if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM)))) {
                        vlSelf->mycpu_top__DOT__data_rlen = 2U;
                    }
                }
            } else {
                vlSelf->mycpu_top__DOT__data_rlen = 
                    ((2U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM))
                      ? 2U : ((1U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM))
                               ? 1U : 0U));
            }
        } else if ((4U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM))) {
            if ((2U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM))) {
                if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM)))) {
                    vlSelf->mycpu_top__DOT__data_rlen = 2U;
                }
            } else {
                vlSelf->mycpu_top__DOT__data_rlen = 
                    ((1U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM))
                      ? 1U : 0U);
            }
        } else {
            vlSelf->mycpu_top__DOT__data_rlen = ((2U 
                                                  & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM))
                                                  ? 2U
                                                  : 
                                                 ((1U 
                                                   & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM))
                                                   ? 1U
                                                   : 0U));
        }
    }
    vlSelf->mycpu_top__DOT__d_rlast = ((IData)(vlSelf->rid) 
                                       & (IData)(vlSelf->rlast));
    vlSelf->mycpu_top__DOT__d_rvalid = ((IData)(vlSelf->rid) 
                                        & (IData)(vlSelf->rvalid));
    vlSelf->mycpu_top__DOT__i_rvalid = ((~ (IData)(vlSelf->rid)) 
                                        & (IData)(vlSelf->rvalid));
    vlSelf->mycpu_top__DOT__d_rdata = ((1U & (IData)(vlSelf->rid))
                                        ? vlSelf->rdata
                                        : 0U);
    vlSelf->mycpu_top__DOT__data_wdata = 0U;
    if ((0x20U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM))) {
        if ((0x10U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM))) {
            if ((8U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM))) {
                if ((1U & (~ ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM)))) {
                            vlSelf->mycpu_top__DOT__data_wdata 
                                = vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_wdataM;
                        }
                    }
                }
            }
        } else if ((8U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM))) {
            if ((4U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM))) {
                if ((2U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM))) {
                    if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM)))) {
                        vlSelf->mycpu_top__DOT__data_wdata 
                            = (((((- (IData)((3U == 
                                              (3U & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_addrM)))) 
                                  & (vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_wdataM 
                                     << 0x18U)) | (
                                                   (- (IData)(
                                                              (2U 
                                                               == 
                                                               (3U 
                                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_addrM)))) 
                                                   & (vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_wdataM 
                                                      << 0x10U))) 
                                | ((- (IData)((1U == 
                                               (3U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_addrM)))) 
                                   & (vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_wdataM 
                                      << 8U))) | ((- (IData)(
                                                             (0U 
                                                              == 
                                                              (3U 
                                                               & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_addrM)))) 
                                                  & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_wdataM));
                    }
                }
            } else {
                vlSelf->mycpu_top__DOT__data_wdata 
                    = ((2U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM))
                        ? ((1U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM))
                            ? vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_wdataM
                            : (((((- (IData)((3U == 
                                              (3U & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_addrM)))) 
                                  & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_wdataM) 
                                 | ((- (IData)((2U 
                                                == 
                                                (3U 
                                                 & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_addrM)))) 
                                    & (vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_wdataM 
                                       >> 8U))) | (
                                                   (- (IData)(
                                                              (1U 
                                                               == 
                                                               (3U 
                                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_addrM)))) 
                                                   & (vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_wdataM 
                                                      >> 0x10U))) 
                               | ((- (IData)((0U == 
                                              (3U & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_addrM)))) 
                                  & (vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_wdataM 
                                     >> 0x18U)))) : 
                       ((1U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM))
                         ? ((vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_wdataM 
                             << 0x10U) | (0xffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_wdataM))
                         : ((vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_wdataM 
                             << 0x18U) | ((0xff0000U 
                                           & (vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_wdataM 
                                              << 0x10U)) 
                                          | ((0xff00U 
                                              & (vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_wdataM 
                                                 << 8U)) 
                                             | (0xffU 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_wdataM))))));
            }
        }
    }
    vlSelf->mycpu_top__DOT__i_rdata = ((1U & (IData)(vlSelf->rid))
                                        ? 0U : vlSelf->rdata);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info 
        = ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_cop0_info) 
           & (- (IData)((1U & (~ (IData)((0U != vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except_temp)))))));
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__cache_data[0U] 
        = vlSelf->mycpu_top__DOT__d_cache_inst__DOT____Vcellout__genblk1__BRA__0__KET____DOT__d_data__doutb;
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__cache_data[1U] 
        = vlSelf->mycpu_top__DOT__d_cache_inst__DOT____Vcellout__genblk1__BRA__1__KET____DOT__d_data__doutb;
    vlSelf->mycpu_top__DOT__data_en = ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_enM) 
                                       & (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_mem_sel) 
                                           & (~ (IData)(
                                                        (0U 
                                                         != vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except_temp)))) 
                                          | (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_mem_sel) 
                                              & (~ (IData)(
                                                           (0U 
                                                            != vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except_temp)))) 
                                             & (~ (IData)(
                                                          (0U 
                                                           != vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except_temp))))));
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__cache_tag[0U] 
        = vlSelf->mycpu_top__DOT__d_cache_inst__DOT____Vcellout__genblk1__BRA__0__KET____DOT__d_tag__doutb;
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__cache_tag[1U] 
        = vlSelf->mycpu_top__DOT__d_cache_inst__DOT____Vcellout__genblk1__BRA__1__KET____DOT__d_tag__doutb;
    vlSelf->mycpu_top__DOT__data_wen = 0U;
    if ((0x20U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM))) {
        if ((0x10U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM))) {
            vlSelf->mycpu_top__DOT__data_wen = ((8U 
                                                 & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM))
                                                 ? 
                                                ((4U 
                                                  & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM))
                                                  ? 0U
                                                  : 
                                                 ((2U 
                                                   & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM))
                                                   ? 0U
                                                   : 
                                                  ((1U 
                                                    & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM))
                                                    ? 0U
                                                    : 
                                                   (0xfU 
                                                    & (- (IData)(
                                                                 (0U 
                                                                  == 
                                                                  (3U 
                                                                   & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_addrM))))))))
                                                 : 0U);
        } else if ((8U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM))) {
            vlSelf->mycpu_top__DOT__data_wen = (0xfU 
                                                & ((4U 
                                                    & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM))
                                                    ? 
                                                   ((2U 
                                                     & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM))
                                                      ? 0U
                                                      : 
                                                     ((IData)(0xfU) 
                                                      << 
                                                      (3U 
                                                       & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_addrM)))
                                                     : 0U)
                                                    : 
                                                   ((2U 
                                                     & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM))
                                                     ? 
                                                    ((1U 
                                                      & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM))
                                                      ? 
                                                     (- (IData)(
                                                                (0U 
                                                                 == 
                                                                 (3U 
                                                                  & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_addrM))))
                                                      : 
                                                     (~ 
                                                      ((IData)(0xeU) 
                                                       << 
                                                       (3U 
                                                        & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_addrM))))
                                                     : 
                                                    ((1U 
                                                      & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM))
                                                      ? 
                                                     ((0xcU 
                                                       & (- (IData)(
                                                                    (2U 
                                                                     == 
                                                                     (3U 
                                                                      & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_addrM))))) 
                                                      | (3U 
                                                         & (- (IData)(
                                                                      (0U 
                                                                       == 
                                                                       (3U 
                                                                        & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_addrM))))))
                                                      : 
                                                     ((((8U 
                                                         & (- (IData)(
                                                                      (3U 
                                                                       == 
                                                                       (3U 
                                                                        & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_addrM))))) 
                                                        | (4U 
                                                           & (- (IData)(
                                                                        (2U 
                                                                         == 
                                                                         (3U 
                                                                          & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_addrM)))))) 
                                                       | (2U 
                                                          & (- (IData)(
                                                                       (1U 
                                                                        == 
                                                                        (3U 
                                                                         & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_addrM)))))) 
                                                      | (1U 
                                                         & (- (IData)(
                                                                      (0U 
                                                                       == 
                                                                       (3U 
                                                                        & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_addrM))))))))));
        } else if ((4U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM))) {
            if ((2U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM))) {
                if ((1U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM))) {
                    vlSelf->mycpu_top__DOT__data_wen = 0U;
                }
            } else {
                vlSelf->mycpu_top__DOT__data_wen = 0U;
            }
        } else if ((2U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM))) {
            if ((1U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM))) {
                vlSelf->mycpu_top__DOT__data_wen = 0U;
            }
        } else {
            vlSelf->mycpu_top__DOT__data_wen = 0U;
        }
    } else {
        vlSelf->mycpu_top__DOT__data_wen = 0U;
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__master_asciiM 
        = ((vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst 
            >> 0x1fU) ? ((0x40000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                          ? 0x4e2d52ULL : ((0x20000000U 
                                            & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                            ? ((0x10000000U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                                ? 0x4e2d52ULL
                                                : (
                                                   (0x8000000U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                                    ? 
                                                   ((0x4000000U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                                     ? 0x5357ULL
                                                     : 0x4e2d52ULL)
                                                    : 
                                                   ((0x4000000U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                                     ? 0x5348ULL
                                                     : 0x5342ULL)))
                                            : ((0x10000000U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                                ? (
                                                   (0x8000000U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                                    ? 0x4e2d52ULL
                                                    : 
                                                   ((0x4000000U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                                     ? 0x4c4855ULL
                                                     : 0x4c4255ULL))
                                                : (
                                                   (0x8000000U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                                    ? 
                                                   ((0x4000000U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                                     ? 0x4c57ULL
                                                     : 0x4e2d52ULL)
                                                    : 
                                                   ((0x4000000U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                                     ? 0x4c48ULL
                                                     : 0x4c42ULL)))))
            : ((0x40000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                ? ((0x20000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                    ? 0x4e2d52ULL : ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                      ? 0x4e2d52ULL
                                      : ((0x8000000U 
                                          & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                          ? 0x4e2d52ULL
                                          : ((0x4000000U 
                                              & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                              ? 0x4e2d52ULL
                                              : ((0x42000018U 
                                                  == vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                                  ? 0x45524554ULL
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst 
                                                       >> 0x15U)))
                                                   ? 0x4d544330ULL
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst 
                                                        >> 0x15U)))
                                                    ? 0x4d464330ULL
                                                    : 0x434f5030ULL)))))))
                : ((0x20000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                    ? ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                        ? ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                            ? ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                ? 0x4c5549ULL : 0x584f5249ULL)
                            : ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                ? 0x4f5249ULL : 0x414e4449ULL))
                        : ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                            ? ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                ? 0x534c544955ULL : 0x534c5449ULL)
                            : ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                ? 0x4144444955ULL : 0x41444449ULL)))
                    : ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                        ? ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                            ? ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                ? 0x4247545aULL : 0x424c455aULL)
                            : ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                ? 0x424e45ULL : 0x424551ULL))
                        : ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                            ? ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                ? 0x4a414cULL : 0x4aULL)
                            : ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                ? ((0x100000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                    ? ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                        ? 0x20ULL : 
                                       ((0x40000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                         ? 0x20ULL : 
                                        ((0x20000U 
                                          & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                          ? 0x20ULL
                                          : ((0x10000U 
                                              & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                              ? 0x4247455a414cULL
                                              : 0x424c545a414cULL))))
                                    : ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                        ? 0x20ULL : 
                                       ((0x40000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                         ? 0x20ULL : 
                                        ((0x20000U 
                                          & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                          ? 0x20ULL
                                          : ((0x10000U 
                                              & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                              ? 0x4247455aULL
                                              : 0x424c545aULL)))))
                                : ((0x20U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                    ? ((0x10U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                        ? 0x4e2d52ULL
                                        : ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                            ? ((4U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                                ? 0x4e2d52ULL
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                                     ? 0x534c5455ULL
                                                     : 0x534c54ULL)
                                                    : 0x4e2d52ULL))
                                            : ((4U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                                ? (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                                     ? 0x4e4f52ULL
                                                     : 0x584f52ULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                                     ? 0x4f52ULL
                                                     : 0x414e44ULL))
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                                     ? 0x53554255ULL
                                                     : 0x535542ULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                                     ? 0x41444455ULL
                                                     : 0x414444ULL)))))
                                    : ((0x10U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                        ? ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                            ? ((4U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                                ? 0x4e2d52ULL
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                                     ? 0x44495655ULL
                                                     : 0x444956ULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                                     ? 0x4d554c5455ULL
                                                     : 0x4d554c54ULL)))
                                            : ((4U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                                ? 0x4e2d52ULL
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                                     ? 0x4d544c4fULL
                                                     : 0x4d464c4fULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                                     ? 0x4d544849ULL
                                                     : 0x4d464849ULL))))
                                        : ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                            ? ((4U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                                ? (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                                    ? 0x4e2d52ULL
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                                     ? 0x425245ULL
                                                     : 0x53595343ULL))
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                                    ? 0x4e2d52ULL
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                                     ? 0x4a414c52ULL
                                                     : 0x4a52ULL)))
                                            : ((4U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                                ? (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                                     ? 0x53524156ULL
                                                     : 0x53524c56ULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                                     ? 0x4e2d52ULL
                                                     : 0x534c4c56ULL))
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                                     ? 0x535241ULL
                                                     : 0x53524cULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)
                                                     ? 0x4e2d52ULL
                                                     : 0x534c4cULL))))))))))));
    if ((0U == vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst)) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__master_asciiM = 0x4e4f50ULL;
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__slave_asciiM 
        = ((vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst 
            >> 0x1fU) ? ((0x40000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                          ? 0x4e2d52ULL : ((0x20000000U 
                                            & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                            ? ((0x10000000U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                                ? 0x4e2d52ULL
                                                : (
                                                   (0x8000000U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                                    ? 
                                                   ((0x4000000U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                                     ? 0x5357ULL
                                                     : 0x4e2d52ULL)
                                                    : 
                                                   ((0x4000000U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                                     ? 0x5348ULL
                                                     : 0x5342ULL)))
                                            : ((0x10000000U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                                ? (
                                                   (0x8000000U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                                    ? 0x4e2d52ULL
                                                    : 
                                                   ((0x4000000U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                                     ? 0x4c4855ULL
                                                     : 0x4c4255ULL))
                                                : (
                                                   (0x8000000U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                                    ? 
                                                   ((0x4000000U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                                     ? 0x4c57ULL
                                                     : 0x4e2d52ULL)
                                                    : 
                                                   ((0x4000000U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                                     ? 0x4c48ULL
                                                     : 0x4c42ULL)))))
            : ((0x40000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                ? ((0x20000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                    ? 0x4e2d52ULL : ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                      ? 0x4e2d52ULL
                                      : ((0x8000000U 
                                          & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                          ? 0x4e2d52ULL
                                          : ((0x4000000U 
                                              & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                              ? 0x4e2d52ULL
                                              : ((0x42000018U 
                                                  == vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                                  ? 0x45524554ULL
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst 
                                                       >> 0x15U)))
                                                   ? 0x4d544330ULL
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst 
                                                        >> 0x15U)))
                                                    ? 0x4d464330ULL
                                                    : 0x434f5030ULL)))))))
                : ((0x20000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                    ? ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                        ? ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                            ? ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                ? 0x4c5549ULL : 0x584f5249ULL)
                            : ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                ? 0x4f5249ULL : 0x414e4449ULL))
                        : ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                            ? ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                ? 0x534c544955ULL : 0x534c5449ULL)
                            : ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                ? 0x4144444955ULL : 0x41444449ULL)))
                    : ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                        ? ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                            ? ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                ? 0x4247545aULL : 0x424c455aULL)
                            : ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                ? 0x424e45ULL : 0x424551ULL))
                        : ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                            ? ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                ? 0x4a414cULL : 0x4aULL)
                            : ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                ? ((0x100000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                    ? ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                        ? 0x20ULL : 
                                       ((0x40000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                         ? 0x20ULL : 
                                        ((0x20000U 
                                          & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                          ? 0x20ULL
                                          : ((0x10000U 
                                              & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                              ? 0x4247455a414cULL
                                              : 0x424c545a414cULL))))
                                    : ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                        ? 0x20ULL : 
                                       ((0x40000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                         ? 0x20ULL : 
                                        ((0x20000U 
                                          & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                          ? 0x20ULL
                                          : ((0x10000U 
                                              & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                              ? 0x4247455aULL
                                              : 0x424c545aULL)))))
                                : ((0x20U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                    ? ((0x10U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                        ? 0x4e2d52ULL
                                        : ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                            ? ((4U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                                ? 0x4e2d52ULL
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                                     ? 0x534c5455ULL
                                                     : 0x534c54ULL)
                                                    : 0x4e2d52ULL))
                                            : ((4U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                                ? (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                                     ? 0x4e4f52ULL
                                                     : 0x584f52ULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                                     ? 0x4f52ULL
                                                     : 0x414e44ULL))
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                                     ? 0x53554255ULL
                                                     : 0x535542ULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                                     ? 0x41444455ULL
                                                     : 0x414444ULL)))))
                                    : ((0x10U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                        ? ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                            ? ((4U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                                ? 0x4e2d52ULL
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                                     ? 0x44495655ULL
                                                     : 0x444956ULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                                     ? 0x4d554c5455ULL
                                                     : 0x4d554c54ULL)))
                                            : ((4U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                                ? 0x4e2d52ULL
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                                     ? 0x4d544c4fULL
                                                     : 0x4d464c4fULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                                     ? 0x4d544849ULL
                                                     : 0x4d464849ULL))))
                                        : ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                            ? ((4U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                                ? (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                                    ? 0x4e2d52ULL
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                                     ? 0x425245ULL
                                                     : 0x53595343ULL))
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                                    ? 0x4e2d52ULL
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                                     ? 0x4a414c52ULL
                                                     : 0x4a52ULL)))
                                            : ((4U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                                ? (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                                     ? 0x53524156ULL
                                                     : 0x53524c56ULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                                     ? 0x4e2d52ULL
                                                     : 0x534c4c56ULL))
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                                     ? 0x535241ULL
                                                     : 0x53524cULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)
                                                     ? 0x4e2d52ULL
                                                     : 0x534c4cULL))))))))))));
    if ((0U == vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst)) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__slave_asciiM = 0x4e4f50ULL;
    }
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_busy 
        = (1U & (((3U & ((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_ctrl) 
                         >> 3U)) != (3U & ((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_ctrl) 
                                           >> 1U))) 
                 | (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_ctrl)));
    vlSelf->awaddr = vlSelf->mycpu_top__DOT__d_awaddr;
    vlSelf->awlen = vlSelf->mycpu_top__DOT__d_awlen;
    vlSelf->awsize = vlSelf->mycpu_top__DOT__d_awsize;
    vlSelf->awvalid = vlSelf->mycpu_top__DOT__d_awvalid;
    vlSelf->wdata = vlSelf->mycpu_top__DOT__d_wdata;
    vlSelf->wstrb = vlSelf->mycpu_top__DOT__d_wstrb;
    vlSelf->wlast = vlSelf->mycpu_top__DOT__d_wlast;
    vlSelf->wvalid = vlSelf->mycpu_top__DOT__d_wvalid;
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__i_data__addra 
        = (((IData)(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__replace_line_addr) 
            << 3U) | (7U & ((IData)(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__axi_cnt) 
                            >> 1U)));
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__i_data__addra 
        = (((IData)(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__replace_line_addr) 
            << 3U) | (7U & ((IData)(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__axi_cnt) 
                            >> 1U)));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_mem_sel 
        = (1U & (((vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                   >> 0xeU) & (~ (IData)((0U != vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except_temp)))) 
                 & (~ (IData)((0U != vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except_temp)))));
    vlSelf->rready = ((1U & (IData)(vlSelf->rid)) ? (IData)(vlSelf->mycpu_top__DOT__d_rready)
                       : (IData)(vlSelf->mycpu_top__DOT__i_rready));
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__bram_addr_choose 
        = ((0U != vlSelf->mycpu_top__DOT__i_cache_inst__DOT__icache_status) 
           & (4U != vlSelf->mycpu_top__DOT__i_cache_inst__DOT__icache_status));
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_addr_choose 
        = ((0U != vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dcache_status) 
           & (5U != vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dcache_status));
    vlSelf->mycpu_top__DOT__u_arbitrater__DOT__ar_sel 
        = ((IData)(vlSelf->mycpu_top__DOT__u_arbitrater__DOT__ar_sel_lock)
            ? (IData)(vlSelf->mycpu_top__DOT__u_arbitrater__DOT__ar_sel_lock_val)
            : ((~ (IData)(vlSelf->mycpu_top__DOT__i_arvalid)) 
               & (IData)(vlSelf->mycpu_top__DOT__d_arvalid)));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_next_pc8 
        = ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_is_in_delayslot) 
           | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_is_in_delayslot));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srca 
        = ((0x20000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)
            ? vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_rs_value
            : vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_shamt_value);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srcb 
        = ((0x10000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)
            ? vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_rt_value
            : vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_imm_value);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_find_vpn2[1U] 
        = vlSelf->mycpu_top__DOT__itlb_vpn2;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_find_vpn2[2U] 
        = vlSelf->mycpu_top__DOT__dtlb_vpn2;
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_full 
        = ((3U & ((IData)(1U) + ((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_ctrl) 
                                 >> 1U))) == (3U & 
                                              ((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_ctrl) 
                                               >> 3U)));
    if (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_enable) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] = 0U;
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[1U] = 0U;
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[2U] = 0U;
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_line[0U];
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[1U] 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_line[1U];
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[2U] 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_line[2U];
    } else {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
            = ((0U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__data_count))
                ? 0U : ((1U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__data_count))
                         ? 0U : vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                        [(0xfU & ((IData)(1U) + (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_pointer)))][0U]));
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[1U] 
            = ((0U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__data_count))
                ? 0U : ((1U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__data_count))
                         ? 0U : vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                        [(0xfU & ((IData)(1U) + (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_pointer)))][1U]));
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[2U] 
            = ((0U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__data_count))
                ? 0U : ((1U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__data_count))
                         ? 0U : vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                        [(0xfU & ((IData)(1U) + (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_pointer)))][2U]));
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
            = ((0U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__data_count))
                ? 0U : ((1U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__data_count))
                         ? vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                        [vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_pointer][0U]
                         : vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                        [vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_pointer][0U]));
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[1U] 
            = ((0U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__data_count))
                ? 0U : ((1U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__data_count))
                         ? vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                        [vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_pointer][1U]
                         : vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                        [vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_pointer][1U]));
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[2U] 
            = ((0U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__data_count))
                ? 0U : ((1U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__data_count))
                         ? vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                        [vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_pointer][2U]
                         : vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                        [vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_pointer][2U]));
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__master_asciiE 
        = ((vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst 
            >> 0x1fU) ? ((0x40000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                          ? 0x4e2d52ULL : ((0x20000000U 
                                            & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                            ? ((0x10000000U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                                ? 0x4e2d52ULL
                                                : (
                                                   (0x8000000U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                                    ? 
                                                   ((0x4000000U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                                     ? 0x5357ULL
                                                     : 0x4e2d52ULL)
                                                    : 
                                                   ((0x4000000U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                                     ? 0x5348ULL
                                                     : 0x5342ULL)))
                                            : ((0x10000000U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                                ? (
                                                   (0x8000000U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                                    ? 0x4e2d52ULL
                                                    : 
                                                   ((0x4000000U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                                     ? 0x4c4855ULL
                                                     : 0x4c4255ULL))
                                                : (
                                                   (0x8000000U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                                    ? 
                                                   ((0x4000000U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                                     ? 0x4c57ULL
                                                     : 0x4e2d52ULL)
                                                    : 
                                                   ((0x4000000U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                                     ? 0x4c48ULL
                                                     : 0x4c42ULL)))))
            : ((0x40000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                ? ((0x20000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                    ? 0x4e2d52ULL : ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                      ? 0x4e2d52ULL
                                      : ((0x8000000U 
                                          & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                          ? 0x4e2d52ULL
                                          : ((0x4000000U 
                                              & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                              ? 0x4e2d52ULL
                                              : ((0x42000018U 
                                                  == vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                                  ? 0x45524554ULL
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst 
                                                       >> 0x15U)))
                                                   ? 0x4d544330ULL
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst 
                                                        >> 0x15U)))
                                                    ? 0x4d464330ULL
                                                    : 0x434f5030ULL)))))))
                : ((0x20000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                    ? ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                        ? ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                            ? ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                ? 0x4c5549ULL : 0x584f5249ULL)
                            : ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                ? 0x4f5249ULL : 0x414e4449ULL))
                        : ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                            ? ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                ? 0x534c544955ULL : 0x534c5449ULL)
                            : ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                ? 0x4144444955ULL : 0x41444449ULL)))
                    : ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                        ? ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                            ? ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                ? 0x4247545aULL : 0x424c455aULL)
                            : ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                ? 0x424e45ULL : 0x424551ULL))
                        : ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                            ? ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                ? 0x4a414cULL : 0x4aULL)
                            : ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                ? ((0x100000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                    ? ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                        ? 0x20ULL : 
                                       ((0x40000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                         ? 0x20ULL : 
                                        ((0x20000U 
                                          & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                          ? 0x20ULL
                                          : ((0x10000U 
                                              & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                              ? 0x4247455a414cULL
                                              : 0x424c545a414cULL))))
                                    : ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                        ? 0x20ULL : 
                                       ((0x40000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                         ? 0x20ULL : 
                                        ((0x20000U 
                                          & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                          ? 0x20ULL
                                          : ((0x10000U 
                                              & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                              ? 0x4247455aULL
                                              : 0x424c545aULL)))))
                                : ((0x20U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                    ? ((0x10U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                        ? 0x4e2d52ULL
                                        : ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                            ? ((4U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                                ? 0x4e2d52ULL
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                                     ? 0x534c5455ULL
                                                     : 0x534c54ULL)
                                                    : 0x4e2d52ULL))
                                            : ((4U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                                ? (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                                     ? 0x4e4f52ULL
                                                     : 0x584f52ULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                                     ? 0x4f52ULL
                                                     : 0x414e44ULL))
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                                     ? 0x53554255ULL
                                                     : 0x535542ULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                                     ? 0x41444455ULL
                                                     : 0x414444ULL)))))
                                    : ((0x10U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                        ? ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                            ? ((4U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                                ? 0x4e2d52ULL
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                                     ? 0x44495655ULL
                                                     : 0x444956ULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                                     ? 0x4d554c5455ULL
                                                     : 0x4d554c54ULL)))
                                            : ((4U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                                ? 0x4e2d52ULL
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                                     ? 0x4d544c4fULL
                                                     : 0x4d464c4fULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                                     ? 0x4d544849ULL
                                                     : 0x4d464849ULL))))
                                        : ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                            ? ((4U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                                ? (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                                    ? 0x4e2d52ULL
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                                     ? 0x425245ULL
                                                     : 0x53595343ULL))
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                                    ? 0x4e2d52ULL
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                                     ? 0x4a414c52ULL
                                                     : 0x4a52ULL)))
                                            : ((4U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                                ? (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                                     ? 0x53524156ULL
                                                     : 0x53524c56ULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                                     ? 0x4e2d52ULL
                                                     : 0x534c4c56ULL))
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                                     ? 0x535241ULL
                                                     : 0x53524cULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)
                                                     ? 0x4e2d52ULL
                                                     : 0x534c4cULL))))))))))));
    if ((0U == vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst)) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__master_asciiE = 0x4e4f50ULL;
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__slave_asciiE 
        = ((vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst 
            >> 0x1fU) ? ((0x40000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                          ? 0x4e2d52ULL : ((0x20000000U 
                                            & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                            ? ((0x10000000U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                                ? 0x4e2d52ULL
                                                : (
                                                   (0x8000000U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                                    ? 
                                                   ((0x4000000U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                                     ? 0x5357ULL
                                                     : 0x4e2d52ULL)
                                                    : 
                                                   ((0x4000000U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                                     ? 0x5348ULL
                                                     : 0x5342ULL)))
                                            : ((0x10000000U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                                ? (
                                                   (0x8000000U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                                    ? 0x4e2d52ULL
                                                    : 
                                                   ((0x4000000U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                                     ? 0x4c4855ULL
                                                     : 0x4c4255ULL))
                                                : (
                                                   (0x8000000U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                                    ? 
                                                   ((0x4000000U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                                     ? 0x4c57ULL
                                                     : 0x4e2d52ULL)
                                                    : 
                                                   ((0x4000000U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                                     ? 0x4c48ULL
                                                     : 0x4c42ULL)))))
            : ((0x40000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                ? ((0x20000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                    ? 0x4e2d52ULL : ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                      ? 0x4e2d52ULL
                                      : ((0x8000000U 
                                          & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                          ? 0x4e2d52ULL
                                          : ((0x4000000U 
                                              & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                              ? 0x4e2d52ULL
                                              : ((0x42000018U 
                                                  == vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                                  ? 0x45524554ULL
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst 
                                                       >> 0x15U)))
                                                   ? 0x4d544330ULL
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst 
                                                        >> 0x15U)))
                                                    ? 0x4d464330ULL
                                                    : 0x434f5030ULL)))))))
                : ((0x20000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                    ? ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                        ? ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                            ? ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                ? 0x4c5549ULL : 0x584f5249ULL)
                            : ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                ? 0x4f5249ULL : 0x414e4449ULL))
                        : ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                            ? ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                ? 0x534c544955ULL : 0x534c5449ULL)
                            : ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                ? 0x4144444955ULL : 0x41444449ULL)))
                    : ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                        ? ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                            ? ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                ? 0x4247545aULL : 0x424c455aULL)
                            : ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                ? 0x424e45ULL : 0x424551ULL))
                        : ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                            ? ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                ? 0x4a414cULL : 0x4aULL)
                            : ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                ? ((0x100000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                    ? ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                        ? 0x20ULL : 
                                       ((0x40000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                         ? 0x20ULL : 
                                        ((0x20000U 
                                          & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                          ? 0x20ULL
                                          : ((0x10000U 
                                              & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                              ? 0x4247455a414cULL
                                              : 0x424c545a414cULL))))
                                    : ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                        ? 0x20ULL : 
                                       ((0x40000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                         ? 0x20ULL : 
                                        ((0x20000U 
                                          & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                          ? 0x20ULL
                                          : ((0x10000U 
                                              & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                              ? 0x4247455aULL
                                              : 0x424c545aULL)))))
                                : ((0x20U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                    ? ((0x10U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                        ? 0x4e2d52ULL
                                        : ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                            ? ((4U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                                ? 0x4e2d52ULL
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                                     ? 0x534c5455ULL
                                                     : 0x534c54ULL)
                                                    : 0x4e2d52ULL))
                                            : ((4U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                                ? (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                                     ? 0x4e4f52ULL
                                                     : 0x584f52ULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                                     ? 0x4f52ULL
                                                     : 0x414e44ULL))
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                                     ? 0x53554255ULL
                                                     : 0x535542ULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                                     ? 0x41444455ULL
                                                     : 0x414444ULL)))))
                                    : ((0x10U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                        ? ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                            ? ((4U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                                ? 0x4e2d52ULL
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                                     ? 0x44495655ULL
                                                     : 0x444956ULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                                     ? 0x4d554c5455ULL
                                                     : 0x4d554c54ULL)))
                                            : ((4U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                                ? 0x4e2d52ULL
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                                     ? 0x4d544c4fULL
                                                     : 0x4d464c4fULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                                     ? 0x4d544849ULL
                                                     : 0x4d464849ULL))))
                                        : ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                            ? ((4U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                                ? (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                                    ? 0x4e2d52ULL
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                                     ? 0x425245ULL
                                                     : 0x53595343ULL))
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                                    ? 0x4e2d52ULL
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                                     ? 0x4a414c52ULL
                                                     : 0x4a52ULL)))
                                            : ((4U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                                ? (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                                     ? 0x53524156ULL
                                                     : 0x53524c56ULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                                     ? 0x4e2d52ULL
                                                     : 0x534c4c56ULL))
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                                     ? 0x535241ULL
                                                     : 0x53524cULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)
                                                     ? 0x4e2d52ULL
                                                     : 0x534c4cULL))))))))))));
    if ((0U == vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst)) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__slave_asciiE = 0x4e4f50ULL;
    }
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__l1tlb_ok 
        = (((0xfffffU & (IData)((vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dtlb 
                                 >> 0x17U))) == (vlSelf->mycpu_top__DOT__data_addr 
                                                 >> 0xcU)) 
           & (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dtlb));
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__fence_way 
        = (1U & (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__meta
                 [(0x3fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_alu_res 
                            >> 6U))] >> 2U));
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_write_addr 
        = (0x3ffU & ((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_use_replace_addr)
                      ? (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_replace_write_addr)
                      : (vlSelf->mycpu_top__DOT__data_addr 
                         >> 2U)));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_actual_take 
        = (((((((1U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_branch_type)) 
                & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rs_value 
                   == vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value)) 
               | ((2U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_branch_type)) 
                  & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rs_value 
                     != vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value))) 
              | ((3U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_branch_type)) 
                 & ((~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rs_value 
                        >> 0x1fU)) & (0U != vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rs_value)))) 
             | ((4U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_branch_type)) 
                & ((vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rs_value 
                    >> 0x1fU) | (0U == vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rs_value)))) 
            | ((5U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_branch_type)) 
               & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rs_value 
                     >> 0x1fU)))) | ((6U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_branch_type)) 
                                     & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rs_value 
                                        >> 0x1fU)));
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__M_mem_uncached 
        = (1U & ((2U == (vlSelf->mycpu_top__DOT__data_addr 
                         >> 0x1eU)) ? (vlSelf->mycpu_top__DOT__data_addr 
                                       >> 0x1dU) : (IData)(
                                                           (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dtlb 
                                                            >> 2U))));
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__uncached 
        = (1U & ((2U == (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg 
                         >> 0x1eU)) ? (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg 
                                       >> 0x1dU) : (IData)(
                                                           (vlSelf->mycpu_top__DOT__i_cache_inst__DOT__itlb 
                                                            >> 1U))));
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__translation_ok 
        = ((2U == (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg 
                   >> 0x1eU)) | (((0xfffffU & (IData)(
                                                      (vlSelf->mycpu_top__DOT__i_cache_inst__DOT__itlb 
                                                       >> 0x16U))) 
                                  == (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg 
                                      >> 0xcU)) & (IData)(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__itlb)));
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__M_mem_pa 
        = ((((2U == (vlSelf->mycpu_top__DOT__data_addr 
                     >> 0x1eU)) ? (0x1ffffU & (vlSelf->mycpu_top__DOT__data_addr 
                                               >> 0xcU))
              : (IData)((vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dtlb 
                         >> 3U))) << 0xcU) | (0xfffU 
                                              & vlSelf->mycpu_top__DOT__data_addr));
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__inst_tag 
        = (0xfffffU & ((2U == (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg 
                               >> 0x1eU)) ? (0x1ffffU 
                                             & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg 
                                                >> 0xcU))
                        : (IData)((vlSelf->mycpu_top__DOT__i_cache_inst__DOT__itlb 
                                   >> 2U))));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_reg_wen 
        = (1U & ((1U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_cmov_type))
                  ? (0U != vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_rt_value)
                  : ((2U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_cmov_type))
                      ? (~ (IData)((0U != vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_rt_value)))
                      : (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                         >> 0xfU))));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_mem_sel 
        = (1U & ((vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                  >> 0xeU) & (~ (IData)((0U != vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except_temp)))));
    if (vlSelf->aclk) {
        vlSelf->debug_wb_rf_wnum = vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_reg_waddr;
        vlSelf->debug_wb_rf_wdata = vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_reg_wdata;
    } else {
        vlSelf->debug_wb_rf_wnum = vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_reg_waddr;
        vlSelf->debug_wb_rf_wdata = vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_reg_wdata;
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_reg_wen 
        = (1U & ((1U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_cmov_type))
                  ? (0U != vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value)
                  : ((2U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_cmov_type))
                      ? (~ (IData)((0U != vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value)))
                      : (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                         >> 0xfU))));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srca 
        = ((0x20000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)
            ? vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rs_value
            : vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_shamt_value);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srcb 
        = ((0x10000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)
            ? vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value
            : vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_imm_value);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_int_info 
        = ((0xffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D_int_info) 
           | ((IData)((1U == (7U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg))) 
              << 0x10U));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__trap_base 
        = ((0x400000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg)
            ? 0xbfc00200U : vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__ebase_reg);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_int_info 
        = ((0x10000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__D_int_info) 
           | ((0xff00U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg) 
              | (0xffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg 
                          >> 8U))));
    vlSelf->mycpu_top__DOT__mem_addrE_dp = (((- (IData)(
                                                        (1U 
                                                         & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                                            >> 0xeU)))) 
                                             & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_mem_addr) 
                                            | ((- (IData)(
                                                          (1U 
                                                           & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                                              >> 0xeU)))) 
                                               & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_mem_addr));
    vlSelf->mycpu_top__DOT__inst_en = (1U & (~ ((~ (IData)(vlSelf->aresetn)) 
                                                | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__fifo_full))));
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_bram_wdata 
        = ((4U == vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dcache_status)
            ? vlSelf->mycpu_top__DOT__d_rdata : vlSelf->mycpu_top__DOT__data_wdata);
    if ((1U & (IData)(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__axi_cnt))) {
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__i_data__dina 
            = ((QData)((IData)(vlSelf->mycpu_top__DOT__i_rdata)) 
               << 0x20U);
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__i_data__dina 
            = ((QData)((IData)(vlSelf->mycpu_top__DOT__i_rdata)) 
               << 0x20U);
    } else {
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__i_data__dina 
            = (QData)((IData)(vlSelf->mycpu_top__DOT__i_rdata));
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__i_data__dina 
            = (QData)((IData)(vlSelf->mycpu_top__DOT__i_rdata));
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cp0_rdata 
        = ((0x80U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))
            ? ((0x40U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))
                ? ((0x20U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))
                    ? ((0x10U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))
                        ? ((8U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))
                            ? 0U : vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__errorepc_reg)
                        : ((8U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))
                            ? vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__taghi_reg
                            : vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__taglo_reg))
                    : 0U) : ((0x20U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))
                              ? 0U : ((0x10U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))
                                       ? 0U : ((8U 
                                                & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))
                                                ? 0U
                                                : (
                                                   (0U 
                                                    == 
                                                    (7U 
                                                     & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info)))
                                                    ? 0x80000083U
                                                    : 
                                                   ((1U 
                                                     == 
                                                     (7U 
                                                      & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info)))
                                                     ? 0xe291480U
                                                     : 0U))))))
            : ((0x40U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))
                ? ((0x20U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))
                    ? ((0x10U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))
                        ? ((8U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))
                            ? ((0U == (7U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info)))
                                ? 0x18003U : ((1U == 
                                               (7U 
                                                & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info)))
                                               ? vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__ebase_reg
                                               : 0U))
                            : vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__epc_reg)
                        : ((8U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))
                            ? vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg
                            : vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg))
                    : ((0x10U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))
                        ? ((8U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))
                            ? vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__compare_reg
                            : vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg)
                        : ((8U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))
                            ? (IData)((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__count_reg 
                                       >> 1U)) : vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__badva_reg)))
                : ((0x20U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))
                    ? ((0x10U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))
                        ? ((8U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))
                            ? 0U : vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__wired_reg)
                        : ((8U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))
                            ? 0U : vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__context_reg))
                    : ((0x10U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))
                        ? ((8U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))
                            ? vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg
                            : vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg)
                        : ((8U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))
                            ? vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__random_reg
                            : vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__index_reg)))));
    if (((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__last_line_addr) 
         == (0x3ffU & (vlSelf->mycpu_top__DOT__data_addr 
                       >> 2U)))) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__cache_data_forward[0U] 
            = ((vlSelf->mycpu_top__DOT__d_cache_inst__DOT__last_wea
                [0U] & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__last_wdata) 
               | (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__cache_data
                  [0U] & (~ vlSelf->mycpu_top__DOT__d_cache_inst__DOT__last_wea
                          [0U])));
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__cache_data_forward[1U] 
            = ((vlSelf->mycpu_top__DOT__d_cache_inst__DOT__last_wea
                [1U] & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__last_wdata) 
               | (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__cache_data
                  [1U] & (~ vlSelf->mycpu_top__DOT__d_cache_inst__DOT__last_wea
                          [1U])));
    } else {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__cache_data_forward[0U] 
            = vlSelf->mycpu_top__DOT__d_cache_inst__DOT__cache_data
            [0U];
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__cache_data_forward[1U] 
            = vlSelf->mycpu_top__DOT__d_cache_inst__DOT__cache_data
            [1U];
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except 
        = ((0x1ffe0U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except_temp) 
           | ((0x3ffff0U & ((((((IData)(vlSelf->mycpu_top__DOT__data_tlb_invalid) 
                                | (IData)(vlSelf->mycpu_top__DOT__data_tlb_refill)) 
                               & (IData)(vlSelf->mycpu_top__DOT__data_en)) 
                              << 4U) & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M2cs 
                                        >> 0xaU)) & 
                            ((~ (IData)((0U != (IData)(vlSelf->mycpu_top__DOT__data_wen)))) 
                             << 4U))) | (((((((IData)(vlSelf->mycpu_top__DOT__data_tlb_invalid) 
                                              | (IData)(vlSelf->mycpu_top__DOT__data_tlb_refill)) 
                                             & (IData)(vlSelf->mycpu_top__DOT__data_en)) 
                                            & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M2cs 
                                               >> 0xeU)) 
                                           & (0U != (IData)(vlSelf->mycpu_top__DOT__data_wen))) 
                                          << 3U) | 
                                         ((0xffffcU 
                                           & ((((IData)(vlSelf->mycpu_top__DOT__data_tlb_mod) 
                                                & (0U 
                                                   != (IData)(vlSelf->mycpu_top__DOT__data_wen))) 
                                               << 2U) 
                                              & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M2cs 
                                                 >> 0xcU))) 
                                          | ((0x7fffeU 
                                              & (((IData)(vlSelf->mycpu_top__DOT__data_tlb_refill) 
                                                  << 1U) 
                                                 & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M2cs 
                                                    >> 0xdU))) 
                                             | (1U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except_temp))))));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except 
        = ((0x1ffe0U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except_temp) 
           | ((0x3ffff0U & ((((((IData)(vlSelf->mycpu_top__DOT__data_tlb_invalid) 
                                | (IData)(vlSelf->mycpu_top__DOT__data_tlb_refill)) 
                               & (IData)(vlSelf->mycpu_top__DOT__data_en)) 
                              << 4U) & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs 
                                        >> 0xaU)) & 
                            ((~ (IData)((0U != (IData)(vlSelf->mycpu_top__DOT__data_wen)))) 
                             << 4U))) | (((((((IData)(vlSelf->mycpu_top__DOT__data_tlb_invalid) 
                                              | (IData)(vlSelf->mycpu_top__DOT__data_tlb_refill)) 
                                             & (IData)(vlSelf->mycpu_top__DOT__data_en)) 
                                            & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs 
                                               >> 0xeU)) 
                                           & (0U != (IData)(vlSelf->mycpu_top__DOT__data_wen))) 
                                          << 3U) | 
                                         ((0xffffcU 
                                           & ((((IData)(vlSelf->mycpu_top__DOT__data_tlb_mod) 
                                                & (0U 
                                                   != (IData)(vlSelf->mycpu_top__DOT__data_wen))) 
                                               << 2U) 
                                              & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs 
                                                 >> 0xcU))) 
                                          | ((0x7fffeU 
                                              & (((IData)(vlSelf->mycpu_top__DOT__data_tlb_refill) 
                                                  << 1U) 
                                                 & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs 
                                                    >> 0xdU))) 
                                             | (1U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except_temp))))));
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__translation_ok 
        = ((2U == (vlSelf->mycpu_top__DOT__data_addr 
                   >> 0x1eU)) | ((((0xfffffU & (IData)(
                                                       (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dtlb 
                                                        >> 0x17U))) 
                                   == (vlSelf->mycpu_top__DOT__data_addr 
                                       >> 0xcU)) & (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dtlb)) 
                                 & ((~ (IData)((0U 
                                                != (IData)(vlSelf->mycpu_top__DOT__data_wen)))) 
                                    | (IData)((vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dtlb 
                                               >> 1U)))));
    vlSelf->arid = vlSelf->mycpu_top__DOT__u_arbitrater__DOT__ar_sel;
    vlSelf->mycpu_top__DOT__d_arready = ((IData)(vlSelf->arready) 
                                         & (IData)(vlSelf->mycpu_top__DOT__u_arbitrater__DOT__ar_sel));
    vlSelf->mycpu_top__DOT__i_arready = ((IData)(vlSelf->arready) 
                                         & (~ (IData)(vlSelf->mycpu_top__DOT__u_arbitrater__DOT__ar_sel)));
    if (vlSelf->mycpu_top__DOT__u_arbitrater__DOT__ar_sel) {
        vlSelf->araddr = vlSelf->mycpu_top__DOT__d_araddr;
        vlSelf->arlen = vlSelf->mycpu_top__DOT__d_arlen;
        vlSelf->arsize = vlSelf->mycpu_top__DOT__d_arsize;
        vlSelf->arvalid = vlSelf->mycpu_top__DOT__d_arvalid;
    } else {
        vlSelf->araddr = vlSelf->mycpu_top__DOT__i_araddr;
        vlSelf->arlen = vlSelf->mycpu_top__DOT__i_arlen;
        vlSelf->arsize = vlSelf->mycpu_top__DOT__i_arsize;
        vlSelf->arvalid = vlSelf->mycpu_top__DOT__i_arvalid;
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched[0U] 
        = ((0xfeU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
            [0U]) | (((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                       [0U][2U] >> 9U) | ((0xffU & 
                                           vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                           [0U][0U]) 
                                          == (0xffU 
                                              & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg))) 
                     & ((0x7ffffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                     [0U][0U] >> 8U)) 
                        == vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_find_vpn2
                        [0U])));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched[0U] 
        = ((0xfdU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
            [0U]) | (((0xfffffeU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                    [1U][2U] >> 8U)) 
                      | (((0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                           [1U][0U]) == (0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg)) 
                         << 1U)) & (((0x7ffffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                  [1U][0U] 
                                                  >> 8U)) 
                                     == vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_find_vpn2
                                     [0U]) << 1U)));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched[0U] 
        = ((0xfbU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
            [0U]) | (((0x1fffffcU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                     [2U][2U] >> 7U)) 
                      | (((0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                           [2U][0U]) == (0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg)) 
                         << 2U)) & (((0x7ffffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                  [2U][0U] 
                                                  >> 8U)) 
                                     == vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_find_vpn2
                                     [0U]) << 2U)));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched[0U] 
        = ((0xf7U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
            [0U]) | (((0x3fffff8U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                     [3U][2U] >> 6U)) 
                      | (((0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                           [3U][0U]) == (0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg)) 
                         << 3U)) & (((0x7ffffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                  [3U][0U] 
                                                  >> 8U)) 
                                     == vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_find_vpn2
                                     [0U]) << 3U)));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched[0U] 
        = ((0xefU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
            [0U]) | (((0x7fffff0U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                     [4U][2U] >> 5U)) 
                      | (((0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                           [4U][0U]) == (0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg)) 
                         << 4U)) & (((0x7ffffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                  [4U][0U] 
                                                  >> 8U)) 
                                     == vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_find_vpn2
                                     [0U]) << 4U)));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched[0U] 
        = ((0xdfU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
            [0U]) | (((0xfffffe0U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                     [5U][2U] >> 4U)) 
                      | (((0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                           [5U][0U]) == (0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg)) 
                         << 5U)) & (((0x7ffffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                  [5U][0U] 
                                                  >> 8U)) 
                                     == vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_find_vpn2
                                     [0U]) << 5U)));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched[0U] 
        = ((0xbfU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
            [0U]) | (((0x1fffffc0U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                      [6U][2U] >> 3U)) 
                      | (((0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                           [6U][0U]) == (0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg)) 
                         << 6U)) & (((0x7ffffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                  [6U][0U] 
                                                  >> 8U)) 
                                     == vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_find_vpn2
                                     [0U]) << 6U)));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched[0U] 
        = ((0x7fU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
            [0U]) | (((0x3fffff80U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                      [7U][2U] >> 2U)) 
                      | (((0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                           [7U][0U]) == (0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg)) 
                         << 7U)) & (((0x7ffffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                  [7U][0U] 
                                                  >> 8U)) 
                                     == vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_find_vpn2
                                     [0U]) << 7U)));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched[1U] 
        = ((0xfeU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
            [1U]) | (((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                       [0U][2U] >> 9U) | ((0xffU & 
                                           vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                           [0U][0U]) 
                                          == (0xffU 
                                              & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg))) 
                     & ((0x7ffffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                     [0U][0U] >> 8U)) 
                        == vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_find_vpn2
                        [1U])));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched[1U] 
        = ((0xfdU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
            [1U]) | (((0xfffffeU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                    [1U][2U] >> 8U)) 
                      | (((0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                           [1U][0U]) == (0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg)) 
                         << 1U)) & (((0x7ffffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                  [1U][0U] 
                                                  >> 8U)) 
                                     == vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_find_vpn2
                                     [1U]) << 1U)));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched[1U] 
        = ((0xfbU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
            [1U]) | (((0x1fffffcU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                     [2U][2U] >> 7U)) 
                      | (((0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                           [2U][0U]) == (0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg)) 
                         << 2U)) & (((0x7ffffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                  [2U][0U] 
                                                  >> 8U)) 
                                     == vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_find_vpn2
                                     [1U]) << 2U)));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched[1U] 
        = ((0xf7U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
            [1U]) | (((0x3fffff8U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                     [3U][2U] >> 6U)) 
                      | (((0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                           [3U][0U]) == (0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg)) 
                         << 3U)) & (((0x7ffffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                  [3U][0U] 
                                                  >> 8U)) 
                                     == vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_find_vpn2
                                     [1U]) << 3U)));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched[1U] 
        = ((0xefU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
            [1U]) | (((0x7fffff0U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                     [4U][2U] >> 5U)) 
                      | (((0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                           [4U][0U]) == (0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg)) 
                         << 4U)) & (((0x7ffffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                  [4U][0U] 
                                                  >> 8U)) 
                                     == vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_find_vpn2
                                     [1U]) << 4U)));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched[1U] 
        = ((0xdfU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
            [1U]) | (((0xfffffe0U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                     [5U][2U] >> 4U)) 
                      | (((0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                           [5U][0U]) == (0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg)) 
                         << 5U)) & (((0x7ffffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                  [5U][0U] 
                                                  >> 8U)) 
                                     == vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_find_vpn2
                                     [1U]) << 5U)));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched[1U] 
        = ((0xbfU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
            [1U]) | (((0x1fffffc0U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                      [6U][2U] >> 3U)) 
                      | (((0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                           [6U][0U]) == (0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg)) 
                         << 6U)) & (((0x7ffffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                  [6U][0U] 
                                                  >> 8U)) 
                                     == vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_find_vpn2
                                     [1U]) << 6U)));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched[1U] 
        = ((0x7fU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
            [1U]) | (((0x3fffff80U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                      [7U][2U] >> 2U)) 
                      | (((0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                           [7U][0U]) == (0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg)) 
                         << 7U)) & (((0x7ffffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                  [7U][0U] 
                                                  >> 8U)) 
                                     == vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_find_vpn2
                                     [1U]) << 7U)));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched[2U] 
        = ((0xfeU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
            [2U]) | (((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                       [0U][2U] >> 9U) | ((0xffU & 
                                           vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                           [0U][0U]) 
                                          == (0xffU 
                                              & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg))) 
                     & ((0x7ffffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                     [0U][0U] >> 8U)) 
                        == vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_find_vpn2
                        [2U])));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched[2U] 
        = ((0xfdU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
            [2U]) | (((0xfffffeU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                    [1U][2U] >> 8U)) 
                      | (((0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                           [1U][0U]) == (0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg)) 
                         << 1U)) & (((0x7ffffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                  [1U][0U] 
                                                  >> 8U)) 
                                     == vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_find_vpn2
                                     [2U]) << 1U)));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched[2U] 
        = ((0xfbU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
            [2U]) | (((0x1fffffcU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                     [2U][2U] >> 7U)) 
                      | (((0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                           [2U][0U]) == (0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg)) 
                         << 2U)) & (((0x7ffffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                  [2U][0U] 
                                                  >> 8U)) 
                                     == vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_find_vpn2
                                     [2U]) << 2U)));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched[2U] 
        = ((0xf7U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
            [2U]) | (((0x3fffff8U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                     [3U][2U] >> 6U)) 
                      | (((0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                           [3U][0U]) == (0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg)) 
                         << 3U)) & (((0x7ffffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                  [3U][0U] 
                                                  >> 8U)) 
                                     == vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_find_vpn2
                                     [2U]) << 3U)));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched[2U] 
        = ((0xefU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
            [2U]) | (((0x7fffff0U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                     [4U][2U] >> 5U)) 
                      | (((0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                           [4U][0U]) == (0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg)) 
                         << 4U)) & (((0x7ffffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                  [4U][0U] 
                                                  >> 8U)) 
                                     == vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_find_vpn2
                                     [2U]) << 4U)));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched[2U] 
        = ((0xdfU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
            [2U]) | (((0xfffffe0U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                     [5U][2U] >> 4U)) 
                      | (((0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                           [5U][0U]) == (0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg)) 
                         << 5U)) & (((0x7ffffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                  [5U][0U] 
                                                  >> 8U)) 
                                     == vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_find_vpn2
                                     [2U]) << 5U)));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched[2U] 
        = ((0xbfU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
            [2U]) | (((0x1fffffc0U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                      [6U][2U] >> 3U)) 
                      | (((0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                           [6U][0U]) == (0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg)) 
                         << 6U)) & (((0x7ffffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                  [6U][0U] 
                                                  >> 8U)) 
                                     == vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_find_vpn2
                                     [2U]) << 6U)));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched[2U] 
        = ((0x7fU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
            [2U]) | (((0x3fffff80U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                      [7U][2U] >> 2U)) 
                      | (((0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                           [7U][0U]) == (0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg)) 
                         << 7U)) & (((0x7ffffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                  [7U][0U] 
                                                  >> 8U)) 
                                     == vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_find_vpn2
                                     [2U]) << 7U)));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_cmov_type = 0U;
    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                  >> 0x1fU)))) {
        if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                      >> 0x1eU)))) {
            if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                          >> 0x1dU)))) {
                if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                              >> 0x1cU)))) {
                    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                  >> 0x1bU)))) {
                        if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                      >> 0x1aU)))) {
                            if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                          >> 5U)))) {
                                if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                              >> 4U)))) {
                                    if ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                                        if ((1U & (~ 
                                                   (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                                                vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_cmov_type 
                                                    = 
                                                    ((1U 
                                                      & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                      ? 1U
                                                      : 2U);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_trap_type = 0U;
    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                  >> 0x1fU)))) {
        if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                      >> 0x1eU)))) {
            if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                          >> 0x1dU)))) {
                if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                              >> 0x1cU)))) {
                    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                  >> 0x1bU)))) {
                        if ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                            if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                          >> 0x14U)))) {
                                if ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                                    if ((0x40000U & 
                                         vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                                        if ((0x20000U 
                                             & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                     >> 0x10U)))) {
                                                vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_trap_type = 2U;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                        >> 0x10U)))) {
                                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_trap_type = 1U;
                                        }
                                    } else {
                                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_trap_type 
                                            = ((0x20000U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                ? (
                                                   (0x10000U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                    ? 6U
                                                    : 5U)
                                                : (
                                                   (0x10000U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                    ? 4U
                                                    : 3U));
                                    }
                                }
                            }
                        } else if ((0x20U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                            if ((0x10U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                                if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                              >> 3U)))) {
                                    if ((4U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                                        if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                                            if ((1U 
                                                 & (~ 
                                                    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U]))) {
                                                vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_trap_type = 2U;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U]))) {
                                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_trap_type = 1U;
                                        }
                                    } else {
                                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_trap_type 
                                            = ((2U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                ? (
                                                   (1U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                    ? 6U
                                                    : 5U)
                                                : (
                                                   (1U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                    ? 4U
                                                    : 3U));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 0U;
    if ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
         >> 0x1fU)) {
        if ((0x40000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
            if ((0x20000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                if ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                } else if ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                } else if ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                }
            } else if ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
            } else if ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                              >> 0x1aU)))) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                }
            } else if ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
            }
        } else if ((0x20000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
            if ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                              >> 0x1bU)))) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                }
            }
        } else if ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
            if ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                if ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                }
            }
        }
    } else if ((0x40000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
        if ((0x20000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
            if ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                if ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                } else if ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                } else if ((0x20U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                    if ((0x10U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                    } else if ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                    } else if ((4U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                    } else if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                    }
                } else if ((0x10U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                } else if ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                } else if ((4U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                    if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                    }
                } else if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                    if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                    }
                }
            } else {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
            }
        } else if ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
        } else if ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
        } else if ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
        } else if ((0U != (0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                    >> 0x15U)))) {
            if ((4U != (0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                 >> 0x15U)))) {
                if ((0x10U == (0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                        >> 0x15U)))) {
                    if ((0x20U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                        if ((0x10U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                        } else if ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                        } else if ((4U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                        } else if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                        } else if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                        }
                    } else if ((0x10U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                        if ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                            if ((4U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                                vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                            } else if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                                vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                            } else if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                                vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                            }
                        } else {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                        }
                    } else if ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                        if ((4U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                        } else if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                        } else if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                        }
                    } else if ((4U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                        if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                            if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                                vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                            }
                        } else {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                        }
                    } else if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                        if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                        }
                    } else if ((1U & (~ vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U]))) {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                    }
                } else {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                }
            }
        }
    } else if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                         >> 0x1dU)))) {
        if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                      >> 0x1cU)))) {
            if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                          >> 0x1bU)))) {
                if ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                    if ((0x100000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                        if ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                        } else if ((0x40000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                        } else if ((0x20000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                        }
                    } else if ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                        if ((0x40000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                            if ((0x20000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                                if ((0x10000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                                }
                            } else if ((0x10000U & 
                                        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                                vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                            }
                        }
                    } else if ((0x40000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                    } else if ((0x20000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                    }
                } else if ((0x20U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                    if ((0x10U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                        if ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                        } else if ((4U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                            if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                                if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                                }
                            } else if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                                vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                            }
                        }
                    } else if ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                        if ((4U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                        } else if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                             >> 1U)))) {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                        }
                    }
                } else if ((0x10U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                    if ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                        if ((4U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                        }
                    } else if ((4U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                    }
                } else if ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                    if ((4U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                        if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                            if ((1U & (~ vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U]))) {
                                vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                            }
                        }
                    }
                } else if ((4U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                  >> 1U)))) {
                        if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                        }
                    }
                } else if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                     >> 1U)))) {
                    if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = 1U;
                    }
                }
            }
        }
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_syscall_inst = 0U;
    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                  >> 0x1fU)))) {
        if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                      >> 0x1eU)))) {
            if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                          >> 0x1dU)))) {
                if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                              >> 0x1cU)))) {
                    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                  >> 0x1bU)))) {
                        if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                      >> 0x1aU)))) {
                            if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                          >> 5U)))) {
                                if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                              >> 4U)))) {
                                    if ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                                        if ((4U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U]))) {
                                                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_syscall_inst = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_eret_inst = 0U;
    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                  >> 0x1fU)))) {
        if ((0x40000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
            if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                          >> 0x1dU)))) {
                if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                              >> 0x1cU)))) {
                    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                  >> 0x1bU)))) {
                        if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                      >> 0x1aU)))) {
                            if ((0U != (0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                 >> 0x15U)))) {
                                if ((4U != (0x1fU & 
                                            (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                             >> 0x15U)))) {
                                    if ((0x10U == (0x1fU 
                                                   & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                      >> 0x15U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                    >> 5U)))) {
                                            if ((0x10U 
                                                 & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                                                if (
                                                    (8U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                             >> 2U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U]))) {
                                                                vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_eret_inst = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_break_inst = 0U;
    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                  >> 0x1fU)))) {
        if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                      >> 0x1eU)))) {
            if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                          >> 0x1dU)))) {
                if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                              >> 0x1cU)))) {
                    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                  >> 0x1bU)))) {
                        if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                      >> 0x1aU)))) {
                            if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                          >> 5U)))) {
                                if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                              >> 4U)))) {
                                    if ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                                        if ((4U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                                                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_break_inst = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_cop0_info 
        = ((0xf8U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                     >> 8U)) | (7U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U]));
    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                  >> 0x1fU)))) {
        if ((0x40000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
            if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                          >> 0x1dU)))) {
                if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                              >> 0x1cU)))) {
                    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                  >> 0x1bU)))) {
                        if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                      >> 0x1aU)))) {
                            if ((0U != (0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                 >> 0x15U)))) {
                                if ((4U == (0x1fU & 
                                            (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                             >> 0x15U)))) {
                                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_cop0_info 
                                        = (0x1000U 
                                           | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_cop0_info));
                                } else if ((0x10U == 
                                            (0x1fU 
                                             & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                >> 0x15U)))) {
                                    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                  >> 5U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                    >> 4U)))) {
                                            if ((8U 
                                                 & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                         >> 2U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U]))) {
                                                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_cop0_info 
                                                                = 
                                                                (0x800U 
                                                                 | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_cop0_info));
                                                        }
                                                    }
                                                }
                                            } else if (
                                                       (4U 
                                                        & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                                                if (
                                                    (2U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U]))) {
                                                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_cop0_info 
                                                            = 
                                                            (0x100U 
                                                             | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_cop0_info));
                                                    }
                                                }
                                            } else if (
                                                       (2U 
                                                        & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U]))) {
                                                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_cop0_info 
                                                        = 
                                                        (0x200U 
                                                         | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_cop0_info));
                                                }
                                            } else if (
                                                       (1U 
                                                        & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                                                vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_cop0_info 
                                                    = 
                                                    (0x400U 
                                                     | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_cop0_info));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
         >> 0x1fU)) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_branch_type = 0U;
        vlSelf->mycpu_top__DOT__u_datapath__DOT__slave_asciiD 
            = ((0x40000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                ? 0x4e2d52ULL : ((0x20000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                  ? ((0x10000000U & 
                                      vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                      ? 0x4e2d52ULL
                                      : ((0x8000000U 
                                          & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                          ? ((0x4000000U 
                                              & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                              ? 0x5357ULL
                                              : 0x4e2d52ULL)
                                          : ((0x4000000U 
                                              & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                              ? 0x5348ULL
                                              : 0x5342ULL)))
                                  : ((0x10000000U & 
                                      vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                      ? ((0x8000000U 
                                          & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                          ? 0x4e2d52ULL
                                          : ((0x4000000U 
                                              & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                              ? 0x4c4855ULL
                                              : 0x4c4255ULL))
                                      : ((0x8000000U 
                                          & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                          ? ((0x4000000U 
                                              & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                              ? 0x4c57ULL
                                              : 0x4e2d52ULL)
                                          : ((0x4000000U 
                                              & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                              ? 0x4c48ULL
                                              : 0x4c42ULL)))));
    } else {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_branch_type 
            = ((0x40000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                ? 0U : ((0x20000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                         ? 0U : ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                  ? ((0x8000000U & 
                                      vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                      ? ((0x4000000U 
                                          & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                          ? 3U : 4U)
                                      : ((0x4000000U 
                                          & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                          ? 2U : 1U))
                                  : ((0x8000000U & 
                                      vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                      ? 8U : ((0x4000000U 
                                               & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                               ? ((0x100000U 
                                                   & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                   ? 
                                                  ((0x80000U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                    ? 0U
                                                    : 
                                                   ((0x40000U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                     ? 0U
                                                     : 
                                                    ((0x20000U 
                                                      & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                      ? 0U
                                                      : 
                                                     ((0x10000U 
                                                       & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                       ? 5U
                                                       : 6U))))
                                                   : 
                                                  ((0x80000U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                    ? 0U
                                                    : 
                                                   ((0x40000U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                     ? 0U
                                                     : 
                                                    ((0x20000U 
                                                      & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                      ? 0U
                                                      : 
                                                     ((0x10000U 
                                                       & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                       ? 5U
                                                       : 6U)))))
                                               : ((8U 
                                                   == 
                                                   (0x3fU 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U]))
                                                   ? 9U
                                                   : 
                                                  ((9U 
                                                    == 
                                                    (0x3fU 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U]))
                                                    ? 9U
                                                    : 0U)))))));
        vlSelf->mycpu_top__DOT__u_datapath__DOT__slave_asciiD 
            = ((0x40000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                ? ((0x20000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                    ? 0x4e2d52ULL : ((0x10000000U & 
                                      vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                      ? 0x4e2d52ULL
                                      : ((0x8000000U 
                                          & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                          ? 0x4e2d52ULL
                                          : ((0x4000000U 
                                              & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                              ? 0x4e2d52ULL
                                              : ((0x42000018U 
                                                  == 
                                                  vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                  ? 0x45524554ULL
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                       >> 0x15U)))
                                                   ? 0x4d544330ULL
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                        >> 0x15U)))
                                                    ? 0x4d464330ULL
                                                    : 0x434f5030ULL)))))))
                : ((0x20000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                    ? ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                        ? ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                            ? ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                ? 0x4c5549ULL : 0x584f5249ULL)
                            : ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                ? 0x4f5249ULL : 0x414e4449ULL))
                        : ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                            ? ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                ? 0x534c544955ULL : 0x534c5449ULL)
                            : ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                ? 0x4144444955ULL : 0x41444449ULL)))
                    : ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                        ? ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                            ? ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                ? 0x4247545aULL : 0x424c455aULL)
                            : ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                ? 0x424e45ULL : 0x424551ULL))
                        : ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                            ? ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                ? 0x4a414cULL : 0x4aULL)
                            : ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                ? ((0x100000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                    ? ((0x80000U & 
                                        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                        ? 0x20ULL : 
                                       ((0x40000U & 
                                         vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                         ? 0x20ULL : 
                                        ((0x20000U 
                                          & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                          ? 0x20ULL
                                          : ((0x10000U 
                                              & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                              ? 0x4247455a414cULL
                                              : 0x424c545a414cULL))))
                                    : ((0x80000U & 
                                        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                        ? 0x20ULL : 
                                       ((0x40000U & 
                                         vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                         ? 0x20ULL : 
                                        ((0x20000U 
                                          & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                          ? 0x20ULL
                                          : ((0x10000U 
                                              & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                              ? 0x4247455aULL
                                              : 0x424c545aULL)))))
                                : ((0x20U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                    ? ((0x10U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                        ? 0x4e2d52ULL
                                        : ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                            ? ((4U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                ? 0x4e2d52ULL
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                     ? 0x534c5455ULL
                                                     : 0x534c54ULL)
                                                    : 0x4e2d52ULL))
                                            : ((4U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                ? (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                     ? 0x4e4f52ULL
                                                     : 0x584f52ULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                     ? 0x4f52ULL
                                                     : 0x414e44ULL))
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                     ? 0x53554255ULL
                                                     : 0x535542ULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                     ? 0x41444455ULL
                                                     : 0x414444ULL)))))
                                    : ((0x10U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                        ? ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                            ? ((4U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                ? 0x4e2d52ULL
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                     ? 0x44495655ULL
                                                     : 0x444956ULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                     ? 0x4d554c5455ULL
                                                     : 0x4d554c54ULL)))
                                            : ((4U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                ? 0x4e2d52ULL
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                     ? 0x4d544c4fULL
                                                     : 0x4d464c4fULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                     ? 0x4d544849ULL
                                                     : 0x4d464849ULL))))
                                        : ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                            ? ((4U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                ? (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                    ? 0x4e2d52ULL
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                     ? 0x425245ULL
                                                     : 0x53595343ULL))
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                    ? 0x4e2d52ULL
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                     ? 0x4a414c52ULL
                                                     : 0x4a52ULL)))
                                            : ((4U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                ? (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                     ? 0x53524156ULL
                                                     : 0x53524c56ULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                     ? 0x4e2d52ULL
                                                     : 0x534c4c56ULL))
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                     ? 0x535241ULL
                                                     : 0x53524cULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                     ? 0x4e2d52ULL
                                                     : 0x534c4cULL)))))))))));
    }
    if ((0U == vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__slave_asciiD = 0x4e4f50ULL;
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs = 0U;
    if ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
         >> 0x1fU)) {
        if ((0x40000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
            if ((0x20000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                              >> 0x1cU)))) {
                    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                  >> 0x1bU)))) {
                        if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                      >> 0x1aU)))) {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                = (0x4000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                = (0x800U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                = (0x38000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                = (0x7c00000U | (0x7ffffU 
                                                 & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs));
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                 >> 0x1cU)))) {
                if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                              >> 0x1bU)))) {
                    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                  >> 0x1aU)))) {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                            = (0xf000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                            = (0x20000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                    }
                }
            }
        } else if ((0x20000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
            if ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                if ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                    if ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                            = ((0x7ffffcfU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs) 
                               | (0x20U | (0x10U & 
                                           ((~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                >> 0x10U)) 
                                            << 4U))));
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                            = ((0x7fffff7U & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs) 
                               | (8U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                        >> 0xdU)));
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                            = (0x20000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                            = (0x1000000U | (0x7ffffU 
                                             & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs));
                    } else {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                            = (0x4000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                            = (0x800U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                            = (0x30000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                    }
                }
            } else if ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                if ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                        = (0x4000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                        = (0x800U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                        = (0x30000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                } else {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                        = (0x4000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                        = (0x800U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                        = (0x30000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                }
            } else if ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0x4000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0x800U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0x30000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
            } else {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0x4000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0x800U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0x30000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
            }
        } else if ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
            if ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                              >> 0x1aU)))) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                        = (0x3f000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                }
            } else if ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0xf000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0x20000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
            } else {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0xf000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0x20000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
            }
        } else if ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
            if ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0xf000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0x20000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
            } else {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0x3f000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
            }
        } else if ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                = (0xf000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                = (0x20000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
        } else {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                = (0xf000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                = (0x20000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
        }
    } else if ((0x40000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
        if ((0x20000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
            if ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                              >> 0x1bU)))) {
                    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                  >> 0x1aU)))) {
                        if ((0x20U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                            if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                          >> 4U)))) {
                                if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                              >> 3U)))) {
                                    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                                                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                                    = 
                                                    (0x20000U 
                                                     | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                                                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                                    = 
                                                    (0x3080000U 
                                                     | (0x7ffffU 
                                                        & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs));
                                                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                                    = 
                                                    (0x8000U 
                                                     | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                                            } else {
                                                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                                    = 
                                                    (0x3180000U 
                                                     | (0x7ffffU 
                                                        & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs));
                                                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                                    = 
                                                    (0x20000U 
                                                     | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                                                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                                    = 
                                                    (0x8000U 
                                                     | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                             >> 4U)))) {
                            if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                          >> 3U)))) {
                                if ((4U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                                    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                  >> 1U)))) {
                                        if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                                = (0x3280000U 
                                                   | (0x7ffffU 
                                                      & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs));
                                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                                = (0x30000U 
                                                   | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                                = (0x180U 
                                                   | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                                = (2U 
                                                   | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                                        } else {
                                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                                = (0x3200000U 
                                                   | (0x7ffffU 
                                                      & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs));
                                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                                = (0x30000U 
                                                   | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                                = (0x180U 
                                                   | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                                = (2U 
                                                   | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                                        }
                                    }
                                } else if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                                    if ((1U & (~ vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U]))) {
                                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                            = (0xc00000U 
                                               | (0x7ffffU 
                                                  & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs));
                                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                            = (0x38000U 
                                               | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                            = (2U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                                    }
                                } else if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                        = (0x2080000U 
                                           | (0x7ffffU 
                                              & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs));
                                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                        = (0x30000U 
                                           | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                        = (0x180U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                        = (2U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                                } else {
                                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                        = (0x2000000U 
                                           | (0x7ffffU 
                                              & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs));
                                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                        = (0x30000U 
                                           | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                        = (0x180U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                        = (2U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                             >> 0x1cU)))) {
            if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                          >> 0x1bU)))) {
                if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                              >> 0x1aU)))) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                        = (0x20U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                    if ((0U == (0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                         >> 0x15U)))) {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                            = (0x2e80000U | (0x7ffffU 
                                             & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs));
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                            = (0x8000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                            = (0x400U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                    } else if ((4U == (0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                >> 0x15U)))) {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                            = (0x10000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                            = (0x200U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                            = (4U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                    } else if ((0x10U == (0x1fU & (
                                                   vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                   >> 0x15U)))) {
                        if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                      >> 5U)))) {
                            if ((0x10U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                                if ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                                    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U]))) {
                                                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                                    = 
                                                    (0x20U 
                                                     | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                                            }
                                        }
                                    }
                                }
                            } else if ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                                if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                              >> 2U)))) {
                                    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                  >> 1U)))) {
                                        if ((1U & (~ 
                                                   vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U]))) {
                                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                                = (0x20U 
                                                   | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                                        }
                                    }
                                }
                            } else if ((4U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                                if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                                    if ((1U & (~ vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U]))) {
                                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                            = (0x20U 
                                               | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                            = (4U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                                    }
                                }
                            } else if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                                if ((1U & (~ vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U]))) {
                                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                        = (0x20U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                        = (4U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                                }
                            } else if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                    = (0x20U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x20000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
        if ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
            if ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                if ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                        = (0x2e00000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs));
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                        = (0x8000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                        = (0x20000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                } else {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                        = (0x1300000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs));
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                        = (0x8000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                        = (0x20000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                }
            } else if ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0x1280000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs));
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0x8000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0x20000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
            } else {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0x1200000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs));
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0x8000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0x20000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
            }
        } else if ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
            if ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0x1580000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs));
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0x8000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0x20000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
            } else {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0x1500000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs));
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0x8000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0x20000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
            }
        } else if ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                = (0x1080000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs));
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                = (0x8000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                = (0x20000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
        } else {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                = (0x1000000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs));
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                = (0x8000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                = (0x20000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
        }
    } else if ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
            = (0x30000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
        vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
            = (0x40U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
    } else if ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
        if ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                = (0x8000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                = (0x40U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
        } else {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                = (0x40U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
        }
    } else if ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
            = (0x40U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
        if ((0x100000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
            if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                          >> 0x13U)))) {
                if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                              >> 0x12U)))) {
                    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                  >> 0x11U)))) {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                            = (0x38000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                    }
                }
            }
        } else if ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
            if ((0x40000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                if ((0x20000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                  >> 0x10U)))) {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                            = (0x20000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                    }
                } else if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                     >> 0x10U)))) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                        = (0x20000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                }
            } else {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0x20000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
            }
        } else if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                             >> 0x12U)))) {
            if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                          >> 0x11U)))) {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0x20000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
            }
        }
    } else if ((0x20U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
        if ((0x10U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
            if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                          >> 3U)))) {
                if ((4U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                    if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                        if ((1U & (~ vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U]))) {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                = (0x30000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                = (0x40U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                        }
                    } else if ((1U & (~ vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U]))) {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                            = (0x30000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                            = (0x40U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                    }
                } else if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                    if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                            = (0x30000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                            = (0x40U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                    } else {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                            = (0x30000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                            = (0x40U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                    }
                } else if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                        = (0x30000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                        = (0x40U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                } else {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                        = (0x30000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                        = (0x40U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                }
            }
        } else if ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
            if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                          >> 2U)))) {
                if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                    if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                            = (0x1580000U | (0x7ffffU 
                                             & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs));
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                            = (0x38000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                    } else {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                            = (0x1500000U | (0x7ffffU 
                                             & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs));
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                            = (0x38000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                    }
                }
            }
        } else if ((4U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
            if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                        = (0x1380000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs));
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                        = (0x38000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                } else {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                        = (0x1300000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs));
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                        = (0x38000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                }
            } else if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0x1280000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs));
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0x38000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
            } else {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0x1200000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs));
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0x38000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
            }
        } else if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
            if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0x1180000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs));
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0x38000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
            } else {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0x1100000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs));
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0x38000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
            }
        } else if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                = (0x1080000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs));
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                = (0x38000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
        } else {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                = (0x1000000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs));
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                = (0x38000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
        }
    } else if ((0x10U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
        if ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
            if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                          >> 2U)))) {
                if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                    if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                            = (0xd80000U | (0x7ffffU 
                                            & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs));
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                            = (0x30000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                            = (0x80U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                            = (1U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                    } else {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                            = (0xd00000U | (0x7ffffU 
                                            & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs));
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                            = (0x30000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                            = (0x80U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                            = (1U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                    }
                } else if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                        = (0xc80000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs));
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                        = (0x30000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                        = (0x80U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                        = (2U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                } else {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                        = (0xc00000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs));
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                        = (0x30000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                        = (0x80U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                        = (2U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                }
            }
        } else if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                             >> 2U)))) {
            if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                        = (0x980000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs));
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                        = (0x20000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                        = (0x80U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                } else {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                        = (0x900000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs));
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                        = (0x100U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                        = (0x8000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                }
            } else if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0x880000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs));
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0x20000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0x80U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
            } else {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0x800000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs));
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0x100U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0x8000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
            }
        }
    } else if ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
        if ((4U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
            if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                        = (0x40U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
                }
            } else {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0x60U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
            }
        } else if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
            if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0x500000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs));
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0x38000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
            } else {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0x500000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs));
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0x38000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
            }
        } else if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                = (0x20000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                = (0x40U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                = (0x8000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
        } else {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                = (0x20000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                = (0x40U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
        }
    } else if ((4U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
        if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
            if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0x380000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs));
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0x38000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
            } else {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0x300000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs));
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                    = (0x38000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
            }
        } else if ((1U & (~ vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U]))) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                = (0x200000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs));
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                = (0x38000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
        }
    } else if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
        if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                = (0x180000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs));
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                = (0x18000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
        } else {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                = (0x100000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs));
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                = (0x18000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
        }
    } else if ((1U & (~ vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U]))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
            = (0x3e00000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs));
        vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
            = (0x18000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs);
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_reg_waddr 
        = (0x1fU & ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                     >> 0x1fU) ? ((0x40000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                   ? ((0x20000000U 
                                       & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                       ? ((0x10000000U 
                                           & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                           ? ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                               << 0x15U) 
                                              | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                 >> 0xbU))
                                           : ((0x8000000U 
                                               & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                               ? ((
                                                   vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                   << 0x15U) 
                                                  | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                     >> 0xbU))
                                               : ((0x4000000U 
                                                   & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                   ? 
                                                  ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                    << 0x15U) 
                                                   | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                      >> 0xbU))
                                                   : 
                                                  ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                    << 0x10U) 
                                                   | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                      >> 0x10U)))))
                                       : ((0x10000000U 
                                           & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                           ? ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                               << 0x15U) 
                                              | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                 >> 0xbU))
                                           : ((0x8000000U 
                                               & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                               ? ((
                                                   vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                   << 0x15U) 
                                                  | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                     >> 0xbU))
                                               : ((0x4000000U 
                                                   & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                   ? 
                                                  ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                    << 0x15U) 
                                                   | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                      >> 0xbU))
                                                   : 
                                                  ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                    << 0x10U) 
                                                   | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                      >> 0x10U))))))
                                   : ((0x20000000U 
                                       & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                       ? ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                           << 0x15U) 
                                          | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                             >> 0xbU))
                                       : ((0x10000000U 
                                           & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                           ? ((0x8000000U 
                                               & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                               ? ((0x4000000U 
                                                   & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                   ? 
                                                  ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                    << 0x15U) 
                                                   | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                      >> 0xbU))
                                                   : 
                                                  ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                    << 0x10U) 
                                                   | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                      >> 0x10U)))
                                               : ((
                                                   vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                   << 0x10U) 
                                                  | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                     >> 0x10U)))
                                           : ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                               << 0x10U) 
                                              | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                 >> 0x10U)))))
                     : ((0x40000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                         ? ((0x20000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                             ? ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                 << 0x15U) | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                              >> 0xbU))
                             : ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                 ? ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                     << 0x15U) | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                  >> 0xbU))
                                 : ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                     ? ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                         << 0x15U) 
                                        | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                           >> 0xbU))
                                     : ((0x4000000U 
                                         & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                         ? ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                             << 0x15U) 
                                            | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                               >> 0xbU))
                                         : ((0U == 
                                             (0x1fU 
                                              & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                 >> 0x15U)))
                                             ? ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                 << 0x10U) 
                                                | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                   >> 0x10U))
                                             : ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                 << 0x15U) 
                                                | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                   >> 0xbU)))))))
                         : ((0x20000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                             ? ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                 << 0x10U) | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                              >> 0x10U))
                             : ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                 ? ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                     << 0x15U) | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                  >> 0xbU))
                                 : ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                     ? ((0x4000000U 
                                         & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                         ? 0x1fU : 
                                        ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                          << 0x15U) 
                                         | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                            >> 0xbU)))
                                     : ((0x4000000U 
                                         & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                         ? ((0x11U 
                                             == (0x1fU 
                                                 & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                    >> 0x10U)))
                                             ? 0x1fU
                                             : ((0x10U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                     >> 0x10U)))
                                                 ? 0x1fU
                                                 : 
                                                ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                  << 0x15U) 
                                                 | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                    >> 0xbU))))
                                         : ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                             << 0x15U) 
                                            | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                               >> 0xbU)))))))));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_cmov_type = 0U;
    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                  >> 0x1fU)))) {
        if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                      >> 0x1eU)))) {
            if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                          >> 0x1dU)))) {
                if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                              >> 0x1cU)))) {
                    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                  >> 0x1bU)))) {
                        if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                      >> 0x1aU)))) {
                            if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                          >> 5U)))) {
                                if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                              >> 4U)))) {
                                    if ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                                        if ((1U & (~ 
                                                   (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                    >> 2U)))) {
                                            if ((2U 
                                                 & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                                                vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_cmov_type 
                                                    = 
                                                    ((1U 
                                                      & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                      ? 1U
                                                      : 2U);
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_trap_type = 0U;
    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                  >> 0x1fU)))) {
        if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                      >> 0x1eU)))) {
            if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                          >> 0x1dU)))) {
                if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                              >> 0x1cU)))) {
                    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                  >> 0x1bU)))) {
                        if ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                            if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                          >> 0x14U)))) {
                                if ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                                    if ((0x40000U & 
                                         vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                                        if ((0x20000U 
                                             & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                     >> 0x10U)))) {
                                                vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_trap_type = 2U;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                        >> 0x10U)))) {
                                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_trap_type = 1U;
                                        }
                                    } else {
                                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_trap_type 
                                            = ((0x20000U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                ? (
                                                   (0x10000U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                    ? 6U
                                                    : 5U)
                                                : (
                                                   (0x10000U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                    ? 4U
                                                    : 3U));
                                    }
                                }
                            }
                        } else if ((0x20U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                            if ((0x10U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                                if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                              >> 3U)))) {
                                    if ((4U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                                        if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                                            if ((1U 
                                                 & (~ 
                                                    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U]))) {
                                                vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_trap_type = 2U;
                                            }
                                        } else if (
                                                   (1U 
                                                    & (~ 
                                                       vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U]))) {
                                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_trap_type = 1U;
                                        }
                                    } else {
                                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_trap_type 
                                            = ((2U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                ? (
                                                   (1U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                    ? 6U
                                                    : 5U)
                                                : (
                                                   (1U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                    ? 4U
                                                    : 3U));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 0U;
    if ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
         >> 0x1fU)) {
        if ((0x40000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
            if ((0x20000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                if ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                } else if ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                } else if ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                }
            } else if ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
            } else if ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                              >> 0x1aU)))) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                }
            } else if ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
            }
        } else if ((0x20000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
            if ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                              >> 0x1bU)))) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                }
            }
        } else if ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
            if ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                if ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                }
            }
        }
    } else if ((0x40000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
        if ((0x20000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
            if ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                if ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                } else if ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                } else if ((0x20U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                    if ((0x10U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                    } else if ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                    } else if ((4U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                    } else if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                    }
                } else if ((0x10U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                } else if ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                } else if ((4U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                    if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                    }
                } else if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                    if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                    }
                }
            } else {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
            }
        } else if ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
        } else if ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
        } else if ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
        } else if ((0U != (0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                    >> 0x15U)))) {
            if ((4U != (0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                 >> 0x15U)))) {
                if ((0x10U == (0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                        >> 0x15U)))) {
                    if ((0x20U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                        if ((0x10U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                        } else if ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                        } else if ((4U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                        } else if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                        } else if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                        }
                    } else if ((0x10U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                        if ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                            if ((4U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                                vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                            } else if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                                vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                            } else if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                                vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                            }
                        } else {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                        }
                    } else if ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                        if ((4U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                        } else if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                        } else if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                        }
                    } else if ((4U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                        if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                            if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                                vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                            }
                        } else {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                        }
                    } else if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                        if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                        }
                    } else if ((1U & (~ vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U]))) {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                    }
                } else {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                }
            }
        }
    } else if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                         >> 0x1dU)))) {
        if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                      >> 0x1cU)))) {
            if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                          >> 0x1bU)))) {
                if ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                    if ((0x100000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                        if ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                        } else if ((0x40000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                        } else if ((0x20000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                        }
                    } else if ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                        if ((0x40000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                            if ((0x20000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                                if ((0x10000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                                }
                            } else if ((0x10000U & 
                                        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                                vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                            }
                        }
                    } else if ((0x40000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                    } else if ((0x20000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                    }
                } else if ((0x20U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                    if ((0x10U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                        if ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                        } else if ((4U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                            if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                                if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                                }
                            } else if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                                vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                            }
                        }
                    } else if ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                        if ((4U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                        } else if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                             >> 1U)))) {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                        }
                    }
                } else if ((0x10U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                    if ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                        if ((4U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                        }
                    } else if ((4U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                    }
                } else if ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                    if ((4U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                        if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                            if ((1U & (~ vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U]))) {
                                vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                            }
                        }
                    }
                } else if ((4U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                  >> 1U)))) {
                        if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                        }
                    }
                } else if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                     >> 1U)))) {
                    if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = 1U;
                    }
                }
            }
        }
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_syscall_inst = 0U;
    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                  >> 0x1fU)))) {
        if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                      >> 0x1eU)))) {
            if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                          >> 0x1dU)))) {
                if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                              >> 0x1cU)))) {
                    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                  >> 0x1bU)))) {
                        if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                      >> 0x1aU)))) {
                            if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                          >> 5U)))) {
                                if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                              >> 4U)))) {
                                    if ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                                        if ((4U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U]))) {
                                                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_syscall_inst = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_eret_inst = 0U;
    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                  >> 0x1fU)))) {
        if ((0x40000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
            if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                          >> 0x1dU)))) {
                if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                              >> 0x1cU)))) {
                    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                  >> 0x1bU)))) {
                        if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                      >> 0x1aU)))) {
                            if ((0U != (0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                 >> 0x15U)))) {
                                if ((4U != (0x1fU & 
                                            (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                             >> 0x15U)))) {
                                    if ((0x10U == (0x1fU 
                                                   & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                      >> 0x15U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                    >> 5U)))) {
                                            if ((0x10U 
                                                 & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                                                if (
                                                    (8U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                             >> 2U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                                 >> 1U)))) {
                                                            if (
                                                                (1U 
                                                                 & (~ 
                                                                    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U]))) {
                                                                vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_eret_inst = 1U;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_break_inst = 0U;
    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                  >> 0x1fU)))) {
        if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                      >> 0x1eU)))) {
            if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                          >> 0x1dU)))) {
                if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                              >> 0x1cU)))) {
                    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                  >> 0x1bU)))) {
                        if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                      >> 0x1aU)))) {
                            if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                          >> 5U)))) {
                                if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                              >> 4U)))) {
                                    if ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                                        if ((4U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                                            if ((1U 
                                                 & (~ 
                                                    (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                     >> 1U)))) {
                                                if (
                                                    (1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                                                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_break_inst = 1U;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_cop0_info 
        = ((0xf8U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                     >> 8U)) | (7U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U]));
    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                  >> 0x1fU)))) {
        if ((0x40000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
            if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                          >> 0x1dU)))) {
                if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                              >> 0x1cU)))) {
                    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                  >> 0x1bU)))) {
                        if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                      >> 0x1aU)))) {
                            if ((0U != (0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                 >> 0x15U)))) {
                                if ((4U == (0x1fU & 
                                            (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                             >> 0x15U)))) {
                                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_cop0_info 
                                        = (0x1000U 
                                           | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_cop0_info));
                                } else if ((0x10U == 
                                            (0x1fU 
                                             & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                >> 0x15U)))) {
                                    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                  >> 5U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                    >> 4U)))) {
                                            if ((8U 
                                                 & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                         >> 2U)))) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                             >> 1U)))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U]))) {
                                                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_cop0_info 
                                                                = 
                                                                (0x800U 
                                                                 | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_cop0_info));
                                                        }
                                                    }
                                                }
                                            } else if (
                                                       (4U 
                                                        & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                                                if (
                                                    (2U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                                                    if (
                                                        (1U 
                                                         & (~ 
                                                            vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U]))) {
                                                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_cop0_info 
                                                            = 
                                                            (0x100U 
                                                             | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_cop0_info));
                                                    }
                                                }
                                            } else if (
                                                       (2U 
                                                        & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                                                if (
                                                    (1U 
                                                     & (~ 
                                                        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U]))) {
                                                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_cop0_info 
                                                        = 
                                                        (0x200U 
                                                         | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_cop0_info));
                                                }
                                            } else if (
                                                       (1U 
                                                        & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                                                vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_cop0_info 
                                                    = 
                                                    (0x400U 
                                                     | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_cop0_info));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
         >> 0x1fU)) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_branch_type = 0U;
        vlSelf->mycpu_top__DOT__u_datapath__DOT__master_asciiD 
            = ((0x40000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                ? 0x4e2d52ULL : ((0x20000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                  ? ((0x10000000U & 
                                      vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                      ? 0x4e2d52ULL
                                      : ((0x8000000U 
                                          & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                          ? ((0x4000000U 
                                              & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                              ? 0x5357ULL
                                              : 0x4e2d52ULL)
                                          : ((0x4000000U 
                                              & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                              ? 0x5348ULL
                                              : 0x5342ULL)))
                                  : ((0x10000000U & 
                                      vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                      ? ((0x8000000U 
                                          & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                          ? 0x4e2d52ULL
                                          : ((0x4000000U 
                                              & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                              ? 0x4c4855ULL
                                              : 0x4c4255ULL))
                                      : ((0x8000000U 
                                          & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                          ? ((0x4000000U 
                                              & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                              ? 0x4c57ULL
                                              : 0x4e2d52ULL)
                                          : ((0x4000000U 
                                              & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                              ? 0x4c48ULL
                                              : 0x4c42ULL)))));
    } else {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_branch_type 
            = ((0x40000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                ? 0U : ((0x20000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                         ? 0U : ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                  ? ((0x8000000U & 
                                      vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                      ? ((0x4000000U 
                                          & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                          ? 3U : 4U)
                                      : ((0x4000000U 
                                          & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                          ? 2U : 1U))
                                  : ((0x8000000U & 
                                      vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                      ? 8U : ((0x4000000U 
                                               & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                               ? ((0x100000U 
                                                   & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                   ? 
                                                  ((0x80000U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                    ? 0U
                                                    : 
                                                   ((0x40000U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                     ? 0U
                                                     : 
                                                    ((0x20000U 
                                                      & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                      ? 0U
                                                      : 
                                                     ((0x10000U 
                                                       & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                       ? 5U
                                                       : 6U))))
                                                   : 
                                                  ((0x80000U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                    ? 0U
                                                    : 
                                                   ((0x40000U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                     ? 0U
                                                     : 
                                                    ((0x20000U 
                                                      & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                      ? 0U
                                                      : 
                                                     ((0x10000U 
                                                       & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                       ? 5U
                                                       : 6U)))))
                                               : ((8U 
                                                   == 
                                                   (0x3fU 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U]))
                                                   ? 9U
                                                   : 
                                                  ((9U 
                                                    == 
                                                    (0x3fU 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U]))
                                                    ? 9U
                                                    : 0U)))))));
        vlSelf->mycpu_top__DOT__u_datapath__DOT__master_asciiD 
            = ((0x40000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                ? ((0x20000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                    ? 0x4e2d52ULL : ((0x10000000U & 
                                      vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                      ? 0x4e2d52ULL
                                      : ((0x8000000U 
                                          & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                          ? 0x4e2d52ULL
                                          : ((0x4000000U 
                                              & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                              ? 0x4e2d52ULL
                                              : ((0x42000018U 
                                                  == 
                                                  vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                  ? 0x45524554ULL
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                       >> 0x15U)))
                                                   ? 0x4d544330ULL
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                        >> 0x15U)))
                                                    ? 0x4d464330ULL
                                                    : 0x434f5030ULL)))))))
                : ((0x20000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                    ? ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                        ? ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                            ? ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                ? 0x4c5549ULL : 0x584f5249ULL)
                            : ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                ? 0x4f5249ULL : 0x414e4449ULL))
                        : ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                            ? ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                ? 0x534c544955ULL : 0x534c5449ULL)
                            : ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                ? 0x4144444955ULL : 0x41444449ULL)))
                    : ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                        ? ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                            ? ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                ? 0x4247545aULL : 0x424c455aULL)
                            : ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                ? 0x424e45ULL : 0x424551ULL))
                        : ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                            ? ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                ? 0x4a414cULL : 0x4aULL)
                            : ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                ? ((0x100000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                    ? ((0x80000U & 
                                        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                        ? 0x20ULL : 
                                       ((0x40000U & 
                                         vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                         ? 0x20ULL : 
                                        ((0x20000U 
                                          & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                          ? 0x20ULL
                                          : ((0x10000U 
                                              & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                              ? 0x4247455a414cULL
                                              : 0x424c545a414cULL))))
                                    : ((0x80000U & 
                                        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                        ? 0x20ULL : 
                                       ((0x40000U & 
                                         vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                         ? 0x20ULL : 
                                        ((0x20000U 
                                          & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                          ? 0x20ULL
                                          : ((0x10000U 
                                              & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                              ? 0x4247455aULL
                                              : 0x424c545aULL)))))
                                : ((0x20U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                    ? ((0x10U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                        ? 0x4e2d52ULL
                                        : ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                            ? ((4U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                ? 0x4e2d52ULL
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                     ? 0x534c5455ULL
                                                     : 0x534c54ULL)
                                                    : 0x4e2d52ULL))
                                            : ((4U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                ? (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                     ? 0x4e4f52ULL
                                                     : 0x584f52ULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                     ? 0x4f52ULL
                                                     : 0x414e44ULL))
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                     ? 0x53554255ULL
                                                     : 0x535542ULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                     ? 0x41444455ULL
                                                     : 0x414444ULL)))))
                                    : ((0x10U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                        ? ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                            ? ((4U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                ? 0x4e2d52ULL
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                     ? 0x44495655ULL
                                                     : 0x444956ULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                     ? 0x4d554c5455ULL
                                                     : 0x4d554c54ULL)))
                                            : ((4U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                ? 0x4e2d52ULL
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                     ? 0x4d544c4fULL
                                                     : 0x4d464c4fULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                     ? 0x4d544849ULL
                                                     : 0x4d464849ULL))))
                                        : ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                            ? ((4U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                ? (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                    ? 0x4e2d52ULL
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                     ? 0x425245ULL
                                                     : 0x53595343ULL))
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                    ? 0x4e2d52ULL
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                     ? 0x4a414c52ULL
                                                     : 0x4a52ULL)))
                                            : ((4U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                ? (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                     ? 0x53524156ULL
                                                     : 0x53524c56ULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                     ? 0x4e2d52ULL
                                                     : 0x534c4c56ULL))
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                     ? 0x535241ULL
                                                     : 0x53524cULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                     ? 0x4e2d52ULL
                                                     : 0x534c4cULL)))))))))));
    }
    if ((0U == vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__master_asciiD = 0x4e4f50ULL;
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_branch_target 
        = ((IData)(4U) + (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[1U] 
                          + (((- (IData)((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                >> 0xfU)))) 
                              << 0x12U) | (0x3fffcU 
                                           & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                              << 2U)))));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_is_branch 
        = (1U & (((~ (IData)((0U != (0x3fU & (1U ^ 
                                              ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                << 6U) 
                                               | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                  >> 0x1aU))))))) 
                  & (~ (IData)((0U != (7U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                             >> 0x11U)))))) 
                 | (~ (IData)((0U != (0xfU & (1U ^ 
                                              ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                << 4U) 
                                               | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                  >> 0x1cU)))))))));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_jump_judge__DOT__jr 
        = (1U & ((~ (IData)((0U != (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                    >> 0x1aU)))) & 
                 (~ (IData)((0U != (0x1fU & (4U ^ (
                                                   (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                    << 0x1fU) 
                                                   | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                      >> 1U)))))))));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs = 0U;
    if ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
         >> 0x1fU)) {
        if ((0x40000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
            if ((0x20000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                              >> 0x1cU)))) {
                    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                  >> 0x1bU)))) {
                        if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                      >> 0x1aU)))) {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                = (0x4000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                = (0x800U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                = (0x38000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                = (0x7c00000U | (0x7ffffU 
                                                 & vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs));
                        }
                    }
                }
            } else if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                 >> 0x1cU)))) {
                if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                              >> 0x1bU)))) {
                    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                  >> 0x1aU)))) {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                            = (0xf000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                            = (0x20000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                    }
                }
            }
        } else if ((0x20000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
            if ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                if ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                    if ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                            = ((0x7ffffcfU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs) 
                               | (0x20U | (0x10U & 
                                           ((~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                >> 0x10U)) 
                                            << 4U))));
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                            = ((0x7fffff7U & vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs) 
                               | (8U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                        >> 0xdU)));
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                            = (0x20000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                            = (0x1000000U | (0x7ffffU 
                                             & vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs));
                    } else {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                            = (0x4000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                            = (0x800U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                            = (0x30000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                    }
                }
            } else if ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                if ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                        = (0x4000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                        = (0x800U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                        = (0x30000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                } else {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                        = (0x4000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                        = (0x800U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                        = (0x30000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                }
            } else if ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0x4000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0x800U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0x30000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
            } else {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0x4000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0x800U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0x30000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
            }
        } else if ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
            if ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                              >> 0x1aU)))) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                        = (0x3f000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                }
            } else if ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0xf000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0x20000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
            } else {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0xf000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0x20000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
            }
        } else if ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
            if ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0xf000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0x20000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
            } else {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0x3f000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
            }
        } else if ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                = (0xf000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                = (0x20000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
        } else {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                = (0xf000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                = (0x20000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
        }
    } else if ((0x40000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
        if ((0x20000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
            if ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                              >> 0x1bU)))) {
                    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                  >> 0x1aU)))) {
                        if ((0x20U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                            if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                          >> 4U)))) {
                                if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                              >> 3U)))) {
                                    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                                                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                                    = 
                                                    (0x20000U 
                                                     | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                                                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                                    = 
                                                    (0x3080000U 
                                                     | (0x7ffffU 
                                                        & vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs));
                                                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                                    = 
                                                    (0x8000U 
                                                     | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                                            } else {
                                                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                                    = 
                                                    (0x3180000U 
                                                     | (0x7ffffU 
                                                        & vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs));
                                                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                                    = 
                                                    (0x20000U 
                                                     | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                                                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                                    = 
                                                    (0x8000U 
                                                     | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                                            }
                                        }
                                    }
                                }
                            }
                        } else if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                             >> 4U)))) {
                            if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                          >> 3U)))) {
                                if ((4U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                                    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                  >> 1U)))) {
                                        if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                                = (0x3280000U 
                                                   | (0x7ffffU 
                                                      & vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs));
                                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                                = (0x30000U 
                                                   | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                                = (0x180U 
                                                   | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                                = (2U 
                                                   | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                                        } else {
                                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                                = (0x3200000U 
                                                   | (0x7ffffU 
                                                      & vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs));
                                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                                = (0x30000U 
                                                   | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                                = (0x180U 
                                                   | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                                = (2U 
                                                   | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                                        }
                                    }
                                } else if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                                    if ((1U & (~ vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U]))) {
                                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                            = (0xc00000U 
                                               | (0x7ffffU 
                                                  & vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs));
                                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                            = (0x38000U 
                                               | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                            = (2U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                                    }
                                } else if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                        = (0x2080000U 
                                           | (0x7ffffU 
                                              & vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs));
                                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                        = (0x30000U 
                                           | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                        = (0x180U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                        = (2U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                                } else {
                                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                        = (0x2000000U 
                                           | (0x7ffffU 
                                              & vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs));
                                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                        = (0x30000U 
                                           | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                        = (0x180U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                        = (2U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                             >> 0x1cU)))) {
            if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                          >> 0x1bU)))) {
                if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                              >> 0x1aU)))) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                        = (0x20U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                    if ((0U == (0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                         >> 0x15U)))) {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                            = (0x2e80000U | (0x7ffffU 
                                             & vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs));
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                            = (0x8000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                            = (0x400U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                    } else if ((4U == (0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                >> 0x15U)))) {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                            = (0x10000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                            = (0x200U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                            = (4U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                    } else if ((0x10U == (0x1fU & (
                                                   vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                   >> 0x15U)))) {
                        if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                      >> 5U)))) {
                            if ((0x10U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                                if ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                                    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                  >> 2U)))) {
                                        if ((1U & (~ 
                                                   (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                    >> 1U)))) {
                                            if ((1U 
                                                 & (~ 
                                                    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U]))) {
                                                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                                    = 
                                                    (0x20U 
                                                     | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                                            }
                                        }
                                    }
                                }
                            } else if ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                                if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                              >> 2U)))) {
                                    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                  >> 1U)))) {
                                        if ((1U & (~ 
                                                   vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U]))) {
                                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                                = (0x20U 
                                                   | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                                        }
                                    }
                                }
                            } else if ((4U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                                if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                                    if ((1U & (~ vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U]))) {
                                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                            = (0x20U 
                                               | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                            = (4U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                                    }
                                }
                            } else if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                                if ((1U & (~ vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U]))) {
                                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                        = (0x20U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                        = (4U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                                }
                            } else if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                    = (0x20U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                            }
                        }
                    }
                }
            }
        }
    } else if ((0x20000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
        if ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
            if ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                if ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                        = (0x2e00000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs));
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                        = (0x8000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                        = (0x20000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                } else {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                        = (0x1300000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs));
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                        = (0x8000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                        = (0x20000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                }
            } else if ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0x1280000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs));
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0x8000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0x20000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
            } else {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0x1200000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs));
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0x8000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0x20000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
            }
        } else if ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
            if ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0x1580000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs));
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0x8000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0x20000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
            } else {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0x1500000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs));
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0x8000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0x20000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
            }
        } else if ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                = (0x1080000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs));
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                = (0x8000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                = (0x20000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
        } else {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                = (0x1000000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs));
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                = (0x8000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                = (0x20000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
        }
    } else if ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
            = (0x30000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
        vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
            = (0x40U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
    } else if ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
        if ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                = (0x8000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                = (0x40U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
        } else {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                = (0x40U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
        }
    } else if ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
            = (0x40U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
        if ((0x100000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
            if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                          >> 0x13U)))) {
                if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                              >> 0x12U)))) {
                    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                  >> 0x11U)))) {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                            = (0x38000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                    }
                }
            }
        } else if ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
            if ((0x40000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                if ((0x20000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                  >> 0x10U)))) {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                            = (0x20000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                    }
                } else if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                     >> 0x10U)))) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                        = (0x20000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                }
            } else {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0x20000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
            }
        } else if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                             >> 0x12U)))) {
            if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                          >> 0x11U)))) {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0x20000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
            }
        }
    } else if ((0x20U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
        if ((0x10U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
            if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                          >> 3U)))) {
                if ((4U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                    if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                        if ((1U & (~ vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U]))) {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                = (0x30000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                = (0x40U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                        }
                    } else if ((1U & (~ vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U]))) {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                            = (0x30000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                            = (0x40U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                    }
                } else if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                    if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                            = (0x30000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                            = (0x40U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                    } else {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                            = (0x30000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                            = (0x40U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                    }
                } else if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                        = (0x30000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                        = (0x40U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                } else {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                        = (0x30000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                        = (0x40U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                }
            }
        } else if ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
            if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                          >> 2U)))) {
                if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                    if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                            = (0x1580000U | (0x7ffffU 
                                             & vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs));
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                            = (0x38000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                    } else {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                            = (0x1500000U | (0x7ffffU 
                                             & vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs));
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                            = (0x38000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                    }
                }
            }
        } else if ((4U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
            if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                        = (0x1380000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs));
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                        = (0x38000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                } else {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                        = (0x1300000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs));
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                        = (0x38000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                }
            } else if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0x1280000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs));
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0x38000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
            } else {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0x1200000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs));
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0x38000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
            }
        } else if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
            if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0x1180000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs));
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0x38000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
            } else {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0x1100000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs));
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0x38000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
            }
        } else if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                = (0x1080000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs));
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                = (0x38000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
        } else {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                = (0x1000000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs));
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                = (0x38000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
        }
    } else if ((0x10U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
        if ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
            if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                          >> 2U)))) {
                if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                    if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                            = (0xd80000U | (0x7ffffU 
                                            & vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs));
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                            = (0x30000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                            = (0x80U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                            = (1U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                    } else {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                            = (0xd00000U | (0x7ffffU 
                                            & vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs));
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                            = (0x30000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                            = (0x80U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                            = (1U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                    }
                } else if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                        = (0xc80000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs));
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                        = (0x30000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                        = (0x80U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                        = (2U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                } else {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                        = (0xc00000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs));
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                        = (0x30000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                        = (0x80U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                        = (2U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                }
            }
        } else if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                             >> 2U)))) {
            if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                        = (0x980000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs));
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                        = (0x20000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                        = (0x80U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                } else {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                        = (0x900000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs));
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                        = (0x100U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                        = (0x8000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                }
            } else if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0x880000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs));
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0x20000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0x80U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
            } else {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0x800000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs));
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0x100U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0x8000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
            }
        }
    } else if ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
        if ((4U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
            if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                        = (0x40U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
                }
            } else {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0x60U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
            }
        } else if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
            if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0x500000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs));
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0x38000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
            } else {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0x500000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs));
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0x38000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
            }
        } else if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                = (0x20000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                = (0x40U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                = (0x8000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
        } else {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                = (0x20000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                = (0x40U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
        }
    } else if ((4U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
        if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
            if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0x380000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs));
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0x38000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
            } else {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0x300000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs));
                vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                    = (0x38000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
            }
        } else if ((1U & (~ vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U]))) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                = (0x200000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs));
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                = (0x38000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
        }
    } else if ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
        if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                = (0x180000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs));
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                = (0x18000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
        } else {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                = (0x100000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs));
            vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                = (0x18000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
        }
    } else if ((1U & (~ vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U]))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
            = (0x3e00000U | (0x7ffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs));
        vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
            = (0x18000U | vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs);
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_reg_waddr 
        = (0x1fU & ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                     >> 0x1fU) ? ((0x40000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                   ? ((0x20000000U 
                                       & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                       ? ((0x10000000U 
                                           & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                           ? ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                               << 0x15U) 
                                              | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                 >> 0xbU))
                                           : ((0x8000000U 
                                               & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                               ? ((
                                                   vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                   << 0x15U) 
                                                  | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                     >> 0xbU))
                                               : ((0x4000000U 
                                                   & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                   ? 
                                                  ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                    << 0x15U) 
                                                   | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                      >> 0xbU))
                                                   : 
                                                  ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                    << 0x10U) 
                                                   | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                      >> 0x10U)))))
                                       : ((0x10000000U 
                                           & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                           ? ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                               << 0x15U) 
                                              | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                 >> 0xbU))
                                           : ((0x8000000U 
                                               & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                               ? ((
                                                   vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                   << 0x15U) 
                                                  | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                     >> 0xbU))
                                               : ((0x4000000U 
                                                   & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                   ? 
                                                  ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                    << 0x15U) 
                                                   | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                      >> 0xbU))
                                                   : 
                                                  ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                    << 0x10U) 
                                                   | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                      >> 0x10U))))))
                                   : ((0x20000000U 
                                       & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                       ? ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                           << 0x15U) 
                                          | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                             >> 0xbU))
                                       : ((0x10000000U 
                                           & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                           ? ((0x8000000U 
                                               & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                               ? ((0x4000000U 
                                                   & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                   ? 
                                                  ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                    << 0x15U) 
                                                   | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                      >> 0xbU))
                                                   : 
                                                  ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                    << 0x10U) 
                                                   | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                      >> 0x10U)))
                                               : ((
                                                   vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                   << 0x10U) 
                                                  | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                     >> 0x10U)))
                                           : ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                               << 0x10U) 
                                              | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                 >> 0x10U)))))
                     : ((0x40000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                         ? ((0x20000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                             ? ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                 << 0x15U) | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                              >> 0xbU))
                             : ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                 ? ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                     << 0x15U) | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                  >> 0xbU))
                                 : ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                     ? ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                         << 0x15U) 
                                        | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                           >> 0xbU))
                                     : ((0x4000000U 
                                         & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                         ? ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                             << 0x15U) 
                                            | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                               >> 0xbU))
                                         : ((0U == 
                                             (0x1fU 
                                              & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                 >> 0x15U)))
                                             ? ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                 << 0x10U) 
                                                | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                   >> 0x10U))
                                             : ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                 << 0x15U) 
                                                | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                   >> 0xbU)))))))
                         : ((0x20000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                             ? ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                 << 0x10U) | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                              >> 0x10U))
                             : ((0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                 ? ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                     << 0x15U) | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                  >> 0xbU))
                                 : ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                     ? ((0x4000000U 
                                         & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                         ? 0x1fU : 
                                        ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                          << 0x15U) 
                                         | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                            >> 0xbU)))
                                     : ((0x4000000U 
                                         & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                         ? ((0x11U 
                                             == (0x1fU 
                                                 & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                    >> 0x10U)))
                                             ? 0x1fU
                                             : ((0x10U 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                     >> 0x10U)))
                                                 ? 0x1fU
                                                 : 
                                                ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                  << 0x15U) 
                                                 | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                    >> 0xbU))))
                                         : ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                             << 0x15U) 
                                            | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                               >> 0xbU)))))))));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_pred_fail 
        = ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_pred_take) 
           ^ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_actual_take));
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__inst_pa 
        = ((vlSelf->mycpu_top__DOT__i_cache_inst__DOT__inst_tag 
            << 0xcU) | (0xfffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg));
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__tag_compare_valid 
        = ((2U & (IData)(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__tag_compare_valid)) 
           | ((vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_tag
               [0U] == vlSelf->mycpu_top__DOT__i_cache_inst__DOT__inst_tag) 
              & (vlSelf->mycpu_top__DOT__i_cache_inst__DOT__meta
                 [(0x3fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg 
                            >> 6U))] >> 1U)));
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__tag_compare_valid 
        = ((1U & (IData)(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__tag_compare_valid)) 
           | (0x7ffffffeU & (((vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_tag
                               [1U] == vlSelf->mycpu_top__DOT__i_cache_inst__DOT__inst_tag) 
                              << 1U) & (vlSelf->mycpu_top__DOT__i_cache_inst__DOT__meta
                                        [(0x3fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg 
                                                   >> 6U))] 
                                        >> 1U))));
    vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_forward_top__alu_wen1 
        = ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_reg_wen) 
           & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                 >> 0xdU)));
    vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_forward_top__alu_wen2 
        = ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_reg_wen) 
           & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                 >> 0xdU)));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_a 
        = ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)
            ? vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srca
            : vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srca);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_a 
        = ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)
            ? vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srca
            : vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srca);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_b 
        = ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)
            ? vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srcb
            : vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srcb);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_b 
        = ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)
            ? vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srcb
            : vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srcb);
    if (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_use_replace_addr) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_word_addr 
            = (0x3ffU & (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_replace_addr));
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_line_addr 
            = (0x3fU & ((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_replace_addr) 
                        >> 4U));
    } else {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_word_addr 
            = (0x3ffU & ((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_addr_choose)
                          ? (vlSelf->mycpu_top__DOT__data_addr 
                             >> 2U) : (vlSelf->mycpu_top__DOT__mem_addrE_dp 
                                       >> 2U)));
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_line_addr 
            = (0x3fU & ((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_addr_choose)
                         ? (vlSelf->mycpu_top__DOT__data_addr 
                            >> 6U) : (vlSelf->mycpu_top__DOT__mem_addrE_dp 
                                      >> 6U)));
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__master_except 
        = (1U & ((0U != vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except) 
                 | (~ (IData)((0U != vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except)))));
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__tag_compare_valid 
        = ((2U & (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__tag_compare_valid)) 
           | (((vlSelf->mycpu_top__DOT__d_cache_inst__DOT__cache_tag
                [0U] == (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__M_mem_pa 
                         >> 0xcU)) & (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__meta
                                      [(0x3fU & (vlSelf->mycpu_top__DOT__data_addr 
                                                 >> 6U))] 
                                      >> 3U)) & (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__translation_ok)));
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__tag_compare_valid 
        = ((1U & (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__tag_compare_valid)) 
           | (0x1ffffffeU & ((((vlSelf->mycpu_top__DOT__d_cache_inst__DOT__cache_tag
                                [1U] == (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__M_mem_pa 
                                         >> 0xcU)) 
                               << 1U) & (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__meta
                                         [(0x3fU & 
                                           (vlSelf->mycpu_top__DOT__data_addr 
                                            >> 6U))] 
                                         >> 3U)) & 
                             ((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__translation_ok) 
                              << 1U))));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched_index[0U] 
        = (7U & (((((((1U & (- (IData)((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
                                              [0U] 
                                              >> 1U))))) 
                      | (2U & (- (IData)((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
                                                [0U] 
                                                >> 2U)))))) 
                     | (3U & (- (IData)((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
                                               [0U] 
                                               >> 3U)))))) 
                    | (4U & (- (IData)((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
                                              [0U] 
                                              >> 4U)))))) 
                   | (5U & (- (IData)((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
                                             [0U] >> 5U)))))) 
                  | (6U & (- (IData)((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
                                            [0U] >> 6U)))))) 
                 | (- (IData)((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
                                     [0U] >> 7U))))));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched_index[1U] 
        = (7U & (((((((1U & (- (IData)((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
                                              [1U] 
                                              >> 1U))))) 
                      | (2U & (- (IData)((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
                                                [1U] 
                                                >> 2U)))))) 
                     | (3U & (- (IData)((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
                                               [1U] 
                                               >> 3U)))))) 
                    | (4U & (- (IData)((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
                                              [1U] 
                                              >> 4U)))))) 
                   | (5U & (- (IData)((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
                                             [1U] >> 5U)))))) 
                  | (6U & (- (IData)((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
                                            [1U] >> 6U)))))) 
                 | (- (IData)((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
                                     [1U] >> 7U))))));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched_index[2U] 
        = (7U & (((((((1U & (- (IData)((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
                                              [2U] 
                                              >> 1U))))) 
                      | (2U & (- (IData)((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
                                                [2U] 
                                                >> 2U)))))) 
                     | (3U & (- (IData)((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
                                               [2U] 
                                               >> 3U)))))) 
                    | (4U & (- (IData)((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
                                              [2U] 
                                              >> 4U)))))) 
                   | (5U & (- (IData)((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
                                             [2U] >> 5U)))))) 
                  | (6U & (- (IData)((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
                                            [2U] >> 6U)))))) 
                 | (- (IData)((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
                                     [2U] >> 7U))))));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_is_bj 
        = (1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_is_branch) 
                 | ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_jump_judge__DOT__jr) 
                    | (~ (IData)((0U != (0x1fU & (1U 
                                                  ^ 
                                                  ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                    << 5U) 
                                                   | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                      >> 0x1bU))))))))));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_jump_conflict 
        = ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_jump_judge__DOT__jr) 
           & (((((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_reg_wen) 
                 & ((0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                              >> 0x15U)) == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_reg_waddr))) 
                | ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_reg_wen) 
                   & ((0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                >> 0x15U)) == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_reg_waddr)))) 
               | ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_reg_wen) 
                  & ((0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                               >> 0x15U)) == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_reg_waddr)))) 
              | ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_reg_wen) 
                 & ((0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                              >> 0x15U)) == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_reg_waddr)))));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_issue_ctrl__DOT__data_conflict 
        = (1U & (((((vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                     >> 0xfU) & (((vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                   >> 0x11U) & ((0x1fU 
                                                 & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                    >> 0x15U)) 
                                                == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_reg_waddr))) 
                                 | ((vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                     >> 0x10U) & ((0x1fU 
                                                   & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                      >> 0x10U)) 
                                                  == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_reg_waddr))))) 
                   | ((vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                       >> 7U) & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                 >> 8U))) | ((vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                              >> 9U) 
                                             & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                                >> 0xaU))) 
                 | (((vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                      >> 0xdU) & (((vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                    >> 0x11U) & ((0x1fU 
                                                  & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                     >> 0x15U)) 
                                                 == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_reg_waddr))) 
                                  | ((vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                      >> 0x10U) & (
                                                   (0x1fU 
                                                    & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                       >> 0x10U)) 
                                                   == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_reg_waddr))))) 
                    | ((vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                        >> 0xdU) & (((vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                      >> 0x11U) & (
                                                   (0x1fU 
                                                    & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                       >> 0x15U)) 
                                                   == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_reg_waddr))) 
                                    | ((vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                        >> 0x10U) & 
                                       ((0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                  >> 0x10U)) 
                                        == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_reg_waddr))))))));
    vlSelf->mycpu_top__DOT__inst_rdata1 = ((0U == vlSelf->mycpu_top__DOT__i_cache_inst__DOT__icache_status)
                                            ? ((4U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg)
                                                ? (IData)(
                                                          (vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_data
                                                           [
                                                           (1U 
                                                            & ((IData)(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__tag_compare_valid) 
                                                               >> 1U))] 
                                                           >> 0x20U))
                                                : (IData)(
                                                          vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_data
                                                          [
                                                          (1U 
                                                           & ((IData)(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__tag_compare_valid) 
                                                              >> 1U))]))
                                            : vlSelf->mycpu_top__DOT__i_cache_inst__DOT__saved_inst0);
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_inst1 
        = (IData)((vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_data
                   [(1U & ((IData)(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__tag_compare_valid) 
                           >> 1U))] >> 0x20U));
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_hit_available 
        = (((0U != (IData)(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__tag_compare_valid)) 
            & (IData)(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__translation_ok)) 
           & (~ (IData)(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__uncached)));
    if (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_sign) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__cal_a 
            = ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_a 
                >> 0x1fU) ? (- vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_a)
                : vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_a);
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__cal_b 
            = ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_b 
                >> 0x1fU) ? (- vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_b)
                : vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_b);
    } else {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__cal_a 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_a;
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__cal_b 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_b;
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_result 
        = (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_sign) 
            & ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_a 
                ^ vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_b) 
               >> 0x1fU)) ? (- vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__mid_result)
            : vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__mid_result);
    if (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__master_except) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except_bd 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_is_in_delayslot;
        vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except_pc 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_pc;
        vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except;
    } else {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except_bd 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_is_in_delayslot;
        vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except_pc 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_pc;
        vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except;
    }
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_wea[0U] 
        = ((((((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__tag_compare_valid) 
               & (IData)(vlSelf->mycpu_top__DOT__data_en)) 
              & (0U != (IData)(vlSelf->mycpu_top__DOT__data_wen))) 
             & (~ (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__M_mem_uncached))) 
            & (0U == vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dcache_status))
            ? (IData)(vlSelf->mycpu_top__DOT__data_wen)
            : vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_replace_wea
           [0U]);
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_wea[1U] 
        = (((((((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__tag_compare_valid) 
                >> 1U) & (IData)(vlSelf->mycpu_top__DOT__data_en)) 
              & (0U != (IData)(vlSelf->mycpu_top__DOT__data_wen))) 
             & (~ (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__M_mem_uncached))) 
            & (0U == vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dcache_status))
            ? (IData)(vlSelf->mycpu_top__DOT__data_wen)
            : vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_replace_wea
           [1U]);
    vlSelf->mycpu_top__DOT__data_rdata = ((5U == vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dcache_status)
                                           ? vlSelf->mycpu_top__DOT__d_cache_inst__DOT__saved_rdata
                                           : vlSelf->mycpu_top__DOT__d_cache_inst__DOT__cache_data_forward
                                          [(1U & ((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__tag_compare_valid) 
                                                  >> 1U))]);
    vlSelf->mycpu_top__DOT__d_cache_stall = (1U & (
                                                   (0U 
                                                    == vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dcache_status)
                                                    ? 
                                                   ((IData)(vlSelf->mycpu_top__DOT__data_en)
                                                     ? 
                                                    (((((~ (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__M_mem_uncached)) 
                                                        & (~ (IData)(
                                                                     (0U 
                                                                      != (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__tag_compare_valid))))) 
                                                       | ((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__M_mem_uncached) 
                                                          & (~ (IData)(
                                                                       (0U 
                                                                        != (IData)(vlSelf->mycpu_top__DOT__data_wen)))))) 
                                                      | (((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__M_mem_uncached) 
                                                          & (0U 
                                                             != (IData)(vlSelf->mycpu_top__DOT__data_wen))) 
                                                         & (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_full))) 
                                                     | (~ (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__translation_ok)))
                                                     : 
                                                    (vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs 
                                                     >> 3U))
                                                    : 
                                                   (5U 
                                                    != vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dcache_status)));
    vlSelf->mycpu_top__DOT__itlb_entry[0U] = vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
        [vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched_index
        [1U]][0U];
    vlSelf->mycpu_top__DOT__itlb_entry[1U] = vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
        [vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched_index
        [1U]][1U];
    vlSelf->mycpu_top__DOT__itlb_entry[2U] = vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
        [vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched_index
        [1U]][2U];
    vlSelf->mycpu_top__DOT__dtlb_entry[0U] = vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
        [vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched_index
        [2U]][0U];
    vlSelf->mycpu_top__DOT__dtlb_entry[1U] = vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
        [vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched_index
        [2U]][1U];
    vlSelf->mycpu_top__DOT__dtlb_entry[2U] = vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
        [vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched_index
        [2U]][2U];
    vlSelf->mycpu_top__DOT__u_datapath__DOT__master_asciiF 
        = ((vlSelf->mycpu_top__DOT__inst_rdata1 >> 0x1fU)
            ? ((0x40000000U & vlSelf->mycpu_top__DOT__inst_rdata1)
                ? 0x4e2d52ULL : ((0x20000000U & vlSelf->mycpu_top__DOT__inst_rdata1)
                                  ? ((0x10000000U & vlSelf->mycpu_top__DOT__inst_rdata1)
                                      ? 0x4e2d52ULL
                                      : ((0x8000000U 
                                          & vlSelf->mycpu_top__DOT__inst_rdata1)
                                          ? ((0x4000000U 
                                              & vlSelf->mycpu_top__DOT__inst_rdata1)
                                              ? 0x5357ULL
                                              : 0x4e2d52ULL)
                                          : ((0x4000000U 
                                              & vlSelf->mycpu_top__DOT__inst_rdata1)
                                              ? 0x5348ULL
                                              : 0x5342ULL)))
                                  : ((0x10000000U & vlSelf->mycpu_top__DOT__inst_rdata1)
                                      ? ((0x8000000U 
                                          & vlSelf->mycpu_top__DOT__inst_rdata1)
                                          ? 0x4e2d52ULL
                                          : ((0x4000000U 
                                              & vlSelf->mycpu_top__DOT__inst_rdata1)
                                              ? 0x4c4855ULL
                                              : 0x4c4255ULL))
                                      : ((0x8000000U 
                                          & vlSelf->mycpu_top__DOT__inst_rdata1)
                                          ? ((0x4000000U 
                                              & vlSelf->mycpu_top__DOT__inst_rdata1)
                                              ? 0x4c57ULL
                                              : 0x4e2d52ULL)
                                          : ((0x4000000U 
                                              & vlSelf->mycpu_top__DOT__inst_rdata1)
                                              ? 0x4c48ULL
                                              : 0x4c42ULL)))))
            : ((0x40000000U & vlSelf->mycpu_top__DOT__inst_rdata1)
                ? ((0x20000000U & vlSelf->mycpu_top__DOT__inst_rdata1)
                    ? 0x4e2d52ULL : ((0x10000000U & vlSelf->mycpu_top__DOT__inst_rdata1)
                                      ? 0x4e2d52ULL
                                      : ((0x8000000U 
                                          & vlSelf->mycpu_top__DOT__inst_rdata1)
                                          ? 0x4e2d52ULL
                                          : ((0x4000000U 
                                              & vlSelf->mycpu_top__DOT__inst_rdata1)
                                              ? 0x4e2d52ULL
                                              : ((0x42000018U 
                                                  == vlSelf->mycpu_top__DOT__inst_rdata1)
                                                  ? 0x45524554ULL
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->mycpu_top__DOT__inst_rdata1 
                                                       >> 0x15U)))
                                                   ? 0x4d544330ULL
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->mycpu_top__DOT__inst_rdata1 
                                                        >> 0x15U)))
                                                    ? 0x4d464330ULL
                                                    : 0x434f5030ULL)))))))
                : ((0x20000000U & vlSelf->mycpu_top__DOT__inst_rdata1)
                    ? ((0x10000000U & vlSelf->mycpu_top__DOT__inst_rdata1)
                        ? ((0x8000000U & vlSelf->mycpu_top__DOT__inst_rdata1)
                            ? ((0x4000000U & vlSelf->mycpu_top__DOT__inst_rdata1)
                                ? 0x4c5549ULL : 0x584f5249ULL)
                            : ((0x4000000U & vlSelf->mycpu_top__DOT__inst_rdata1)
                                ? 0x4f5249ULL : 0x414e4449ULL))
                        : ((0x8000000U & vlSelf->mycpu_top__DOT__inst_rdata1)
                            ? ((0x4000000U & vlSelf->mycpu_top__DOT__inst_rdata1)
                                ? 0x534c544955ULL : 0x534c5449ULL)
                            : ((0x4000000U & vlSelf->mycpu_top__DOT__inst_rdata1)
                                ? 0x4144444955ULL : 0x41444449ULL)))
                    : ((0x10000000U & vlSelf->mycpu_top__DOT__inst_rdata1)
                        ? ((0x8000000U & vlSelf->mycpu_top__DOT__inst_rdata1)
                            ? ((0x4000000U & vlSelf->mycpu_top__DOT__inst_rdata1)
                                ? 0x4247545aULL : 0x424c455aULL)
                            : ((0x4000000U & vlSelf->mycpu_top__DOT__inst_rdata1)
                                ? 0x424e45ULL : 0x424551ULL))
                        : ((0x8000000U & vlSelf->mycpu_top__DOT__inst_rdata1)
                            ? ((0x4000000U & vlSelf->mycpu_top__DOT__inst_rdata1)
                                ? 0x4a414cULL : 0x4aULL)
                            : ((0x4000000U & vlSelf->mycpu_top__DOT__inst_rdata1)
                                ? ((0x100000U & vlSelf->mycpu_top__DOT__inst_rdata1)
                                    ? ((0x80000U & vlSelf->mycpu_top__DOT__inst_rdata1)
                                        ? 0x20ULL : 
                                       ((0x40000U & vlSelf->mycpu_top__DOT__inst_rdata1)
                                         ? 0x20ULL : 
                                        ((0x20000U 
                                          & vlSelf->mycpu_top__DOT__inst_rdata1)
                                          ? 0x20ULL
                                          : ((0x10000U 
                                              & vlSelf->mycpu_top__DOT__inst_rdata1)
                                              ? 0x4247455a414cULL
                                              : 0x424c545a414cULL))))
                                    : ((0x80000U & vlSelf->mycpu_top__DOT__inst_rdata1)
                                        ? 0x20ULL : 
                                       ((0x40000U & vlSelf->mycpu_top__DOT__inst_rdata1)
                                         ? 0x20ULL : 
                                        ((0x20000U 
                                          & vlSelf->mycpu_top__DOT__inst_rdata1)
                                          ? 0x20ULL
                                          : ((0x10000U 
                                              & vlSelf->mycpu_top__DOT__inst_rdata1)
                                              ? 0x4247455aULL
                                              : 0x424c545aULL)))))
                                : ((0x20U & vlSelf->mycpu_top__DOT__inst_rdata1)
                                    ? ((0x10U & vlSelf->mycpu_top__DOT__inst_rdata1)
                                        ? 0x4e2d52ULL
                                        : ((8U & vlSelf->mycpu_top__DOT__inst_rdata1)
                                            ? ((4U 
                                                & vlSelf->mycpu_top__DOT__inst_rdata1)
                                                ? 0x4e2d52ULL
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__inst_rdata1)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__inst_rdata1)
                                                     ? 0x534c5455ULL
                                                     : 0x534c54ULL)
                                                    : 0x4e2d52ULL))
                                            : ((4U 
                                                & vlSelf->mycpu_top__DOT__inst_rdata1)
                                                ? (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__inst_rdata1)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__inst_rdata1)
                                                     ? 0x4e4f52ULL
                                                     : 0x584f52ULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__inst_rdata1)
                                                     ? 0x4f52ULL
                                                     : 0x414e44ULL))
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__inst_rdata1)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__inst_rdata1)
                                                     ? 0x53554255ULL
                                                     : 0x535542ULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__inst_rdata1)
                                                     ? 0x41444455ULL
                                                     : 0x414444ULL)))))
                                    : ((0x10U & vlSelf->mycpu_top__DOT__inst_rdata1)
                                        ? ((8U & vlSelf->mycpu_top__DOT__inst_rdata1)
                                            ? ((4U 
                                                & vlSelf->mycpu_top__DOT__inst_rdata1)
                                                ? 0x4e2d52ULL
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__inst_rdata1)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__inst_rdata1)
                                                     ? 0x44495655ULL
                                                     : 0x444956ULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__inst_rdata1)
                                                     ? 0x4d554c5455ULL
                                                     : 0x4d554c54ULL)))
                                            : ((4U 
                                                & vlSelf->mycpu_top__DOT__inst_rdata1)
                                                ? 0x4e2d52ULL
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__inst_rdata1)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__inst_rdata1)
                                                     ? 0x4d544c4fULL
                                                     : 0x4d464c4fULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__inst_rdata1)
                                                     ? 0x4d544849ULL
                                                     : 0x4d464849ULL))))
                                        : ((8U & vlSelf->mycpu_top__DOT__inst_rdata1)
                                            ? ((4U 
                                                & vlSelf->mycpu_top__DOT__inst_rdata1)
                                                ? (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__inst_rdata1)
                                                    ? 0x4e2d52ULL
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__inst_rdata1)
                                                     ? 0x425245ULL
                                                     : 0x53595343ULL))
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__inst_rdata1)
                                                    ? 0x4e2d52ULL
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__inst_rdata1)
                                                     ? 0x4a414c52ULL
                                                     : 0x4a52ULL)))
                                            : ((4U 
                                                & vlSelf->mycpu_top__DOT__inst_rdata1)
                                                ? (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__inst_rdata1)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__inst_rdata1)
                                                     ? 0x53524156ULL
                                                     : 0x53524c56ULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__inst_rdata1)
                                                     ? 0x4e2d52ULL
                                                     : 0x534c4c56ULL))
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__inst_rdata1)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__inst_rdata1)
                                                     ? 0x535241ULL
                                                     : 0x53524cULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__inst_rdata1)
                                                     ? 0x4e2d52ULL
                                                     : 0x534c4cULL))))))))))));
    if ((0U == vlSelf->mycpu_top__DOT__inst_rdata1)) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__master_asciiF = 0x4e4f50ULL;
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__write_line1[0U] 
        = (IData)((((QData)((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg)) 
                    << 0x20U) | (QData)((IData)(vlSelf->mycpu_top__DOT__inst_rdata1))));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__write_line1[1U] 
        = (IData)(((((QData)((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg)) 
                     << 0x20U) | (QData)((IData)(vlSelf->mycpu_top__DOT__inst_rdata1))) 
                   >> 0x20U));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__write_line1[2U] 
        = (((IData)(vlSelf->mycpu_top__DOT__inst_tlb_refill) 
            << 1U) | (IData)(vlSelf->mycpu_top__DOT__inst_tlb_invalid));
    vlSelf->mycpu_top__DOT__inst_rdata2 = ((0U == vlSelf->mycpu_top__DOT__i_cache_inst__DOT__icache_status)
                                            ? vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_inst1
                                            : vlSelf->mycpu_top__DOT__i_cache_inst__DOT__saved_inst1);
    vlSelf->mycpu_top__DOT__inst_data_ok1 = (((0U == vlSelf->mycpu_top__DOT__i_cache_inst__DOT__icache_status)
                                               ? (IData)(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_hit_available)
                                               : (IData)(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__saved_inst_ok0)) 
                                             & (IData)(vlSelf->mycpu_top__DOT__inst_en));
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_inst_ok1 
        = ((IData)(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_hit_available) 
           & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg 
                 >> 2U)));
    vlSelf->mycpu_top__DOT__i_cache_stall = ((0U == vlSelf->mycpu_top__DOT__i_cache_inst__DOT__icache_status)
                                              ? ((~ (IData)(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_hit_available)) 
                                                 & (IData)(vlSelf->mycpu_top__DOT__inst_en))
                                              : (4U 
                                                 != vlSelf->mycpu_top__DOT__i_cache_inst__DOT__icache_status));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_start2 = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_sign2 = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_overflow = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_start2 = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_sign2 = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluB__DOT__temp_aluout_64 = 0ULL;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_res = 0U;
    if ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_res 
            = ((0x2000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)
                ? ((0x1000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)
                    ? ((0x800000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)
                        ? ((0x400000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)
                            ? ((0x200000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)
                                ? 0U : ((0x100000U 
                                         & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)
                                         ? 0U : ((0x80000U 
                                                  & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)
                                                  ? 0U
                                                  : 1U)))
                            : 0U) : 0U) : 0U) : 0U);
    } else if ((0x2000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)) {
        if ((0x1000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)) {
            if ((0x800000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)) {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_res 
                    = ((0x400000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)
                        ? ((0x200000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)
                            ? ((0x100000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)
                                ? 0U : ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)
                                         ? 0U : (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srcb 
                                                 << 
                                                 (0x1fU 
                                                  & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srca))))
                            : 0U) : 0U);
            } else if ((0x400000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)) {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_res = 0U;
            } else if ((0x200000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)) {
                if ((0x100000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_res = 0U;
                } else if ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)) {
                    if (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_ready) {
                        if (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_ready) {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_start2 = 0U;
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluB__DOT__temp_aluout_64 
                                = (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_hilo_reg__DOT__hilo_reg 
                                   - vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_result);
                        }
                    } else {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_start2 = 1U;
                    }
                } else if (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_ready) {
                    if (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_ready) {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_start2 = 0U;
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_sign2 = 1U;
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluB__DOT__temp_aluout_64 
                            = (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_hilo_reg__DOT__hilo_reg 
                               - vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_result);
                    }
                } else {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_start2 = 1U;
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_sign2 = 1U;
                }
            } else if ((0x100000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)) {
                if ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_res = 0x20U;
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluB__DOT__i = 0x1fU;
                    {
                        while (VL_LTES_III(1,32,32, 0U, vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluB__DOT__i)) {
                            if ((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srca 
                                       >> (0x1fU & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluB__DOT__i)))) {
                                vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_res 
                                    = ((IData)(0x1fU) 
                                       - vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluB__DOT__i);
                                goto __Vlabel1;
                            }
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluB__DOT__i 
                                = (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluB__DOT__i 
                                   - (IData)(1U));
                        }
                        __Vlabel1: ;
                    }
                } else {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_res = 0U;
                }
            } else if ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)) {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_res = 0x20U;
                vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluB__DOT__i = 0x1fU;
                {
                    while (VL_LTES_III(1,32,32, 0U, vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluB__DOT__i)) {
                        if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srca 
                                      >> (0x1fU & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluB__DOT__i))))) {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_res 
                                = ((IData)(0x1fU) - vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluB__DOT__i);
                            goto __Vlabel2;
                        }
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluB__DOT__i 
                            = (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluB__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel2: ;
                }
            } else {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_res = 0U;
            }
        } else if ((0x800000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)) {
            if ((0x400000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)) {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_res 
                    = ((0x200000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)
                        ? ((0x100000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)
                            ? 0U : ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)
                                     ? 0U : (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srcb 
                                             << 0x10U)))
                        : ((0x100000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)
                            ? 0U : ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)
                                     ? 0U : (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srca 
                                             < vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srcb))));
            } else if ((0x200000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)) {
                if ((0x100000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)) {
                    if ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)) {
                        if ((vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srca 
                             >> 0x1fU)) {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_res 
                                = ((vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srcb 
                                    >> 0x1fU) ? (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srca 
                                                 < vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srcb)
                                    : 1U);
                        } else if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srca 
                                             >> 0x1fU)))) {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_res 
                                = ((vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srcb 
                                    >> 0x1fU) ? 0U : 
                                   (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srca 
                                    < vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srcb));
                        }
                    } else {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_res = 0U;
                    }
                } else {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_res = 0U;
                }
            } else {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_res = 0U;
            }
        } else if ((0x400000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_res = 0U;
        } else if ((0x200000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_res = 0U;
        } else if ((0x100000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_res = 0U;
        } else if ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)) {
            if (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_ready) {
                if (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_ready) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_start2 = 0U;
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluB__DOT__temp_aluout_64 
                        = (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_hilo_reg__DOT__hilo_reg 
                           + vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_result);
                }
            } else {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_start2 = 1U;
            }
        } else if (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_ready) {
            if (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_ready) {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_start2 = 0U;
                vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_sign2 = 1U;
                vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluB__DOT__temp_aluout_64 
                    = (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_hilo_reg__DOT__hilo_reg 
                       + vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_result);
            }
        } else {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_start2 = 1U;
            vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_sign2 = 1U;
        }
    } else if ((0x1000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)) {
        if ((0x800000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_res = 0U;
        } else if ((0x400000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_res 
                = ((0x200000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)
                    ? 0U : ((0x100000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)
                             ? ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)
                                 ? (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srca 
                                    < vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srcb)
                                 : VL_LTS_III(32,32,32, vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srca, vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srcb))
                             : 0U));
        } else if ((0x200000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_res 
                = ((0x100000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)
                    ? ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)
                        ? (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srca 
                              | vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srcb))
                        : (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srca 
                           ^ vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srcb))
                    : ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)
                        ? (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srca 
                           | vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srcb)
                        : (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srca 
                           & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srcb)));
        } else if ((0x100000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)) {
            if ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)) {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_res 
                    = (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srca 
                       - vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srcb);
            } else {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_res 
                    = (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srca 
                       - vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srcb);
                vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_overflow 
                    = (((vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srca 
                         ^ vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srcb) 
                        >> 0x1fU) & ((vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_res 
                                      >> 0x1fU) == 
                                     (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srcb 
                                      >> 0x1fU)));
            }
        } else if ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_res 
                = (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srca 
                   + vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srcb);
        } else {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_res 
                = (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srca 
                   + vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srcb);
            vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_overflow 
                = (((vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srca 
                     >> 0x1fU) == (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srcb 
                                   >> 0x1fU)) & ((vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_res 
                                                  >> 0x1fU) 
                                                 != 
                                                 (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srca 
                                                  >> 0x1fU)));
        }
    } else if ((0x800000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)) {
        if ((0x400000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)) {
            if ((0x200000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)) {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_res = 0U;
            } else if ((0x100000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)) {
                if ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)) {
                    if (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_ready) {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_start2 = 0U;
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_sign2 = 0U;
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluB__DOT__temp_aluout_64 
                            = vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_result;
                    } else {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_start2 = 1U;
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_sign2 = 0U;
                    }
                } else if (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_ready) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_start2 = 0U;
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_sign2 = 1U;
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluB__DOT__temp_aluout_64 
                        = vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_result;
                } else {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_start2 = 1U;
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_sign2 = 1U;
                }
            } else if ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)) {
                if (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_ready) {
                    if (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_ready) {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_start2 = 0U;
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluB__DOT__temp_aluout_64 
                            = vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_result;
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_res 
                            = (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_result);
                    }
                } else {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_start2 = 1U;
                }
            } else if (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_ready) {
                if (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_ready) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_start2 = 0U;
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_sign2 = 1U;
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluB__DOT__temp_aluout_64 
                        = vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_result;
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_res 
                        = (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_result);
                }
            } else {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_start2 = 1U;
                vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_sign2 = 1U;
            }
        } else if ((0x200000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_res = 0U;
        } else if ((0x100000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)) {
            if ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)) {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluB__DOT__temp_aluout_64 
                    = (((QData)((IData)((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_hilo_reg__DOT__hilo_reg 
                                         >> 0x20U))) 
                        << 0x20U) | (QData)((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srca)));
            } else {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_res 
                    = (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_hilo_reg__DOT__hilo_reg);
            }
        } else if ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluB__DOT__temp_aluout_64 
                = (((QData)((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srca)) 
                    << 0x20U) | (QData)((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_hilo_reg__DOT__hilo_reg)));
        } else {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_res 
                = (IData)((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_hilo_reg__DOT__hilo_reg 
                           >> 0x20U));
        }
    } else {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_res 
            = ((0x400000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)
                ? ((0x200000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)
                    ? 0U : ((0x100000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)
                             ? ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)
                                 ? 0U : vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srca)
                             : 0U)) : ((0x200000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)
                                        ? ((0x100000U 
                                            & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)
                                            ? ((0x80000U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)
                                                ? VL_SHIFTRS_III(32,32,5, vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srcb, 
                                                                 (0x1fU 
                                                                  & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srca))
                                                : (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srcb 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srca)))
                                            : ((0x80000U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)
                                                ? 0U
                                                : (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srcb 
                                                   << 
                                                   (0x1fU 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srca))))
                                        : ((0x100000U 
                                            & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)
                                            ? ((0x80000U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)
                                                ? VL_SHIFTRS_III(32,32,5, vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srcb, 
                                                                 (0x1fU 
                                                                  & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srca))
                                                : (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srcb 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srca)))
                                            : 0U)));
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_start1 = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_sign1 = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_overflow = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_start1 = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_sign1 = 0U;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluA__DOT__temp_aluout_64 = 0ULL;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__y1_tmp = 0U;
    if ((0x4000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__y1_tmp 
            = ((0x2000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)
                ? ((0x1000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)
                    ? ((0x800000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)
                        ? ((0x400000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)
                            ? ((0x200000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)
                                ? 0U : ((0x100000U 
                                         & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)
                                         ? 0U : ((0x80000U 
                                                  & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)
                                                  ? 0U
                                                  : 1U)))
                            : 0U) : 0U) : 0U) : 0U);
    } else if ((0x2000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)) {
        if ((0x1000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)) {
            if ((0x800000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)) {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__y1_tmp 
                    = ((0x400000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)
                        ? ((0x200000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)
                            ? ((0x100000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)
                                ? 0U : ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)
                                         ? 0U : (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srcb 
                                                 << 
                                                 (0x1fU 
                                                  & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srca))))
                            : 0U) : 0U);
            } else if ((0x400000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)) {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__y1_tmp = 0U;
            } else if ((0x200000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)) {
                if ((0x100000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__y1_tmp = 0U;
                } else if ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)) {
                    if (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_ready) {
                        if (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_ready) {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_start1 = 0U;
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluA__DOT__temp_aluout_64 
                                = (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_hilo_reg__DOT__hilo_reg 
                                   - vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_result);
                        }
                    } else {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_start1 = 1U;
                    }
                } else if (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_ready) {
                    if (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_ready) {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_start1 = 0U;
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_sign1 = 1U;
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluA__DOT__temp_aluout_64 
                            = (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_hilo_reg__DOT__hilo_reg 
                               - vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_result);
                    }
                } else {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_start1 = 1U;
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_sign1 = 1U;
                }
            } else if ((0x100000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)) {
                if ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__y1_tmp = 0x20U;
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluA__DOT__i = 0x1fU;
                    {
                        while (VL_LTES_III(1,32,32, 0U, vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluA__DOT__i)) {
                            if ((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srca 
                                       >> (0x1fU & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluA__DOT__i)))) {
                                vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__y1_tmp 
                                    = ((IData)(0x1fU) 
                                       - vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluA__DOT__i);
                                goto __Vlabel3;
                            }
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluA__DOT__i 
                                = (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluA__DOT__i 
                                   - (IData)(1U));
                        }
                        __Vlabel3: ;
                    }
                } else {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__y1_tmp = 0U;
                }
            } else if ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)) {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__y1_tmp = 0x20U;
                vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluA__DOT__i = 0x1fU;
                {
                    while (VL_LTES_III(1,32,32, 0U, vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluA__DOT__i)) {
                        if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srca 
                                      >> (0x1fU & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluA__DOT__i))))) {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__y1_tmp 
                                = ((IData)(0x1fU) - vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluA__DOT__i);
                            goto __Vlabel4;
                        }
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluA__DOT__i 
                            = (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluA__DOT__i 
                               - (IData)(1U));
                    }
                    __Vlabel4: ;
                }
            } else {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__y1_tmp = 0U;
            }
        } else if ((0x800000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)) {
            if ((0x400000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)) {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__y1_tmp 
                    = ((0x200000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)
                        ? ((0x100000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)
                            ? 0U : ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)
                                     ? vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cp0_rdata
                                     : (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srcb 
                                        << 0x10U)))
                        : ((0x100000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)
                            ? 0U : ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)
                                     ? 0U : (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srca 
                                             < vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srcb))));
            } else if ((0x200000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)) {
                if ((0x100000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)) {
                    if ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)) {
                        if ((vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srca 
                             >> 0x1fU)) {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__y1_tmp 
                                = ((vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srcb 
                                    >> 0x1fU) ? (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srca 
                                                 < vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srcb)
                                    : 1U);
                        } else if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srca 
                                             >> 0x1fU)))) {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__y1_tmp 
                                = ((vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srcb 
                                    >> 0x1fU) ? 0U : 
                                   (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srca 
                                    < vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srcb));
                        }
                    } else {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__y1_tmp = 0U;
                    }
                } else {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__y1_tmp = 0U;
                }
            } else {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__y1_tmp = 0U;
            }
        } else if ((0x400000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__y1_tmp = 0U;
        } else if ((0x200000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__y1_tmp = 0U;
        } else if ((0x100000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__y1_tmp = 0U;
        } else if ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)) {
            if (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_ready) {
                if (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_ready) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_start1 = 0U;
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluA__DOT__temp_aluout_64 
                        = (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_hilo_reg__DOT__hilo_reg 
                           + vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_result);
                }
            } else {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_start1 = 1U;
            }
        } else if (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_ready) {
            if (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_ready) {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_start1 = 0U;
                vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_sign1 = 1U;
                vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluA__DOT__temp_aluout_64 
                    = (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_hilo_reg__DOT__hilo_reg 
                       + vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_result);
            }
        } else {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_start1 = 1U;
            vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_sign1 = 1U;
        }
    } else if ((0x1000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)) {
        if ((0x800000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__y1_tmp = 0U;
        } else if ((0x400000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__y1_tmp 
                = ((0x200000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)
                    ? 0U : ((0x100000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)
                             ? ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)
                                 ? (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srca 
                                    < vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srcb)
                                 : VL_LTS_III(32,32,32, vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srca, vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srcb))
                             : 0U));
        } else if ((0x200000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__y1_tmp 
                = ((0x100000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)
                    ? ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)
                        ? (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srca 
                              | vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srcb))
                        : (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srca 
                           ^ vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srcb))
                    : ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)
                        ? (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srca 
                           | vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srcb)
                        : (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srca 
                           & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srcb)));
        } else if ((0x100000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)) {
            if ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)) {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__y1_tmp 
                    = (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srca 
                       - vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srcb);
            } else {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__y1_tmp 
                    = (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srca 
                       - vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srcb);
                vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_overflow 
                    = (((vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srca 
                         ^ vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srcb) 
                        >> 0x1fU) & ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__y1_tmp 
                                      >> 0x1fU) == 
                                     (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srcb 
                                      >> 0x1fU)));
            }
        } else if ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__y1_tmp 
                = (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srca 
                   + vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srcb);
        } else {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__y1_tmp 
                = (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srca 
                   + vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srcb);
            vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_overflow 
                = (((vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srca 
                     >> 0x1fU) == (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srcb 
                                   >> 0x1fU)) & ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__y1_tmp 
                                                  >> 0x1fU) 
                                                 != 
                                                 (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srca 
                                                  >> 0x1fU)));
        }
    } else if ((0x800000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)) {
        if ((0x400000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)) {
            if ((0x200000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)) {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__y1_tmp = 0U;
            } else if ((0x100000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)) {
                if ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)) {
                    if (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_ready) {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_start1 = 0U;
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_sign1 = 0U;
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluA__DOT__temp_aluout_64 
                            = vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_result;
                    } else {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_start1 = 1U;
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_sign1 = 0U;
                    }
                } else if (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_ready) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_start1 = 0U;
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_sign1 = 1U;
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluA__DOT__temp_aluout_64 
                        = vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_result;
                } else {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_start1 = 1U;
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_sign1 = 1U;
                }
            } else if ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)) {
                if (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_ready) {
                    if (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_ready) {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_start1 = 0U;
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluA__DOT__temp_aluout_64 
                            = vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_result;
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__y1_tmp 
                            = (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_result);
                    }
                } else {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_start1 = 1U;
                }
            } else if (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_ready) {
                if (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_ready) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_start1 = 0U;
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_sign1 = 1U;
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluA__DOT__temp_aluout_64 
                        = vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_result;
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__y1_tmp 
                        = (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_result);
                }
            } else {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_start1 = 1U;
                vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_sign1 = 1U;
            }
        } else if ((0x200000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__y1_tmp = 0U;
        } else if ((0x100000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)) {
            if ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)) {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluA__DOT__temp_aluout_64 
                    = (((QData)((IData)((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_hilo_reg__DOT__hilo_reg 
                                         >> 0x20U))) 
                        << 0x20U) | (QData)((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srca)));
            } else {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__y1_tmp 
                    = (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_hilo_reg__DOT__hilo_reg);
            }
        } else if ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluA__DOT__temp_aluout_64 
                = (((QData)((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srca)) 
                    << 0x20U) | (QData)((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_hilo_reg__DOT__hilo_reg)));
        } else {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__y1_tmp 
                = (IData)((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_hilo_reg__DOT__hilo_reg 
                           >> 0x20U));
        }
    } else {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__y1_tmp 
            = ((0x400000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)
                ? ((0x200000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)
                    ? 0U : ((0x100000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)
                             ? ((0x80000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)
                                 ? 0U : vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srca)
                             : 0U)) : ((0x200000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)
                                        ? ((0x100000U 
                                            & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)
                                            ? ((0x80000U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)
                                                ? VL_SHIFTRS_III(32,32,5, vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srcb, 
                                                                 (0x1fU 
                                                                  & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srca))
                                                : (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srcb 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srca)))
                                            : ((0x80000U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)
                                                ? 0U
                                                : (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srcb 
                                                   << 
                                                   (0x1fU 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srca))))
                                        : ((0x100000U 
                                            & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)
                                            ? ((0x80000U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)
                                                ? VL_SHIFTRS_III(32,32,5, vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srcb, 
                                                                 (0x1fU 
                                                                  & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srca))
                                                : (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srcb 
                                                   >> 
                                                   (0x1fU 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srca)))
                                            : 0U)));
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__badva_in 
        = ((IData)((0U != (0x18000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except)))
            ? vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except_pc
            : vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_addrM);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__is_kernel_mode 
        = (1U & (((((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg 
                     >> 1U) & (~ ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                                   >> 0xaU) & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg 
                                               >> 2U)))) 
                   | ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg 
                       >> 2U) & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                                    >> 0xaU)))) | (~ 
                                                   (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg 
                                                    >> 4U))) 
                 | ((0U != vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except) 
                    & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                          >> 0xaU)))));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__M_cp0_jump_pc = 0U;
    if ((0x400U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except)) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__M_cp0_jump_pc 
            = ((4U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg)
                ? vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__errorepc_reg
                : vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__epc_reg);
    } else if ((0U != vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except)) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__M_cp0_jump_pc 
            = ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg)
                ? ((IData)(0x180U) + vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__trap_base)
                : (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__trap_base 
                   + ((1U & ((IData)((0xc000U == (0xc000U 
                                                  & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except))) 
                             | (((~ (IData)((0U != 
                                             (3U & 
                                              (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                                               >> 0xfU))))) 
                                 & (IData)((0U != (0x18U 
                                                   & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except)))) 
                                & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                                   >> 1U)))) ? 0U : 
                      ((1U & (((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                                >> 9U) & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg 
                                          >> 0x17U)) 
                              & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg 
                                    >> 0x16U)))) ? 0x200U
                        : 0x180U))));
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_rdataM = 0U;
    if ((0x20U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM))) {
        if ((0x10U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM))) {
            if ((1U & (~ ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM) 
                          >> 3U)))) {
                if ((1U & (~ ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM) 
                              >> 2U)))) {
                    if ((1U & (~ ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM) 
                                  >> 1U)))) {
                        if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM)))) {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_rdataM 
                                = vlSelf->mycpu_top__DOT__data_rdata;
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM) 
                             >> 3U)))) {
            if ((4U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM))) {
                if ((2U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM))) {
                    if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM)))) {
                        vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_rdataM 
                            = (((((- (IData)((3U == 
                                              (3U & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_addrM)))) 
                                  & ((vlSelf->mycpu_top__DOT__data_rdata 
                                      >> 0x18U) | (0xffffff00U 
                                                   & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_wdataM))) 
                                 | ((- (IData)((2U 
                                                == 
                                                (3U 
                                                 & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_addrM)))) 
                                    & ((vlSelf->mycpu_top__DOT__data_rdata 
                                        >> 0x10U) | 
                                       (0xffff0000U 
                                        & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_wdataM)))) 
                                | ((- (IData)((1U == 
                                               (3U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_addrM)))) 
                                   & ((vlSelf->mycpu_top__DOT__data_rdata 
                                       >> 8U) | (0xff000000U 
                                                 & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_wdataM)))) 
                               | ((- (IData)((0U == 
                                              (3U & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_addrM)))) 
                                  & vlSelf->mycpu_top__DOT__data_rdata));
                    }
                } else {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_rdataM 
                        = ((1U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM))
                            ? (((- (IData)((2U == (3U 
                                                   & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_addrM)))) 
                                & (vlSelf->mycpu_top__DOT__data_rdata 
                                   >> 0x10U)) | (0xffffU 
                                                 & ((- (IData)(
                                                               (0U 
                                                                == 
                                                                (3U 
                                                                 & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_addrM)))) 
                                                    & vlSelf->mycpu_top__DOT__data_rdata)))
                            : (((((- (IData)((3U == 
                                              (3U & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_addrM)))) 
                                  & (vlSelf->mycpu_top__DOT__data_rdata 
                                     >> 0x18U)) | (0xffU 
                                                   & ((- (IData)(
                                                                 (2U 
                                                                  == 
                                                                  (3U 
                                                                   & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_addrM)))) 
                                                      & (vlSelf->mycpu_top__DOT__data_rdata 
                                                         >> 0x10U)))) 
                                | (0xffU & ((- (IData)(
                                                       (1U 
                                                        == 
                                                        (3U 
                                                         & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_addrM)))) 
                                            & (vlSelf->mycpu_top__DOT__data_rdata 
                                               >> 8U)))) 
                               | (0xffU & ((- (IData)(
                                                      (0U 
                                                       == 
                                                       (3U 
                                                        & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_addrM)))) 
                                           & vlSelf->mycpu_top__DOT__data_rdata))));
                }
            } else {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_rdataM 
                    = ((2U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM))
                        ? ((1U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM))
                            ? vlSelf->mycpu_top__DOT__data_rdata
                            : (((((- (IData)((3U == 
                                              (3U & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_addrM)))) 
                                  & vlSelf->mycpu_top__DOT__data_rdata) 
                                 | ((- (IData)((2U 
                                                == 
                                                (3U 
                                                 & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_addrM)))) 
                                    & ((vlSelf->mycpu_top__DOT__data_rdata 
                                        << 8U) | (0xffU 
                                                  & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_wdataM)))) 
                                | ((- (IData)((1U == 
                                               (3U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_addrM)))) 
                                   & ((vlSelf->mycpu_top__DOT__data_rdata 
                                       << 0x10U) | 
                                      (0xffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_wdataM)))) 
                               | ((- (IData)((0U == 
                                              (3U & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_addrM)))) 
                                  & ((vlSelf->mycpu_top__DOT__data_rdata 
                                      << 0x18U) | (0xffffffU 
                                                   & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_wdataM)))))
                        : ((1U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM))
                            ? (((- (IData)((2U == (3U 
                                                   & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_addrM)))) 
                                & (((- (IData)((vlSelf->mycpu_top__DOT__data_rdata 
                                                >> 0x1fU))) 
                                    << 0x10U) | (vlSelf->mycpu_top__DOT__data_rdata 
                                                 >> 0x10U))) 
                               | ((- (IData)((0U == 
                                              (3U & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_addrM)))) 
                                  & (((- (IData)((1U 
                                                  & (vlSelf->mycpu_top__DOT__data_rdata 
                                                     >> 0xfU)))) 
                                      << 0x10U) | (0xffffU 
                                                   & vlSelf->mycpu_top__DOT__data_rdata))))
                            : (((((- (IData)((3U == 
                                              (3U & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_addrM)))) 
                                  & (((- (IData)((vlSelf->mycpu_top__DOT__data_rdata 
                                                  >> 0x1fU))) 
                                      << 8U) | (vlSelf->mycpu_top__DOT__data_rdata 
                                                >> 0x18U))) 
                                 | ((- (IData)((2U 
                                                == 
                                                (3U 
                                                 & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_addrM)))) 
                                    & (((- (IData)(
                                                   (1U 
                                                    & (vlSelf->mycpu_top__DOT__data_rdata 
                                                       >> 0x17U)))) 
                                        << 8U) | (0xffU 
                                                  & (vlSelf->mycpu_top__DOT__data_rdata 
                                                     >> 0x10U))))) 
                                | ((- (IData)((1U == 
                                               (3U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_addrM)))) 
                                   & (((- (IData)((1U 
                                                   & (vlSelf->mycpu_top__DOT__data_rdata 
                                                      >> 0xfU)))) 
                                       << 8U) | (0xffU 
                                                 & (vlSelf->mycpu_top__DOT__data_rdata 
                                                    >> 8U))))) 
                               | ((- (IData)((0U == 
                                              (3U & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_addrM)))) 
                                  & (((- (IData)((1U 
                                                  & (vlSelf->mycpu_top__DOT__data_rdata 
                                                     >> 7U)))) 
                                      << 8U) | (0xffU 
                                                & vlSelf->mycpu_top__DOT__data_rdata))))));
            }
        }
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__slave_asciiF 
        = ((vlSelf->mycpu_top__DOT__inst_rdata2 >> 0x1fU)
            ? ((0x40000000U & vlSelf->mycpu_top__DOT__inst_rdata2)
                ? 0x4e2d52ULL : ((0x20000000U & vlSelf->mycpu_top__DOT__inst_rdata2)
                                  ? ((0x10000000U & vlSelf->mycpu_top__DOT__inst_rdata2)
                                      ? 0x4e2d52ULL
                                      : ((0x8000000U 
                                          & vlSelf->mycpu_top__DOT__inst_rdata2)
                                          ? ((0x4000000U 
                                              & vlSelf->mycpu_top__DOT__inst_rdata2)
                                              ? 0x5357ULL
                                              : 0x4e2d52ULL)
                                          : ((0x4000000U 
                                              & vlSelf->mycpu_top__DOT__inst_rdata2)
                                              ? 0x5348ULL
                                              : 0x5342ULL)))
                                  : ((0x10000000U & vlSelf->mycpu_top__DOT__inst_rdata2)
                                      ? ((0x8000000U 
                                          & vlSelf->mycpu_top__DOT__inst_rdata2)
                                          ? 0x4e2d52ULL
                                          : ((0x4000000U 
                                              & vlSelf->mycpu_top__DOT__inst_rdata2)
                                              ? 0x4c4855ULL
                                              : 0x4c4255ULL))
                                      : ((0x8000000U 
                                          & vlSelf->mycpu_top__DOT__inst_rdata2)
                                          ? ((0x4000000U 
                                              & vlSelf->mycpu_top__DOT__inst_rdata2)
                                              ? 0x4c57ULL
                                              : 0x4e2d52ULL)
                                          : ((0x4000000U 
                                              & vlSelf->mycpu_top__DOT__inst_rdata2)
                                              ? 0x4c48ULL
                                              : 0x4c42ULL)))))
            : ((0x40000000U & vlSelf->mycpu_top__DOT__inst_rdata2)
                ? ((0x20000000U & vlSelf->mycpu_top__DOT__inst_rdata2)
                    ? 0x4e2d52ULL : ((0x10000000U & vlSelf->mycpu_top__DOT__inst_rdata2)
                                      ? 0x4e2d52ULL
                                      : ((0x8000000U 
                                          & vlSelf->mycpu_top__DOT__inst_rdata2)
                                          ? 0x4e2d52ULL
                                          : ((0x4000000U 
                                              & vlSelf->mycpu_top__DOT__inst_rdata2)
                                              ? 0x4e2d52ULL
                                              : ((0x42000018U 
                                                  == vlSelf->mycpu_top__DOT__inst_rdata2)
                                                  ? 0x45524554ULL
                                                  : 
                                                 ((4U 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->mycpu_top__DOT__inst_rdata2 
                                                       >> 0x15U)))
                                                   ? 0x4d544330ULL
                                                   : 
                                                  ((0U 
                                                    == 
                                                    (0x1fU 
                                                     & (vlSelf->mycpu_top__DOT__inst_rdata2 
                                                        >> 0x15U)))
                                                    ? 0x4d464330ULL
                                                    : 0x434f5030ULL)))))))
                : ((0x20000000U & vlSelf->mycpu_top__DOT__inst_rdata2)
                    ? ((0x10000000U & vlSelf->mycpu_top__DOT__inst_rdata2)
                        ? ((0x8000000U & vlSelf->mycpu_top__DOT__inst_rdata2)
                            ? ((0x4000000U & vlSelf->mycpu_top__DOT__inst_rdata2)
                                ? 0x4c5549ULL : 0x584f5249ULL)
                            : ((0x4000000U & vlSelf->mycpu_top__DOT__inst_rdata2)
                                ? 0x4f5249ULL : 0x414e4449ULL))
                        : ((0x8000000U & vlSelf->mycpu_top__DOT__inst_rdata2)
                            ? ((0x4000000U & vlSelf->mycpu_top__DOT__inst_rdata2)
                                ? 0x534c544955ULL : 0x534c5449ULL)
                            : ((0x4000000U & vlSelf->mycpu_top__DOT__inst_rdata2)
                                ? 0x4144444955ULL : 0x41444449ULL)))
                    : ((0x10000000U & vlSelf->mycpu_top__DOT__inst_rdata2)
                        ? ((0x8000000U & vlSelf->mycpu_top__DOT__inst_rdata2)
                            ? ((0x4000000U & vlSelf->mycpu_top__DOT__inst_rdata2)
                                ? 0x4247545aULL : 0x424c455aULL)
                            : ((0x4000000U & vlSelf->mycpu_top__DOT__inst_rdata2)
                                ? 0x424e45ULL : 0x424551ULL))
                        : ((0x8000000U & vlSelf->mycpu_top__DOT__inst_rdata2)
                            ? ((0x4000000U & vlSelf->mycpu_top__DOT__inst_rdata2)
                                ? 0x4a414cULL : 0x4aULL)
                            : ((0x4000000U & vlSelf->mycpu_top__DOT__inst_rdata2)
                                ? ((0x100000U & vlSelf->mycpu_top__DOT__inst_rdata2)
                                    ? ((0x80000U & vlSelf->mycpu_top__DOT__inst_rdata2)
                                        ? 0x20ULL : 
                                       ((0x40000U & vlSelf->mycpu_top__DOT__inst_rdata2)
                                         ? 0x20ULL : 
                                        ((0x20000U 
                                          & vlSelf->mycpu_top__DOT__inst_rdata2)
                                          ? 0x20ULL
                                          : ((0x10000U 
                                              & vlSelf->mycpu_top__DOT__inst_rdata2)
                                              ? 0x4247455a414cULL
                                              : 0x424c545a414cULL))))
                                    : ((0x80000U & vlSelf->mycpu_top__DOT__inst_rdata2)
                                        ? 0x20ULL : 
                                       ((0x40000U & vlSelf->mycpu_top__DOT__inst_rdata2)
                                         ? 0x20ULL : 
                                        ((0x20000U 
                                          & vlSelf->mycpu_top__DOT__inst_rdata2)
                                          ? 0x20ULL
                                          : ((0x10000U 
                                              & vlSelf->mycpu_top__DOT__inst_rdata2)
                                              ? 0x4247455aULL
                                              : 0x424c545aULL)))))
                                : ((0x20U & vlSelf->mycpu_top__DOT__inst_rdata2)
                                    ? ((0x10U & vlSelf->mycpu_top__DOT__inst_rdata2)
                                        ? 0x4e2d52ULL
                                        : ((8U & vlSelf->mycpu_top__DOT__inst_rdata2)
                                            ? ((4U 
                                                & vlSelf->mycpu_top__DOT__inst_rdata2)
                                                ? 0x4e2d52ULL
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__inst_rdata2)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__inst_rdata2)
                                                     ? 0x534c5455ULL
                                                     : 0x534c54ULL)
                                                    : 0x4e2d52ULL))
                                            : ((4U 
                                                & vlSelf->mycpu_top__DOT__inst_rdata2)
                                                ? (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__inst_rdata2)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__inst_rdata2)
                                                     ? 0x4e4f52ULL
                                                     : 0x584f52ULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__inst_rdata2)
                                                     ? 0x4f52ULL
                                                     : 0x414e44ULL))
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__inst_rdata2)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__inst_rdata2)
                                                     ? 0x53554255ULL
                                                     : 0x535542ULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__inst_rdata2)
                                                     ? 0x41444455ULL
                                                     : 0x414444ULL)))))
                                    : ((0x10U & vlSelf->mycpu_top__DOT__inst_rdata2)
                                        ? ((8U & vlSelf->mycpu_top__DOT__inst_rdata2)
                                            ? ((4U 
                                                & vlSelf->mycpu_top__DOT__inst_rdata2)
                                                ? 0x4e2d52ULL
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__inst_rdata2)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__inst_rdata2)
                                                     ? 0x44495655ULL
                                                     : 0x444956ULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__inst_rdata2)
                                                     ? 0x4d554c5455ULL
                                                     : 0x4d554c54ULL)))
                                            : ((4U 
                                                & vlSelf->mycpu_top__DOT__inst_rdata2)
                                                ? 0x4e2d52ULL
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__inst_rdata2)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__inst_rdata2)
                                                     ? 0x4d544c4fULL
                                                     : 0x4d464c4fULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__inst_rdata2)
                                                     ? 0x4d544849ULL
                                                     : 0x4d464849ULL))))
                                        : ((8U & vlSelf->mycpu_top__DOT__inst_rdata2)
                                            ? ((4U 
                                                & vlSelf->mycpu_top__DOT__inst_rdata2)
                                                ? (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__inst_rdata2)
                                                    ? 0x4e2d52ULL
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__inst_rdata2)
                                                     ? 0x425245ULL
                                                     : 0x53595343ULL))
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__inst_rdata2)
                                                    ? 0x4e2d52ULL
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__inst_rdata2)
                                                     ? 0x4a414c52ULL
                                                     : 0x4a52ULL)))
                                            : ((4U 
                                                & vlSelf->mycpu_top__DOT__inst_rdata2)
                                                ? (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__inst_rdata2)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__inst_rdata2)
                                                     ? 0x53524156ULL
                                                     : 0x53524c56ULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__inst_rdata2)
                                                     ? 0x4e2d52ULL
                                                     : 0x534c4c56ULL))
                                                : (
                                                   (2U 
                                                    & vlSelf->mycpu_top__DOT__inst_rdata2)
                                                    ? 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__inst_rdata2)
                                                     ? 0x535241ULL
                                                     : 0x53524cULL)
                                                    : 
                                                   ((1U 
                                                     & vlSelf->mycpu_top__DOT__inst_rdata2)
                                                     ? 0x4e2d52ULL
                                                     : 0x534c4cULL))))))))))));
    if ((0U == vlSelf->mycpu_top__DOT__inst_rdata2)) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__slave_asciiF = 0x4e4f50ULL;
    }
    vlSelf->mycpu_top__DOT__inst_data_ok2 = (((0U == vlSelf->mycpu_top__DOT__i_cache_inst__DOT__icache_status)
                                               ? (IData)(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_inst_ok1)
                                               : (IData)(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__saved_inst_ok1)) 
                                             & (IData)(vlSelf->mycpu_top__DOT__inst_en));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall 
        = (1U & ((((((vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                      | vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs) 
                     >> 1U) & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_ready))) 
                   | ((vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                       | vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs) 
                      & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_ready)))) 
                  | (IData)(vlSelf->mycpu_top__DOT__i_cache_stall)) 
                 | (IData)(vlSelf->mycpu_top__DOT__d_cache_stall)));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except 
        = ((0x1ff00U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except_temp) 
           | (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_overflow) 
               << 7U) | (((((0x23U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_op)) 
                            & (0U != (3U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_mem_addr))) 
                           | (((0x30U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_op)) 
                               & (0U != (3U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_mem_addr))) 
                              | (((0x21U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_op)) 
                                  | (0x25U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_op))) 
                                 & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_mem_addr))) 
                          << 6U) | ((((0x2bU == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_op)) 
                                      & (0U != (3U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_mem_addr))) 
                                     | (((0x38U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_op)) 
                                         & (0U != (3U 
                                                   & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_mem_addr))) 
                                        | ((0x29U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_op)) 
                                           & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_mem_addr))) 
                                    << 5U))));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_sign 
        = ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)
            ? (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_sign1)
            : (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_sign2));
    if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_start 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_start1;
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_sign 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_sign1;
    } else {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_start 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_start2;
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_sign 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_sign2;
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_res 
        = (((- (IData)((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_is_link_pc8))) 
            & ((IData)(8U) + vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_pc)) 
           | ((- (IData)((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_is_link_pc8))))) 
              & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__y1_tmp));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except 
        = ((0x1ff00U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except_temp) 
           | (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_overflow) 
               << 7U) | (((((0x23U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_op)) 
                            & (0U != (3U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_mem_addr))) 
                           | (((0x30U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_op)) 
                               & (0U != (3U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_mem_addr))) 
                              | (((0x21U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_op)) 
                                  | (0x25U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_op))) 
                                 & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_mem_addr))) 
                          << 6U) | ((((0x2bU == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_op)) 
                                      & (0U != (3U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_mem_addr))) 
                                     | (((0x38U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_op)) 
                                         & (0U != (3U 
                                                   & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_mem_addr))) 
                                        | ((0x29U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_op)) 
                                           & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_mem_addr))) 
                                    << 5U))));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_cp0_useable 
        = (1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__is_kernel_mode) 
                 | (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg 
                    >> 0x1cU)));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_reg_wdata 
        = ((0x2000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs)
            ? ((- (IData)((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_mem_sel))) 
               & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_rdataM)
            : vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_alu_res);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_reg_wdata 
        = ((0x2000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M2cs)
            ? ((- (IData)((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_mem_sel))) 
               & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_rdataM)
            : vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_alu_res);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_bj 
        = ((~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)) 
           & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_jump_conflict_tmp) 
              | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_pred_fail)));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_ena 
        = (1U & (~ (((((vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                        >> 0xdU) & (0U != (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_reg_waddr))) 
                      & (((vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                           >> 0x11U) & ((0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                  >> 0x15U)) 
                                        == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_reg_waddr))) 
                         | ((vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                             >> 0x10U) & ((0x1fU & 
                                           (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                            >> 0x10U)) 
                                          == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_reg_waddr))))) 
                     | (((vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                          >> 0xdU) & (0U != (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_reg_waddr))) 
                        & (((vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                             >> 0x11U) & ((0x1fU & 
                                           (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                            >> 0x15U)) 
                                          == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_reg_waddr))) 
                           | ((vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                               >> 0x10U) & ((0x1fU 
                                             & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                >> 0x10U)) 
                                            == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_reg_waddr)))))) 
                    | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall))));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_flush_all 
        = (1U & ((vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs 
                  >> 0x12U) & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall))));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__M_cp0_jump = 0U;
    if ((0x400U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except)) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__M_cp0_jump 
            = (1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)));
    } else if ((0U != vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except)) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__M_cp0_jump 
            = (1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)));
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_id_cpu = 0U;
    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                  >> 0x1fU)))) {
        if ((0x40000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) {
            if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                          >> 0x1dU)))) {
                if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                              >> 0x1cU)))) {
                    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                  >> 0x1bU)))) {
                        if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                      >> 0x1aU)))) {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_id_cpu 
                                = (1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_cp0_useable)));
                        }
                    }
                }
            }
        }
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_id_cpu = 0U;
    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                  >> 0x1fU)))) {
        if ((0x40000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) {
            if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                          >> 0x1dU)))) {
                if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                              >> 0x1cU)))) {
                    if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                  >> 0x1bU)))) {
                        if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                      >> 0x1aU)))) {
                            vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_id_cpu 
                                = (1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_cp0_useable)));
                        }
                    }
                }
            }
        }
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_ena 
        = (1U & (~ (((((((~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_ena)) 
                         | ((0U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__data_count)) 
                            | (1U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__data_count)))) 
                        | (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                           >> 5U)) | (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                      >> 5U)) | (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                                 >> 6U)) 
                     | ((((vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                           & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs) 
                          >> 0xeU) | ((vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                       & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs) 
                                      >> 1U)) | (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                                 & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs))) 
                    | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_issue_ctrl__DOT__data_conflict))));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_pred_take 
        = (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_ena) 
            & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_is_branch)) 
           & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__PHT
              [vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT
              [(0xfU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[1U] 
                        >> 2U))]] >> 1U));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__M_flush 
        = ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_cp0_jump) 
           | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_flush_all));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_flush 
        = (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_cp0_jump) 
            | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_flush_all)) 
           | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_bj));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__W_ena 
        = (1U & (((~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)) 
                  | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_cp0_jump)) 
                 | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_flush_all)));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_bj 
        = ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_pred_take) 
           | ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_ena) 
              & ((~ (IData)((0U != (0x1fU & (1U ^ (
                                                   (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                    << 5U) 
                                                   | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                      >> 0x1bU))))))) 
                 | ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_jump_judge__DOT__jr) 
                    & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_jump_conflict))))));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2E_clear2 
        = (1U & ((((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_cp0_jump) 
                   | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_flush_all)) 
                  | ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_flush) 
                     & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_ena))) 
                 | ((~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)) 
                    & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_ena)))));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2E_clear1 
        = (1U & ((((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_cp0_jump) 
                   | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_flush_all)) 
                  | (((~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_is_in_delayslot)) 
                      & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_flush)) 
                     & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) 
                 | ((~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_ena)) 
                    & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))));
    vlSelf->debug_commit = vlSelf->mycpu_top__DOT__u_datapath__DOT__W_ena;
    vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_regfile__wen1 
        = (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_reg_wen) 
            & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__W_ena)) 
           & (~ (IData)((0U != vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_except))));
    vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_regfile__wen2 
        = ((((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_reg_wen) 
             & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__W_ena)) 
            & (~ (IData)((0U != vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_except)))) 
           & (~ (IData)((0U != vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_except))));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__delay_sel_rst 
        = (1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_bj)
                  ? (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_next_pc8))
                  : ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_bj) 
                     & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_ena)))));
    vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_inst_fifo__fifo_rst 
        = (1U & ((~ (IData)(vlSelf->aresetn)) | ((((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_cp0_jump) 
                                                   | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_flush_all)) 
                                                  | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_bj)) 
                                                 | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_bj))));
    vlSelf->debug_wb_rf_wen = ((IData)(vlSelf->aresetn)
                                ? (0xfU & ((IData)(vlSelf->aclk)
                                            ? (- (IData)((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_regfile__wen1)))
                                            : (- (IData)((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_regfile__wen2)))))
                                : 0U);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_rs_value_tmp 
        = ((0U != (0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                            >> 0x15U))) ? (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_regfile__wen2) 
                                            & (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x1fU 
                                                           & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_reg_waddr) 
                                                              ^ 
                                                              ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                                << 0xbU) 
                                                               | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                                  >> 0x15U))))))))
                                            ? vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_reg_wdata
                                            : (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_regfile__wen1) 
                                                & (~ (IData)(
                                                             (0U 
                                                              != 
                                                              (0x1fU 
                                                               & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_reg_waddr) 
                                                                  ^ 
                                                                  ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                                    << 0xbU) 
                                                                   | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                                      >> 0x15U))))))))
                                                ? vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_reg_wdata
                                                : vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf
                                               [(0x1fU 
                                                 & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                    >> 0x15U))]))
            : 0U);
    vlSelf->mycpu_top__DOT__pc_next_dp = ((IData)(vlSelf->aresetn)
                                           ? ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_cp0_jump)
                                               ? vlSelf->mycpu_top__DOT__u_datapath__DOT__M_cp0_jump_pc
                                               : ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_flush_all)
                                                   ? 
                                                  ((IData)(4U) 
                                                   + vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_pc)
                                                   : 
                                                  ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_bj)
                                                    ? 
                                                   (((((- (IData)(
                                                                  ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_pred_fail) 
                                                                   & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_actual_take)))) 
                                                       & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_branch_target) 
                                                      | ((- (IData)(
                                                                    (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_pred_fail) 
                                                                      & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_actual_take))) 
                                                                     & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_next_pc8)))) 
                                                         & ((IData)(8U) 
                                                            + vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_pc))) 
                                                     | ((- (IData)(
                                                                   (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_pred_fail) 
                                                                     & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_actual_take))) 
                                                                    & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_next_pc8))))) 
                                                        & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_pc_plus4)) 
                                                    | ((- (IData)((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_jump_conflict_tmp))) 
                                                       & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rs_value))
                                                    : 
                                                   ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_bj)
                                                     ? 
                                                    (((- (IData)((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_pred_take))) 
                                                      & vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_branch_target) 
                                                     | ((- (IData)(
                                                                   (1U 
                                                                    & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_pred_take))))) 
                                                        & ((0U 
                                                            != 
                                                            (0x1fU 
                                                             & (1U 
                                                                ^ 
                                                                ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                                  << 5U) 
                                                                 | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                                    >> 0x1bU)))))
                                                            ? vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_rs_value_tmp
                                                            : 
                                                           ((0xf0000000U 
                                                             & ((IData)(4U) 
                                                                + 
                                                                vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[1U])) 
                                                            | (0xffffffcU 
                                                               & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                                  << 2U))))))
                                                     : 
                                                    ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__fifo_full)
                                                      ? vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg
                                                      : 
                                                     (((IData)(vlSelf->mycpu_top__DOT__inst_data_ok1) 
                                                       & (IData)(vlSelf->mycpu_top__DOT__inst_data_ok2))
                                                       ? 
                                                      ((IData)(8U) 
                                                       + vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg)
                                                       : 
                                                      ((IData)(vlSelf->mycpu_top__DOT__inst_data_ok1)
                                                        ? 
                                                       ((IData)(4U) 
                                                        + vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg)
                                                        : vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg)))))))
                                           : 0xbfc00000U);
    if (vlSelf->mycpu_top__DOT__i_cache_inst__DOT__bram_addr_choose) {
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__bram_word_addr 
            = (0x1ffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg 
                         >> 3U));
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__bram_line_addr 
            = (0x3fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg 
                        >> 6U));
    } else {
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__bram_word_addr 
            = (0x1ffU & (vlSelf->mycpu_top__DOT__pc_next_dp 
                         >> 3U));
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__bram_line_addr 
            = (0x3fU & (vlSelf->mycpu_top__DOT__pc_next_dp 
                        >> 6U));
    }
}
