// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmycpu_top__Syms.h"


void Vmycpu_top___024root__traceChgSub0(Vmycpu_top___024root* vlSelf, VerilatedVcd* tracep);

void Vmycpu_top___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vmycpu_top___024root* const __restrict vlSelf = static_cast<Vmycpu_top___024root*>(voidSelf);
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vmycpu_top___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vmycpu_top___024root__traceChgSub0(Vmycpu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp503;
    VlWide<3>/*95:0*/ __Vtemp504;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgIData(oldp+0,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__j),32);
            tracep->chgIData(oldp+1,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_tag__DOT__j),32);
            tracep->chgIData(oldp+2,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__j),32);
            tracep->chgIData(oldp+3,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_tag__DOT__j),32);
            tracep->chgIData(oldp+4,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__j),32);
            tracep->chgIData(oldp+5,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_tag__DOT__j),32);
            tracep->chgIData(oldp+6,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__j),32);
            tracep->chgIData(oldp+7,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_tag__DOT__j),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgIData(oldp+8,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg),32);
            tracep->chgBit(oldp+9,(vlSelf->mycpu_top__DOT__inst_tlb_refill));
            tracep->chgBit(oldp+10,(vlSelf->mycpu_top__DOT__inst_tlb_invalid));
            tracep->chgIData(oldp+11,(vlSelf->mycpu_top__DOT__inst_rdata1),32);
            tracep->chgIData(oldp+12,(vlSelf->mycpu_top__DOT__inst_rdata2),32);
            tracep->chgBit(oldp+13,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                           >> 4U))));
            tracep->chgBit(oldp+14,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs 
                                           >> 3U))));
            tracep->chgIData(oldp+15,(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_alu_res),32);
            tracep->chgBit(oldp+16,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                           >> 2U))));
            tracep->chgIData(oldp+17,(vlSelf->mycpu_top__DOT__itlb_vpn2),19);
            tracep->chgBit(oldp+18,((0U != vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
                                     [1U])));
            tracep->chgBit(oldp+19,((1U & (vlSelf->mycpu_top__DOT__itlb_entry[2U] 
                                           >> 9U))));
            tracep->chgBit(oldp+20,((1U & (vlSelf->mycpu_top__DOT__itlb_entry[2U] 
                                           >> 8U))));
            tracep->chgBit(oldp+21,((1U & (vlSelf->mycpu_top__DOT__itlb_entry[2U] 
                                           >> 7U))));
            tracep->chgBit(oldp+22,((1U & (vlSelf->mycpu_top__DOT__itlb_entry[2U] 
                                           >> 6U))));
            tracep->chgBit(oldp+23,((1U & (vlSelf->mycpu_top__DOT__itlb_entry[2U] 
                                           >> 5U))));
            tracep->chgBit(oldp+24,((1U & (vlSelf->mycpu_top__DOT__itlb_entry[2U] 
                                           >> 4U))));
            tracep->chgBit(oldp+25,((1U & (vlSelf->mycpu_top__DOT__itlb_entry[2U] 
                                           >> 3U))));
            tracep->chgIData(oldp+26,((0xfffffU & (
                                                   (vlSelf->mycpu_top__DOT__itlb_entry[2U] 
                                                    << 0x11U) 
                                                   | (vlSelf->mycpu_top__DOT__itlb_entry[1U] 
                                                      >> 0xfU)))),20);
            tracep->chgIData(oldp+27,((0xfffffU & (
                                                   (vlSelf->mycpu_top__DOT__itlb_entry[1U] 
                                                    << 5U) 
                                                   | (vlSelf->mycpu_top__DOT__itlb_entry[0U] 
                                                      >> 0x1bU)))),20);
            tracep->chgIData(oldp+28,((0x7ffffU & (
                                                   vlSelf->mycpu_top__DOT__itlb_entry[0U] 
                                                   >> 8U))),19);
            tracep->chgCData(oldp+29,((0xffU & vlSelf->mycpu_top__DOT__itlb_entry[0U])),8);
            tracep->chgBit(oldp+30,(vlSelf->mycpu_top__DOT__data_en));
            tracep->chgIData(oldp+31,(vlSelf->mycpu_top__DOT__data_addr),32);
            tracep->chgIData(oldp+32,(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_addrM),32);
            tracep->chgIData(oldp+33,(vlSelf->mycpu_top__DOT__data_rdata),32);
            tracep->chgCData(oldp+34,(vlSelf->mycpu_top__DOT__data_rlen),2);
            tracep->chgCData(oldp+35,(vlSelf->mycpu_top__DOT__data_wen),4);
            tracep->chgIData(oldp+36,(vlSelf->mycpu_top__DOT__data_wdata),32);
            tracep->chgBit(oldp+37,(vlSelf->mycpu_top__DOT__d_cache_stall));
            tracep->chgIData(oldp+38,(vlSelf->mycpu_top__DOT__mem_addrE_dp),32);
            tracep->chgBit(oldp+39,((((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_mem_sel) 
                                      & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                         >> 0xcU)) 
                                     | ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_mem_sel) 
                                        & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                           >> 0xcU)))));
            tracep->chgBit(oldp+40,((((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_mem_sel) 
                                      & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                         >> 0xbU)) 
                                     | ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_mem_sel) 
                                        & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                           >> 0xbU)))));
            tracep->chgIData(oldp+41,(vlSelf->mycpu_top__DOT__i_araddr),32);
            tracep->chgCData(oldp+42,(vlSelf->mycpu_top__DOT__i_arlen),8);
            tracep->chgCData(oldp+43,(vlSelf->mycpu_top__DOT__i_arsize),3);
            tracep->chgBit(oldp+44,(vlSelf->mycpu_top__DOT__i_arvalid));
            tracep->chgBit(oldp+45,(vlSelf->mycpu_top__DOT__i_rready));
            tracep->chgIData(oldp+46,(vlSelf->mycpu_top__DOT__d_araddr),32);
            tracep->chgCData(oldp+47,(vlSelf->mycpu_top__DOT__d_arlen),8);
            tracep->chgCData(oldp+48,(vlSelf->mycpu_top__DOT__d_arsize),3);
            tracep->chgBit(oldp+49,(vlSelf->mycpu_top__DOT__d_arvalid));
            tracep->chgBit(oldp+50,(vlSelf->mycpu_top__DOT__d_rready));
            tracep->chgIData(oldp+51,(vlSelf->mycpu_top__DOT__d_awaddr),32);
            tracep->chgCData(oldp+52,(vlSelf->mycpu_top__DOT__d_awlen),8);
            tracep->chgCData(oldp+53,(vlSelf->mycpu_top__DOT__d_awsize),3);
            tracep->chgBit(oldp+54,(vlSelf->mycpu_top__DOT__d_awvalid));
            tracep->chgIData(oldp+55,(vlSelf->mycpu_top__DOT__d_wdata),32);
            tracep->chgCData(oldp+56,(vlSelf->mycpu_top__DOT__d_wstrb),4);
            tracep->chgBit(oldp+57,(vlSelf->mycpu_top__DOT__d_wlast));
            tracep->chgBit(oldp+58,(vlSelf->mycpu_top__DOT__d_wvalid));
            tracep->chgIData(oldp+59,(vlSelf->mycpu_top__DOT__dtlb_vpn2),19);
            tracep->chgBit(oldp+60,((0U != vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
                                     [2U])));
            tracep->chgBit(oldp+61,((1U & (vlSelf->mycpu_top__DOT__dtlb_entry[2U] 
                                           >> 9U))));
            tracep->chgBit(oldp+62,((1U & (vlSelf->mycpu_top__DOT__dtlb_entry[2U] 
                                           >> 8U))));
            tracep->chgBit(oldp+63,((1U & (vlSelf->mycpu_top__DOT__dtlb_entry[2U] 
                                           >> 7U))));
            tracep->chgBit(oldp+64,((1U & (vlSelf->mycpu_top__DOT__dtlb_entry[2U] 
                                           >> 6U))));
            tracep->chgBit(oldp+65,((1U & (vlSelf->mycpu_top__DOT__dtlb_entry[2U] 
                                           >> 5U))));
            tracep->chgBit(oldp+66,((1U & (vlSelf->mycpu_top__DOT__dtlb_entry[2U] 
                                           >> 4U))));
            tracep->chgBit(oldp+67,((1U & (vlSelf->mycpu_top__DOT__dtlb_entry[2U] 
                                           >> 3U))));
            tracep->chgIData(oldp+68,((0xfffffU & (
                                                   (vlSelf->mycpu_top__DOT__dtlb_entry[2U] 
                                                    << 0x11U) 
                                                   | (vlSelf->mycpu_top__DOT__dtlb_entry[1U] 
                                                      >> 0xfU)))),20);
            tracep->chgIData(oldp+69,((0xfffffU & (
                                                   (vlSelf->mycpu_top__DOT__dtlb_entry[1U] 
                                                    << 5U) 
                                                   | (vlSelf->mycpu_top__DOT__dtlb_entry[0U] 
                                                      >> 0x1bU)))),20);
            tracep->chgIData(oldp+70,((0x7ffffU & (
                                                   vlSelf->mycpu_top__DOT__dtlb_entry[0U] 
                                                   >> 8U))),19);
            tracep->chgCData(oldp+71,((0xffU & vlSelf->mycpu_top__DOT__dtlb_entry[0U])),8);
            tracep->chgBit(oldp+72,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs 
                                           >> 2U))));
            tracep->chgBit(oldp+73,(vlSelf->mycpu_top__DOT__data_tlb_refill));
            tracep->chgBit(oldp+74,(vlSelf->mycpu_top__DOT__data_tlb_invalid));
            tracep->chgBit(oldp+75,(vlSelf->mycpu_top__DOT__data_tlb_mod));
            tracep->chgIData(oldp+76,((IData)((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__count_reg 
                                               >> 1U))),32);
            tracep->chgIData(oldp+77,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__random_reg),32);
            tracep->chgIData(oldp+78,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg),32);
            tracep->chgIData(oldp+79,(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_debug_cp0_count),32);
            tracep->chgIData(oldp+80,(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_debug_cp0_random),32);
            tracep->chgIData(oldp+81,(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_debug_cp0_cause),32);
            tracep->chgBit(oldp+82,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except 
                                           >> 9U))));
            tracep->chgIData(oldp+83,(vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_debug_cp0_count),32);
            tracep->chgIData(oldp+84,(vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_debug_cp0_random),32);
            tracep->chgIData(oldp+85,(vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_debug_cp0_cause),32);
            tracep->chgBit(oldp+86,(vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_debug_int));
            tracep->chgBit(oldp+87,((0U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__data_count))));
            tracep->chgBit(oldp+88,((1U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__data_count))));
            tracep->chgBit(oldp+89,(vlSelf->mycpu_top__DOT__u_datapath__DOT__fifo_full));
            tracep->chgBit(oldp+90,((1U & ((((vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                              | vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs) 
                                             >> 1U) 
                                            & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_ready))) 
                                           | ((vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                               | vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs) 
                                              & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_ready)))))));
            tracep->chgCData(oldp+91,((0xffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                                >> 0x13U))),8);
            tracep->chgBit(oldp+92,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                           >> 0x12U))));
            tracep->chgBit(oldp+93,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                           >> 0x11U))));
            tracep->chgBit(oldp+94,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                           >> 0x10U))));
            tracep->chgBit(oldp+95,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                           >> 0xfU))));
            tracep->chgBit(oldp+96,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                           >> 0xeU))));
            tracep->chgBit(oldp+97,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                           >> 0xdU))));
            tracep->chgBit(oldp+98,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                           >> 0xcU))));
            tracep->chgBit(oldp+99,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                           >> 0xbU))));
            tracep->chgBit(oldp+100,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                            >> 0xaU))));
            tracep->chgBit(oldp+101,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                            >> 9U))));
            tracep->chgBit(oldp+102,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                            >> 8U))));
            tracep->chgBit(oldp+103,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                            >> 7U))));
            tracep->chgBit(oldp+104,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                            >> 6U))));
            tracep->chgBit(oldp+105,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                            >> 5U))));
            tracep->chgBit(oldp+106,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                            >> 4U))));
            tracep->chgBit(oldp+107,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                            >> 3U))));
            tracep->chgBit(oldp+108,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                            >> 2U))));
            tracep->chgBit(oldp+109,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                            >> 1U))));
            tracep->chgBit(oldp+110,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs)));
            tracep->chgCData(oldp+111,((0xffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                                 >> 0x13U))),8);
            tracep->chgBit(oldp+112,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                            >> 0x12U))));
            tracep->chgBit(oldp+113,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                            >> 0x11U))));
            tracep->chgBit(oldp+114,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                            >> 0x10U))));
            tracep->chgBit(oldp+115,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                            >> 0xfU))));
            tracep->chgBit(oldp+116,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                            >> 0xeU))));
            tracep->chgBit(oldp+117,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                            >> 0xdU))));
            tracep->chgBit(oldp+118,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                            >> 0xcU))));
            tracep->chgBit(oldp+119,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                            >> 0xbU))));
            tracep->chgBit(oldp+120,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                            >> 0xaU))));
            tracep->chgBit(oldp+121,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                            >> 9U))));
            tracep->chgBit(oldp+122,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                            >> 8U))));
            tracep->chgBit(oldp+123,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                            >> 7U))));
            tracep->chgBit(oldp+124,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                            >> 6U))));
            tracep->chgBit(oldp+125,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                            >> 5U))));
            tracep->chgBit(oldp+126,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                            >> 4U))));
            tracep->chgBit(oldp+127,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                            >> 3U))));
            tracep->chgBit(oldp+128,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                            >> 2U))));
            tracep->chgBit(oldp+129,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                            >> 1U))));
            tracep->chgBit(oldp+130,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs)));
            tracep->chgCData(oldp+131,((0xffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                                 >> 0x13U))),8);
            tracep->chgBit(oldp+132,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                            >> 0x12U))));
            tracep->chgBit(oldp+133,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                            >> 0x11U))));
            tracep->chgBit(oldp+134,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                            >> 0x10U))));
            tracep->chgBit(oldp+135,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                            >> 0xfU))));
            tracep->chgBit(oldp+136,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                            >> 0xeU))));
            tracep->chgBit(oldp+137,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                            >> 0xdU))));
            tracep->chgBit(oldp+138,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                            >> 0xcU))));
            tracep->chgBit(oldp+139,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                            >> 0xbU))));
            tracep->chgBit(oldp+140,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                            >> 0xaU))));
            tracep->chgBit(oldp+141,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                            >> 9U))));
            tracep->chgBit(oldp+142,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                            >> 8U))));
            tracep->chgBit(oldp+143,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                            >> 7U))));
            tracep->chgBit(oldp+144,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                            >> 6U))));
            tracep->chgBit(oldp+145,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                            >> 5U))));
            tracep->chgBit(oldp+146,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                            >> 4U))));
            tracep->chgBit(oldp+147,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                            >> 3U))));
            tracep->chgBit(oldp+148,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                            >> 2U))));
            tracep->chgBit(oldp+149,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                            >> 1U))));
            tracep->chgBit(oldp+150,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)));
            tracep->chgCData(oldp+151,((0xffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                                 >> 0x13U))),8);
            tracep->chgBit(oldp+152,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                            >> 0x12U))));
            tracep->chgBit(oldp+153,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                            >> 0x11U))));
            tracep->chgBit(oldp+154,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                            >> 0x10U))));
            tracep->chgBit(oldp+155,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                            >> 0xfU))));
            tracep->chgBit(oldp+156,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                            >> 0xeU))));
            tracep->chgBit(oldp+157,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                            >> 0xdU))));
            tracep->chgBit(oldp+158,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                            >> 0xcU))));
            tracep->chgBit(oldp+159,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                            >> 0xbU))));
            tracep->chgBit(oldp+160,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                            >> 0xaU))));
            tracep->chgBit(oldp+161,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                            >> 9U))));
            tracep->chgBit(oldp+162,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                            >> 8U))));
            tracep->chgBit(oldp+163,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                            >> 7U))));
            tracep->chgBit(oldp+164,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                            >> 6U))));
            tracep->chgBit(oldp+165,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                            >> 5U))));
            tracep->chgBit(oldp+166,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                            >> 4U))));
            tracep->chgBit(oldp+167,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                            >> 3U))));
            tracep->chgBit(oldp+168,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                            >> 2U))));
            tracep->chgBit(oldp+169,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                            >> 1U))));
            tracep->chgBit(oldp+170,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)));
            tracep->chgCData(oldp+171,((0xffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs 
                                                 >> 0x13U))),8);
            tracep->chgBit(oldp+172,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs 
                                            >> 0x12U))));
            tracep->chgBit(oldp+173,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs 
                                            >> 0x11U))));
            tracep->chgBit(oldp+174,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs 
                                            >> 0x10U))));
            tracep->chgBit(oldp+175,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs 
                                            >> 0xfU))));
            tracep->chgBit(oldp+176,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs 
                                            >> 0xeU))));
            tracep->chgBit(oldp+177,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs 
                                            >> 0xdU))));
            tracep->chgBit(oldp+178,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs 
                                            >> 0xcU))));
            tracep->chgBit(oldp+179,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs 
                                            >> 0xbU))));
            tracep->chgBit(oldp+180,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs 
                                            >> 0xaU))));
            tracep->chgBit(oldp+181,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs 
                                            >> 9U))));
            tracep->chgBit(oldp+182,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs 
                                            >> 8U))));
            tracep->chgBit(oldp+183,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs 
                                            >> 7U))));
            tracep->chgBit(oldp+184,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs 
                                            >> 6U))));
            tracep->chgBit(oldp+185,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs 
                                            >> 5U))));
            tracep->chgBit(oldp+186,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs 
                                            >> 4U))));
            tracep->chgBit(oldp+187,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs 
                                            >> 3U))));
            tracep->chgBit(oldp+188,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs 
                                            >> 2U))));
            tracep->chgBit(oldp+189,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs 
                                            >> 1U))));
            tracep->chgBit(oldp+190,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs)));
            tracep->chgCData(oldp+191,((0xffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M2cs 
                                                 >> 0x13U))),8);
            tracep->chgBit(oldp+192,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M2cs 
                                            >> 0x12U))));
            tracep->chgBit(oldp+193,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M2cs 
                                            >> 0x11U))));
            tracep->chgBit(oldp+194,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M2cs 
                                            >> 0x10U))));
            tracep->chgBit(oldp+195,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M2cs 
                                            >> 0xfU))));
            tracep->chgBit(oldp+196,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M2cs 
                                            >> 0xeU))));
            tracep->chgBit(oldp+197,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M2cs 
                                            >> 0xdU))));
            tracep->chgBit(oldp+198,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M2cs 
                                            >> 0xcU))));
            tracep->chgBit(oldp+199,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M2cs 
                                            >> 0xbU))));
            tracep->chgBit(oldp+200,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M2cs 
                                            >> 0xaU))));
            tracep->chgBit(oldp+201,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M2cs 
                                            >> 9U))));
            tracep->chgBit(oldp+202,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M2cs 
                                            >> 8U))));
            tracep->chgBit(oldp+203,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M2cs 
                                            >> 7U))));
            tracep->chgBit(oldp+204,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M2cs 
                                            >> 6U))));
            tracep->chgBit(oldp+205,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M2cs 
                                            >> 5U))));
            tracep->chgBit(oldp+206,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M2cs 
                                            >> 4U))));
            tracep->chgBit(oldp+207,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M2cs 
                                            >> 3U))));
            tracep->chgBit(oldp+208,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M2cs 
                                            >> 2U))));
            tracep->chgBit(oldp+209,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M2cs 
                                            >> 1U))));
            tracep->chgBit(oldp+210,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M2cs)));
            tracep->chgBit(oldp+211,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                            >> 0xfU))));
            tracep->chgBit(oldp+212,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                            >> 0xfU))));
            tracep->chgBit(oldp+213,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_reg_wen));
            tracep->chgBit(oldp+214,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_reg_wen));
            tracep->chgBit(oldp+215,(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_reg_wen));
            tracep->chgBit(oldp+216,(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_reg_wen));
            tracep->chgBit(oldp+217,(vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_reg_wen));
            tracep->chgBit(oldp+218,(vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_reg_wen));
            tracep->chgIData(oldp+219,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cp0_rdata),32);
            tracep->chgIData(oldp+220,(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_cp0_jump_pc),32);
            tracep->chgBit(oldp+221,((0U != (3U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg))));
            tracep->chgBit(oldp+222,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_cp0_useable));
            tracep->chgBit(oldp+223,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__is_kernel_mode));
            tracep->chgBit(oldp+224,((((vlSelf->mycpu_top__DOT__u_datapath__DOT__D_int_info 
                                        >> 0x10U) & 
                                       (0U != (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__data_count))) 
                                      & (0U != (0xffU 
                                                & ((vlSelf->mycpu_top__DOT__u_datapath__DOT__D_int_info 
                                                    >> 8U) 
                                                   & vlSelf->mycpu_top__DOT__u_datapath__DOT__D_int_info))))));
            tracep->chgBit(oldp+225,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D_int_info 
                                            >> 0x10U))));
            tracep->chgCData(oldp+226,((0xffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D_int_info 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+227,((0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D_int_info)),8);
            tracep->chgBit(oldp+228,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_is_bj));
            tracep->chgBit(oldp+229,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_is_branch));
            tracep->chgBit(oldp+230,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_jump_judge__DOT__jr) 
                                            | (~ (IData)(
                                                         (0U 
                                                          != 
                                                          (0x1fU 
                                                           & (1U 
                                                              ^ 
                                                              ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                                << 5U) 
                                                               | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                                  >> 0x1bU)))))))))));
            tracep->chgBit(oldp+231,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_jump_conflict));
            tracep->chgIData(oldp+232,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_branch_target),32);
            tracep->chgIData(oldp+233,(((IData)(4U) 
                                        + vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[1U])),32);
            tracep->chgIData(oldp+234,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[1U]),32);
            tracep->chgIData(oldp+235,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[1U]),32);
            tracep->chgIData(oldp+236,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U]),32);
            tracep->chgIData(oldp+237,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U]),32);
            tracep->chgBit(oldp+238,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[2U] 
                                            >> 1U))));
            tracep->chgBit(oldp+239,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[2U] 
                                            >> 1U))));
            tracep->chgBit(oldp+240,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[2U])));
            tracep->chgBit(oldp+241,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[2U])));
            tracep->chgBit(oldp+242,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_is_in_delayslot));
            tracep->chgBit(oldp+243,((1U & (IData)(
                                                   ((0U 
                                                     == 
                                                     (0xf0000000U 
                                                      & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])) 
                                                    & ((0x8000000U 
                                                        & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                                        ? 
                                                       (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                        >> 0x1aU)
                                                        : 
                                                       ((0x4000000U 
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
                                                             & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U]))))))))));
            tracep->chgBit(oldp+244,((1U & (IData)(
                                                   ((0U 
                                                     == 
                                                     (0xf0000000U 
                                                      & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) 
                                                    & ((0x8000000U 
                                                        & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                        ? 
                                                       (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                        >> 0x1aU)
                                                        : 
                                                       ((0x4000000U 
                                                         & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                                         ? (IData)(
                                                                   (0x100000U 
                                                                    == 
                                                                    (0x1e0000U 
                                                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])))
                                                         : 
                                                        ((8U 
                                                          != 
                                                          (0x3fU 
                                                           & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])) 
                                                         & (9U 
                                                            == 
                                                            (0x3fU 
                                                             & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U]))))))))));
            tracep->chgCData(oldp+245,((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                        >> 0x1aU)),6);
            tracep->chgCData(oldp+246,((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                        >> 0x1aU)),6);
            tracep->chgCData(oldp+247,((0x3fU & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])),6);
            tracep->chgCData(oldp+248,((0x3fU & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])),6);
            tracep->chgIData(oldp+249,((0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                 >> 6U))),32);
            tracep->chgIData(oldp+250,((0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                 >> 6U))),32);
            tracep->chgIData(oldp+251,(((3U == (3U 
                                                & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                   >> 0x1cU)))
                                         ? (0xffffU 
                                            & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                         : (((- (IData)(
                                                        (1U 
                                                         & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                            >> 0xfU)))) 
                                             << 0x10U) 
                                            | (0xffffU 
                                               & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])))),32);
            tracep->chgIData(oldp+252,(((3U == (3U 
                                                & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                   >> 0x1cU)))
                                         ? (0xffffU 
                                            & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                         : (((- (IData)(
                                                        (1U 
                                                         & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                            >> 0xfU)))) 
                                             << 0x10U) 
                                            | (0xffffU 
                                               & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])))),32);
            tracep->chgBit(oldp+253,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_break_inst));
            tracep->chgBit(oldp+254,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_break_inst));
            tracep->chgBit(oldp+255,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_syscall_inst));
            tracep->chgBit(oldp+256,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_syscall_inst));
            tracep->chgBit(oldp+257,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_eret_inst));
            tracep->chgBit(oldp+258,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_eret_inst));
            tracep->chgBit(oldp+259,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_id_cpu));
            tracep->chgBit(oldp+260,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_id_cpu));
            tracep->chgBit(oldp+261,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_cop0_info) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+262,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_cop0_info) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+263,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_cop0_info) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+264,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_cop0_info) 
                                            >> 9U))));
            tracep->chgBit(oldp+265,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_cop0_info) 
                                            >> 8U))));
            tracep->chgCData(oldp+266,((0x1fU & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_cop0_info) 
                                                 >> 3U))),5);
            tracep->chgCData(oldp+267,((7U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_cop0_info))),3);
            tracep->chgBit(oldp+268,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_cop0_info) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+269,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_cop0_info) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+270,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_cop0_info) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+271,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_cop0_info) 
                                            >> 9U))));
            tracep->chgBit(oldp+272,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_cop0_info) 
                                            >> 8U))));
            tracep->chgCData(oldp+273,((0x1fU & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_cop0_info) 
                                                 >> 3U))),5);
            tracep->chgCData(oldp+274,((7U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_cop0_info))),3);
            tracep->chgBit(oldp+275,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst));
            tracep->chgBit(oldp+276,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst));
            tracep->chgCData(oldp+277,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_branch_type),4);
            tracep->chgCData(oldp+278,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_branch_type),4);
            tracep->chgCData(oldp+279,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_trap_type),4);
            tracep->chgCData(oldp+280,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_trap_type),4);
            tracep->chgCData(oldp+281,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_cmov_type),2);
            tracep->chgCData(oldp+282,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_cmov_type),2);
            tracep->chgCData(oldp+283,((0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                 >> 0x15U))),5);
            tracep->chgCData(oldp+284,((0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                 >> 0x15U))),5);
            tracep->chgCData(oldp+285,((0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                 >> 0x10U))),5);
            tracep->chgCData(oldp+286,((0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                 >> 0x10U))),5);
            tracep->chgCData(oldp+287,((0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                 >> 0xbU))),5);
            tracep->chgCData(oldp+288,((0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                 >> 0xbU))),5);
            tracep->chgCData(oldp+289,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_reg_waddr),5);
            tracep->chgCData(oldp+290,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_reg_waddr),5);
            tracep->chgBit(oldp+291,((1U & ((0U != 
                                             (3U & 
                                              vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[1U])) 
                                            | ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[1U] 
                                                >> 0x1fU) 
                                               & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__is_kernel_mode)))))));
            tracep->chgBit(oldp+292,((1U & ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[2U] 
                                             >> 1U) 
                                            | vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[2U]))));
            tracep->chgBit(oldp+293,((1U & ((0U != 
                                             (3U & 
                                              vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[1U])) 
                                            | ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[1U] 
                                                >> 0x1fU) 
                                               & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__is_kernel_mode)))))));
            tracep->chgBit(oldp+294,((1U & ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[2U] 
                                             >> 1U) 
                                            | vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[2U]))));
            tracep->chgBit(oldp+295,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_id_cpu) 
                                            >> 1U))));
            tracep->chgBit(oldp+296,((1U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_id_cpu))));
            tracep->chgBit(oldp+297,(0U));
            tracep->chgBit(oldp+298,(0U));
            tracep->chgBit(oldp+299,(0U));
            tracep->chgBit(oldp+300,(0U));
            tracep->chgBit(oldp+301,(0U));
            tracep->chgBit(oldp+302,(0U));
            tracep->chgBit(oldp+303,(0U));
            tracep->chgBit(oldp+304,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_id_cpu) 
                                            << 8U))));
            tracep->chgBit(oldp+305,((((((((1U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_trap_type)) 
                                           & (~ (IData)(
                                                        (0U 
                                                         != 
                                                         (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srca 
                                                          ^ vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srcb))))) 
                                          | ((2U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_trap_type)) 
                                             & (0U 
                                                != 
                                                (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srca 
                                                 ^ vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srcb)))) 
                                         | ((3U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_trap_type)) 
                                            & VL_GTES_III(1,32,32, vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srca, vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srcb))) 
                                        | ((4U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_trap_type)) 
                                           & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srca 
                                              >= vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srcb))) 
                                       | ((5U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_trap_type)) 
                                          & VL_LTS_III(1,32,32, vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srca, vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srcb))) 
                                      | ((6U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_trap_type)) 
                                         & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srca 
                                            < vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srcb)))));
            tracep->chgCData(oldp+306,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_branch_type),4);
            tracep->chgCData(oldp+307,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_trap_type),4);
            tracep->chgBit(oldp+308,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_is_branch));
            tracep->chgBit(oldp+309,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_next_pc8));
            tracep->chgBit(oldp+310,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_pred_take));
            tracep->chgBit(oldp+311,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_actual_take));
            tracep->chgBit(oldp+312,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_pred_fail));
            tracep->chgBit(oldp+313,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_jump_conflict_tmp));
            tracep->chgBit(oldp+314,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_is_link_pc8));
            tracep->chgIData(oldp+315,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_branch_target),32);
            tracep->chgIData(oldp+316,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_pc_plus4),32);
            tracep->chgIData(oldp+317,(((IData)(8U) 
                                        + vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_pc)),32);
            tracep->chgIData(oldp+318,((((((- (IData)(
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
                                           & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rs_value))),32);
            tracep->chgCData(oldp+319,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rs),5);
            tracep->chgCData(oldp+320,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_rs),5);
            tracep->chgCData(oldp+321,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt),5);
            tracep->chgCData(oldp+322,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_rt),5);
            tracep->chgIData(oldp+323,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst),32);
            tracep->chgIData(oldp+324,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst),32);
            tracep->chgIData(oldp+325,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_shamt_value),32);
            tracep->chgIData(oldp+326,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_shamt_value),32);
            tracep->chgIData(oldp+327,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rs_value),32);
            tracep->chgIData(oldp+328,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_rs_value),32);
            tracep->chgIData(oldp+329,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value),32);
            tracep->chgIData(oldp+330,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_rt_value),32);
            tracep->chgIData(oldp+331,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_imm_value),32);
            tracep->chgIData(oldp+332,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_imm_value),32);
            tracep->chgIData(oldp+333,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_pc),32);
            tracep->chgIData(oldp+334,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_pc),32);
            tracep->chgCData(oldp+335,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_op),6);
            tracep->chgCData(oldp+336,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_op),6);
            tracep->chgCData(oldp+337,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_reg_waddr),5);
            tracep->chgCData(oldp+338,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_reg_waddr),5);
            tracep->chgBit(oldp+339,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_is_in_delayslot));
            tracep->chgBit(oldp+340,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_is_in_delayslot));
            tracep->chgBit(oldp+341,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except_temp 
                                            >> 0x10U))));
            tracep->chgBit(oldp+342,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except_temp 
                                            >> 0xfU))));
            tracep->chgBit(oldp+343,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except_temp 
                                            >> 0xeU))));
            tracep->chgBit(oldp+344,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except_temp 
                                            >> 0xdU))));
            tracep->chgBit(oldp+345,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except_temp 
                                            >> 0xcU))));
            tracep->chgBit(oldp+346,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except_temp 
                                            >> 0xbU))));
            tracep->chgBit(oldp+347,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except_temp 
                                            >> 0xaU))));
            tracep->chgBit(oldp+348,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except_temp 
                                            >> 9U))));
            tracep->chgBit(oldp+349,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except_temp 
                                            >> 8U))));
            tracep->chgBit(oldp+350,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except_temp 
                                            >> 7U))));
            tracep->chgBit(oldp+351,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except_temp 
                                            >> 6U))));
            tracep->chgBit(oldp+352,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except_temp 
                                            >> 5U))));
            tracep->chgBit(oldp+353,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except_temp 
                                            >> 4U))));
            tracep->chgBit(oldp+354,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except_temp 
                                            >> 3U))));
            tracep->chgBit(oldp+355,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except_temp 
                                            >> 2U))));
            tracep->chgBit(oldp+356,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except_temp 
                                            >> 1U))));
            tracep->chgBit(oldp+357,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except_temp)));
            tracep->chgBit(oldp+358,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except_temp 
                                            >> 0x10U))));
            tracep->chgBit(oldp+359,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except_temp 
                                            >> 0xfU))));
            tracep->chgBit(oldp+360,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except_temp 
                                            >> 0xeU))));
            tracep->chgBit(oldp+361,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except_temp 
                                            >> 0xdU))));
            tracep->chgBit(oldp+362,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except_temp 
                                            >> 0xcU))));
            tracep->chgBit(oldp+363,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except_temp 
                                            >> 0xbU))));
            tracep->chgBit(oldp+364,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except_temp 
                                            >> 0xaU))));
            tracep->chgBit(oldp+365,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except_temp 
                                            >> 9U))));
            tracep->chgBit(oldp+366,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except_temp 
                                            >> 8U))));
            tracep->chgBit(oldp+367,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except_temp 
                                            >> 7U))));
            tracep->chgBit(oldp+368,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except_temp 
                                            >> 6U))));
            tracep->chgBit(oldp+369,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except_temp 
                                            >> 5U))));
            tracep->chgBit(oldp+370,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except_temp 
                                            >> 4U))));
            tracep->chgBit(oldp+371,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except_temp 
                                            >> 3U))));
            tracep->chgBit(oldp+372,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except_temp 
                                            >> 2U))));
            tracep->chgBit(oldp+373,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except_temp 
                                            >> 1U))));
            tracep->chgBit(oldp+374,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except_temp)));
            tracep->chgBit(oldp+375,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_cop0_info) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+376,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_cop0_info) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+377,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_cop0_info) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+378,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_cop0_info) 
                                            >> 9U))));
            tracep->chgBit(oldp+379,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_cop0_info) 
                                            >> 8U))));
            tracep->chgCData(oldp+380,((0x1fU & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_cop0_info) 
                                                 >> 3U))),5);
            tracep->chgCData(oldp+381,((7U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_cop0_info))),3);
            tracep->chgBit(oldp+382,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_cop0_info) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+383,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_cop0_info) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+384,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_cop0_info) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+385,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_cop0_info) 
                                            >> 9U))));
            tracep->chgBit(oldp+386,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_cop0_info) 
                                            >> 8U))));
            tracep->chgCData(oldp+387,((0x1fU & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_cop0_info) 
                                                 >> 3U))),5);
            tracep->chgCData(oldp+388,((7U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_cop0_info))),3);
            tracep->chgBit(oldp+389,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                                            >> 0xcU))));
            tracep->chgBit(oldp+390,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                                            >> 0xbU))));
            tracep->chgBit(oldp+391,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                                            >> 0xaU))));
            tracep->chgBit(oldp+392,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                                            >> 9U))));
            tracep->chgBit(oldp+393,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                                            >> 8U))));
            tracep->chgCData(oldp+394,((0x1fU & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                                                 >> 3U))),5);
            tracep->chgCData(oldp+395,((7U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))),3);
            tracep->chgCData(oldp+396,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_cmov_type),2);
            tracep->chgCData(oldp+397,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_cmov_type),2);
            tracep->chgIData(oldp+398,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_mem_addr),32);
            tracep->chgIData(oldp+399,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_mem_addr),32);
            tracep->chgIData(oldp+400,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srca),32);
            tracep->chgIData(oldp+401,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srca),32);
            tracep->chgIData(oldp+402,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srcb),32);
            tracep->chgIData(oldp+403,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srcb),32);
            tracep->chgCData(oldp+404,((((- (IData)(
                                                    (1U 
                                                     & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                                        >> 0xeU)))) 
                                         & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_op)) 
                                        | ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                                          >> 0xeU)))) 
                                           & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_op)))),6);
            tracep->chgBit(oldp+405,(((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_mem_sel) 
                                      | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_mem_sel))));
            tracep->chgIData(oldp+406,((((- (IData)(
                                                    (1U 
                                                     & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                                        >> 0xeU)))) 
                                         & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value) 
                                        | ((- (IData)(
                                                      (1U 
                                                       & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                                          >> 0xeU)))) 
                                           & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_rt_value))),32);
            tracep->chgBit(oldp+407,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_mem_sel));
            tracep->chgBit(oldp+408,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_mem_sel));
            tracep->chgBit(oldp+409,((((0x23U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_op)) 
                                       & (0U != (3U 
                                                 & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_mem_addr))) 
                                      | (((0x30U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_op)) 
                                          & (0U != 
                                             (3U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_mem_addr))) 
                                         | (((0x21U 
                                              == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_op)) 
                                             | (0x25U 
                                                == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_op))) 
                                            & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_mem_addr)))));
            tracep->chgBit(oldp+410,((((0x23U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_op)) 
                                       & (0U != (3U 
                                                 & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_mem_addr))) 
                                      | (((0x30U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_op)) 
                                          & (0U != 
                                             (3U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_mem_addr))) 
                                         | (((0x21U 
                                              == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_op)) 
                                             | (0x25U 
                                                == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_op))) 
                                            & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_mem_addr)))));
            tracep->chgBit(oldp+411,((((0x2bU == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_op)) 
                                       & (0U != (3U 
                                                 & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_mem_addr))) 
                                      | (((0x38U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_op)) 
                                          & (0U != 
                                             (3U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_mem_addr))) 
                                         | ((0x29U 
                                             == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_op)) 
                                            & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_mem_addr)))));
            tracep->chgBit(oldp+412,((((0x2bU == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_op)) 
                                       & (0U != (3U 
                                                 & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_mem_addr))) 
                                      | (((0x38U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_op)) 
                                          & (0U != 
                                             (3U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_mem_addr))) 
                                         | ((0x29U 
                                             == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_op)) 
                                            & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_mem_addr)))));
            tracep->chgIData(oldp+413,(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst),32);
            tracep->chgIData(oldp+414,(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst),32);
            tracep->chgIData(oldp+415,(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_pc),32);
            tracep->chgIData(oldp+416,(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_pc),32);
            tracep->chgIData(oldp+417,(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_alu_res),32);
            tracep->chgCData(oldp+418,(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_reg_waddr),5);
            tracep->chgCData(oldp+419,(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_reg_waddr),5);
            tracep->chgBit(oldp+420,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except_temp 
                                            >> 0x10U))));
            tracep->chgBit(oldp+421,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except_temp 
                                            >> 0xfU))));
            tracep->chgBit(oldp+422,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except_temp 
                                            >> 0xeU))));
            tracep->chgBit(oldp+423,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except_temp 
                                            >> 0xdU))));
            tracep->chgBit(oldp+424,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except_temp 
                                            >> 0xcU))));
            tracep->chgBit(oldp+425,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except_temp 
                                            >> 0xbU))));
            tracep->chgBit(oldp+426,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except_temp 
                                            >> 0xaU))));
            tracep->chgBit(oldp+427,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except_temp 
                                            >> 9U))));
            tracep->chgBit(oldp+428,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except_temp 
                                            >> 8U))));
            tracep->chgBit(oldp+429,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except_temp 
                                            >> 7U))));
            tracep->chgBit(oldp+430,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except_temp 
                                            >> 6U))));
            tracep->chgBit(oldp+431,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except_temp 
                                            >> 5U))));
            tracep->chgBit(oldp+432,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except_temp 
                                            >> 4U))));
            tracep->chgBit(oldp+433,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except_temp 
                                            >> 3U))));
            tracep->chgBit(oldp+434,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except_temp 
                                            >> 2U))));
            tracep->chgBit(oldp+435,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except_temp 
                                            >> 1U))));
            tracep->chgBit(oldp+436,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except_temp)));
            tracep->chgBit(oldp+437,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except_temp 
                                            >> 0x10U))));
            tracep->chgBit(oldp+438,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except_temp 
                                            >> 0xfU))));
            tracep->chgBit(oldp+439,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except_temp 
                                            >> 0xeU))));
            tracep->chgBit(oldp+440,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except_temp 
                                            >> 0xdU))));
            tracep->chgBit(oldp+441,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except_temp 
                                            >> 0xcU))));
            tracep->chgBit(oldp+442,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except_temp 
                                            >> 0xbU))));
            tracep->chgBit(oldp+443,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except_temp 
                                            >> 0xaU))));
            tracep->chgBit(oldp+444,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except_temp 
                                            >> 9U))));
            tracep->chgBit(oldp+445,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except_temp 
                                            >> 8U))));
            tracep->chgBit(oldp+446,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except_temp 
                                            >> 7U))));
            tracep->chgBit(oldp+447,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except_temp 
                                            >> 6U))));
            tracep->chgBit(oldp+448,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except_temp 
                                            >> 5U))));
            tracep->chgBit(oldp+449,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except_temp 
                                            >> 4U))));
            tracep->chgBit(oldp+450,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except_temp 
                                            >> 3U))));
            tracep->chgBit(oldp+451,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except_temp 
                                            >> 2U))));
            tracep->chgBit(oldp+452,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except_temp 
                                            >> 1U))));
            tracep->chgBit(oldp+453,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except_temp)));
            tracep->chgBit(oldp+454,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except 
                                            >> 0x10U))));
            tracep->chgBit(oldp+455,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except 
                                            >> 0xfU))));
            tracep->chgBit(oldp+456,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except 
                                            >> 0xeU))));
            tracep->chgBit(oldp+457,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except 
                                            >> 0xdU))));
            tracep->chgBit(oldp+458,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except 
                                            >> 0xcU))));
            tracep->chgBit(oldp+459,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except 
                                            >> 0xbU))));
            tracep->chgBit(oldp+460,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except 
                                            >> 0xaU))));
            tracep->chgBit(oldp+461,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except 
                                            >> 9U))));
            tracep->chgBit(oldp+462,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except 
                                            >> 8U))));
            tracep->chgBit(oldp+463,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except 
                                            >> 7U))));
            tracep->chgBit(oldp+464,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except 
                                            >> 6U))));
            tracep->chgBit(oldp+465,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except 
                                            >> 5U))));
            tracep->chgBit(oldp+466,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except 
                                            >> 4U))));
            tracep->chgBit(oldp+467,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except 
                                            >> 3U))));
            tracep->chgBit(oldp+468,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except 
                                            >> 2U))));
            tracep->chgBit(oldp+469,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except 
                                            >> 1U))));
            tracep->chgBit(oldp+470,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except)));
            tracep->chgBit(oldp+471,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except 
                                            >> 0x10U))));
            tracep->chgBit(oldp+472,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except 
                                            >> 0xfU))));
            tracep->chgBit(oldp+473,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except 
                                            >> 0xeU))));
            tracep->chgBit(oldp+474,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except 
                                            >> 0xdU))));
            tracep->chgBit(oldp+475,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except 
                                            >> 0xcU))));
            tracep->chgBit(oldp+476,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except 
                                            >> 0xbU))));
            tracep->chgBit(oldp+477,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except 
                                            >> 0xaU))));
            tracep->chgBit(oldp+478,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except 
                                            >> 9U))));
            tracep->chgBit(oldp+479,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except 
                                            >> 8U))));
            tracep->chgBit(oldp+480,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except 
                                            >> 7U))));
            tracep->chgBit(oldp+481,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except 
                                            >> 6U))));
            tracep->chgBit(oldp+482,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except 
                                            >> 5U))));
            tracep->chgBit(oldp+483,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except 
                                            >> 4U))));
            tracep->chgBit(oldp+484,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except 
                                            >> 3U))));
            tracep->chgBit(oldp+485,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except 
                                            >> 2U))));
            tracep->chgBit(oldp+486,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except 
                                            >> 1U))));
            tracep->chgBit(oldp+487,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except)));
            tracep->chgBit(oldp+488,(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_is_in_delayslot));
            tracep->chgBit(oldp+489,(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_is_in_delayslot));
            tracep->chgIData(oldp+490,(((IData)(4U) 
                                        + vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_pc)),32);
            tracep->chgIData(oldp+491,(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_rdataM),32);
            tracep->chgBit(oldp+492,(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_enM));
            tracep->chgBit(oldp+493,(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_renM));
            tracep->chgBit(oldp+494,(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_wenM));
            tracep->chgCData(oldp+495,(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM),6);
            tracep->chgIData(oldp+496,(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_wdataM),32);
            tracep->chgBit(oldp+497,(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_mem_sel));
            tracep->chgBit(oldp+498,(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_mem_sel));
            tracep->chgIData(oldp+499,(((- (IData)((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_mem_sel))) 
                                        & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_rdataM)),32);
            tracep->chgIData(oldp+500,(((- (IData)((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_mem_sel))) 
                                        & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_rdataM)),32);
            tracep->chgIData(oldp+501,(vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst),32);
            tracep->chgIData(oldp+502,(vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst),32);
            tracep->chgIData(oldp+503,(vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_pc),32);
            tracep->chgIData(oldp+504,(vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_pc),32);
            tracep->chgCData(oldp+505,(vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_reg_waddr),5);
            tracep->chgCData(oldp+506,(vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_reg_waddr),5);
            tracep->chgIData(oldp+507,(vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_reg_wdata),32);
            tracep->chgIData(oldp+508,(vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_reg_wdata),32);
            tracep->chgIData(oldp+509,(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_reg_wdata),32);
            tracep->chgIData(oldp+510,(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_reg_wdata),32);
            tracep->chgBit(oldp+511,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_except 
                                            >> 0x10U))));
            tracep->chgBit(oldp+512,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_except 
                                            >> 0xfU))));
            tracep->chgBit(oldp+513,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_except 
                                            >> 0xeU))));
            tracep->chgBit(oldp+514,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_except 
                                            >> 0xdU))));
            tracep->chgBit(oldp+515,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_except 
                                            >> 0xcU))));
            tracep->chgBit(oldp+516,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_except 
                                            >> 0xbU))));
            tracep->chgBit(oldp+517,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_except 
                                            >> 0xaU))));
            tracep->chgBit(oldp+518,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_except 
                                            >> 9U))));
            tracep->chgBit(oldp+519,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_except 
                                            >> 8U))));
            tracep->chgBit(oldp+520,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_except 
                                            >> 7U))));
            tracep->chgBit(oldp+521,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_except 
                                            >> 6U))));
            tracep->chgBit(oldp+522,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_except 
                                            >> 5U))));
            tracep->chgBit(oldp+523,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_except 
                                            >> 4U))));
            tracep->chgBit(oldp+524,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_except 
                                            >> 3U))));
            tracep->chgBit(oldp+525,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_except 
                                            >> 2U))));
            tracep->chgBit(oldp+526,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_except 
                                            >> 1U))));
            tracep->chgBit(oldp+527,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_except)));
            tracep->chgBit(oldp+528,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_except 
                                            >> 0x10U))));
            tracep->chgBit(oldp+529,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_except 
                                            >> 0xfU))));
            tracep->chgBit(oldp+530,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_except 
                                            >> 0xeU))));
            tracep->chgBit(oldp+531,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_except 
                                            >> 0xdU))));
            tracep->chgBit(oldp+532,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_except 
                                            >> 0xcU))));
            tracep->chgBit(oldp+533,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_except 
                                            >> 0xbU))));
            tracep->chgBit(oldp+534,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_except 
                                            >> 0xaU))));
            tracep->chgBit(oldp+535,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_except 
                                            >> 9U))));
            tracep->chgBit(oldp+536,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_except 
                                            >> 8U))));
            tracep->chgBit(oldp+537,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_except 
                                            >> 7U))));
            tracep->chgBit(oldp+538,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_except 
                                            >> 6U))));
            tracep->chgBit(oldp+539,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_except 
                                            >> 5U))));
            tracep->chgBit(oldp+540,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_except 
                                            >> 4U))));
            tracep->chgBit(oldp+541,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_except 
                                            >> 3U))));
            tracep->chgBit(oldp+542,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_except 
                                            >> 2U))));
            tracep->chgBit(oldp+543,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_except 
                                            >> 1U))));
            tracep->chgBit(oldp+544,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_except)));
            tracep->chgQData(oldp+545,(vlSelf->mycpu_top__DOT__u_datapath__DOT__master_asciiF),48);
            tracep->chgQData(oldp+547,(vlSelf->mycpu_top__DOT__u_datapath__DOT__master_asciiD),48);
            tracep->chgQData(oldp+549,(vlSelf->mycpu_top__DOT__u_datapath__DOT__master_asciiE),48);
            tracep->chgQData(oldp+551,(vlSelf->mycpu_top__DOT__u_datapath__DOT__master_asciiM),48);
            tracep->chgQData(oldp+553,(vlSelf->mycpu_top__DOT__u_datapath__DOT__master_asciiW),48);
            tracep->chgQData(oldp+555,(vlSelf->mycpu_top__DOT__u_datapath__DOT__slave_asciiF),48);
            tracep->chgQData(oldp+557,(vlSelf->mycpu_top__DOT__u_datapath__DOT__slave_asciiD),48);
            tracep->chgQData(oldp+559,(vlSelf->mycpu_top__DOT__u_datapath__DOT__slave_asciiE),48);
            tracep->chgQData(oldp+561,(vlSelf->mycpu_top__DOT__u_datapath__DOT__slave_asciiM),48);
            tracep->chgQData(oldp+563,(vlSelf->mycpu_top__DOT__u_datapath__DOT__slave_asciiW),48);
            tracep->chgBit(oldp+565,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                            >> 0x11U))));
            tracep->chgBit(oldp+566,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                            >> 0x10U))));
            tracep->chgBit(oldp+567,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                            >> 0xdU))));
            tracep->chgBit(oldp+568,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                            >> 0xdU))));
            tracep->chgBit(oldp+569,(((((vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                         >> 0xdU) & 
                                        (0U != (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_reg_waddr))) 
                                       & (((vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                            >> 0x11U) 
                                           & ((0x1fU 
                                               & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                  >> 0x15U)) 
                                              == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_reg_waddr))) 
                                          | ((vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                              >> 0x10U) 
                                             & ((0x1fU 
                                                 & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                    >> 0x10U)) 
                                                == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_reg_waddr))))) 
                                      | (((vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                           >> 0xdU) 
                                          & (0U != (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_reg_waddr))) 
                                         & (((vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                              >> 0x11U) 
                                             & ((0x1fU 
                                                 & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                    >> 0x15U)) 
                                                == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_reg_waddr))) 
                                            | ((vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                                >> 0x10U) 
                                               & ((0x1fU 
                                                   & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                      >> 0x10U)) 
                                                  == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_reg_waddr))))))));
            tracep->chgIData(oldp+570,(((IData)(4U) 
                                        + vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg)),32);
            tracep->chgBit(oldp+571,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                            [0U][2U] 
                                            >> 1U))));
            tracep->chgBit(oldp+572,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                      [0U][2U])));
            tracep->chgIData(oldp+573,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                       [0U][1U]),32);
            tracep->chgIData(oldp+574,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                       [0U][0U]),32);
            tracep->chgBit(oldp+575,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                            [1U][2U] 
                                            >> 1U))));
            tracep->chgBit(oldp+576,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                      [1U][2U])));
            tracep->chgIData(oldp+577,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                       [1U][1U]),32);
            tracep->chgIData(oldp+578,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                       [1U][0U]),32);
            tracep->chgBit(oldp+579,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                            [2U][2U] 
                                            >> 1U))));
            tracep->chgBit(oldp+580,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                      [2U][2U])));
            tracep->chgIData(oldp+581,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                       [2U][1U]),32);
            tracep->chgIData(oldp+582,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                       [2U][0U]),32);
            tracep->chgBit(oldp+583,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                            [3U][2U] 
                                            >> 1U))));
            tracep->chgBit(oldp+584,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                      [3U][2U])));
            tracep->chgIData(oldp+585,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                       [3U][1U]),32);
            tracep->chgIData(oldp+586,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                       [3U][0U]),32);
            tracep->chgBit(oldp+587,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                            [4U][2U] 
                                            >> 1U))));
            tracep->chgBit(oldp+588,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                      [4U][2U])));
            tracep->chgIData(oldp+589,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                       [4U][1U]),32);
            tracep->chgIData(oldp+590,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                       [4U][0U]),32);
            tracep->chgBit(oldp+591,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                            [5U][2U] 
                                            >> 1U))));
            tracep->chgBit(oldp+592,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                      [5U][2U])));
            tracep->chgIData(oldp+593,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                       [5U][1U]),32);
            tracep->chgIData(oldp+594,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                       [5U][0U]),32);
            tracep->chgBit(oldp+595,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                            [6U][2U] 
                                            >> 1U))));
            tracep->chgBit(oldp+596,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                      [6U][2U])));
            tracep->chgIData(oldp+597,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                       [6U][1U]),32);
            tracep->chgIData(oldp+598,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                       [6U][0U]),32);
            tracep->chgBit(oldp+599,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                            [7U][2U] 
                                            >> 1U))));
            tracep->chgBit(oldp+600,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                      [7U][2U])));
            tracep->chgIData(oldp+601,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                       [7U][1U]),32);
            tracep->chgIData(oldp+602,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                       [7U][0U]),32);
            tracep->chgBit(oldp+603,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                            [8U][2U] 
                                            >> 1U))));
            tracep->chgBit(oldp+604,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                      [8U][2U])));
            tracep->chgIData(oldp+605,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                       [8U][1U]),32);
            tracep->chgIData(oldp+606,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                       [8U][0U]),32);
            tracep->chgBit(oldp+607,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                            [9U][2U] 
                                            >> 1U))));
            tracep->chgBit(oldp+608,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                      [9U][2U])));
            tracep->chgIData(oldp+609,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                       [9U][1U]),32);
            tracep->chgIData(oldp+610,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                       [9U][0U]),32);
            tracep->chgBit(oldp+611,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                            [0xaU][2U] 
                                            >> 1U))));
            tracep->chgBit(oldp+612,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                      [0xaU][2U])));
            tracep->chgIData(oldp+613,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                       [0xaU][1U]),32);
            tracep->chgIData(oldp+614,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                       [0xaU][0U]),32);
            tracep->chgBit(oldp+615,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                            [0xbU][2U] 
                                            >> 1U))));
            tracep->chgBit(oldp+616,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                      [0xbU][2U])));
            tracep->chgIData(oldp+617,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                       [0xbU][1U]),32);
            tracep->chgIData(oldp+618,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                       [0xbU][0U]),32);
            tracep->chgBit(oldp+619,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                            [0xcU][2U] 
                                            >> 1U))));
            tracep->chgBit(oldp+620,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                      [0xcU][2U])));
            tracep->chgIData(oldp+621,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                       [0xcU][1U]),32);
            tracep->chgIData(oldp+622,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                       [0xcU][0U]),32);
            tracep->chgBit(oldp+623,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                            [0xdU][2U] 
                                            >> 1U))));
            tracep->chgBit(oldp+624,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                      [0xdU][2U])));
            tracep->chgIData(oldp+625,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                       [0xdU][1U]),32);
            tracep->chgIData(oldp+626,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                       [0xdU][0U]),32);
            tracep->chgBit(oldp+627,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                            [0xeU][2U] 
                                            >> 1U))));
            tracep->chgBit(oldp+628,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                      [0xeU][2U])));
            tracep->chgIData(oldp+629,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                       [0xeU][1U]),32);
            tracep->chgIData(oldp+630,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                       [0xeU][0U]),32);
            tracep->chgBit(oldp+631,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                            [0xfU][2U] 
                                            >> 1U))));
            tracep->chgBit(oldp+632,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                      [0xfU][2U])));
            tracep->chgIData(oldp+633,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                       [0xfU][1U]),32);
            tracep->chgIData(oldp+634,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                       [0xfU][0U]),32);
            tracep->chgBit(oldp+635,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[2U] 
                                            >> 1U))));
            tracep->chgBit(oldp+636,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[2U])));
            tracep->chgIData(oldp+637,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[1U]),32);
            tracep->chgIData(oldp+638,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U]),32);
            tracep->chgBit(oldp+639,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[2U] 
                                            >> 1U))));
            tracep->chgBit(oldp+640,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[2U])));
            tracep->chgIData(oldp+641,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[1U]),32);
            tracep->chgIData(oldp+642,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U]),32);
            tracep->chgBit(oldp+643,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__write_line1[2U] 
                                            >> 1U))));
            tracep->chgBit(oldp+644,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__write_line1[2U])));
            tracep->chgIData(oldp+645,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__write_line1[1U]),32);
            tracep->chgIData(oldp+646,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__write_line1[0U]),32);
            tracep->chgIData(oldp+647,(((IData)(4U) 
                                        + vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg)),32);
            tracep->chgIData(oldp+648,(vlSelf->mycpu_top__DOT__inst_rdata2),32);
            tracep->chgBit(oldp+649,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_line[2U] 
                                            >> 1U))));
            tracep->chgBit(oldp+650,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_line[2U])));
            tracep->chgIData(oldp+651,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_line[1U]),32);
            tracep->chgIData(oldp+652,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_line[0U]),32);
            tracep->chgBit(oldp+653,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_stall));
            tracep->chgBit(oldp+654,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_enable));
            tracep->chgCData(oldp+655,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__write_pointer),4);
            tracep->chgCData(oldp+656,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_pointer),4);
            tracep->chgCData(oldp+657,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__data_count),4);
            tracep->chgWData(oldp+658,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__slave_cnt),65);
            tracep->chgWData(oldp+661,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__master_cnt),65);
            VL_ADD_W(3, __Vtemp503, vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__master_cnt, vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__slave_cnt);
            __Vtemp504[0U] = __Vtemp503[0U];
            __Vtemp504[1U] = __Vtemp503[1U];
            __Vtemp504[2U] = (1U & __Vtemp503[2U]);
            tracep->chgWData(oldp+664,(__Vtemp504),65);
            tracep->chgBit(oldp+667,((0U != (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__data_count))));
            tracep->chgIData(oldp+668,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[0]),32);
            tracep->chgIData(oldp+669,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[1]),32);
            tracep->chgIData(oldp+670,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[2]),32);
            tracep->chgIData(oldp+671,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[3]),32);
            tracep->chgIData(oldp+672,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[4]),32);
            tracep->chgIData(oldp+673,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[5]),32);
            tracep->chgIData(oldp+674,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[6]),32);
            tracep->chgIData(oldp+675,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[7]),32);
            tracep->chgIData(oldp+676,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[8]),32);
            tracep->chgIData(oldp+677,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[9]),32);
            tracep->chgIData(oldp+678,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[10]),32);
            tracep->chgIData(oldp+679,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[11]),32);
            tracep->chgIData(oldp+680,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[12]),32);
            tracep->chgIData(oldp+681,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[13]),32);
            tracep->chgIData(oldp+682,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[14]),32);
            tracep->chgIData(oldp+683,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[15]),32);
            tracep->chgIData(oldp+684,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[16]),32);
            tracep->chgIData(oldp+685,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[17]),32);
            tracep->chgIData(oldp+686,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[18]),32);
            tracep->chgIData(oldp+687,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[19]),32);
            tracep->chgIData(oldp+688,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[20]),32);
            tracep->chgIData(oldp+689,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[21]),32);
            tracep->chgIData(oldp+690,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[22]),32);
            tracep->chgIData(oldp+691,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[23]),32);
            tracep->chgIData(oldp+692,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[24]),32);
            tracep->chgIData(oldp+693,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[25]),32);
            tracep->chgIData(oldp+694,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[26]),32);
            tracep->chgIData(oldp+695,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[27]),32);
            tracep->chgIData(oldp+696,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[28]),32);
            tracep->chgIData(oldp+697,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[29]),32);
            tracep->chgIData(oldp+698,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[30]),32);
            tracep->chgIData(oldp+699,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[31]),32);
            tracep->chgCData(oldp+700,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[0]),6);
            tracep->chgCData(oldp+701,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[1]),6);
            tracep->chgCData(oldp+702,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[2]),6);
            tracep->chgCData(oldp+703,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[3]),6);
            tracep->chgCData(oldp+704,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[4]),6);
            tracep->chgCData(oldp+705,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[5]),6);
            tracep->chgCData(oldp+706,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[6]),6);
            tracep->chgCData(oldp+707,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[7]),6);
            tracep->chgCData(oldp+708,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[8]),6);
            tracep->chgCData(oldp+709,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[9]),6);
            tracep->chgCData(oldp+710,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[10]),6);
            tracep->chgCData(oldp+711,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[11]),6);
            tracep->chgCData(oldp+712,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[12]),6);
            tracep->chgCData(oldp+713,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[13]),6);
            tracep->chgCData(oldp+714,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[14]),6);
            tracep->chgCData(oldp+715,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[15]),6);
            tracep->chgCData(oldp+716,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT
                                       [(0xfU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[1U] 
                                                 >> 2U))]),6);
            tracep->chgCData(oldp+717,((0xfU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[1U] 
                                                >> 2U))),4);
            tracep->chgCData(oldp+718,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT
                                       [(0xfU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_pc 
                                                 >> 2U))]),6);
            tracep->chgCData(oldp+719,((0xfU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_pc 
                                                >> 2U))),4);
            tracep->chgBit(oldp+720,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_jump_judge__DOT__jr));
            tracep->chgBit(oldp+721,((1U & (~ (IData)(
                                                      (0U 
                                                       != 
                                                       (0x1fU 
                                                        & (1U 
                                                           ^ 
                                                           ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                             << 5U) 
                                                            | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                               >> 0x1bU))))))))));
            tracep->chgIData(oldp+722,(((0xf0000000U 
                                         & ((IData)(4U) 
                                            + vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[1U])) 
                                        | (0xffffffcU 
                                           & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                              << 2U)))),32);
            tracep->chgBit(oldp+723,((1U & ((vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                             & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs) 
                                            >> 0xeU))));
            tracep->chgBit(oldp+724,((1U & ((vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                             & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs) 
                                            >> 1U))));
            tracep->chgBit(oldp+725,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                            & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs))));
            tracep->chgBit(oldp+726,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                            >> 0x11U))));
            tracep->chgBit(oldp+727,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                            >> 0x10U))));
            tracep->chgBit(oldp+728,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                            >> 7U))));
            tracep->chgBit(oldp+729,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                            >> 8U))));
            tracep->chgBit(oldp+730,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                            >> 9U))));
            tracep->chgBit(oldp+731,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                            >> 0xaU))));
            tracep->chgBit(oldp+732,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                            >> 5U))));
            tracep->chgBit(oldp+733,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                            >> 5U))));
            tracep->chgBit(oldp+734,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                            >> 6U))));
            tracep->chgBit(oldp+735,((((vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                        >> 0xdU) & 
                                       (((vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                          >> 0x11U) 
                                         & ((0x1fU 
                                             & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                >> 0x15U)) 
                                            == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_reg_waddr))) 
                                        | ((vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                            >> 0x10U) 
                                           & ((0x1fU 
                                               & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                  >> 0x10U)) 
                                              == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_reg_waddr))))) 
                                      | ((vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                          >> 0xdU) 
                                         & (((vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                              >> 0x11U) 
                                             & ((0x1fU 
                                                 & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                    >> 0x15U)) 
                                                == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_reg_waddr))) 
                                            | ((vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                                >> 0x10U) 
                                               & ((0x1fU 
                                                   & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                      >> 0x10U)) 
                                                  == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_reg_waddr))))))));
            tracep->chgBit(oldp+736,(((0U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__data_count)) 
                                      | (1U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__data_count)))));
            tracep->chgBit(oldp+737,((1U & ((((vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                               & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs) 
                                              >> 0xeU) 
                                             | ((vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                                 & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs) 
                                                >> 1U)) 
                                            | (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                               & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs)))));
            tracep->chgBit(oldp+738,(((vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                       >> 0xfU) & (
                                                   ((vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                                     >> 0x11U) 
                                                    & ((0x1fU 
                                                        & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                           >> 0x15U)) 
                                                       == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_reg_waddr))) 
                                                   | ((vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                                       >> 0x10U) 
                                                      & ((0x1fU 
                                                          & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                             >> 0x10U)) 
                                                         == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_reg_waddr)))))));
            tracep->chgBit(oldp+739,((1U & ((vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                             >> 7U) 
                                            & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                               >> 8U)))));
            tracep->chgBit(oldp+740,((1U & ((vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                             >> 9U) 
                                            & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                               >> 0xaU)))));
            tracep->chgBit(oldp+741,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_issue_ctrl__DOT__data_conflict));
            tracep->chgBit(oldp+742,(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_forward_top__alu_wen1));
            tracep->chgBit(oldp+743,(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_forward_top__alu_wen2));
            tracep->chgBit(oldp+744,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                            >> 7U))));
            tracep->chgBit(oldp+745,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                            >> 1U))));
            tracep->chgBit(oldp+746,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)));
            tracep->chgCData(oldp+747,((0xffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                                 >> 0x13U))),8);
            tracep->chgBit(oldp+748,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                            >> 7U))));
            tracep->chgBit(oldp+749,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                            >> 1U))));
            tracep->chgBit(oldp+750,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)));
            tracep->chgCData(oldp+751,((0xffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                                 >> 0x13U))),8);
            tracep->chgIData(oldp+752,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_a),32);
            tracep->chgIData(oldp+753,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_b),32);
            tracep->chgIData(oldp+754,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_a),32);
            tracep->chgIData(oldp+755,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_b),32);
            tracep->chgBit(oldp+756,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_ready));
            tracep->chgBit(oldp+757,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_ready));
            tracep->chgQData(oldp+758,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_hilo_reg__DOT__hilo_reg),64);
            tracep->chgQData(oldp+760,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_result),64);
            tracep->chgBit(oldp+762,((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_a 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+763,((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_b 
                                      >> 0x1fU)));
            tracep->chgBit(oldp+764,(((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_a 
                                       ^ vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_b) 
                                      >> 0x1fU)));
            tracep->chgIData(oldp+765,(((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_a 
                                         >> 0x1fU) ? 
                                        (- vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_a)
                                         : vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_a)),32);
            tracep->chgIData(oldp+766,(((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_b 
                                         >> 0x1fU) ? 
                                        (- vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_b)
                                         : vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_b)),32);
            tracep->chgIData(oldp+767,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__part_0),32);
            tracep->chgIData(oldp+768,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__part_1),32);
            tracep->chgIData(oldp+769,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__part_2),32);
            tracep->chgIData(oldp+770,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__part_3),32);
            tracep->chgQData(oldp+771,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__mid_result),64);
            tracep->chgQData(oldp+773,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__div_temp),33);
            tracep->chgCData(oldp+775,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__state),2);
            tracep->chgCData(oldp+776,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__cnt),6);
            tracep->chgWData(oldp+777,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend),65);
            tracep->chgIData(oldp+780,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__divisor),32);
            tracep->chgBit(oldp+781,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__sign1));
            tracep->chgBit(oldp+782,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__sign2));
            tracep->chgBit(oldp+783,((0U != vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except_temp)));
            tracep->chgBit(oldp+784,((0U != vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except_temp)));
            tracep->chgBit(oldp+785,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                            >> 0xeU))));
            tracep->chgBit(oldp+786,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                            >> 0xcU))));
            tracep->chgBit(oldp+787,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                            >> 0xbU))));
            tracep->chgBit(oldp+788,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                            >> 0xeU))));
            tracep->chgBit(oldp+789,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                            >> 0xcU))));
            tracep->chgBit(oldp+790,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                            >> 0xbU))));
            tracep->chgBit(oldp+791,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__master_except));
            tracep->chgBit(oldp+792,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                                            >> 0x10U))));
            tracep->chgBit(oldp+793,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                                            >> 0xfU))));
            tracep->chgBit(oldp+794,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                                            >> 0xeU))));
            tracep->chgBit(oldp+795,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                                            >> 0xdU))));
            tracep->chgBit(oldp+796,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                                            >> 0xcU))));
            tracep->chgBit(oldp+797,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                                            >> 0xbU))));
            tracep->chgBit(oldp+798,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                                            >> 0xaU))));
            tracep->chgBit(oldp+799,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                                            >> 9U))));
            tracep->chgBit(oldp+800,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                                            >> 8U))));
            tracep->chgBit(oldp+801,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                                            >> 7U))));
            tracep->chgBit(oldp+802,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                                            >> 6U))));
            tracep->chgBit(oldp+803,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                                            >> 5U))));
            tracep->chgBit(oldp+804,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                                            >> 4U))));
            tracep->chgBit(oldp+805,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                                            >> 3U))));
            tracep->chgBit(oldp+806,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                                            >> 2U))));
            tracep->chgBit(oldp+807,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                                            >> 1U))));
            tracep->chgBit(oldp+808,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except)));
            tracep->chgIData(oldp+809,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except_pc),32);
            tracep->chgBit(oldp+810,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except_bd));
            tracep->chgBit(oldp+811,((IData)((0U != 
                                              (0x18000U 
                                               & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except)))));
            tracep->chgIData(oldp+812,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__badva_in),32);
            tracep->chgBit(oldp+813,((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__index_reg 
                                      >> 0x1fU)));
            tracep->chgIData(oldp+814,((0xfffffffU 
                                        & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__index_reg 
                                           >> 3U))),28);
            tracep->chgCData(oldp+815,((7U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__index_reg)),3);
            tracep->chgCData(oldp+816,((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg 
                                        >> 0x1aU)),6);
            tracep->chgIData(oldp+817,((0xfffffU & 
                                        (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg 
                                         >> 6U))),20);
            tracep->chgCData(oldp+818,((7U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg 
                                              >> 3U))),3);
            tracep->chgBit(oldp+819,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg 
                                            >> 2U))));
            tracep->chgBit(oldp+820,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg 
                                            >> 1U))));
            tracep->chgBit(oldp+821,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg)));
            tracep->chgCData(oldp+822,((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
                                        >> 0x1aU)),6);
            tracep->chgIData(oldp+823,((0xfffffU & 
                                        (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
                                         >> 6U))),20);
            tracep->chgCData(oldp+824,((7U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
                                              >> 3U))),3);
            tracep->chgBit(oldp+825,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
                                            >> 2U))));
            tracep->chgBit(oldp+826,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
                                            >> 1U))));
            tracep->chgBit(oldp+827,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg)));
            tracep->chgSData(oldp+828,((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__context_reg 
                                        >> 0x17U)),9);
            tracep->chgIData(oldp+829,((0x7ffffU & 
                                        (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__context_reg 
                                         >> 4U))),19);
            tracep->chgCData(oldp+830,((0xfU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__context_reg)),4);
            tracep->chgIData(oldp+831,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__wired_reg),32);
            tracep->chgIData(oldp+832,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__badva_reg),32);
            tracep->chgIData(oldp+833,((IData)((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__count_reg 
                                                >> 1U))),32);
            tracep->chgBit(oldp+834,((1U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__count_reg))));
            tracep->chgIData(oldp+835,((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg 
                                        >> 0xdU)),19);
            tracep->chgCData(oldp+836,((0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg 
                                                 >> 8U))),5);
            tracep->chgCData(oldp+837,((0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg)),8);
            tracep->chgIData(oldp+838,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__compare_reg),32);
            tracep->chgCData(oldp+839,((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg 
                                        >> 0x1dU)),3);
            tracep->chgBit(oldp+840,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg 
                                            >> 0x1cU))));
            tracep->chgCData(oldp+841,((0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg 
                                                 >> 0x17U))),5);
            tracep->chgBit(oldp+842,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg 
                                            >> 0x16U))));
            tracep->chgCData(oldp+843,((0x3fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg 
                                                 >> 0x10U))),6);
            tracep->chgCData(oldp+844,((0xffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+845,((7U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg 
                                              >> 5U))),3);
            tracep->chgBit(oldp+846,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg 
                                            >> 4U))));
            tracep->chgBit(oldp+847,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg 
                                            >> 3U))));
            tracep->chgBit(oldp+848,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg 
                                            >> 2U))));
            tracep->chgBit(oldp+849,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg 
                                            >> 1U))));
            tracep->chgBit(oldp+850,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg)));
            tracep->chgBit(oldp+851,((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg 
                                      >> 0x1fU)));
            tracep->chgCData(oldp+852,((0x7fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg 
                                                 >> 0x18U))),7);
            tracep->chgBit(oldp+853,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg 
                                            >> 0x17U))));
            tracep->chgCData(oldp+854,((0x7fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg 
                                                 >> 0x10U))),7);
            tracep->chgCData(oldp+855,((0xffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg 
                                                 >> 8U))),8);
            tracep->chgBit(oldp+856,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg 
                                            >> 7U))));
            tracep->chgCData(oldp+857,((0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg 
                                                 >> 2U))),5);
            tracep->chgCData(oldp+858,((3U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg)),2);
            tracep->chgIData(oldp+859,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__epc_reg),32);
            tracep->chgIData(oldp+860,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__ebase_reg),32);
            tracep->chgIData(oldp+861,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__taglo_reg),32);
            tracep->chgIData(oldp+862,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__taghi_reg),32);
            tracep->chgIData(oldp+863,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__errorepc_reg),32);
            tracep->chgBit(oldp+864,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [0U][2U] 
                                            >> 9U))));
            tracep->chgBit(oldp+865,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [0U][2U] 
                                            >> 8U))));
            tracep->chgBit(oldp+866,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [0U][2U] 
                                            >> 7U))));
            tracep->chgBit(oldp+867,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [0U][2U] 
                                            >> 6U))));
            tracep->chgBit(oldp+868,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [0U][2U] 
                                            >> 5U))));
            tracep->chgBit(oldp+869,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [0U][2U] 
                                            >> 4U))));
            tracep->chgBit(oldp+870,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [0U][2U] 
                                            >> 3U))));
            tracep->chgIData(oldp+871,((0xfffffU & 
                                        ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                          [0U][2U] 
                                          << 0x11U) 
                                         | (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [0U][1U] 
                                            >> 0xfU)))),20);
            tracep->chgIData(oldp+872,((0xfffffU & 
                                        ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                          [0U][1U] 
                                          << 5U) | 
                                         (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                          [0U][0U] 
                                          >> 0x1bU)))),20);
            tracep->chgIData(oldp+873,((0x7ffffU & 
                                        (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [0U][0U] >> 8U))),19);
            tracep->chgCData(oldp+874,((0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                        [0U][0U])),8);
            tracep->chgBit(oldp+875,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [1U][2U] 
                                            >> 9U))));
            tracep->chgBit(oldp+876,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [1U][2U] 
                                            >> 8U))));
            tracep->chgBit(oldp+877,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [1U][2U] 
                                            >> 7U))));
            tracep->chgBit(oldp+878,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [1U][2U] 
                                            >> 6U))));
            tracep->chgBit(oldp+879,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [1U][2U] 
                                            >> 5U))));
            tracep->chgBit(oldp+880,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [1U][2U] 
                                            >> 4U))));
            tracep->chgBit(oldp+881,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [1U][2U] 
                                            >> 3U))));
            tracep->chgIData(oldp+882,((0xfffffU & 
                                        ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                          [1U][2U] 
                                          << 0x11U) 
                                         | (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [1U][1U] 
                                            >> 0xfU)))),20);
            tracep->chgIData(oldp+883,((0xfffffU & 
                                        ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                          [1U][1U] 
                                          << 5U) | 
                                         (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                          [1U][0U] 
                                          >> 0x1bU)))),20);
            tracep->chgIData(oldp+884,((0x7ffffU & 
                                        (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [1U][0U] >> 8U))),19);
            tracep->chgCData(oldp+885,((0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                        [1U][0U])),8);
            tracep->chgBit(oldp+886,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [2U][2U] 
                                            >> 9U))));
            tracep->chgBit(oldp+887,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [2U][2U] 
                                            >> 8U))));
            tracep->chgBit(oldp+888,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [2U][2U] 
                                            >> 7U))));
            tracep->chgBit(oldp+889,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [2U][2U] 
                                            >> 6U))));
            tracep->chgBit(oldp+890,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [2U][2U] 
                                            >> 5U))));
            tracep->chgBit(oldp+891,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [2U][2U] 
                                            >> 4U))));
            tracep->chgBit(oldp+892,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [2U][2U] 
                                            >> 3U))));
            tracep->chgIData(oldp+893,((0xfffffU & 
                                        ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                          [2U][2U] 
                                          << 0x11U) 
                                         | (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [2U][1U] 
                                            >> 0xfU)))),20);
            tracep->chgIData(oldp+894,((0xfffffU & 
                                        ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                          [2U][1U] 
                                          << 5U) | 
                                         (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                          [2U][0U] 
                                          >> 0x1bU)))),20);
            tracep->chgIData(oldp+895,((0x7ffffU & 
                                        (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [2U][0U] >> 8U))),19);
            tracep->chgCData(oldp+896,((0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                        [2U][0U])),8);
            tracep->chgBit(oldp+897,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [3U][2U] 
                                            >> 9U))));
            tracep->chgBit(oldp+898,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [3U][2U] 
                                            >> 8U))));
            tracep->chgBit(oldp+899,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [3U][2U] 
                                            >> 7U))));
            tracep->chgBit(oldp+900,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [3U][2U] 
                                            >> 6U))));
            tracep->chgBit(oldp+901,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [3U][2U] 
                                            >> 5U))));
            tracep->chgBit(oldp+902,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [3U][2U] 
                                            >> 4U))));
            tracep->chgBit(oldp+903,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [3U][2U] 
                                            >> 3U))));
            tracep->chgIData(oldp+904,((0xfffffU & 
                                        ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                          [3U][2U] 
                                          << 0x11U) 
                                         | (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [3U][1U] 
                                            >> 0xfU)))),20);
            tracep->chgIData(oldp+905,((0xfffffU & 
                                        ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                          [3U][1U] 
                                          << 5U) | 
                                         (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                          [3U][0U] 
                                          >> 0x1bU)))),20);
            tracep->chgIData(oldp+906,((0x7ffffU & 
                                        (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [3U][0U] >> 8U))),19);
            tracep->chgCData(oldp+907,((0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                        [3U][0U])),8);
            tracep->chgBit(oldp+908,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [4U][2U] 
                                            >> 9U))));
            tracep->chgBit(oldp+909,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [4U][2U] 
                                            >> 8U))));
            tracep->chgBit(oldp+910,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [4U][2U] 
                                            >> 7U))));
            tracep->chgBit(oldp+911,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [4U][2U] 
                                            >> 6U))));
            tracep->chgBit(oldp+912,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [4U][2U] 
                                            >> 5U))));
            tracep->chgBit(oldp+913,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [4U][2U] 
                                            >> 4U))));
            tracep->chgBit(oldp+914,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [4U][2U] 
                                            >> 3U))));
            tracep->chgIData(oldp+915,((0xfffffU & 
                                        ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                          [4U][2U] 
                                          << 0x11U) 
                                         | (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [4U][1U] 
                                            >> 0xfU)))),20);
            tracep->chgIData(oldp+916,((0xfffffU & 
                                        ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                          [4U][1U] 
                                          << 5U) | 
                                         (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                          [4U][0U] 
                                          >> 0x1bU)))),20);
            tracep->chgIData(oldp+917,((0x7ffffU & 
                                        (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [4U][0U] >> 8U))),19);
            tracep->chgCData(oldp+918,((0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                        [4U][0U])),8);
            tracep->chgBit(oldp+919,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [5U][2U] 
                                            >> 9U))));
            tracep->chgBit(oldp+920,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [5U][2U] 
                                            >> 8U))));
            tracep->chgBit(oldp+921,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [5U][2U] 
                                            >> 7U))));
            tracep->chgBit(oldp+922,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [5U][2U] 
                                            >> 6U))));
            tracep->chgBit(oldp+923,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [5U][2U] 
                                            >> 5U))));
            tracep->chgBit(oldp+924,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [5U][2U] 
                                            >> 4U))));
            tracep->chgBit(oldp+925,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [5U][2U] 
                                            >> 3U))));
            tracep->chgIData(oldp+926,((0xfffffU & 
                                        ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                          [5U][2U] 
                                          << 0x11U) 
                                         | (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [5U][1U] 
                                            >> 0xfU)))),20);
            tracep->chgIData(oldp+927,((0xfffffU & 
                                        ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                          [5U][1U] 
                                          << 5U) | 
                                         (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                          [5U][0U] 
                                          >> 0x1bU)))),20);
            tracep->chgIData(oldp+928,((0x7ffffU & 
                                        (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [5U][0U] >> 8U))),19);
            tracep->chgCData(oldp+929,((0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                        [5U][0U])),8);
            tracep->chgBit(oldp+930,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [6U][2U] 
                                            >> 9U))));
            tracep->chgBit(oldp+931,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [6U][2U] 
                                            >> 8U))));
            tracep->chgBit(oldp+932,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [6U][2U] 
                                            >> 7U))));
            tracep->chgBit(oldp+933,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [6U][2U] 
                                            >> 6U))));
            tracep->chgBit(oldp+934,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [6U][2U] 
                                            >> 5U))));
            tracep->chgBit(oldp+935,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [6U][2U] 
                                            >> 4U))));
            tracep->chgBit(oldp+936,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [6U][2U] 
                                            >> 3U))));
            tracep->chgIData(oldp+937,((0xfffffU & 
                                        ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                          [6U][2U] 
                                          << 0x11U) 
                                         | (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [6U][1U] 
                                            >> 0xfU)))),20);
            tracep->chgIData(oldp+938,((0xfffffU & 
                                        ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                          [6U][1U] 
                                          << 5U) | 
                                         (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                          [6U][0U] 
                                          >> 0x1bU)))),20);
            tracep->chgIData(oldp+939,((0x7ffffU & 
                                        (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [6U][0U] >> 8U))),19);
            tracep->chgCData(oldp+940,((0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                        [6U][0U])),8);
            tracep->chgBit(oldp+941,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [7U][2U] 
                                            >> 9U))));
            tracep->chgBit(oldp+942,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [7U][2U] 
                                            >> 8U))));
            tracep->chgBit(oldp+943,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [7U][2U] 
                                            >> 7U))));
            tracep->chgBit(oldp+944,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [7U][2U] 
                                            >> 6U))));
            tracep->chgBit(oldp+945,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [7U][2U] 
                                            >> 5U))));
            tracep->chgBit(oldp+946,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [7U][2U] 
                                            >> 4U))));
            tracep->chgBit(oldp+947,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [7U][2U] 
                                            >> 3U))));
            tracep->chgIData(oldp+948,((0xfffffU & 
                                        ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                          [7U][2U] 
                                          << 0x11U) 
                                         | (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                            [7U][1U] 
                                            >> 0xfU)))),20);
            tracep->chgIData(oldp+949,((0xfffffU & 
                                        ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                          [7U][1U] 
                                          << 5U) | 
                                         (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                          [7U][0U] 
                                          >> 0x1bU)))),20);
            tracep->chgIData(oldp+950,((0x7ffffU & 
                                        (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [7U][0U] >> 8U))),19);
            tracep->chgCData(oldp+951,((0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                        [7U][0U])),8);
            tracep->chgIData(oldp+952,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__trap_base),32);
            tracep->chgBit(oldp+953,((IData)((0xc000U 
                                              == (0xc000U 
                                                  & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except)))));
            tracep->chgBit(oldp+954,((1U & (((~ (IData)(
                                                        (0U 
                                                         != 
                                                         (3U 
                                                          & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                                                             >> 0xfU))))) 
                                             & (IData)(
                                                       (0U 
                                                        != 
                                                        (0x18U 
                                                         & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except)))) 
                                            & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                                               >> 1U)))));
            tracep->chgBit(oldp+955,((1U & ((IData)(
                                                    (0xc000U 
                                                     == 
                                                     (0xc000U 
                                                      & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except))) 
                                            | (((~ (IData)(
                                                           (0U 
                                                            != 
                                                            (3U 
                                                             & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                                                                >> 0xfU))))) 
                                                & (IData)(
                                                          (0U 
                                                           != 
                                                           (0x18U 
                                                            & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except)))) 
                                               & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                                                  >> 1U))))));
            tracep->chgCData(oldp+956,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched[0]),8);
            tracep->chgCData(oldp+957,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched[1]),8);
            tracep->chgCData(oldp+958,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched[2]),8);
            tracep->chgIData(oldp+959,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_find_vpn2[0]),19);
            tracep->chgIData(oldp+960,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_find_vpn2[1]),19);
            tracep->chgIData(oldp+961,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_find_vpn2[2]),19);
            tracep->chgCData(oldp+962,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched_index[0]),3);
            tracep->chgCData(oldp+963,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched_index[1]),3);
            tracep->chgCData(oldp+964,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched_index[2]),3);
            tracep->chgCData(oldp+965,((vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                        >> 0x1aU)),6);
            tracep->chgIData(oldp+966,((0xfffffU & 
                                        (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                         >> 6U))),20);
            tracep->chgCData(oldp+967,((7U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                              >> 3U))),3);
            tracep->chgBit(oldp+968,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                            >> 2U))));
            tracep->chgBit(oldp+969,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                            >> 1U))));
            tracep->chgBit(oldp+970,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value)));
            tracep->chgSData(oldp+971,((vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                        >> 0x17U)),9);
            tracep->chgIData(oldp+972,((0x7ffffU & 
                                        (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                         >> 4U))),19);
            tracep->chgCData(oldp+973,((0xfU & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value)),4);
            tracep->chgIData(oldp+974,((vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                        >> 0xdU)),19);
            tracep->chgCData(oldp+975,((0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                                 >> 8U))),5);
            tracep->chgCData(oldp+976,((0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value)),8);
            tracep->chgCData(oldp+977,((vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                        >> 0x1dU)),3);
            tracep->chgBit(oldp+978,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                            >> 0x1cU))));
            tracep->chgCData(oldp+979,((0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                                 >> 0x17U))),5);
            tracep->chgBit(oldp+980,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                            >> 0x16U))));
            tracep->chgCData(oldp+981,((0x3fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                                 >> 0x10U))),6);
            tracep->chgCData(oldp+982,((0xffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                                 >> 8U))),8);
            tracep->chgCData(oldp+983,((7U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                              >> 5U))),3);
            tracep->chgBit(oldp+984,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                            >> 4U))));
            tracep->chgBit(oldp+985,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                            >> 3U))));
            tracep->chgBit(oldp+986,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                            >> 2U))));
            tracep->chgBit(oldp+987,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                            >> 1U))));
            tracep->chgBit(oldp+988,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value)));
            tracep->chgBit(oldp+989,((vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                      >> 0x1fU)));
            tracep->chgCData(oldp+990,((0x7fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                                 >> 0x18U))),7);
            tracep->chgBit(oldp+991,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                            >> 0x17U))));
            tracep->chgCData(oldp+992,((0x7fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                                 >> 0x10U))),7);
            tracep->chgCData(oldp+993,((0xffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                                 >> 8U))),8);
            tracep->chgBit(oldp+994,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                            >> 7U))));
            tracep->chgCData(oldp+995,((0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                                 >> 2U))),5);
            tracep->chgCData(oldp+996,((3U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value)),2);
            tracep->chgIData(oldp+997,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__icache_status),32);
            tracep->chgIData(oldp+998,((0xfffffU & (IData)(
                                                           (vlSelf->mycpu_top__DOT__i_cache_inst__DOT__itlb 
                                                            >> 0x16U)))),20);
            tracep->chgIData(oldp+999,((0xfffffU & (IData)(
                                                           (vlSelf->mycpu_top__DOT__i_cache_inst__DOT__itlb 
                                                            >> 2U)))),20);
            tracep->chgBit(oldp+1000,((1U & (IData)(
                                                    (vlSelf->mycpu_top__DOT__i_cache_inst__DOT__itlb 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1001,((1U & (IData)(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__itlb))));
            tracep->chgBit(oldp+1002,((2U == (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg 
                                              >> 0x1eU))));
            tracep->chgBit(oldp+1003,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__uncached));
            tracep->chgIData(oldp+1004,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__inst_tag),20);
            tracep->chgIData(oldp+1005,((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg 
                                         >> 0xcU)),20);
            tracep->chgIData(oldp+1006,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__inst_pa),32);
            tracep->chgBit(oldp+1007,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__translation_ok));
            tracep->chgCData(oldp+1008,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__replace_line_addr),6);
            tracep->chgBit(oldp+1009,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__bram_addr_choose));
            tracep->chgQData(oldp+1010,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_data[0]),64);
            tracep->chgQData(oldp+1012,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_data[1]),64);
            tracep->chgIData(oldp+1014,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_tag
                                        [0U]),20);
            tracep->chgIData(oldp+1015,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_tag
                                        [1U]),20);
            tracep->chgCData(oldp+1016,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__data_wea[0]),8);
            tracep->chgCData(oldp+1017,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__data_wea[1]),8);
            tracep->chgBit(oldp+1018,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__tag_wea[0]));
            tracep->chgBit(oldp+1019,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__tag_wea[1]));
            tracep->chgIData(oldp+1020,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__tag_ram_wdata),20);
            tracep->chgCData(oldp+1021,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__tag_compare_valid),2);
            tracep->chgBit(oldp+1022,((0U != (IData)(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__tag_compare_valid))));
            tracep->chgBit(oldp+1023,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_hit_available));
            tracep->chgBit(oldp+1024,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_inst_ok1));
            tracep->chgBit(oldp+1025,((1U & ((IData)(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__tag_compare_valid) 
                                             >> 1U))));
            tracep->chgCData(oldp+1026,((0x3fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg 
                                                  >> 6U))),6);
            tracep->chgIData(oldp+1027,(((4U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg)
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
                                                        >> 1U))]))),32);
            tracep->chgIData(oldp+1028,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_inst1),32);
            tracep->chgIData(oldp+1029,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__saved_inst0),32);
            tracep->chgIData(oldp+1030,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__saved_inst1),32);
            tracep->chgBit(oldp+1031,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__saved_inst_ok0));
            tracep->chgBit(oldp+1032,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__saved_inst_ok1));
            tracep->chgCData(oldp+1033,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__axi_cnt),5);
            tracep->chgCData(oldp+1034,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__data_wea
                                        [0U]),8);
            tracep->chgSData(oldp+1035,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__i_data__addra),9);
            tracep->chgQData(oldp+1036,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellout__genblk1__BRA__0__KET____DOT__i_data__doutb),64);
            tracep->chgBit(oldp+1038,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__tag_wea
                                      [0U]));
            tracep->chgIData(oldp+1039,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__tag_ram_wdata),20);
            tracep->chgIData(oldp+1040,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellout__genblk1__BRA__0__KET____DOT__i_tag__doutb),20);
            tracep->chgCData(oldp+1041,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__data_wea
                                        [1U]),8);
            tracep->chgSData(oldp+1042,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__i_data__addra),9);
            tracep->chgQData(oldp+1043,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellout__genblk1__BRA__1__KET____DOT__i_data__doutb),64);
            tracep->chgBit(oldp+1045,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__tag_wea
                                      [1U]));
            tracep->chgIData(oldp+1046,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellout__genblk1__BRA__1__KET____DOT__i_tag__doutb),20);
            tracep->chgBit(oldp+1047,((0U != (IData)(vlSelf->mycpu_top__DOT__data_wen))));
            tracep->chgIData(oldp+1048,((0xfffffU & (IData)(
                                                            (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dtlb 
                                                             >> 0x17U)))),20);
            tracep->chgIData(oldp+1049,((0xfffffU & (IData)(
                                                            (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dtlb 
                                                             >> 3U)))),20);
            tracep->chgBit(oldp+1050,((1U & (IData)(
                                                    (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dtlb 
                                                     >> 2U)))));
            tracep->chgBit(oldp+1051,((1U & (IData)(
                                                    (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dtlb 
                                                     >> 1U)))));
            tracep->chgBit(oldp+1052,((1U & (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dtlb))));
            tracep->chgBit(oldp+1053,((2U == (vlSelf->mycpu_top__DOT__data_addr 
                                              >> 0x1eU))));
            tracep->chgBit(oldp+1054,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__M_mem_uncached));
            tracep->chgIData(oldp+1055,((0xfffffU & 
                                         ((2U == (vlSelf->mycpu_top__DOT__data_addr 
                                                  >> 0x1eU))
                                           ? (0x1ffffU 
                                              & (vlSelf->mycpu_top__DOT__data_addr 
                                                 >> 0xcU))
                                           : (IData)(
                                                     (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dtlb 
                                                      >> 3U))))),20);
            tracep->chgIData(oldp+1056,((vlSelf->mycpu_top__DOT__data_addr 
                                         >> 0xcU)),20);
            tracep->chgIData(oldp+1057,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__M_mem_pa),32);
            tracep->chgBit(oldp+1058,((((0xfffffU & (IData)(
                                                            (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dtlb 
                                                             >> 0x17U))) 
                                        == (vlSelf->mycpu_top__DOT__data_addr 
                                            >> 0xcU)) 
                                       & (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dtlb))));
            tracep->chgBit(oldp+1059,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__translation_ok));
            tracep->chgIData(oldp+1060,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dcache_status),32);
            tracep->chgIData(oldp+1061,(((vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer
                                          [0U][2U] 
                                          << 0x1aU) 
                                         | (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer
                                            [0U][1U] 
                                            >> 6U))),32);
            tracep->chgCData(oldp+1062,((3U & (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer
                                               [0U][1U] 
                                               >> 4U))),2);
            tracep->chgCData(oldp+1063,((0xfU & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer
                                         [0U][1U])),4);
            tracep->chgIData(oldp+1064,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer
                                        [0U][0U]),32);
            tracep->chgIData(oldp+1065,(((vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer
                                          [1U][2U] 
                                          << 0x1aU) 
                                         | (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer
                                            [1U][1U] 
                                            >> 6U))),32);
            tracep->chgCData(oldp+1066,((3U & (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer
                                               [1U][1U] 
                                               >> 4U))),2);
            tracep->chgCData(oldp+1067,((0xfU & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer
                                         [1U][1U])),4);
            tracep->chgIData(oldp+1068,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer
                                        [1U][0U]),32);
            tracep->chgIData(oldp+1069,(((vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer
                                          [2U][2U] 
                                          << 0x1aU) 
                                         | (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer
                                            [2U][1U] 
                                            >> 6U))),32);
            tracep->chgCData(oldp+1070,((3U & (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer
                                               [2U][1U] 
                                               >> 4U))),2);
            tracep->chgCData(oldp+1071,((0xfU & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer
                                         [2U][1U])),4);
            tracep->chgIData(oldp+1072,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer
                                        [2U][0U]),32);
            tracep->chgIData(oldp+1073,(((vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer
                                          [3U][2U] 
                                          << 0x1aU) 
                                         | (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer
                                            [3U][1U] 
                                            >> 6U))),32);
            tracep->chgCData(oldp+1074,((3U & (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer
                                               [3U][1U] 
                                               >> 4U))),2);
            tracep->chgCData(oldp+1075,((0xfU & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer
                                         [3U][1U])),4);
            tracep->chgIData(oldp+1076,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer
                                        [3U][0U]),32);
            tracep->chgCData(oldp+1077,((3U & ((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_ctrl) 
                                               >> 3U))),2);
            tracep->chgCData(oldp+1078,((3U & ((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_ctrl) 
                                               >> 1U))),2);
            tracep->chgBit(oldp+1079,((1U & (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_ctrl))));
            tracep->chgBit(oldp+1080,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__current_mmio_write_saved));
            tracep->chgBit(oldp+1081,(((3U & ((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_ctrl) 
                                              >> 3U)) 
                                       != (3U & ((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_ctrl) 
                                                 >> 1U)))));
            tracep->chgBit(oldp+1082,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_busy));
            tracep->chgBit(oldp+1083,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_full));
            tracep->chgCData(oldp+1084,((0x3fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_alu_res 
                                                  >> 6U))),6);
            tracep->chgCData(oldp+1085,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__axi_wcnt),4);
            tracep->chgSData(oldp+1086,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_replace_addr),10);
            tracep->chgSData(oldp+1087,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_read_ready_addr),10);
            tracep->chgSData(oldp+1088,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_replace_write_addr),10);
            tracep->chgCData(oldp+1089,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_replace_cnt),5);
            tracep->chgIData(oldp+1090,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[0]),32);
            tracep->chgIData(oldp+1091,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[1]),32);
            tracep->chgIData(oldp+1092,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[2]),32);
            tracep->chgIData(oldp+1093,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[3]),32);
            tracep->chgIData(oldp+1094,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[4]),32);
            tracep->chgIData(oldp+1095,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[5]),32);
            tracep->chgIData(oldp+1096,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[6]),32);
            tracep->chgIData(oldp+1097,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[7]),32);
            tracep->chgIData(oldp+1098,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[8]),32);
            tracep->chgIData(oldp+1099,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[9]),32);
            tracep->chgIData(oldp+1100,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[10]),32);
            tracep->chgIData(oldp+1101,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[11]),32);
            tracep->chgIData(oldp+1102,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[12]),32);
            tracep->chgIData(oldp+1103,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[13]),32);
            tracep->chgIData(oldp+1104,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[14]),32);
            tracep->chgIData(oldp+1105,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[15]),32);
            tracep->chgBit(oldp+1106,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_use_replace_addr));
            tracep->chgBit(oldp+1107,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_data_valid));
            tracep->chgBit(oldp+1108,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__fence_working));
            tracep->chgBit(oldp+1109,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__replace_working));
            tracep->chgBit(oldp+1110,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__ar_handshake));
            tracep->chgBit(oldp+1111,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__aw_handshake));
            tracep->chgBit(oldp+1112,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__replace_writeback));
            tracep->chgBit(oldp+1113,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__fence_way));
            tracep->chgBit(oldp+1114,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__tag_wea[0]));
            tracep->chgBit(oldp+1115,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__tag_wea[1]));
            tracep->chgCData(oldp+1116,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_replace_wea[0]),4);
            tracep->chgCData(oldp+1117,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_replace_wea[1]),4);
            tracep->chgCData(oldp+1118,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_wea[0]),4);
            tracep->chgCData(oldp+1119,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_wea[1]),4);
            tracep->chgIData(oldp+1120,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__tag_ram_wdata),20);
            tracep->chgIData(oldp+1121,((vlSelf->mycpu_top__DOT__d_cache_inst__DOT__M_mem_pa 
                                         >> 0xcU)),20);
            tracep->chgBit(oldp+1122,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_addr_choose));
            tracep->chgSData(oldp+1123,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_word_addr),10);
            tracep->chgCData(oldp+1124,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_line_addr),6);
            tracep->chgSData(oldp+1125,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_write_addr),10);
            tracep->chgBit(oldp+1126,((4U == vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dcache_status)));
            tracep->chgIData(oldp+1127,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__cache_data[0]),32);
            tracep->chgIData(oldp+1128,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__cache_data[1]),32);
            tracep->chgIData(oldp+1129,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__cache_tag
                                        [0U]),20);
            tracep->chgIData(oldp+1130,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__cache_tag
                                        [1U]),20);
            tracep->chgCData(oldp+1131,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__tag_compare_valid),2);
            tracep->chgBit(oldp+1132,((0U != (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__tag_compare_valid))));
            tracep->chgBit(oldp+1133,(((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__M_mem_uncached) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != (IData)(vlSelf->mycpu_top__DOT__data_wen)))))));
            tracep->chgBit(oldp+1134,((((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__M_mem_uncached) 
                                        & (0U != (IData)(vlSelf->mycpu_top__DOT__data_wen))) 
                                       & (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_full))));
            tracep->chgBit(oldp+1135,((1U & ((~ (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__M_mem_uncached)) 
                                             & (~ (IData)(
                                                          (0U 
                                                           != (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__tag_compare_valid))))))));
            tracep->chgBit(oldp+1136,((1U & (~ (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__translation_ok)))));
            tracep->chgBit(oldp+1137,((1U & ((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__tag_compare_valid) 
                                             >> 1U))));
            tracep->chgCData(oldp+1138,((0x3fU & (vlSelf->mycpu_top__DOT__data_addr 
                                                  >> 6U))),6);
            tracep->chgIData(oldp+1139,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__saved_rdata),32);
            tracep->chgSData(oldp+1140,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__last_line_addr),10);
            tracep->chgIData(oldp+1141,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__last_wea[0]),32);
            tracep->chgIData(oldp+1142,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__last_wea[1]),32);
            tracep->chgIData(oldp+1143,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__last_wdata),32);
            tracep->chgIData(oldp+1144,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__cache_data_forward[0]),32);
            tracep->chgIData(oldp+1145,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__cache_data_forward[1]),32);
            tracep->chgCData(oldp+1146,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_wea
                                        [0U]),4);
            tracep->chgIData(oldp+1147,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT____Vcellout__genblk1__BRA__0__KET____DOT__d_data__doutb),32);
            tracep->chgBit(oldp+1148,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__tag_wea
                                      [0U]));
            tracep->chgCData(oldp+1149,((0x3fU & ((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_replace_addr) 
                                                  >> 4U))),6);
            tracep->chgIData(oldp+1150,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__tag_ram_wdata),20);
            tracep->chgIData(oldp+1151,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT____Vcellout__genblk1__BRA__0__KET____DOT__d_tag__doutb),20);
            tracep->chgCData(oldp+1152,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_wea
                                        [1U]),4);
            tracep->chgIData(oldp+1153,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT____Vcellout__genblk1__BRA__1__KET____DOT__d_data__doutb),32);
            tracep->chgBit(oldp+1154,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__tag_wea
                                      [1U]));
            tracep->chgIData(oldp+1155,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT____Vcellout__genblk1__BRA__1__KET____DOT__d_tag__doutb),20);
            tracep->chgBit(oldp+1156,(vlSelf->mycpu_top__DOT__u_arbitrater__DOT__ar_sel));
            tracep->chgBit(oldp+1157,(vlSelf->mycpu_top__DOT__u_arbitrater__DOT__ar_sel_lock));
            tracep->chgBit(oldp+1158,(vlSelf->mycpu_top__DOT__u_arbitrater__DOT__ar_sel_lock_val));
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [2U]))) {
            tracep->chgBit(oldp+1159,(((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_ena) 
                                       & ((~ (IData)(
                                                     (0U 
                                                      != 
                                                      (0x1fU 
                                                       & (1U 
                                                          ^ 
                                                          ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                            << 5U) 
                                                           | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                              >> 0x1bU))))))) 
                                          | ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_jump_judge__DOT__jr) 
                                             & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_jump_conflict)))))));
            tracep->chgIData(oldp+1160,(((0U != (0x1fU 
                                                 & (1U 
                                                    ^ 
                                                    ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                      << 5U) 
                                                     | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                        >> 0x1bU)))))
                                          ? vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_rs_value_tmp
                                          : ((0xf0000000U 
                                              & ((IData)(4U) 
                                                 + 
                                                 vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[1U])) 
                                             | (0xffffffcU 
                                                & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                   << 2U))))),32);
            tracep->chgIData(oldp+1161,((((- (IData)((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_pred_take))) 
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
                                                : (
                                                   (0xf0000000U 
                                                    & ((IData)(4U) 
                                                       + 
                                                       vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[1U])) 
                                                   | (0xffffffcU 
                                                      & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                         << 2U))))))),32);
            tracep->chgBit(oldp+1162,(((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_is_bj) 
                                       & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_ena))));
            tracep->chgIData(oldp+1163,(((0U != (0x1fU 
                                                 & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                    >> 0x15U)))
                                          ? (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_regfile__wen2) 
                                              & (~ (IData)(
                                                           (0U 
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
                                                  : 
                                                 vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf
                                                 [(0x1fU 
                                                   & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                      >> 0x15U))]))
                                          : 0U)),32);
            tracep->chgIData(oldp+1164,(((0U != (0x1fU 
                                                 & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                    >> 0x10U)))
                                          ? (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_regfile__wen2) 
                                              & (~ (IData)(
                                                           (0U 
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
                                                  : 
                                                 vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf
                                                 [(0x1fU 
                                                   & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                      >> 0x10U))]))
                                          : 0U)),32);
            tracep->chgIData(oldp+1165,(((0U != (0x1fU 
                                                 & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                    >> 0x10U)))
                                          ? (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_regfile__wen2) 
                                              & (~ (IData)(
                                                           (0U 
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
                                                  : 
                                                 vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf
                                                 [(0x1fU 
                                                   & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                      >> 0x10U))]))
                                          : 0U)),32);
            tracep->chgIData(oldp+1166,((((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_forward_top__alu_wen1) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0x1fU 
                                                         & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_reg_waddr) 
                                                            ^ 
                                                            ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                              << 0xbU) 
                                                             | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                                >> 0x15U))))))))
                                          ? vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_res
                                          : (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_forward_top__alu_wen2) 
                                              & (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x1fU 
                                                             & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_reg_waddr) 
                                                                ^ 
                                                                ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                                  << 0xbU) 
                                                                 | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                                    >> 0x15U))))))))
                                              ? vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_res
                                              : (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_reg_wen) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_reg_waddr) 
                                                                    ^ 
                                                                    ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                                      << 0xbU) 
                                                                     | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                                        >> 0x15U))))))))
                                                  ? vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_reg_wdata
                                                  : 
                                                 (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_reg_wen) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_reg_waddr) 
                                                                     ^ 
                                                                     ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                                       << 0xbU) 
                                                                      | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                                         >> 0x15U))))))))
                                                   ? vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_reg_wdata
                                                   : vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_rs_value_tmp))))),32);
            tracep->chgIData(oldp+1167,((((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_forward_top__alu_wen1) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0x1fU 
                                                         & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_reg_waddr) 
                                                            ^ 
                                                            ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                              << 0xbU) 
                                                             | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                                >> 0x15U))))))))
                                          ? vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_res
                                          : (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_forward_top__alu_wen2) 
                                              & (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x1fU 
                                                             & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_reg_waddr) 
                                                                ^ 
                                                                ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                                  << 0xbU) 
                                                                 | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                                    >> 0x15U))))))))
                                              ? vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_res
                                              : (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_reg_wen) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_reg_waddr) 
                                                                    ^ 
                                                                    ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                                      << 0xbU) 
                                                                     | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                                        >> 0x15U))))))))
                                                  ? vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_reg_wdata
                                                  : 
                                                 (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_reg_wen) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_reg_waddr) 
                                                                     ^ 
                                                                     ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                                       << 0xbU) 
                                                                      | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                                         >> 0x15U))))))))
                                                   ? vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_reg_wdata
                                                   : 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                        >> 0x15U)))
                                                    ? 
                                                   (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_regfile__wen2) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_reg_waddr) 
                                                                       ^ 
                                                                       ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                                         << 0xbU) 
                                                                        | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                                           >> 0x15U))))))))
                                                     ? vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_reg_wdata
                                                     : 
                                                    (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_regfile__wen1) 
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
                                                      : 
                                                     vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf
                                                     [
                                                     (0x1fU 
                                                      & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                         >> 0x15U))]))
                                                    : 0U)))))),32);
            tracep->chgIData(oldp+1168,((((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_forward_top__alu_wen1) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0x1fU 
                                                         & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_reg_waddr) 
                                                            ^ 
                                                            ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                              << 0x10U) 
                                                             | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                                >> 0x10U))))))))
                                          ? vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_res
                                          : (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_forward_top__alu_wen2) 
                                              & (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x1fU 
                                                             & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_reg_waddr) 
                                                                ^ 
                                                                ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                                  << 0x10U) 
                                                                 | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                                    >> 0x10U))))))))
                                              ? vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_res
                                              : (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_reg_wen) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_reg_waddr) 
                                                                    ^ 
                                                                    ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                                      << 0x10U) 
                                                                     | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                                        >> 0x10U))))))))
                                                  ? vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_reg_wdata
                                                  : 
                                                 (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_reg_wen) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_reg_waddr) 
                                                                     ^ 
                                                                     ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                                       << 0x10U) 
                                                                      | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                                         >> 0x10U))))))))
                                                   ? vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_reg_wdata
                                                   : 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                        >> 0x10U)))
                                                    ? 
                                                   (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_regfile__wen2) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_reg_waddr) 
                                                                       ^ 
                                                                       ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                                         << 0x10U) 
                                                                        | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                                           >> 0x10U))))))))
                                                     ? vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_reg_wdata
                                                     : 
                                                    (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_regfile__wen1) 
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
                                                      : 
                                                     vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf
                                                     [
                                                     (0x1fU 
                                                      & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                         >> 0x10U))]))
                                                    : 0U)))))),32);
            tracep->chgIData(oldp+1169,((((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_forward_top__alu_wen1) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != 
                                                        (0x1fU 
                                                         & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_reg_waddr) 
                                                            ^ 
                                                            ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                              << 0x10U) 
                                                             | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                                >> 0x10U))))))))
                                          ? vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_res
                                          : (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_forward_top__alu_wen2) 
                                              & (~ (IData)(
                                                           (0U 
                                                            != 
                                                            (0x1fU 
                                                             & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_reg_waddr) 
                                                                ^ 
                                                                ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                                  << 0x10U) 
                                                                 | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                                    >> 0x10U))))))))
                                              ? vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_res
                                              : (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_reg_wen) 
                                                  & (~ (IData)(
                                                               (0U 
                                                                != 
                                                                (0x1fU 
                                                                 & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_reg_waddr) 
                                                                    ^ 
                                                                    ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                                      << 0x10U) 
                                                                     | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                                        >> 0x10U))))))))
                                                  ? vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_reg_wdata
                                                  : 
                                                 (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_reg_wen) 
                                                   & (~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (0x1fU 
                                                                  & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_reg_waddr) 
                                                                     ^ 
                                                                     ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                                       << 0x10U) 
                                                                      | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                                         >> 0x10U))))))))
                                                   ? vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_reg_wdata
                                                   : 
                                                  ((0U 
                                                    != 
                                                    (0x1fU 
                                                     & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                        >> 0x10U)))
                                                    ? 
                                                   (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_regfile__wen2) 
                                                     & (~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (0x1fU 
                                                                    & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_reg_waddr) 
                                                                       ^ 
                                                                       ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                                         << 0x10U) 
                                                                        | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                                           >> 0x10U))))))))
                                                     ? vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_reg_wdata
                                                     : 
                                                    (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_regfile__wen1) 
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
                                                      : 
                                                     vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf
                                                     [
                                                     (0x1fU 
                                                      & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                         >> 0x10U))]))
                                                    : 0U)))))),32);
            tracep->chgBit(oldp+1170,(((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)
                                        ? (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_start1)
                                        : (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_start2))));
            tracep->chgBit(oldp+1171,((1U & ((((((vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
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
                                             & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_flush))))));
            tracep->chgQData(oldp+1172,((((- (QData)((IData)(
                                                             (1U 
                                                              & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                                                 >> 7U))))) 
                                          & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluB__DOT__temp_aluout_64) 
                                         | ((- (QData)((IData)(
                                                               (1U 
                                                                & (~ 
                                                                   (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                                                    >> 7U)))))) 
                                            & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluA__DOT__temp_aluout_64))),64);
            tracep->chgIData(oldp+1174,((((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_sign) 
                                          & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_a 
                                             >> 0x1fU))
                                          ? ((IData)(1U) 
                                             + (~ vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_a))
                                          : vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_a)),32);
            tracep->chgIData(oldp+1175,((((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_sign) 
                                          & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_b 
                                             >> 0x1fU))
                                          ? ((IData)(1U) 
                                             + (~ vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_b))
                                          : vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_b)),32);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+1176,(vlSelf->mycpu_top__DOT__inst_en));
            tracep->chgIData(oldp+1177,(vlSelf->mycpu_top__DOT__pc_next_dp),32);
            tracep->chgBit(oldp+1178,(vlSelf->mycpu_top__DOT__i_cache_stall));
            tracep->chgBit(oldp+1179,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall));
            tracep->chgBit(oldp+1180,(vlSelf->mycpu_top__DOT__inst_data_ok1));
            tracep->chgBit(oldp+1181,(vlSelf->mycpu_top__DOT__inst_data_ok2));
            tracep->chgIData(oldp+1182,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_res),32);
            tracep->chgBit(oldp+1183,(vlSelf->mycpu_top__DOT__i_arready));
            tracep->chgIData(oldp+1184,(vlSelf->mycpu_top__DOT__i_rdata),32);
            tracep->chgBit(oldp+1185,(vlSelf->mycpu_top__DOT__i_rvalid));
            tracep->chgBit(oldp+1186,(vlSelf->mycpu_top__DOT__d_arready));
            tracep->chgIData(oldp+1187,(vlSelf->mycpu_top__DOT__d_rdata),32);
            tracep->chgBit(oldp+1188,(vlSelf->mycpu_top__DOT__d_rlast));
            tracep->chgBit(oldp+1189,(vlSelf->mycpu_top__DOT__d_rvalid));
            tracep->chgBit(oldp+1190,((1U & (~ (IData)(vlSelf->mycpu_top__DOT__i_cache_stall)))));
            tracep->chgBit(oldp+1191,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_ena));
            tracep->chgBit(oldp+1192,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_ena));
            tracep->chgBit(oldp+1193,((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))));
            tracep->chgBit(oldp+1194,(vlSelf->mycpu_top__DOT__u_datapath__DOT__W_ena));
            tracep->chgBit(oldp+1195,(((((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_cp0_jump) 
                                         | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_flush_all)) 
                                        | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_bj)) 
                                       | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_bj))));
            tracep->chgBit(oldp+1196,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_flush));
            tracep->chgBit(oldp+1197,(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_flush));
            tracep->chgBit(oldp+1198,(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_cp0_jump));
            tracep->chgBit(oldp+1199,((1U & ((~ (IData)(vlSelf->mycpu_top__DOT__i_cache_stall)) 
                                             | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_cp0_jump)))));
            tracep->chgBit(oldp+1200,(vlSelf->mycpu_top__DOT__u_datapath__DOT__delay_sel_rst));
            tracep->chgBit(oldp+1201,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_bj));
            tracep->chgBit(oldp+1202,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_pred_take));
            tracep->chgIData(oldp+1203,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_rs_value_tmp),32);
            tracep->chgBit(oldp+1204,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_bj));
            tracep->chgBit(oldp+1205,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1206,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1207,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1208,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1209,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1210,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1211,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1212,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except 
                                             >> 9U))));
            tracep->chgBit(oldp+1213,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except 
                                             >> 8U))));
            tracep->chgBit(oldp+1214,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except 
                                             >> 7U))));
            tracep->chgBit(oldp+1215,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except 
                                             >> 6U))));
            tracep->chgBit(oldp+1216,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except 
                                             >> 5U))));
            tracep->chgBit(oldp+1217,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except 
                                             >> 4U))));
            tracep->chgBit(oldp+1218,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except 
                                             >> 3U))));
            tracep->chgBit(oldp+1219,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except 
                                             >> 2U))));
            tracep->chgBit(oldp+1220,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except 
                                             >> 1U))));
            tracep->chgBit(oldp+1221,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except)));
            tracep->chgBit(oldp+1222,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1223,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1224,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1225,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1226,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1227,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1228,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1229,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except 
                                             >> 9U))));
            tracep->chgBit(oldp+1230,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except 
                                             >> 8U))));
            tracep->chgBit(oldp+1231,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except 
                                             >> 7U))));
            tracep->chgBit(oldp+1232,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except 
                                             >> 6U))));
            tracep->chgBit(oldp+1233,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except 
                                             >> 5U))));
            tracep->chgBit(oldp+1234,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except 
                                             >> 4U))));
            tracep->chgBit(oldp+1235,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except 
                                             >> 3U))));
            tracep->chgBit(oldp+1236,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except 
                                             >> 2U))));
            tracep->chgBit(oldp+1237,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except 
                                             >> 1U))));
            tracep->chgBit(oldp+1238,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except)));
            tracep->chgIData(oldp+1239,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_res),32);
            tracep->chgBit(oldp+1240,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_overflow));
            tracep->chgBit(oldp+1241,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_overflow));
            tracep->chgBit(oldp+1242,(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_flush_all));
            tracep->chgBit(oldp+1243,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D2E_clear1));
            tracep->chgBit(oldp+1244,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D2E_clear2));
            tracep->chgBit(oldp+1245,(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_inst_fifo__fifo_rst));
            tracep->chgBit(oldp+1246,(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_regfile__wen1));
            tracep->chgBit(oldp+1247,(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_regfile__wen2));
            tracep->chgBit(oldp+1248,((0U != vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except)));
            tracep->chgBit(oldp+1249,((0U != vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except)));
            tracep->chgIData(oldp+1250,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__y1_tmp),32);
            tracep->chgBit(oldp+1251,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_sign1));
            tracep->chgBit(oldp+1252,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_start1));
            tracep->chgBit(oldp+1253,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_sign1));
            tracep->chgBit(oldp+1254,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_start1));
            tracep->chgBit(oldp+1255,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_sign2));
            tracep->chgBit(oldp+1256,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_start2));
            tracep->chgBit(oldp+1257,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_sign2));
            tracep->chgBit(oldp+1258,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_start2));
            tracep->chgBit(oldp+1259,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_sign));
            tracep->chgBit(oldp+1260,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_sign));
            tracep->chgBit(oldp+1261,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_start));
            tracep->chgQData(oldp+1262,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_result),64);
            tracep->chgQData(oldp+1264,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluA__DOT__temp_aluout_64),64);
            tracep->chgQData(oldp+1266,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluB__DOT__temp_aluout_64),64);
            tracep->chgIData(oldp+1268,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluA__DOT__i),32);
            tracep->chgIData(oldp+1269,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluB__DOT__i),32);
            tracep->chgIData(oldp+1270,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__cal_a),32);
            tracep->chgIData(oldp+1271,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__cal_b),32);
            tracep->chgSData(oldp+1272,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__bram_word_addr),9);
            tracep->chgCData(oldp+1273,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__bram_line_addr),6);
            tracep->chgCData(oldp+1274,((0x3fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_res 
                                                  >> 6U))),6);
            tracep->chgQData(oldp+1275,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__i_data__dina),64);
            tracep->chgQData(oldp+1277,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__i_data__dina),64);
            tracep->chgIData(oldp+1279,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_bram_wdata),32);
        }
        tracep->chgBit(oldp+1280,(vlSelf->aclk));
        tracep->chgBit(oldp+1281,(vlSelf->aresetn));
        tracep->chgCData(oldp+1282,(vlSelf->ext_int),6);
        tracep->chgCData(oldp+1283,(vlSelf->arid),4);
        tracep->chgIData(oldp+1284,(vlSelf->araddr),32);
        tracep->chgCData(oldp+1285,(vlSelf->arlen),8);
        tracep->chgCData(oldp+1286,(vlSelf->arsize),3);
        tracep->chgCData(oldp+1287,(vlSelf->arburst),2);
        tracep->chgCData(oldp+1288,(vlSelf->arlock),2);
        tracep->chgCData(oldp+1289,(vlSelf->arcache),4);
        tracep->chgCData(oldp+1290,(vlSelf->arprot),3);
        tracep->chgBit(oldp+1291,(vlSelf->arvalid));
        tracep->chgBit(oldp+1292,(vlSelf->arready));
        tracep->chgCData(oldp+1293,(vlSelf->rid),4);
        tracep->chgIData(oldp+1294,(vlSelf->rdata),32);
        tracep->chgCData(oldp+1295,(vlSelf->rresp),2);
        tracep->chgBit(oldp+1296,(vlSelf->rlast));
        tracep->chgBit(oldp+1297,(vlSelf->rvalid));
        tracep->chgBit(oldp+1298,(vlSelf->rready));
        tracep->chgCData(oldp+1299,(vlSelf->awid),4);
        tracep->chgIData(oldp+1300,(vlSelf->awaddr),32);
        tracep->chgCData(oldp+1301,(vlSelf->awlen),8);
        tracep->chgCData(oldp+1302,(vlSelf->awsize),3);
        tracep->chgCData(oldp+1303,(vlSelf->awburst),2);
        tracep->chgCData(oldp+1304,(vlSelf->awlock),2);
        tracep->chgCData(oldp+1305,(vlSelf->awcache),4);
        tracep->chgCData(oldp+1306,(vlSelf->awprot),3);
        tracep->chgBit(oldp+1307,(vlSelf->awvalid));
        tracep->chgBit(oldp+1308,(vlSelf->awready));
        tracep->chgCData(oldp+1309,(vlSelf->wid),4);
        tracep->chgIData(oldp+1310,(vlSelf->wdata),32);
        tracep->chgCData(oldp+1311,(vlSelf->wstrb),4);
        tracep->chgBit(oldp+1312,(vlSelf->wlast));
        tracep->chgBit(oldp+1313,(vlSelf->wvalid));
        tracep->chgBit(oldp+1314,(vlSelf->wready));
        tracep->chgCData(oldp+1315,(vlSelf->bid),4);
        tracep->chgCData(oldp+1316,(vlSelf->bresp),2);
        tracep->chgBit(oldp+1317,(vlSelf->bvalid));
        tracep->chgBit(oldp+1318,(vlSelf->bready));
        tracep->chgIData(oldp+1319,(vlSelf->debug_wb_pc),32);
        tracep->chgCData(oldp+1320,(vlSelf->debug_wb_rf_wen),4);
        tracep->chgCData(oldp+1321,(vlSelf->debug_wb_rf_wnum),5);
        tracep->chgIData(oldp+1322,(vlSelf->debug_wb_rf_wdata),32);
        tracep->chgIData(oldp+1323,(vlSelf->debug_cp0_count),32);
        tracep->chgIData(oldp+1324,(vlSelf->debug_cp0_random),32);
        tracep->chgIData(oldp+1325,(vlSelf->debug_cp0_cause),32);
        tracep->chgBit(oldp+1326,(vlSelf->debug_int));
        tracep->chgBit(oldp+1327,(vlSelf->debug_commit));
        tracep->chgBit(oldp+1328,((1U & (~ (IData)(vlSelf->aresetn)))));
        tracep->chgBit(oldp+1329,(((~ (IData)(vlSelf->rid)) 
                                   & (IData)(vlSelf->rlast))));
        tracep->chgCData(oldp+1330,((0x1fU & (IData)(vlSelf->ext_int))),5);
        tracep->chgBit(oldp+1331,((1U & (IData)(vlSelf->rid))));
    }
}

void Vmycpu_top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vmycpu_top___024root* const __restrict vlSelf = static_cast<Vmycpu_top___024root*>(voidSelf);
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    }
}
