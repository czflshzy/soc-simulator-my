// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "Vmycpu_top___024root.h"
#include "Vmycpu_top__Syms.h"

//==========

extern const VlUnpacked<CData/*3:0*/, 1024> Vmycpu_top__ConstPool__TABLE_3bc62433_0;

VL_INLINE_OPT void Vmycpu_top___024root___sequent__TOP__3(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___sequent__TOP__3\n"); );
    // Variables
    CData/*0:0*/ __Vdly__mycpu_top__DOT__u_datapath__DOT__D_master_is_in_delayslot;
    CData/*0:0*/ __Vdly__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_stall;
    CData/*3:0*/ __Vdlyvdim0__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines__v0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines__v0;
    CData/*3:0*/ __Vdlyvdim0__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines__v1;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines__v1;
    CData/*3:0*/ __Vdly__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__write_pointer;
    CData/*3:0*/ __Vdly__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_pointer;
    CData/*3:0*/ __Vdly__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__data_count;
    CData/*3:0*/ __Vdlyvdim0__mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT__v0;
    CData/*5:0*/ __Vdlyvval__mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT__v0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT__v0;
    CData/*5:0*/ __Vdlyvdim0__mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__PHT__v0;
    CData/*1:0*/ __Vdlyvval__mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__PHT__v0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__PHT__v0;
    CData/*1:0*/ __Vdly__mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__state;
    CData/*2:0*/ __Vdlyvdim0__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb__v0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb__v0;
    CData/*2:0*/ __Vdlyvdim0__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb__v1;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb__v1;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb__v2;
    CData/*5:0*/ __Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v0;
    CData/*7:0*/ __Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v1;
    CData/*7:0*/ __Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v1;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v1;
    CData/*5:0*/ __Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v2;
    CData/*7:0*/ __Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v2;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v2;
    CData/*5:0*/ __Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v3;
    CData/*7:0*/ __Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v3;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v3;
    CData/*5:0*/ __Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v4;
    CData/*7:0*/ __Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v4;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v4;
    CData/*5:0*/ __Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v5;
    CData/*7:0*/ __Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v5;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v5;
    CData/*5:0*/ __Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v6;
    CData/*7:0*/ __Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v6;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v6;
    CData/*5:0*/ __Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v7;
    CData/*7:0*/ __Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v7;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v7;
    CData/*5:0*/ __Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_tag__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_tag__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v0;
    CData/*7:0*/ __Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v0;
    CData/*5:0*/ __Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v1;
    CData/*7:0*/ __Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v1;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v1;
    CData/*5:0*/ __Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v2;
    CData/*7:0*/ __Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v2;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v2;
    CData/*5:0*/ __Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v3;
    CData/*7:0*/ __Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v3;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v3;
    CData/*5:0*/ __Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v4;
    CData/*7:0*/ __Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v4;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v4;
    CData/*5:0*/ __Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v5;
    CData/*7:0*/ __Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v5;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v5;
    CData/*5:0*/ __Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v6;
    CData/*7:0*/ __Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v6;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v6;
    CData/*5:0*/ __Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v7;
    CData/*7:0*/ __Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v7;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v7;
    CData/*5:0*/ __Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_tag__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_tag__DOT__ram__v0;
    CData/*0:0*/ __Vdly__mycpu_top__DOT__d_awvalid;
    CData/*0:0*/ __Vdly__mycpu_top__DOT__d_wvalid;
    CData/*0:0*/ __Vdly__mycpu_top__DOT__d_wlast;
    CData/*4:0*/ __Vdly__mycpu_top__DOT__d_cache_inst__DOT__store_buffer_ctrl;
    CData/*1:0*/ __Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__store_buffer__v0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__store_buffer__v0;
    CData/*0:0*/ __Vdly__mycpu_top__DOT__d_arvalid;
    CData/*0:0*/ __Vdly__mycpu_top__DOT__d_rready;
    CData/*5:0*/ __Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__meta__v0;
    CData/*0:0*/ __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__meta__v0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__meta__v0;
    CData/*5:0*/ __Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__meta__v1;
    CData/*0:0*/ __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__meta__v1;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__meta__v1;
    CData/*3:0*/ __Vdly__mycpu_top__DOT__d_cache_inst__DOT__axi_wcnt;
    CData/*0:0*/ __Vdly__mycpu_top__DOT__d_cache_inst__DOT__bram_use_replace_addr;
    CData/*0:0*/ __Vdly__mycpu_top__DOT__d_cache_inst__DOT__replace_writeback;
    CData/*5:0*/ __Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__meta__v2;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__meta__v2;
    CData/*3:0*/ __Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer__v0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer__v0;
    CData/*0:0*/ __Vdly__mycpu_top__DOT__d_cache_inst__DOT__aw_handshake;
    CData/*5:0*/ __Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__meta__v3;
    CData/*0:0*/ __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__meta__v3;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__meta__v3;
    CData/*3:0*/ __Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer__v1;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer__v1;
    CData/*5:0*/ __Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__meta__v4;
    CData/*0:0*/ __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__meta__v4;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__meta__v4;
    CData/*0:0*/ __Vdly__mycpu_top__DOT__d_cache_inst__DOT__ar_handshake;
    CData/*0:0*/ __Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__bram_replace_wea__v0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__bram_replace_wea__v0;
    CData/*0:0*/ __Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__tag_wea__v0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__tag_wea__v0;
    CData/*0:0*/ __Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__tag_wea__v1;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__tag_wea__v1;
    CData/*0:0*/ __Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__bram_replace_wea__v1;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__bram_replace_wea__v1;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer__v2;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__tag_wea__v2;
    CData/*4:0*/ __Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v0;
    CData/*7:0*/ __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v0;
    CData/*4:0*/ __Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v1;
    CData/*7:0*/ __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v1;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v1;
    CData/*4:0*/ __Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v2;
    CData/*7:0*/ __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v2;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v2;
    CData/*4:0*/ __Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v3;
    CData/*7:0*/ __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v3;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v3;
    CData/*5:0*/ __Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_tag__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_tag__DOT__ram__v0;
    CData/*4:0*/ __Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v0;
    CData/*7:0*/ __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v0;
    CData/*4:0*/ __Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v1;
    CData/*7:0*/ __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v1;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v1;
    CData/*4:0*/ __Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v2;
    CData/*7:0*/ __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v2;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v2;
    CData/*4:0*/ __Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v3;
    CData/*7:0*/ __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v3;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v3;
    CData/*5:0*/ __Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_tag__DOT__ram__v0;
    CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_tag__DOT__ram__v0;
    SData/*9:0*/ __Vtableidx1;
    SData/*8:0*/ __Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v0;
    SData/*8:0*/ __Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v1;
    SData/*8:0*/ __Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v2;
    SData/*8:0*/ __Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v3;
    SData/*8:0*/ __Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v4;
    SData/*8:0*/ __Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v5;
    SData/*8:0*/ __Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v6;
    SData/*8:0*/ __Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v7;
    SData/*8:0*/ __Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v0;
    SData/*8:0*/ __Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v1;
    SData/*8:0*/ __Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v2;
    SData/*8:0*/ __Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v3;
    SData/*8:0*/ __Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v4;
    SData/*8:0*/ __Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v5;
    SData/*8:0*/ __Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v6;
    SData/*8:0*/ __Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v7;
    SData/*9:0*/ __Vdly__mycpu_top__DOT__d_cache_inst__DOT__bram_replace_addr;
    SData/*9:0*/ __Vdly__mycpu_top__DOT__d_cache_inst__DOT__bram_read_ready_addr;
    SData/*9:0*/ __Vdly__mycpu_top__DOT__d_cache_inst__DOT__bram_replace_write_addr;
    SData/*9:0*/ __Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v0;
    SData/*9:0*/ __Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v1;
    SData/*9:0*/ __Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v2;
    SData/*9:0*/ __Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v3;
    SData/*9:0*/ __Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v0;
    SData/*9:0*/ __Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v1;
    SData/*9:0*/ __Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v2;
    SData/*9:0*/ __Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v3;
    VlWide<3>/*65:0*/ __Vdlyvval__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines__v1;
    VlWide<3>/*64:0*/ __Vdly__mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend;
    IData/*31:0*/ __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg;
    IData/*31:0*/ __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg;
    IData/*31:0*/ __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__random_reg;
    IData/*31:0*/ __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg;
    IData/*31:0*/ __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg;
    IData/*31:0*/ __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg;
    VlWide<3>/*73:0*/ __Vdlyvval__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb__v0;
    VlWide<3>/*73:0*/ __Vdlyvval__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb__v1;
    IData/*19:0*/ __Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_tag__DOT__ram__v0;
    IData/*19:0*/ __Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_tag__DOT__ram__v0;
    IData/*31:0*/ __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__last_wea__v0;
    IData/*31:0*/ __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__last_wea__v1;
    VlWide<3>/*69:0*/ __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__store_buffer__v0;
    IData/*31:0*/ __Vdly__mycpu_top__DOT__d_cache_inst__DOT__dcache_status;
    IData/*31:0*/ __Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__meta__v0;
    IData/*31:0*/ __Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__meta__v1;
    IData/*31:0*/ __Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__meta__v2;
    IData/*31:0*/ __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer__v0;
    IData/*31:0*/ __Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__meta__v3;
    IData/*31:0*/ __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer__v1;
    IData/*31:0*/ __Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__meta__v4;
    IData/*19:0*/ __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_tag__DOT__ram__v0;
    IData/*19:0*/ __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_tag__DOT__ram__v0;
    VlWide<3>/*95:0*/ __Vtemp113;
    VlWide<3>/*95:0*/ __Vtemp117;
    VlWide<3>/*95:0*/ __Vtemp118;
    VlWide<3>/*95:0*/ __Vtemp121;
    VlWide<3>/*95:0*/ __Vtemp122;
    VlWide<3>/*95:0*/ __Vtemp133;
    VlWide<3>/*95:0*/ __Vtemp136;
    IData/*31:0*/ __Vilp;
    VlWide<3>/*65:0*/ __Vdlyvval__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines__v0;
    QData/*32:0*/ __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__count_reg;
    // Body
    __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v0 = 0U;
    __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v1 = 0U;
    __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v2 = 0U;
    __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v3 = 0U;
    __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v0 = 0U;
    __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v1 = 0U;
    __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v2 = 0U;
    __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v3 = 0U;
    __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v0 = 0U;
    __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v1 = 0U;
    __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v2 = 0U;
    __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v3 = 0U;
    __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v4 = 0U;
    __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v5 = 0U;
    __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v6 = 0U;
    __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v7 = 0U;
    __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v0 = 0U;
    __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v1 = 0U;
    __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v2 = 0U;
    __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v3 = 0U;
    __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v4 = 0U;
    __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v5 = 0U;
    __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v6 = 0U;
    __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v7 = 0U;
    __Vdly__mycpu_top__DOT__u_datapath__DOT__D_master_is_in_delayslot 
        = vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_is_in_delayslot;
    __Vdly__mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__state 
        = vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__state;
    __Vdly__mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[0U] 
        = vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[0U];
    __Vdly__mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[1U] 
        = vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[1U];
    __Vdly__mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[2U] 
        = vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[2U];
    __Vdlyvset__mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT__v0 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__PHT__v0 = 0U;
    vlSelf->__Vdlyvset__mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf__v0 = 0U;
    vlSelf->__Vdlyvset__mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf__v1 = 0U;
    vlSelf->__Vdlyvset__mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf__v2 = 0U;
    __Vdly__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_stall 
        = vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_stall;
    __Vdly__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__write_pointer 
        = vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__write_pointer;
    __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__count_reg 
        = vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__count_reg;
    __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg 
        = vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg;
    __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg 
        = vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg;
    __Vdly__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__data_count 
        = vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__data_count;
    __Vdly__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_pointer 
        = vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_pointer;
    __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg 
        = vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg;
    __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
        = vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg;
    __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__random_reg 
        = vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__random_reg;
    __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg 
        = vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg;
    __Vdlyvset__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb__v0 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb__v1 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb__v2 = 0U;
    vlSelf->__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__tag_wea__v0 = 0U;
    vlSelf->__Vdly__mycpu_top__DOT__i_rready = vlSelf->mycpu_top__DOT__i_rready;
    vlSelf->__Vdly__mycpu_top__DOT__i_cache_inst__DOT__axi_cnt 
        = vlSelf->mycpu_top__DOT__i_cache_inst__DOT__axi_cnt;
    vlSelf->__Vdly__mycpu_top__DOT__i_arvalid = vlSelf->mycpu_top__DOT__i_arvalid;
    vlSelf->__Vdly__mycpu_top__DOT__i_cache_inst__DOT__icache_status 
        = vlSelf->mycpu_top__DOT__i_cache_inst__DOT__icache_status;
    __Vdly__mycpu_top__DOT__d_cache_inst__DOT__ar_handshake 
        = vlSelf->mycpu_top__DOT__d_cache_inst__DOT__ar_handshake;
    __Vdly__mycpu_top__DOT__d_cache_inst__DOT__aw_handshake 
        = vlSelf->mycpu_top__DOT__d_cache_inst__DOT__aw_handshake;
    __Vdly__mycpu_top__DOT__d_cache_inst__DOT__replace_writeback 
        = vlSelf->mycpu_top__DOT__d_cache_inst__DOT__replace_writeback;
    __Vdly__mycpu_top__DOT__d_cache_inst__DOT__bram_read_ready_addr 
        = vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_read_ready_addr;
    __Vdly__mycpu_top__DOT__d_cache_inst__DOT__axi_wcnt 
        = vlSelf->mycpu_top__DOT__d_cache_inst__DOT__axi_wcnt;
    __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__store_buffer__v0 = 0U;
    __Vdly__mycpu_top__DOT__d_wlast = vlSelf->mycpu_top__DOT__d_wlast;
    __Vdly__mycpu_top__DOT__d_wvalid = vlSelf->mycpu_top__DOT__d_wvalid;
    __Vdly__mycpu_top__DOT__d_awvalid = vlSelf->mycpu_top__DOT__d_awvalid;
    __Vdly__mycpu_top__DOT__d_cache_inst__DOT__bram_replace_write_addr 
        = vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_replace_write_addr;
    __Vdly__mycpu_top__DOT__d_rready = vlSelf->mycpu_top__DOT__d_rready;
    __Vdly__mycpu_top__DOT__d_cache_inst__DOT__bram_replace_addr 
        = vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_replace_addr;
    __Vdly__mycpu_top__DOT__d_cache_inst__DOT__bram_use_replace_addr 
        = vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_use_replace_addr;
    __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_tag__DOT__ram__v0 = 0U;
    __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_tag__DOT__ram__v0 = 0U;
    __Vdly__mycpu_top__DOT__d_arvalid = vlSelf->mycpu_top__DOT__d_arvalid;
    __Vdly__mycpu_top__DOT__d_cache_inst__DOT__dcache_status 
        = vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dcache_status;
    __Vdly__mycpu_top__DOT__d_cache_inst__DOT__store_buffer_ctrl 
        = vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_ctrl;
    __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_tag__DOT__ram__v0 = 0U;
    __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_tag__DOT__ram__v0 = 0U;
    __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__bram_replace_wea__v0 = 0U;
    __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__bram_replace_wea__v1 = 0U;
    __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer__v0 = 0U;
    __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer__v1 = 0U;
    __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer__v2 = 0U;
    __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__tag_wea__v0 = 0U;
    __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__tag_wea__v1 = 0U;
    __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__tag_wea__v2 = 0U;
    vlSelf->__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__data_wea__v0 = 0U;
    vlSelf->__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__data_wea__v2 = 0U;
    vlSelf->__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__data_wea__v1 = 0U;
    vlSelf->__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__data_wea__v3 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines__v0 = 0U;
    __Vdlyvset__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines__v1 = 0U;
    vlSelf->__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__meta__v0 = 0U;
    vlSelf->__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__meta__v1 = 0U;
    vlSelf->__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__meta__v2 = 0U;
    vlSelf->__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__meta__v3 = 0U;
    vlSelf->__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__meta__v4 = 0U;
    vlSelf->__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__meta__v5 = 0U;
    __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__meta__v0 = 0U;
    __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__meta__v1 = 0U;
    __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__meta__v2 = 0U;
    __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__meta__v3 = 0U;
    __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__meta__v4 = 0U;
    vlSelf->__Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__meta__v5 = 0U;
    vlSelf->__Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__meta__v6 = 0U;
    vlSelf->__Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__meta__v7 = 0U;
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D2E_clear2)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_cop0_info = 0U;
    } else if (vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_ena) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_cop0_info 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_cop0_info;
    }
    if (vlSelf->aresetn) {
        if (vlSelf->arvalid) {
            vlSelf->mycpu_top__DOT__u_arbitrater__DOT__ar_sel_lock 
                = (1U & (~ (IData)(vlSelf->arready)));
        }
    } else {
        vlSelf->mycpu_top__DOT__u_arbitrater__DOT__ar_sel_lock = 0U;
    }
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellout__genblk1__BRA__1__KET____DOT__i_data__doutb 
        = vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram
        [vlSelf->mycpu_top__DOT__i_cache_inst__DOT__bram_word_addr];
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellout__genblk1__BRA__0__KET____DOT__i_data__doutb 
        = vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram
        [vlSelf->mycpu_top__DOT__i_cache_inst__DOT__bram_word_addr];
    if (vlSelf->aresetn) {
        if (vlSelf->arvalid) {
            if ((1U & (~ (IData)(vlSelf->arready)))) {
                vlSelf->mycpu_top__DOT__u_arbitrater__DOT__ar_sel_lock_val 
                    = vlSelf->mycpu_top__DOT__u_arbitrater__DOT__ar_sel;
            }
        }
    } else {
        vlSelf->mycpu_top__DOT__u_arbitrater__DOT__ar_sel_lock_val = 0U;
    }
    if ((1U & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_wea
         [1U])) {
        __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v0 
            = (0xffU & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_bram_wdata);
        __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v0 = 1U;
        __Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v0 = 0U;
        __Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v0 
            = vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_write_addr;
    }
    if ((2U & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_wea
         [1U])) {
        __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v1 
            = (0xffU & (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_bram_wdata 
                        >> 8U));
        __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v1 = 1U;
        __Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v1 = 8U;
        __Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v1 
            = vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_write_addr;
    }
    if ((4U & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_wea
         [1U])) {
        __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v2 
            = (0xffU & (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_bram_wdata 
                        >> 0x10U));
        __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v2 = 1U;
        __Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v2 = 0x10U;
        __Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v2 
            = vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_write_addr;
    }
    if ((8U & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_wea
         [1U])) {
        __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v3 
            = (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_bram_wdata 
               >> 0x18U);
        __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v3 = 1U;
        __Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v3 = 0x18U;
        __Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v3 
            = vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_write_addr;
    }
    if ((1U & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_wea
         [0U])) {
        __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v0 
            = (0xffU & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_bram_wdata);
        __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v0 = 1U;
        __Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v0 = 0U;
        __Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v0 
            = vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_write_addr;
    }
    if ((2U & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_wea
         [0U])) {
        __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v1 
            = (0xffU & (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_bram_wdata 
                        >> 8U));
        __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v1 = 1U;
        __Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v1 = 8U;
        __Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v1 
            = vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_write_addr;
    }
    if ((4U & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_wea
         [0U])) {
        __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v2 
            = (0xffU & (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_bram_wdata 
                        >> 0x10U));
        __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v2 = 1U;
        __Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v2 = 0x10U;
        __Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v2 
            = vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_write_addr;
    }
    if ((8U & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_wea
         [0U])) {
        __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v3 
            = (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_bram_wdata 
               >> 0x18U);
        __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v3 = 1U;
        __Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v3 = 0x18U;
        __Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v3 
            = vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_write_addr;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D2E_clear2)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_rs = 0U;
    } else if (vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_ena) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_rs 
            = (0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                        >> 0x15U));
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D2E_clear2)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_rt = 0U;
    } else if (vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_ena) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_rt 
            = (0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                        >> 0x10U));
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D2E_clear2)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except_temp = 0U;
    } else if (vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_ena) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except_temp 
            = ((0x10000U & (((0U != (3U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[1U])) 
                             | ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[1U] 
                                 >> 0x1fU) & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__is_kernel_mode)))) 
                            << 0x10U)) | ((0x8000U 
                                           & ((0xffff8000U 
                                               & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[2U] 
                                                  << 0xeU)) 
                                              | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[2U] 
                                                 << 0xfU))) 
                                          | ((0x4000U 
                                              & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[2U] 
                                                 << 0xdU)) 
                                             | (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst) 
                                                 << 0xdU) 
                                                | (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_syscall_inst) 
                                                    << 0xcU) 
                                                   | (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_break_inst) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_eret_inst) 
                                                          << 0xaU) 
                                                         | ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_id_cpu) 
                                                            << 8U))))))));
    }
    if (vlSelf->aresetn) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__last_wdata 
            = vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_bram_wdata;
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__last_line_addr 
            = vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_write_addr;
    } else {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__last_wdata = 0U;
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__last_line_addr = 0U;
    }
    if ((1U & vlSelf->mycpu_top__DOT__i_cache_inst__DOT__data_wea
         [1U])) {
        __Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v0 
            = (0xffU & (IData)(vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__i_data__dina));
        __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v0 = 1U;
        __Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v0 = 0U;
        __Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v0 
            = vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__i_data__addra;
    }
    if ((2U & vlSelf->mycpu_top__DOT__i_cache_inst__DOT__data_wea
         [1U])) {
        __Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v1 
            = (0xffU & (IData)((vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__i_data__dina 
                                >> 8U)));
        __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v1 = 1U;
        __Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v1 = 8U;
        __Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v1 
            = vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__i_data__addra;
    }
    if ((4U & vlSelf->mycpu_top__DOT__i_cache_inst__DOT__data_wea
         [1U])) {
        __Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v2 
            = (0xffU & (IData)((vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__i_data__dina 
                                >> 0x10U)));
        __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v2 = 1U;
        __Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v2 = 0x10U;
        __Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v2 
            = vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__i_data__addra;
    }
    if ((8U & vlSelf->mycpu_top__DOT__i_cache_inst__DOT__data_wea
         [1U])) {
        __Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v3 
            = (0xffU & (IData)((vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__i_data__dina 
                                >> 0x18U)));
        __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v3 = 1U;
        __Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v3 = 0x18U;
        __Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v3 
            = vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__i_data__addra;
    }
    if ((0x10U & vlSelf->mycpu_top__DOT__i_cache_inst__DOT__data_wea
         [1U])) {
        __Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v4 
            = (0xffU & (IData)((vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__i_data__dina 
                                >> 0x20U)));
        __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v4 = 1U;
        __Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v4 = 0x20U;
        __Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v4 
            = vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__i_data__addra;
    }
    if ((0x20U & vlSelf->mycpu_top__DOT__i_cache_inst__DOT__data_wea
         [1U])) {
        __Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v5 
            = (0xffU & (IData)((vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__i_data__dina 
                                >> 0x28U)));
        __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v5 = 1U;
        __Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v5 = 0x28U;
        __Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v5 
            = vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__i_data__addra;
    }
    if ((0x40U & vlSelf->mycpu_top__DOT__i_cache_inst__DOT__data_wea
         [1U])) {
        __Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v6 
            = (0xffU & (IData)((vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__i_data__dina 
                                >> 0x30U)));
        __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v6 = 1U;
        __Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v6 = 0x30U;
        __Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v6 
            = vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__i_data__addra;
    }
    if ((0x80U & vlSelf->mycpu_top__DOT__i_cache_inst__DOT__data_wea
         [1U])) {
        __Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v7 
            = (0xffU & (IData)((vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__i_data__dina 
                                >> 0x38U)));
        __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v7 = 1U;
        __Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v7 = 0x38U;
        __Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v7 
            = vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__i_data__addra;
    }
    if ((1U & vlSelf->mycpu_top__DOT__i_cache_inst__DOT__data_wea
         [0U])) {
        __Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v0 
            = (0xffU & (IData)(vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__i_data__dina));
        __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v0 = 1U;
        __Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v0 = 0U;
        __Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v0 
            = vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__i_data__addra;
    }
    if ((2U & vlSelf->mycpu_top__DOT__i_cache_inst__DOT__data_wea
         [0U])) {
        __Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v1 
            = (0xffU & (IData)((vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__i_data__dina 
                                >> 8U)));
        __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v1 = 1U;
        __Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v1 = 8U;
        __Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v1 
            = vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__i_data__addra;
    }
    if ((4U & vlSelf->mycpu_top__DOT__i_cache_inst__DOT__data_wea
         [0U])) {
        __Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v2 
            = (0xffU & (IData)((vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__i_data__dina 
                                >> 0x10U)));
        __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v2 = 1U;
        __Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v2 = 0x10U;
        __Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v2 
            = vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__i_data__addra;
    }
    if ((8U & vlSelf->mycpu_top__DOT__i_cache_inst__DOT__data_wea
         [0U])) {
        __Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v3 
            = (0xffU & (IData)((vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__i_data__dina 
                                >> 0x18U)));
        __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v3 = 1U;
        __Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v3 = 0x18U;
        __Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v3 
            = vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__i_data__addra;
    }
    if ((0x10U & vlSelf->mycpu_top__DOT__i_cache_inst__DOT__data_wea
         [0U])) {
        __Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v4 
            = (0xffU & (IData)((vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__i_data__dina 
                                >> 0x20U)));
        __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v4 = 1U;
        __Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v4 = 0x20U;
        __Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v4 
            = vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__i_data__addra;
    }
    if ((0x20U & vlSelf->mycpu_top__DOT__i_cache_inst__DOT__data_wea
         [0U])) {
        __Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v5 
            = (0xffU & (IData)((vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__i_data__dina 
                                >> 0x28U)));
        __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v5 = 1U;
        __Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v5 = 0x28U;
        __Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v5 
            = vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__i_data__addra;
    }
    if ((0x40U & vlSelf->mycpu_top__DOT__i_cache_inst__DOT__data_wea
         [0U])) {
        __Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v6 
            = (0xffU & (IData)((vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__i_data__dina 
                                >> 0x30U)));
        __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v6 = 1U;
        __Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v6 = 0x30U;
        __Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v6 
            = vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__i_data__addra;
    }
    if ((0x80U & vlSelf->mycpu_top__DOT__i_cache_inst__DOT__data_wea
         [0U])) {
        __Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v7 
            = (0xffU & (IData)((vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__i_data__dina 
                                >> 0x38U)));
        __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v7 = 1U;
        __Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v7 = 0x38U;
        __Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v7 
            = vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__i_data__addra;
    }
    __Vdly__mycpu_top__DOT__u_datapath__DOT__D_master_is_in_delayslot 
        = ((~ ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_flush))) 
           & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_ena)
               ? ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_is_bj) 
                  & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_ena)))
               : (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_is_in_delayslot)));
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D2E_clear2)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_cmov_type = 0U;
    } else if (vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_ena) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_cmov_type 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_cmov_type;
    }
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT____Vcellout__genblk1__BRA__1__KET____DOT__d_data__doutb 
        = vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram
        [vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_word_addr];
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT____Vcellout__genblk1__BRA__0__KET____DOT__d_data__doutb 
        = vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram
        [vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_word_addr];
    if (vlSelf->aresetn) {
        __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__last_wea__v0 
            = (((- (IData)((1U & (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_wea
                                  [0U] >> 3U)))) << 0x18U) 
               | ((0xff0000U & ((- (IData)((1U & (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_wea
                                                  [0U] 
                                                  >> 2U)))) 
                                << 0x10U)) | ((0xff00U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_wea
                                                                 [0U] 
                                                                 >> 1U)))) 
                                                  << 8U)) 
                                              | (0xffU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_wea
                                                               [0U])))))));
        __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__last_wea__v1 
            = (((- (IData)((1U & (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_wea
                                  [1U] >> 3U)))) << 0x18U) 
               | ((0xff0000U & ((- (IData)((1U & (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_wea
                                                  [1U] 
                                                  >> 2U)))) 
                                << 0x10U)) | ((0xff00U 
                                               & ((- (IData)(
                                                             (1U 
                                                              & (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_wea
                                                                 [1U] 
                                                                 >> 1U)))) 
                                                  << 8U)) 
                                              | (0xffU 
                                                 & (- (IData)(
                                                              (1U 
                                                               & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_wea
                                                               [1U])))))));
    } else {
        __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__last_wea__v0 = 0U;
        __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__last_wea__v1 = 0U;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D2E_clear2)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_shamt_value = 0U;
    } else if (vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_ena) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_shamt_value 
            = (0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                        >> 6U));
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D2E_clear2)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_imm_value = 0U;
    } else if (vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_ena) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_imm_value 
            = ((3U == (3U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                             >> 0x1cU))) ? (0xffffU 
                                            & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                : (((- (IData)((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                      >> 0xfU)))) << 0x10U) 
                   | (0xffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])));
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D2E_clear1)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_trap_type = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_trap_type 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_trap_type;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_flush)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_alu_res = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_alu_res 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_res;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D2E_clear1)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_branch_target = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_branch_target 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_branch_target;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_flush)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_is_in_delayslot = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_is_in_delayslot 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_is_in_delayslot;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D2E_clear1)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_jump_conflict_tmp = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_jump_conflict_tmp 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_jump_conflict;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D2E_clear1)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_cop0_info = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_cop0_info 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_cop0_info;
    }
    if (vlSelf->aresetn) {
        if (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_ena) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_debug_cp0_random 
                = vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_debug_cp0_random;
        }
    } else {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_debug_cp0_random = 0U;
    }
    if (vlSelf->aresetn) {
        if (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_ena) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_debug_cp0_count 
                = vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_debug_cp0_count;
        }
    } else {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_debug_cp0_count = 0U;
    }
    if (vlSelf->aresetn) {
        if (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_ena) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_debug_cp0_cause 
                = vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_debug_cp0_cause;
        }
    } else {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_debug_cp0_cause = 0U;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D2E_clear1)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_cmov_type = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_cmov_type 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_cmov_type;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D2E_clear1)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_pred_take = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_pred_take 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_pred_take;
    }
    if (vlSelf->aresetn) {
        if (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_ena) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst 
                = vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst;
        }
    } else {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst = 0U;
    }
    if (vlSelf->aresetn) {
        if (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_ena) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_pc 
                = vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_pc;
        }
    } else {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_pc = 0U;
    }
    if (vlSelf->aresetn) {
        if (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_ena) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_reg_wen 
                = vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_reg_wen;
        }
    } else {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_reg_wen = 0U;
    }
    if (vlSelf->aresetn) {
        if (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_ena) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_reg_wen 
                = vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_reg_wen;
        }
    } else {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_reg_wen = 0U;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D2E_clear1)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_branch_type = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_branch_type 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_branch_type;
    }
    if (vlSelf->aresetn) {
        if ((1U & (~ ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                       >> 0xaU) & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))))) {
            if (((0U != vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except) 
                 & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
                if ((IData)((0U != (0x1807cU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except)))) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__badva_reg 
                        = vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__badva_in;
                }
            }
        }
    } else {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__badva_reg = 0U;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D2E_clear1)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rs = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rs 
            = (0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                        >> 0x15U));
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D2E_clear1)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt 
            = (0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                        >> 0x10U));
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D2E_clear1)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_is_link_pc8 = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_is_link_pc8 
            = (1U & (IData)(((0U == (0xf0000000U & 
                                     vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) 
                             & ((0x8000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                 ? (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                    >> 0x1aU) : ((0x4000000U 
                                                  & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                  ? (IData)(
                                                            (0x100000U 
                                                             == 
                                                             (0x1e0000U 
                                                              & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])))
                                                  : 
                                                 ((8U 
                                                   != 
                                                   (0x3fU 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) 
                                                  & (9U 
                                                     == 
                                                     (0x3fU 
                                                      & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U]))))))));
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D2E_clear1)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_pc_plus4 = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_pc_plus4 
            = ((IData)(4U) + vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[1U]);
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_flush)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_is_in_delayslot = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_is_in_delayslot 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_is_in_delayslot;
    }
    if (vlSelf->aresetn) {
        if (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_ena) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_debug_int 
                = (1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except 
                         >> 9U));
        }
    } else {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_debug_int = 0U;
    }
    if (vlSelf->aresetn) {
        if (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_ena) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_except 
                = vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except;
        }
    } else {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_except = 0U;
    }
    if (vlSelf->aresetn) {
        if (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_ena) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_except 
                = vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except;
        }
    } else {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_except = 0U;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D2E_clear1)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_shamt_value = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_shamt_value 
            = (0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                        >> 6U));
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D2E_clear1)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_imm_value = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_imm_value 
            = ((3U == (3U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                             >> 0x1cU))) ? (0xffffU 
                                            & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                : (((- (IData)((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                      >> 0xfU)))) << 0x10U) 
                   | (0xffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])));
    }
    if (vlSelf->aresetn) {
        if ((2U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__state))) {
            if ((1U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__state))) {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_result 
                    = (((QData)((IData)(((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[2U] 
                                          << 0x1fU) 
                                         | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[1U] 
                                            >> 1U)))) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[0U])));
                vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_ready = 1U;
                if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_start)))) {
                    __Vdly__mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__state = 0U;
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_ready = 0U;
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_result = 0ULL;
                }
            } else if ((0x20U != (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__cnt))) {
                if ((1U & (IData)((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__div_temp 
                                   >> 0x20U)))) {
                    __Vtemp113[1U] = (((IData)((((QData)((IData)(
                                                                 vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[1U])) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[0U])))) 
                                       >> 0x1fU) | 
                                      ((IData)(((((QData)((IData)(
                                                                  vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[1U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[0U]))) 
                                                >> 0x20U)) 
                                       << 1U));
                    __Vdly__mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[0U] 
                        = ((IData)((((QData)((IData)(
                                                     vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[0U])))) 
                           << 1U);
                } else {
                    __Vtemp113[1U] = (((IData)((((QData)((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__div_temp)) 
                                                 << 0x20U) 
                                                | (QData)((IData)(
                                                                  vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[0U])))) 
                                       >> 0x1fU) | 
                                      ((IData)(((((QData)((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__div_temp)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[0U]))) 
                                                >> 0x20U)) 
                                       << 1U));
                    __Vdly__mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[0U] 
                        = (1U | ((IData)((((QData)((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__div_temp)) 
                                           << 0x20U) 
                                          | (QData)((IData)(
                                                            vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[0U])))) 
                                 << 1U));
                }
                __Vdly__mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[1U] 
                    = __Vtemp113[1U];
                __Vdly__mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[2U] 
                    = ((1U & (IData)((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__div_temp 
                                      >> 0x20U))) ? 
                       ((IData)(((((QData)((IData)(
                                                   vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[1U])) 
                                   << 0x20U) | (QData)((IData)(
                                                               vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[0U]))) 
                                 >> 0x20U)) >> 0x1fU)
                        : ((IData)(((((QData)((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__div_temp)) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[0U]))) 
                                    >> 0x20U)) >> 0x1fU));
                vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__cnt 
                    = (0x3fU & ((IData)(1U) + (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__cnt)));
            } else {
                if (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_sign) 
                     & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__sign1) 
                        ^ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__sign2)))) {
                    __Vdly__mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[0U] 
                        = ((IData)(1U) + (~ vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[0U]));
                }
                vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__cnt = 0U;
                if (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_sign) 
                     & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__sign1) 
                        ^ vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[2U]))) {
                    __Vdly__mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[1U] 
                        = ((1U & __Vdly__mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[1U]) 
                           | (((IData)(1U) + (~ ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[2U] 
                                                  << 0x1fU) 
                                                 | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[1U] 
                                                    >> 1U)))) 
                              << 1U));
                    __Vdly__mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[2U] 
                        = (((IData)(1U) + (~ ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[2U] 
                                               << 0x1fU) 
                                              | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[1U] 
                                                 >> 1U)))) 
                           >> 0x1fU);
                }
                __Vdly__mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__state = 3U;
            }
        } else if ((1U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__state))) {
            __Vdly__mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[0U] = 0U;
            __Vdly__mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[1U] = 0U;
            __Vdly__mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[2U] = 0U;
            __Vdly__mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__state = 3U;
        } else if (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_start) {
            if ((0U == vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_b)) {
                __Vdly__mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__state = 1U;
            } else {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__cnt = 0U;
                __Vdly__mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[0U] = 0U;
                __Vdly__mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[1U] = 0U;
                __Vdly__mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[2U] = 0U;
                __Vdly__mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__state = 2U;
                vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__sign1 
                    = (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_sign) 
                        & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_a 
                           >> 0x1fU)) & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_a 
                                         >> 0x1fU));
                vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__sign2 
                    = (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_sign) 
                        & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_b 
                           >> 0x1fU)) & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_b 
                                         >> 0x1fU));
                __Vdly__mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[0U] 
                    = ((1U & __Vdly__mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[0U]) 
                       | ((((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_sign) 
                            & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_a 
                               >> 0x1fU)) ? ((IData)(1U) 
                                             + (~ vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_a))
                            : vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_a) 
                          << 1U));
                __Vdly__mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[1U] 
                    = ((0xfffffffeU & __Vdly__mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[1U]) 
                       | ((((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_sign) 
                            & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_a 
                               >> 0x1fU)) ? ((IData)(1U) 
                                             + (~ vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_a))
                            : vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_a) 
                          >> 0x1fU));
                vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__divisor 
                    = (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_sign) 
                        & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_b 
                           >> 0x1fU)) ? ((IData)(1U) 
                                         + (~ vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_b))
                        : vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_b);
            }
        } else {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_ready = 0U;
            vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_result = 0ULL;
        }
    } else {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__cnt = 0U;
        __Vdly__mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__state = 0U;
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_ready = 0U;
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_result = 0ULL;
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__sign1 = 0U;
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__sign2 = 0U;
    }
    if (vlSelf->aresetn) {
        if (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_ena) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst 
                = vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst;
        }
    } else {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst = 0U;
    }
    if (vlSelf->aresetn) {
        if (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_ena) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_pc 
                = vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_pc;
        }
    } else {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_pc = 0U;
    }
    if (vlSelf->aresetn) {
        if (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_is_branch) {
            __Vdlyvval__mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT__v0 
                = ((0x3eU & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT
                    [(0xfU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_pc 
                              >> 2U))]) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_actual_take));
            __Vdlyvset__mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT__v0 = 1U;
            __Vdlyvdim0__mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT__v0 
                = (0xfU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_pc 
                           >> 2U));
        }
    } else {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[0xfU] = 0U;
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[0xeU] = 0U;
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[0xdU] = 0U;
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[0xcU] = 0U;
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[0xbU] = 0U;
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[0xaU] = 0U;
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[9U] = 0U;
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[8U] = 0U;
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[7U] = 0U;
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[6U] = 0U;
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[5U] = 0U;
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[4U] = 0U;
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[3U] = 0U;
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[2U] = 0U;
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[1U] = 0U;
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[0U] = 0U;
    }
    if (vlSelf->aresetn) {
        if (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_is_branch) {
            __Vdlyvval__mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__PHT__v0 
                = ((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__PHT
                    [vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT
                    [(0xfU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_pc 
                              >> 2U))]]) ? ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__PHT
                                             [vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT
                                             [(0xfU 
                                               & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_pc 
                                                  >> 2U))]])
                                             ? ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_actual_take)
                                                 ? 2U
                                                 : 1U)
                                             : ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_actual_take)
                                                 ? 2U
                                                 : 3U))
                    : ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__PHT
                        [vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT
                        [(0xfU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_pc 
                                  >> 2U))]]) ? ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_actual_take)
                                                 ? 3U
                                                 : 0U)
                        : ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_actual_take)
                            ? 1U : 0U)));
            __Vdlyvset__mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__PHT__v0 = 1U;
            __Vdlyvdim0__mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__PHT__v0 
                = vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT
                [(0xfU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_pc 
                          >> 2U))];
        }
    } else {
        __Vilp = 0U;
        while ((__Vilp <= 0x3fU)) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__PHT[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    if (vlSelf->aresetn) {
        if (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_ena) 
             & (((0U != (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__data_count)) 
                 & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_is_bj))) 
                & (1U != (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__data_count))))) {
            __Vtemp117[0U] = 1U;
            __Vtemp117[1U] = 0U;
            __Vtemp117[2U] = 0U;
            VL_ADD_W(3, __Vtemp118, __Vtemp117, vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__slave_cnt);
            vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__slave_cnt[0U] 
                = __Vtemp118[0U];
            vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__slave_cnt[1U] 
                = __Vtemp118[1U];
            vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__slave_cnt[2U] 
                = (1U & __Vtemp118[2U]);
        }
    } else {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__slave_cnt[0U] = 0U;
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__slave_cnt[1U] = 0U;
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__slave_cnt[2U] = 0U;
    }
    if (vlSelf->aresetn) {
        if (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_ena) 
             & ((0U != (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__data_count)) 
                | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_is_in_delayslot)))) {
            __Vtemp121[0U] = 1U;
            __Vtemp121[1U] = 0U;
            __Vtemp121[2U] = 0U;
            VL_ADD_W(3, __Vtemp122, __Vtemp121, vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__master_cnt);
            vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__master_cnt[0U] 
                = __Vtemp122[0U];
            vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__master_cnt[1U] 
                = __Vtemp122[1U];
            vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__master_cnt[2U] 
                = (1U & __Vtemp122[2U]);
        }
    } else {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__master_cnt[0U] = 0U;
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__master_cnt[1U] = 0U;
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__master_cnt[2U] = 0U;
    }
    if (vlSelf->aresetn) {
        if (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_ready) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_ready = 0U;
        } else if (((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)
                     ? (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_start1)
                     : (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_start2))) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__part_0 
                = ((0xffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__cal_a) 
                   * (0xffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__cal_b));
            vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__part_1 
                = ((0xffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__cal_a) 
                   * (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__cal_b 
                      >> 0x10U));
            vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__part_2 
                = ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__cal_a 
                    >> 0x10U) * (0xffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__cal_b));
            vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__part_3 
                = ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__cal_a 
                    >> 0x10U) * (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__cal_b 
                                 >> 0x10U));
            vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_ready = 1U;
        }
    } else {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_ready = 0U;
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__part_0 = 0U;
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__part_1 = 0U;
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__part_2 = 0U;
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__part_3 = 0U;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D2E_clear1)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rs_value = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rs_value 
            = (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_forward_top__alu_wen1) 
                & (~ (IData)((0U != (0x1fU & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_reg_waddr) 
                                              ^ ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                  << 0xbU) 
                                                 | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                    >> 0x15U))))))))
                ? vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_res
                : (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_forward_top__alu_wen2) 
                    & (~ (IData)((0U != (0x1fU & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_reg_waddr) 
                                                  ^ 
                                                  ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                    << 0xbU) 
                                                   | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                      >> 0x15U))))))))
                    ? vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_res
                    : (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_reg_wen) 
                        & (~ (IData)((0U != (0x1fU 
                                             & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_reg_waddr) 
                                                ^ (
                                                   (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                    << 0xbU) 
                                                   | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                      >> 0x15U))))))))
                        ? vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_reg_wdata
                        : (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_reg_wen) 
                            & (~ (IData)((0U != (0x1fU 
                                                 & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_reg_waddr) 
                                                    ^ 
                                                    ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                      << 0xbU) 
                                                     | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                        >> 0x15U))))))))
                            ? vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_reg_wdata
                            : vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_rs_value_tmp))));
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_flush)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_renM = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_renM 
            = (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_mem_sel) 
                & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                   >> 0xcU)) | ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_mem_sel) 
                                & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                   >> 0xcU)));
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_flush)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_wenM = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_wenM 
            = (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_mem_sel) 
                & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                   >> 0xbU)) | ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_mem_sel) 
                                & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                   >> 0xbU)));
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_hilo_reg__DOT__hilo_reg 
        = ((IData)(vlSelf->aresetn) ? ((1U & ((((((vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                                   >> 7U) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except)))) 
                                                 & (~ (IData)(
                                                              (0U 
                                                               != vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except)))) 
                                                | ((vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                                    >> 7U) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except))))) 
                                               & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall))) 
                                              & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_flush))))
                                        ? (((- (QData)((IData)(
                                                               (1U 
                                                                & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                                                   >> 7U))))) 
                                            & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluB__DOT__temp_aluout_64) 
                                           | ((- (QData)((IData)(
                                                                 (1U 
                                                                  & (~ 
                                                                     (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                                                      >> 7U)))))) 
                                              & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluA__DOT__temp_aluout_64))
                                        : vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_hilo_reg__DOT__hilo_reg)
            : 0ULL);
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D2E_clear1)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except_temp = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except_temp 
            = ((0x10000U & (((0U != (3U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[1U])) 
                             | ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[1U] 
                                 >> 0x1fU) & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__is_kernel_mode)))) 
                            << 0x10U)) | ((0x8000U 
                                           & ((0xffff8000U 
                                               & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[2U] 
                                                  << 0xeU)) 
                                              | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[2U] 
                                                 << 0xfU))) 
                                          | ((0x4000U 
                                              & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[2U] 
                                                 << 0xdU)) 
                                             | (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst) 
                                                 << 0xdU) 
                                                | (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_syscall_inst) 
                                                    << 0xcU) 
                                                   | (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_break_inst) 
                                                       << 0xbU) 
                                                      | (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_eret_inst) 
                                                          << 0xaU) 
                                                         | (((((vlSelf->mycpu_top__DOT__u_datapath__DOT__D_int_info 
                                                                >> 0x10U) 
                                                               & (0U 
                                                                  != (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__data_count))) 
                                                              & (0U 
                                                                 != 
                                                                 (0xffU 
                                                                  & ((vlSelf->mycpu_top__DOT__u_datapath__DOT__D_int_info 
                                                                      >> 8U) 
                                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__D_int_info)))) 
                                                             << 9U) 
                                                            | ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_id_cpu) 
                                                               << 8U)))))))));
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_flush)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__M2cs = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__M2cs 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D2E_clear2)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_rs_value = 0U;
    } else if (vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_ena) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_rs_value 
            = (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_forward_top__alu_wen1) 
                & (~ (IData)((0U != (0x1fU & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_reg_waddr) 
                                              ^ ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                  << 0xbU) 
                                                 | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                    >> 0x15U))))))))
                ? vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_res
                : (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_forward_top__alu_wen2) 
                    & (~ (IData)((0U != (0x1fU & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_reg_waddr) 
                                                  ^ 
                                                  ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                    << 0xbU) 
                                                   | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                      >> 0x15U))))))))
                    ? vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_res
                    : (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_reg_wen) 
                        & (~ (IData)((0U != (0x1fU 
                                             & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_reg_waddr) 
                                                ^ (
                                                   (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                    << 0xbU) 
                                                   | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                      >> 0x15U))))))))
                        ? vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_reg_wdata
                        : (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_reg_wen) 
                            & (~ (IData)((0U != (0x1fU 
                                                 & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_reg_waddr) 
                                                    ^ 
                                                    ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                      << 0xbU) 
                                                     | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                        >> 0x15U))))))))
                            ? vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_reg_wdata
                            : ((0U != (0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                >> 0x15U)))
                                ? (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_regfile__wen2) 
                                    & (~ (IData)((0U 
                                                  != 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_reg_waddr) 
                                                      ^ 
                                                      ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                        << 0xbU) 
                                                       | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                          >> 0x15U))))))))
                                    ? vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_reg_wdata
                                    : (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_regfile__wen1) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_reg_waddr) 
                                                          ^ 
                                                          ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                            << 0xbU) 
                                                           | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                              >> 0x15U))))))))
                                        ? vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_reg_wdata
                                        : vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf
                                       [(0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                  >> 0x15U))]))
                                : 0U)))));
    }
    if ((((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_regfile__wen1) 
          & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_regfile__wen2)) 
         & (~ (IData)((0U != ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_reg_waddr) 
                              ^ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_reg_waddr))))))) {
        vlSelf->__Vdlyvval__mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf__v0 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_reg_wdata;
        vlSelf->__Vdlyvset__mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf__v0 = 1U;
        vlSelf->__Vdlyvdim0__mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf__v0 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_reg_waddr;
    } else {
        if (vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_regfile__wen1) {
            vlSelf->__Vdlyvval__mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf__v1 
                = vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_reg_wdata;
            vlSelf->__Vdlyvset__mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf__v1 = 1U;
            vlSelf->__Vdlyvdim0__mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf__v1 
                = vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_reg_waddr;
        }
        if (vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_regfile__wen2) {
            vlSelf->__Vdlyvval__mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf__v2 
                = vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_reg_wdata;
            vlSelf->__Vdlyvset__mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf__v2 = 1U;
            vlSelf->__Vdlyvdim0__mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf__v2 
                = vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_reg_waddr;
        }
    }
    if (vlSelf->aresetn) {
        if ((1U & (~ ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                       >> 0xaU) & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))))) {
            if ((1U & (~ ((0U != vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except) 
                          & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))))) {
                if ((1U & (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                            >> 0xcU) & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall))))) {
                    if ((0x80U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))) {
                        if ((0x40U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))) {
                            if ((0x20U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))) {
                                if ((1U & (~ ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                                              >> 4U)))) {
                                    if ((8U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))) {
                                        vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__taghi_reg 
                                            = vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__taghi_reg = 0U;
    }
    if (vlSelf->aresetn) {
        if ((1U & (~ ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                       >> 0xaU) & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))))) {
            if ((1U & (~ ((0U != vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except) 
                          & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))))) {
                if ((1U & (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                            >> 0xcU) & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall))))) {
                    if ((0x80U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))) {
                        if ((0x40U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))) {
                            if ((0x20U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))) {
                                if ((1U & (~ ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                                              >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                                                  >> 3U)))) {
                                        vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__taglo_reg 
                                            = vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__taglo_reg = 0U;
    }
    if (vlSelf->aresetn) {
        if ((1U & (~ ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                       >> 0xaU) & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))))) {
            if (((0U != vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except) 
                 & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
                if ((IData)((0U != (0x801cU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except)))) {
                    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__context_reg 
                        = ((0xff80000fU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__context_reg) 
                           | (0x7ffff0U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__badva_in 
                                           >> 9U)));
                }
            } else if ((1U & (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                               >> 0xcU) & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall))))) {
                if ((1U & (~ ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                              >> 7U)))) {
                    if ((1U & (~ ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                                  >> 6U)))) {
                        if ((0x20U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))) {
                            if ((1U & (~ ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                                          >> 4U)))) {
                                if ((1U & (~ ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                                              >> 3U)))) {
                                    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__context_reg 
                                        = ((0x7fffffU 
                                            & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__context_reg) 
                                           | (0xff800000U 
                                              & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value));
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__context_reg = 0U;
    }
    if (vlSelf->aresetn) {
        if ((1U & (~ ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                       >> 0xaU) & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))))) {
            if ((1U & (~ ((0U != vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except) 
                          & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))))) {
                if ((1U & (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                            >> 0xcU) & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall))))) {
                    if ((0x80U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))) {
                        if ((0x40U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))) {
                            if ((0x20U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))) {
                                if ((0x10U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))) {
                                    if ((1U & (~ ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                                                  >> 3U)))) {
                                        vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__errorepc_reg 
                                            = vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__errorepc_reg = 0U;
    }
    if (vlSelf->aresetn) {
        if ((1U & (~ ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                       >> 0xaU) & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))))) {
            if ((1U & (~ ((0U != vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except) 
                          & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))))) {
                if ((1U & (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                            >> 0xcU) & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall))))) {
                    if ((1U & (~ ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                                  >> 7U)))) {
                        if ((0x40U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))) {
                            if ((0x20U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))) {
                                if ((0x10U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))) {
                                    if ((8U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))) {
                                        if ((1U == 
                                             (7U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info)))) {
                                            vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__ebase_reg 
                                                = (
                                                   (0xc0000000U 
                                                    & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__ebase_reg) 
                                                   | (0x3fffffffU 
                                                      & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__ebase_reg = 0x80000000U;
    }
    __Vdly__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_stall 
        = ((IData)(vlSelf->aresetn) & ((((((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_inst_fifo__fifo_rst) 
                                           & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__delay_sel_rst)) 
                                          & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_flush))) 
                                         & (IData)(vlSelf->mycpu_top__DOT__i_cache_stall)) 
                                        & (((0xfU & 
                                             ((IData)(1U) 
                                              + (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_pointer))) 
                                            == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__write_pointer)) 
                                           | ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_pointer) 
                                              == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__write_pointer)))) 
                                       | ((~ ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_stall) 
                                              & (IData)(vlSelf->mycpu_top__DOT__inst_data_ok1))) 
                                          & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_stall))));
    if (vlSelf->aresetn) {
        if ((((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_inst_fifo__fifo_rst) 
              & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_flush))) 
             & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__delay_sel_rst))) {
            if (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_bj) {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_line[0U] 
                    = (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_pointer) 
                        == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__write_pointer))
                        ? vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__write_line1[0U]
                        : vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                       [vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_pointer][0U]);
                vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_line[1U] 
                    = (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_pointer) 
                        == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__write_pointer))
                        ? vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__write_line1[1U]
                        : vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                       [vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_pointer][1U]);
                vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_line[2U] 
                    = (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_pointer) 
                        == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__write_pointer))
                        ? vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__write_line1[2U]
                        : vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                       [vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_pointer][2U]);
            } else {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_line[0U] 
                    = ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_bj)
                        ? (((0xfU & ((IData)(1U) + (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_pointer))) 
                            == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__write_pointer))
                            ? vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__write_line1[0U]
                            : vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                           [(0xfU & ((IData)(1U) + (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_pointer)))][0U])
                        : 0U);
                vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_line[1U] 
                    = ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_bj)
                        ? (((0xfU & ((IData)(1U) + (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_pointer))) 
                            == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__write_pointer))
                            ? vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__write_line1[1U]
                            : vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                           [(0xfU & ((IData)(1U) + (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_pointer)))][1U])
                        : 0U);
                vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_line[2U] 
                    = ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_bj)
                        ? (((0xfU & ((IData)(1U) + (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_pointer))) 
                            == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__write_pointer))
                            ? vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__write_line1[2U]
                            : vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                           [(0xfU & ((IData)(1U) + (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_pointer)))][2U])
                        : 0U);
            }
        } else if (((~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_stall)) 
                    & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_ena))) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_line[0U] = 0U;
            vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_line[1U] = 0U;
            vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_line[2U] = 0U;
        }
    } else {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_line[0U] = 0U;
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_line[1U] = 0U;
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_line[2U] = 0U;
    }
    if (vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_inst_fifo__fifo_rst) {
        __Vdly__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__write_pointer = 0U;
    } else if (((IData)(vlSelf->mycpu_top__DOT__inst_data_ok1) 
                & (IData)(vlSelf->mycpu_top__DOT__inst_data_ok2))) {
        __Vdly__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__write_pointer 
            = (0xfU & ((IData)(2U) + (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__write_pointer)));
    } else if (vlSelf->mycpu_top__DOT__inst_data_ok1) {
        __Vdly__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__write_pointer 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__write_pointer)));
    }
    if (vlSelf->aresetn) {
        __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__count_reg 
            = (0x1ffffffffULL & (1ULL + vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__count_reg));
        __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg 
            = ((0xffff00ffU & __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg) 
               | ((0x8000U & ((0xffff8000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg) 
                              | (((IData)((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__count_reg 
                                           >> 1U)) 
                                  == vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__compare_reg) 
                                 << 0xfU))) | ((0x7c00U 
                                                & ((IData)(vlSelf->ext_int) 
                                                   << 0xaU)) 
                                               | (0x300U 
                                                  & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg))));
        if ((1U & ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                    >> 0xaU) & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall))))) {
            __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg 
                = ((4U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg)
                    ? (0xfffffffbU & __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg)
                    : (0xfffffffdU & __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg));
        } else if (((0U != vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except) 
                    & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
            if ((1U & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg 
                          >> 1U)))) {
                vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__epc_reg 
                    = ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except_bd)
                        ? (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except_pc 
                           - (IData)(4U)) : vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except_pc);
                __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg 
                    = ((0x7fffffffU & __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg) 
                       | ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except_bd) 
                          << 0x1fU));
            }
            if ((IData)((0U != (0x10040U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except)))) {
                __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg 
                    = (0x10U | (0xffffff83U & __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg));
            } else if ((0x20U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except)) {
                __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg 
                    = (0x14U | (0xffffff83U & __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg));
            } else if ((0x200U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except)) {
                __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg 
                    = (0xffffff83U & __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg);
            } else if ((IData)((0U != (0x8010U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except)))) {
                __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg 
                    = (8U | (0xffffff83U & __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg));
            } else if ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except)) {
                __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg 
                    = (0xcU | (0xffffff83U & __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg));
            } else if ((4U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except)) {
                __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg 
                    = (4U | (0xffffff83U & __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg));
            } else if ((0x1000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except)) {
                __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg 
                    = (0x20U | (0xffffff83U & __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg));
            } else if ((0x800U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except)) {
                __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg 
                    = (0x24U | (0xffffff83U & __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg));
            } else if ((0x2000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except)) {
                __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg 
                    = (0x28U | (0xffffff83U & __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg));
            } else if ((0x100U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except)) {
                __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg 
                    = (0x2cU | (0xffffff83U & __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg));
            } else if ((0x80U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except)) {
                __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg 
                    = (0x30U | (0xffffff83U & __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg));
            } else if ((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except)) {
                __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg 
                    = (0x34U | (0xffffff83U & __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg));
            }
            __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg 
                = (2U | __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg);
        } else if ((1U & (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                           >> 0xcU) & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall))))) {
            if ((1U & (~ ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                          >> 7U)))) {
                if ((0x40U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))) {
                    if ((0x20U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))) {
                        if ((0x10U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))) {
                            if ((1U & (~ ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                                          >> 3U)))) {
                                vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__epc_reg 
                                    = vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value;
                            }
                        } else if ((8U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))) {
                            __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg 
                                = ((0xfffffcffU & __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg) 
                                   | (0x300U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value));
                            __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg 
                                = ((0xff7fffffU & __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg) 
                                   | (0x800000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value));
                        } else {
                            __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg 
                                = ((0xefffffffU & __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg) 
                                   | (0x10000000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value));
                            __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg 
                                = ((0xfffffff8U & __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg) 
                                   | (7U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value));
                            __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg 
                                = ((0xffffffefU & __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg) 
                                   | (0x10U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value));
                            __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg 
                                = ((0xffff00ffU & __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg) 
                                   | (0xff00U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value));
                            __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg 
                                = ((0xffbfffffU & __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg) 
                                   | (0x400000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value));
                        }
                    } else if ((0x10U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))) {
                        if ((8U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))) {
                            __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg 
                                = (0xffff7fffU & __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg);
                        }
                    } else if ((8U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))) {
                        __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__count_reg 
                            = ((1ULL & __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__count_reg) 
                               | ((QData)((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value)) 
                                  << 1U));
                    }
                }
            }
        }
    } else {
        __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__count_reg = 2ULL;
        __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg = 0x400000U;
        __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg = 0U;
        vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__epc_reg = 0U;
    }
    __Vtableidx1 = (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_ena) 
                     << 9U) | (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_ena) 
                                << 8U) | (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__data_count) 
                                           << 4U) | 
                                          (((IData)(vlSelf->mycpu_top__DOT__inst_data_ok2) 
                                            << 3U) 
                                           | (((IData)(vlSelf->mycpu_top__DOT__inst_data_ok1) 
                                               << 2U) 
                                              | (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__fifo_empty) 
                                                  << 1U) 
                                                 | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_inst_fifo__fifo_rst)))))));
    __Vdly__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__data_count 
        = Vmycpu_top__ConstPool__TABLE_3bc62433_0[__Vtableidx1];
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_flush)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_enM = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_enM 
            = ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_mem_sel) 
               | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_mem_sel));
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_flush)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_mem_sel = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_mem_sel 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_mem_sel;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_flush)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_mem_sel = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_mem_sel 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_mem_sel;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_flush)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_wdataM = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_wdataM 
            = (((- (IData)((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                  >> 0xeU)))) & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value) 
               | ((- (IData)((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                    >> 0xeU)))) & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_rt_value));
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_flush)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except_temp = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except_temp 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_flush)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except_temp = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except_temp 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except;
    }
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT____Vcellout__genblk1__BRA__1__KET____DOT__d_tag__doutb 
        = vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_tag__DOT__ram
        [vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_line_addr];
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT____Vcellout__genblk1__BRA__0__KET____DOT__d_tag__doutb 
        = vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_tag__DOT__ram
        [vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_line_addr];
    if (vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_inst_fifo__fifo_rst) {
        __Vdly__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_pointer = 0U;
    } else if (((0U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__data_count)) 
                | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_enable))) {
        __Vdly__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_pointer 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_pointer;
    } else if (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_ena) 
                & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_ena))) {
        __Vdly__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_pointer 
            = (0xfU & ((IData)(2U) + (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_pointer)));
    } else if (vlSelf->mycpu_top__DOT__u_datapath__DOT__D_ena) {
        __Vdly__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_pointer 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_pointer)));
    }
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellout__genblk1__BRA__1__KET____DOT__i_tag__doutb 
        = vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_tag__DOT__ram
        [vlSelf->mycpu_top__DOT__i_cache_inst__DOT__bram_line_addr];
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellout__genblk1__BRA__0__KET____DOT__i_tag__doutb 
        = vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_tag__DOT__ram
        [vlSelf->mycpu_top__DOT__i_cache_inst__DOT__bram_line_addr];
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_flush)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_addrM = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_addrM 
            = vlSelf->mycpu_top__DOT__mem_addrE_dp;
    }
    if (vlSelf->aresetn) {
        __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__random_reg 
            = ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__random_reg 
                == vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__wired_reg)
                ? 7U : (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__random_reg 
                        - (IData)(1U)));
        if ((1U & (~ ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                       >> 0xaU) & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))))) {
            if (((0U != vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except) 
                 & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
                if ((IData)((0U != (0x801cU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except)))) {
                    __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg 
                        = ((0x1fffU & __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg) 
                           | (0xffffe000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__badva_in));
                }
            } else if ((1U & (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                               >> 0xcU) & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall))))) {
                if ((1U & (~ ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                              >> 7U)))) {
                    if ((0x40U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))) {
                        if ((1U & (~ ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                                      >> 5U)))) {
                            if ((0x10U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))) {
                                if ((1U & (~ ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                                              >> 3U)))) {
                                    __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg 
                                        = ((0xffffff00U 
                                            & __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg) 
                                           | (0xffU 
                                              & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value));
                                    __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg 
                                        = ((0x1fffU 
                                            & __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg) 
                                           | (0xffffe000U 
                                              & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value));
                                }
                            }
                        }
                    } else if ((0x20U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))) {
                        if ((0x10U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))) {
                            if ((1U & (~ ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                                          >> 3U)))) {
                                __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__random_reg = 7U;
                            }
                        }
                    } else if ((0x10U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))) {
                        if ((8U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))) {
                            __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
                                = ((0xfc000000U & __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg) 
                                   | (0x3ffffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value));
                        } else {
                            __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg 
                                = ((0xfc000000U & __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg) 
                                   | (0x3ffffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value));
                        }
                    }
                }
            } else if ((1U & (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                               >> 9U) & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall))))) {
                __Vtemp133[0U] = (((IData)((((QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
                                                                 >> 1U)))) 
                                             << 0x3fU) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg 
                                                                    >> 2U)))) 
                                                << 0x3eU) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
                                                                       >> 2U)))) 
                                                   << 0x3dU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg 
                                                                          >> 3U)))) 
                                                      << 0x3cU) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
                                                                             >> 3U)))) 
                                                         << 0x3bU) 
                                                        | (((QData)((IData)(
                                                                            (0xfffffU 
                                                                             & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg 
                                                                                >> 6U)))) 
                                                            << 0x27U) 
                                                           | (((QData)((IData)(
                                                                               (0xfffffU 
                                                                                & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
                                                                                >> 6U)))) 
                                                               << 0x13U) 
                                                              | (QData)((IData)(
                                                                                (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg 
                                                                                >> 0xdU))))))))))) 
                                   << 8U) | (0xffU 
                                             & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg));
                __Vtemp133[1U] = (((IData)((((QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
                                                                 >> 1U)))) 
                                             << 0x3fU) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg 
                                                                    >> 2U)))) 
                                                << 0x3eU) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
                                                                       >> 2U)))) 
                                                   << 0x3dU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg 
                                                                          >> 3U)))) 
                                                      << 0x3cU) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
                                                                             >> 3U)))) 
                                                         << 0x3bU) 
                                                        | (((QData)((IData)(
                                                                            (0xfffffU 
                                                                             & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg 
                                                                                >> 6U)))) 
                                                            << 0x27U) 
                                                           | (((QData)((IData)(
                                                                               (0xfffffU 
                                                                                & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
                                                                                >> 6U)))) 
                                                               << 0x13U) 
                                                              | (QData)((IData)(
                                                                                (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg 
                                                                                >> 0xdU))))))))))) 
                                   >> 0x18U) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           (1U 
                                                                            & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
                                                                               >> 1U)))) 
                                                           << 0x3fU) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg 
                                                                                >> 2U)))) 
                                                              << 0x3eU) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
                                                                                >> 2U)))) 
                                                                 << 0x3dU) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg 
                                                                                >> 3U)))) 
                                                                    << 0x3cU) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
                                                                                >> 3U)))) 
                                                                       << 0x3bU) 
                                                                      | (((QData)((IData)(
                                                                                (0xfffffU 
                                                                                & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg 
                                                                                >> 6U)))) 
                                                                          << 0x27U) 
                                                                         | (((QData)((IData)(
                                                                                (0xfffffU 
                                                                                & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
                                                                                >> 6U)))) 
                                                                             << 0x13U) 
                                                                            | (QData)((IData)(
                                                                                (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg 
                                                                                >> 0xdU)))))))))) 
                                                         >> 0x20U)) 
                                                << 8U));
                __Vtemp133[2U] = ((IData)(((((QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
                                                                 >> 1U)))) 
                                             << 0x3fU) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg 
                                                                    >> 2U)))) 
                                                << 0x3eU) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
                                                                       >> 2U)))) 
                                                   << 0x3dU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg 
                                                                          >> 3U)))) 
                                                      << 0x3cU) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
                                                                             >> 3U)))) 
                                                         << 0x3bU) 
                                                        | (((QData)((IData)(
                                                                            (0xfffffU 
                                                                             & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg 
                                                                                >> 6U)))) 
                                                            << 0x27U) 
                                                           | (((QData)((IData)(
                                                                               (0xfffffU 
                                                                                & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
                                                                                >> 6U)))) 
                                                               << 0x13U) 
                                                              | (QData)((IData)(
                                                                                (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg 
                                                                                >> 0xdU)))))))))) 
                                           >> 0x20U)) 
                                  >> 0x18U);
                __Vdlyvval__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb__v0[0U] 
                    = __Vtemp133[0U];
                __Vdlyvval__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb__v0[1U] 
                    = __Vtemp133[1U];
                __Vdlyvval__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb__v0[2U] 
                    = ((0x200U & ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg 
                                   & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg) 
                                  << 9U)) | ((0x100U 
                                              & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg 
                                                 << 7U)) 
                                             | __Vtemp133[2U]));
                __Vdlyvset__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb__v0 = 1U;
                __Vdlyvdim0__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb__v0 
                    = (7U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__index_reg);
            } else if ((1U & (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                               >> 8U) & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall))))) {
                __Vtemp136[0U] = (((IData)((((QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
                                                                 >> 1U)))) 
                                             << 0x3fU) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg 
                                                                    >> 2U)))) 
                                                << 0x3eU) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
                                                                       >> 2U)))) 
                                                   << 0x3dU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg 
                                                                          >> 3U)))) 
                                                      << 0x3cU) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
                                                                             >> 3U)))) 
                                                         << 0x3bU) 
                                                        | (((QData)((IData)(
                                                                            (0xfffffU 
                                                                             & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg 
                                                                                >> 6U)))) 
                                                            << 0x27U) 
                                                           | (((QData)((IData)(
                                                                               (0xfffffU 
                                                                                & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
                                                                                >> 6U)))) 
                                                               << 0x13U) 
                                                              | (QData)((IData)(
                                                                                (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg 
                                                                                >> 0xdU))))))))))) 
                                   << 8U) | (0xffU 
                                             & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg));
                __Vtemp136[1U] = (((IData)((((QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
                                                                 >> 1U)))) 
                                             << 0x3fU) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg 
                                                                    >> 2U)))) 
                                                << 0x3eU) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
                                                                       >> 2U)))) 
                                                   << 0x3dU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg 
                                                                          >> 3U)))) 
                                                      << 0x3cU) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
                                                                             >> 3U)))) 
                                                         << 0x3bU) 
                                                        | (((QData)((IData)(
                                                                            (0xfffffU 
                                                                             & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg 
                                                                                >> 6U)))) 
                                                            << 0x27U) 
                                                           | (((QData)((IData)(
                                                                               (0xfffffU 
                                                                                & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
                                                                                >> 6U)))) 
                                                               << 0x13U) 
                                                              | (QData)((IData)(
                                                                                (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg 
                                                                                >> 0xdU))))))))))) 
                                   >> 0x18U) | ((IData)(
                                                        ((((QData)((IData)(
                                                                           (1U 
                                                                            & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
                                                                               >> 1U)))) 
                                                           << 0x3fU) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg 
                                                                                >> 2U)))) 
                                                              << 0x3eU) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
                                                                                >> 2U)))) 
                                                                 << 0x3dU) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg 
                                                                                >> 3U)))) 
                                                                    << 0x3cU) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
                                                                                >> 3U)))) 
                                                                       << 0x3bU) 
                                                                      | (((QData)((IData)(
                                                                                (0xfffffU 
                                                                                & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg 
                                                                                >> 6U)))) 
                                                                          << 0x27U) 
                                                                         | (((QData)((IData)(
                                                                                (0xfffffU 
                                                                                & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
                                                                                >> 6U)))) 
                                                                             << 0x13U) 
                                                                            | (QData)((IData)(
                                                                                (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg 
                                                                                >> 0xdU)))))))))) 
                                                         >> 0x20U)) 
                                                << 8U));
                __Vtemp136[2U] = ((IData)(((((QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
                                                                 >> 1U)))) 
                                             << 0x3fU) 
                                            | (((QData)((IData)(
                                                                (1U 
                                                                 & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg 
                                                                    >> 2U)))) 
                                                << 0x3eU) 
                                               | (((QData)((IData)(
                                                                   (1U 
                                                                    & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
                                                                       >> 2U)))) 
                                                   << 0x3dU) 
                                                  | (((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg 
                                                                          >> 3U)))) 
                                                      << 0x3cU) 
                                                     | (((QData)((IData)(
                                                                         (1U 
                                                                          & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
                                                                             >> 3U)))) 
                                                         << 0x3bU) 
                                                        | (((QData)((IData)(
                                                                            (0xfffffU 
                                                                             & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg 
                                                                                >> 6U)))) 
                                                            << 0x27U) 
                                                           | (((QData)((IData)(
                                                                               (0xfffffU 
                                                                                & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
                                                                                >> 6U)))) 
                                                               << 0x13U) 
                                                              | (QData)((IData)(
                                                                                (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg 
                                                                                >> 0xdU)))))))))) 
                                           >> 0x20U)) 
                                  >> 0x18U);
                __Vdlyvval__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb__v1[0U] 
                    = __Vtemp136[0U];
                __Vdlyvval__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb__v1[1U] 
                    = __Vtemp136[1U];
                __Vdlyvval__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb__v1[2U] 
                    = ((0x200U & ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg 
                                   & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg) 
                                  << 9U)) | ((0x100U 
                                              & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg 
                                                 << 7U)) 
                                             | __Vtemp136[2U]));
                __Vdlyvset__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb__v1 = 1U;
                __Vdlyvdim0__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb__v1 
                    = (7U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__random_reg);
            } else if ((1U & (~ (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                                  >> 0xbU) & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))))) {
                if ((1U & (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                            >> 0xaU) & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall))))) {
                    __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg 
                        = ((0xfffffffeU & __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg) 
                           | (1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                    [(7U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__index_reg)][2U] 
                                    >> 9U)));
                    __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg 
                        = ((0xfffffffdU & __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg) 
                           | (2U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                    [(7U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__index_reg)][2U] 
                                    >> 7U)));
                    __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg 
                        = ((0xfffffffbU & __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg) 
                           | (4U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                    [(7U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__index_reg)][2U] 
                                    >> 4U)));
                    __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg 
                        = (0x10U | ((0xffffffc7U & __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg) 
                                    | (8U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                             [(7U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__index_reg)][2U] 
                                             >> 1U))));
                    __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg 
                        = ((0xfc00003fU & __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg) 
                           | (0x3ffffc0U & ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                             [(7U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__index_reg)][2U] 
                                             << 0x17U) 
                                            | (0x7fffc0U 
                                               & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                  [
                                                  (7U 
                                                   & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__index_reg)][1U] 
                                                  >> 9U)))));
                    __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
                        = ((0xfffffffeU & __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg) 
                           | (1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                    [(7U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__index_reg)][2U] 
                                    >> 9U)));
                    __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
                        = ((0xfffffffdU & __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg) 
                           | (2U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                    [(7U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__index_reg)][2U] 
                                    >> 6U)));
                    __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
                        = ((0xfffffffbU & __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg) 
                           | (4U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                    [(7U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__index_reg)][2U] 
                                    >> 3U)));
                    __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
                        = (0x10U | ((0xffffffc7U & __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg) 
                                    | (8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                       [(7U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__index_reg)][2U])));
                    __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
                        = ((0xfc00003fU & __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg) 
                           | (0x3ffffc0U & ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                             [(7U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__index_reg)][1U] 
                                             << 0xbU) 
                                            | (0x7c0U 
                                               & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                  [
                                                  (7U 
                                                   & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__index_reg)][0U] 
                                                  >> 0x15U)))));
                    __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg 
                        = ((0x1fffU & __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg) 
                           | (0xffffe000U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                             [(7U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__index_reg)][0U] 
                                             << 5U)));
                    __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg 
                        = ((0xffffff00U & __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg) 
                           | (0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                              [(7U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__index_reg)][0U]));
                }
            }
        }
    } else {
        __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__random_reg = 7U;
        __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg = 0U;
        __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg = 0U;
        __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg = 0U;
        __Vdlyvset__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb__v2 = 1U;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_flush)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM 
            = (((- (IData)((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                  >> 0xeU)))) & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_op)) 
               | ((- (IData)((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                    >> 0xeU)))) & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_op)));
    }
    if (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__tag_wea
        [1U]) {
        __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_tag__DOT__ram__v0 
            = vlSelf->mycpu_top__DOT__d_cache_inst__DOT__tag_ram_wdata;
        __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_tag__DOT__ram__v0 = 1U;
        __Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_tag__DOT__ram__v0 
            = (0x3fU & ((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_replace_addr) 
                        >> 4U));
    }
    if (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__tag_wea
        [0U]) {
        __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_tag__DOT__ram__v0 
            = vlSelf->mycpu_top__DOT__d_cache_inst__DOT__tag_ram_wdata;
        __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_tag__DOT__ram__v0 = 1U;
        __Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_tag__DOT__ram__v0 
            = (0x3fU & ((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_replace_addr) 
                        >> 4U));
    }
    if (vlSelf->mycpu_top__DOT__i_cache_inst__DOT__tag_wea
        [1U]) {
        __Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_tag__DOT__ram__v0 
            = vlSelf->mycpu_top__DOT__i_cache_inst__DOT__tag_ram_wdata;
        __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_tag__DOT__ram__v0 = 1U;
        __Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_tag__DOT__ram__v0 
            = vlSelf->mycpu_top__DOT__i_cache_inst__DOT__replace_line_addr;
    }
    if (vlSelf->mycpu_top__DOT__i_cache_inst__DOT__tag_wea
        [0U]) {
        __Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_tag__DOT__ram__v0 
            = vlSelf->mycpu_top__DOT__i_cache_inst__DOT__tag_ram_wdata;
        __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_tag__DOT__ram__v0 = 1U;
        __Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_tag__DOT__ram__v0 
            = vlSelf->mycpu_top__DOT__i_cache_inst__DOT__replace_line_addr;
    }
    if (vlSelf->mycpu_top__DOT__inst_data_ok1) {
        __Vdlyvval__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines__v0[0U] 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__write_line1[0U];
        __Vdlyvval__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines__v0[1U] 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__write_line1[1U];
        __Vdlyvval__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines__v0[2U] 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__write_line1[2U];
        __Vdlyvset__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines__v0 = 1U;
        __Vdlyvdim0__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines__v0 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__write_pointer;
    }
    if (vlSelf->mycpu_top__DOT__inst_data_ok2) {
        __Vdlyvval__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines__v1[0U] 
            = (IData)((((QData)((IData)(((IData)(4U) 
                                         + vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg))) 
                        << 0x20U) | (QData)((IData)(vlSelf->mycpu_top__DOT__inst_rdata2))));
        __Vdlyvval__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines__v1[1U] 
            = (IData)(((((QData)((IData)(((IData)(4U) 
                                          + vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg))) 
                         << 0x20U) | (QData)((IData)(vlSelf->mycpu_top__DOT__inst_rdata2))) 
                       >> 0x20U));
        __Vdlyvval__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines__v1[2U] 
            = (((IData)(vlSelf->mycpu_top__DOT__inst_tlb_refill) 
                << 1U) | (IData)(vlSelf->mycpu_top__DOT__inst_tlb_invalid));
        __Vdlyvset__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines__v1 = 1U;
        __Vdlyvdim0__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines__v1 
            = (0xfU & ((IData)(1U) + (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__write_pointer)));
    }
    if (__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v0) {
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram[__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v0] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v0))) 
                & vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram
                [__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v0]) 
               | ((QData)((IData)(__Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v0)) 
                  << (IData)(__Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v0)));
    }
    if (__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v1) {
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram[__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v1] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v1))) 
                & vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram
                [__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v1]) 
               | ((QData)((IData)(__Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v1)) 
                  << (IData)(__Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v1)));
    }
    if (__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v2) {
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram[__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v2] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v2))) 
                & vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram
                [__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v2]) 
               | ((QData)((IData)(__Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v2)) 
                  << (IData)(__Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v2)));
    }
    if (__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v3) {
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram[__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v3] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v3))) 
                & vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram
                [__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v3]) 
               | ((QData)((IData)(__Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v3)) 
                  << (IData)(__Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v3)));
    }
    if (__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v4) {
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram[__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v4] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v4))) 
                & vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram
                [__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v4]) 
               | ((QData)((IData)(__Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v4)) 
                  << (IData)(__Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v4)));
    }
    if (__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v5) {
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram[__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v5] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v5))) 
                & vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram
                [__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v5]) 
               | ((QData)((IData)(__Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v5)) 
                  << (IData)(__Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v5)));
    }
    if (__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v6) {
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram[__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v6] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v6))) 
                & vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram
                [__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v6]) 
               | ((QData)((IData)(__Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v6)) 
                  << (IData)(__Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v6)));
    }
    if (__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v7) {
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram[__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v7] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v7))) 
                & vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram
                [__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v7]) 
               | ((QData)((IData)(__Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v7)) 
                  << (IData)(__Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram__v7)));
    }
    if (__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v0) {
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram[__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v0] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v0))) 
                & vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram
                [__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v0]) 
               | ((QData)((IData)(__Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v0)) 
                  << (IData)(__Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v0)));
    }
    if (__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v1) {
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram[__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v1] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v1))) 
                & vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram
                [__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v1]) 
               | ((QData)((IData)(__Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v1)) 
                  << (IData)(__Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v1)));
    }
    if (__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v2) {
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram[__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v2] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v2))) 
                & vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram
                [__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v2]) 
               | ((QData)((IData)(__Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v2)) 
                  << (IData)(__Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v2)));
    }
    if (__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v3) {
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram[__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v3] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v3))) 
                & vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram
                [__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v3]) 
               | ((QData)((IData)(__Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v3)) 
                  << (IData)(__Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v3)));
    }
    if (__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v4) {
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram[__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v4] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v4))) 
                & vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram
                [__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v4]) 
               | ((QData)((IData)(__Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v4)) 
                  << (IData)(__Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v4)));
    }
    if (__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v5) {
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram[__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v5] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v5))) 
                & vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram
                [__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v5]) 
               | ((QData)((IData)(__Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v5)) 
                  << (IData)(__Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v5)));
    }
    if (__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v6) {
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram[__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v6] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v6))) 
                & vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram
                [__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v6]) 
               | ((QData)((IData)(__Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v6)) 
                  << (IData)(__Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v6)));
    }
    if (__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v7) {
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram[__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v7] 
            = (((~ (0xffULL << (IData)(__Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v7))) 
                & vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram
                [__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v7]) 
               | ((QData)((IData)(__Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v7)) 
                  << (IData)(__Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram__v7)));
    }
    if (__Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v0) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram[__Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v0))) 
                & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram
                [__Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v0) 
                                   << (IData)(__Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v0))));
    }
    if (__Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v1) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram[__Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v1))) 
                & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram
                [__Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v1) 
                                   << (IData)(__Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v1))));
    }
    if (__Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v2) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram[__Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v2))) 
                & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram
                [__Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v2) 
                                   << (IData)(__Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v2))));
    }
    if (__Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v3) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram[__Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v3))) 
                & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram
                [__Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v3) 
                                   << (IData)(__Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram__v3))));
    }
    if (__Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v0) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram[__Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v0] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v0))) 
                & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram
                [__Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v0]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v0) 
                                   << (IData)(__Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v0))));
    }
    if (__Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v1) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram[__Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v1] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v1))) 
                & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram
                [__Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v1]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v1) 
                                   << (IData)(__Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v1))));
    }
    if (__Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v2) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram[__Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v2] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v2))) 
                & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram
                [__Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v2]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v2) 
                                   << (IData)(__Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v2))));
    }
    if (__Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v3) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram[__Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v3] 
            = (((~ ((IData)(0xffU) << (IData)(__Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v3))) 
                & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram
                [__Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v3]) 
               | (0xffffffffULL & ((IData)(__Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v3) 
                                   << (IData)(__Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram__v3))));
    }
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__last_wea[0U] 
        = __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__last_wea__v0;
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__last_wea[1U] 
        = __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__last_wea__v1;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__state 
        = __Vdly__mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__state;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[0U] 
        = __Vdly__mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[0U];
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[1U] 
        = __Vdly__mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[1U];
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[2U] 
        = __Vdly__mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[2U];
    if (__Vdlyvset__mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT__v0) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[__Vdlyvdim0__mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT__v0] 
            = __Vdlyvval__mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT__v0;
    }
    if (__Vdlyvset__mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__PHT__v0) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__PHT[__Vdlyvdim0__mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__PHT__v0] 
            = __Vdlyvval__mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__PHT__v0;
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg 
        = __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_pointer 
        = __Vdly__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_pointer;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__data_count 
        = __Vdly__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__data_count;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
        = __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg 
        = __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg;
    if (__Vdlyvset__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb__v0) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb[__Vdlyvdim0__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb__v0][0U] 
            = __Vdlyvval__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb__v0[0U];
        vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb[__Vdlyvdim0__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb__v0][1U] 
            = __Vdlyvval__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb__v0[1U];
        vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb[__Vdlyvdim0__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb__v0][2U] 
            = __Vdlyvval__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb__v0[2U];
    }
    if (__Vdlyvset__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb__v1) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb[__Vdlyvdim0__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb__v1][0U] 
            = __Vdlyvval__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb__v1[0U];
        vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb[__Vdlyvdim0__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb__v1][1U] 
            = __Vdlyvval__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb__v1[1U];
        vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb[__Vdlyvdim0__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb__v1][2U] 
            = __Vdlyvval__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb__v1[2U];
    }
    if (__Vdlyvset__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb__v2) {
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
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg 
        = __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg;
    if (__Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_tag__DOT__ram__v0) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_tag__DOT__ram[__Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_tag__DOT__ram__v0] 
            = __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_tag__DOT__ram__v0;
    }
    if (__Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_tag__DOT__ram__v0) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_tag__DOT__ram[__Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_tag__DOT__ram__v0] 
            = __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_tag__DOT__ram__v0;
    }
    if (__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_tag__DOT__ram__v0) {
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_tag__DOT__ram[__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_tag__DOT__ram__v0] 
            = __Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_tag__DOT__ram__v0;
    }
    if (__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_tag__DOT__ram__v0) {
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_tag__DOT__ram[__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_tag__DOT__ram__v0] 
            = __Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_tag__DOT__ram__v0;
    }
    if (__Vdlyvset__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines__v0) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines[__Vdlyvdim0__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines__v0][0U] 
            = __Vdlyvval__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines__v0[0U];
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines[__Vdlyvdim0__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines__v0][1U] 
            = __Vdlyvval__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines__v0[1U];
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines[__Vdlyvdim0__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines__v0][2U] 
            = __Vdlyvval__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines__v0[2U];
    }
    if (__Vdlyvset__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines__v1) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines[__Vdlyvdim0__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines__v1][0U] 
            = __Vdlyvval__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines__v1[0U];
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines[__Vdlyvdim0__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines__v1][1U] 
            = __Vdlyvval__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines__v1[1U];
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines[__Vdlyvdim0__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines__v1][2U] 
            = __Vdlyvval__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines__v1[2U];
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__write_pointer 
        = __Vdly__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__write_pointer;
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_data[1U] 
        = vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellout__genblk1__BRA__1__KET____DOT__i_data__doutb;
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_data[0U] 
        = vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellout__genblk1__BRA__0__KET____DOT__i_data__doutb;
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D2E_clear2)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_is_in_delayslot = 0U;
    } else if (vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_ena) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_is_in_delayslot 
            = ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_is_bj) 
               & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_ena));
    }
    vlSelf->debug_cp0_random = vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_debug_cp0_random;
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_flush)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_debug_cp0_random = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_debug_cp0_random 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__random_reg;
    }
    vlSelf->debug_cp0_count = vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_debug_cp0_count;
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_flush)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_debug_cp0_count = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_debug_cp0_count 
            = (IData)((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__count_reg 
                       >> 1U));
    }
    vlSelf->debug_cp0_cause = vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_debug_cp0_cause;
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_flush)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_debug_cp0_cause = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_debug_cp0_cause 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg;
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
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_flush)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_flush)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_pc = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_pc 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_pc;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D2E_clear1)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_is_in_delayslot = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_is_in_delayslot 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_is_in_delayslot;
    }
    vlSelf->debug_int = vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_debug_int;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__div_temp 
        = (0x1ffffffffULL & ((QData)((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend[1U])) 
                             - (QData)((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__divisor))));
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
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_flush)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_flush)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_pc = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_pc 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_pc;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D2E_clear1)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_is_branch = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_is_branch 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_is_branch;
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__mid_result 
        = ((((QData)((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__part_0)) 
             + ((QData)((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__part_1)) 
                << 0x10U)) + ((QData)((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__part_2)) 
                              << 0x10U)) + ((QData)((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__part_3)) 
                                            << 0x20U));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_mem_addr 
        = (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rs_value 
           + vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_imm_value);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_mem_addr 
        = (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_rs_value 
           + vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_imm_value);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_int_info 
        = ((0xffffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D_int_info) 
           | ((IData)((1U == (7U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg))) 
              << 0x10U));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__trap_base 
        = ((0x400000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg)
            ? 0xbfc00200U : vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__ebase_reg);
    if (vlSelf->aresetn) {
        if ((1U & (~ ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                       >> 0xaU) & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))))) {
            if ((1U & (~ ((0U != vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except) 
                          & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))))) {
                if ((1U & (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                            >> 0xcU) & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall))))) {
                    if ((1U & (~ ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                                  >> 7U)))) {
                        if ((0x40U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))) {
                            if ((1U & (~ ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                                          >> 5U)))) {
                                if ((0x10U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))) {
                                    if ((8U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))) {
                                        vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__compare_reg 
                                            = vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__compare_reg = 0U;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D2E_clear2)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_rt_value = 0U;
    } else if (vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_ena) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_rt_value 
            = (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_forward_top__alu_wen1) 
                & (~ (IData)((0U != (0x1fU & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_reg_waddr) 
                                              ^ ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                  << 0x10U) 
                                                 | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                    >> 0x10U))))))))
                ? vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_res
                : (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_forward_top__alu_wen2) 
                    & (~ (IData)((0U != (0x1fU & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_reg_waddr) 
                                                  ^ 
                                                  ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                    << 0x10U) 
                                                   | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                      >> 0x10U))))))))
                    ? vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_res
                    : (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_reg_wen) 
                        & (~ (IData)((0U != (0x1fU 
                                             & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_reg_waddr) 
                                                ^ (
                                                   (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                    << 0x10U) 
                                                   | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                      >> 0x10U))))))))
                        ? vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_reg_wdata
                        : (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_reg_wen) 
                            & (~ (IData)((0U != (0x1fU 
                                                 & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_reg_waddr) 
                                                    ^ 
                                                    ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                      << 0x10U) 
                                                     | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                        >> 0x10U))))))))
                            ? vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_reg_wdata
                            : ((0U != (0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                >> 0x10U)))
                                ? (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_regfile__wen2) 
                                    & (~ (IData)((0U 
                                                  != 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_reg_waddr) 
                                                      ^ 
                                                      ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                        << 0x10U) 
                                                       | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                          >> 0x10U))))))))
                                    ? vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_reg_wdata
                                    : (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_regfile__wen1) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_reg_waddr) 
                                                          ^ 
                                                          ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                            << 0x10U) 
                                                           | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                              >> 0x10U))))))))
                                        ? vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_reg_wdata
                                        : vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf
                                       [(0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                  >> 0x10U))]))
                                : 0U)))));
    }
    if (vlSelf->aresetn) {
        if ((((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_inst_fifo__fifo_rst) 
              & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_flush))) 
             & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__delay_sel_rst))) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_enable 
                = ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_bj) 
                   | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_bj));
        } else if (((~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_stall)) 
                    & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_ena))) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_enable = 0U;
        }
    } else {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_enable = 0U;
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__fifo_empty 
        = (0U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__data_count));
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_tag[1U] 
        = vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellout__genblk1__BRA__1__KET____DOT__i_tag__doutb;
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_tag[0U] 
        = vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellout__genblk1__BRA__0__KET____DOT__i_tag__doutb;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_find_vpn2[0U] 
        = (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg 
           >> 0xdU);
    if (vlSelf->aresetn) {
        if ((1U & (~ ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                       >> 0xaU) & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))))) {
            if ((1U & (~ ((0U != vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except) 
                          & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))))) {
                if ((1U & (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                            >> 0xcU) & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall))))) {
                    if ((1U & (~ ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                                  >> 7U)))) {
                        if ((1U & (~ ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                                      >> 6U)))) {
                            if ((0x20U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))) {
                                if ((0x10U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))) {
                                    if ((1U & (~ ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                                                  >> 3U)))) {
                                        vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__wired_reg 
                                            = (7U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value);
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__wired_reg = 0U;
    }
    if (vlSelf->aresetn) {
        if ((1U & (~ ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                       >> 0xaU) & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))))) {
            if ((1U & (~ ((0U != vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except) 
                          & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))))) {
                if ((1U & (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                            >> 0xcU) & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall))))) {
                    if ((1U & (~ ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                                  >> 7U)))) {
                        if ((1U & (~ ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                                      >> 6U)))) {
                            if ((1U & (~ ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                                          >> 5U)))) {
                                if ((1U & (~ ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                                              >> 4U)))) {
                                    if ((1U & (~ ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                                                  >> 3U)))) {
                                        vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__index_reg 
                                            = ((0xfffffff8U 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__index_reg) 
                                               | (7U 
                                                  & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value));
                                    }
                                }
                            }
                        }
                    }
                } else if ((1U & (~ (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                                      >> 9U) & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))))) {
                    if ((1U & (~ (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                                   >> 8U) & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))))) {
                        if ((1U & (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                                    >> 0xbU) & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall))))) {
                            if ((0U != vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
                                 [0U])) {
                                vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__index_reg 
                                    = ((0xfffffff8U 
                                        & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__index_reg) 
                                       | vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched_index
                                       [0U]);
                                vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__index_reg 
                                    = (0x7fffffffU 
                                       & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__index_reg);
                            } else {
                                vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__index_reg 
                                    = (0x80000000U 
                                       | vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__index_reg);
                            }
                        }
                    }
                }
            }
        }
    } else {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__index_reg = 0U;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D2E_clear2)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_op = 0U;
    } else if (vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_ena) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_op 
            = (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
               >> 0x1aU);
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D2E_clear1)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_op = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_op 
            = (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
               >> 0x1aU);
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D2E_clear2)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs = 0U;
    } else if (vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_ena) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs;
    }
    if (vlSelf->aresetn) {
        if (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_busy) {
            if ((1U & (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_ctrl))) {
                if (((IData)(vlSelf->mycpu_top__DOT__d_awvalid) 
                     & (IData)(vlSelf->awready))) {
                    __Vdly__mycpu_top__DOT__d_awvalid = 0U;
                }
                if (((IData)(vlSelf->mycpu_top__DOT__d_wvalid) 
                     & (IData)(vlSelf->wready))) {
                    __Vdly__mycpu_top__DOT__d_wvalid = 0U;
                    __Vdly__mycpu_top__DOT__d_wlast = 0U;
                }
                if (vlSelf->bvalid) {
                    __Vdly__mycpu_top__DOT__d_cache_inst__DOT__store_buffer_ctrl 
                        = (0x1eU & (IData)(__Vdly__mycpu_top__DOT__d_cache_inst__DOT__store_buffer_ctrl));
                }
            } else {
                __Vdly__mycpu_top__DOT__d_awvalid = 1U;
                __Vdly__mycpu_top__DOT__d_wvalid = 1U;
                vlSelf->mycpu_top__DOT__d_awaddr = 
                    ((vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer
                      [(3U & ((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_ctrl) 
                              >> 3U))][2U] << 0x1aU) 
                     | (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer
                        [(3U & ((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_ctrl) 
                                >> 3U))][1U] >> 6U));
                vlSelf->mycpu_top__DOT__d_awlen = 0U;
                __Vdly__mycpu_top__DOT__d_wlast = 1U;
                vlSelf->mycpu_top__DOT__d_awsize = 
                    (3U & (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer
                           [(3U & ((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_ctrl) 
                                   >> 3U))][1U] >> 4U));
                vlSelf->mycpu_top__DOT__d_wdata = vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer
                    [(3U & ((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_ctrl) 
                            >> 3U))][0U];
                vlSelf->mycpu_top__DOT__d_wstrb = (0xfU 
                                                   & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer
                                                   [
                                                   (3U 
                                                    & ((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_ctrl) 
                                                       >> 3U))][1U]);
                __Vdly__mycpu_top__DOT__d_cache_inst__DOT__store_buffer_ctrl 
                    = ((7U & (IData)(__Vdly__mycpu_top__DOT__d_cache_inst__DOT__store_buffer_ctrl)) 
                       | (0x18U & (((IData)(1U) + ((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_ctrl) 
                                                   >> 3U)) 
                                   << 3U)));
                __Vdly__mycpu_top__DOT__d_cache_inst__DOT__store_buffer_ctrl 
                    = (1U | (IData)(__Vdly__mycpu_top__DOT__d_cache_inst__DOT__store_buffer_ctrl));
            }
        }
        if ((0U == vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dcache_status)) {
            if (vlSelf->mycpu_top__DOT__data_en) {
                if (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__translation_ok) {
                    if (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__M_mem_uncached) {
                        if ((0U != (IData)(vlSelf->mycpu_top__DOT__data_wen))) {
                            if ((1U & ((~ (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_full)) 
                                       & (~ (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__current_mmio_write_saved))))) {
                                __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__store_buffer__v0[0U] 
                                    = (IData)((((QData)((IData)(vlSelf->mycpu_top__DOT__data_rlen)) 
                                                << 0x24U) 
                                               | (((QData)((IData)(vlSelf->mycpu_top__DOT__data_wen)) 
                                                   << 0x20U) 
                                                  | (QData)((IData)(vlSelf->mycpu_top__DOT__data_wdata)))));
                                __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__store_buffer__v0[1U] 
                                    = ((((2U == (IData)(vlSelf->mycpu_top__DOT__data_rlen))
                                          ? (0xfffffffcU 
                                             & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__M_mem_pa)
                                          : vlSelf->mycpu_top__DOT__d_cache_inst__DOT__M_mem_pa) 
                                        << 6U) | (IData)(
                                                         ((((QData)((IData)(vlSelf->mycpu_top__DOT__data_rlen)) 
                                                            << 0x24U) 
                                                           | (((QData)((IData)(vlSelf->mycpu_top__DOT__data_wen)) 
                                                               << 0x20U) 
                                                              | (QData)((IData)(vlSelf->mycpu_top__DOT__data_wdata)))) 
                                                          >> 0x20U)));
                                __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__store_buffer__v0[2U] 
                                    = (((2U == (IData)(vlSelf->mycpu_top__DOT__data_rlen))
                                         ? (0xfffffffcU 
                                            & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__M_mem_pa)
                                         : vlSelf->mycpu_top__DOT__d_cache_inst__DOT__M_mem_pa) 
                                       >> 0x1aU);
                                __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__store_buffer__v0 = 1U;
                                __Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__store_buffer__v0 
                                    = (3U & ((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_ctrl) 
                                             >> 1U));
                                vlSelf->mycpu_top__DOT__d_cache_inst__DOT__current_mmio_write_saved = 1U;
                                __Vdly__mycpu_top__DOT__d_cache_inst__DOT__store_buffer_ctrl 
                                    = ((0x19U & (IData)(__Vdly__mycpu_top__DOT__d_cache_inst__DOT__store_buffer_ctrl)) 
                                       | (6U & (((IData)(1U) 
                                                 + 
                                                 ((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_ctrl) 
                                                  >> 1U)) 
                                                << 1U)));
                            }
                            if ((1U & ((~ (IData)(vlSelf->mycpu_top__DOT__d_cache_stall)) 
                                       & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall))))) {
                                vlSelf->mycpu_top__DOT__d_cache_inst__DOT__current_mmio_write_saved = 0U;
                            }
                        } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_busy)))) {
                            vlSelf->mycpu_top__DOT__d_araddr 
                                = ((2U == (IData)(vlSelf->mycpu_top__DOT__data_rlen))
                                    ? (0xfffffffcU 
                                       & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__M_mem_pa)
                                    : vlSelf->mycpu_top__DOT__d_cache_inst__DOT__M_mem_pa);
                            vlSelf->mycpu_top__DOT__d_arlen = 0U;
                            vlSelf->mycpu_top__DOT__d_arsize 
                                = vlSelf->mycpu_top__DOT__data_rlen;
                            __Vdly__mycpu_top__DOT__d_arvalid = 1U;
                            __Vdly__mycpu_top__DOT__d_cache_inst__DOT__dcache_status = 2U;
                            __Vdly__mycpu_top__DOT__d_rready = 1U;
                        }
                    } else if ((0U != (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__tag_compare_valid))) {
                        if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__d_cache_stall)))) {
                            __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__meta__v0 
                                = (1U & (~ ((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__tag_compare_valid) 
                                            >> 1U)));
                            __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__meta__v0 = 1U;
                            __Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__meta__v0 = 0U;
                            __Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__meta__v0 
                                = (0x3fU & (vlSelf->mycpu_top__DOT__data_addr 
                                            >> 6U));
                            if (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall) {
                                vlSelf->mycpu_top__DOT__d_cache_inst__DOT__saved_rdata 
                                    = vlSelf->mycpu_top__DOT__d_cache_inst__DOT__cache_data_forward
                                    [(1U & ((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__tag_compare_valid) 
                                            >> 1U))];
                                __Vdly__mycpu_top__DOT__d_cache_inst__DOT__dcache_status = 5U;
                            }
                            if ((0U != (IData)(vlSelf->mycpu_top__DOT__data_wen))) {
                                vlSelf->mycpu_top__DOT__d_cache_inst__DOT____Vlvbound1 = 1U;
                                if ((4U >= ((IData)(1U) 
                                            + (1U & 
                                               ((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__tag_compare_valid) 
                                                >> 1U))))) {
                                    __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__meta__v1 
                                        = vlSelf->mycpu_top__DOT__d_cache_inst__DOT____Vlvbound1;
                                    __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__meta__v1 = 1U;
                                    __Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__meta__v1 
                                        = ((IData)(1U) 
                                           + (1U & 
                                              ((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__tag_compare_valid) 
                                               >> 1U)));
                                    __Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__meta__v1 
                                        = (0x3fU & 
                                           (vlSelf->mycpu_top__DOT__data_addr 
                                            >> 6U));
                                }
                            }
                        }
                    } else {
                        __Vdly__mycpu_top__DOT__d_cache_inst__DOT__dcache_status = 4U;
                        __Vdly__mycpu_top__DOT__d_cache_inst__DOT__axi_wcnt = 0U;
                        __Vdly__mycpu_top__DOT__d_cache_inst__DOT__bram_replace_addr 
                            = (0x3f0U & (vlSelf->mycpu_top__DOT__data_addr 
                                         >> 2U));
                        __Vdly__mycpu_top__DOT__d_cache_inst__DOT__bram_read_ready_addr 
                            = (0x3f0U & (vlSelf->mycpu_top__DOT__data_addr 
                                         >> 2U));
                        __Vdly__mycpu_top__DOT__d_cache_inst__DOT__bram_replace_write_addr 
                            = (0x3f0U & (vlSelf->mycpu_top__DOT__data_addr 
                                         >> 2U));
                        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_replace_cnt = 0U;
                        __Vdly__mycpu_top__DOT__d_cache_inst__DOT__bram_use_replace_addr = 1U;
                        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_data_valid = 0U;
                        __Vdly__mycpu_top__DOT__d_cache_inst__DOT__replace_writeback 
                            = ((4U >= ((IData)(1U) 
                                       + (1U & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__meta
                                          [(0x3fU & 
                                            (vlSelf->mycpu_top__DOT__data_addr 
                                             >> 6U))]))) 
                               & (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__meta
                                  [(0x3fU & (vlSelf->mycpu_top__DOT__data_addr 
                                             >> 6U))] 
                                  >> ((IData)(1U) + 
                                      (1U & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__meta
                                       [(0x3fU & (vlSelf->mycpu_top__DOT__data_addr 
                                                  >> 6U))]))));
                    }
                } else if (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__l1tlb_ok) {
                    __Vdly__mycpu_top__DOT__d_cache_inst__DOT__dcache_status = 5U;
                    vlSelf->mycpu_top__DOT__data_tlb_mod = 1U;
                } else {
                    __Vdly__mycpu_top__DOT__d_cache_inst__DOT__dcache_status = 1U;
                    vlSelf->mycpu_top__DOT__dtlb_vpn2 
                        = (vlSelf->mycpu_top__DOT__data_addr 
                           >> 0xdU);
                }
            } else if ((8U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs)) {
                if ((0U != (3U & (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__meta
                                  [(0x3fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_alu_res 
                                             >> 6U))] 
                                  >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_busy)))) {
                        __Vdly__mycpu_top__DOT__d_cache_inst__DOT__dcache_status = 3U;
                        __Vdly__mycpu_top__DOT__d_cache_inst__DOT__axi_wcnt = 0U;
                        __Vdly__mycpu_top__DOT__d_cache_inst__DOT__bram_replace_addr 
                            = (0x3f0U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_alu_res 
                                         >> 2U));
                        __Vdly__mycpu_top__DOT__d_cache_inst__DOT__bram_read_ready_addr 
                            = (0x3f0U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_alu_res 
                                         >> 2U));
                        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_replace_cnt = 0U;
                        __Vdly__mycpu_top__DOT__d_cache_inst__DOT__bram_use_replace_addr = 1U;
                        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_data_valid = 0U;
                    }
                } else {
                    if ((0U != (3U & (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__meta
                                      [(0x3fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_alu_res 
                                                 >> 6U))] 
                                      >> 3U)))) {
                        __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__meta__v2 = 1U;
                        __Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__meta__v2 = 3U;
                        __Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__meta__v2 
                            = (0x3fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_alu_res 
                                        >> 6U));
                    }
                    __Vdly__mycpu_top__DOT__d_cache_inst__DOT__dcache_status = 5U;
                }
            }
        } else if ((1U == vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dcache_status)) {
            if ((0U != vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
                 [2U])) {
                if ((1U & (((vlSelf->mycpu_top__DOT__data_addr 
                             >> 0xcU) & (vlSelf->mycpu_top__DOT__dtlb_entry[2U] 
                                         >> 7U)) | 
                           ((~ (vlSelf->mycpu_top__DOT__data_addr 
                                >> 0xcU)) & (vlSelf->mycpu_top__DOT__dtlb_entry[2U] 
                                             >> 8U))))) {
                    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dtlb 
                        = ((7ULL & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dtlb) 
                           | (((QData)((IData)((vlSelf->mycpu_top__DOT__data_addr 
                                                >> 0xcU))) 
                               << 0x17U) | ((QData)((IData)(
                                                            (0xfffffU 
                                                             & ((0x1000U 
                                                                 & vlSelf->mycpu_top__DOT__data_addr)
                                                                 ? 
                                                                ((vlSelf->mycpu_top__DOT__dtlb_entry[1U] 
                                                                  << 5U) 
                                                                 | (vlSelf->mycpu_top__DOT__dtlb_entry[0U] 
                                                                    >> 0x1bU))
                                                                 : 
                                                                ((vlSelf->mycpu_top__DOT__dtlb_entry[2U] 
                                                                  << 0x11U) 
                                                                 | (vlSelf->mycpu_top__DOT__dtlb_entry[1U] 
                                                                    >> 0xfU)))))) 
                                            << 3U)));
                    __Vdly__mycpu_top__DOT__d_cache_inst__DOT__dcache_status = 0U;
                    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dtlb 
                        = ((0x7fffffffffbULL & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dtlb) 
                           | ((QData)((IData)((1U & 
                                               ((0x1000U 
                                                 & vlSelf->mycpu_top__DOT__data_addr)
                                                 ? 
                                                (~ 
                                                 (vlSelf->mycpu_top__DOT__dtlb_entry[2U] 
                                                  >> 3U))
                                                 : 
                                                (~ 
                                                 (vlSelf->mycpu_top__DOT__dtlb_entry[2U] 
                                                  >> 4U)))))) 
                              << 2U));
                    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dtlb 
                        = ((0x7fffffffffcULL & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dtlb) 
                           | (IData)((IData)((1U | 
                                              (2U & 
                                               (((0x1000U 
                                                  & vlSelf->mycpu_top__DOT__data_addr)
                                                  ? 
                                                 (vlSelf->mycpu_top__DOT__dtlb_entry[2U] 
                                                  >> 5U)
                                                  : 
                                                 (vlSelf->mycpu_top__DOT__dtlb_entry[2U] 
                                                  >> 6U)) 
                                                << 1U))))));
                } else {
                    __Vdly__mycpu_top__DOT__d_cache_inst__DOT__dcache_status = 5U;
                    vlSelf->mycpu_top__DOT__data_tlb_invalid = 1U;
                }
            } else {
                __Vdly__mycpu_top__DOT__d_cache_inst__DOT__dcache_status = 5U;
                vlSelf->mycpu_top__DOT__data_tlb_refill = 1U;
            }
        } else if ((2U == vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dcache_status)) {
            if (((IData)(vlSelf->mycpu_top__DOT__d_arvalid) 
                 & (IData)(vlSelf->mycpu_top__DOT__d_arready))) {
                __Vdly__mycpu_top__DOT__d_arvalid = 0U;
            }
            if (vlSelf->mycpu_top__DOT__d_rvalid) {
                vlSelf->mycpu_top__DOT__d_cache_inst__DOT__saved_rdata 
                    = vlSelf->mycpu_top__DOT__d_rdata;
                __Vdly__mycpu_top__DOT__d_cache_inst__DOT__dcache_status = 5U;
            }
        } else if ((3U == vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dcache_status)) {
            if (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__fence_working) {
                if ((0xfU != (0xfU & (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_replace_addr)))) {
                    __Vdly__mycpu_top__DOT__d_cache_inst__DOT__bram_replace_addr 
                        = (0x3ffU & ((IData)(1U) + (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_replace_addr)));
                }
                __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer__v0 
                    = vlSelf->mycpu_top__DOT__d_cache_inst__DOT__cache_data
                    [vlSelf->mycpu_top__DOT__d_cache_inst__DOT__fence_way];
                __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer__v0 = 1U;
                __Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer__v0 
                    = (0xfU & (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_read_ready_addr));
                if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__aw_handshake)))) {
                    __Vdly__mycpu_top__DOT__d_awvalid = 1U;
                    __Vdly__mycpu_top__DOT__d_wvalid = 1U;
                    vlSelf->mycpu_top__DOT__d_awaddr 
                        = ((vlSelf->mycpu_top__DOT__d_cache_inst__DOT__cache_tag
                            [vlSelf->mycpu_top__DOT__d_cache_inst__DOT__fence_way] 
                            << 0xcU) | (0xfc0U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_alu_res));
                    vlSelf->mycpu_top__DOT__d_awlen = 0xfU;
                    vlSelf->mycpu_top__DOT__d_awsize = 2U;
                    vlSelf->mycpu_top__DOT__d_wdata 
                        = vlSelf->mycpu_top__DOT__d_cache_inst__DOT__cache_data
                        [vlSelf->mycpu_top__DOT__d_cache_inst__DOT__fence_way];
                    vlSelf->mycpu_top__DOT__d_wstrb = 0xfU;
                    __Vdly__mycpu_top__DOT__d_wlast = 0U;
                    __Vdly__mycpu_top__DOT__d_cache_inst__DOT__aw_handshake = 1U;
                }
                if (vlSelf->bvalid) {
                    vlSelf->mycpu_top__DOT__d_cache_inst__DOT____Vlvbound2 = 0U;
                    if ((4U >= ((IData)(1U) + (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__fence_way)))) {
                        __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__meta__v3 
                            = vlSelf->mycpu_top__DOT__d_cache_inst__DOT____Vlvbound2;
                        __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__meta__v3 = 1U;
                        __Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__meta__v3 
                            = ((IData)(1U) + (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__fence_way));
                        __Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__meta__v3 
                            = (0x3fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_alu_res 
                                        >> 6U));
                    }
                    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__fence_working = 0U;
                    __Vdly__mycpu_top__DOT__d_cache_inst__DOT__bram_use_replace_addr = 0U;
                    __Vdly__mycpu_top__DOT__d_cache_inst__DOT__dcache_status = 0U;
                }
                if (((IData)(vlSelf->mycpu_top__DOT__d_awvalid) 
                     & (IData)(vlSelf->awready))) {
                    __Vdly__mycpu_top__DOT__d_awvalid = 0U;
                }
                if (((IData)(vlSelf->mycpu_top__DOT__d_wvalid) 
                     & (IData)(vlSelf->wready))) {
                    if (vlSelf->mycpu_top__DOT__d_wlast) {
                        __Vdly__mycpu_top__DOT__d_wvalid = 0U;
                    } else {
                        vlSelf->mycpu_top__DOT__d_wdata 
                            = (((0xfU & ((IData)(1U) 
                                         + (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__axi_wcnt))) 
                                == (0xfU & (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_read_ready_addr)))
                                ? vlSelf->mycpu_top__DOT__d_cache_inst__DOT__cache_data
                               [vlSelf->mycpu_top__DOT__d_cache_inst__DOT__fence_way]
                                : vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer
                               [(0xfU & ((IData)(1U) 
                                         + (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__axi_wcnt)))]);
                        __Vdly__mycpu_top__DOT__d_cache_inst__DOT__axi_wcnt 
                            = (0xfU & ((IData)(1U) 
                                       + (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__axi_wcnt)));
                        if ((0xfU == ((IData)(1U) + (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__axi_wcnt)))) {
                            __Vdly__mycpu_top__DOT__d_wlast = 1U;
                        }
                    }
                }
                __Vdly__mycpu_top__DOT__d_cache_inst__DOT__bram_read_ready_addr 
                    = vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_replace_addr;
            } else {
                __Vdly__mycpu_top__DOT__d_cache_inst__DOT__bram_replace_addr 
                    = ((0x3f0U & (IData)(__Vdly__mycpu_top__DOT__d_cache_inst__DOT__bram_replace_addr)) 
                       | (0xfU & ((IData)(1U) + (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_replace_addr))));
                __Vdly__mycpu_top__DOT__d_cache_inst__DOT__aw_handshake = 0U;
                vlSelf->mycpu_top__DOT__d_cache_inst__DOT__fence_working = 1U;
            }
        } else if ((4U == vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dcache_status)) {
            if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_busy)))) {
                if (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__replace_working) {
                    if (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__replace_writeback) {
                        if ((0xfU != (0xfU & (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_replace_addr)))) {
                            __Vdly__mycpu_top__DOT__d_cache_inst__DOT__bram_replace_addr 
                                = (0x3ffU & ((IData)(1U) 
                                             + (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_replace_addr)));
                        }
                        __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer__v1 
                            = vlSelf->mycpu_top__DOT__d_cache_inst__DOT__cache_data
                            [(1U & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__meta
                              [(0x3fU & (vlSelf->mycpu_top__DOT__data_addr 
                                         >> 6U))])];
                        __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer__v1 = 1U;
                        __Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer__v1 
                            = (0xfU & (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_read_ready_addr));
                        if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__aw_handshake)))) {
                            __Vdly__mycpu_top__DOT__d_awvalid = 1U;
                            __Vdly__mycpu_top__DOT__d_wlast = 0U;
                            __Vdly__mycpu_top__DOT__d_wvalid = 1U;
                            vlSelf->mycpu_top__DOT__d_awaddr 
                                = ((vlSelf->mycpu_top__DOT__d_cache_inst__DOT__cache_tag
                                    [(1U & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__meta
                                      [(0x3fU & (vlSelf->mycpu_top__DOT__data_addr 
                                                 >> 6U))])] 
                                    << 0xcU) | (0xfc0U 
                                                & vlSelf->mycpu_top__DOT__data_addr));
                            vlSelf->mycpu_top__DOT__d_awlen = 0xfU;
                            vlSelf->mycpu_top__DOT__d_awsize = 2U;
                            vlSelf->mycpu_top__DOT__d_wstrb = 0xfU;
                            __Vdly__mycpu_top__DOT__d_cache_inst__DOT__aw_handshake = 1U;
                            vlSelf->mycpu_top__DOT__d_wdata 
                                = vlSelf->mycpu_top__DOT__d_cache_inst__DOT__cache_data
                                [(1U & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__meta
                                  [(0x3fU & (vlSelf->mycpu_top__DOT__data_addr 
                                             >> 6U))])];
                        }
                        if (((IData)(vlSelf->mycpu_top__DOT__d_awvalid) 
                             & (IData)(vlSelf->awready))) {
                            __Vdly__mycpu_top__DOT__d_awvalid = 0U;
                        }
                        if (((IData)(vlSelf->mycpu_top__DOT__d_wvalid) 
                             & (IData)(vlSelf->wready))) {
                            if (vlSelf->mycpu_top__DOT__d_wlast) {
                                __Vdly__mycpu_top__DOT__d_wvalid = 0U;
                            } else {
                                vlSelf->mycpu_top__DOT__d_wdata 
                                    = (((0xfU & ((IData)(1U) 
                                                 + (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__axi_wcnt))) 
                                        == (0xfU & (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_read_ready_addr)))
                                        ? vlSelf->mycpu_top__DOT__d_cache_inst__DOT__cache_data
                                       [(1U & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__meta
                                         [(0x3fU & 
                                           (vlSelf->mycpu_top__DOT__data_addr 
                                            >> 6U))])]
                                        : vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer
                                       [(0xfU & ((IData)(1U) 
                                                 + (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__axi_wcnt)))]);
                                __Vdly__mycpu_top__DOT__d_cache_inst__DOT__axi_wcnt 
                                    = (0xfU & ((IData)(1U) 
                                               + (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__axi_wcnt)));
                                if ((0xfU == ((IData)(1U) 
                                              + (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__axi_wcnt)))) {
                                    __Vdly__mycpu_top__DOT__d_wlast = 1U;
                                }
                            }
                        }
                        __Vdly__mycpu_top__DOT__d_cache_inst__DOT__bram_read_ready_addr 
                            = vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_replace_addr;
                        if (vlSelf->bvalid) {
                            vlSelf->mycpu_top__DOT__d_cache_inst__DOT____Vlvbound3 = 0U;
                            if ((4U >= ((IData)(1U) 
                                        + (1U & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__meta
                                           [(0x3fU 
                                             & (vlSelf->mycpu_top__DOT__data_addr 
                                                >> 6U))])))) {
                                __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__meta__v4 
                                    = vlSelf->mycpu_top__DOT__d_cache_inst__DOT____Vlvbound3;
                                __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__meta__v4 = 1U;
                                __Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__meta__v4 
                                    = ((IData)(1U) 
                                       + (1U & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__meta
                                          [(0x3fU & 
                                            (vlSelf->mycpu_top__DOT__data_addr 
                                             >> 6U))]));
                                __Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__meta__v4 
                                    = (0x3fU & (vlSelf->mycpu_top__DOT__data_addr 
                                                >> 6U));
                            }
                            __Vdly__mycpu_top__DOT__d_cache_inst__DOT__replace_writeback = 0U;
                        }
                    }
                    if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_use_replace_addr)))) {
                        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__replace_working = 0U;
                        __Vdly__mycpu_top__DOT__d_cache_inst__DOT__dcache_status = 0U;
                    }
                    if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__ar_handshake)))) {
                        vlSelf->mycpu_top__DOT__d_araddr 
                            = (0xffffffc0U & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__M_mem_pa);
                        vlSelf->mycpu_top__DOT__d_arlen = 0xfU;
                        vlSelf->mycpu_top__DOT__d_arsize = 2U;
                        __Vdly__mycpu_top__DOT__d_arvalid = 1U;
                        __Vdly__mycpu_top__DOT__d_rready = 1U;
                        __Vdly__mycpu_top__DOT__d_cache_inst__DOT__ar_handshake = 1U;
                        __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__bram_replace_wea__v0 = 1U;
                        __Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__bram_replace_wea__v0 
                            = (1U & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__meta
                               [(0x3fU & (vlSelf->mycpu_top__DOT__data_addr 
                                          >> 6U))]);
                        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__tag_ram_wdata 
                            = (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__M_mem_pa 
                               >> 0xcU);
                        __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__tag_wea__v0 = 1U;
                        __Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__tag_wea__v0 
                            = (1U & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__meta
                               [(0x3fU & (vlSelf->mycpu_top__DOT__data_addr 
                                          >> 6U))]);
                    }
                    if (((IData)(vlSelf->mycpu_top__DOT__d_arvalid) 
                         & (IData)(vlSelf->mycpu_top__DOT__d_arready))) {
                        __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__tag_wea__v1 = 1U;
                        __Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__tag_wea__v1 
                            = (1U & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__meta
                               [(0x3fU & (vlSelf->mycpu_top__DOT__data_addr 
                                          >> 6U))]);
                        __Vdly__mycpu_top__DOT__d_arvalid = 0U;
                    }
                    if (((IData)(vlSelf->mycpu_top__DOT__d_rvalid) 
                         & (IData)(vlSelf->mycpu_top__DOT__d_rready))) {
                        if (vlSelf->mycpu_top__DOT__d_rlast) {
                            __Vdly__mycpu_top__DOT__d_rready = 0U;
                            __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__bram_replace_wea__v1 = 1U;
                            __Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__bram_replace_wea__v1 
                                = (1U & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__meta
                                   [(0x3fU & (vlSelf->mycpu_top__DOT__data_addr 
                                              >> 6U))]);
                        } else {
                            __Vdly__mycpu_top__DOT__d_cache_inst__DOT__bram_replace_write_addr 
                                = (0x3ffU & ((IData)(1U) 
                                             + (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_replace_write_addr)));
                        }
                    }
                    if ((((~ (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__replace_writeback)) 
                          | (IData)(vlSelf->bvalid)) 
                         & ((((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__ar_handshake) 
                              & (IData)(vlSelf->mycpu_top__DOT__d_rvalid)) 
                             & (IData)(vlSelf->mycpu_top__DOT__d_rlast)) 
                            | ((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__ar_handshake) 
                               & (~ (IData)(vlSelf->mycpu_top__DOT__d_rready)))))) {
                        vlSelf->mycpu_top__DOT__d_cache_inst__DOT____Vlvbound4 = 1U;
                        if ((4U >= ((IData)(3U) + (1U 
                                                   & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__meta
                                                   [
                                                   (0x3fU 
                                                    & (vlSelf->mycpu_top__DOT__data_addr 
                                                       >> 6U))])))) {
                            vlSelf->__Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__meta__v5 
                                = vlSelf->mycpu_top__DOT__d_cache_inst__DOT____Vlvbound4;
                            vlSelf->__Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__meta__v5 = 1U;
                            vlSelf->__Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__meta__v5 
                                = ((IData)(3U) + (1U 
                                                  & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__meta
                                                  [
                                                  (0x3fU 
                                                   & (vlSelf->mycpu_top__DOT__data_addr 
                                                      >> 6U))]));
                            vlSelf->__Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__meta__v5 
                                = (0x3fU & (vlSelf->mycpu_top__DOT__data_addr 
                                            >> 6U));
                        }
                        __Vdly__mycpu_top__DOT__d_cache_inst__DOT__bram_use_replace_addr = 0U;
                    }
                } else {
                    __Vdly__mycpu_top__DOT__d_cache_inst__DOT__bram_replace_addr 
                        = ((0x3f0U & (IData)(__Vdly__mycpu_top__DOT__d_cache_inst__DOT__bram_replace_addr)) 
                           | (0xfU & ((IData)(1U) + (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_replace_addr))));
                    __Vdly__mycpu_top__DOT__d_cache_inst__DOT__ar_handshake = 0U;
                    __Vdly__mycpu_top__DOT__d_cache_inst__DOT__aw_handshake = 0U;
                    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__replace_working = 1U;
                }
            }
        } else if ((5U == vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dcache_status)) {
            if ((1U & ((~ (IData)(vlSelf->mycpu_top__DOT__d_cache_stall)) 
                       & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall))))) {
                __Vdly__mycpu_top__DOT__d_cache_inst__DOT__dcache_status = 0U;
                vlSelf->mycpu_top__DOT__data_tlb_invalid = 0U;
                vlSelf->mycpu_top__DOT__data_tlb_refill = 0U;
                vlSelf->mycpu_top__DOT__data_tlb_mod = 0U;
            }
        }
    } else {
        __Vdly__mycpu_top__DOT__d_arvalid = 0U;
        __Vdly__mycpu_top__DOT__d_awvalid = 0U;
        __Vdly__mycpu_top__DOT__d_wlast = 0U;
        __Vdly__mycpu_top__DOT__d_wvalid = 0U;
        vlSelf->__Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__meta__v6 = 1U;
        __Vdly__mycpu_top__DOT__d_cache_inst__DOT__store_buffer_ctrl = 0U;
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__current_mmio_write_saved = 0U;
        __Vdly__mycpu_top__DOT__d_cache_inst__DOT__axi_wcnt = 0U;
        __Vdly__mycpu_top__DOT__d_cache_inst__DOT__bram_replace_addr = 0U;
        __Vdly__mycpu_top__DOT__d_cache_inst__DOT__bram_read_ready_addr = 0U;
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_replace_cnt = 0U;
        __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer__v2 = 1U;
        __Vdly__mycpu_top__DOT__d_cache_inst__DOT__bram_use_replace_addr = 0U;
        __Vdly__mycpu_top__DOT__d_cache_inst__DOT__bram_replace_write_addr = 0U;
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_data_valid = 0U;
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__fence_working = 0U;
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__replace_working = 0U;
        __Vdly__mycpu_top__DOT__d_cache_inst__DOT__ar_handshake = 0U;
        __Vdly__mycpu_top__DOT__d_cache_inst__DOT__aw_handshake = 0U;
        __Vdly__mycpu_top__DOT__d_cache_inst__DOT__replace_writeback = 0U;
        __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__tag_wea__v2 = 1U;
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__tag_ram_wdata = 0U;
        vlSelf->mycpu_top__DOT__data_tlb_refill = 0U;
        vlSelf->mycpu_top__DOT__data_tlb_invalid = 0U;
        vlSelf->mycpu_top__DOT__data_tlb_mod = 0U;
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dtlb = 0ULL;
        vlSelf->mycpu_top__DOT__dtlb_vpn2 = 0U;
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__saved_rdata = 0U;
        vlSelf->mycpu_top__DOT__d_araddr = 0U;
        vlSelf->mycpu_top__DOT__d_arlen = 0U;
        vlSelf->mycpu_top__DOT__d_arsize = 0U;
        __Vdly__mycpu_top__DOT__d_rready = 0U;
        vlSelf->mycpu_top__DOT__d_awaddr = 0U;
        vlSelf->mycpu_top__DOT__d_awlen = 0U;
        vlSelf->mycpu_top__DOT__d_awsize = 0U;
        vlSelf->mycpu_top__DOT__d_wdata = 0U;
        vlSelf->mycpu_top__DOT__d_wstrb = 0U;
        __Vdly__mycpu_top__DOT__d_cache_inst__DOT__dcache_status = 0U;
        vlSelf->__Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__meta__v7 = 1U;
    }
    if ((4U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs)) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dtlb 
            = (0x7fffffffffeULL & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dtlb);
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__fifo_full 
        = ((7U == (7U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__data_count) 
                         >> 1U))) | ((0xfU & ((IData)(1U) 
                                              + (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__write_pointer))) 
                                     == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_pointer)));
    if (vlSelf->aresetn) {
        if ((IData)(((4U == (4U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)) 
                     & (0U == (1U & (IData)(vlSelf->mycpu_top__DOT__i_cache_stall)))))) {
            vlSelf->mycpu_top__DOT__i_cache_inst__DOT__itlb 
                = (0x3fffffffffeULL & vlSelf->mycpu_top__DOT__i_cache_inst__DOT__itlb);
        }
        if ((IData)(((0x10U == (0x10U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)) 
                     & (0U == (1U & (IData)(vlSelf->mycpu_top__DOT__i_cache_stall)))))) {
            vlSelf->__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__meta__v0 = 1U;
            vlSelf->__Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__meta__v0 = 1U;
            vlSelf->__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__meta__v0 
                = (0x3fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_res 
                            >> 6U));
        }
        if ((0U == vlSelf->mycpu_top__DOT__i_cache_inst__DOT__icache_status)) {
            if (vlSelf->mycpu_top__DOT__inst_en) {
                if (vlSelf->mycpu_top__DOT__i_cache_inst__DOT__translation_ok) {
                    if (vlSelf->mycpu_top__DOT__i_cache_inst__DOT__uncached) {
                        vlSelf->mycpu_top__DOT__i_araddr 
                            = vlSelf->mycpu_top__DOT__i_cache_inst__DOT__inst_pa;
                        vlSelf->mycpu_top__DOT__i_arlen = 0U;
                        vlSelf->mycpu_top__DOT__i_arsize = 2U;
                        vlSelf->__Vdly__mycpu_top__DOT__i_arvalid = 1U;
                        vlSelf->__Vdly__mycpu_top__DOT__i_cache_inst__DOT__icache_status = 2U;
                    } else if ((0U != (IData)(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__tag_compare_valid))) {
                        if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__i_cache_stall)))) {
                            vlSelf->__Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__meta__v1 
                                = (1U & (~ ((IData)(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__tag_compare_valid) 
                                            >> 1U)));
                            vlSelf->__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__meta__v1 = 1U;
                            vlSelf->__Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__meta__v1 = 0U;
                            vlSelf->__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__meta__v1 
                                = (0x3fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg 
                                            >> 6U));
                            if (vlSelf->mycpu_top__DOT__i_cache_stall) {
                                vlSelf->__Vdly__mycpu_top__DOT__i_cache_inst__DOT__icache_status = 4U;
                                vlSelf->mycpu_top__DOT__i_cache_inst__DOT__saved_inst1 
                                    = vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_inst1;
                                vlSelf->mycpu_top__DOT__i_cache_inst__DOT__saved_inst_ok0 
                                    = vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_hit_available;
                                vlSelf->mycpu_top__DOT__i_cache_inst__DOT__saved_inst_ok1 
                                    = vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_inst_ok1;
                            }
                        }
                    } else {
                        vlSelf->mycpu_top__DOT__i_araddr 
                            = (0xffffffc0U & vlSelf->mycpu_top__DOT__i_cache_inst__DOT__inst_pa);
                        vlSelf->mycpu_top__DOT__i_arlen = 0xfU;
                        vlSelf->mycpu_top__DOT__i_arsize = 2U;
                        vlSelf->__Vdly__mycpu_top__DOT__i_arvalid = 1U;
                        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__replace_line_addr 
                            = (0x3fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg 
                                        >> 6U));
                        vlSelf->__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__data_wea__v0 = 1U;
                        vlSelf->__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__data_wea__v0 
                            = (1U & vlSelf->mycpu_top__DOT__i_cache_inst__DOT__meta
                               [(0x3fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg 
                                          >> 6U))]);
                        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__tag_ram_wdata 
                            = vlSelf->mycpu_top__DOT__i_cache_inst__DOT__inst_tag;
                        vlSelf->__Vdly__mycpu_top__DOT__i_cache_inst__DOT__icache_status = 3U;
                        vlSelf->__Vdly__mycpu_top__DOT__i_cache_inst__DOT__axi_cnt = 0U;
                        vlSelf->__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__tag_wea__v0 = 1U;
                        vlSelf->__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__tag_wea__v0 
                            = (1U & vlSelf->mycpu_top__DOT__i_cache_inst__DOT__meta
                               [(0x3fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg 
                                          >> 6U))]);
                        vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vlvbound1 = 1U;
                        if ((2U >= ((IData)(1U) + (1U 
                                                   & vlSelf->mycpu_top__DOT__i_cache_inst__DOT__meta
                                                   [
                                                   (0x3fU 
                                                    & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg 
                                                       >> 6U))])))) {
                            vlSelf->__Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__meta__v2 
                                = vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vlvbound1;
                            vlSelf->__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__meta__v2 = 1U;
                            vlSelf->__Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__meta__v2 
                                = ((IData)(1U) + (1U 
                                                  & vlSelf->mycpu_top__DOT__i_cache_inst__DOT__meta
                                                  [
                                                  (0x3fU 
                                                   & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg 
                                                      >> 6U))]));
                            vlSelf->__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__meta__v2 
                                = (0x3fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg 
                                            >> 6U));
                        }
                    }
                } else {
                    vlSelf->__Vdly__mycpu_top__DOT__i_cache_inst__DOT__icache_status = 1U;
                    vlSelf->mycpu_top__DOT__itlb_vpn2 
                        = (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg 
                           >> 0xdU);
                }
            }
        } else if ((1U == vlSelf->mycpu_top__DOT__i_cache_inst__DOT__icache_status)) {
            if ((0U != vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
                 [1U])) {
                if ((1U & (((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg 
                             >> 0xcU) & (vlSelf->mycpu_top__DOT__itlb_entry[2U] 
                                         >> 7U)) | 
                           ((~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg 
                                >> 0xcU)) & (vlSelf->mycpu_top__DOT__itlb_entry[2U] 
                                             >> 8U))))) {
                    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__itlb 
                        = ((3ULL & vlSelf->mycpu_top__DOT__i_cache_inst__DOT__itlb) 
                           | (((QData)((IData)((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg 
                                                >> 0xcU))) 
                               << 0x16U) | ((QData)((IData)(
                                                            (0xfffffU 
                                                             & ((0x1000U 
                                                                 & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg)
                                                                 ? 
                                                                ((vlSelf->mycpu_top__DOT__itlb_entry[1U] 
                                                                  << 5U) 
                                                                 | (vlSelf->mycpu_top__DOT__itlb_entry[0U] 
                                                                    >> 0x1bU))
                                                                 : 
                                                                ((vlSelf->mycpu_top__DOT__itlb_entry[2U] 
                                                                  << 0x11U) 
                                                                 | (vlSelf->mycpu_top__DOT__itlb_entry[1U] 
                                                                    >> 0xfU)))))) 
                                            << 2U)));
                    vlSelf->__Vdly__mycpu_top__DOT__i_cache_inst__DOT__icache_status = 0U;
                    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__itlb 
                        = ((0x3fffffffffdULL & vlSelf->mycpu_top__DOT__i_cache_inst__DOT__itlb) 
                           | ((QData)((IData)((1U & 
                                               ((0x1000U 
                                                 & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg)
                                                 ? 
                                                (~ 
                                                 (vlSelf->mycpu_top__DOT__itlb_entry[2U] 
                                                  >> 3U))
                                                 : 
                                                (~ 
                                                 (vlSelf->mycpu_top__DOT__itlb_entry[2U] 
                                                  >> 4U)))))) 
                              << 1U));
                    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__itlb 
                        = (1ULL | vlSelf->mycpu_top__DOT__i_cache_inst__DOT__itlb);
                } else {
                    vlSelf->__Vdly__mycpu_top__DOT__i_cache_inst__DOT__icache_status = 4U;
                    vlSelf->mycpu_top__DOT__inst_tlb_invalid = 1U;
                    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__saved_inst0 = 0U;
                    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__saved_inst_ok0 = 1U;
                }
            } else {
                vlSelf->__Vdly__mycpu_top__DOT__i_cache_inst__DOT__icache_status = 4U;
                vlSelf->mycpu_top__DOT__inst_tlb_refill = 1U;
                vlSelf->mycpu_top__DOT__i_cache_inst__DOT__saved_inst0 = 0U;
                vlSelf->mycpu_top__DOT__i_cache_inst__DOT__saved_inst_ok0 = 1U;
            }
        } else if ((2U == vlSelf->mycpu_top__DOT__i_cache_inst__DOT__icache_status)) {
            if (vlSelf->mycpu_top__DOT__i_arvalid) {
                if (vlSelf->mycpu_top__DOT__i_arready) {
                    vlSelf->__Vdly__mycpu_top__DOT__i_arvalid = 0U;
                    vlSelf->__Vdly__mycpu_top__DOT__i_rready = 1U;
                }
            } else if (((IData)(vlSelf->mycpu_top__DOT__i_rvalid) 
                        & (IData)(vlSelf->mycpu_top__DOT__i_rready))) {
                vlSelf->mycpu_top__DOT__i_cache_inst__DOT__saved_inst0 
                    = vlSelf->mycpu_top__DOT__i_rdata;
                vlSelf->mycpu_top__DOT__i_cache_inst__DOT__saved_inst_ok0 = 1U;
                vlSelf->__Vdly__mycpu_top__DOT__i_rready = 0U;
                vlSelf->__Vdly__mycpu_top__DOT__i_cache_inst__DOT__icache_status = 4U;
            }
        } else if ((3U == vlSelf->mycpu_top__DOT__i_cache_inst__DOT__icache_status)) {
            if (vlSelf->mycpu_top__DOT__i_arvalid) {
                if (vlSelf->mycpu_top__DOT__i_arready) {
                    vlSelf->__Vdly__mycpu_top__DOT__i_arvalid = 0U;
                    vlSelf->__Vdly__mycpu_top__DOT__i_rready = 1U;
                }
            } else if (((IData)(vlSelf->mycpu_top__DOT__i_rvalid) 
                        & (IData)(vlSelf->mycpu_top__DOT__i_rready))) {
                if (((~ (IData)(vlSelf->rid)) & (IData)(vlSelf->rlast))) {
                    vlSelf->__Vdly__mycpu_top__DOT__i_rready = 0U;
                    vlSelf->__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__data_wea__v1 = 1U;
                    vlSelf->__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__data_wea__v1 
                        = (1U & vlSelf->mycpu_top__DOT__i_cache_inst__DOT__meta
                           [(0x3fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg 
                                      >> 6U))]);
                    vlSelf->__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__tag_wea__v1 
                        = (1U & vlSelf->mycpu_top__DOT__i_cache_inst__DOT__meta
                           [(0x3fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg 
                                      >> 6U))]);
                } else {
                    vlSelf->__Vdly__mycpu_top__DOT__i_cache_inst__DOT__axi_cnt 
                        = (0x1fU & ((IData)(1U) + (IData)(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__axi_cnt)));
                    vlSelf->__Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__data_wea__v2 
                        = (0xffU & (~ vlSelf->mycpu_top__DOT__i_cache_inst__DOT__data_wea
                                    [(1U & vlSelf->mycpu_top__DOT__i_cache_inst__DOT__meta
                                      [(0x3fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg 
                                                 >> 6U))])]));
                    vlSelf->__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__data_wea__v2 = 1U;
                    vlSelf->__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__data_wea__v2 
                        = (1U & vlSelf->mycpu_top__DOT__i_cache_inst__DOT__meta
                           [(0x3fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg 
                                      >> 6U))]);
                }
            } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__i_rready)))) {
                vlSelf->__Vdly__mycpu_top__DOT__i_cache_inst__DOT__icache_status = 0U;
            }
        } else if ((4U == vlSelf->mycpu_top__DOT__i_cache_inst__DOT__icache_status)) {
            if ((IData)((0U == (1U & (IData)(vlSelf->mycpu_top__DOT__i_cache_stall))))) {
                vlSelf->mycpu_top__DOT__inst_tlb_invalid = 0U;
                vlSelf->mycpu_top__DOT__inst_tlb_refill = 0U;
                vlSelf->__Vdly__mycpu_top__DOT__i_cache_inst__DOT__icache_status = 0U;
                vlSelf->mycpu_top__DOT__i_cache_inst__DOT__saved_inst_ok0 = 0U;
                vlSelf->mycpu_top__DOT__i_cache_inst__DOT__saved_inst_ok1 = 0U;
            }
        }
    } else {
        vlSelf->__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__meta__v3 = 1U;
        vlSelf->__Vdly__mycpu_top__DOT__i_cache_inst__DOT__icache_status = 0U;
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__itlb = 0ULL;
        vlSelf->__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__meta__v4 = 1U;
        vlSelf->mycpu_top__DOT__inst_tlb_refill = 0U;
        vlSelf->mycpu_top__DOT__inst_tlb_invalid = 0U;
        vlSelf->mycpu_top__DOT__itlb_vpn2 = 0U;
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__replace_line_addr = 0U;
        vlSelf->__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__data_wea__v3 = 1U;
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__tag_ram_wdata = 0U;
        vlSelf->mycpu_top__DOT__i_araddr = 0U;
        vlSelf->mycpu_top__DOT__i_arlen = 0U;
        vlSelf->mycpu_top__DOT__i_arsize = 0U;
        vlSelf->__Vdly__mycpu_top__DOT__i_arvalid = 0U;
        vlSelf->__Vdly__mycpu_top__DOT__i_rready = 0U;
        vlSelf->__Vdly__mycpu_top__DOT__i_cache_inst__DOT__axi_cnt = 0U;
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__saved_inst0 = 0U;
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__saved_inst1 = 0U;
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__saved_inst_ok0 = 0U;
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__saved_inst_ok1 = 0U;
        vlSelf->__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__meta__v5 = 1U;
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__random_reg 
        = __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__random_reg;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__count_reg 
        = __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__count_reg;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg 
        = __Vdly__mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_is_in_delayslot 
        = __Vdly__mycpu_top__DOT__u_datapath__DOT__D_master_is_in_delayslot;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_stall 
        = __Vdly__mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_stall;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info 
        = ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_cop0_info) 
           & (- (IData)((1U & (~ (IData)((0U != vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except_temp)))))));
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__axi_wcnt 
        = __Vdly__mycpu_top__DOT__d_cache_inst__DOT__axi_wcnt;
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_read_ready_addr 
        = __Vdly__mycpu_top__DOT__d_cache_inst__DOT__bram_read_ready_addr;
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__replace_writeback 
        = __Vdly__mycpu_top__DOT__d_cache_inst__DOT__replace_writeback;
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__aw_handshake 
        = __Vdly__mycpu_top__DOT__d_cache_inst__DOT__aw_handshake;
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__ar_handshake 
        = __Vdly__mycpu_top__DOT__d_cache_inst__DOT__ar_handshake;
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
    vlSelf->mycpu_top__DOT__d_awvalid = __Vdly__mycpu_top__DOT__d_awvalid;
    vlSelf->mycpu_top__DOT__d_wvalid = __Vdly__mycpu_top__DOT__d_wvalid;
    vlSelf->mycpu_top__DOT__d_wlast = __Vdly__mycpu_top__DOT__d_wlast;
    vlSelf->mycpu_top__DOT__d_rready = __Vdly__mycpu_top__DOT__d_rready;
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_replace_write_addr 
        = __Vdly__mycpu_top__DOT__d_cache_inst__DOT__bram_replace_write_addr;
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
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_replace_addr 
        = __Vdly__mycpu_top__DOT__d_cache_inst__DOT__bram_replace_addr;
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_use_replace_addr 
        = __Vdly__mycpu_top__DOT__d_cache_inst__DOT__bram_use_replace_addr;
    vlSelf->mycpu_top__DOT__d_arvalid = __Vdly__mycpu_top__DOT__d_arvalid;
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__cache_data[0U] 
        = vlSelf->mycpu_top__DOT__d_cache_inst__DOT____Vcellout__genblk1__BRA__0__KET____DOT__d_data__doutb;
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__cache_data[1U] 
        = vlSelf->mycpu_top__DOT__d_cache_inst__DOT____Vcellout__genblk1__BRA__1__KET____DOT__d_data__doutb;
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dcache_status 
        = __Vdly__mycpu_top__DOT__d_cache_inst__DOT__dcache_status;
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_ctrl 
        = __Vdly__mycpu_top__DOT__d_cache_inst__DOT__store_buffer_ctrl;
    if (__Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__store_buffer__v0) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer[__Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__store_buffer__v0][0U] 
            = __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__store_buffer__v0[0U];
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer[__Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__store_buffer__v0][1U] 
            = __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__store_buffer__v0[1U];
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer[__Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__store_buffer__v0][2U] 
            = __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__store_buffer__v0[2U];
    }
    if (vlSelf->__Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__meta__v6) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer[3U][0U] = 0U;
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer[3U][1U] = 0U;
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer[3U][2U] = 0U;
    }
    if (vlSelf->__Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__meta__v7) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer[2U][0U] = 0U;
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer[2U][1U] = 0U;
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer[2U][2U] = 0U;
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer[1U][0U] = 0U;
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer[1U][1U] = 0U;
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer[1U][2U] = 0U;
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer[0U][0U] = 0U;
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer[0U][1U] = 0U;
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer[0U][2U] = 0U;
    }
    if (__Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__tag_wea__v0) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__tag_wea[__Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__tag_wea__v0] = 1U;
    }
    if (__Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__tag_wea__v1) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__tag_wea[__Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__tag_wea__v1] = 0U;
    }
    if (__Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__tag_wea__v2) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__tag_wea[1U] = 0U;
    }
    if (vlSelf->__Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__meta__v7) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__tag_wea[0U] = 0U;
    }
    if (__Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer__v0) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[__Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer__v0] 
            = __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer__v0;
    }
    if (__Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer__v1) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[__Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer__v1] 
            = __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer__v1;
    }
    if (__Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer__v2) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[0xfU] = 0U;
    }
    if (vlSelf->__Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__meta__v7) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[0xeU] = 0U;
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[0xdU] = 0U;
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[0xcU] = 0U;
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[0xbU] = 0U;
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[0xaU] = 0U;
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[9U] = 0U;
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[8U] = 0U;
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[7U] = 0U;
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[6U] = 0U;
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[5U] = 0U;
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[4U] = 0U;
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[3U] = 0U;
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[2U] = 0U;
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[1U] = 0U;
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[0U] = 0U;
    }
    if (__Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__bram_replace_wea__v0) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_replace_wea[__Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__bram_replace_wea__v0] = 0xfU;
    }
    if (__Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__bram_replace_wea__v1) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_replace_wea[__Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__bram_replace_wea__v1] = 0U;
    }
    if (__Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__tag_wea__v2) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_replace_wea[1U] = 0U;
    }
    if (vlSelf->__Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__meta__v7) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_replace_wea[0U] = 0U;
    }
    if (__Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__meta__v0) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__meta[__Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__meta__v0] 
            = (((~ ((IData)(1U) << __Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__meta__v0)) 
                & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__meta
                [__Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__meta__v0]) 
               | (0x1fU & ((IData)(__Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__meta__v0) 
                           << __Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__meta__v0)));
    }
    if (__Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__meta__v1) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__meta[__Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__meta__v1] 
            = (((~ ((IData)(1U) << __Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__meta__v1)) 
                & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__meta
                [__Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__meta__v1]) 
               | (0x1fU & ((IData)(__Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__meta__v1) 
                           << __Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__meta__v1)));
    }
    if (__Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__meta__v2) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__meta[__Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__meta__v2] 
            = ((~ ((IData)(3U) << __Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__meta__v2)) 
               & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__meta
               [__Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__meta__v2]);
    }
    if (__Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__meta__v3) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__meta[__Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__meta__v3] 
            = (((~ ((IData)(1U) << __Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__meta__v3)) 
                & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__meta
                [__Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__meta__v3]) 
               | (0x1fU & ((IData)(__Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__meta__v3) 
                           << __Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__meta__v3)));
    }
    if (__Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__meta__v4) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__meta[__Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__meta__v4] 
            = (((~ ((IData)(1U) << __Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__meta__v4)) 
                & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__meta
                [__Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__meta__v4]) 
               | (0x1fU & ((IData)(__Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__meta__v4) 
                           << __Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__meta__v4)));
    }
}

VL_INLINE_OPT void Vmycpu_top___024root___sequent__TOP__4(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___sequent__TOP__4\n"); );
    // Variables
    IData/*31:0*/ __Vilp;
    // Body
    if (vlSelf->__Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__meta__v5) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__meta[vlSelf->__Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__meta__v5] 
            = (((~ ((IData)(1U) << vlSelf->__Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__meta__v5)) 
                & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__meta
                [vlSelf->__Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__meta__v5]) 
               | (0x1fU & ((IData)(vlSelf->__Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__meta__v5) 
                           << vlSelf->__Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__meta__v5)));
    }
    if (vlSelf->__Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__meta__v6) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__meta[0x3fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__meta__v7) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3eU)) {
            vlSelf->mycpu_top__DOT__d_cache_inst__DOT__meta[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
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
    vlSelf->mycpu_top__DOT__i_rready = vlSelf->__Vdly__mycpu_top__DOT__i_rready;
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__axi_cnt 
        = vlSelf->__Vdly__mycpu_top__DOT__i_cache_inst__DOT__axi_cnt;
    vlSelf->mycpu_top__DOT__i_arvalid = vlSelf->__Vdly__mycpu_top__DOT__i_arvalid;
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__icache_status 
        = vlSelf->__Vdly__mycpu_top__DOT__i_cache_inst__DOT__icache_status;
    if (vlSelf->__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__tag_wea__v0) {
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__tag_wea[vlSelf->__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__tag_wea__v0] = 1U;
    }
    if (vlSelf->__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__data_wea__v1) {
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__tag_wea[vlSelf->__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__tag_wea__v1] = 0U;
    }
    if (vlSelf->__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__data_wea__v3) {
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__tag_wea[1U] = 0U;
    }
    if (vlSelf->__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__meta__v5) {
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__tag_wea[0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__data_wea__v0) {
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__data_wea[vlSelf->__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__data_wea__v0] = 0xfU;
    }
    if (vlSelf->__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__data_wea__v1) {
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__data_wea[vlSelf->__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__data_wea__v1] = 0U;
    }
    if (vlSelf->__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__data_wea__v2) {
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__data_wea[vlSelf->__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__data_wea__v2] 
            = vlSelf->__Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__data_wea__v2;
    }
    if (vlSelf->__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__data_wea__v3) {
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__data_wea[1U] = 0U;
    }
    if (vlSelf->__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__meta__v5) {
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__data_wea[0U] = 0U;
    }
    if (vlSelf->__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__meta__v0) {
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__meta[vlSelf->__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__meta__v0] 
            = ((~ ((IData)(3U) << vlSelf->__Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__meta__v0)) 
               & vlSelf->mycpu_top__DOT__i_cache_inst__DOT__meta
               [vlSelf->__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__meta__v0]);
    }
    if (vlSelf->__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__meta__v1) {
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__meta[vlSelf->__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__meta__v1] 
            = (((~ ((IData)(1U) << vlSelf->__Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__meta__v1)) 
                & vlSelf->mycpu_top__DOT__i_cache_inst__DOT__meta
                [vlSelf->__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__meta__v1]) 
               | (7U & ((IData)(vlSelf->__Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__meta__v1) 
                        << vlSelf->__Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__meta__v1)));
    }
    if (vlSelf->__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__meta__v2) {
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__meta[vlSelf->__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__meta__v2] 
            = (((~ ((IData)(1U) << vlSelf->__Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__meta__v2)) 
                & vlSelf->mycpu_top__DOT__i_cache_inst__DOT__meta
                [vlSelf->__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__meta__v2]) 
               | (7U & ((IData)(vlSelf->__Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__meta__v2) 
                        << vlSelf->__Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__meta__v2)));
    }
    if (vlSelf->__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__meta__v3) {
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__meta[0x3fU] = 0U;
    }
    if (vlSelf->__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__meta__v4) {
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__meta[0x3eU] = 0U;
    }
    if (vlSelf->__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__meta__v5) {
        __Vilp = 0U;
        while ((__Vilp <= 0x3dU)) {
            vlSelf->mycpu_top__DOT__i_cache_inst__DOT__meta[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_int_info 
        = ((0x10000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__D_int_info) 
           | ((0xff00U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg) 
              | (0xffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg 
                          >> 8U))));
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
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D2E_clear2)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst = 0U;
    } else if (vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_ena) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U];
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D2E_clear2)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_pc = 0U;
    } else if (vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_ena) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_pc 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[1U];
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_next_pc8 
        = ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_is_in_delayslot) 
           | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_is_in_delayslot));
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
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D2E_clear1)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U];
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D2E_clear1)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_pc = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_pc 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[1U];
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
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D2E_clear1)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
            = (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_forward_top__alu_wen1) 
                & (~ (IData)((0U != (0x1fU & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_reg_waddr) 
                                              ^ ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                  << 0x10U) 
                                                 | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                    >> 0x10U))))))))
                ? vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_res
                : (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_forward_top__alu_wen2) 
                    & (~ (IData)((0U != (0x1fU & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_reg_waddr) 
                                                  ^ 
                                                  ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                    << 0x10U) 
                                                   | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                      >> 0x10U))))))))
                    ? vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_res
                    : (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_reg_wen) 
                        & (~ (IData)((0U != (0x1fU 
                                             & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_reg_waddr) 
                                                ^ (
                                                   (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                    << 0x10U) 
                                                   | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                      >> 0x10U))))))))
                        ? vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_reg_wdata
                        : (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_reg_wen) 
                            & (~ (IData)((0U != (0x1fU 
                                                 & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_reg_waddr) 
                                                    ^ 
                                                    ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                      << 0x10U) 
                                                     | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                        >> 0x10U))))))))
                            ? vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_reg_wdata
                            : ((0U != (0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                >> 0x10U)))
                                ? (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_regfile__wen2) 
                                    & (~ (IData)((0U 
                                                  != 
                                                  (0x1fU 
                                                   & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_reg_waddr) 
                                                      ^ 
                                                      ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                        << 0x10U) 
                                                       | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                          >> 0x10U))))))))
                                    ? vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_reg_wdata
                                    : (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_regfile__wen1) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x1fU 
                                                       & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_reg_waddr) 
                                                          ^ 
                                                          ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                            << 0x10U) 
                                                           | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                              >> 0x10U))))))))
                                        ? vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_reg_wdata
                                        : vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf
                                       [(0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                  >> 0x10U))]))
                                : 0U)))));
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_mem_sel 
        = (1U & (((vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                   >> 0xeU) & (~ (IData)((0U != vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except_temp)))) 
                 & (~ (IData)((0U != vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except_temp)))));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srca 
        = ((0x20000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)
            ? vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_rs_value
            : vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_shamt_value);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srcb 
        = ((0x10000U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)
            ? vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_rt_value
            : vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_imm_value);
    vlSelf->awvalid = vlSelf->mycpu_top__DOT__d_awvalid;
    vlSelf->wvalid = vlSelf->mycpu_top__DOT__d_wvalid;
    vlSelf->wlast = vlSelf->mycpu_top__DOT__d_wlast;
    vlSelf->awaddr = vlSelf->mycpu_top__DOT__d_awaddr;
    vlSelf->awlen = vlSelf->mycpu_top__DOT__d_awlen;
    vlSelf->awsize = vlSelf->mycpu_top__DOT__d_awsize;
    vlSelf->wdata = vlSelf->mycpu_top__DOT__d_wdata;
    vlSelf->wstrb = vlSelf->mycpu_top__DOT__d_wstrb;
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_find_vpn2[2U] 
        = vlSelf->mycpu_top__DOT__dtlb_vpn2;
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_flush)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_alu_res = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_alu_res 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_res;
    }
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_addr_choose 
        = ((0U != vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dcache_status) 
           & (5U != vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dcache_status));
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_busy 
        = (1U & (((3U & ((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_ctrl) 
                         >> 3U)) != (3U & ((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_ctrl) 
                                           >> 1U))) 
                 | (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_ctrl)));
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_full 
        = ((3U & ((IData)(1U) + ((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_ctrl) 
                                 >> 1U))) == (3U & 
                                              ((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_ctrl) 
                                               >> 3U)));
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_flush)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs;
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
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_flush)))) {
        vlSelf->mycpu_top__DOT__data_addr = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__data_addr = vlSelf->mycpu_top__DOT__mem_addrE_dp;
    }
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__i_data__addra 
        = (((IData)(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__replace_line_addr) 
            << 3U) | (7U & ((IData)(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__axi_cnt) 
                            >> 1U)));
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__i_data__addra 
        = (((IData)(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__replace_line_addr) 
            << 3U) | (7U & ((IData)(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__axi_cnt) 
                            >> 1U)));
    vlSelf->mycpu_top__DOT__u_arbitrater__DOT__ar_sel 
        = ((IData)(vlSelf->mycpu_top__DOT__u_arbitrater__DOT__ar_sel_lock)
            ? (IData)(vlSelf->mycpu_top__DOT__u_arbitrater__DOT__ar_sel_lock_val)
            : ((~ (IData)(vlSelf->mycpu_top__DOT__i_arvalid)) 
               & (IData)(vlSelf->mycpu_top__DOT__d_arvalid)));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_find_vpn2[1U] 
        = vlSelf->mycpu_top__DOT__itlb_vpn2;
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__bram_addr_choose 
        = ((0U != vlSelf->mycpu_top__DOT__i_cache_inst__DOT__icache_status) 
           & (4U != vlSelf->mycpu_top__DOT__i_cache_inst__DOT__icache_status));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg 
        = vlSelf->mycpu_top__DOT__pc_next_dp;
    if (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_enable) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] = 0U;
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[1U] = 0U;
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[2U] = 0U;
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
    }
    if (vlSelf->__Vdlyvset__mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf__v0) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[vlSelf->__Vdlyvdim0__mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf__v0] 
            = vlSelf->__Vdlyvval__mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf__v0;
    }
    if (vlSelf->__Vdlyvset__mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf__v1) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[vlSelf->__Vdlyvdim0__mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf__v1] 
            = vlSelf->__Vdlyvval__mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf__v1;
    }
    if (vlSelf->__Vdlyvset__mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf__v2) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[vlSelf->__Vdlyvdim0__mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf__v2] 
            = vlSelf->__Vdlyvval__mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf__v2;
    }
    if (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_enable) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_line[0U];
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[1U] 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_line[1U];
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[2U] 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_line[2U];
    } else {
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
    vlSelf->arid = vlSelf->mycpu_top__DOT__u_arbitrater__DOT__ar_sel;
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
    if (vlSelf->aresetn) {
        if (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_ena) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_reg_wdata 
                = vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_reg_wdata;
        }
    } else {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_reg_wdata = 0U;
    }
    if (vlSelf->aresetn) {
        if (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_ena) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_reg_wdata 
                = vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_reg_wdata;
        }
    } else {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_reg_wdata = 0U;
    }
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
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_flush)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_reg_wen = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_reg_wen 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_reg_wen;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_flush)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_reg_wen = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_reg_wen 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_reg_wen;
    }
    if (vlSelf->aresetn) {
        if (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_ena) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_reg_waddr 
                = vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_reg_waddr;
        }
    } else {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_reg_waddr = 0U;
    }
    if (vlSelf->aresetn) {
        if (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_ena) {
            vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_reg_waddr 
                = vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_reg_waddr;
        }
    } else {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_reg_waddr = 0U;
    }
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__fence_way 
        = (1U & (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__meta
                 [(0x3fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_alu_res 
                            >> 6U))] >> 2U));
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D2E_clear1)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs;
    }
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
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__l1tlb_ok 
        = (((0xfffffU & (IData)((vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dtlb 
                                 >> 0x17U))) == (vlSelf->mycpu_top__DOT__data_addr 
                                                 >> 0xcU)) 
           & (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dtlb));
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_write_addr 
        = (0x3ffU & ((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_use_replace_addr)
                      ? (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_replace_write_addr)
                      : (vlSelf->mycpu_top__DOT__data_addr 
                         >> 2U)));
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
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__M_mem_uncached 
        = (1U & ((2U == (vlSelf->mycpu_top__DOT__data_addr 
                         >> 0x1eU)) ? (vlSelf->mycpu_top__DOT__data_addr 
                                       >> 0x1dU) : (IData)(
                                                           (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dtlb 
                                                            >> 2U))));
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__M_mem_pa 
        = ((((2U == (vlSelf->mycpu_top__DOT__data_addr 
                     >> 0x1eU)) ? (0x1ffffU & (vlSelf->mycpu_top__DOT__data_addr 
                                               >> 0xcU))
              : (IData)((vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dtlb 
                         >> 3U))) << 0xcU) | (0xfffU 
                                              & vlSelf->mycpu_top__DOT__data_addr));
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
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__inst_tag 
        = (0xfffffU & ((2U == (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg 
                               >> 0x1eU)) ? (0x1ffffU 
                                             & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg 
                                                >> 0xcU))
                        : (IData)((vlSelf->mycpu_top__DOT__i_cache_inst__DOT__itlb 
                                   >> 2U))));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_pred_fail 
        = ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_pred_take) 
           ^ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_actual_take));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_is_bj 
        = (1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_is_branch) 
                 | ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_jump_judge__DOT__jr) 
                    | (~ (IData)((0U != (0x1fU & (1U 
                                                  ^ 
                                                  ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                    << 5U) 
                                                   | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                      >> 0x1bU))))))))));
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_reg_wen 
        = (1U & ((1U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_cmov_type))
                  ? (0U != vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_rt_value)
                  : ((2U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_cmov_type))
                      ? (~ (IData)((0U != vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_rt_value)))
                      : (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                         >> 0xfU))));
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
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_flush)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_reg_waddr = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_reg_waddr 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_reg_waddr;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_flush)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_reg_waddr = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_reg_waddr 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_reg_waddr;
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_mem_sel 
        = (1U & ((vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                  >> 0xeU) & (~ (IData)((0U != vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except_temp)))));
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
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_inst_ok1 
        = ((IData)(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_hit_available) 
           & (~ (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg 
                 >> 2U)));
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D2E_clear2)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_reg_waddr = 0U;
    } else if (vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_ena) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_reg_waddr 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_reg_waddr;
    }
    if ((1U & ((~ (IData)(vlSelf->aresetn)) | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D2E_clear1)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_reg_waddr = 0U;
    } else if ((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_reg_waddr 
            = vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_reg_waddr;
    }
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
}
