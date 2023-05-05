// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmycpu_top.h for the primary calling header

#include "Vmycpu_top___024root.h"
#include "Vmycpu_top__Syms.h"

VL_INLINE_OPT void Vmycpu_top___024root___combo__TOP__5(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___combo__TOP__5\n"); );
    // Body
    vlSelf->debug_wb_pc = ((IData)(vlSelf->aclk) ? vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_pc
                            : ((- (IData)((1U & (~ (IData)(
                                                           (0U 
                                                            != vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_except)))))) 
                               & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_pc));
    vlSelf->mycpu_top__DOT__d_rvalid = ((IData)(vlSelf->rid) 
                                        & (IData)(vlSelf->rvalid));
    vlSelf->mycpu_top__DOT__d_rlast = ((IData)(vlSelf->rid) 
                                       & (IData)(vlSelf->rlast));
    vlSelf->mycpu_top__DOT__d_rdata = ((1U & (IData)(vlSelf->rid))
                                        ? vlSelf->rdata
                                        : 0U);
    vlSelf->mycpu_top__DOT__i_rvalid = ((~ (IData)(vlSelf->rid)) 
                                        & (IData)(vlSelf->rvalid));
    vlSelf->mycpu_top__DOT__i_rdata = ((1U & (IData)(vlSelf->rid))
                                        ? 0U : vlSelf->rdata);
    vlSelf->mycpu_top__DOT__inst_en = (1U & (~ ((~ (IData)(vlSelf->aresetn)) 
                                                | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__fifo_full))));
    vlSelf->rready = ((1U & (IData)(vlSelf->rid)) ? (IData)(vlSelf->mycpu_top__DOT__d_rready)
                       : (IData)(vlSelf->mycpu_top__DOT__i_rready));
    vlSelf->mycpu_top__DOT__d_arready = ((IData)(vlSelf->arready) 
                                         & (IData)(vlSelf->mycpu_top__DOT__u_arbitrater__DOT__ar_sel));
    vlSelf->mycpu_top__DOT__i_arready = ((IData)(vlSelf->arready) 
                                         & (~ (IData)(vlSelf->mycpu_top__DOT__u_arbitrater__DOT__ar_sel)));
    if (vlSelf->aclk) {
        vlSelf->debug_wb_rf_wdata = vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_reg_wdata;
        vlSelf->debug_wb_rf_wnum = vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_reg_waddr;
    } else {
        vlSelf->debug_wb_rf_wdata = vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_reg_wdata;
        vlSelf->debug_wb_rf_wnum = vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_reg_waddr;
    }
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
    vlSelf->mycpu_top__DOT__inst_data_ok1 = (((0U == vlSelf->mycpu_top__DOT__i_cache_inst__DOT__icache_status)
                                               ? (IData)(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_hit_available)
                                               : (IData)(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__saved_inst_ok0)) 
                                             & (IData)(vlSelf->mycpu_top__DOT__inst_en));
    vlSelf->mycpu_top__DOT__i_cache_stall = ((0U == vlSelf->mycpu_top__DOT__i_cache_inst__DOT__icache_status)
                                              ? ((~ (IData)(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_hit_available)) 
                                                 & (IData)(vlSelf->mycpu_top__DOT__inst_en))
                                              : (4U 
                                                 != vlSelf->mycpu_top__DOT__i_cache_inst__DOT__icache_status));
    vlSelf->mycpu_top__DOT__inst_data_ok2 = (((0U == vlSelf->mycpu_top__DOT__i_cache_inst__DOT__icache_status)
                                               ? (IData)(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_inst_ok1)
                                               : (IData)(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__saved_inst_ok1)) 
                                             & (IData)(vlSelf->mycpu_top__DOT__inst_en));
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

void Vmycpu_top___024root___sequent__TOP__3(Vmycpu_top___024root* vlSelf);
void Vmycpu_top___024root___sequent__TOP__4(Vmycpu_top___024root* vlSelf);

void Vmycpu_top___024root___eval(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->aclk) & (~ (IData)(vlSelf->__Vclklast__TOP__aclk)))) {
        Vmycpu_top___024root___sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
        Vmycpu_top___024root___sequent__TOP__4(vlSelf);
    }
    Vmycpu_top___024root___combo__TOP__5(vlSelf);
    vlSelf->__Vm_traceActivity[2U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__aclk = vlSelf->aclk;
}

QData Vmycpu_top___024root___change_request_1(Vmycpu_top___024root* vlSelf);

VL_INLINE_OPT QData Vmycpu_top___024root___change_request(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___change_request\n"); );
    // Body
    return (Vmycpu_top___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData Vmycpu_top___024root___change_request_1(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_sign ^ vlSelf->__Vchglast__TOP__mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_sign));
    VL_DEBUG_IF( if(__req && ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_sign ^ vlSelf->__Vchglast__TOP__mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_sign))) VL_DBG_MSGF("        CHANGE: ../mycpu/../mycpu/3ex/alu_top.sv:38: mycpu_top.u_datapath.u_alu_top.mul_sign\n"); );
    // Final
    vlSelf->__Vchglast__TOP__mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_sign 
        = vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_sign;
    return __req;
}

#ifdef VL_DEBUG
void Vmycpu_top___024root___eval_debug_assertions(Vmycpu_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vmycpu_top___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->aclk & 0xfeU))) {
        Verilated::overWidthError("aclk");}
    if (VL_UNLIKELY((vlSelf->aresetn & 0xfeU))) {
        Verilated::overWidthError("aresetn");}
    if (VL_UNLIKELY((vlSelf->ext_int & 0xc0U))) {
        Verilated::overWidthError("ext_int");}
    if (VL_UNLIKELY((vlSelf->arready & 0xfeU))) {
        Verilated::overWidthError("arready");}
    if (VL_UNLIKELY((vlSelf->rid & 0xf0U))) {
        Verilated::overWidthError("rid");}
    if (VL_UNLIKELY((vlSelf->rresp & 0xfcU))) {
        Verilated::overWidthError("rresp");}
    if (VL_UNLIKELY((vlSelf->rlast & 0xfeU))) {
        Verilated::overWidthError("rlast");}
    if (VL_UNLIKELY((vlSelf->rvalid & 0xfeU))) {
        Verilated::overWidthError("rvalid");}
    if (VL_UNLIKELY((vlSelf->awready & 0xfeU))) {
        Verilated::overWidthError("awready");}
    if (VL_UNLIKELY((vlSelf->wready & 0xfeU))) {
        Verilated::overWidthError("wready");}
    if (VL_UNLIKELY((vlSelf->bid & 0xf0U))) {
        Verilated::overWidthError("bid");}
    if (VL_UNLIKELY((vlSelf->bresp & 0xfcU))) {
        Verilated::overWidthError("bresp");}
    if (VL_UNLIKELY((vlSelf->bvalid & 0xfeU))) {
        Verilated::overWidthError("bvalid");}
}
#endif  // VL_DEBUG
