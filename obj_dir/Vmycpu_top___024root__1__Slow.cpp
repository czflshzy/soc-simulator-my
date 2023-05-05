// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "Vmycpu_top___024root.h"
#include "Vmycpu_top__Syms.h"

void Vmycpu_top___024root___initial__TOP__1(Vmycpu_top___024root* vlSelf) VL_ATTR_COLD;

void Vmycpu_top___024root___eval_initial(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___eval_initial\n"); );
    // Body
    Vmycpu_top___024root___initial__TOP__1(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vclklast__TOP__aclk = vlSelf->aclk;
}

void Vmycpu_top___024root___settle__TOP__2(Vmycpu_top___024root* vlSelf) VL_ATTR_COLD;

void Vmycpu_top___024root___eval_settle(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___eval_settle\n"); );
    // Body
    Vmycpu_top___024root___settle__TOP__2(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
}

void Vmycpu_top___024root___final(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___final\n"); );
}

void Vmycpu_top___024root___ctor_var_reset(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->aclk = VL_RAND_RESET_I(1);
    vlSelf->aresetn = VL_RAND_RESET_I(1);
    vlSelf->ext_int = VL_RAND_RESET_I(6);
    vlSelf->arid = VL_RAND_RESET_I(4);
    vlSelf->araddr = VL_RAND_RESET_I(32);
    vlSelf->arlen = VL_RAND_RESET_I(8);
    vlSelf->arsize = VL_RAND_RESET_I(3);
    vlSelf->arburst = VL_RAND_RESET_I(2);
    vlSelf->arlock = VL_RAND_RESET_I(2);
    vlSelf->arcache = VL_RAND_RESET_I(4);
    vlSelf->arprot = VL_RAND_RESET_I(3);
    vlSelf->arvalid = VL_RAND_RESET_I(1);
    vlSelf->arready = VL_RAND_RESET_I(1);
    vlSelf->rid = VL_RAND_RESET_I(4);
    vlSelf->rdata = VL_RAND_RESET_I(32);
    vlSelf->rresp = VL_RAND_RESET_I(2);
    vlSelf->rlast = VL_RAND_RESET_I(1);
    vlSelf->rvalid = VL_RAND_RESET_I(1);
    vlSelf->rready = VL_RAND_RESET_I(1);
    vlSelf->awid = VL_RAND_RESET_I(4);
    vlSelf->awaddr = VL_RAND_RESET_I(32);
    vlSelf->awlen = VL_RAND_RESET_I(8);
    vlSelf->awsize = VL_RAND_RESET_I(3);
    vlSelf->awburst = VL_RAND_RESET_I(2);
    vlSelf->awlock = VL_RAND_RESET_I(2);
    vlSelf->awcache = VL_RAND_RESET_I(4);
    vlSelf->awprot = VL_RAND_RESET_I(3);
    vlSelf->awvalid = VL_RAND_RESET_I(1);
    vlSelf->awready = VL_RAND_RESET_I(1);
    vlSelf->wid = VL_RAND_RESET_I(4);
    vlSelf->wdata = VL_RAND_RESET_I(32);
    vlSelf->wstrb = VL_RAND_RESET_I(4);
    vlSelf->wlast = VL_RAND_RESET_I(1);
    vlSelf->wvalid = VL_RAND_RESET_I(1);
    vlSelf->wready = VL_RAND_RESET_I(1);
    vlSelf->bid = VL_RAND_RESET_I(4);
    vlSelf->bresp = VL_RAND_RESET_I(2);
    vlSelf->bvalid = VL_RAND_RESET_I(1);
    vlSelf->bready = VL_RAND_RESET_I(1);
    vlSelf->debug_wb_pc = VL_RAND_RESET_I(32);
    vlSelf->debug_wb_rf_wen = VL_RAND_RESET_I(4);
    vlSelf->debug_wb_rf_wnum = VL_RAND_RESET_I(5);
    vlSelf->debug_wb_rf_wdata = VL_RAND_RESET_I(32);
    vlSelf->debug_cp0_count = VL_RAND_RESET_I(32);
    vlSelf->debug_cp0_random = VL_RAND_RESET_I(32);
    vlSelf->debug_cp0_cause = VL_RAND_RESET_I(32);
    vlSelf->debug_int = VL_RAND_RESET_I(1);
    vlSelf->debug_commit = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__no_cache_d = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__no_cache_i = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__inst_en = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__pcF = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__pc_next = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__pc_next_dp = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__i_cache_stall = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__inst_data_ok1 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__inst_data_ok2 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__inst_tlb_refill = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__inst_tlb_invalid = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__inst_rdata1 = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__inst_rdata2 = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__itlb_vpn2 = VL_RAND_RESET_I(19);
    VL_RAND_RESET_W(74, vlSelf->mycpu_top__DOT__itlb_entry);
    vlSelf->mycpu_top__DOT__data_en = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__data_addr = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__data_rdata = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__data_rlen = VL_RAND_RESET_I(2);
    vlSelf->mycpu_top__DOT__data_wen = VL_RAND_RESET_I(4);
    vlSelf->mycpu_top__DOT__data_wdata = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__d_cache_stall = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__mem_addrE_dp = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__i_araddr = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__i_arlen = VL_RAND_RESET_I(8);
    vlSelf->mycpu_top__DOT__i_arsize = VL_RAND_RESET_I(3);
    vlSelf->mycpu_top__DOT__i_arvalid = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__i_arready = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__i_rdata = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__i_rvalid = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__i_rready = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__d_araddr = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__d_arlen = VL_RAND_RESET_I(8);
    vlSelf->mycpu_top__DOT__d_arsize = VL_RAND_RESET_I(3);
    vlSelf->mycpu_top__DOT__d_arvalid = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__d_arready = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__d_rdata = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__d_rlast = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__d_rvalid = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__d_rready = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__d_awaddr = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__d_awlen = VL_RAND_RESET_I(8);
    vlSelf->mycpu_top__DOT__d_awsize = VL_RAND_RESET_I(3);
    vlSelf->mycpu_top__DOT__d_awvalid = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__d_wdata = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__d_wstrb = VL_RAND_RESET_I(4);
    vlSelf->mycpu_top__DOT__d_wlast = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__d_wvalid = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__dtlb_vpn2 = VL_RAND_RESET_I(19);
    VL_RAND_RESET_W(74, vlSelf->mycpu_top__DOT__dtlb_entry);
    vlSelf->mycpu_top__DOT__data_tlb_refill = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__data_tlb_invalid = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__data_tlb_mod = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__no_cache_E = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_debug_cp0_count = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_debug_cp0_random = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_debug_cp0_cause = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_debug_cp0_count = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_debug_cp0_random = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_debug_cp0_cause = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_debug_int = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__fifo_empty = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__fifo_full = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_ena = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_ena = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__W_ena = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_flush = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__M_flush = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs = VL_RAND_RESET_I(27);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs = VL_RAND_RESET_I(27);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs = VL_RAND_RESET_I(27);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs = VL_RAND_RESET_I(27);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs = VL_RAND_RESET_I(27);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__M2cs = VL_RAND_RESET_I(27);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_reg_wen = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_reg_wen = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_reg_wen = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_reg_wen = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_reg_wen = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_reg_wen = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cp0_rdata = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__M_cp0_jump = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__M_cp0_jump_pc = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_cp0_useable = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_int_info = VL_RAND_RESET_I(17);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__delay_sel_rst = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_is_bj = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_bj = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_is_branch = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_pred_take = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_jump_conflict = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_branch_target = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_is_in_delayslot = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_break_inst = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_break_inst = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_syscall_inst = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_syscall_inst = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_eret_inst = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_eret_inst = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_id_cpu = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_id_cpu = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_cop0_info = VL_RAND_RESET_I(13);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_cop0_info = VL_RAND_RESET_I(13);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_branch_type = VL_RAND_RESET_I(4);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_branch_type = VL_RAND_RESET_I(4);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_trap_type = VL_RAND_RESET_I(4);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_trap_type = VL_RAND_RESET_I(4);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_cmov_type = VL_RAND_RESET_I(2);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_cmov_type = VL_RAND_RESET_I(2);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_rs_value_tmp = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_branch_type = VL_RAND_RESET_I(4);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_trap_type = VL_RAND_RESET_I(4);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_is_branch = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_bj = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_next_pc8 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_pred_take = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_actual_take = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_pred_fail = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_jump_conflict_tmp = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_is_link_pc8 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_branch_target = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_pc_plus4 = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_stall = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_stall = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rs = VL_RAND_RESET_I(5);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_rs = VL_RAND_RESET_I(5);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt = VL_RAND_RESET_I(5);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_rt = VL_RAND_RESET_I(5);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_shamt_value = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_shamt_value = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rs_value = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_rs_value = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_rt_value = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_imm_value = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_imm_value = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_pc = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_pc = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_op = VL_RAND_RESET_I(6);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_op = VL_RAND_RESET_I(6);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_is_in_delayslot = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_is_in_delayslot = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except_temp = VL_RAND_RESET_I(17);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except_temp = VL_RAND_RESET_I(17);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except = VL_RAND_RESET_I(17);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except = VL_RAND_RESET_I(17);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_cop0_info = VL_RAND_RESET_I(13);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_cop0_info = VL_RAND_RESET_I(13);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info = VL_RAND_RESET_I(13);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_cmov_type = VL_RAND_RESET_I(2);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_cmov_type = VL_RAND_RESET_I(2);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_mem_addr = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_mem_addr = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srca = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srca = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srcb = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srcb = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_res_tmp = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_res = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_res = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_out64 = VL_RAND_RESET_Q(64);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_out64 = VL_RAND_RESET_Q(64);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_overflow = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_overflow = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_mem_sel = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_mem_sel = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_flush_all = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_pc = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_pc = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_alu_res = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_alu_res = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except_temp = VL_RAND_RESET_I(17);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except_temp = VL_RAND_RESET_I(17);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except = VL_RAND_RESET_I(17);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except = VL_RAND_RESET_I(17);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_is_in_delayslot = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_is_in_delayslot = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_rdataM = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_enM = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_renM = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_wenM = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM = VL_RAND_RESET_I(6);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_addrM = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_wdataM = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_mem_sel = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_mem_sel = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_pc = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_pc = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_alu_res = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_alu_res = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_reg_waddr = VL_RAND_RESET_I(5);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_reg_wdata = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_reg_wdata = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_reg_wdata = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_reg_wdata = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_except = VL_RAND_RESET_I(17);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_except = VL_RAND_RESET_I(17);
    vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_inst_fifo__fifo_rst = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_regfile__wen2 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_regfile__wen1 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_forward_top__alu_wen2 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_forward_top__alu_wen1 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2E_clear1 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__D2E_clear2 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__master_asciiF = VL_RAND_RESET_Q(48);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__master_asciiD = VL_RAND_RESET_Q(48);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__master_asciiE = VL_RAND_RESET_Q(48);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__master_asciiM = VL_RAND_RESET_Q(48);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__master_asciiW = VL_RAND_RESET_Q(48);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__slave_asciiF = VL_RAND_RESET_Q(48);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__slave_asciiD = VL_RAND_RESET_Q(48);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__slave_asciiE = VL_RAND_RESET_Q(48);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__slave_asciiM = VL_RAND_RESET_Q(48);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__slave_asciiW = VL_RAND_RESET_Q(48);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        VL_RAND_RESET_W(66, vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines[__Vi0]);
    }
    VL_RAND_RESET_W(66, vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1);
    VL_RAND_RESET_W(66, vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2);
    VL_RAND_RESET_W(66, vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__write_line1);
    VL_RAND_RESET_W(66, vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_line);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_stall = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_enable = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__write_pointer = VL_RAND_RESET_I(4);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_pointer = VL_RAND_RESET_I(4);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__data_count = VL_RAND_RESET_I(4);
    VL_RAND_RESET_W(65, vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__slave_cnt);
    VL_RAND_RESET_W(65, vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__master_cnt);
    for (int __Vi0=0; __Vi0<32; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[__Vi0] = VL_RAND_RESET_I(6);
    }
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__PHT[__Vi0] = VL_RAND_RESET_I(2);
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_jump_judge__DOT__jr = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_issue_ctrl__DOT__D_slave_hilowrite = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_issue_ctrl__DOT__data_conflict = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__y1_tmp = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_a = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_b = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_a = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_b = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_sign1 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_start1 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_sign1 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_start1 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_sign2 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_start2 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_sign2 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_start2 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_sign = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_sign = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_start = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_ready = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_ready = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_result = VL_RAND_RESET_Q(64);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_result = VL_RAND_RESET_Q(64);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluA__DOT__temp_aluout_64 = VL_RAND_RESET_Q(64);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluA__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluB__DOT__temp_aluout_64 = VL_RAND_RESET_Q(64);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluB__DOT__i = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__cal_a = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__cal_b = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__part_0 = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__part_1 = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__part_2 = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__part_3 = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__mid_result = VL_RAND_RESET_Q(64);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__div_temp = VL_RAND_RESET_Q(33);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__state = VL_RAND_RESET_I(2);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__cnt = VL_RAND_RESET_I(6);
    VL_RAND_RESET_W(65, vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__divisor = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__sign1 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__sign2 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_hilo_reg__DOT__hilo_reg = VL_RAND_RESET_Q(64);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__master_except = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except = VL_RAND_RESET_I(17);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except_pc = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except_bd = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__badva_in = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__index_reg = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__random_reg = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__context_reg = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__wired_reg = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__badva_reg = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__count_reg = VL_RAND_RESET_Q(33);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__compare_reg = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__epc_reg = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__ebase_reg = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__taglo_reg = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__taghi_reg = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__errorepc_reg = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<8; ++__Vi0) {
        VL_RAND_RESET_W(74, vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb[__Vi0]);
    }
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__is_kernel_mode = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__trap_base = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_find_vpn2[__Vi0] = VL_RAND_RESET_I(19);
    }
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched_index[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__icache_status = 0;
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__meta[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__itlb = VL_RAND_RESET_Q(42);
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__uncached = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__inst_tag = VL_RAND_RESET_I(20);
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__inst_pa = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__translation_ok = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__replace_line_addr = VL_RAND_RESET_I(6);
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__bram_addr_choose = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__bram_word_addr = VL_RAND_RESET_I(9);
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__bram_line_addr = VL_RAND_RESET_I(6);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_data[__Vi0] = VL_RAND_RESET_Q(64);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_tag[__Vi0] = VL_RAND_RESET_I(20);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__data_wea[__Vi0] = VL_RAND_RESET_I(8);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__tag_wea[__Vi0] = VL_RAND_RESET_I(1);
    }
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__tag_ram_wdata = VL_RAND_RESET_I(20);
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__tag_compare_valid = VL_RAND_RESET_I(2);
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_hit_available = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_inst_ok1 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_inst1 = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__saved_inst0 = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__saved_inst1 = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__saved_inst_ok0 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__saved_inst_ok1 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__axi_cnt = VL_RAND_RESET_I(5);
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellout__genblk1__BRA__0__KET____DOT__i_data__doutb = VL_RAND_RESET_Q(64);
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__i_data__dina = VL_RAND_RESET_Q(64);
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__i_data__addra = VL_RAND_RESET_I(9);
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellout__genblk1__BRA__0__KET____DOT__i_tag__doutb = VL_RAND_RESET_I(20);
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellout__genblk1__BRA__1__KET____DOT__i_data__doutb = VL_RAND_RESET_Q(64);
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__i_data__dina = VL_RAND_RESET_Q(64);
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__i_data__addra = VL_RAND_RESET_I(9);
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellout__genblk1__BRA__1__KET____DOT__i_tag__doutb = VL_RAND_RESET_I(20);
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vlvbound1 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<512; ++__Vi0) {
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__j = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_tag__DOT__ram[__Vi0] = VL_RAND_RESET_I(20);
    }
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_tag__DOT__j = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<512; ++__Vi0) {
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram[__Vi0] = VL_RAND_RESET_Q(64);
    }
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__j = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_tag__DOT__ram[__Vi0] = VL_RAND_RESET_I(20);
    }
    vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_tag__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dtlb = VL_RAND_RESET_Q(43);
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__M_mem_uncached = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__M_mem_pa = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__l1tlb_ok = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__translation_ok = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dcache_status = 0;
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__meta[__Vi0] = VL_RAND_RESET_I(5);
    }
    for (int __Vi0=0; __Vi0<4; ++__Vi0) {
        VL_RAND_RESET_W(70, vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer[__Vi0]);
    }
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_ctrl = VL_RAND_RESET_I(5);
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__current_mmio_write_saved = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_busy = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_full = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__axi_wcnt = VL_RAND_RESET_I(4);
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_replace_addr = VL_RAND_RESET_I(10);
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_read_ready_addr = VL_RAND_RESET_I(10);
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_replace_write_addr = VL_RAND_RESET_I(10);
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_replace_cnt = VL_RAND_RESET_I(5);
    for (int __Vi0=0; __Vi0<16; ++__Vi0) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_use_replace_addr = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_data_valid = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__fence_working = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__replace_working = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__ar_handshake = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__aw_handshake = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__replace_writeback = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__fence_way = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__tag_wea[__Vi0] = VL_RAND_RESET_I(1);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_replace_wea[__Vi0] = VL_RAND_RESET_I(4);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_wea[__Vi0] = VL_RAND_RESET_I(4);
    }
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__tag_ram_wdata = VL_RAND_RESET_I(20);
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_addr_choose = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_word_addr = VL_RAND_RESET_I(10);
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_line_addr = VL_RAND_RESET_I(6);
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_write_addr = VL_RAND_RESET_I(10);
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_bram_wdata = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__cache_data[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__cache_tag[__Vi0] = VL_RAND_RESET_I(20);
    }
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__tag_compare_valid = VL_RAND_RESET_I(2);
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__saved_rdata = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__last_line_addr = VL_RAND_RESET_I(10);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__last_wea[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__last_wdata = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<2; ++__Vi0) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__cache_data_forward[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT____Vcellout__genblk1__BRA__0__KET____DOT__d_data__doutb = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT____Vcellout__genblk1__BRA__0__KET____DOT__d_tag__doutb = VL_RAND_RESET_I(20);
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT____Vcellout__genblk1__BRA__1__KET____DOT__d_data__doutb = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT____Vcellout__genblk1__BRA__1__KET____DOT__d_tag__doutb = VL_RAND_RESET_I(20);
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT____Vlvbound1 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT____Vlvbound2 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT____Vlvbound3 = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT____Vlvbound4 = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<1024; ++__Vi0) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__j = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_tag__DOT__ram[__Vi0] = VL_RAND_RESET_I(20);
    }
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_tag__DOT__j = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<1024; ++__Vi0) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__j = VL_RAND_RESET_I(32);
    for (int __Vi0=0; __Vi0<64; ++__Vi0) {
        vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_tag__DOT__ram[__Vi0] = VL_RAND_RESET_I(20);
    }
    vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_tag__DOT__j = VL_RAND_RESET_I(32);
    vlSelf->mycpu_top__DOT__u_arbitrater__DOT__ar_sel = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_arbitrater__DOT__ar_sel_lock = VL_RAND_RESET_I(1);
    vlSelf->mycpu_top__DOT__u_arbitrater__DOT__ar_sel_lock_val = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf__v0 = 0;
    vlSelf->__Vdlyvval__mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf__v0 = 0;
    vlSelf->__Vdlyvdim0__mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf__v1 = 0;
    vlSelf->__Vdlyvval__mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf__v1 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf__v1 = 0;
    vlSelf->__Vdlyvdim0__mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf__v2 = 0;
    vlSelf->__Vdlyvval__mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf__v2 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf__v2 = 0;
    vlSelf->__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__meta__v0 = 0;
    vlSelf->__Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__meta__v0 = 0;
    vlSelf->__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__meta__v0 = 0;
    vlSelf->__Vdly__mycpu_top__DOT__i_arvalid = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__mycpu_top__DOT__i_cache_inst__DOT__icache_status = 0;
    vlSelf->__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__meta__v1 = 0;
    vlSelf->__Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__meta__v1 = 0;
    vlSelf->__Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__meta__v1 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__meta__v1 = 0;
    vlSelf->__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__data_wea__v0 = 0;
    vlSelf->__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__data_wea__v0 = 0;
    vlSelf->__Vdly__mycpu_top__DOT__i_cache_inst__DOT__axi_cnt = VL_RAND_RESET_I(5);
    vlSelf->__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__tag_wea__v0 = 0;
    vlSelf->__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__tag_wea__v0 = 0;
    vlSelf->__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__meta__v2 = 0;
    vlSelf->__Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__meta__v2 = 0;
    vlSelf->__Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__meta__v2 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__meta__v2 = 0;
    vlSelf->__Vdly__mycpu_top__DOT__i_rready = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__data_wea__v1 = 0;
    vlSelf->__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__data_wea__v1 = 0;
    vlSelf->__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__tag_wea__v1 = 0;
    vlSelf->__Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__data_wea__v2 = 0;
    vlSelf->__Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__data_wea__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__data_wea__v2 = 0;
    vlSelf->__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__meta__v3 = 0;
    vlSelf->__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__meta__v4 = 0;
    vlSelf->__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__data_wea__v3 = 0;
    vlSelf->__Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__meta__v5 = 0;
    vlSelf->__Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__meta__v5 = 0;
    vlSelf->__Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__meta__v5 = 0;
    vlSelf->__Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__meta__v5 = VL_RAND_RESET_I(1);
    vlSelf->__Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__meta__v5 = 0;
    vlSelf->__Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__meta__v6 = 0;
    vlSelf->__Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__meta__v7 = 0;
    vlSelf->__Vchglast__TOP__mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_sign = VL_RAND_RESET_I(1);
    for (int __Vi0=0; __Vi0<3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = VL_RAND_RESET_I(1);
    }
}
