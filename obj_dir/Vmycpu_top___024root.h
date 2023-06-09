// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmycpu_top.h for the primary calling header

#ifndef VERILATED_VMYCPU_TOP___024ROOT_H_
#define VERILATED_VMYCPU_TOP___024ROOT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vmycpu_top__Syms;
class Vmycpu_top_VerilatedVcd;


//----------

VL_MODULE(Vmycpu_top___024root) {
  public:

    // PORTS
    VL_IN8(aclk,0,0);
    VL_IN8(aresetn,0,0);
    VL_IN8(ext_int,5,0);
    VL_OUT8(arid,3,0);
    VL_OUT8(arlen,7,0);
    VL_OUT8(arsize,2,0);
    VL_OUT8(arburst,1,0);
    VL_OUT8(arlock,1,0);
    VL_OUT8(arcache,3,0);
    VL_OUT8(arprot,2,0);
    VL_OUT8(arvalid,0,0);
    VL_IN8(arready,0,0);
    VL_IN8(rid,3,0);
    VL_IN8(rresp,1,0);
    VL_IN8(rlast,0,0);
    VL_IN8(rvalid,0,0);
    VL_OUT8(rready,0,0);
    VL_OUT8(awid,3,0);
    VL_OUT8(awlen,7,0);
    VL_OUT8(awsize,2,0);
    VL_OUT8(awburst,1,0);
    VL_OUT8(awlock,1,0);
    VL_OUT8(awcache,3,0);
    VL_OUT8(awprot,2,0);
    VL_OUT8(awvalid,0,0);
    VL_IN8(awready,0,0);
    VL_OUT8(wid,3,0);
    VL_OUT8(wstrb,3,0);
    VL_OUT8(wlast,0,0);
    VL_OUT8(wvalid,0,0);
    VL_IN8(wready,0,0);
    VL_IN8(bid,3,0);
    VL_IN8(bresp,1,0);
    VL_IN8(bvalid,0,0);
    VL_OUT8(bready,0,0);
    VL_OUT8(debug_wb_rf_wen,3,0);
    VL_OUT8(debug_wb_rf_wnum,4,0);
    VL_OUT8(debug_int,0,0);
    VL_OUT8(debug_commit,0,0);
    VL_OUT(araddr,31,0);
    VL_IN(rdata,31,0);
    VL_OUT(awaddr,31,0);
    VL_OUT(wdata,31,0);
    VL_OUT(debug_wb_pc,31,0);
    VL_OUT(debug_wb_rf_wdata,31,0);
    VL_OUT(debug_cp0_count,31,0);
    VL_OUT(debug_cp0_random,31,0);
    VL_OUT(debug_cp0_cause,31,0);

    // LOCAL SIGNALS
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ mycpu_top__DOT__no_cache_d;
        CData/*0:0*/ mycpu_top__DOT__no_cache_i;
        CData/*0:0*/ mycpu_top__DOT__inst_en;
        CData/*0:0*/ mycpu_top__DOT__i_cache_stall;
        CData/*0:0*/ mycpu_top__DOT__inst_data_ok1;
        CData/*0:0*/ mycpu_top__DOT__inst_data_ok2;
        CData/*0:0*/ mycpu_top__DOT__inst_tlb_refill;
        CData/*0:0*/ mycpu_top__DOT__inst_tlb_invalid;
        CData/*0:0*/ mycpu_top__DOT__data_en;
        CData/*1:0*/ mycpu_top__DOT__data_rlen;
        CData/*3:0*/ mycpu_top__DOT__data_wen;
        CData/*0:0*/ mycpu_top__DOT__d_cache_stall;
        CData/*7:0*/ mycpu_top__DOT__i_arlen;
        CData/*2:0*/ mycpu_top__DOT__i_arsize;
        CData/*0:0*/ mycpu_top__DOT__i_arvalid;
        CData/*0:0*/ mycpu_top__DOT__i_arready;
        CData/*0:0*/ mycpu_top__DOT__i_rvalid;
        CData/*0:0*/ mycpu_top__DOT__i_rready;
        CData/*7:0*/ mycpu_top__DOT__d_arlen;
        CData/*2:0*/ mycpu_top__DOT__d_arsize;
        CData/*0:0*/ mycpu_top__DOT__d_arvalid;
        CData/*0:0*/ mycpu_top__DOT__d_arready;
        CData/*0:0*/ mycpu_top__DOT__d_rlast;
        CData/*0:0*/ mycpu_top__DOT__d_rvalid;
        CData/*0:0*/ mycpu_top__DOT__d_rready;
        CData/*7:0*/ mycpu_top__DOT__d_awlen;
        CData/*2:0*/ mycpu_top__DOT__d_awsize;
        CData/*0:0*/ mycpu_top__DOT__d_awvalid;
        CData/*3:0*/ mycpu_top__DOT__d_wstrb;
        CData/*0:0*/ mycpu_top__DOT__d_wlast;
        CData/*0:0*/ mycpu_top__DOT__d_wvalid;
        CData/*0:0*/ mycpu_top__DOT__data_tlb_refill;
        CData/*0:0*/ mycpu_top__DOT__data_tlb_invalid;
        CData/*0:0*/ mycpu_top__DOT__data_tlb_mod;
        CData/*0:0*/ mycpu_top__DOT__no_cache_E;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__W_master_debug_int;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__fifo_empty;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__fifo_full;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__D_ena;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__D_slave_ena;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__W_ena;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__E_flush;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__M_flush;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__E_master_reg_wen;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__E_slave_reg_wen;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__M_master_reg_wen;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__M_slave_reg_wen;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__W_master_reg_wen;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__W_slave_reg_wen;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__M_cp0_jump;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__D_cp0_useable;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__delay_sel_rst;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__D_master_is_bj;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__D_master_bj;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__D_master_is_branch;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__D_master_pred_take;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__D_master_jump_conflict;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__D_master_is_in_delayslot;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__D_master_break_inst;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__D_slave_break_inst;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__D_master_syscall_inst;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__D_slave_syscall_inst;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__D_master_eret_inst;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__D_slave_eret_inst;
    };
    struct {
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__D_master_id_cpu;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__D_slave_id_cpu;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst;
        CData/*3:0*/ mycpu_top__DOT__u_datapath__DOT__D_master_branch_type;
        CData/*3:0*/ mycpu_top__DOT__u_datapath__DOT__D_slave_branch_type;
        CData/*3:0*/ mycpu_top__DOT__u_datapath__DOT__D_master_trap_type;
        CData/*3:0*/ mycpu_top__DOT__u_datapath__DOT__D_slave_trap_type;
        CData/*1:0*/ mycpu_top__DOT__u_datapath__DOT__D_master_cmov_type;
        CData/*1:0*/ mycpu_top__DOT__u_datapath__DOT__D_slave_cmov_type;
        CData/*4:0*/ mycpu_top__DOT__u_datapath__DOT__D_master_reg_waddr;
        CData/*4:0*/ mycpu_top__DOT__u_datapath__DOT__D_slave_reg_waddr;
        CData/*3:0*/ mycpu_top__DOT__u_datapath__DOT__E_master_branch_type;
        CData/*3:0*/ mycpu_top__DOT__u_datapath__DOT__E_master_trap_type;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__E_master_is_branch;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__E_master_bj;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__E_next_pc8;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__E_master_pred_take;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__E_master_actual_take;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__E_master_pred_fail;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__E_master_jump_conflict_tmp;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__E_master_is_link_pc8;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__E_master_alu_stall;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__E_slave_alu_stall;
        CData/*4:0*/ mycpu_top__DOT__u_datapath__DOT__E_master_rs;
        CData/*4:0*/ mycpu_top__DOT__u_datapath__DOT__E_slave_rs;
        CData/*4:0*/ mycpu_top__DOT__u_datapath__DOT__E_master_rt;
        CData/*4:0*/ mycpu_top__DOT__u_datapath__DOT__E_slave_rt;
        CData/*5:0*/ mycpu_top__DOT__u_datapath__DOT__E_master_op;
        CData/*5:0*/ mycpu_top__DOT__u_datapath__DOT__E_slave_op;
        CData/*4:0*/ mycpu_top__DOT__u_datapath__DOT__E_master_reg_waddr;
        CData/*4:0*/ mycpu_top__DOT__u_datapath__DOT__E_slave_reg_waddr;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__E_master_is_in_delayslot;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__E_slave_is_in_delayslot;
        CData/*1:0*/ mycpu_top__DOT__u_datapath__DOT__E_master_cmov_type;
        CData/*1:0*/ mycpu_top__DOT__u_datapath__DOT__E_slave_cmov_type;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__E_master_overflow;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__E_slave_overflow;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__E_master_mem_sel;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__E_slave_mem_sel;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__M_master_flush_all;
        CData/*4:0*/ mycpu_top__DOT__u_datapath__DOT__M_master_reg_waddr;
        CData/*4:0*/ mycpu_top__DOT__u_datapath__DOT__M_slave_reg_waddr;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__M_master_is_in_delayslot;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__M_slave_is_in_delayslot;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__mem_enM;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__mem_renM;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__mem_wenM;
        CData/*5:0*/ mycpu_top__DOT__u_datapath__DOT__mem_opM;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__M_master_mem_sel;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__M_slave_mem_sel;
        CData/*4:0*/ mycpu_top__DOT__u_datapath__DOT__W_master_reg_waddr;
        CData/*4:0*/ mycpu_top__DOT__u_datapath__DOT__W_slave_reg_waddr;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__D2E_clear1;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__D2E_clear2;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_stall;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_enable;
        CData/*3:0*/ mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__write_pointer;
        CData/*3:0*/ mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_pointer;
        CData/*3:0*/ mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__data_count;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__u_jump_judge__DOT__jr;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__u_issue_ctrl__DOT__D_slave_hilowrite;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__u_issue_ctrl__DOT__data_conflict;
    };
    struct {
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_sign1;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_start1;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_sign1;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_start1;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_sign2;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_start2;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_sign2;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_start2;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_sign;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_sign;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_start;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_ready;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_ready;
        CData/*1:0*/ mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__state;
        CData/*5:0*/ mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__cnt;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__sign1;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__sign2;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__master_except;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except_bd;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__is_kernel_mode;
        CData/*0:0*/ mycpu_top__DOT__i_cache_inst__DOT__uncached;
        CData/*0:0*/ mycpu_top__DOT__i_cache_inst__DOT__translation_ok;
        CData/*5:0*/ mycpu_top__DOT__i_cache_inst__DOT__replace_line_addr;
        CData/*0:0*/ mycpu_top__DOT__i_cache_inst__DOT__bram_addr_choose;
        CData/*5:0*/ mycpu_top__DOT__i_cache_inst__DOT__bram_line_addr;
        CData/*1:0*/ mycpu_top__DOT__i_cache_inst__DOT__tag_compare_valid;
        CData/*0:0*/ mycpu_top__DOT__i_cache_inst__DOT__cache_hit_available;
        CData/*0:0*/ mycpu_top__DOT__i_cache_inst__DOT__cache_inst_ok1;
        CData/*0:0*/ mycpu_top__DOT__i_cache_inst__DOT__saved_inst_ok0;
        CData/*0:0*/ mycpu_top__DOT__i_cache_inst__DOT__saved_inst_ok1;
        CData/*4:0*/ mycpu_top__DOT__i_cache_inst__DOT__axi_cnt;
        CData/*0:0*/ mycpu_top__DOT__d_cache_inst__DOT__M_mem_uncached;
        CData/*0:0*/ mycpu_top__DOT__d_cache_inst__DOT__l1tlb_ok;
        CData/*0:0*/ mycpu_top__DOT__d_cache_inst__DOT__translation_ok;
        CData/*4:0*/ mycpu_top__DOT__d_cache_inst__DOT__store_buffer_ctrl;
        CData/*0:0*/ mycpu_top__DOT__d_cache_inst__DOT__current_mmio_write_saved;
        CData/*0:0*/ mycpu_top__DOT__d_cache_inst__DOT__store_buffer_busy;
        CData/*0:0*/ mycpu_top__DOT__d_cache_inst__DOT__store_buffer_full;
        CData/*3:0*/ mycpu_top__DOT__d_cache_inst__DOT__axi_wcnt;
        CData/*4:0*/ mycpu_top__DOT__d_cache_inst__DOT__bram_replace_cnt;
        CData/*0:0*/ mycpu_top__DOT__d_cache_inst__DOT__bram_use_replace_addr;
        CData/*0:0*/ mycpu_top__DOT__d_cache_inst__DOT__bram_data_valid;
        CData/*0:0*/ mycpu_top__DOT__d_cache_inst__DOT__fence_working;
        CData/*0:0*/ mycpu_top__DOT__d_cache_inst__DOT__replace_working;
        CData/*0:0*/ mycpu_top__DOT__d_cache_inst__DOT__ar_handshake;
        CData/*0:0*/ mycpu_top__DOT__d_cache_inst__DOT__aw_handshake;
        CData/*0:0*/ mycpu_top__DOT__d_cache_inst__DOT__replace_writeback;
        CData/*0:0*/ mycpu_top__DOT__d_cache_inst__DOT__fence_way;
        CData/*0:0*/ mycpu_top__DOT__d_cache_inst__DOT__bram_addr_choose;
        CData/*5:0*/ mycpu_top__DOT__d_cache_inst__DOT__bram_line_addr;
        CData/*1:0*/ mycpu_top__DOT__d_cache_inst__DOT__tag_compare_valid;
        CData/*0:0*/ mycpu_top__DOT__u_arbitrater__DOT__ar_sel;
        CData/*0:0*/ mycpu_top__DOT__u_arbitrater__DOT__ar_sel_lock;
        CData/*0:0*/ mycpu_top__DOT__u_arbitrater__DOT__ar_sel_lock_val;
        SData/*12:0*/ mycpu_top__DOT__u_datapath__DOT__D_master_cop0_info;
        SData/*12:0*/ mycpu_top__DOT__u_datapath__DOT__D_slave_cop0_info;
        SData/*12:0*/ mycpu_top__DOT__u_datapath__DOT__E_master_cop0_info;
        SData/*12:0*/ mycpu_top__DOT__u_datapath__DOT__E_slave_cop0_info;
        SData/*12:0*/ mycpu_top__DOT__u_datapath__DOT__E_cop0_info;
        SData/*8:0*/ mycpu_top__DOT__i_cache_inst__DOT__bram_word_addr;
        SData/*9:0*/ mycpu_top__DOT__d_cache_inst__DOT__bram_replace_addr;
        SData/*9:0*/ mycpu_top__DOT__d_cache_inst__DOT__bram_read_ready_addr;
        SData/*9:0*/ mycpu_top__DOT__d_cache_inst__DOT__bram_replace_write_addr;
        SData/*9:0*/ mycpu_top__DOT__d_cache_inst__DOT__bram_word_addr;
    };
    struct {
        SData/*9:0*/ mycpu_top__DOT__d_cache_inst__DOT__data_write_addr;
        SData/*9:0*/ mycpu_top__DOT__d_cache_inst__DOT__last_line_addr;
        IData/*31:0*/ mycpu_top__DOT__pcF;
        IData/*31:0*/ mycpu_top__DOT__pc_next;
        IData/*31:0*/ mycpu_top__DOT__pc_next_dp;
        IData/*31:0*/ mycpu_top__DOT__inst_rdata1;
        IData/*31:0*/ mycpu_top__DOT__inst_rdata2;
        IData/*18:0*/ mycpu_top__DOT__itlb_vpn2;
        IData/*31:0*/ mycpu_top__DOT__data_addr;
        IData/*31:0*/ mycpu_top__DOT__data_rdata;
        IData/*31:0*/ mycpu_top__DOT__data_wdata;
        IData/*31:0*/ mycpu_top__DOT__mem_addrE_dp;
        IData/*31:0*/ mycpu_top__DOT__i_araddr;
        IData/*31:0*/ mycpu_top__DOT__i_rdata;
        IData/*31:0*/ mycpu_top__DOT__d_araddr;
        IData/*31:0*/ mycpu_top__DOT__d_rdata;
        IData/*31:0*/ mycpu_top__DOT__d_awaddr;
        IData/*31:0*/ mycpu_top__DOT__d_wdata;
        IData/*18:0*/ mycpu_top__DOT__dtlb_vpn2;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__M_master_debug_cp0_count;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__M_master_debug_cp0_random;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__M_master_debug_cp0_cause;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__W_master_debug_cp0_count;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__W_master_debug_cp0_random;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__W_master_debug_cp0_cause;
        IData/*26:0*/ mycpu_top__DOT__u_datapath__DOT__D1cs;
        IData/*26:0*/ mycpu_top__DOT__u_datapath__DOT__D2cs;
        IData/*26:0*/ mycpu_top__DOT__u_datapath__DOT__E1cs;
        IData/*26:0*/ mycpu_top__DOT__u_datapath__DOT__E2cs;
        IData/*26:0*/ mycpu_top__DOT__u_datapath__DOT__M1cs;
        IData/*26:0*/ mycpu_top__DOT__u_datapath__DOT__M2cs;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__E_cp0_rdata;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__M_cp0_jump_pc;
        IData/*16:0*/ mycpu_top__DOT__u_datapath__DOT__D_int_info;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__D_master_branch_target;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__D_master_rs_value_tmp;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__E_master_branch_target;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__E_master_pc_plus4;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__E_master_inst;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__E_slave_inst;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__E_master_shamt_value;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__E_slave_shamt_value;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__E_master_rs_value;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__E_slave_rs_value;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__E_master_rt_value;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__E_slave_rt_value;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__E_master_imm_value;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__E_slave_imm_value;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__E_master_pc;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__E_slave_pc;
        IData/*16:0*/ mycpu_top__DOT__u_datapath__DOT__E_master_except_temp;
        IData/*16:0*/ mycpu_top__DOT__u_datapath__DOT__E_slave_except_temp;
        IData/*16:0*/ mycpu_top__DOT__u_datapath__DOT__E_master_except;
        IData/*16:0*/ mycpu_top__DOT__u_datapath__DOT__E_slave_except;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__E_master_mem_addr;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__E_slave_mem_addr;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__E_master_alu_srca;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srca;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__E_master_alu_srcb;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srcb;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__E_master_alu_res_tmp;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__E_master_alu_res;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__E_slave_alu_res;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__M_master_inst;
    };
    struct {
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__M_slave_inst;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__M_master_pc;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__M_slave_pc;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__M_master_alu_res;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__M_slave_alu_res;
        IData/*16:0*/ mycpu_top__DOT__u_datapath__DOT__M_master_except_temp;
        IData/*16:0*/ mycpu_top__DOT__u_datapath__DOT__M_slave_except_temp;
        IData/*16:0*/ mycpu_top__DOT__u_datapath__DOT__M_master_except;
        IData/*16:0*/ mycpu_top__DOT__u_datapath__DOT__M_slave_except;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__mem_rdataM;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__mem_addrM;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__mem_wdataM;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__W_master_inst;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__W_slave_inst;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__W_master_pc;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__W_slave_pc;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__W_master_alu_res;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__W_slave_alu_res;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__W_master_reg_wdata;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__W_slave_reg_wdata;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__M_master_reg_wdata;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__M_slave_reg_wdata;
        IData/*16:0*/ mycpu_top__DOT__u_datapath__DOT__W_master_except;
        IData/*16:0*/ mycpu_top__DOT__u_datapath__DOT__W_slave_except;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg;
        VlWide<3>/*64:0*/ mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__slave_cnt;
        VlWide<3>/*64:0*/ mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__master_cnt;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__i;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__j;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__y1_tmp;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_a;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_b;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_a;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_b;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluA__DOT__i;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluB__DOT__i;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__cal_a;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__cal_b;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__part_0;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__part_1;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__part_2;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__part_3;
        VlWide<3>/*64:0*/ mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__divisor;
        IData/*16:0*/ mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except_pc;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__badva_in;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__index_reg;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__random_reg;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__context_reg;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__wired_reg;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__badva_reg;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__compare_reg;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__epc_reg;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__ebase_reg;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__taglo_reg;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__taghi_reg;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__errorepc_reg;
        IData/*31:0*/ mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__trap_base;
    };
    struct {
        IData/*31:0*/ mycpu_top__DOT__i_cache_inst__DOT__icache_status;
        IData/*19:0*/ mycpu_top__DOT__i_cache_inst__DOT__inst_tag;
        IData/*31:0*/ mycpu_top__DOT__i_cache_inst__DOT__inst_pa;
        IData/*19:0*/ mycpu_top__DOT__i_cache_inst__DOT__tag_ram_wdata;
        IData/*31:0*/ mycpu_top__DOT__i_cache_inst__DOT__cache_inst1;
        IData/*31:0*/ mycpu_top__DOT__i_cache_inst__DOT__saved_inst0;
        IData/*31:0*/ mycpu_top__DOT__i_cache_inst__DOT__saved_inst1;
        IData/*31:0*/ mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__j;
        IData/*31:0*/ mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_tag__DOT__j;
        IData/*31:0*/ mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__j;
        IData/*31:0*/ mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_tag__DOT__j;
        IData/*31:0*/ mycpu_top__DOT__d_cache_inst__DOT__M_mem_pa;
        IData/*31:0*/ mycpu_top__DOT__d_cache_inst__DOT__dcache_status;
        IData/*19:0*/ mycpu_top__DOT__d_cache_inst__DOT__tag_ram_wdata;
        IData/*31:0*/ mycpu_top__DOT__d_cache_inst__DOT__data_bram_wdata;
        IData/*31:0*/ mycpu_top__DOT__d_cache_inst__DOT__saved_rdata;
        IData/*31:0*/ mycpu_top__DOT__d_cache_inst__DOT__last_wdata;
        IData/*31:0*/ mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__j;
        IData/*31:0*/ mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_tag__DOT__j;
        IData/*31:0*/ mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__j;
        IData/*31:0*/ mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_tag__DOT__j;
        VlWide<3>/*73:0*/ mycpu_top__DOT__itlb_entry;
        VlWide<3>/*73:0*/ mycpu_top__DOT__dtlb_entry;
        QData/*63:0*/ mycpu_top__DOT__u_datapath__DOT__E_master_alu_out64;
        QData/*63:0*/ mycpu_top__DOT__u_datapath__DOT__E_slave_alu_out64;
        QData/*47:0*/ mycpu_top__DOT__u_datapath__DOT__master_asciiF;
        QData/*47:0*/ mycpu_top__DOT__u_datapath__DOT__master_asciiD;
        QData/*47:0*/ mycpu_top__DOT__u_datapath__DOT__master_asciiE;
        QData/*47:0*/ mycpu_top__DOT__u_datapath__DOT__master_asciiM;
        QData/*47:0*/ mycpu_top__DOT__u_datapath__DOT__master_asciiW;
        QData/*47:0*/ mycpu_top__DOT__u_datapath__DOT__slave_asciiF;
        QData/*47:0*/ mycpu_top__DOT__u_datapath__DOT__slave_asciiD;
        QData/*47:0*/ mycpu_top__DOT__u_datapath__DOT__slave_asciiE;
        QData/*47:0*/ mycpu_top__DOT__u_datapath__DOT__slave_asciiM;
        QData/*47:0*/ mycpu_top__DOT__u_datapath__DOT__slave_asciiW;
        VlWide<3>/*65:0*/ mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1;
        VlWide<3>/*65:0*/ mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2;
        VlWide<3>/*65:0*/ mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__write_line1;
        VlWide<3>/*65:0*/ mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_line;
        QData/*63:0*/ mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_result;
        QData/*63:0*/ mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_result;
        QData/*63:0*/ mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluA__DOT__temp_aluout_64;
        QData/*63:0*/ mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluB__DOT__temp_aluout_64;
        QData/*63:0*/ mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__mid_result;
        QData/*32:0*/ mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__div_temp;
        QData/*63:0*/ mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_hilo_reg__DOT__hilo_reg;
        QData/*32:0*/ mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__count_reg;
        QData/*41:0*/ mycpu_top__DOT__i_cache_inst__DOT__itlb;
        QData/*42:0*/ mycpu_top__DOT__d_cache_inst__DOT__dtlb;
        VlUnpacked<VlWide<3>/*65:0*/, 16> mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines;
        VlUnpacked<IData/*31:0*/, 32> mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf;
        VlUnpacked<CData/*5:0*/, 16> mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT;
        VlUnpacked<CData/*1:0*/, 64> mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__PHT;
        VlUnpacked<VlWide<3>/*73:0*/, 8> mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb;
        VlUnpacked<CData/*7:0*/, 3> mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched;
        VlUnpacked<IData/*18:0*/, 3> mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_find_vpn2;
        VlUnpacked<CData/*2:0*/, 3> mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched_index;
        VlUnpacked<CData/*2:0*/, 64> mycpu_top__DOT__i_cache_inst__DOT__meta;
        VlUnpacked<QData/*63:0*/, 2> mycpu_top__DOT__i_cache_inst__DOT__cache_data;
        VlUnpacked<IData/*19:0*/, 2> mycpu_top__DOT__i_cache_inst__DOT__cache_tag;
        VlUnpacked<CData/*7:0*/, 2> mycpu_top__DOT__i_cache_inst__DOT__data_wea;
        VlUnpacked<CData/*0:0*/, 2> mycpu_top__DOT__i_cache_inst__DOT__tag_wea;
        VlUnpacked<QData/*63:0*/, 512> mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__ram;
        VlUnpacked<IData/*19:0*/, 64> mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_tag__DOT__ram;
    };
    struct {
        VlUnpacked<QData/*63:0*/, 512> mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__ram;
        VlUnpacked<IData/*19:0*/, 64> mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_tag__DOT__ram;
        VlUnpacked<CData/*4:0*/, 64> mycpu_top__DOT__d_cache_inst__DOT__meta;
        VlUnpacked<VlWide<3>/*69:0*/, 4> mycpu_top__DOT__d_cache_inst__DOT__store_buffer;
        VlUnpacked<IData/*31:0*/, 16> mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer;
        VlUnpacked<CData/*0:0*/, 2> mycpu_top__DOT__d_cache_inst__DOT__tag_wea;
        VlUnpacked<CData/*3:0*/, 2> mycpu_top__DOT__d_cache_inst__DOT__bram_replace_wea;
        VlUnpacked<CData/*3:0*/, 2> mycpu_top__DOT__d_cache_inst__DOT__data_wea;
        VlUnpacked<IData/*31:0*/, 2> mycpu_top__DOT__d_cache_inst__DOT__cache_data;
        VlUnpacked<IData/*19:0*/, 2> mycpu_top__DOT__d_cache_inst__DOT__cache_tag;
        VlUnpacked<IData/*31:0*/, 2> mycpu_top__DOT__d_cache_inst__DOT__last_wea;
        VlUnpacked<IData/*31:0*/, 2> mycpu_top__DOT__d_cache_inst__DOT__cache_data_forward;
        VlUnpacked<IData/*31:0*/, 1024> mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__ram;
        VlUnpacked<IData/*19:0*/, 64> mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_tag__DOT__ram;
        VlUnpacked<IData/*31:0*/, 1024> mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__ram;
        VlUnpacked<IData/*19:0*/, 64> mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_tag__DOT__ram;
    };

    // LOCAL VARIABLES
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_inst_fifo__fifo_rst;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_regfile__wen2;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_regfile__wen1;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_forward_top__alu_wen2;
        CData/*0:0*/ mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_forward_top__alu_wen1;
        CData/*0:0*/ mycpu_top__DOT__i_cache_inst__DOT____Vlvbound1;
        CData/*0:0*/ mycpu_top__DOT__d_cache_inst__DOT____Vlvbound1;
        CData/*0:0*/ mycpu_top__DOT__d_cache_inst__DOT____Vlvbound2;
        CData/*0:0*/ mycpu_top__DOT__d_cache_inst__DOT____Vlvbound3;
        CData/*0:0*/ mycpu_top__DOT__d_cache_inst__DOT____Vlvbound4;
        CData/*4:0*/ __Vdlyvdim0__mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf__v0;
        CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf__v0;
        CData/*4:0*/ __Vdlyvdim0__mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf__v1;
        CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf__v1;
        CData/*4:0*/ __Vdlyvdim0__mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf__v2;
        CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf__v2;
        CData/*5:0*/ __Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__meta__v0;
        CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__meta__v0;
        CData/*0:0*/ __Vdly__mycpu_top__DOT__i_arvalid;
        CData/*5:0*/ __Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__meta__v1;
        CData/*0:0*/ __Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__meta__v1;
        CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__meta__v1;
        CData/*0:0*/ __Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__data_wea__v0;
        CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__data_wea__v0;
        CData/*4:0*/ __Vdly__mycpu_top__DOT__i_cache_inst__DOT__axi_cnt;
        CData/*0:0*/ __Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__tag_wea__v0;
        CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__tag_wea__v0;
        CData/*5:0*/ __Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__meta__v2;
        CData/*0:0*/ __Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__meta__v2;
        CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__meta__v2;
        CData/*0:0*/ __Vdly__mycpu_top__DOT__i_rready;
        CData/*0:0*/ __Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__data_wea__v1;
        CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__data_wea__v1;
        CData/*0:0*/ __Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__tag_wea__v1;
        CData/*0:0*/ __Vdlyvdim0__mycpu_top__DOT__i_cache_inst__DOT__data_wea__v2;
        CData/*7:0*/ __Vdlyvval__mycpu_top__DOT__i_cache_inst__DOT__data_wea__v2;
        CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__data_wea__v2;
        CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__meta__v3;
        CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__meta__v4;
        CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__data_wea__v3;
        CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__i_cache_inst__DOT__meta__v5;
        CData/*5:0*/ __Vdlyvdim0__mycpu_top__DOT__d_cache_inst__DOT__meta__v5;
        CData/*0:0*/ __Vdlyvval__mycpu_top__DOT__d_cache_inst__DOT__meta__v5;
        CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__meta__v5;
        CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__meta__v6;
        CData/*0:0*/ __Vdlyvset__mycpu_top__DOT__d_cache_inst__DOT__meta__v7;
        CData/*0:0*/ __Vclklast__TOP__aclk;
        CData/*0:0*/ __Vchglast__TOP__mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_sign;
        SData/*8:0*/ mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__i_data__addra;
        SData/*8:0*/ mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__i_data__addra;
        IData/*19:0*/ mycpu_top__DOT__i_cache_inst__DOT____Vcellout__genblk1__BRA__0__KET____DOT__i_tag__doutb;
        IData/*19:0*/ mycpu_top__DOT__i_cache_inst__DOT____Vcellout__genblk1__BRA__1__KET____DOT__i_tag__doutb;
        IData/*31:0*/ mycpu_top__DOT__d_cache_inst__DOT____Vcellout__genblk1__BRA__0__KET____DOT__d_data__doutb;
        IData/*19:0*/ mycpu_top__DOT__d_cache_inst__DOT____Vcellout__genblk1__BRA__0__KET____DOT__d_tag__doutb;
        IData/*31:0*/ mycpu_top__DOT__d_cache_inst__DOT____Vcellout__genblk1__BRA__1__KET____DOT__d_data__doutb;
        IData/*19:0*/ mycpu_top__DOT__d_cache_inst__DOT____Vcellout__genblk1__BRA__1__KET____DOT__d_tag__doutb;
        IData/*31:0*/ __Vdlyvval__mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf__v0;
        IData/*31:0*/ __Vdlyvval__mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf__v1;
        IData/*31:0*/ __Vdlyvval__mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf__v2;
        IData/*31:0*/ __Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__meta__v0;
        IData/*31:0*/ __Vdly__mycpu_top__DOT__i_cache_inst__DOT__icache_status;
        IData/*31:0*/ __Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__meta__v1;
        IData/*31:0*/ __Vdlyvlsb__mycpu_top__DOT__i_cache_inst__DOT__meta__v2;
        IData/*31:0*/ __Vdlyvlsb__mycpu_top__DOT__d_cache_inst__DOT__meta__v5;
    };
    struct {
        QData/*63:0*/ mycpu_top__DOT__i_cache_inst__DOT____Vcellout__genblk1__BRA__0__KET____DOT__i_data__doutb;
        QData/*63:0*/ mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__i_data__dina;
        QData/*63:0*/ mycpu_top__DOT__i_cache_inst__DOT____Vcellout__genblk1__BRA__1__KET____DOT__i_data__doutb;
        QData/*63:0*/ mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__i_data__dina;
        VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    };

    // INTERNAL VARIABLES
    Vmycpu_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vmycpu_top___024root);  ///< Copying not allowed
  public:
    Vmycpu_top___024root(const char* name);
    ~Vmycpu_top___024root();

    // INTERNAL METHODS
    void __Vconfigure(Vmycpu_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
