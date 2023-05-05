// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmycpu_top__Syms.h"


void Vmycpu_top___024root__traceInitSub0(Vmycpu_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vmycpu_top___024root__traceInitTop(Vmycpu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vmycpu_top___024root__traceInitSub0(vlSelf, tracep);
    }
}

void Vmycpu_top___024root__traceInitSub0(Vmycpu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    const int c = vlSymsp->__Vm_baseCode;
    if (false && tracep && c) {}  // Prevent unused
    // Body
    {
        tracep->declBit(c+1281,"aclk", false,-1);
        tracep->declBit(c+1282,"aresetn", false,-1);
        tracep->declBus(c+1283,"ext_int", false,-1, 5,0);
        tracep->declBus(c+1284,"arid", false,-1, 3,0);
        tracep->declBus(c+1285,"araddr", false,-1, 31,0);
        tracep->declBus(c+1286,"arlen", false,-1, 7,0);
        tracep->declBus(c+1287,"arsize", false,-1, 2,0);
        tracep->declBus(c+1288,"arburst", false,-1, 1,0);
        tracep->declBus(c+1289,"arlock", false,-1, 1,0);
        tracep->declBus(c+1290,"arcache", false,-1, 3,0);
        tracep->declBus(c+1291,"arprot", false,-1, 2,0);
        tracep->declBit(c+1292,"arvalid", false,-1);
        tracep->declBit(c+1293,"arready", false,-1);
        tracep->declBus(c+1294,"rid", false,-1, 3,0);
        tracep->declBus(c+1295,"rdata", false,-1, 31,0);
        tracep->declBus(c+1296,"rresp", false,-1, 1,0);
        tracep->declBit(c+1297,"rlast", false,-1);
        tracep->declBit(c+1298,"rvalid", false,-1);
        tracep->declBit(c+1299,"rready", false,-1);
        tracep->declBus(c+1300,"awid", false,-1, 3,0);
        tracep->declBus(c+1301,"awaddr", false,-1, 31,0);
        tracep->declBus(c+1302,"awlen", false,-1, 7,0);
        tracep->declBus(c+1303,"awsize", false,-1, 2,0);
        tracep->declBus(c+1304,"awburst", false,-1, 1,0);
        tracep->declBus(c+1305,"awlock", false,-1, 1,0);
        tracep->declBus(c+1306,"awcache", false,-1, 3,0);
        tracep->declBus(c+1307,"awprot", false,-1, 2,0);
        tracep->declBit(c+1308,"awvalid", false,-1);
        tracep->declBit(c+1309,"awready", false,-1);
        tracep->declBus(c+1310,"wid", false,-1, 3,0);
        tracep->declBus(c+1311,"wdata", false,-1, 31,0);
        tracep->declBus(c+1312,"wstrb", false,-1, 3,0);
        tracep->declBit(c+1313,"wlast", false,-1);
        tracep->declBit(c+1314,"wvalid", false,-1);
        tracep->declBit(c+1315,"wready", false,-1);
        tracep->declBus(c+1316,"bid", false,-1, 3,0);
        tracep->declBus(c+1317,"bresp", false,-1, 1,0);
        tracep->declBit(c+1318,"bvalid", false,-1);
        tracep->declBit(c+1319,"bready", false,-1);
        tracep->declBus(c+1320,"debug_wb_pc", false,-1, 31,0);
        tracep->declBus(c+1321,"debug_wb_rf_wen", false,-1, 3,0);
        tracep->declBus(c+1322,"debug_wb_rf_wnum", false,-1, 4,0);
        tracep->declBus(c+1323,"debug_wb_rf_wdata", false,-1, 31,0);
        tracep->declBus(c+1324,"debug_cp0_count", false,-1, 31,0);
        tracep->declBus(c+1325,"debug_cp0_random", false,-1, 31,0);
        tracep->declBus(c+1326,"debug_cp0_cause", false,-1, 31,0);
        tracep->declBit(c+1327,"debug_int", false,-1);
        tracep->declBit(c+1328,"debug_commit", false,-1);
        tracep->declBit(c+1281,"mycpu_top aclk", false,-1);
        tracep->declBit(c+1282,"mycpu_top aresetn", false,-1);
        tracep->declBus(c+1283,"mycpu_top ext_int", false,-1, 5,0);
        tracep->declBus(c+1284,"mycpu_top arid", false,-1, 3,0);
        tracep->declBus(c+1285,"mycpu_top araddr", false,-1, 31,0);
        tracep->declBus(c+1286,"mycpu_top arlen", false,-1, 7,0);
        tracep->declBus(c+1287,"mycpu_top arsize", false,-1, 2,0);
        tracep->declBus(c+1288,"mycpu_top arburst", false,-1, 1,0);
        tracep->declBus(c+1289,"mycpu_top arlock", false,-1, 1,0);
        tracep->declBus(c+1290,"mycpu_top arcache", false,-1, 3,0);
        tracep->declBus(c+1291,"mycpu_top arprot", false,-1, 2,0);
        tracep->declBit(c+1292,"mycpu_top arvalid", false,-1);
        tracep->declBit(c+1293,"mycpu_top arready", false,-1);
        tracep->declBus(c+1294,"mycpu_top rid", false,-1, 3,0);
        tracep->declBus(c+1295,"mycpu_top rdata", false,-1, 31,0);
        tracep->declBus(c+1296,"mycpu_top rresp", false,-1, 1,0);
        tracep->declBit(c+1297,"mycpu_top rlast", false,-1);
        tracep->declBit(c+1298,"mycpu_top rvalid", false,-1);
        tracep->declBit(c+1299,"mycpu_top rready", false,-1);
        tracep->declBus(c+1300,"mycpu_top awid", false,-1, 3,0);
        tracep->declBus(c+1301,"mycpu_top awaddr", false,-1, 31,0);
        tracep->declBus(c+1302,"mycpu_top awlen", false,-1, 7,0);
        tracep->declBus(c+1303,"mycpu_top awsize", false,-1, 2,0);
        tracep->declBus(c+1304,"mycpu_top awburst", false,-1, 1,0);
        tracep->declBus(c+1305,"mycpu_top awlock", false,-1, 1,0);
        tracep->declBus(c+1306,"mycpu_top awcache", false,-1, 3,0);
        tracep->declBus(c+1307,"mycpu_top awprot", false,-1, 2,0);
        tracep->declBit(c+1308,"mycpu_top awvalid", false,-1);
        tracep->declBit(c+1309,"mycpu_top awready", false,-1);
        tracep->declBus(c+1310,"mycpu_top wid", false,-1, 3,0);
        tracep->declBus(c+1311,"mycpu_top wdata", false,-1, 31,0);
        tracep->declBus(c+1312,"mycpu_top wstrb", false,-1, 3,0);
        tracep->declBit(c+1313,"mycpu_top wlast", false,-1);
        tracep->declBit(c+1314,"mycpu_top wvalid", false,-1);
        tracep->declBit(c+1315,"mycpu_top wready", false,-1);
        tracep->declBus(c+1316,"mycpu_top bid", false,-1, 3,0);
        tracep->declBus(c+1317,"mycpu_top bresp", false,-1, 1,0);
        tracep->declBit(c+1318,"mycpu_top bvalid", false,-1);
        tracep->declBit(c+1319,"mycpu_top bready", false,-1);
        tracep->declBus(c+1320,"mycpu_top debug_wb_pc", false,-1, 31,0);
        tracep->declBus(c+1321,"mycpu_top debug_wb_rf_wen", false,-1, 3,0);
        tracep->declBus(c+1322,"mycpu_top debug_wb_rf_wnum", false,-1, 4,0);
        tracep->declBus(c+1323,"mycpu_top debug_wb_rf_wdata", false,-1, 31,0);
        tracep->declBus(c+1324,"mycpu_top debug_cp0_count", false,-1, 31,0);
        tracep->declBus(c+1325,"mycpu_top debug_cp0_random", false,-1, 31,0);
        tracep->declBus(c+1326,"mycpu_top debug_cp0_cause", false,-1, 31,0);
        tracep->declBit(c+1327,"mycpu_top debug_int", false,-1);
        tracep->declBit(c+1328,"mycpu_top debug_commit", false,-1);
        tracep->declBit(c+1281,"mycpu_top clk", false,-1);
        tracep->declBit(c+1329,"mycpu_top rst", false,-1);
        tracep->declBit(c+1333,"mycpu_top no_cache_d", false,-1);
        tracep->declBit(c+1334,"mycpu_top no_cache_i", false,-1);
        tracep->declBit(c+1177,"mycpu_top inst_en", false,-1);
        tracep->declBus(c+1335,"mycpu_top pcF", false,-1, 31,0);
        tracep->declBus(c+9,"mycpu_top pcF_dp", false,-1, 31,0);
        tracep->declBus(c+1336,"mycpu_top pc_next", false,-1, 31,0);
        tracep->declBus(c+1178,"mycpu_top pc_next_dp", false,-1, 31,0);
        tracep->declBit(c+1179,"mycpu_top i_cache_stall", false,-1);
        tracep->declBit(c+1179,"mycpu_top stallF", false,-1);
        tracep->declBit(c+1180,"mycpu_top stallM", false,-1);
        tracep->declBit(c+1181,"mycpu_top inst_data_ok1", false,-1);
        tracep->declBit(c+1182,"mycpu_top inst_data_ok2", false,-1);
        tracep->declBit(c+10,"mycpu_top inst_tlb_refill", false,-1);
        tracep->declBit(c+11,"mycpu_top inst_tlb_invalid", false,-1);
        tracep->declBus(c+12,"mycpu_top inst_rdata1", false,-1, 31,0);
        tracep->declBus(c+13,"mycpu_top inst_rdata2", false,-1, 31,0);
        tracep->declBit(c+14,"mycpu_top fence_iE", false,-1);
        tracep->declBus(c+1183,"mycpu_top fence_addrE", false,-1, 31,0);
        tracep->declBit(c+15,"mycpu_top fence_dM", false,-1);
        tracep->declBus(c+16,"mycpu_top fence_addrM", false,-1, 31,0);
        tracep->declBit(c+17,"mycpu_top fence_tlbE", false,-1);
        tracep->declBus(c+18,"mycpu_top itlb_vpn2", false,-1, 31,13);
        tracep->declBit(c+19,"mycpu_top itlb_found", false,-1);
        tracep->declBit(c+20,"mycpu_top itlb_entry\206 G", false,-1);
        tracep->declBit(c+21,"mycpu_top itlb_entry\206 V0", false,-1);
        tracep->declBit(c+22,"mycpu_top itlb_entry\206 V1", false,-1);
        tracep->declBit(c+23,"mycpu_top itlb_entry\206 D0", false,-1);
        tracep->declBit(c+24,"mycpu_top itlb_entry\206 D1", false,-1);
        tracep->declBit(c+25,"mycpu_top itlb_entry\206 C0", false,-1);
        tracep->declBit(c+26,"mycpu_top itlb_entry\206 C1", false,-1);
        tracep->declBus(c+27,"mycpu_top itlb_entry\206 PFN0", false,-1, 19,0);
        tracep->declBus(c+28,"mycpu_top itlb_entry\206 PFN1", false,-1, 19,0);
        tracep->declBus(c+29,"mycpu_top itlb_entry\206 VPN2", false,-1, 18,0);
        tracep->declBus(c+30,"mycpu_top itlb_entry\206 ASID", false,-1, 7,0);
        tracep->declBit(c+31,"mycpu_top data_en", false,-1);
        tracep->declBus(c+32,"mycpu_top data_addr", false,-1, 31,0);
        tracep->declBus(c+33,"mycpu_top data_addr_dp", false,-1, 31,0);
        tracep->declBus(c+34,"mycpu_top data_rdata", false,-1, 31,0);
        tracep->declBus(c+35,"mycpu_top data_rlen", false,-1, 1,0);
        tracep->declBus(c+36,"mycpu_top data_wen", false,-1, 3,0);
        tracep->declBus(c+37,"mycpu_top data_wdata", false,-1, 31,0);
        tracep->declBit(c+38,"mycpu_top d_cache_stall", false,-1);
        tracep->declBus(c+39,"mycpu_top mem_addrE", false,-1, 31,0);
        tracep->declBus(c+39,"mycpu_top mem_addrE_dp", false,-1, 31,0);
        tracep->declBit(c+40,"mycpu_top mem_read_enE", false,-1);
        tracep->declBit(c+41,"mycpu_top mem_write_enE", false,-1);
        tracep->declBus(c+42,"mycpu_top i_araddr", false,-1, 31,0);
        tracep->declBus(c+43,"mycpu_top i_arlen", false,-1, 7,0);
        tracep->declBus(c+44,"mycpu_top i_arsize", false,-1, 2,0);
        tracep->declBit(c+45,"mycpu_top i_arvalid", false,-1);
        tracep->declBit(c+1184,"mycpu_top i_arready", false,-1);
        tracep->declBus(c+1185,"mycpu_top i_rdata", false,-1, 31,0);
        tracep->declBit(c+1330,"mycpu_top i_rlast", false,-1);
        tracep->declBit(c+1186,"mycpu_top i_rvalid", false,-1);
        tracep->declBit(c+46,"mycpu_top i_rready", false,-1);
        tracep->declBus(c+47,"mycpu_top d_araddr", false,-1, 31,0);
        tracep->declBus(c+48,"mycpu_top d_arlen", false,-1, 7,0);
        tracep->declBus(c+49,"mycpu_top d_arsize", false,-1, 2,0);
        tracep->declBit(c+50,"mycpu_top d_arvalid", false,-1);
        tracep->declBit(c+1187,"mycpu_top d_arready", false,-1);
        tracep->declBus(c+1188,"mycpu_top d_rdata", false,-1, 31,0);
        tracep->declBit(c+1189,"mycpu_top d_rlast", false,-1);
        tracep->declBit(c+1190,"mycpu_top d_rvalid", false,-1);
        tracep->declBit(c+51,"mycpu_top d_rready", false,-1);
        tracep->declBus(c+52,"mycpu_top d_awaddr", false,-1, 31,0);
        tracep->declBus(c+53,"mycpu_top d_awlen", false,-1, 7,0);
        tracep->declBus(c+54,"mycpu_top d_awsize", false,-1, 2,0);
        tracep->declBit(c+55,"mycpu_top d_awvalid", false,-1);
        tracep->declBit(c+1309,"mycpu_top d_awready", false,-1);
        tracep->declBus(c+56,"mycpu_top d_wdata", false,-1, 31,0);
        tracep->declBus(c+57,"mycpu_top d_wstrb", false,-1, 3,0);
        tracep->declBit(c+58,"mycpu_top d_wlast", false,-1);
        tracep->declBit(c+59,"mycpu_top d_wvalid", false,-1);
        tracep->declBit(c+1315,"mycpu_top d_wready", false,-1);
        tracep->declBit(c+1318,"mycpu_top d_bvalid", false,-1);
        tracep->declBit(c+1337,"mycpu_top d_bready", false,-1);
        tracep->declBus(c+60,"mycpu_top dtlb_vpn2", false,-1, 31,13);
        tracep->declBit(c+61,"mycpu_top dtlb_found", false,-1);
        tracep->declBit(c+62,"mycpu_top dtlb_entry\206 G", false,-1);
        tracep->declBit(c+63,"mycpu_top dtlb_entry\206 V0", false,-1);
        tracep->declBit(c+64,"mycpu_top dtlb_entry\206 V1", false,-1);
        tracep->declBit(c+65,"mycpu_top dtlb_entry\206 D0", false,-1);
        tracep->declBit(c+66,"mycpu_top dtlb_entry\206 D1", false,-1);
        tracep->declBit(c+67,"mycpu_top dtlb_entry\206 C0", false,-1);
        tracep->declBit(c+68,"mycpu_top dtlb_entry\206 C1", false,-1);
        tracep->declBus(c+69,"mycpu_top dtlb_entry\206 PFN0", false,-1, 19,0);
        tracep->declBus(c+70,"mycpu_top dtlb_entry\206 PFN1", false,-1, 19,0);
        tracep->declBus(c+71,"mycpu_top dtlb_entry\206 VPN2", false,-1, 18,0);
        tracep->declBus(c+72,"mycpu_top dtlb_entry\206 ASID", false,-1, 7,0);
        tracep->declBit(c+73,"mycpu_top fence_tlbM", false,-1);
        tracep->declBit(c+74,"mycpu_top data_tlb_refill", false,-1);
        tracep->declBit(c+75,"mycpu_top data_tlb_invalid", false,-1);
        tracep->declBit(c+76,"mycpu_top data_tlb_mod", false,-1);
        tracep->declBit(c+1338,"mycpu_top no_cache_E", false,-1);
        tracep->declBit(c+1281,"mycpu_top u_datapath clk", false,-1);
        tracep->declBit(c+1329,"mycpu_top u_datapath rst", false,-1);
        tracep->declBus(c+1283,"mycpu_top u_datapath ext_int", false,-1, 5,0);
        tracep->declBit(c+1179,"mycpu_top u_datapath i_stall", false,-1);
        tracep->declBit(c+1179,"mycpu_top u_datapath stallF", false,-1);
        tracep->declBit(c+1177,"mycpu_top u_datapath inst_sram_en", false,-1);
        tracep->declBus(c+9,"mycpu_top u_datapath F_pc", false,-1, 31,0);
        tracep->declBus(c+1178,"mycpu_top u_datapath F_pc_next", false,-1, 31,0);
        tracep->declBit(c+1181,"mycpu_top u_datapath inst_data_ok1", false,-1);
        tracep->declBit(c+1182,"mycpu_top u_datapath inst_data_ok2", false,-1);
        tracep->declBus(c+12,"mycpu_top u_datapath inst_rdata1", false,-1, 31,0);
        tracep->declBus(c+13,"mycpu_top u_datapath inst_rdata2", false,-1, 31,0);
        tracep->declBit(c+10,"mycpu_top u_datapath inst_tlb_refill", false,-1);
        tracep->declBit(c+11,"mycpu_top u_datapath inst_tlb_invalid", false,-1);
        tracep->declBit(c+14,"mycpu_top u_datapath fence_iE", false,-1);
        tracep->declBus(c+1183,"mycpu_top u_datapath fence_addrE", false,-1, 31,0);
        tracep->declBit(c+15,"mycpu_top u_datapath fence_dM", false,-1);
        tracep->declBus(c+16,"mycpu_top u_datapath fence_addrM", false,-1, 31,0);
        tracep->declBit(c+17,"mycpu_top u_datapath fence_tlbE", false,-1);
        tracep->declBus(c+18,"mycpu_top u_datapath itlb_vpn2", false,-1, 31,13);
        tracep->declBit(c+19,"mycpu_top u_datapath itlb_found", false,-1);
        tracep->declBit(c+20,"mycpu_top u_datapath itlb_entry\206 G", false,-1);
        tracep->declBit(c+21,"mycpu_top u_datapath itlb_entry\206 V0", false,-1);
        tracep->declBit(c+22,"mycpu_top u_datapath itlb_entry\206 V1", false,-1);
        tracep->declBit(c+23,"mycpu_top u_datapath itlb_entry\206 D0", false,-1);
        tracep->declBit(c+24,"mycpu_top u_datapath itlb_entry\206 D1", false,-1);
        tracep->declBit(c+25,"mycpu_top u_datapath itlb_entry\206 C0", false,-1);
        tracep->declBit(c+26,"mycpu_top u_datapath itlb_entry\206 C1", false,-1);
        tracep->declBus(c+27,"mycpu_top u_datapath itlb_entry\206 PFN0", false,-1, 19,0);
        tracep->declBus(c+28,"mycpu_top u_datapath itlb_entry\206 PFN1", false,-1, 19,0);
        tracep->declBus(c+29,"mycpu_top u_datapath itlb_entry\206 VPN2", false,-1, 18,0);
        tracep->declBus(c+30,"mycpu_top u_datapath itlb_entry\206 ASID", false,-1, 7,0);
        tracep->declBit(c+38,"mycpu_top u_datapath d_stall", false,-1);
        tracep->declBit(c+1180,"mycpu_top u_datapath stallM", false,-1);
        tracep->declBit(c+40,"mycpu_top u_datapath mem_read_enE", false,-1);
        tracep->declBit(c+41,"mycpu_top u_datapath mem_write_enE", false,-1);
        tracep->declBus(c+39,"mycpu_top u_datapath E_mem_va", false,-1, 31,0);
        tracep->declBus(c+39,"mycpu_top u_datapath mem_addrE", false,-1, 31,0);
        tracep->declBus(c+34,"mycpu_top u_datapath data_sram_rdataM", false,-1, 31,0);
        tracep->declBit(c+31,"mycpu_top u_datapath data_sram_enM", false,-1);
        tracep->declBus(c+35,"mycpu_top u_datapath data_sram_rlenM", false,-1, 1,0);
        tracep->declBus(c+36,"mycpu_top u_datapath data_sram_wenM", false,-1, 3,0);
        tracep->declBus(c+32,"mycpu_top u_datapath M_mem_va", false,-1, 31,0);
        tracep->declBus(c+33,"mycpu_top u_datapath data_sram_addrM", false,-1, 31,0);
        tracep->declBus(c+37,"mycpu_top u_datapath data_sram_wdataM", false,-1, 31,0);
        tracep->declBus(c+60,"mycpu_top u_datapath dtlb_vpn2", false,-1, 31,13);
        tracep->declBit(c+61,"mycpu_top u_datapath dtlb_found", false,-1);
        tracep->declBit(c+62,"mycpu_top u_datapath dtlb_entry\206 G", false,-1);
        tracep->declBit(c+63,"mycpu_top u_datapath dtlb_entry\206 V0", false,-1);
        tracep->declBit(c+64,"mycpu_top u_datapath dtlb_entry\206 V1", false,-1);
        tracep->declBit(c+65,"mycpu_top u_datapath dtlb_entry\206 D0", false,-1);
        tracep->declBit(c+66,"mycpu_top u_datapath dtlb_entry\206 D1", false,-1);
        tracep->declBit(c+67,"mycpu_top u_datapath dtlb_entry\206 C0", false,-1);
        tracep->declBit(c+68,"mycpu_top u_datapath dtlb_entry\206 C1", false,-1);
        tracep->declBus(c+69,"mycpu_top u_datapath dtlb_entry\206 PFN0", false,-1, 19,0);
        tracep->declBus(c+70,"mycpu_top u_datapath dtlb_entry\206 PFN1", false,-1, 19,0);
        tracep->declBus(c+71,"mycpu_top u_datapath dtlb_entry\206 VPN2", false,-1, 18,0);
        tracep->declBus(c+72,"mycpu_top u_datapath dtlb_entry\206 ASID", false,-1, 7,0);
        tracep->declBit(c+73,"mycpu_top u_datapath fence_tlbM", false,-1);
        tracep->declBit(c+74,"mycpu_top u_datapath data_tlb_refill", false,-1);
        tracep->declBit(c+75,"mycpu_top u_datapath data_tlb_invalid", false,-1);
        tracep->declBit(c+76,"mycpu_top u_datapath data_tlb_mod", false,-1);
        tracep->declBus(c+1320,"mycpu_top u_datapath debug_wb_pc", false,-1, 31,0);
        tracep->declBus(c+1321,"mycpu_top u_datapath debug_wb_rf_wen", false,-1, 3,0);
        tracep->declBus(c+1322,"mycpu_top u_datapath debug_wb_rf_wnum", false,-1, 4,0);
        tracep->declBus(c+1323,"mycpu_top u_datapath debug_wb_rf_wdata", false,-1, 31,0);
        tracep->declBus(c+1324,"mycpu_top u_datapath debug_cp0_count", false,-1, 31,0);
        tracep->declBus(c+1325,"mycpu_top u_datapath debug_cp0_random", false,-1, 31,0);
        tracep->declBus(c+1326,"mycpu_top u_datapath debug_cp0_cause", false,-1, 31,0);
        tracep->declBit(c+1327,"mycpu_top u_datapath debug_int", false,-1);
        tracep->declBit(c+1328,"mycpu_top u_datapath debug_commit", false,-1);
        tracep->declBus(c+77,"mycpu_top u_datapath E_master_debug_cp0_count", false,-1, 31,0);
        tracep->declBus(c+78,"mycpu_top u_datapath E_master_debug_cp0_random", false,-1, 31,0);
        tracep->declBus(c+79,"mycpu_top u_datapath E_master_debug_cp0_cause", false,-1, 31,0);
        tracep->declBus(c+80,"mycpu_top u_datapath M_master_debug_cp0_count", false,-1, 31,0);
        tracep->declBus(c+81,"mycpu_top u_datapath M_master_debug_cp0_random", false,-1, 31,0);
        tracep->declBus(c+82,"mycpu_top u_datapath M_master_debug_cp0_cause", false,-1, 31,0);
        tracep->declBit(c+83,"mycpu_top u_datapath M_master_debug_int", false,-1);
        tracep->declBus(c+84,"mycpu_top u_datapath W_master_debug_cp0_count", false,-1, 31,0);
        tracep->declBus(c+85,"mycpu_top u_datapath W_master_debug_cp0_random", false,-1, 31,0);
        tracep->declBus(c+86,"mycpu_top u_datapath W_master_debug_cp0_cause", false,-1, 31,0);
        tracep->declBit(c+87,"mycpu_top u_datapath W_master_debug_int", false,-1);
        tracep->declBit(c+88,"mycpu_top u_datapath fifo_empty", false,-1);
        tracep->declBit(c+89,"mycpu_top u_datapath fifo_almost_empty", false,-1);
        tracep->declBit(c+90,"mycpu_top u_datapath fifo_full", false,-1);
        tracep->declBit(c+1191,"mycpu_top u_datapath F_ena", false,-1);
        tracep->declBit(c+1192,"mycpu_top u_datapath D_ena", false,-1);
        tracep->declBit(c+1193,"mycpu_top u_datapath D_slave_ena", false,-1);
        tracep->declBit(c+1194,"mycpu_top u_datapath E_ena", false,-1);
        tracep->declBit(c+1194,"mycpu_top u_datapath M_ena", false,-1);
        tracep->declBit(c+1195,"mycpu_top u_datapath W_ena", false,-1);
        tracep->declBit(c+1339,"mycpu_top u_datapath F_flush", false,-1);
        tracep->declBit(c+1196,"mycpu_top u_datapath D_flush", false,-1);
        tracep->declBit(c+1197,"mycpu_top u_datapath E_flush", false,-1);
        tracep->declBit(c+1198,"mycpu_top u_datapath M_flush", false,-1);
        tracep->declBit(c+1339,"mycpu_top u_datapath W_flush", false,-1);
        tracep->declBit(c+91,"mycpu_top u_datapath E_alu_stall", false,-1);
        tracep->declBit(c+1198,"mycpu_top u_datapath delay_slot_flush", false,-1);
        tracep->declBus(c+92,"mycpu_top u_datapath D1cs\206 aluop", false,-1, 7,0);
        tracep->declBit(c+93,"mycpu_top u_datapath D1cs\206 flush_all", false,-1);
        tracep->declBit(c+94,"mycpu_top u_datapath D1cs\206 read_rs", false,-1);
        tracep->declBit(c+95,"mycpu_top u_datapath D1cs\206 read_rt", false,-1);
        tracep->declBit(c+96,"mycpu_top u_datapath D1cs\206 reg_write", false,-1);
        tracep->declBit(c+97,"mycpu_top u_datapath D1cs\206 mem_en", false,-1);
        tracep->declBit(c+98,"mycpu_top u_datapath D1cs\206 mem_write_reg", false,-1);
        tracep->declBit(c+99,"mycpu_top u_datapath D1cs\206 mem_read", false,-1);
        tracep->declBit(c+100,"mycpu_top u_datapath D1cs\206 mem_write", false,-1);
        tracep->declBit(c+101,"mycpu_top u_datapath D1cs\206 cp0_read", false,-1);
        tracep->declBit(c+102,"mycpu_top u_datapath D1cs\206 cp0_write", false,-1);
        tracep->declBit(c+103,"mycpu_top u_datapath D1cs\206 hilo_read", false,-1);
        tracep->declBit(c+104,"mycpu_top u_datapath D1cs\206 hilo_write", false,-1);
        tracep->declBit(c+105,"mycpu_top u_datapath D1cs\206 may_bring_flush", false,-1);
        tracep->declBit(c+106,"mycpu_top u_datapath D1cs\206 only_one_issue", false,-1);
        tracep->declBit(c+107,"mycpu_top u_datapath D1cs\206 icache_fence", false,-1);
        tracep->declBit(c+108,"mycpu_top u_datapath D1cs\206 dcache_fence", false,-1);
        tracep->declBit(c+109,"mycpu_top u_datapath D1cs\206 tlb_fence", false,-1);
        tracep->declBit(c+110,"mycpu_top u_datapath D1cs\206 mul_en", false,-1);
        tracep->declBit(c+111,"mycpu_top u_datapath D1cs\206 div_en", false,-1);
        tracep->declBus(c+112,"mycpu_top u_datapath D2cs\206 aluop", false,-1, 7,0);
        tracep->declBit(c+113,"mycpu_top u_datapath D2cs\206 flush_all", false,-1);
        tracep->declBit(c+114,"mycpu_top u_datapath D2cs\206 read_rs", false,-1);
        tracep->declBit(c+115,"mycpu_top u_datapath D2cs\206 read_rt", false,-1);
        tracep->declBit(c+116,"mycpu_top u_datapath D2cs\206 reg_write", false,-1);
        tracep->declBit(c+117,"mycpu_top u_datapath D2cs\206 mem_en", false,-1);
        tracep->declBit(c+118,"mycpu_top u_datapath D2cs\206 mem_write_reg", false,-1);
        tracep->declBit(c+119,"mycpu_top u_datapath D2cs\206 mem_read", false,-1);
        tracep->declBit(c+120,"mycpu_top u_datapath D2cs\206 mem_write", false,-1);
        tracep->declBit(c+121,"mycpu_top u_datapath D2cs\206 cp0_read", false,-1);
        tracep->declBit(c+122,"mycpu_top u_datapath D2cs\206 cp0_write", false,-1);
        tracep->declBit(c+123,"mycpu_top u_datapath D2cs\206 hilo_read", false,-1);
        tracep->declBit(c+124,"mycpu_top u_datapath D2cs\206 hilo_write", false,-1);
        tracep->declBit(c+125,"mycpu_top u_datapath D2cs\206 may_bring_flush", false,-1);
        tracep->declBit(c+126,"mycpu_top u_datapath D2cs\206 only_one_issue", false,-1);
        tracep->declBit(c+127,"mycpu_top u_datapath D2cs\206 icache_fence", false,-1);
        tracep->declBit(c+128,"mycpu_top u_datapath D2cs\206 dcache_fence", false,-1);
        tracep->declBit(c+129,"mycpu_top u_datapath D2cs\206 tlb_fence", false,-1);
        tracep->declBit(c+130,"mycpu_top u_datapath D2cs\206 mul_en", false,-1);
        tracep->declBit(c+131,"mycpu_top u_datapath D2cs\206 div_en", false,-1);
        tracep->declBus(c+132,"mycpu_top u_datapath E1cs\206 aluop", false,-1, 7,0);
        tracep->declBit(c+133,"mycpu_top u_datapath E1cs\206 flush_all", false,-1);
        tracep->declBit(c+134,"mycpu_top u_datapath E1cs\206 read_rs", false,-1);
        tracep->declBit(c+135,"mycpu_top u_datapath E1cs\206 read_rt", false,-1);
        tracep->declBit(c+136,"mycpu_top u_datapath E1cs\206 reg_write", false,-1);
        tracep->declBit(c+137,"mycpu_top u_datapath E1cs\206 mem_en", false,-1);
        tracep->declBit(c+138,"mycpu_top u_datapath E1cs\206 mem_write_reg", false,-1);
        tracep->declBit(c+139,"mycpu_top u_datapath E1cs\206 mem_read", false,-1);
        tracep->declBit(c+140,"mycpu_top u_datapath E1cs\206 mem_write", false,-1);
        tracep->declBit(c+141,"mycpu_top u_datapath E1cs\206 cp0_read", false,-1);
        tracep->declBit(c+142,"mycpu_top u_datapath E1cs\206 cp0_write", false,-1);
        tracep->declBit(c+143,"mycpu_top u_datapath E1cs\206 hilo_read", false,-1);
        tracep->declBit(c+144,"mycpu_top u_datapath E1cs\206 hilo_write", false,-1);
        tracep->declBit(c+145,"mycpu_top u_datapath E1cs\206 may_bring_flush", false,-1);
        tracep->declBit(c+146,"mycpu_top u_datapath E1cs\206 only_one_issue", false,-1);
        tracep->declBit(c+147,"mycpu_top u_datapath E1cs\206 icache_fence", false,-1);
        tracep->declBit(c+148,"mycpu_top u_datapath E1cs\206 dcache_fence", false,-1);
        tracep->declBit(c+149,"mycpu_top u_datapath E1cs\206 tlb_fence", false,-1);
        tracep->declBit(c+150,"mycpu_top u_datapath E1cs\206 mul_en", false,-1);
        tracep->declBit(c+151,"mycpu_top u_datapath E1cs\206 div_en", false,-1);
        tracep->declBus(c+152,"mycpu_top u_datapath E2cs\206 aluop", false,-1, 7,0);
        tracep->declBit(c+153,"mycpu_top u_datapath E2cs\206 flush_all", false,-1);
        tracep->declBit(c+154,"mycpu_top u_datapath E2cs\206 read_rs", false,-1);
        tracep->declBit(c+155,"mycpu_top u_datapath E2cs\206 read_rt", false,-1);
        tracep->declBit(c+156,"mycpu_top u_datapath E2cs\206 reg_write", false,-1);
        tracep->declBit(c+157,"mycpu_top u_datapath E2cs\206 mem_en", false,-1);
        tracep->declBit(c+158,"mycpu_top u_datapath E2cs\206 mem_write_reg", false,-1);
        tracep->declBit(c+159,"mycpu_top u_datapath E2cs\206 mem_read", false,-1);
        tracep->declBit(c+160,"mycpu_top u_datapath E2cs\206 mem_write", false,-1);
        tracep->declBit(c+161,"mycpu_top u_datapath E2cs\206 cp0_read", false,-1);
        tracep->declBit(c+162,"mycpu_top u_datapath E2cs\206 cp0_write", false,-1);
        tracep->declBit(c+163,"mycpu_top u_datapath E2cs\206 hilo_read", false,-1);
        tracep->declBit(c+164,"mycpu_top u_datapath E2cs\206 hilo_write", false,-1);
        tracep->declBit(c+165,"mycpu_top u_datapath E2cs\206 may_bring_flush", false,-1);
        tracep->declBit(c+166,"mycpu_top u_datapath E2cs\206 only_one_issue", false,-1);
        tracep->declBit(c+167,"mycpu_top u_datapath E2cs\206 icache_fence", false,-1);
        tracep->declBit(c+168,"mycpu_top u_datapath E2cs\206 dcache_fence", false,-1);
        tracep->declBit(c+169,"mycpu_top u_datapath E2cs\206 tlb_fence", false,-1);
        tracep->declBit(c+170,"mycpu_top u_datapath E2cs\206 mul_en", false,-1);
        tracep->declBit(c+171,"mycpu_top u_datapath E2cs\206 div_en", false,-1);
        tracep->declBus(c+172,"mycpu_top u_datapath M1cs\206 aluop", false,-1, 7,0);
        tracep->declBit(c+173,"mycpu_top u_datapath M1cs\206 flush_all", false,-1);
        tracep->declBit(c+174,"mycpu_top u_datapath M1cs\206 read_rs", false,-1);
        tracep->declBit(c+175,"mycpu_top u_datapath M1cs\206 read_rt", false,-1);
        tracep->declBit(c+176,"mycpu_top u_datapath M1cs\206 reg_write", false,-1);
        tracep->declBit(c+177,"mycpu_top u_datapath M1cs\206 mem_en", false,-1);
        tracep->declBit(c+178,"mycpu_top u_datapath M1cs\206 mem_write_reg", false,-1);
        tracep->declBit(c+179,"mycpu_top u_datapath M1cs\206 mem_read", false,-1);
        tracep->declBit(c+180,"mycpu_top u_datapath M1cs\206 mem_write", false,-1);
        tracep->declBit(c+181,"mycpu_top u_datapath M1cs\206 cp0_read", false,-1);
        tracep->declBit(c+182,"mycpu_top u_datapath M1cs\206 cp0_write", false,-1);
        tracep->declBit(c+183,"mycpu_top u_datapath M1cs\206 hilo_read", false,-1);
        tracep->declBit(c+184,"mycpu_top u_datapath M1cs\206 hilo_write", false,-1);
        tracep->declBit(c+185,"mycpu_top u_datapath M1cs\206 may_bring_flush", false,-1);
        tracep->declBit(c+186,"mycpu_top u_datapath M1cs\206 only_one_issue", false,-1);
        tracep->declBit(c+187,"mycpu_top u_datapath M1cs\206 icache_fence", false,-1);
        tracep->declBit(c+188,"mycpu_top u_datapath M1cs\206 dcache_fence", false,-1);
        tracep->declBit(c+189,"mycpu_top u_datapath M1cs\206 tlb_fence", false,-1);
        tracep->declBit(c+190,"mycpu_top u_datapath M1cs\206 mul_en", false,-1);
        tracep->declBit(c+191,"mycpu_top u_datapath M1cs\206 div_en", false,-1);
        tracep->declBus(c+192,"mycpu_top u_datapath M2cs\206 aluop", false,-1, 7,0);
        tracep->declBit(c+193,"mycpu_top u_datapath M2cs\206 flush_all", false,-1);
        tracep->declBit(c+194,"mycpu_top u_datapath M2cs\206 read_rs", false,-1);
        tracep->declBit(c+195,"mycpu_top u_datapath M2cs\206 read_rt", false,-1);
        tracep->declBit(c+196,"mycpu_top u_datapath M2cs\206 reg_write", false,-1);
        tracep->declBit(c+197,"mycpu_top u_datapath M2cs\206 mem_en", false,-1);
        tracep->declBit(c+198,"mycpu_top u_datapath M2cs\206 mem_write_reg", false,-1);
        tracep->declBit(c+199,"mycpu_top u_datapath M2cs\206 mem_read", false,-1);
        tracep->declBit(c+200,"mycpu_top u_datapath M2cs\206 mem_write", false,-1);
        tracep->declBit(c+201,"mycpu_top u_datapath M2cs\206 cp0_read", false,-1);
        tracep->declBit(c+202,"mycpu_top u_datapath M2cs\206 cp0_write", false,-1);
        tracep->declBit(c+203,"mycpu_top u_datapath M2cs\206 hilo_read", false,-1);
        tracep->declBit(c+204,"mycpu_top u_datapath M2cs\206 hilo_write", false,-1);
        tracep->declBit(c+205,"mycpu_top u_datapath M2cs\206 may_bring_flush", false,-1);
        tracep->declBit(c+206,"mycpu_top u_datapath M2cs\206 only_one_issue", false,-1);
        tracep->declBit(c+207,"mycpu_top u_datapath M2cs\206 icache_fence", false,-1);
        tracep->declBit(c+208,"mycpu_top u_datapath M2cs\206 dcache_fence", false,-1);
        tracep->declBit(c+209,"mycpu_top u_datapath M2cs\206 tlb_fence", false,-1);
        tracep->declBit(c+210,"mycpu_top u_datapath M2cs\206 mul_en", false,-1);
        tracep->declBit(c+211,"mycpu_top u_datapath M2cs\206 div_en", false,-1);
        tracep->declBit(c+212,"mycpu_top u_datapath D_master_reg_wen", false,-1);
        tracep->declBit(c+213,"mycpu_top u_datapath D_slave_reg_wen", false,-1);
        tracep->declBit(c+214,"mycpu_top u_datapath E_master_reg_wen", false,-1);
        tracep->declBit(c+215,"mycpu_top u_datapath E_slave_reg_wen", false,-1);
        tracep->declBit(c+216,"mycpu_top u_datapath M_master_reg_wen", false,-1);
        tracep->declBit(c+217,"mycpu_top u_datapath M_slave_reg_wen", false,-1);
        tracep->declBit(c+218,"mycpu_top u_datapath W_master_reg_wen", false,-1);
        tracep->declBit(c+219,"mycpu_top u_datapath W_slave_reg_wen", false,-1);
        tracep->declBus(c+220,"mycpu_top u_datapath E_cp0_rdata", false,-1, 31,0);
        tracep->declBit(c+1199,"mycpu_top u_datapath M_cp0_jump", false,-1);
        tracep->declBus(c+221,"mycpu_top u_datapath M_cp0_jump_pc", false,-1, 31,0);
        tracep->declBit(c+222,"mycpu_top u_datapath F_pc_except", false,-1);
        tracep->declBit(c+1200,"mycpu_top u_datapath pc_en", false,-1);
        tracep->declBit(c+223,"mycpu_top u_datapath D_cp0_useable", false,-1);
        tracep->declBit(c+224,"mycpu_top u_datapath D_kernel_mode", false,-1);
        tracep->declBit(c+225,"mycpu_top u_datapath D_interrupt", false,-1);
        tracep->declBit(c+226,"mycpu_top u_datapath D_int_info\206 int_allowed", false,-1);
        tracep->declBus(c+227,"mycpu_top u_datapath D_int_info\206 IM", false,-1, 7,0);
        tracep->declBus(c+228,"mycpu_top u_datapath D_int_info\206 IP", false,-1, 7,0);
        tracep->declBit(c+1201,"mycpu_top u_datapath delay_sel_rst", false,-1);
        tracep->declBit(c+229,"mycpu_top u_datapath D_master_is_bj", false,-1);
        tracep->declBit(c+1202,"mycpu_top u_datapath D_master_bj", false,-1);
        tracep->declBit(c+230,"mycpu_top u_datapath D_master_is_branch", false,-1);
        tracep->declBit(c+231,"mycpu_top u_datapath D_master_is_jump", false,-1);
        tracep->declBit(c+1203,"mycpu_top u_datapath D_master_pred_take", false,-1);
        tracep->declBit(c+1160,"mycpu_top u_datapath D_master_jump_take", false,-1);
        tracep->declBit(c+232,"mycpu_top u_datapath D_master_jump_conflict", false,-1);
        tracep->declBus(c+233,"mycpu_top u_datapath D_master_branch_target", false,-1, 31,0);
        tracep->declBus(c+1161,"mycpu_top u_datapath D_master_jump_target", false,-1, 31,0);
        tracep->declBus(c+234,"mycpu_top u_datapath D_master_pc_plus4", false,-1, 31,0);
        tracep->declBus(c+1162,"mycpu_top u_datapath D_master_bj_target", false,-1, 31,0);
        tracep->declBus(c+235,"mycpu_top u_datapath D_master_pc", false,-1, 31,0);
        tracep->declBus(c+236,"mycpu_top u_datapath D_slave_pc", false,-1, 31,0);
        tracep->declBus(c+237,"mycpu_top u_datapath D_master_inst", false,-1, 31,0);
        tracep->declBus(c+238,"mycpu_top u_datapath D_slave_inst", false,-1, 31,0);
        tracep->declBit(c+239,"mycpu_top u_datapath D_master_tlb_refill", false,-1);
        tracep->declBit(c+240,"mycpu_top u_datapath D_slave_tlb_refill", false,-1);
        tracep->declBit(c+241,"mycpu_top u_datapath D_master_tlb_invalid", false,-1);
        tracep->declBit(c+242,"mycpu_top u_datapath D_slave_tlb_invalid", false,-1);
        tracep->declBit(c+243,"mycpu_top u_datapath D_master_is_in_delayslot", false,-1);
        tracep->declBit(c+1163,"mycpu_top u_datapath D_slave_is_in_delayslot", false,-1);
        tracep->declBit(c+244,"mycpu_top u_datapath D_master_is_link_pc8", false,-1);
        tracep->declBit(c+245,"mycpu_top u_datapath D_slave_is_link_pc8", false,-1);
        tracep->declBus(c+246,"mycpu_top u_datapath D_master_op", false,-1, 5,0);
        tracep->declBus(c+247,"mycpu_top u_datapath D_slave_op", false,-1, 5,0);
        tracep->declBus(c+248,"mycpu_top u_datapath D_master_funct", false,-1, 5,0);
        tracep->declBus(c+249,"mycpu_top u_datapath D_slave_funct", false,-1, 5,0);
        tracep->declBus(c+250,"mycpu_top u_datapath D_master_shamt_value", false,-1, 31,0);
        tracep->declBus(c+251,"mycpu_top u_datapath D_slave_shamt_value", false,-1, 31,0);
        tracep->declBus(c+252,"mycpu_top u_datapath D_master_imm_value", false,-1, 31,0);
        tracep->declBus(c+253,"mycpu_top u_datapath D_slave_imm_value", false,-1, 31,0);
        tracep->declBit(c+254,"mycpu_top u_datapath D_master_break_inst", false,-1);
        tracep->declBit(c+255,"mycpu_top u_datapath D_slave_break_inst", false,-1);
        tracep->declBit(c+256,"mycpu_top u_datapath D_master_syscall_inst", false,-1);
        tracep->declBit(c+257,"mycpu_top u_datapath D_slave_syscall_inst", false,-1);
        tracep->declBit(c+258,"mycpu_top u_datapath D_master_eret_inst", false,-1);
        tracep->declBit(c+259,"mycpu_top u_datapath D_slave_eret_inst", false,-1);
        tracep->declBit(c+260,"mycpu_top u_datapath D_master_id_cpu", false,-1);
        tracep->declBit(c+261,"mycpu_top u_datapath D_slave_id_cpu", false,-1);
        tracep->declBit(c+262,"mycpu_top u_datapath D_master_cop0_info\206 mtc0_en", false,-1);
        tracep->declBit(c+263,"mycpu_top u_datapath D_master_cop0_info\206 TLBP", false,-1);
        tracep->declBit(c+264,"mycpu_top u_datapath D_master_cop0_info\206 TLBR", false,-1);
        tracep->declBit(c+265,"mycpu_top u_datapath D_master_cop0_info\206 TLBWI", false,-1);
        tracep->declBit(c+266,"mycpu_top u_datapath D_master_cop0_info\206 TLBWR", false,-1);
        tracep->declBus(c+267,"mycpu_top u_datapath D_master_cop0_info\206 reg_addr", false,-1, 4,0);
        tracep->declBus(c+268,"mycpu_top u_datapath D_master_cop0_info\206 sel_addr", false,-1, 2,0);
        tracep->declBit(c+269,"mycpu_top u_datapath D_slave_cop0_info\206 mtc0_en", false,-1);
        tracep->declBit(c+270,"mycpu_top u_datapath D_slave_cop0_info\206 TLBP", false,-1);
        tracep->declBit(c+271,"mycpu_top u_datapath D_slave_cop0_info\206 TLBR", false,-1);
        tracep->declBit(c+272,"mycpu_top u_datapath D_slave_cop0_info\206 TLBWI", false,-1);
        tracep->declBit(c+273,"mycpu_top u_datapath D_slave_cop0_info\206 TLBWR", false,-1);
        tracep->declBus(c+274,"mycpu_top u_datapath D_slave_cop0_info\206 reg_addr", false,-1, 4,0);
        tracep->declBus(c+275,"mycpu_top u_datapath D_slave_cop0_info\206 sel_addr", false,-1, 2,0);
        tracep->declBit(c+276,"mycpu_top u_datapath D_master_undefined_inst", false,-1);
        tracep->declBit(c+277,"mycpu_top u_datapath D_slave_undefined_inst", false,-1);
        tracep->declBus(c+278,"mycpu_top u_datapath D_master_branch_type", false,-1, 3,0);
        tracep->declBus(c+279,"mycpu_top u_datapath D_slave_branch_type", false,-1, 3,0);
        tracep->declBus(c+280,"mycpu_top u_datapath D_master_trap_type", false,-1, 3,0);
        tracep->declBus(c+281,"mycpu_top u_datapath D_slave_trap_type", false,-1, 3,0);
        tracep->declBus(c+282,"mycpu_top u_datapath D_master_cmov_type", false,-1, 1,0);
        tracep->declBus(c+283,"mycpu_top u_datapath D_slave_cmov_type", false,-1, 1,0);
        tracep->declBus(c+284,"mycpu_top u_datapath D_master_rs", false,-1, 4,0);
        tracep->declBus(c+285,"mycpu_top u_datapath D_slave_rs", false,-1, 4,0);
        tracep->declBus(c+286,"mycpu_top u_datapath D_master_rt", false,-1, 4,0);
        tracep->declBus(c+287,"mycpu_top u_datapath D_slave_rt", false,-1, 4,0);
        tracep->declBus(c+288,"mycpu_top u_datapath D_master_rd", false,-1, 4,0);
        tracep->declBus(c+289,"mycpu_top u_datapath D_slave_rd", false,-1, 4,0);
        tracep->declBus(c+1204,"mycpu_top u_datapath D_master_rs_value_tmp", false,-1, 31,0);
        tracep->declBus(c+1164,"mycpu_top u_datapath D_slave_rs_value_tmp", false,-1, 31,0);
        tracep->declBus(c+1165,"mycpu_top u_datapath D_master_rt_value_tmp", false,-1, 31,0);
        tracep->declBus(c+1166,"mycpu_top u_datapath D_slave_rt_value_tmp", false,-1, 31,0);
        tracep->declBus(c+1167,"mycpu_top u_datapath D_master_rs_value", false,-1, 31,0);
        tracep->declBus(c+1168,"mycpu_top u_datapath D_slave_rs_value", false,-1, 31,0);
        tracep->declBus(c+1169,"mycpu_top u_datapath D_master_rt_value", false,-1, 31,0);
        tracep->declBus(c+1170,"mycpu_top u_datapath D_slave_rt_value", false,-1, 31,0);
        tracep->declBus(c+290,"mycpu_top u_datapath D_master_reg_waddr", false,-1, 4,0);
        tracep->declBus(c+291,"mycpu_top u_datapath D_slave_reg_waddr", false,-1, 4,0);
        tracep->declBit(c+292,"mycpu_top u_datapath D_master_except\206 if_adel", false,-1);
        tracep->declBit(c+293,"mycpu_top u_datapath D_master_except\206 if_tlbl", false,-1);
        tracep->declBit(c+239,"mycpu_top u_datapath D_master_except\206 if_tlbrf", false,-1);
        tracep->declBit(c+276,"mycpu_top u_datapath D_master_except\206 id_ri", false,-1);
        tracep->declBit(c+256,"mycpu_top u_datapath D_master_except\206 id_syscall", false,-1);
        tracep->declBit(c+254,"mycpu_top u_datapath D_master_except\206 id_break", false,-1);
        tracep->declBit(c+258,"mycpu_top u_datapath D_master_except\206 id_eret", false,-1);
        tracep->declBit(c+225,"mycpu_top u_datapath D_master_except\206 id_int", false,-1);
        tracep->declBit(c+260,"mycpu_top u_datapath D_master_except\206 id_cpu", false,-1);
        tracep->declBit(c+1339,"mycpu_top u_datapath D_master_except\206 ex_ov", false,-1);
        tracep->declBit(c+1339,"mycpu_top u_datapath D_master_except\206 ex_adel", false,-1);
        tracep->declBit(c+1339,"mycpu_top u_datapath D_master_except\206 ex_ades", false,-1);
        tracep->declBit(c+1339,"mycpu_top u_datapath D_master_except\206 ex_tlbl", false,-1);
        tracep->declBit(c+1339,"mycpu_top u_datapath D_master_except\206 ex_tlbs", false,-1);
        tracep->declBit(c+1339,"mycpu_top u_datapath D_master_except\206 ex_tlbm", false,-1);
        tracep->declBit(c+1339,"mycpu_top u_datapath D_master_except\206 ex_tlbrf", false,-1);
        tracep->declBit(c+1339,"mycpu_top u_datapath D_master_except\206 ex_trap", false,-1);
        tracep->declBit(c+294,"mycpu_top u_datapath D_slave_except\206 if_adel", false,-1);
        tracep->declBit(c+295,"mycpu_top u_datapath D_slave_except\206 if_tlbl", false,-1);
        tracep->declBit(c+240,"mycpu_top u_datapath D_slave_except\206 if_tlbrf", false,-1);
        tracep->declBit(c+277,"mycpu_top u_datapath D_slave_except\206 id_ri", false,-1);
        tracep->declBit(c+257,"mycpu_top u_datapath D_slave_except\206 id_syscall", false,-1);
        tracep->declBit(c+255,"mycpu_top u_datapath D_slave_except\206 id_break", false,-1);
        tracep->declBit(c+259,"mycpu_top u_datapath D_slave_except\206 id_eret", false,-1);
        tracep->declBit(c+296,"mycpu_top u_datapath D_slave_except\206 id_int", false,-1);
        tracep->declBit(c+297,"mycpu_top u_datapath D_slave_except\206 id_cpu", false,-1);
        tracep->declBit(c+298,"mycpu_top u_datapath D_slave_except\206 ex_ov", false,-1);
        tracep->declBit(c+299,"mycpu_top u_datapath D_slave_except\206 ex_adel", false,-1);
        tracep->declBit(c+300,"mycpu_top u_datapath D_slave_except\206 ex_ades", false,-1);
        tracep->declBit(c+301,"mycpu_top u_datapath D_slave_except\206 ex_tlbl", false,-1);
        tracep->declBit(c+302,"mycpu_top u_datapath D_slave_except\206 ex_tlbs", false,-1);
        tracep->declBit(c+303,"mycpu_top u_datapath D_slave_except\206 ex_tlbm", false,-1);
        tracep->declBit(c+304,"mycpu_top u_datapath D_slave_except\206 ex_tlbrf", false,-1);
        tracep->declBit(c+305,"mycpu_top u_datapath D_slave_except\206 ex_trap", false,-1);
        tracep->declBit(c+306,"mycpu_top u_datapath E_master_exp_trap", false,-1);
        tracep->declBus(c+307,"mycpu_top u_datapath E_master_branch_type", false,-1, 3,0);
        tracep->declBus(c+308,"mycpu_top u_datapath E_master_trap_type", false,-1, 3,0);
        tracep->declBit(c+309,"mycpu_top u_datapath E_master_is_branch", false,-1);
        tracep->declBit(c+1205,"mycpu_top u_datapath E_master_bj", false,-1);
        tracep->declBit(c+310,"mycpu_top u_datapath E_next_pc8", false,-1);
        tracep->declBit(c+311,"mycpu_top u_datapath E_master_pred_take", false,-1);
        tracep->declBit(c+312,"mycpu_top u_datapath E_master_actual_take", false,-1);
        tracep->declBit(c+313,"mycpu_top u_datapath E_master_pred_fail", false,-1);
        tracep->declBit(c+314,"mycpu_top u_datapath E_master_jump_conflict_tmp", false,-1);
        tracep->declBit(c+315,"mycpu_top u_datapath E_master_is_link_pc8", false,-1);
        tracep->declBus(c+316,"mycpu_top u_datapath E_master_branch_target", false,-1, 31,0);
        tracep->declBus(c+317,"mycpu_top u_datapath E_master_pc_plus4", false,-1, 31,0);
        tracep->declBus(c+318,"mycpu_top u_datapath E_master_pc_plus8", false,-1, 31,0);
        tracep->declBus(c+319,"mycpu_top u_datapath E_master_bj_target", false,-1, 31,0);
        tracep->declBit(c+1340,"mycpu_top u_datapath E_master_alu_stall", false,-1);
        tracep->declBit(c+1341,"mycpu_top u_datapath E_slave_alu_stall", false,-1);
        tracep->declBus(c+320,"mycpu_top u_datapath E_master_rs", false,-1, 4,0);
        tracep->declBus(c+321,"mycpu_top u_datapath E_slave_rs", false,-1, 4,0);
        tracep->declBus(c+322,"mycpu_top u_datapath E_master_rt", false,-1, 4,0);
        tracep->declBus(c+323,"mycpu_top u_datapath E_slave_rt", false,-1, 4,0);
        tracep->declBus(c+324,"mycpu_top u_datapath E_master_inst", false,-1, 31,0);
        tracep->declBus(c+325,"mycpu_top u_datapath E_slave_inst", false,-1, 31,0);
        tracep->declBus(c+326,"mycpu_top u_datapath E_master_shamt_value", false,-1, 31,0);
        tracep->declBus(c+327,"mycpu_top u_datapath E_slave_shamt_value", false,-1, 31,0);
        tracep->declBus(c+328,"mycpu_top u_datapath E_master_rs_value", false,-1, 31,0);
        tracep->declBus(c+329,"mycpu_top u_datapath E_slave_rs_value", false,-1, 31,0);
        tracep->declBus(c+330,"mycpu_top u_datapath E_master_rt_value", false,-1, 31,0);
        tracep->declBus(c+331,"mycpu_top u_datapath E_slave_rt_value", false,-1, 31,0);
        tracep->declBus(c+332,"mycpu_top u_datapath E_master_imm_value", false,-1, 31,0);
        tracep->declBus(c+333,"mycpu_top u_datapath E_slave_imm_value", false,-1, 31,0);
        tracep->declBus(c+334,"mycpu_top u_datapath E_master_pc", false,-1, 31,0);
        tracep->declBus(c+335,"mycpu_top u_datapath E_slave_pc", false,-1, 31,0);
        tracep->declBus(c+336,"mycpu_top u_datapath E_master_op", false,-1, 5,0);
        tracep->declBus(c+337,"mycpu_top u_datapath E_slave_op", false,-1, 5,0);
        tracep->declBus(c+338,"mycpu_top u_datapath E_master_reg_waddr", false,-1, 4,0);
        tracep->declBus(c+339,"mycpu_top u_datapath E_slave_reg_waddr", false,-1, 4,0);
        tracep->declBit(c+340,"mycpu_top u_datapath E_master_is_in_delayslot", false,-1);
        tracep->declBit(c+341,"mycpu_top u_datapath E_slave_is_in_delayslot", false,-1);
        tracep->declBit(c+342,"mycpu_top u_datapath E_master_except_temp\206 if_adel", false,-1);
        tracep->declBit(c+343,"mycpu_top u_datapath E_master_except_temp\206 if_tlbl", false,-1);
        tracep->declBit(c+344,"mycpu_top u_datapath E_master_except_temp\206 if_tlbrf", false,-1);
        tracep->declBit(c+345,"mycpu_top u_datapath E_master_except_temp\206 id_ri", false,-1);
        tracep->declBit(c+346,"mycpu_top u_datapath E_master_except_temp\206 id_syscall", false,-1);
        tracep->declBit(c+347,"mycpu_top u_datapath E_master_except_temp\206 id_break", false,-1);
        tracep->declBit(c+348,"mycpu_top u_datapath E_master_except_temp\206 id_eret", false,-1);
        tracep->declBit(c+349,"mycpu_top u_datapath E_master_except_temp\206 id_int", false,-1);
        tracep->declBit(c+350,"mycpu_top u_datapath E_master_except_temp\206 id_cpu", false,-1);
        tracep->declBit(c+351,"mycpu_top u_datapath E_master_except_temp\206 ex_ov", false,-1);
        tracep->declBit(c+352,"mycpu_top u_datapath E_master_except_temp\206 ex_adel", false,-1);
        tracep->declBit(c+353,"mycpu_top u_datapath E_master_except_temp\206 ex_ades", false,-1);
        tracep->declBit(c+354,"mycpu_top u_datapath E_master_except_temp\206 ex_tlbl", false,-1);
        tracep->declBit(c+355,"mycpu_top u_datapath E_master_except_temp\206 ex_tlbs", false,-1);
        tracep->declBit(c+356,"mycpu_top u_datapath E_master_except_temp\206 ex_tlbm", false,-1);
        tracep->declBit(c+357,"mycpu_top u_datapath E_master_except_temp\206 ex_tlbrf", false,-1);
        tracep->declBit(c+358,"mycpu_top u_datapath E_master_except_temp\206 ex_trap", false,-1);
        tracep->declBit(c+359,"mycpu_top u_datapath E_slave_except_temp\206 if_adel", false,-1);
        tracep->declBit(c+360,"mycpu_top u_datapath E_slave_except_temp\206 if_tlbl", false,-1);
        tracep->declBit(c+361,"mycpu_top u_datapath E_slave_except_temp\206 if_tlbrf", false,-1);
        tracep->declBit(c+362,"mycpu_top u_datapath E_slave_except_temp\206 id_ri", false,-1);
        tracep->declBit(c+363,"mycpu_top u_datapath E_slave_except_temp\206 id_syscall", false,-1);
        tracep->declBit(c+364,"mycpu_top u_datapath E_slave_except_temp\206 id_break", false,-1);
        tracep->declBit(c+365,"mycpu_top u_datapath E_slave_except_temp\206 id_eret", false,-1);
        tracep->declBit(c+366,"mycpu_top u_datapath E_slave_except_temp\206 id_int", false,-1);
        tracep->declBit(c+367,"mycpu_top u_datapath E_slave_except_temp\206 id_cpu", false,-1);
        tracep->declBit(c+368,"mycpu_top u_datapath E_slave_except_temp\206 ex_ov", false,-1);
        tracep->declBit(c+369,"mycpu_top u_datapath E_slave_except_temp\206 ex_adel", false,-1);
        tracep->declBit(c+370,"mycpu_top u_datapath E_slave_except_temp\206 ex_ades", false,-1);
        tracep->declBit(c+371,"mycpu_top u_datapath E_slave_except_temp\206 ex_tlbl", false,-1);
        tracep->declBit(c+372,"mycpu_top u_datapath E_slave_except_temp\206 ex_tlbs", false,-1);
        tracep->declBit(c+373,"mycpu_top u_datapath E_slave_except_temp\206 ex_tlbm", false,-1);
        tracep->declBit(c+374,"mycpu_top u_datapath E_slave_except_temp\206 ex_tlbrf", false,-1);
        tracep->declBit(c+375,"mycpu_top u_datapath E_slave_except_temp\206 ex_trap", false,-1);
        tracep->declBit(c+1206,"mycpu_top u_datapath E_master_except\206 if_adel", false,-1);
        tracep->declBit(c+1207,"mycpu_top u_datapath E_master_except\206 if_tlbl", false,-1);
        tracep->declBit(c+1208,"mycpu_top u_datapath E_master_except\206 if_tlbrf", false,-1);
        tracep->declBit(c+1209,"mycpu_top u_datapath E_master_except\206 id_ri", false,-1);
        tracep->declBit(c+1210,"mycpu_top u_datapath E_master_except\206 id_syscall", false,-1);
        tracep->declBit(c+1211,"mycpu_top u_datapath E_master_except\206 id_break", false,-1);
        tracep->declBit(c+1212,"mycpu_top u_datapath E_master_except\206 id_eret", false,-1);
        tracep->declBit(c+1213,"mycpu_top u_datapath E_master_except\206 id_int", false,-1);
        tracep->declBit(c+1214,"mycpu_top u_datapath E_master_except\206 id_cpu", false,-1);
        tracep->declBit(c+1215,"mycpu_top u_datapath E_master_except\206 ex_ov", false,-1);
        tracep->declBit(c+1216,"mycpu_top u_datapath E_master_except\206 ex_adel", false,-1);
        tracep->declBit(c+1217,"mycpu_top u_datapath E_master_except\206 ex_ades", false,-1);
        tracep->declBit(c+1218,"mycpu_top u_datapath E_master_except\206 ex_tlbl", false,-1);
        tracep->declBit(c+1219,"mycpu_top u_datapath E_master_except\206 ex_tlbs", false,-1);
        tracep->declBit(c+1220,"mycpu_top u_datapath E_master_except\206 ex_tlbm", false,-1);
        tracep->declBit(c+1221,"mycpu_top u_datapath E_master_except\206 ex_tlbrf", false,-1);
        tracep->declBit(c+1222,"mycpu_top u_datapath E_master_except\206 ex_trap", false,-1);
        tracep->declBit(c+1223,"mycpu_top u_datapath E_slave_except\206 if_adel", false,-1);
        tracep->declBit(c+1224,"mycpu_top u_datapath E_slave_except\206 if_tlbl", false,-1);
        tracep->declBit(c+1225,"mycpu_top u_datapath E_slave_except\206 if_tlbrf", false,-1);
        tracep->declBit(c+1226,"mycpu_top u_datapath E_slave_except\206 id_ri", false,-1);
        tracep->declBit(c+1227,"mycpu_top u_datapath E_slave_except\206 id_syscall", false,-1);
        tracep->declBit(c+1228,"mycpu_top u_datapath E_slave_except\206 id_break", false,-1);
        tracep->declBit(c+1229,"mycpu_top u_datapath E_slave_except\206 id_eret", false,-1);
        tracep->declBit(c+1230,"mycpu_top u_datapath E_slave_except\206 id_int", false,-1);
        tracep->declBit(c+1231,"mycpu_top u_datapath E_slave_except\206 id_cpu", false,-1);
        tracep->declBit(c+1232,"mycpu_top u_datapath E_slave_except\206 ex_ov", false,-1);
        tracep->declBit(c+1233,"mycpu_top u_datapath E_slave_except\206 ex_adel", false,-1);
        tracep->declBit(c+1234,"mycpu_top u_datapath E_slave_except\206 ex_ades", false,-1);
        tracep->declBit(c+1235,"mycpu_top u_datapath E_slave_except\206 ex_tlbl", false,-1);
        tracep->declBit(c+1236,"mycpu_top u_datapath E_slave_except\206 ex_tlbs", false,-1);
        tracep->declBit(c+1237,"mycpu_top u_datapath E_slave_except\206 ex_tlbm", false,-1);
        tracep->declBit(c+1238,"mycpu_top u_datapath E_slave_except\206 ex_tlbrf", false,-1);
        tracep->declBit(c+1239,"mycpu_top u_datapath E_slave_except\206 ex_trap", false,-1);
        tracep->declBit(c+376,"mycpu_top u_datapath E_master_cop0_info\206 mtc0_en", false,-1);
        tracep->declBit(c+377,"mycpu_top u_datapath E_master_cop0_info\206 TLBP", false,-1);
        tracep->declBit(c+378,"mycpu_top u_datapath E_master_cop0_info\206 TLBR", false,-1);
        tracep->declBit(c+379,"mycpu_top u_datapath E_master_cop0_info\206 TLBWI", false,-1);
        tracep->declBit(c+380,"mycpu_top u_datapath E_master_cop0_info\206 TLBWR", false,-1);
        tracep->declBus(c+381,"mycpu_top u_datapath E_master_cop0_info\206 reg_addr", false,-1, 4,0);
        tracep->declBus(c+382,"mycpu_top u_datapath E_master_cop0_info\206 sel_addr", false,-1, 2,0);
        tracep->declBit(c+383,"mycpu_top u_datapath E_slave_cop0_info\206 mtc0_en", false,-1);
        tracep->declBit(c+384,"mycpu_top u_datapath E_slave_cop0_info\206 TLBP", false,-1);
        tracep->declBit(c+385,"mycpu_top u_datapath E_slave_cop0_info\206 TLBR", false,-1);
        tracep->declBit(c+386,"mycpu_top u_datapath E_slave_cop0_info\206 TLBWI", false,-1);
        tracep->declBit(c+387,"mycpu_top u_datapath E_slave_cop0_info\206 TLBWR", false,-1);
        tracep->declBus(c+388,"mycpu_top u_datapath E_slave_cop0_info\206 reg_addr", false,-1, 4,0);
        tracep->declBus(c+389,"mycpu_top u_datapath E_slave_cop0_info\206 sel_addr", false,-1, 2,0);
        tracep->declBit(c+390,"mycpu_top u_datapath E_cop0_info\206 mtc0_en", false,-1);
        tracep->declBit(c+391,"mycpu_top u_datapath E_cop0_info\206 TLBP", false,-1);
        tracep->declBit(c+392,"mycpu_top u_datapath E_cop0_info\206 TLBR", false,-1);
        tracep->declBit(c+393,"mycpu_top u_datapath E_cop0_info\206 TLBWI", false,-1);
        tracep->declBit(c+394,"mycpu_top u_datapath E_cop0_info\206 TLBWR", false,-1);
        tracep->declBus(c+395,"mycpu_top u_datapath E_cop0_info\206 reg_addr", false,-1, 4,0);
        tracep->declBus(c+396,"mycpu_top u_datapath E_cop0_info\206 sel_addr", false,-1, 2,0);
        tracep->declBus(c+397,"mycpu_top u_datapath E_master_cmov_type", false,-1, 1,0);
        tracep->declBus(c+398,"mycpu_top u_datapath E_slave_cmov_type", false,-1, 1,0);
        tracep->declBus(c+399,"mycpu_top u_datapath E_master_mem_addr", false,-1, 31,0);
        tracep->declBus(c+400,"mycpu_top u_datapath E_slave_mem_addr", false,-1, 31,0);
        tracep->declBus(c+401,"mycpu_top u_datapath E_master_alu_srca", false,-1, 31,0);
        tracep->declBus(c+402,"mycpu_top u_datapath E_slave_alu_srca", false,-1, 31,0);
        tracep->declBus(c+403,"mycpu_top u_datapath E_master_alu_srcb", false,-1, 31,0);
        tracep->declBus(c+404,"mycpu_top u_datapath E_slave_alu_srcb", false,-1, 31,0);
        tracep->declBus(c+1342,"mycpu_top u_datapath E_master_alu_res_tmp", false,-1, 31,0);
        tracep->declBus(c+1183,"mycpu_top u_datapath E_master_alu_res", false,-1, 31,0);
        tracep->declBus(c+1240,"mycpu_top u_datapath E_slave_alu_res", false,-1, 31,0);
        tracep->declQuad(c+1343,"mycpu_top u_datapath E_master_alu_out64", false,-1, 63,0);
        tracep->declQuad(c+1345,"mycpu_top u_datapath E_slave_alu_out64", false,-1, 63,0);
        tracep->declBit(c+1241,"mycpu_top u_datapath E_master_overflow", false,-1);
        tracep->declBit(c+1242,"mycpu_top u_datapath E_slave_overflow", false,-1);
        tracep->declBus(c+405,"mycpu_top u_datapath mem_opE", false,-1, 5,0);
        tracep->declBit(c+406,"mycpu_top u_datapath mem_enE", false,-1);
        tracep->declBus(c+407,"mycpu_top u_datapath mem_wdataE", false,-1, 31,0);
        tracep->declBit(c+408,"mycpu_top u_datapath E_master_mem_sel", false,-1);
        tracep->declBit(c+409,"mycpu_top u_datapath E_slave_mem_sel", false,-1);
        tracep->declBit(c+410,"mycpu_top u_datapath E_master_mem_adel", false,-1);
        tracep->declBit(c+411,"mycpu_top u_datapath E_slave_mem_adel", false,-1);
        tracep->declBit(c+412,"mycpu_top u_datapath E_master_mem_ades", false,-1);
        tracep->declBit(c+413,"mycpu_top u_datapath E_slave_mem_ades", false,-1);
        tracep->declBit(c+1243,"mycpu_top u_datapath M_master_flush_all", false,-1);
        tracep->declBus(c+414,"mycpu_top u_datapath M_master_inst", false,-1, 31,0);
        tracep->declBus(c+415,"mycpu_top u_datapath M_slave_inst", false,-1, 31,0);
        tracep->declBus(c+416,"mycpu_top u_datapath M_master_pc", false,-1, 31,0);
        tracep->declBus(c+417,"mycpu_top u_datapath M_slave_pc", false,-1, 31,0);
        tracep->declBus(c+16,"mycpu_top u_datapath M_master_alu_res", false,-1, 31,0);
        tracep->declBus(c+418,"mycpu_top u_datapath M_slave_alu_res", false,-1, 31,0);
        tracep->declBus(c+419,"mycpu_top u_datapath M_master_reg_waddr", false,-1, 4,0);
        tracep->declBus(c+420,"mycpu_top u_datapath M_slave_reg_waddr", false,-1, 4,0);
        tracep->declBit(c+421,"mycpu_top u_datapath M_master_except_temp\206 if_adel", false,-1);
        tracep->declBit(c+422,"mycpu_top u_datapath M_master_except_temp\206 if_tlbl", false,-1);
        tracep->declBit(c+423,"mycpu_top u_datapath M_master_except_temp\206 if_tlbrf", false,-1);
        tracep->declBit(c+424,"mycpu_top u_datapath M_master_except_temp\206 id_ri", false,-1);
        tracep->declBit(c+425,"mycpu_top u_datapath M_master_except_temp\206 id_syscall", false,-1);
        tracep->declBit(c+426,"mycpu_top u_datapath M_master_except_temp\206 id_break", false,-1);
        tracep->declBit(c+427,"mycpu_top u_datapath M_master_except_temp\206 id_eret", false,-1);
        tracep->declBit(c+428,"mycpu_top u_datapath M_master_except_temp\206 id_int", false,-1);
        tracep->declBit(c+429,"mycpu_top u_datapath M_master_except_temp\206 id_cpu", false,-1);
        tracep->declBit(c+430,"mycpu_top u_datapath M_master_except_temp\206 ex_ov", false,-1);
        tracep->declBit(c+431,"mycpu_top u_datapath M_master_except_temp\206 ex_adel", false,-1);
        tracep->declBit(c+432,"mycpu_top u_datapath M_master_except_temp\206 ex_ades", false,-1);
        tracep->declBit(c+433,"mycpu_top u_datapath M_master_except_temp\206 ex_tlbl", false,-1);
        tracep->declBit(c+434,"mycpu_top u_datapath M_master_except_temp\206 ex_tlbs", false,-1);
        tracep->declBit(c+435,"mycpu_top u_datapath M_master_except_temp\206 ex_tlbm", false,-1);
        tracep->declBit(c+436,"mycpu_top u_datapath M_master_except_temp\206 ex_tlbrf", false,-1);
        tracep->declBit(c+437,"mycpu_top u_datapath M_master_except_temp\206 ex_trap", false,-1);
        tracep->declBit(c+438,"mycpu_top u_datapath M_slave_except_temp\206 if_adel", false,-1);
        tracep->declBit(c+439,"mycpu_top u_datapath M_slave_except_temp\206 if_tlbl", false,-1);
        tracep->declBit(c+440,"mycpu_top u_datapath M_slave_except_temp\206 if_tlbrf", false,-1);
        tracep->declBit(c+441,"mycpu_top u_datapath M_slave_except_temp\206 id_ri", false,-1);
        tracep->declBit(c+442,"mycpu_top u_datapath M_slave_except_temp\206 id_syscall", false,-1);
        tracep->declBit(c+443,"mycpu_top u_datapath M_slave_except_temp\206 id_break", false,-1);
        tracep->declBit(c+444,"mycpu_top u_datapath M_slave_except_temp\206 id_eret", false,-1);
        tracep->declBit(c+445,"mycpu_top u_datapath M_slave_except_temp\206 id_int", false,-1);
        tracep->declBit(c+446,"mycpu_top u_datapath M_slave_except_temp\206 id_cpu", false,-1);
        tracep->declBit(c+447,"mycpu_top u_datapath M_slave_except_temp\206 ex_ov", false,-1);
        tracep->declBit(c+448,"mycpu_top u_datapath M_slave_except_temp\206 ex_adel", false,-1);
        tracep->declBit(c+449,"mycpu_top u_datapath M_slave_except_temp\206 ex_ades", false,-1);
        tracep->declBit(c+450,"mycpu_top u_datapath M_slave_except_temp\206 ex_tlbl", false,-1);
        tracep->declBit(c+451,"mycpu_top u_datapath M_slave_except_temp\206 ex_tlbs", false,-1);
        tracep->declBit(c+452,"mycpu_top u_datapath M_slave_except_temp\206 ex_tlbm", false,-1);
        tracep->declBit(c+453,"mycpu_top u_datapath M_slave_except_temp\206 ex_tlbrf", false,-1);
        tracep->declBit(c+454,"mycpu_top u_datapath M_slave_except_temp\206 ex_trap", false,-1);
        tracep->declBit(c+455,"mycpu_top u_datapath M_master_except\206 if_adel", false,-1);
        tracep->declBit(c+456,"mycpu_top u_datapath M_master_except\206 if_tlbl", false,-1);
        tracep->declBit(c+457,"mycpu_top u_datapath M_master_except\206 if_tlbrf", false,-1);
        tracep->declBit(c+458,"mycpu_top u_datapath M_master_except\206 id_ri", false,-1);
        tracep->declBit(c+459,"mycpu_top u_datapath M_master_except\206 id_syscall", false,-1);
        tracep->declBit(c+460,"mycpu_top u_datapath M_master_except\206 id_break", false,-1);
        tracep->declBit(c+461,"mycpu_top u_datapath M_master_except\206 id_eret", false,-1);
        tracep->declBit(c+462,"mycpu_top u_datapath M_master_except\206 id_int", false,-1);
        tracep->declBit(c+463,"mycpu_top u_datapath M_master_except\206 id_cpu", false,-1);
        tracep->declBit(c+464,"mycpu_top u_datapath M_master_except\206 ex_ov", false,-1);
        tracep->declBit(c+465,"mycpu_top u_datapath M_master_except\206 ex_adel", false,-1);
        tracep->declBit(c+466,"mycpu_top u_datapath M_master_except\206 ex_ades", false,-1);
        tracep->declBit(c+467,"mycpu_top u_datapath M_master_except\206 ex_tlbl", false,-1);
        tracep->declBit(c+468,"mycpu_top u_datapath M_master_except\206 ex_tlbs", false,-1);
        tracep->declBit(c+469,"mycpu_top u_datapath M_master_except\206 ex_tlbm", false,-1);
        tracep->declBit(c+470,"mycpu_top u_datapath M_master_except\206 ex_tlbrf", false,-1);
        tracep->declBit(c+471,"mycpu_top u_datapath M_master_except\206 ex_trap", false,-1);
        tracep->declBit(c+472,"mycpu_top u_datapath M_slave_except\206 if_adel", false,-1);
        tracep->declBit(c+473,"mycpu_top u_datapath M_slave_except\206 if_tlbl", false,-1);
        tracep->declBit(c+474,"mycpu_top u_datapath M_slave_except\206 if_tlbrf", false,-1);
        tracep->declBit(c+475,"mycpu_top u_datapath M_slave_except\206 id_ri", false,-1);
        tracep->declBit(c+476,"mycpu_top u_datapath M_slave_except\206 id_syscall", false,-1);
        tracep->declBit(c+477,"mycpu_top u_datapath M_slave_except\206 id_break", false,-1);
        tracep->declBit(c+478,"mycpu_top u_datapath M_slave_except\206 id_eret", false,-1);
        tracep->declBit(c+479,"mycpu_top u_datapath M_slave_except\206 id_int", false,-1);
        tracep->declBit(c+480,"mycpu_top u_datapath M_slave_except\206 id_cpu", false,-1);
        tracep->declBit(c+481,"mycpu_top u_datapath M_slave_except\206 ex_ov", false,-1);
        tracep->declBit(c+482,"mycpu_top u_datapath M_slave_except\206 ex_adel", false,-1);
        tracep->declBit(c+483,"mycpu_top u_datapath M_slave_except\206 ex_ades", false,-1);
        tracep->declBit(c+484,"mycpu_top u_datapath M_slave_except\206 ex_tlbl", false,-1);
        tracep->declBit(c+485,"mycpu_top u_datapath M_slave_except\206 ex_tlbs", false,-1);
        tracep->declBit(c+486,"mycpu_top u_datapath M_slave_except\206 ex_tlbm", false,-1);
        tracep->declBit(c+487,"mycpu_top u_datapath M_slave_except\206 ex_tlbrf", false,-1);
        tracep->declBit(c+488,"mycpu_top u_datapath M_slave_except\206 ex_trap", false,-1);
        tracep->declBit(c+489,"mycpu_top u_datapath M_master_is_in_delayslot", false,-1);
        tracep->declBit(c+490,"mycpu_top u_datapath M_slave_is_in_delayslot", false,-1);
        tracep->declBus(c+491,"mycpu_top u_datapath M_master_pc_plus4", false,-1, 31,0);
        tracep->declBus(c+492,"mycpu_top u_datapath mem_rdataM", false,-1, 31,0);
        tracep->declBit(c+493,"mycpu_top u_datapath mem_enM", false,-1);
        tracep->declBit(c+494,"mycpu_top u_datapath mem_renM", false,-1);
        tracep->declBit(c+495,"mycpu_top u_datapath mem_wenM", false,-1);
        tracep->declBus(c+496,"mycpu_top u_datapath mem_opM", false,-1, 5,0);
        tracep->declBus(c+33,"mycpu_top u_datapath mem_addrM", false,-1, 31,0);
        tracep->declBus(c+497,"mycpu_top u_datapath mem_wdataM", false,-1, 31,0);
        tracep->declBit(c+498,"mycpu_top u_datapath M_master_mem_sel", false,-1);
        tracep->declBit(c+499,"mycpu_top u_datapath M_slave_mem_sel", false,-1);
        tracep->declBus(c+500,"mycpu_top u_datapath M_master_mem_rdata", false,-1, 31,0);
        tracep->declBus(c+501,"mycpu_top u_datapath M_slave_mem_rdata", false,-1, 31,0);
        tracep->declBus(c+502,"mycpu_top u_datapath W_master_inst", false,-1, 31,0);
        tracep->declBus(c+503,"mycpu_top u_datapath W_slave_inst", false,-1, 31,0);
        tracep->declBus(c+504,"mycpu_top u_datapath W_master_pc", false,-1, 31,0);
        tracep->declBus(c+505,"mycpu_top u_datapath W_slave_pc", false,-1, 31,0);
        tracep->declBus(c+1347,"mycpu_top u_datapath W_master_alu_res", false,-1, 31,0);
        tracep->declBus(c+1348,"mycpu_top u_datapath W_slave_alu_res", false,-1, 31,0);
        tracep->declBus(c+506,"mycpu_top u_datapath W_master_reg_waddr", false,-1, 4,0);
        tracep->declBus(c+507,"mycpu_top u_datapath W_slave_reg_waddr", false,-1, 4,0);
        tracep->declBus(c+508,"mycpu_top u_datapath W_master_reg_wdata", false,-1, 31,0);
        tracep->declBus(c+509,"mycpu_top u_datapath W_slave_reg_wdata", false,-1, 31,0);
        tracep->declBus(c+510,"mycpu_top u_datapath M_master_reg_wdata", false,-1, 31,0);
        tracep->declBus(c+511,"mycpu_top u_datapath M_slave_reg_wdata", false,-1, 31,0);
        tracep->declBit(c+512,"mycpu_top u_datapath W_master_except\206 if_adel", false,-1);
        tracep->declBit(c+513,"mycpu_top u_datapath W_master_except\206 if_tlbl", false,-1);
        tracep->declBit(c+514,"mycpu_top u_datapath W_master_except\206 if_tlbrf", false,-1);
        tracep->declBit(c+515,"mycpu_top u_datapath W_master_except\206 id_ri", false,-1);
        tracep->declBit(c+516,"mycpu_top u_datapath W_master_except\206 id_syscall", false,-1);
        tracep->declBit(c+517,"mycpu_top u_datapath W_master_except\206 id_break", false,-1);
        tracep->declBit(c+518,"mycpu_top u_datapath W_master_except\206 id_eret", false,-1);
        tracep->declBit(c+519,"mycpu_top u_datapath W_master_except\206 id_int", false,-1);
        tracep->declBit(c+520,"mycpu_top u_datapath W_master_except\206 id_cpu", false,-1);
        tracep->declBit(c+521,"mycpu_top u_datapath W_master_except\206 ex_ov", false,-1);
        tracep->declBit(c+522,"mycpu_top u_datapath W_master_except\206 ex_adel", false,-1);
        tracep->declBit(c+523,"mycpu_top u_datapath W_master_except\206 ex_ades", false,-1);
        tracep->declBit(c+524,"mycpu_top u_datapath W_master_except\206 ex_tlbl", false,-1);
        tracep->declBit(c+525,"mycpu_top u_datapath W_master_except\206 ex_tlbs", false,-1);
        tracep->declBit(c+526,"mycpu_top u_datapath W_master_except\206 ex_tlbm", false,-1);
        tracep->declBit(c+527,"mycpu_top u_datapath W_master_except\206 ex_tlbrf", false,-1);
        tracep->declBit(c+528,"mycpu_top u_datapath W_master_except\206 ex_trap", false,-1);
        tracep->declBit(c+529,"mycpu_top u_datapath W_slave_except\206 if_adel", false,-1);
        tracep->declBit(c+530,"mycpu_top u_datapath W_slave_except\206 if_tlbl", false,-1);
        tracep->declBit(c+531,"mycpu_top u_datapath W_slave_except\206 if_tlbrf", false,-1);
        tracep->declBit(c+532,"mycpu_top u_datapath W_slave_except\206 id_ri", false,-1);
        tracep->declBit(c+533,"mycpu_top u_datapath W_slave_except\206 id_syscall", false,-1);
        tracep->declBit(c+534,"mycpu_top u_datapath W_slave_except\206 id_break", false,-1);
        tracep->declBit(c+535,"mycpu_top u_datapath W_slave_except\206 id_eret", false,-1);
        tracep->declBit(c+536,"mycpu_top u_datapath W_slave_except\206 id_int", false,-1);
        tracep->declBit(c+537,"mycpu_top u_datapath W_slave_except\206 id_cpu", false,-1);
        tracep->declBit(c+538,"mycpu_top u_datapath W_slave_except\206 ex_ov", false,-1);
        tracep->declBit(c+539,"mycpu_top u_datapath W_slave_except\206 ex_adel", false,-1);
        tracep->declBit(c+540,"mycpu_top u_datapath W_slave_except\206 ex_ades", false,-1);
        tracep->declBit(c+541,"mycpu_top u_datapath W_slave_except\206 ex_tlbl", false,-1);
        tracep->declBit(c+542,"mycpu_top u_datapath W_slave_except\206 ex_tlbs", false,-1);
        tracep->declBit(c+543,"mycpu_top u_datapath W_slave_except\206 ex_tlbm", false,-1);
        tracep->declBit(c+544,"mycpu_top u_datapath W_slave_except\206 ex_tlbrf", false,-1);
        tracep->declBit(c+545,"mycpu_top u_datapath W_slave_except\206 ex_trap", false,-1);
        tracep->declBit(c+1244,"mycpu_top u_datapath D2E_clear1", false,-1);
        tracep->declBit(c+1245,"mycpu_top u_datapath D2E_clear2", false,-1);
        tracep->declQuad(c+546,"mycpu_top u_datapath master_asciiF", false,-1, 47,0);
        tracep->declQuad(c+548,"mycpu_top u_datapath master_asciiD", false,-1, 47,0);
        tracep->declQuad(c+550,"mycpu_top u_datapath master_asciiE", false,-1, 47,0);
        tracep->declQuad(c+552,"mycpu_top u_datapath master_asciiM", false,-1, 47,0);
        tracep->declQuad(c+554,"mycpu_top u_datapath master_asciiW", false,-1, 47,0);
        tracep->declQuad(c+556,"mycpu_top u_datapath slave_asciiF", false,-1, 47,0);
        tracep->declQuad(c+558,"mycpu_top u_datapath slave_asciiD", false,-1, 47,0);
        tracep->declQuad(c+560,"mycpu_top u_datapath slave_asciiE", false,-1, 47,0);
        tracep->declQuad(c+562,"mycpu_top u_datapath slave_asciiM", false,-1, 47,0);
        tracep->declQuad(c+564,"mycpu_top u_datapath slave_asciiW", false,-1, 47,0);
        tracep->declBit(c+566,"mycpu_top u_datapath u_hazard D_master_read_rs", false,-1);
        tracep->declBit(c+567,"mycpu_top u_datapath u_hazard D_master_read_rt", false,-1);
        tracep->declBus(c+284,"mycpu_top u_datapath u_hazard D_master_rs", false,-1, 4,0);
        tracep->declBus(c+286,"mycpu_top u_datapath u_hazard D_master_rt", false,-1, 4,0);
        tracep->declBit(c+568,"mycpu_top u_datapath u_hazard E_master_memtoReg", false,-1);
        tracep->declBus(c+338,"mycpu_top u_datapath u_hazard E_master_reg_waddr", false,-1, 4,0);
        tracep->declBit(c+569,"mycpu_top u_datapath u_hazard E_slave_memtoReg", false,-1);
        tracep->declBus(c+339,"mycpu_top u_datapath u_hazard E_slave_reg_waddr", false,-1, 4,0);
        tracep->declBit(c+1179,"mycpu_top u_datapath u_hazard i_stall", false,-1);
        tracep->declBit(c+91,"mycpu_top u_datapath u_hazard E_alu_stall", false,-1);
        tracep->declBit(c+38,"mycpu_top u_datapath u_hazard d_stall", false,-1);
        tracep->declBit(c+1199,"mycpu_top u_datapath u_hazard M_except", false,-1);
        tracep->declBit(c+1243,"mycpu_top u_datapath u_hazard M_flush_all", false,-1);
        tracep->declBit(c+1205,"mycpu_top u_datapath u_hazard E_bj", false,-1);
        tracep->declBit(c+1202,"mycpu_top u_datapath u_hazard D_bj", false,-1);
        tracep->declBit(c+1191,"mycpu_top u_datapath u_hazard F_ena", false,-1);
        tracep->declBit(c+1192,"mycpu_top u_datapath u_hazard D_ena", false,-1);
        tracep->declBit(c+1194,"mycpu_top u_datapath u_hazard E_ena", false,-1);
        tracep->declBit(c+1194,"mycpu_top u_datapath u_hazard M_ena", false,-1);
        tracep->declBit(c+1195,"mycpu_top u_datapath u_hazard W_ena", false,-1);
        tracep->declBit(c+1339,"mycpu_top u_datapath u_hazard F_flush", false,-1);
        tracep->declBit(c+1196,"mycpu_top u_datapath u_hazard D_flush", false,-1);
        tracep->declBit(c+1197,"mycpu_top u_datapath u_hazard E_flush", false,-1);
        tracep->declBit(c+1198,"mycpu_top u_datapath u_hazard M_flush", false,-1);
        tracep->declBit(c+1339,"mycpu_top u_datapath u_hazard W_flush", false,-1);
        tracep->declBit(c+1198,"mycpu_top u_datapath u_hazard delay_slot_flush", false,-1);
        tracep->declBit(c+570,"mycpu_top u_datapath u_hazard lwstall", false,-1);
        tracep->declBit(c+1180,"mycpu_top u_datapath u_hazard longest_stall", false,-1);
        tracep->declBit(c+1281,"mycpu_top u_datapath u_pc_reg clk", false,-1);
        tracep->declBit(c+1329,"mycpu_top u_datapath u_pc_reg rst", false,-1);
        tracep->declBit(c+1200,"mycpu_top u_datapath u_pc_reg pc_en", false,-1);
        tracep->declBit(c+1199,"mycpu_top u_datapath u_pc_reg M_except", false,-1);
        tracep->declBus(c+221,"mycpu_top u_datapath u_pc_reg M_except_addr", false,-1, 31,0);
        tracep->declBit(c+1243,"mycpu_top u_datapath u_pc_reg M_flush_all", false,-1);
        tracep->declBus(c+491,"mycpu_top u_datapath u_pc_reg M_flush_all_addr", false,-1, 31,0);
        tracep->declBit(c+1205,"mycpu_top u_datapath u_pc_reg E_bj", false,-1);
        tracep->declBus(c+319,"mycpu_top u_datapath u_pc_reg E_bj_target", false,-1, 31,0);
        tracep->declBit(c+1202,"mycpu_top u_datapath u_pc_reg D_bj", false,-1);
        tracep->declBus(c+1162,"mycpu_top u_datapath u_pc_reg D_bj_target", false,-1, 31,0);
        tracep->declBit(c+90,"mycpu_top u_datapath u_pc_reg D_fifo_full", false,-1);
        tracep->declBit(c+1181,"mycpu_top u_datapath u_pc_reg F_inst_data_ok1", false,-1);
        tracep->declBit(c+1182,"mycpu_top u_datapath u_pc_reg F_inst_data_ok2", false,-1);
        tracep->declBus(c+1178,"mycpu_top u_datapath u_pc_reg pc_next", false,-1, 31,0);
        tracep->declBus(c+9,"mycpu_top u_datapath u_pc_reg pc_curr", false,-1, 31,0);
        tracep->declBus(c+9,"mycpu_top u_datapath u_pc_reg pc_reg", false,-1, 31,0);
        tracep->declBit(c+1281,"mycpu_top u_datapath u_inst_fifo clk", false,-1);
        tracep->declBit(c+1329,"mycpu_top u_datapath u_inst_fifo rst", false,-1);
        tracep->declBit(c+1246,"mycpu_top u_datapath u_inst_fifo fifo_rst", false,-1);
        tracep->declBit(c+1198,"mycpu_top u_datapath u_inst_fifo flush_delay_slot", false,-1);
        tracep->declBit(c+1201,"mycpu_top u_datapath u_inst_fifo delay_sel_rst", false,-1);
        tracep->declBit(c+1202,"mycpu_top u_datapath u_inst_fifo D_delay_rst", false,-1);
        tracep->declBit(c+1205,"mycpu_top u_datapath u_inst_fifo E_delay_rst", false,-1);
        tracep->declBit(c+1192,"mycpu_top u_datapath u_inst_fifo D_ena", false,-1);
        tracep->declBit(c+1179,"mycpu_top u_datapath u_inst_fifo i_stall", false,-1);
        tracep->declBit(c+229,"mycpu_top u_datapath u_inst_fifo master_is_branch", false,-1);
        tracep->declBit(c+243,"mycpu_top u_datapath u_inst_fifo master_is_in_delayslot_o", false,-1);
        tracep->declBit(c+1192,"mycpu_top u_datapath u_inst_fifo read_en1", false,-1);
        tracep->declBit(c+1193,"mycpu_top u_datapath u_inst_fifo read_en2", false,-1);
        tracep->declBit(c+239,"mycpu_top u_datapath u_inst_fifo read_tlb_refill1", false,-1);
        tracep->declBit(c+240,"mycpu_top u_datapath u_inst_fifo read_tlb_refill2", false,-1);
        tracep->declBit(c+241,"mycpu_top u_datapath u_inst_fifo read_tlb_invalid1", false,-1);
        tracep->declBit(c+242,"mycpu_top u_datapath u_inst_fifo read_tlb_invalid2", false,-1);
        tracep->declBus(c+237,"mycpu_top u_datapath u_inst_fifo read_data1", false,-1, 31,0);
        tracep->declBus(c+238,"mycpu_top u_datapath u_inst_fifo read_data2", false,-1, 31,0);
        tracep->declBus(c+235,"mycpu_top u_datapath u_inst_fifo read_address1", false,-1, 31,0);
        tracep->declBus(c+236,"mycpu_top u_datapath u_inst_fifo read_address2", false,-1, 31,0);
        tracep->declBit(c+1181,"mycpu_top u_datapath u_inst_fifo write_en1", false,-1);
        tracep->declBit(c+1182,"mycpu_top u_datapath u_inst_fifo write_en2", false,-1);
        tracep->declBit(c+10,"mycpu_top u_datapath u_inst_fifo write_tlb_refill1", false,-1);
        tracep->declBit(c+10,"mycpu_top u_datapath u_inst_fifo write_tlb_refill2", false,-1);
        tracep->declBit(c+11,"mycpu_top u_datapath u_inst_fifo write_tlb_invalid1", false,-1);
        tracep->declBit(c+11,"mycpu_top u_datapath u_inst_fifo write_tlb_invalid2", false,-1);
        tracep->declBus(c+9,"mycpu_top u_datapath u_inst_fifo write_address1", false,-1, 31,0);
        tracep->declBus(c+571,"mycpu_top u_datapath u_inst_fifo write_address2", false,-1, 31,0);
        tracep->declBus(c+12,"mycpu_top u_datapath u_inst_fifo write_data1", false,-1, 31,0);
        tracep->declBus(c+13,"mycpu_top u_datapath u_inst_fifo write_data2", false,-1, 31,0);
        tracep->declBit(c+88,"mycpu_top u_datapath u_inst_fifo empty", false,-1);
        tracep->declBit(c+89,"mycpu_top u_datapath u_inst_fifo almost_empty", false,-1);
        tracep->declBit(c+90,"mycpu_top u_datapath u_inst_fifo full", false,-1);
        tracep->declBit(c+572,"mycpu_top u_datapath u_inst_fifo lines(0)\206 refill", false,-1);
        tracep->declBit(c+573,"mycpu_top u_datapath u_inst_fifo lines(0)\206 invalid", false,-1);
        tracep->declBus(c+574,"mycpu_top u_datapath u_inst_fifo lines(0)\206 addr", false,-1, 31,0);
        tracep->declBus(c+575,"mycpu_top u_datapath u_inst_fifo lines(0)\206 data", false,-1, 31,0);
        tracep->declBit(c+576,"mycpu_top u_datapath u_inst_fifo lines(1)\206 refill", false,-1);
        tracep->declBit(c+577,"mycpu_top u_datapath u_inst_fifo lines(1)\206 invalid", false,-1);
        tracep->declBus(c+578,"mycpu_top u_datapath u_inst_fifo lines(1)\206 addr", false,-1, 31,0);
        tracep->declBus(c+579,"mycpu_top u_datapath u_inst_fifo lines(1)\206 data", false,-1, 31,0);
        tracep->declBit(c+580,"mycpu_top u_datapath u_inst_fifo lines(2)\206 refill", false,-1);
        tracep->declBit(c+581,"mycpu_top u_datapath u_inst_fifo lines(2)\206 invalid", false,-1);
        tracep->declBus(c+582,"mycpu_top u_datapath u_inst_fifo lines(2)\206 addr", false,-1, 31,0);
        tracep->declBus(c+583,"mycpu_top u_datapath u_inst_fifo lines(2)\206 data", false,-1, 31,0);
        tracep->declBit(c+584,"mycpu_top u_datapath u_inst_fifo lines(3)\206 refill", false,-1);
        tracep->declBit(c+585,"mycpu_top u_datapath u_inst_fifo lines(3)\206 invalid", false,-1);
        tracep->declBus(c+586,"mycpu_top u_datapath u_inst_fifo lines(3)\206 addr", false,-1, 31,0);
        tracep->declBus(c+587,"mycpu_top u_datapath u_inst_fifo lines(3)\206 data", false,-1, 31,0);
        tracep->declBit(c+588,"mycpu_top u_datapath u_inst_fifo lines(4)\206 refill", false,-1);
        tracep->declBit(c+589,"mycpu_top u_datapath u_inst_fifo lines(4)\206 invalid", false,-1);
        tracep->declBus(c+590,"mycpu_top u_datapath u_inst_fifo lines(4)\206 addr", false,-1, 31,0);
        tracep->declBus(c+591,"mycpu_top u_datapath u_inst_fifo lines(4)\206 data", false,-1, 31,0);
        tracep->declBit(c+592,"mycpu_top u_datapath u_inst_fifo lines(5)\206 refill", false,-1);
        tracep->declBit(c+593,"mycpu_top u_datapath u_inst_fifo lines(5)\206 invalid", false,-1);
        tracep->declBus(c+594,"mycpu_top u_datapath u_inst_fifo lines(5)\206 addr", false,-1, 31,0);
        tracep->declBus(c+595,"mycpu_top u_datapath u_inst_fifo lines(5)\206 data", false,-1, 31,0);
        tracep->declBit(c+596,"mycpu_top u_datapath u_inst_fifo lines(6)\206 refill", false,-1);
        tracep->declBit(c+597,"mycpu_top u_datapath u_inst_fifo lines(6)\206 invalid", false,-1);
        tracep->declBus(c+598,"mycpu_top u_datapath u_inst_fifo lines(6)\206 addr", false,-1, 31,0);
        tracep->declBus(c+599,"mycpu_top u_datapath u_inst_fifo lines(6)\206 data", false,-1, 31,0);
        tracep->declBit(c+600,"mycpu_top u_datapath u_inst_fifo lines(7)\206 refill", false,-1);
        tracep->declBit(c+601,"mycpu_top u_datapath u_inst_fifo lines(7)\206 invalid", false,-1);
        tracep->declBus(c+602,"mycpu_top u_datapath u_inst_fifo lines(7)\206 addr", false,-1, 31,0);
        tracep->declBus(c+603,"mycpu_top u_datapath u_inst_fifo lines(7)\206 data", false,-1, 31,0);
        tracep->declBit(c+604,"mycpu_top u_datapath u_inst_fifo lines(8)\206 refill", false,-1);
        tracep->declBit(c+605,"mycpu_top u_datapath u_inst_fifo lines(8)\206 invalid", false,-1);
        tracep->declBus(c+606,"mycpu_top u_datapath u_inst_fifo lines(8)\206 addr", false,-1, 31,0);
        tracep->declBus(c+607,"mycpu_top u_datapath u_inst_fifo lines(8)\206 data", false,-1, 31,0);
        tracep->declBit(c+608,"mycpu_top u_datapath u_inst_fifo lines(9)\206 refill", false,-1);
        tracep->declBit(c+609,"mycpu_top u_datapath u_inst_fifo lines(9)\206 invalid", false,-1);
        tracep->declBus(c+610,"mycpu_top u_datapath u_inst_fifo lines(9)\206 addr", false,-1, 31,0);
        tracep->declBus(c+611,"mycpu_top u_datapath u_inst_fifo lines(9)\206 data", false,-1, 31,0);
        tracep->declBit(c+612,"mycpu_top u_datapath u_inst_fifo lines(10)\206 refill", false,-1);
        tracep->declBit(c+613,"mycpu_top u_datapath u_inst_fifo lines(10)\206 invalid", false,-1);
        tracep->declBus(c+614,"mycpu_top u_datapath u_inst_fifo lines(10)\206 addr", false,-1, 31,0);
        tracep->declBus(c+615,"mycpu_top u_datapath u_inst_fifo lines(10)\206 data", false,-1, 31,0);
        tracep->declBit(c+616,"mycpu_top u_datapath u_inst_fifo lines(11)\206 refill", false,-1);
        tracep->declBit(c+617,"mycpu_top u_datapath u_inst_fifo lines(11)\206 invalid", false,-1);
        tracep->declBus(c+618,"mycpu_top u_datapath u_inst_fifo lines(11)\206 addr", false,-1, 31,0);
        tracep->declBus(c+619,"mycpu_top u_datapath u_inst_fifo lines(11)\206 data", false,-1, 31,0);
        tracep->declBit(c+620,"mycpu_top u_datapath u_inst_fifo lines(12)\206 refill", false,-1);
        tracep->declBit(c+621,"mycpu_top u_datapath u_inst_fifo lines(12)\206 invalid", false,-1);
        tracep->declBus(c+622,"mycpu_top u_datapath u_inst_fifo lines(12)\206 addr", false,-1, 31,0);
        tracep->declBus(c+623,"mycpu_top u_datapath u_inst_fifo lines(12)\206 data", false,-1, 31,0);
        tracep->declBit(c+624,"mycpu_top u_datapath u_inst_fifo lines(13)\206 refill", false,-1);
        tracep->declBit(c+625,"mycpu_top u_datapath u_inst_fifo lines(13)\206 invalid", false,-1);
        tracep->declBus(c+626,"mycpu_top u_datapath u_inst_fifo lines(13)\206 addr", false,-1, 31,0);
        tracep->declBus(c+627,"mycpu_top u_datapath u_inst_fifo lines(13)\206 data", false,-1, 31,0);
        tracep->declBit(c+628,"mycpu_top u_datapath u_inst_fifo lines(14)\206 refill", false,-1);
        tracep->declBit(c+629,"mycpu_top u_datapath u_inst_fifo lines(14)\206 invalid", false,-1);
        tracep->declBus(c+630,"mycpu_top u_datapath u_inst_fifo lines(14)\206 addr", false,-1, 31,0);
        tracep->declBus(c+631,"mycpu_top u_datapath u_inst_fifo lines(14)\206 data", false,-1, 31,0);
        tracep->declBit(c+632,"mycpu_top u_datapath u_inst_fifo lines(15)\206 refill", false,-1);
        tracep->declBit(c+633,"mycpu_top u_datapath u_inst_fifo lines(15)\206 invalid", false,-1);
        tracep->declBus(c+634,"mycpu_top u_datapath u_inst_fifo lines(15)\206 addr", false,-1, 31,0);
        tracep->declBus(c+635,"mycpu_top u_datapath u_inst_fifo lines(15)\206 data", false,-1, 31,0);
        tracep->declBit(c+636,"mycpu_top u_datapath u_inst_fifo read_line1\206 refill", false,-1);
        tracep->declBit(c+637,"mycpu_top u_datapath u_inst_fifo read_line1\206 invalid", false,-1);
        tracep->declBus(c+638,"mycpu_top u_datapath u_inst_fifo read_line1\206 addr", false,-1, 31,0);
        tracep->declBus(c+639,"mycpu_top u_datapath u_inst_fifo read_line1\206 data", false,-1, 31,0);
        tracep->declBit(c+640,"mycpu_top u_datapath u_inst_fifo read_line2\206 refill", false,-1);
        tracep->declBit(c+641,"mycpu_top u_datapath u_inst_fifo read_line2\206 invalid", false,-1);
        tracep->declBus(c+642,"mycpu_top u_datapath u_inst_fifo read_line2\206 addr", false,-1, 31,0);
        tracep->declBus(c+643,"mycpu_top u_datapath u_inst_fifo read_line2\206 data", false,-1, 31,0);
        tracep->declBit(c+644,"mycpu_top u_datapath u_inst_fifo write_line1\206 refill", false,-1);
        tracep->declBit(c+645,"mycpu_top u_datapath u_inst_fifo write_line1\206 invalid", false,-1);
        tracep->declBus(c+646,"mycpu_top u_datapath u_inst_fifo write_line1\206 addr", false,-1, 31,0);
        tracep->declBus(c+647,"mycpu_top u_datapath u_inst_fifo write_line1\206 data", false,-1, 31,0);
        tracep->declBit(c+10,"mycpu_top u_datapath u_inst_fifo write_line2\206 refill", false,-1);
        tracep->declBit(c+11,"mycpu_top u_datapath u_inst_fifo write_line2\206 invalid", false,-1);
        tracep->declBus(c+648,"mycpu_top u_datapath u_inst_fifo write_line2\206 addr", false,-1, 31,0);
        tracep->declBus(c+649,"mycpu_top u_datapath u_inst_fifo write_line2\206 data", false,-1, 31,0);
        tracep->declBit(c+650,"mycpu_top u_datapath u_inst_fifo delayslot_line\206 refill", false,-1);
        tracep->declBit(c+651,"mycpu_top u_datapath u_inst_fifo delayslot_line\206 invalid", false,-1);
        tracep->declBus(c+652,"mycpu_top u_datapath u_inst_fifo delayslot_line\206 addr", false,-1, 31,0);
        tracep->declBus(c+653,"mycpu_top u_datapath u_inst_fifo delayslot_line\206 data", false,-1, 31,0);
        tracep->declBit(c+654,"mycpu_top u_datapath u_inst_fifo delayslot_stall", false,-1);
        tracep->declBit(c+655,"mycpu_top u_datapath u_inst_fifo delayslot_enable", false,-1);
        tracep->declBus(c+656,"mycpu_top u_datapath u_inst_fifo write_pointer", false,-1, 3,0);
        tracep->declBus(c+657,"mycpu_top u_datapath u_inst_fifo read_pointer", false,-1, 3,0);
        tracep->declBus(c+658,"mycpu_top u_datapath u_inst_fifo data_count", false,-1, 3,0);
        tracep->declArray(c+659,"mycpu_top u_datapath u_inst_fifo slave_cnt", false,-1, 64,0);
        tracep->declArray(c+662,"mycpu_top u_datapath u_inst_fifo master_cnt", false,-1, 64,0);
        tracep->declArray(c+665,"mycpu_top u_datapath u_inst_fifo total_cnt", false,-1, 64,0);
        tracep->declBit(c+226,"mycpu_top u_datapath d_int info_i\206 int_allowed", false,-1);
        tracep->declBus(c+227,"mycpu_top u_datapath d_int info_i\206 IM", false,-1, 7,0);
        tracep->declBus(c+228,"mycpu_top u_datapath d_int info_i\206 IP", false,-1, 7,0);
        tracep->declBit(c+668,"mycpu_top u_datapath d_int id_ena", false,-1);
        tracep->declBit(c+225,"mycpu_top u_datapath d_int int_o", false,-1);
        tracep->declBus(c+237,"mycpu_top u_datapath u_decoder_master instr", false,-1, 31,0);
        tracep->declBit(c+223,"mycpu_top u_datapath u_decoder_master c0_useable", false,-1);
        tracep->declBus(c+246,"mycpu_top u_datapath u_decoder_master op", false,-1, 5,0);
        tracep->declBus(c+284,"mycpu_top u_datapath u_decoder_master rs", false,-1, 4,0);
        tracep->declBus(c+286,"mycpu_top u_datapath u_decoder_master rt", false,-1, 4,0);
        tracep->declBus(c+288,"mycpu_top u_datapath u_decoder_master rd", false,-1, 4,0);
        tracep->declBus(c+248,"mycpu_top u_datapath u_decoder_master funct", false,-1, 5,0);
        tracep->declBus(c+290,"mycpu_top u_datapath u_decoder_master reg_waddr", false,-1, 4,0);
        tracep->declBus(c+250,"mycpu_top u_datapath u_decoder_master shamt_value", false,-1, 31,0);
        tracep->declBus(c+252,"mycpu_top u_datapath u_decoder_master sign_extend_imm_value", false,-1, 31,0);
        tracep->declBit(c+244,"mycpu_top u_datapath u_decoder_master is_link_pc8", false,-1);
        tracep->declBus(c+278,"mycpu_top u_datapath u_decoder_master branch_type", false,-1, 3,0);
        tracep->declBus(c+280,"mycpu_top u_datapath u_decoder_master trap_type", false,-1, 3,0);
        tracep->declBus(c+282,"mycpu_top u_datapath u_decoder_master cmov_type", false,-1, 1,0);
        tracep->declBus(c+92,"mycpu_top u_datapath u_decoder_master signsD\206 aluop", false,-1, 7,0);
        tracep->declBit(c+93,"mycpu_top u_datapath u_decoder_master signsD\206 flush_all", false,-1);
        tracep->declBit(c+94,"mycpu_top u_datapath u_decoder_master signsD\206 read_rs", false,-1);
        tracep->declBit(c+95,"mycpu_top u_datapath u_decoder_master signsD\206 read_rt", false,-1);
        tracep->declBit(c+96,"mycpu_top u_datapath u_decoder_master signsD\206 reg_write", false,-1);
        tracep->declBit(c+97,"mycpu_top u_datapath u_decoder_master signsD\206 mem_en", false,-1);
        tracep->declBit(c+98,"mycpu_top u_datapath u_decoder_master signsD\206 mem_write_reg", false,-1);
        tracep->declBit(c+99,"mycpu_top u_datapath u_decoder_master signsD\206 mem_read", false,-1);
        tracep->declBit(c+100,"mycpu_top u_datapath u_decoder_master signsD\206 mem_write", false,-1);
        tracep->declBit(c+101,"mycpu_top u_datapath u_decoder_master signsD\206 cp0_read", false,-1);
        tracep->declBit(c+102,"mycpu_top u_datapath u_decoder_master signsD\206 cp0_write", false,-1);
        tracep->declBit(c+103,"mycpu_top u_datapath u_decoder_master signsD\206 hilo_read", false,-1);
        tracep->declBit(c+104,"mycpu_top u_datapath u_decoder_master signsD\206 hilo_write", false,-1);
        tracep->declBit(c+105,"mycpu_top u_datapath u_decoder_master signsD\206 may_bring_flush", false,-1);
        tracep->declBit(c+106,"mycpu_top u_datapath u_decoder_master signsD\206 only_one_issue", false,-1);
        tracep->declBit(c+107,"mycpu_top u_datapath u_decoder_master signsD\206 icache_fence", false,-1);
        tracep->declBit(c+108,"mycpu_top u_datapath u_decoder_master signsD\206 dcache_fence", false,-1);
        tracep->declBit(c+109,"mycpu_top u_datapath u_decoder_master signsD\206 tlb_fence", false,-1);
        tracep->declBit(c+110,"mycpu_top u_datapath u_decoder_master signsD\206 mul_en", false,-1);
        tracep->declBit(c+111,"mycpu_top u_datapath u_decoder_master signsD\206 div_en", false,-1);
        tracep->declBit(c+276,"mycpu_top u_datapath u_decoder_master undefined_inst", false,-1);
        tracep->declBit(c+256,"mycpu_top u_datapath u_decoder_master syscall_inst", false,-1);
        tracep->declBit(c+254,"mycpu_top u_datapath u_decoder_master break_inst", false,-1);
        tracep->declBit(c+258,"mycpu_top u_datapath u_decoder_master eret_inst", false,-1);
        tracep->declBit(c+260,"mycpu_top u_datapath u_decoder_master id_cpu", false,-1);
        tracep->declBit(c+262,"mycpu_top u_datapath u_decoder_master cop0_info_out\206 mtc0_en", false,-1);
        tracep->declBit(c+263,"mycpu_top u_datapath u_decoder_master cop0_info_out\206 TLBP", false,-1);
        tracep->declBit(c+264,"mycpu_top u_datapath u_decoder_master cop0_info_out\206 TLBR", false,-1);
        tracep->declBit(c+265,"mycpu_top u_datapath u_decoder_master cop0_info_out\206 TLBWI", false,-1);
        tracep->declBit(c+266,"mycpu_top u_datapath u_decoder_master cop0_info_out\206 TLBWR", false,-1);
        tracep->declBus(c+267,"mycpu_top u_datapath u_decoder_master cop0_info_out\206 reg_addr", false,-1, 4,0);
        tracep->declBus(c+268,"mycpu_top u_datapath u_decoder_master cop0_info_out\206 sel_addr", false,-1, 2,0);
        tracep->declBus(c+238,"mycpu_top u_datapath u_decoder_slave instr", false,-1, 31,0);
        tracep->declBit(c+223,"mycpu_top u_datapath u_decoder_slave c0_useable", false,-1);
        tracep->declBus(c+247,"mycpu_top u_datapath u_decoder_slave op", false,-1, 5,0);
        tracep->declBus(c+285,"mycpu_top u_datapath u_decoder_slave rs", false,-1, 4,0);
        tracep->declBus(c+287,"mycpu_top u_datapath u_decoder_slave rt", false,-1, 4,0);
        tracep->declBus(c+289,"mycpu_top u_datapath u_decoder_slave rd", false,-1, 4,0);
        tracep->declBus(c+249,"mycpu_top u_datapath u_decoder_slave funct", false,-1, 5,0);
        tracep->declBus(c+291,"mycpu_top u_datapath u_decoder_slave reg_waddr", false,-1, 4,0);
        tracep->declBus(c+251,"mycpu_top u_datapath u_decoder_slave shamt_value", false,-1, 31,0);
        tracep->declBus(c+253,"mycpu_top u_datapath u_decoder_slave sign_extend_imm_value", false,-1, 31,0);
        tracep->declBit(c+245,"mycpu_top u_datapath u_decoder_slave is_link_pc8", false,-1);
        tracep->declBus(c+279,"mycpu_top u_datapath u_decoder_slave branch_type", false,-1, 3,0);
        tracep->declBus(c+281,"mycpu_top u_datapath u_decoder_slave trap_type", false,-1, 3,0);
        tracep->declBus(c+283,"mycpu_top u_datapath u_decoder_slave cmov_type", false,-1, 1,0);
        tracep->declBus(c+112,"mycpu_top u_datapath u_decoder_slave signsD\206 aluop", false,-1, 7,0);
        tracep->declBit(c+113,"mycpu_top u_datapath u_decoder_slave signsD\206 flush_all", false,-1);
        tracep->declBit(c+114,"mycpu_top u_datapath u_decoder_slave signsD\206 read_rs", false,-1);
        tracep->declBit(c+115,"mycpu_top u_datapath u_decoder_slave signsD\206 read_rt", false,-1);
        tracep->declBit(c+116,"mycpu_top u_datapath u_decoder_slave signsD\206 reg_write", false,-1);
        tracep->declBit(c+117,"mycpu_top u_datapath u_decoder_slave signsD\206 mem_en", false,-1);
        tracep->declBit(c+118,"mycpu_top u_datapath u_decoder_slave signsD\206 mem_write_reg", false,-1);
        tracep->declBit(c+119,"mycpu_top u_datapath u_decoder_slave signsD\206 mem_read", false,-1);
        tracep->declBit(c+120,"mycpu_top u_datapath u_decoder_slave signsD\206 mem_write", false,-1);
        tracep->declBit(c+121,"mycpu_top u_datapath u_decoder_slave signsD\206 cp0_read", false,-1);
        tracep->declBit(c+122,"mycpu_top u_datapath u_decoder_slave signsD\206 cp0_write", false,-1);
        tracep->declBit(c+123,"mycpu_top u_datapath u_decoder_slave signsD\206 hilo_read", false,-1);
        tracep->declBit(c+124,"mycpu_top u_datapath u_decoder_slave signsD\206 hilo_write", false,-1);
        tracep->declBit(c+125,"mycpu_top u_datapath u_decoder_slave signsD\206 may_bring_flush", false,-1);
        tracep->declBit(c+126,"mycpu_top u_datapath u_decoder_slave signsD\206 only_one_issue", false,-1);
        tracep->declBit(c+127,"mycpu_top u_datapath u_decoder_slave signsD\206 icache_fence", false,-1);
        tracep->declBit(c+128,"mycpu_top u_datapath u_decoder_slave signsD\206 dcache_fence", false,-1);
        tracep->declBit(c+129,"mycpu_top u_datapath u_decoder_slave signsD\206 tlb_fence", false,-1);
        tracep->declBit(c+130,"mycpu_top u_datapath u_decoder_slave signsD\206 mul_en", false,-1);
        tracep->declBit(c+131,"mycpu_top u_datapath u_decoder_slave signsD\206 div_en", false,-1);
        tracep->declBit(c+277,"mycpu_top u_datapath u_decoder_slave undefined_inst", false,-1);
        tracep->declBit(c+257,"mycpu_top u_datapath u_decoder_slave syscall_inst", false,-1);
        tracep->declBit(c+255,"mycpu_top u_datapath u_decoder_slave break_inst", false,-1);
        tracep->declBit(c+259,"mycpu_top u_datapath u_decoder_slave eret_inst", false,-1);
        tracep->declBit(c+261,"mycpu_top u_datapath u_decoder_slave id_cpu", false,-1);
        tracep->declBit(c+269,"mycpu_top u_datapath u_decoder_slave cop0_info_out\206 mtc0_en", false,-1);
        tracep->declBit(c+270,"mycpu_top u_datapath u_decoder_slave cop0_info_out\206 TLBP", false,-1);
        tracep->declBit(c+271,"mycpu_top u_datapath u_decoder_slave cop0_info_out\206 TLBR", false,-1);
        tracep->declBit(c+272,"mycpu_top u_datapath u_decoder_slave cop0_info_out\206 TLBWI", false,-1);
        tracep->declBit(c+273,"mycpu_top u_datapath u_decoder_slave cop0_info_out\206 TLBWR", false,-1);
        tracep->declBus(c+274,"mycpu_top u_datapath u_decoder_slave cop0_info_out\206 reg_addr", false,-1, 4,0);
        tracep->declBus(c+275,"mycpu_top u_datapath u_decoder_slave cop0_info_out\206 sel_addr", false,-1, 2,0);
        tracep->declBit(c+1281,"mycpu_top u_datapath u_regfile clk", false,-1);
        tracep->declBit(c+1329,"mycpu_top u_datapath u_regfile rst", false,-1);
        tracep->declBus(c+284,"mycpu_top u_datapath u_regfile ra1_a", false,-1, 4,0);
        tracep->declBus(c+1204,"mycpu_top u_datapath u_regfile rd1_a", false,-1, 31,0);
        tracep->declBus(c+286,"mycpu_top u_datapath u_regfile ra1_b", false,-1, 4,0);
        tracep->declBus(c+1165,"mycpu_top u_datapath u_regfile rd1_b", false,-1, 31,0);
        tracep->declBit(c+1247,"mycpu_top u_datapath u_regfile wen1", false,-1);
        tracep->declBus(c+506,"mycpu_top u_datapath u_regfile wa1", false,-1, 4,0);
        tracep->declBus(c+508,"mycpu_top u_datapath u_regfile wd1", false,-1, 31,0);
        tracep->declBus(c+285,"mycpu_top u_datapath u_regfile ra2_a", false,-1, 4,0);
        tracep->declBus(c+1164,"mycpu_top u_datapath u_regfile rd2_a", false,-1, 31,0);
        tracep->declBus(c+287,"mycpu_top u_datapath u_regfile ra2_b", false,-1, 4,0);
        tracep->declBus(c+1166,"mycpu_top u_datapath u_regfile rd2_b", false,-1, 31,0);
        tracep->declBit(c+1248,"mycpu_top u_datapath u_regfile wen2", false,-1);
        tracep->declBus(c+507,"mycpu_top u_datapath u_regfile wa2", false,-1, 4,0);
        tracep->declBus(c+509,"mycpu_top u_datapath u_regfile wd2", false,-1, 31,0);
        {int i; for (i=0; i<32; i++) {
                tracep->declBus(c+669+i*1,"mycpu_top u_datapath u_regfile rf", true,(i+0), 31,0);}}
        tracep->declBus(c+1349,"mycpu_top u_datapath u_branch_predict PHT_DEPTH", false,-1, 31,0);
        tracep->declBus(c+1350,"mycpu_top u_datapath u_branch_predict BHT_DEPTH", false,-1, 31,0);
        tracep->declBit(c+1281,"mycpu_top u_datapath u_branch_predict clk", false,-1);
        tracep->declBit(c+1329,"mycpu_top u_datapath u_branch_predict rst", false,-1);
        tracep->declBus(c+237,"mycpu_top u_datapath u_branch_predict instrD", false,-1, 31,0);
        tracep->declBit(c+1192,"mycpu_top u_datapath u_branch_predict enaD", false,-1);
        tracep->declBus(c+235,"mycpu_top u_datapath u_branch_predict pcD", false,-1, 31,0);
        tracep->declBus(c+234,"mycpu_top u_datapath u_branch_predict pc_plus4D", false,-1, 31,0);
        tracep->declBus(c+334,"mycpu_top u_datapath u_branch_predict pcE", false,-1, 31,0);
        tracep->declBit(c+309,"mycpu_top u_datapath u_branch_predict branchE", false,-1);
        tracep->declBit(c+312,"mycpu_top u_datapath u_branch_predict actual_takeE", false,-1);
        tracep->declBit(c+230,"mycpu_top u_datapath u_branch_predict branchD", false,-1);
        tracep->declBit(c+1203,"mycpu_top u_datapath u_branch_predict pred_takeD", false,-1);
        tracep->declBus(c+233,"mycpu_top u_datapath u_branch_predict branch_targetD", false,-1, 31,0);
        tracep->declBus(c+1351,"mycpu_top u_datapath u_branch_predict Strongly_not_taken", false,-1, 1,0);
        tracep->declBus(c+1352,"mycpu_top u_datapath u_branch_predict Weakly_not_taken", false,-1, 1,0);
        tracep->declBus(c+1353,"mycpu_top u_datapath u_branch_predict Weakly_taken", false,-1, 1,0);
        tracep->declBus(c+1354,"mycpu_top u_datapath u_branch_predict Strongly_taken", false,-1, 1,0);
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+701+i*1,"mycpu_top u_datapath u_branch_predict BHT", true,(i+0), 5,0);}}
        tracep->declBus(c+1355,"mycpu_top u_datapath u_branch_predict i", false,-1, 31,0);
        tracep->declBus(c+1356,"mycpu_top u_datapath u_branch_predict j", false,-1, 31,0);
        tracep->declBus(c+717,"mycpu_top u_datapath u_branch_predict PHT_index", false,-1, 5,0);
        tracep->declBus(c+718,"mycpu_top u_datapath u_branch_predict BHT_index", false,-1, 3,0);
        tracep->declBus(c+717,"mycpu_top u_datapath u_branch_predict BHR_value", false,-1, 5,0);
        tracep->declBus(c+719,"mycpu_top u_datapath u_branch_predict update_PHT_index", false,-1, 5,0);
        tracep->declBus(c+720,"mycpu_top u_datapath u_branch_predict update_BHT_index", false,-1, 3,0);
        tracep->declBus(c+719,"mycpu_top u_datapath u_branch_predict update_BHR_value", false,-1, 5,0);
        tracep->declBit(c+1192,"mycpu_top u_datapath u_jump_judge enaD", false,-1);
        tracep->declBus(c+237,"mycpu_top u_datapath u_jump_judge instrD", false,-1, 31,0);
        tracep->declBus(c+234,"mycpu_top u_datapath u_jump_judge pc_plus4D", false,-1, 31,0);
        tracep->declBus(c+1204,"mycpu_top u_datapath u_jump_judge rs_valueD", false,-1, 31,0);
        tracep->declBit(c+214,"mycpu_top u_datapath u_jump_judge reg_write_enE1", false,-1);
        tracep->declBit(c+216,"mycpu_top u_datapath u_jump_judge reg_write_enM1", false,-1);
        tracep->declBus(c+338,"mycpu_top u_datapath u_jump_judge reg_waddrE1", false,-1, 4,0);
        tracep->declBus(c+419,"mycpu_top u_datapath u_jump_judge reg_waddrM1", false,-1, 4,0);
        tracep->declBit(c+215,"mycpu_top u_datapath u_jump_judge reg_write_enE2", false,-1);
        tracep->declBit(c+217,"mycpu_top u_datapath u_jump_judge reg_write_enM2", false,-1);
        tracep->declBus(c+339,"mycpu_top u_datapath u_jump_judge reg_waddrE2", false,-1, 4,0);
        tracep->declBus(c+420,"mycpu_top u_datapath u_jump_judge reg_waddrM2", false,-1, 4,0);
        tracep->declBit(c+231,"mycpu_top u_datapath u_jump_judge is_jumpD", false,-1);
        tracep->declBit(c+1160,"mycpu_top u_datapath u_jump_judge jump_takeD", false,-1);
        tracep->declBit(c+232,"mycpu_top u_datapath u_jump_judge jump_conflictD", false,-1);
        tracep->declBus(c+1161,"mycpu_top u_datapath u_jump_judge jump_targetD", false,-1, 31,0);
        tracep->declBit(c+721,"mycpu_top u_datapath u_jump_judge jr", false,-1);
        tracep->declBit(c+722,"mycpu_top u_datapath u_jump_judge j", false,-1);
        tracep->declBus(c+284,"mycpu_top u_datapath u_jump_judge rsD", false,-1, 4,0);
        tracep->declBus(c+723,"mycpu_top u_datapath u_jump_judge pc_jump_immD", false,-1, 31,0);
        tracep->declBit(c+1192,"mycpu_top u_datapath u_issue_ctrl D_master_ena", false,-1);
        tracep->declBit(c+724,"mycpu_top u_datapath u_issue_ctrl D_mem_conflict", false,-1);
        tracep->declBit(c+725,"mycpu_top u_datapath u_issue_ctrl D_mul_conflict", false,-1);
        tracep->declBit(c+726,"mycpu_top u_datapath u_issue_ctrl D_div_conflict", false,-1);
        tracep->declBit(c+568,"mycpu_top u_datapath u_issue_ctrl E_master_memtoReg", false,-1);
        tracep->declBus(c+338,"mycpu_top u_datapath u_issue_ctrl E_master_reg_waddr", false,-1, 4,0);
        tracep->declBit(c+569,"mycpu_top u_datapath u_issue_ctrl E_slave_memtoReg", false,-1);
        tracep->declBus(c+339,"mycpu_top u_datapath u_issue_ctrl E_slave_reg_waddr", false,-1, 4,0);
        tracep->declBit(c+212,"mycpu_top u_datapath u_issue_ctrl D_master_reg_wen", false,-1);
        tracep->declBus(c+290,"mycpu_top u_datapath u_issue_ctrl D_master_reg_waddr", false,-1, 4,0);
        tracep->declBit(c+727,"mycpu_top u_datapath u_issue_ctrl D_slave_read_rs", false,-1);
        tracep->declBit(c+728,"mycpu_top u_datapath u_issue_ctrl D_slave_read_rt", false,-1);
        tracep->declBus(c+285,"mycpu_top u_datapath u_issue_ctrl D_slave_rs", false,-1, 4,0);
        tracep->declBus(c+287,"mycpu_top u_datapath u_issue_ctrl D_slave_rt", false,-1, 4,0);
        tracep->declBit(c+729,"mycpu_top u_datapath u_issue_ctrl D_master_hilowrite", false,-1);
        tracep->declBit(c+1357,"mycpu_top u_datapath u_issue_ctrl D_slave_hilowrite", false,-1);
        tracep->declBit(c+730,"mycpu_top u_datapath u_issue_ctrl D_slave_hiloread", false,-1);
        tracep->declBit(c+731,"mycpu_top u_datapath u_issue_ctrl D_master_cp0write", false,-1);
        tracep->declBit(c+732,"mycpu_top u_datapath u_issue_ctrl D_slave_cp0read", false,-1);
        tracep->declBit(c+229,"mycpu_top u_datapath u_issue_ctrl D_master_is_branch", false,-1);
        tracep->declBit(c+733,"mycpu_top u_datapath u_issue_ctrl D_master_only_one_issue", false,-1);
        tracep->declBit(c+734,"mycpu_top u_datapath u_issue_ctrl D_slave_only_one_issue", false,-1);
        tracep->declBit(c+735,"mycpu_top u_datapath u_issue_ctrl D_slave_may_bring_flush", false,-1);
        tracep->declBit(c+88,"mycpu_top u_datapath u_issue_ctrl fifo_empty", false,-1);
        tracep->declBit(c+89,"mycpu_top u_datapath u_issue_ctrl fifo_almost_empty", false,-1);
        tracep->declBit(c+1163,"mycpu_top u_datapath u_issue_ctrl D_slave_is_in_delayslot", false,-1);
        tracep->declBit(c+1193,"mycpu_top u_datapath u_issue_ctrl D_slave_ena", false,-1);
        tracep->declBit(c+736,"mycpu_top u_datapath u_issue_ctrl load_stall", false,-1);
        tracep->declBit(c+737,"mycpu_top u_datapath u_issue_ctrl fifo_disable", false,-1);
        tracep->declBit(c+738,"mycpu_top u_datapath u_issue_ctrl struct_conflict", false,-1);
        tracep->declBit(c+739,"mycpu_top u_datapath u_issue_ctrl war_reg", false,-1);
        tracep->declBit(c+740,"mycpu_top u_datapath u_issue_ctrl war_hilo", false,-1);
        tracep->declBit(c+741,"mycpu_top u_datapath u_issue_ctrl war_cp0", false,-1);
        tracep->declBit(c+742,"mycpu_top u_datapath u_issue_ctrl data_conflict", false,-1);
        tracep->declBit(c+743,"mycpu_top u_datapath u_forward_top alu_wen1", false,-1);
        tracep->declBus(c+339,"mycpu_top u_datapath u_forward_top alu_waddr1", false,-1, 4,0);
        tracep->declBus(c+1240,"mycpu_top u_datapath u_forward_top alu_wdata1", false,-1, 31,0);
        tracep->declBit(c+744,"mycpu_top u_datapath u_forward_top alu_wen2", false,-1);
        tracep->declBus(c+338,"mycpu_top u_datapath u_forward_top alu_waddr2", false,-1, 4,0);
        tracep->declBus(c+1183,"mycpu_top u_datapath u_forward_top alu_wdata2", false,-1, 31,0);
        tracep->declBit(c+217,"mycpu_top u_datapath u_forward_top alu_wen3", false,-1);
        tracep->declBus(c+420,"mycpu_top u_datapath u_forward_top alu_waddr3", false,-1, 4,0);
        tracep->declBus(c+511,"mycpu_top u_datapath u_forward_top alu_wdata3", false,-1, 31,0);
        tracep->declBit(c+216,"mycpu_top u_datapath u_forward_top alu_wen4", false,-1);
        tracep->declBus(c+419,"mycpu_top u_datapath u_forward_top alu_waddr4", false,-1, 4,0);
        tracep->declBus(c+510,"mycpu_top u_datapath u_forward_top alu_wdata4", false,-1, 31,0);
        tracep->declBus(c+284,"mycpu_top u_datapath u_forward_top master_rs", false,-1, 4,0);
        tracep->declBus(c+1204,"mycpu_top u_datapath u_forward_top master_rs_value_tmp", false,-1, 31,0);
        tracep->declBus(c+1167,"mycpu_top u_datapath u_forward_top master_rs_value", false,-1, 31,0);
        tracep->declBus(c+286,"mycpu_top u_datapath u_forward_top master_rt", false,-1, 4,0);
        tracep->declBus(c+1165,"mycpu_top u_datapath u_forward_top master_rt_value_tmp", false,-1, 31,0);
        tracep->declBus(c+1169,"mycpu_top u_datapath u_forward_top master_rt_value", false,-1, 31,0);
        tracep->declBus(c+285,"mycpu_top u_datapath u_forward_top slave_rs", false,-1, 4,0);
        tracep->declBus(c+1164,"mycpu_top u_datapath u_forward_top slave_rs_value_tmp", false,-1, 31,0);
        tracep->declBus(c+1168,"mycpu_top u_datapath u_forward_top slave_rs_value", false,-1, 31,0);
        tracep->declBus(c+287,"mycpu_top u_datapath u_forward_top slave_rt", false,-1, 4,0);
        tracep->declBus(c+1166,"mycpu_top u_datapath u_forward_top slave_rt_value_tmp", false,-1, 31,0);
        tracep->declBus(c+1170,"mycpu_top u_datapath u_forward_top slave_rt_value", false,-1, 31,0);
        tracep->declBit(c+743,"mycpu_top u_datapath u_forward_top u_forward_mux_master_rs_value alu_wen1", false,-1);
        tracep->declBus(c+339,"mycpu_top u_datapath u_forward_top u_forward_mux_master_rs_value alu_waddr1", false,-1, 4,0);
        tracep->declBus(c+1240,"mycpu_top u_datapath u_forward_top u_forward_mux_master_rs_value alu_wdata1", false,-1, 31,0);
        tracep->declBit(c+744,"mycpu_top u_datapath u_forward_top u_forward_mux_master_rs_value alu_wen2", false,-1);
        tracep->declBus(c+338,"mycpu_top u_datapath u_forward_top u_forward_mux_master_rs_value alu_waddr2", false,-1, 4,0);
        tracep->declBus(c+1183,"mycpu_top u_datapath u_forward_top u_forward_mux_master_rs_value alu_wdata2", false,-1, 31,0);
        tracep->declBit(c+217,"mycpu_top u_datapath u_forward_top u_forward_mux_master_rs_value alu_wen3", false,-1);
        tracep->declBus(c+420,"mycpu_top u_datapath u_forward_top u_forward_mux_master_rs_value alu_waddr3", false,-1, 4,0);
        tracep->declBus(c+511,"mycpu_top u_datapath u_forward_top u_forward_mux_master_rs_value alu_wdata3", false,-1, 31,0);
        tracep->declBit(c+216,"mycpu_top u_datapath u_forward_top u_forward_mux_master_rs_value alu_wen4", false,-1);
        tracep->declBus(c+419,"mycpu_top u_datapath u_forward_top u_forward_mux_master_rs_value alu_waddr4", false,-1, 4,0);
        tracep->declBus(c+510,"mycpu_top u_datapath u_forward_top u_forward_mux_master_rs_value alu_wdata4", false,-1, 31,0);
        tracep->declBus(c+284,"mycpu_top u_datapath u_forward_top u_forward_mux_master_rs_value reg_addr", false,-1, 4,0);
        tracep->declBus(c+1204,"mycpu_top u_datapath u_forward_top u_forward_mux_master_rs_value reg_data_tmp", false,-1, 31,0);
        tracep->declBus(c+1167,"mycpu_top u_datapath u_forward_top u_forward_mux_master_rs_value reg_data", false,-1, 31,0);
        tracep->declBit(c+743,"mycpu_top u_datapath u_forward_top u_forward_mux_master_rt_value alu_wen1", false,-1);
        tracep->declBus(c+339,"mycpu_top u_datapath u_forward_top u_forward_mux_master_rt_value alu_waddr1", false,-1, 4,0);
        tracep->declBus(c+1240,"mycpu_top u_datapath u_forward_top u_forward_mux_master_rt_value alu_wdata1", false,-1, 31,0);
        tracep->declBit(c+744,"mycpu_top u_datapath u_forward_top u_forward_mux_master_rt_value alu_wen2", false,-1);
        tracep->declBus(c+338,"mycpu_top u_datapath u_forward_top u_forward_mux_master_rt_value alu_waddr2", false,-1, 4,0);
        tracep->declBus(c+1183,"mycpu_top u_datapath u_forward_top u_forward_mux_master_rt_value alu_wdata2", false,-1, 31,0);
        tracep->declBit(c+217,"mycpu_top u_datapath u_forward_top u_forward_mux_master_rt_value alu_wen3", false,-1);
        tracep->declBus(c+420,"mycpu_top u_datapath u_forward_top u_forward_mux_master_rt_value alu_waddr3", false,-1, 4,0);
        tracep->declBus(c+511,"mycpu_top u_datapath u_forward_top u_forward_mux_master_rt_value alu_wdata3", false,-1, 31,0);
        tracep->declBit(c+216,"mycpu_top u_datapath u_forward_top u_forward_mux_master_rt_value alu_wen4", false,-1);
        tracep->declBus(c+419,"mycpu_top u_datapath u_forward_top u_forward_mux_master_rt_value alu_waddr4", false,-1, 4,0);
        tracep->declBus(c+510,"mycpu_top u_datapath u_forward_top u_forward_mux_master_rt_value alu_wdata4", false,-1, 31,0);
        tracep->declBus(c+286,"mycpu_top u_datapath u_forward_top u_forward_mux_master_rt_value reg_addr", false,-1, 4,0);
        tracep->declBus(c+1165,"mycpu_top u_datapath u_forward_top u_forward_mux_master_rt_value reg_data_tmp", false,-1, 31,0);
        tracep->declBus(c+1169,"mycpu_top u_datapath u_forward_top u_forward_mux_master_rt_value reg_data", false,-1, 31,0);
        tracep->declBit(c+743,"mycpu_top u_datapath u_forward_top u_forward_mux_slave_rs_value alu_wen1", false,-1);
        tracep->declBus(c+339,"mycpu_top u_datapath u_forward_top u_forward_mux_slave_rs_value alu_waddr1", false,-1, 4,0);
        tracep->declBus(c+1240,"mycpu_top u_datapath u_forward_top u_forward_mux_slave_rs_value alu_wdata1", false,-1, 31,0);
        tracep->declBit(c+744,"mycpu_top u_datapath u_forward_top u_forward_mux_slave_rs_value alu_wen2", false,-1);
        tracep->declBus(c+338,"mycpu_top u_datapath u_forward_top u_forward_mux_slave_rs_value alu_waddr2", false,-1, 4,0);
        tracep->declBus(c+1183,"mycpu_top u_datapath u_forward_top u_forward_mux_slave_rs_value alu_wdata2", false,-1, 31,0);
        tracep->declBit(c+217,"mycpu_top u_datapath u_forward_top u_forward_mux_slave_rs_value alu_wen3", false,-1);
        tracep->declBus(c+420,"mycpu_top u_datapath u_forward_top u_forward_mux_slave_rs_value alu_waddr3", false,-1, 4,0);
        tracep->declBus(c+511,"mycpu_top u_datapath u_forward_top u_forward_mux_slave_rs_value alu_wdata3", false,-1, 31,0);
        tracep->declBit(c+216,"mycpu_top u_datapath u_forward_top u_forward_mux_slave_rs_value alu_wen4", false,-1);
        tracep->declBus(c+419,"mycpu_top u_datapath u_forward_top u_forward_mux_slave_rs_value alu_waddr4", false,-1, 4,0);
        tracep->declBus(c+510,"mycpu_top u_datapath u_forward_top u_forward_mux_slave_rs_value alu_wdata4", false,-1, 31,0);
        tracep->declBus(c+285,"mycpu_top u_datapath u_forward_top u_forward_mux_slave_rs_value reg_addr", false,-1, 4,0);
        tracep->declBus(c+1164,"mycpu_top u_datapath u_forward_top u_forward_mux_slave_rs_value reg_data_tmp", false,-1, 31,0);
        tracep->declBus(c+1168,"mycpu_top u_datapath u_forward_top u_forward_mux_slave_rs_value reg_data", false,-1, 31,0);
        tracep->declBit(c+743,"mycpu_top u_datapath u_forward_top u_forward_mux_slave_rt_value alu_wen1", false,-1);
        tracep->declBus(c+339,"mycpu_top u_datapath u_forward_top u_forward_mux_slave_rt_value alu_waddr1", false,-1, 4,0);
        tracep->declBus(c+1240,"mycpu_top u_datapath u_forward_top u_forward_mux_slave_rt_value alu_wdata1", false,-1, 31,0);
        tracep->declBit(c+744,"mycpu_top u_datapath u_forward_top u_forward_mux_slave_rt_value alu_wen2", false,-1);
        tracep->declBus(c+338,"mycpu_top u_datapath u_forward_top u_forward_mux_slave_rt_value alu_waddr2", false,-1, 4,0);
        tracep->declBus(c+1183,"mycpu_top u_datapath u_forward_top u_forward_mux_slave_rt_value alu_wdata2", false,-1, 31,0);
        tracep->declBit(c+217,"mycpu_top u_datapath u_forward_top u_forward_mux_slave_rt_value alu_wen3", false,-1);
        tracep->declBus(c+420,"mycpu_top u_datapath u_forward_top u_forward_mux_slave_rt_value alu_waddr3", false,-1, 4,0);
        tracep->declBus(c+511,"mycpu_top u_datapath u_forward_top u_forward_mux_slave_rt_value alu_wdata3", false,-1, 31,0);
        tracep->declBit(c+216,"mycpu_top u_datapath u_forward_top u_forward_mux_slave_rt_value alu_wen4", false,-1);
        tracep->declBus(c+419,"mycpu_top u_datapath u_forward_top u_forward_mux_slave_rt_value alu_waddr4", false,-1, 4,0);
        tracep->declBus(c+510,"mycpu_top u_datapath u_forward_top u_forward_mux_slave_rt_value alu_wdata4", false,-1, 31,0);
        tracep->declBus(c+287,"mycpu_top u_datapath u_forward_top u_forward_mux_slave_rt_value reg_addr", false,-1, 4,0);
        tracep->declBus(c+1166,"mycpu_top u_datapath u_forward_top u_forward_mux_slave_rt_value reg_data_tmp", false,-1, 31,0);
        tracep->declBus(c+1170,"mycpu_top u_datapath u_forward_top u_forward_mux_slave_rt_value reg_data", false,-1, 31,0);
        tracep->declBit(c+1281,"mycpu_top u_datapath u_id_ex clk", false,-1);
        tracep->declBit(c+1329,"mycpu_top u_datapath u_id_ex rst", false,-1);
        tracep->declBit(c+1244,"mycpu_top u_datapath u_id_ex clear1", false,-1);
        tracep->declBit(c+1245,"mycpu_top u_datapath u_id_ex clear2", false,-1);
        tracep->declBit(c+1194,"mycpu_top u_datapath u_id_ex ena1", false,-1);
        tracep->declBit(c+1193,"mycpu_top u_datapath u_id_ex ena2", false,-1);
        tracep->declBus(c+92,"mycpu_top u_datapath u_id_ex D_master_ctrl_sign\206 aluop", false,-1, 7,0);
        tracep->declBit(c+93,"mycpu_top u_datapath u_id_ex D_master_ctrl_sign\206 flush_all", false,-1);
        tracep->declBit(c+94,"mycpu_top u_datapath u_id_ex D_master_ctrl_sign\206 read_rs", false,-1);
        tracep->declBit(c+95,"mycpu_top u_datapath u_id_ex D_master_ctrl_sign\206 read_rt", false,-1);
        tracep->declBit(c+96,"mycpu_top u_datapath u_id_ex D_master_ctrl_sign\206 reg_write", false,-1);
        tracep->declBit(c+97,"mycpu_top u_datapath u_id_ex D_master_ctrl_sign\206 mem_en", false,-1);
        tracep->declBit(c+98,"mycpu_top u_datapath u_id_ex D_master_ctrl_sign\206 mem_write_reg", false,-1);
        tracep->declBit(c+99,"mycpu_top u_datapath u_id_ex D_master_ctrl_sign\206 mem_read", false,-1);
        tracep->declBit(c+100,"mycpu_top u_datapath u_id_ex D_master_ctrl_sign\206 mem_write", false,-1);
        tracep->declBit(c+101,"mycpu_top u_datapath u_id_ex D_master_ctrl_sign\206 cp0_read", false,-1);
        tracep->declBit(c+102,"mycpu_top u_datapath u_id_ex D_master_ctrl_sign\206 cp0_write", false,-1);
        tracep->declBit(c+103,"mycpu_top u_datapath u_id_ex D_master_ctrl_sign\206 hilo_read", false,-1);
        tracep->declBit(c+104,"mycpu_top u_datapath u_id_ex D_master_ctrl_sign\206 hilo_write", false,-1);
        tracep->declBit(c+105,"mycpu_top u_datapath u_id_ex D_master_ctrl_sign\206 may_bring_flush", false,-1);
        tracep->declBit(c+106,"mycpu_top u_datapath u_id_ex D_master_ctrl_sign\206 only_one_issue", false,-1);
        tracep->declBit(c+107,"mycpu_top u_datapath u_id_ex D_master_ctrl_sign\206 icache_fence", false,-1);
        tracep->declBit(c+108,"mycpu_top u_datapath u_id_ex D_master_ctrl_sign\206 dcache_fence", false,-1);
        tracep->declBit(c+109,"mycpu_top u_datapath u_id_ex D_master_ctrl_sign\206 tlb_fence", false,-1);
        tracep->declBit(c+110,"mycpu_top u_datapath u_id_ex D_master_ctrl_sign\206 mul_en", false,-1);
        tracep->declBit(c+111,"mycpu_top u_datapath u_id_ex D_master_ctrl_sign\206 div_en", false,-1);
        tracep->declBit(c+292,"mycpu_top u_datapath u_id_ex D_master_except\206 if_adel", false,-1);
        tracep->declBit(c+293,"mycpu_top u_datapath u_id_ex D_master_except\206 if_tlbl", false,-1);
        tracep->declBit(c+239,"mycpu_top u_datapath u_id_ex D_master_except\206 if_tlbrf", false,-1);
        tracep->declBit(c+276,"mycpu_top u_datapath u_id_ex D_master_except\206 id_ri", false,-1);
        tracep->declBit(c+256,"mycpu_top u_datapath u_id_ex D_master_except\206 id_syscall", false,-1);
        tracep->declBit(c+254,"mycpu_top u_datapath u_id_ex D_master_except\206 id_break", false,-1);
        tracep->declBit(c+258,"mycpu_top u_datapath u_id_ex D_master_except\206 id_eret", false,-1);
        tracep->declBit(c+225,"mycpu_top u_datapath u_id_ex D_master_except\206 id_int", false,-1);
        tracep->declBit(c+260,"mycpu_top u_datapath u_id_ex D_master_except\206 id_cpu", false,-1);
        tracep->declBit(c+1339,"mycpu_top u_datapath u_id_ex D_master_except\206 ex_ov", false,-1);
        tracep->declBit(c+1339,"mycpu_top u_datapath u_id_ex D_master_except\206 ex_adel", false,-1);
        tracep->declBit(c+1339,"mycpu_top u_datapath u_id_ex D_master_except\206 ex_ades", false,-1);
        tracep->declBit(c+1339,"mycpu_top u_datapath u_id_ex D_master_except\206 ex_tlbl", false,-1);
        tracep->declBit(c+1339,"mycpu_top u_datapath u_id_ex D_master_except\206 ex_tlbs", false,-1);
        tracep->declBit(c+1339,"mycpu_top u_datapath u_id_ex D_master_except\206 ex_tlbm", false,-1);
        tracep->declBit(c+1339,"mycpu_top u_datapath u_id_ex D_master_except\206 ex_tlbrf", false,-1);
        tracep->declBit(c+1339,"mycpu_top u_datapath u_id_ex D_master_except\206 ex_trap", false,-1);
        tracep->declBit(c+262,"mycpu_top u_datapath u_id_ex D_master_cop0_info\206 mtc0_en", false,-1);
        tracep->declBit(c+263,"mycpu_top u_datapath u_id_ex D_master_cop0_info\206 TLBP", false,-1);
        tracep->declBit(c+264,"mycpu_top u_datapath u_id_ex D_master_cop0_info\206 TLBR", false,-1);
        tracep->declBit(c+265,"mycpu_top u_datapath u_id_ex D_master_cop0_info\206 TLBWI", false,-1);
        tracep->declBit(c+266,"mycpu_top u_datapath u_id_ex D_master_cop0_info\206 TLBWR", false,-1);
        tracep->declBus(c+267,"mycpu_top u_datapath u_id_ex D_master_cop0_info\206 reg_addr", false,-1, 4,0);
        tracep->declBus(c+268,"mycpu_top u_datapath u_id_ex D_master_cop0_info\206 sel_addr", false,-1, 2,0);
        tracep->declBit(c+244,"mycpu_top u_datapath u_id_ex D_master_is_link_pc8", false,-1);
        tracep->declBit(c+243,"mycpu_top u_datapath u_id_ex D_master_is_in_delayslot", false,-1);
        tracep->declBit(c+230,"mycpu_top u_datapath u_id_ex D_master_is_branch", false,-1);
        tracep->declBit(c+1203,"mycpu_top u_datapath u_id_ex D_master_pred_take", false,-1);
        tracep->declBit(c+232,"mycpu_top u_datapath u_id_ex D_master_jump_conflict", false,-1);
        tracep->declBus(c+278,"mycpu_top u_datapath u_id_ex D_master_branch_type", false,-1, 3,0);
        tracep->declBus(c+280,"mycpu_top u_datapath u_id_ex D_master_trap_type", false,-1, 3,0);
        tracep->declBus(c+284,"mycpu_top u_datapath u_id_ex D_master_rs", false,-1, 4,0);
        tracep->declBus(c+286,"mycpu_top u_datapath u_id_ex D_master_rt", false,-1, 4,0);
        tracep->declBus(c+290,"mycpu_top u_datapath u_id_ex D_master_reg_waddr", false,-1, 4,0);
        tracep->declBus(c+246,"mycpu_top u_datapath u_id_ex D_master_op", false,-1, 5,0);
        tracep->declBus(c+282,"mycpu_top u_datapath u_id_ex D_master_cmov_type", false,-1, 1,0);
        tracep->declBus(c+235,"mycpu_top u_datapath u_id_ex D_master_pc", false,-1, 31,0);
        tracep->declBus(c+237,"mycpu_top u_datapath u_id_ex D_master_inst", false,-1, 31,0);
        tracep->declBus(c+1167,"mycpu_top u_datapath u_id_ex D_master_rs_value", false,-1, 31,0);
        tracep->declBus(c+1169,"mycpu_top u_datapath u_id_ex D_master_rt_value", false,-1, 31,0);
        tracep->declBus(c+252,"mycpu_top u_datapath u_id_ex D_master_imm_value", false,-1, 31,0);
        tracep->declBus(c+250,"mycpu_top u_datapath u_id_ex D_master_shamt_value", false,-1, 31,0);
        tracep->declBus(c+234,"mycpu_top u_datapath u_id_ex D_master_pc_plus4", false,-1, 31,0);
        tracep->declBus(c+233,"mycpu_top u_datapath u_id_ex D_master_branch_target", false,-1, 31,0);
        tracep->declBus(c+112,"mycpu_top u_datapath u_id_ex D_slave_ctrl_sign\206 aluop", false,-1, 7,0);
        tracep->declBit(c+113,"mycpu_top u_datapath u_id_ex D_slave_ctrl_sign\206 flush_all", false,-1);
        tracep->declBit(c+114,"mycpu_top u_datapath u_id_ex D_slave_ctrl_sign\206 read_rs", false,-1);
        tracep->declBit(c+115,"mycpu_top u_datapath u_id_ex D_slave_ctrl_sign\206 read_rt", false,-1);
        tracep->declBit(c+116,"mycpu_top u_datapath u_id_ex D_slave_ctrl_sign\206 reg_write", false,-1);
        tracep->declBit(c+117,"mycpu_top u_datapath u_id_ex D_slave_ctrl_sign\206 mem_en", false,-1);
        tracep->declBit(c+118,"mycpu_top u_datapath u_id_ex D_slave_ctrl_sign\206 mem_write_reg", false,-1);
        tracep->declBit(c+119,"mycpu_top u_datapath u_id_ex D_slave_ctrl_sign\206 mem_read", false,-1);
        tracep->declBit(c+120,"mycpu_top u_datapath u_id_ex D_slave_ctrl_sign\206 mem_write", false,-1);
        tracep->declBit(c+121,"mycpu_top u_datapath u_id_ex D_slave_ctrl_sign\206 cp0_read", false,-1);
        tracep->declBit(c+122,"mycpu_top u_datapath u_id_ex D_slave_ctrl_sign\206 cp0_write", false,-1);
        tracep->declBit(c+123,"mycpu_top u_datapath u_id_ex D_slave_ctrl_sign\206 hilo_read", false,-1);
        tracep->declBit(c+124,"mycpu_top u_datapath u_id_ex D_slave_ctrl_sign\206 hilo_write", false,-1);
        tracep->declBit(c+125,"mycpu_top u_datapath u_id_ex D_slave_ctrl_sign\206 may_bring_flush", false,-1);
        tracep->declBit(c+126,"mycpu_top u_datapath u_id_ex D_slave_ctrl_sign\206 only_one_issue", false,-1);
        tracep->declBit(c+127,"mycpu_top u_datapath u_id_ex D_slave_ctrl_sign\206 icache_fence", false,-1);
        tracep->declBit(c+128,"mycpu_top u_datapath u_id_ex D_slave_ctrl_sign\206 dcache_fence", false,-1);
        tracep->declBit(c+129,"mycpu_top u_datapath u_id_ex D_slave_ctrl_sign\206 tlb_fence", false,-1);
        tracep->declBit(c+130,"mycpu_top u_datapath u_id_ex D_slave_ctrl_sign\206 mul_en", false,-1);
        tracep->declBit(c+131,"mycpu_top u_datapath u_id_ex D_slave_ctrl_sign\206 div_en", false,-1);
        tracep->declBit(c+294,"mycpu_top u_datapath u_id_ex D_slave_except\206 if_adel", false,-1);
        tracep->declBit(c+295,"mycpu_top u_datapath u_id_ex D_slave_except\206 if_tlbl", false,-1);
        tracep->declBit(c+240,"mycpu_top u_datapath u_id_ex D_slave_except\206 if_tlbrf", false,-1);
        tracep->declBit(c+277,"mycpu_top u_datapath u_id_ex D_slave_except\206 id_ri", false,-1);
        tracep->declBit(c+257,"mycpu_top u_datapath u_id_ex D_slave_except\206 id_syscall", false,-1);
        tracep->declBit(c+255,"mycpu_top u_datapath u_id_ex D_slave_except\206 id_break", false,-1);
        tracep->declBit(c+259,"mycpu_top u_datapath u_id_ex D_slave_except\206 id_eret", false,-1);
        tracep->declBit(c+296,"mycpu_top u_datapath u_id_ex D_slave_except\206 id_int", false,-1);
        tracep->declBit(c+297,"mycpu_top u_datapath u_id_ex D_slave_except\206 id_cpu", false,-1);
        tracep->declBit(c+298,"mycpu_top u_datapath u_id_ex D_slave_except\206 ex_ov", false,-1);
        tracep->declBit(c+299,"mycpu_top u_datapath u_id_ex D_slave_except\206 ex_adel", false,-1);
        tracep->declBit(c+300,"mycpu_top u_datapath u_id_ex D_slave_except\206 ex_ades", false,-1);
        tracep->declBit(c+301,"mycpu_top u_datapath u_id_ex D_slave_except\206 ex_tlbl", false,-1);
        tracep->declBit(c+302,"mycpu_top u_datapath u_id_ex D_slave_except\206 ex_tlbs", false,-1);
        tracep->declBit(c+303,"mycpu_top u_datapath u_id_ex D_slave_except\206 ex_tlbm", false,-1);
        tracep->declBit(c+304,"mycpu_top u_datapath u_id_ex D_slave_except\206 ex_tlbrf", false,-1);
        tracep->declBit(c+305,"mycpu_top u_datapath u_id_ex D_slave_except\206 ex_trap", false,-1);
        tracep->declBit(c+269,"mycpu_top u_datapath u_id_ex D_slave_cop0_info\206 mtc0_en", false,-1);
        tracep->declBit(c+270,"mycpu_top u_datapath u_id_ex D_slave_cop0_info\206 TLBP", false,-1);
        tracep->declBit(c+271,"mycpu_top u_datapath u_id_ex D_slave_cop0_info\206 TLBR", false,-1);
        tracep->declBit(c+272,"mycpu_top u_datapath u_id_ex D_slave_cop0_info\206 TLBWI", false,-1);
        tracep->declBit(c+273,"mycpu_top u_datapath u_id_ex D_slave_cop0_info\206 TLBWR", false,-1);
        tracep->declBus(c+274,"mycpu_top u_datapath u_id_ex D_slave_cop0_info\206 reg_addr", false,-1, 4,0);
        tracep->declBus(c+275,"mycpu_top u_datapath u_id_ex D_slave_cop0_info\206 sel_addr", false,-1, 2,0);
        tracep->declBit(c+1163,"mycpu_top u_datapath u_id_ex D_slave_is_in_delayslot", false,-1);
        tracep->declBus(c+285,"mycpu_top u_datapath u_id_ex D_slave_rs", false,-1, 4,0);
        tracep->declBus(c+287,"mycpu_top u_datapath u_id_ex D_slave_rt", false,-1, 4,0);
        tracep->declBus(c+291,"mycpu_top u_datapath u_id_ex D_slave_reg_waddr", false,-1, 4,0);
        tracep->declBus(c+247,"mycpu_top u_datapath u_id_ex D_slave_op", false,-1, 5,0);
        tracep->declBus(c+283,"mycpu_top u_datapath u_id_ex D_slave_cmov_type", false,-1, 1,0);
        tracep->declBus(c+236,"mycpu_top u_datapath u_id_ex D_slave_pc", false,-1, 31,0);
        tracep->declBus(c+238,"mycpu_top u_datapath u_id_ex D_slave_inst", false,-1, 31,0);
        tracep->declBus(c+1168,"mycpu_top u_datapath u_id_ex D_slave_rs_value", false,-1, 31,0);
        tracep->declBus(c+1170,"mycpu_top u_datapath u_id_ex D_slave_rt_value", false,-1, 31,0);
        tracep->declBus(c+253,"mycpu_top u_datapath u_id_ex D_slave_imm_value", false,-1, 31,0);
        tracep->declBus(c+251,"mycpu_top u_datapath u_id_ex D_slave_shamt_value", false,-1, 31,0);
        tracep->declBus(c+132,"mycpu_top u_datapath u_id_ex E_master_ctrl_sign\206 aluop", false,-1, 7,0);
        tracep->declBit(c+133,"mycpu_top u_datapath u_id_ex E_master_ctrl_sign\206 flush_all", false,-1);
        tracep->declBit(c+134,"mycpu_top u_datapath u_id_ex E_master_ctrl_sign\206 read_rs", false,-1);
        tracep->declBit(c+135,"mycpu_top u_datapath u_id_ex E_master_ctrl_sign\206 read_rt", false,-1);
        tracep->declBit(c+136,"mycpu_top u_datapath u_id_ex E_master_ctrl_sign\206 reg_write", false,-1);
        tracep->declBit(c+137,"mycpu_top u_datapath u_id_ex E_master_ctrl_sign\206 mem_en", false,-1);
        tracep->declBit(c+138,"mycpu_top u_datapath u_id_ex E_master_ctrl_sign\206 mem_write_reg", false,-1);
        tracep->declBit(c+139,"mycpu_top u_datapath u_id_ex E_master_ctrl_sign\206 mem_read", false,-1);
        tracep->declBit(c+140,"mycpu_top u_datapath u_id_ex E_master_ctrl_sign\206 mem_write", false,-1);
        tracep->declBit(c+141,"mycpu_top u_datapath u_id_ex E_master_ctrl_sign\206 cp0_read", false,-1);
        tracep->declBit(c+142,"mycpu_top u_datapath u_id_ex E_master_ctrl_sign\206 cp0_write", false,-1);
        tracep->declBit(c+143,"mycpu_top u_datapath u_id_ex E_master_ctrl_sign\206 hilo_read", false,-1);
        tracep->declBit(c+144,"mycpu_top u_datapath u_id_ex E_master_ctrl_sign\206 hilo_write", false,-1);
        tracep->declBit(c+145,"mycpu_top u_datapath u_id_ex E_master_ctrl_sign\206 may_bring_flush", false,-1);
        tracep->declBit(c+146,"mycpu_top u_datapath u_id_ex E_master_ctrl_sign\206 only_one_issue", false,-1);
        tracep->declBit(c+147,"mycpu_top u_datapath u_id_ex E_master_ctrl_sign\206 icache_fence", false,-1);
        tracep->declBit(c+148,"mycpu_top u_datapath u_id_ex E_master_ctrl_sign\206 dcache_fence", false,-1);
        tracep->declBit(c+149,"mycpu_top u_datapath u_id_ex E_master_ctrl_sign\206 tlb_fence", false,-1);
        tracep->declBit(c+150,"mycpu_top u_datapath u_id_ex E_master_ctrl_sign\206 mul_en", false,-1);
        tracep->declBit(c+151,"mycpu_top u_datapath u_id_ex E_master_ctrl_sign\206 div_en", false,-1);
        tracep->declBit(c+342,"mycpu_top u_datapath u_id_ex E_master_except\206 if_adel", false,-1);
        tracep->declBit(c+343,"mycpu_top u_datapath u_id_ex E_master_except\206 if_tlbl", false,-1);
        tracep->declBit(c+344,"mycpu_top u_datapath u_id_ex E_master_except\206 if_tlbrf", false,-1);
        tracep->declBit(c+345,"mycpu_top u_datapath u_id_ex E_master_except\206 id_ri", false,-1);
        tracep->declBit(c+346,"mycpu_top u_datapath u_id_ex E_master_except\206 id_syscall", false,-1);
        tracep->declBit(c+347,"mycpu_top u_datapath u_id_ex E_master_except\206 id_break", false,-1);
        tracep->declBit(c+348,"mycpu_top u_datapath u_id_ex E_master_except\206 id_eret", false,-1);
        tracep->declBit(c+349,"mycpu_top u_datapath u_id_ex E_master_except\206 id_int", false,-1);
        tracep->declBit(c+350,"mycpu_top u_datapath u_id_ex E_master_except\206 id_cpu", false,-1);
        tracep->declBit(c+351,"mycpu_top u_datapath u_id_ex E_master_except\206 ex_ov", false,-1);
        tracep->declBit(c+352,"mycpu_top u_datapath u_id_ex E_master_except\206 ex_adel", false,-1);
        tracep->declBit(c+353,"mycpu_top u_datapath u_id_ex E_master_except\206 ex_ades", false,-1);
        tracep->declBit(c+354,"mycpu_top u_datapath u_id_ex E_master_except\206 ex_tlbl", false,-1);
        tracep->declBit(c+355,"mycpu_top u_datapath u_id_ex E_master_except\206 ex_tlbs", false,-1);
        tracep->declBit(c+356,"mycpu_top u_datapath u_id_ex E_master_except\206 ex_tlbm", false,-1);
        tracep->declBit(c+357,"mycpu_top u_datapath u_id_ex E_master_except\206 ex_tlbrf", false,-1);
        tracep->declBit(c+358,"mycpu_top u_datapath u_id_ex E_master_except\206 ex_trap", false,-1);
        tracep->declBit(c+376,"mycpu_top u_datapath u_id_ex E_master_cop0_info\206 mtc0_en", false,-1);
        tracep->declBit(c+377,"mycpu_top u_datapath u_id_ex E_master_cop0_info\206 TLBP", false,-1);
        tracep->declBit(c+378,"mycpu_top u_datapath u_id_ex E_master_cop0_info\206 TLBR", false,-1);
        tracep->declBit(c+379,"mycpu_top u_datapath u_id_ex E_master_cop0_info\206 TLBWI", false,-1);
        tracep->declBit(c+380,"mycpu_top u_datapath u_id_ex E_master_cop0_info\206 TLBWR", false,-1);
        tracep->declBus(c+381,"mycpu_top u_datapath u_id_ex E_master_cop0_info\206 reg_addr", false,-1, 4,0);
        tracep->declBus(c+382,"mycpu_top u_datapath u_id_ex E_master_cop0_info\206 sel_addr", false,-1, 2,0);
        tracep->declBit(c+315,"mycpu_top u_datapath u_id_ex E_master_is_link_pc8", false,-1);
        tracep->declBit(c+340,"mycpu_top u_datapath u_id_ex E_master_is_in_delayslot", false,-1);
        tracep->declBit(c+309,"mycpu_top u_datapath u_id_ex E_master_is_branch", false,-1);
        tracep->declBit(c+311,"mycpu_top u_datapath u_id_ex E_master_pred_take", false,-1);
        tracep->declBit(c+314,"mycpu_top u_datapath u_id_ex E_master_jump_conflict", false,-1);
        tracep->declBus(c+307,"mycpu_top u_datapath u_id_ex E_master_branch_type", false,-1, 3,0);
        tracep->declBus(c+308,"mycpu_top u_datapath u_id_ex E_master_trap_type", false,-1, 3,0);
        tracep->declBus(c+320,"mycpu_top u_datapath u_id_ex E_master_rs", false,-1, 4,0);
        tracep->declBus(c+322,"mycpu_top u_datapath u_id_ex E_master_rt", false,-1, 4,0);
        tracep->declBus(c+338,"mycpu_top u_datapath u_id_ex E_master_reg_waddr", false,-1, 4,0);
        tracep->declBus(c+336,"mycpu_top u_datapath u_id_ex E_master_op", false,-1, 5,0);
        tracep->declBus(c+397,"mycpu_top u_datapath u_id_ex E_master_cmov_type", false,-1, 1,0);
        tracep->declBus(c+334,"mycpu_top u_datapath u_id_ex E_master_pc", false,-1, 31,0);
        tracep->declBus(c+324,"mycpu_top u_datapath u_id_ex E_master_inst", false,-1, 31,0);
        tracep->declBus(c+328,"mycpu_top u_datapath u_id_ex E_master_rs_value", false,-1, 31,0);
        tracep->declBus(c+330,"mycpu_top u_datapath u_id_ex E_master_rt_value", false,-1, 31,0);
        tracep->declBus(c+332,"mycpu_top u_datapath u_id_ex E_master_imm_value", false,-1, 31,0);
        tracep->declBus(c+326,"mycpu_top u_datapath u_id_ex E_master_shamt_value", false,-1, 31,0);
        tracep->declBus(c+317,"mycpu_top u_datapath u_id_ex E_master_pc_plus4", false,-1, 31,0);
        tracep->declBus(c+316,"mycpu_top u_datapath u_id_ex E_master_branch_target", false,-1, 31,0);
        tracep->declBus(c+152,"mycpu_top u_datapath u_id_ex E_slave_ctrl_sign\206 aluop", false,-1, 7,0);
        tracep->declBit(c+153,"mycpu_top u_datapath u_id_ex E_slave_ctrl_sign\206 flush_all", false,-1);
        tracep->declBit(c+154,"mycpu_top u_datapath u_id_ex E_slave_ctrl_sign\206 read_rs", false,-1);
        tracep->declBit(c+155,"mycpu_top u_datapath u_id_ex E_slave_ctrl_sign\206 read_rt", false,-1);
        tracep->declBit(c+156,"mycpu_top u_datapath u_id_ex E_slave_ctrl_sign\206 reg_write", false,-1);
        tracep->declBit(c+157,"mycpu_top u_datapath u_id_ex E_slave_ctrl_sign\206 mem_en", false,-1);
        tracep->declBit(c+158,"mycpu_top u_datapath u_id_ex E_slave_ctrl_sign\206 mem_write_reg", false,-1);
        tracep->declBit(c+159,"mycpu_top u_datapath u_id_ex E_slave_ctrl_sign\206 mem_read", false,-1);
        tracep->declBit(c+160,"mycpu_top u_datapath u_id_ex E_slave_ctrl_sign\206 mem_write", false,-1);
        tracep->declBit(c+161,"mycpu_top u_datapath u_id_ex E_slave_ctrl_sign\206 cp0_read", false,-1);
        tracep->declBit(c+162,"mycpu_top u_datapath u_id_ex E_slave_ctrl_sign\206 cp0_write", false,-1);
        tracep->declBit(c+163,"mycpu_top u_datapath u_id_ex E_slave_ctrl_sign\206 hilo_read", false,-1);
        tracep->declBit(c+164,"mycpu_top u_datapath u_id_ex E_slave_ctrl_sign\206 hilo_write", false,-1);
        tracep->declBit(c+165,"mycpu_top u_datapath u_id_ex E_slave_ctrl_sign\206 may_bring_flush", false,-1);
        tracep->declBit(c+166,"mycpu_top u_datapath u_id_ex E_slave_ctrl_sign\206 only_one_issue", false,-1);
        tracep->declBit(c+167,"mycpu_top u_datapath u_id_ex E_slave_ctrl_sign\206 icache_fence", false,-1);
        tracep->declBit(c+168,"mycpu_top u_datapath u_id_ex E_slave_ctrl_sign\206 dcache_fence", false,-1);
        tracep->declBit(c+169,"mycpu_top u_datapath u_id_ex E_slave_ctrl_sign\206 tlb_fence", false,-1);
        tracep->declBit(c+170,"mycpu_top u_datapath u_id_ex E_slave_ctrl_sign\206 mul_en", false,-1);
        tracep->declBit(c+171,"mycpu_top u_datapath u_id_ex E_slave_ctrl_sign\206 div_en", false,-1);
        tracep->declBit(c+359,"mycpu_top u_datapath u_id_ex E_slave_except\206 if_adel", false,-1);
        tracep->declBit(c+360,"mycpu_top u_datapath u_id_ex E_slave_except\206 if_tlbl", false,-1);
        tracep->declBit(c+361,"mycpu_top u_datapath u_id_ex E_slave_except\206 if_tlbrf", false,-1);
        tracep->declBit(c+362,"mycpu_top u_datapath u_id_ex E_slave_except\206 id_ri", false,-1);
        tracep->declBit(c+363,"mycpu_top u_datapath u_id_ex E_slave_except\206 id_syscall", false,-1);
        tracep->declBit(c+364,"mycpu_top u_datapath u_id_ex E_slave_except\206 id_break", false,-1);
        tracep->declBit(c+365,"mycpu_top u_datapath u_id_ex E_slave_except\206 id_eret", false,-1);
        tracep->declBit(c+366,"mycpu_top u_datapath u_id_ex E_slave_except\206 id_int", false,-1);
        tracep->declBit(c+367,"mycpu_top u_datapath u_id_ex E_slave_except\206 id_cpu", false,-1);
        tracep->declBit(c+368,"mycpu_top u_datapath u_id_ex E_slave_except\206 ex_ov", false,-1);
        tracep->declBit(c+369,"mycpu_top u_datapath u_id_ex E_slave_except\206 ex_adel", false,-1);
        tracep->declBit(c+370,"mycpu_top u_datapath u_id_ex E_slave_except\206 ex_ades", false,-1);
        tracep->declBit(c+371,"mycpu_top u_datapath u_id_ex E_slave_except\206 ex_tlbl", false,-1);
        tracep->declBit(c+372,"mycpu_top u_datapath u_id_ex E_slave_except\206 ex_tlbs", false,-1);
        tracep->declBit(c+373,"mycpu_top u_datapath u_id_ex E_slave_except\206 ex_tlbm", false,-1);
        tracep->declBit(c+374,"mycpu_top u_datapath u_id_ex E_slave_except\206 ex_tlbrf", false,-1);
        tracep->declBit(c+375,"mycpu_top u_datapath u_id_ex E_slave_except\206 ex_trap", false,-1);
        tracep->declBit(c+383,"mycpu_top u_datapath u_id_ex E_slave_cop0_info\206 mtc0_en", false,-1);
        tracep->declBit(c+384,"mycpu_top u_datapath u_id_ex E_slave_cop0_info\206 TLBP", false,-1);
        tracep->declBit(c+385,"mycpu_top u_datapath u_id_ex E_slave_cop0_info\206 TLBR", false,-1);
        tracep->declBit(c+386,"mycpu_top u_datapath u_id_ex E_slave_cop0_info\206 TLBWI", false,-1);
        tracep->declBit(c+387,"mycpu_top u_datapath u_id_ex E_slave_cop0_info\206 TLBWR", false,-1);
        tracep->declBus(c+388,"mycpu_top u_datapath u_id_ex E_slave_cop0_info\206 reg_addr", false,-1, 4,0);
        tracep->declBus(c+389,"mycpu_top u_datapath u_id_ex E_slave_cop0_info\206 sel_addr", false,-1, 2,0);
        tracep->declBit(c+341,"mycpu_top u_datapath u_id_ex E_slave_is_in_delayslot", false,-1);
        tracep->declBus(c+321,"mycpu_top u_datapath u_id_ex E_slave_rs", false,-1, 4,0);
        tracep->declBus(c+323,"mycpu_top u_datapath u_id_ex E_slave_rt", false,-1, 4,0);
        tracep->declBus(c+339,"mycpu_top u_datapath u_id_ex E_slave_reg_waddr", false,-1, 4,0);
        tracep->declBus(c+337,"mycpu_top u_datapath u_id_ex E_slave_op", false,-1, 5,0);
        tracep->declBus(c+398,"mycpu_top u_datapath u_id_ex E_slave_cmov_type", false,-1, 1,0);
        tracep->declBus(c+335,"mycpu_top u_datapath u_id_ex E_slave_pc", false,-1, 31,0);
        tracep->declBus(c+325,"mycpu_top u_datapath u_id_ex E_slave_inst", false,-1, 31,0);
        tracep->declBus(c+329,"mycpu_top u_datapath u_id_ex E_slave_rs_value", false,-1, 31,0);
        tracep->declBus(c+331,"mycpu_top u_datapath u_id_ex E_slave_rt_value", false,-1, 31,0);
        tracep->declBus(c+333,"mycpu_top u_datapath u_id_ex E_slave_imm_value", false,-1, 31,0);
        tracep->declBus(c+327,"mycpu_top u_datapath u_id_ex E_slave_shamt_value", false,-1, 31,0);
        tracep->declBus(c+307,"mycpu_top u_datapath u_branch_judge branch_type", false,-1, 3,0);
        tracep->declBus(c+328,"mycpu_top u_datapath u_branch_judge rs_value", false,-1, 31,0);
        tracep->declBus(c+330,"mycpu_top u_datapath u_branch_judge rt_value", false,-1, 31,0);
        tracep->declBit(c+312,"mycpu_top u_datapath u_branch_judge branch_take", false,-1);
        tracep->declBit(c+311,"mycpu_top u_datapath u_branch_judge pred_take", false,-1);
        tracep->declBit(c+313,"mycpu_top u_datapath u_branch_judge pred_fail", false,-1);
        tracep->declBus(c+308,"mycpu_top u_datapath u_trap_judge_master trap_type", false,-1, 3,0);
        tracep->declBus(c+401,"mycpu_top u_datapath u_trap_judge_master value1", false,-1, 31,0);
        tracep->declBus(c+403,"mycpu_top u_datapath u_trap_judge_master value2", false,-1, 31,0);
        tracep->declBit(c+306,"mycpu_top u_datapath u_trap_judge_master exp_trap", false,-1);
        tracep->declBit(c+1281,"mycpu_top u_datapath u_alu_top clk", false,-1);
        tracep->declBit(c+1329,"mycpu_top u_datapath u_alu_top rst", false,-1);
        tracep->declBit(c+1194,"mycpu_top u_datapath u_alu_top M_ena", false,-1);
        tracep->declBit(c+1198,"mycpu_top u_datapath u_alu_top M_flush", false,-1);
        tracep->declBit(c+745,"mycpu_top u_datapath u_alu_top hilo_write1", false,-1);
        tracep->declBit(c+746,"mycpu_top u_datapath u_alu_top mul_en1", false,-1);
        tracep->declBit(c+747,"mycpu_top u_datapath u_alu_top div_en1", false,-1);
        tracep->declBit(c+1249,"mycpu_top u_datapath u_alu_top exp1", false,-1);
        tracep->declBus(c+748,"mycpu_top u_datapath u_alu_top aluop1", false,-1, 7,0);
        tracep->declBus(c+401,"mycpu_top u_datapath u_alu_top a1", false,-1, 31,0);
        tracep->declBus(c+403,"mycpu_top u_datapath u_alu_top b1", false,-1, 31,0);
        tracep->declBit(c+1241,"mycpu_top u_datapath u_alu_top overflow1", false,-1);
        tracep->declBus(c+1183,"mycpu_top u_datapath u_alu_top y1", false,-1, 31,0);
        tracep->declBit(c+749,"mycpu_top u_datapath u_alu_top hilo_write2", false,-1);
        tracep->declBit(c+750,"mycpu_top u_datapath u_alu_top mul_en2", false,-1);
        tracep->declBit(c+751,"mycpu_top u_datapath u_alu_top div_en2", false,-1);
        tracep->declBit(c+1250,"mycpu_top u_datapath u_alu_top exp2", false,-1);
        tracep->declBus(c+752,"mycpu_top u_datapath u_alu_top aluop2", false,-1, 7,0);
        tracep->declBus(c+402,"mycpu_top u_datapath u_alu_top a2", false,-1, 31,0);
        tracep->declBus(c+404,"mycpu_top u_datapath u_alu_top b2", false,-1, 31,0);
        tracep->declBit(c+1242,"mycpu_top u_datapath u_alu_top overflow2", false,-1);
        tracep->declBus(c+1240,"mycpu_top u_datapath u_alu_top y2", false,-1, 31,0);
        tracep->declBus(c+220,"mycpu_top u_datapath u_alu_top cp0_rdata", false,-1, 31,0);
        tracep->declBus(c+318,"mycpu_top u_datapath u_alu_top pc_plus8", false,-1, 31,0);
        tracep->declBit(c+315,"mycpu_top u_datapath u_alu_top is_link_pc8", false,-1);
        tracep->declBit(c+91,"mycpu_top u_datapath u_alu_top E_alu_stall", false,-1);
        tracep->declBus(c+1251,"mycpu_top u_datapath u_alu_top y1_tmp", false,-1, 31,0);
        tracep->declBus(c+753,"mycpu_top u_datapath u_alu_top mul_a", false,-1, 31,0);
        tracep->declBus(c+754,"mycpu_top u_datapath u_alu_top mul_b", false,-1, 31,0);
        tracep->declBus(c+755,"mycpu_top u_datapath u_alu_top div_a", false,-1, 31,0);
        tracep->declBus(c+756,"mycpu_top u_datapath u_alu_top div_b", false,-1, 31,0);
        tracep->declBit(c+1252,"mycpu_top u_datapath u_alu_top mul_sign1", false,-1);
        tracep->declBit(c+1253,"mycpu_top u_datapath u_alu_top mul_start1", false,-1);
        tracep->declBit(c+1254,"mycpu_top u_datapath u_alu_top div_sign1", false,-1);
        tracep->declBit(c+1255,"mycpu_top u_datapath u_alu_top div_start1", false,-1);
        tracep->declBit(c+1256,"mycpu_top u_datapath u_alu_top mul_sign2", false,-1);
        tracep->declBit(c+1257,"mycpu_top u_datapath u_alu_top mul_start2", false,-1);
        tracep->declBit(c+1258,"mycpu_top u_datapath u_alu_top div_sign2", false,-1);
        tracep->declBit(c+1259,"mycpu_top u_datapath u_alu_top div_start2", false,-1);
        tracep->declBit(c+1260,"mycpu_top u_datapath u_alu_top mul_sign", false,-1);
        tracep->declBit(c+1171,"mycpu_top u_datapath u_alu_top mul_start", false,-1);
        tracep->declBit(c+1261,"mycpu_top u_datapath u_alu_top div_sign", false,-1);
        tracep->declBit(c+1262,"mycpu_top u_datapath u_alu_top div_start", false,-1);
        tracep->declBit(c+757,"mycpu_top u_datapath u_alu_top mul_ready", false,-1);
        tracep->declBit(c+758,"mycpu_top u_datapath u_alu_top div_ready", false,-1);
        tracep->declBit(c+1172,"mycpu_top u_datapath u_alu_top hilo_wen", false,-1);
        tracep->declQuad(c+759,"mycpu_top u_datapath u_alu_top hilo", false,-1, 63,0);
        tracep->declQuad(c+1173,"mycpu_top u_datapath u_alu_top hilo_wdata", false,-1, 63,0);
        tracep->declQuad(c+1263,"mycpu_top u_datapath u_alu_top mul_result", false,-1, 63,0);
        tracep->declQuad(c+761,"mycpu_top u_datapath u_alu_top div_result", false,-1, 63,0);
        tracep->declQuad(c+1265,"mycpu_top u_datapath u_alu_top alu_out64_1", false,-1, 63,0);
        tracep->declQuad(c+1267,"mycpu_top u_datapath u_alu_top alu_out64_2", false,-1, 63,0);
        tracep->declBit(c+1281,"mycpu_top u_datapath u_alu_top u_aluA clk", false,-1);
        tracep->declBit(c+1329,"mycpu_top u_datapath u_alu_top u_aluA rst", false,-1);
        tracep->declBus(c+748,"mycpu_top u_datapath u_alu_top u_aluA aluop", false,-1, 7,0);
        tracep->declBus(c+401,"mycpu_top u_datapath u_alu_top u_aluA a", false,-1, 31,0);
        tracep->declBus(c+403,"mycpu_top u_datapath u_alu_top u_aluA b", false,-1, 31,0);
        tracep->declBus(c+220,"mycpu_top u_datapath u_alu_top u_aluA cp0_data", false,-1, 31,0);
        tracep->declQuad(c+759,"mycpu_top u_datapath u_alu_top u_aluA hilo", false,-1, 63,0);
        tracep->declBit(c+1253,"mycpu_top u_datapath u_alu_top u_aluA mul_start", false,-1);
        tracep->declBit(c+1252,"mycpu_top u_datapath u_alu_top u_aluA mul_sign", false,-1);
        tracep->declBit(c+757,"mycpu_top u_datapath u_alu_top u_aluA mul_ready", false,-1);
        tracep->declQuad(c+1263,"mycpu_top u_datapath u_alu_top u_aluA mul_result", false,-1, 63,0);
        tracep->declBit(c+1255,"mycpu_top u_datapath u_alu_top u_aluA div_start", false,-1);
        tracep->declBit(c+1254,"mycpu_top u_datapath u_alu_top u_aluA div_sign", false,-1);
        tracep->declBit(c+758,"mycpu_top u_datapath u_alu_top u_aluA div_ready", false,-1);
        tracep->declQuad(c+761,"mycpu_top u_datapath u_alu_top u_aluA div_result", false,-1, 63,0);
        tracep->declBus(c+1251,"mycpu_top u_datapath u_alu_top u_aluA y", false,-1, 31,0);
        tracep->declQuad(c+1265,"mycpu_top u_datapath u_alu_top u_aluA aluout_64", false,-1, 63,0);
        tracep->declBit(c+1241,"mycpu_top u_datapath u_alu_top u_aluA overflow", false,-1);
        tracep->declQuad(c+1265,"mycpu_top u_datapath u_alu_top u_aluA temp_aluout_64", false,-1, 63,0);
        tracep->declBus(c+1269,"mycpu_top u_datapath u_alu_top u_aluA i", false,-1, 31,0);
        tracep->declBit(c+1281,"mycpu_top u_datapath u_alu_top u_aluB clk", false,-1);
        tracep->declBit(c+1329,"mycpu_top u_datapath u_alu_top u_aluB rst", false,-1);
        tracep->declBus(c+752,"mycpu_top u_datapath u_alu_top u_aluB aluop", false,-1, 7,0);
        tracep->declBus(c+402,"mycpu_top u_datapath u_alu_top u_aluB a", false,-1, 31,0);
        tracep->declBus(c+404,"mycpu_top u_datapath u_alu_top u_aluB b", false,-1, 31,0);
        tracep->declBus(c+1358,"mycpu_top u_datapath u_alu_top u_aluB cp0_data", false,-1, 31,0);
        tracep->declQuad(c+759,"mycpu_top u_datapath u_alu_top u_aluB hilo", false,-1, 63,0);
        tracep->declBit(c+1257,"mycpu_top u_datapath u_alu_top u_aluB mul_start", false,-1);
        tracep->declBit(c+1256,"mycpu_top u_datapath u_alu_top u_aluB mul_sign", false,-1);
        tracep->declBit(c+757,"mycpu_top u_datapath u_alu_top u_aluB mul_ready", false,-1);
        tracep->declQuad(c+1263,"mycpu_top u_datapath u_alu_top u_aluB mul_result", false,-1, 63,0);
        tracep->declBit(c+1259,"mycpu_top u_datapath u_alu_top u_aluB div_start", false,-1);
        tracep->declBit(c+1258,"mycpu_top u_datapath u_alu_top u_aluB div_sign", false,-1);
        tracep->declBit(c+758,"mycpu_top u_datapath u_alu_top u_aluB div_ready", false,-1);
        tracep->declQuad(c+761,"mycpu_top u_datapath u_alu_top u_aluB div_result", false,-1, 63,0);
        tracep->declBus(c+1240,"mycpu_top u_datapath u_alu_top u_aluB y", false,-1, 31,0);
        tracep->declQuad(c+1267,"mycpu_top u_datapath u_alu_top u_aluB aluout_64", false,-1, 63,0);
        tracep->declBit(c+1242,"mycpu_top u_datapath u_alu_top u_aluB overflow", false,-1);
        tracep->declQuad(c+1267,"mycpu_top u_datapath u_alu_top u_aluB temp_aluout_64", false,-1, 63,0);
        tracep->declBus(c+1270,"mycpu_top u_datapath u_alu_top u_aluB i", false,-1, 31,0);
        tracep->declBit(c+1281,"mycpu_top u_datapath u_alu_top mul_inst clk", false,-1);
        tracep->declBit(c+1329,"mycpu_top u_datapath u_alu_top mul_inst rst", false,-1);
        tracep->declBus(c+753,"mycpu_top u_datapath u_alu_top mul_inst a", false,-1, 31,0);
        tracep->declBus(c+754,"mycpu_top u_datapath u_alu_top mul_inst b", false,-1, 31,0);
        tracep->declBit(c+1260,"mycpu_top u_datapath u_alu_top mul_inst sign", false,-1);
        tracep->declBit(c+1171,"mycpu_top u_datapath u_alu_top mul_inst start", false,-1);
        tracep->declQuad(c+1263,"mycpu_top u_datapath u_alu_top mul_inst result", false,-1, 63,0);
        tracep->declBit(c+757,"mycpu_top u_datapath u_alu_top mul_inst ready", false,-1);
        tracep->declBit(c+763,"mycpu_top u_datapath u_alu_top mul_inst a_sign", false,-1);
        tracep->declBit(c+764,"mycpu_top u_datapath u_alu_top mul_inst b_sign", false,-1);
        tracep->declBit(c+765,"mycpu_top u_datapath u_alu_top mul_inst out_sign", false,-1);
        tracep->declBus(c+766,"mycpu_top u_datapath u_alu_top mul_inst a_abs", false,-1, 31,0);
        tracep->declBus(c+767,"mycpu_top u_datapath u_alu_top mul_inst b_abs", false,-1, 31,0);
        tracep->declBus(c+1271,"mycpu_top u_datapath u_alu_top mul_inst cal_a", false,-1, 31,0);
        tracep->declBus(c+1272,"mycpu_top u_datapath u_alu_top mul_inst cal_b", false,-1, 31,0);
        tracep->declBus(c+768,"mycpu_top u_datapath u_alu_top mul_inst part_0", false,-1, 31,0);
        tracep->declBus(c+769,"mycpu_top u_datapath u_alu_top mul_inst part_1", false,-1, 31,0);
        tracep->declBus(c+770,"mycpu_top u_datapath u_alu_top mul_inst part_2", false,-1, 31,0);
        tracep->declBus(c+771,"mycpu_top u_datapath u_alu_top mul_inst part_3", false,-1, 31,0);
        tracep->declQuad(c+772,"mycpu_top u_datapath u_alu_top mul_inst mid_result", false,-1, 63,0);
        tracep->declBit(c+1281,"mycpu_top u_datapath u_alu_top mydiv clk", false,-1);
        tracep->declBit(c+1329,"mycpu_top u_datapath u_alu_top mydiv rst", false,-1);
        tracep->declBit(c+1261,"mycpu_top u_datapath u_alu_top mydiv signed_div_i", false,-1);
        tracep->declBit(c+1262,"mycpu_top u_datapath u_alu_top mydiv start_i", false,-1);
        tracep->declBit(c+1339,"mycpu_top u_datapath u_alu_top mydiv annul_i", false,-1);
        tracep->declBus(c+755,"mycpu_top u_datapath u_alu_top mydiv opdata1_i", false,-1, 31,0);
        tracep->declBus(c+756,"mycpu_top u_datapath u_alu_top mydiv opdata2_i", false,-1, 31,0);
        tracep->declQuad(c+761,"mycpu_top u_datapath u_alu_top mydiv result_o", false,-1, 63,0);
        tracep->declBit(c+758,"mycpu_top u_datapath u_alu_top mydiv ready_o", false,-1);
        tracep->declQuad(c+774,"mycpu_top u_datapath u_alu_top mydiv div_temp", false,-1, 32,0);
        tracep->declBus(c+1175,"mycpu_top u_datapath u_alu_top mydiv temp_op1", false,-1, 31,0);
        tracep->declBus(c+1176,"mycpu_top u_datapath u_alu_top mydiv temp_op2", false,-1, 31,0);
        tracep->declBus(c+776,"mycpu_top u_datapath u_alu_top mydiv state", false,-1, 1,0);
        tracep->declBus(c+777,"mycpu_top u_datapath u_alu_top mydiv cnt", false,-1, 5,0);
        tracep->declArray(c+778,"mycpu_top u_datapath u_alu_top mydiv dividend", false,-1, 64,0);
        tracep->declBus(c+781,"mycpu_top u_datapath u_alu_top mydiv divisor", false,-1, 31,0);
        tracep->declBit(c+782,"mycpu_top u_datapath u_alu_top mydiv sign1", false,-1);
        tracep->declBit(c+783,"mycpu_top u_datapath u_alu_top mydiv sign2", false,-1);
        tracep->declBit(c+1281,"mycpu_top u_datapath u_alu_top u_hilo_reg clk", false,-1);
        tracep->declBit(c+1329,"mycpu_top u_datapath u_alu_top u_hilo_reg rst", false,-1);
        tracep->declBit(c+1172,"mycpu_top u_datapath u_alu_top u_hilo_reg wen", false,-1);
        tracep->declQuad(c+1173,"mycpu_top u_datapath u_alu_top u_hilo_reg hilo_i", false,-1, 63,0);
        tracep->declQuad(c+759,"mycpu_top u_datapath u_alu_top u_hilo_reg hilo_o", false,-1, 63,0);
        tracep->declQuad(c+759,"mycpu_top u_datapath u_alu_top u_hilo_reg hilo_reg", false,-1, 63,0);
        tracep->declBit(c+784,"mycpu_top u_datapath u_struct_conflict E_exp1", false,-1);
        tracep->declBit(c+785,"mycpu_top u_datapath u_struct_conflict E_exp2", false,-1);
        tracep->declBit(c+1198,"mycpu_top u_datapath u_struct_conflict M_flush", false,-1);
        tracep->declBit(c+1194,"mycpu_top u_datapath u_struct_conflict M_ena", false,-1);
        tracep->declBit(c+786,"mycpu_top u_datapath u_struct_conflict E_mem_en1", false,-1);
        tracep->declBit(c+787,"mycpu_top u_datapath u_struct_conflict E_mem_ren1", false,-1);
        tracep->declBit(c+788,"mycpu_top u_datapath u_struct_conflict E_mem_wen1", false,-1);
        tracep->declBus(c+336,"mycpu_top u_datapath u_struct_conflict E_mem_op1", false,-1, 5,0);
        tracep->declBus(c+399,"mycpu_top u_datapath u_struct_conflict E_mem_addr1", false,-1, 31,0);
        tracep->declBus(c+330,"mycpu_top u_datapath u_struct_conflict E_mem_wdata1", false,-1, 31,0);
        tracep->declBit(c+498,"mycpu_top u_datapath u_struct_conflict M_mem_sel1", false,-1);
        tracep->declBit(c+410,"mycpu_top u_datapath u_struct_conflict E_mem_adel1", false,-1);
        tracep->declBit(c+412,"mycpu_top u_datapath u_struct_conflict E_mem_ades1", false,-1);
        tracep->declBit(c+408,"mycpu_top u_datapath u_struct_conflict E_mem_sel1", false,-1);
        tracep->declBus(c+500,"mycpu_top u_datapath u_struct_conflict M_mem_rdata1", false,-1, 31,0);
        tracep->declBit(c+789,"mycpu_top u_datapath u_struct_conflict E_mem_en2", false,-1);
        tracep->declBit(c+790,"mycpu_top u_datapath u_struct_conflict E_mem_ren2", false,-1);
        tracep->declBit(c+791,"mycpu_top u_datapath u_struct_conflict E_mem_wen2", false,-1);
        tracep->declBus(c+337,"mycpu_top u_datapath u_struct_conflict E_mem_op2", false,-1, 5,0);
        tracep->declBus(c+400,"mycpu_top u_datapath u_struct_conflict E_mem_addr2", false,-1, 31,0);
        tracep->declBus(c+331,"mycpu_top u_datapath u_struct_conflict E_mem_wdata2", false,-1, 31,0);
        tracep->declBit(c+499,"mycpu_top u_datapath u_struct_conflict M_mem_sel2", false,-1);
        tracep->declBit(c+411,"mycpu_top u_datapath u_struct_conflict E_mem_adel2", false,-1);
        tracep->declBit(c+413,"mycpu_top u_datapath u_struct_conflict E_mem_ades2", false,-1);
        tracep->declBit(c+409,"mycpu_top u_datapath u_struct_conflict E_mem_sel2", false,-1);
        tracep->declBus(c+501,"mycpu_top u_datapath u_struct_conflict M_mem_rdata2", false,-1, 31,0);
        tracep->declBit(c+406,"mycpu_top u_datapath u_struct_conflict E_mem_en", false,-1);
        tracep->declBit(c+40,"mycpu_top u_datapath u_struct_conflict E_mem_ren", false,-1);
        tracep->declBit(c+41,"mycpu_top u_datapath u_struct_conflict E_mem_wen", false,-1);
        tracep->declBus(c+405,"mycpu_top u_datapath u_struct_conflict E_mem_op", false,-1, 5,0);
        tracep->declBus(c+39,"mycpu_top u_datapath u_struct_conflict E_mem_addr", false,-1, 31,0);
        tracep->declBus(c+407,"mycpu_top u_datapath u_struct_conflict E_mem_wdata", false,-1, 31,0);
        tracep->declBus(c+492,"mycpu_top u_datapath u_struct_conflict M_mem_rdata", false,-1, 31,0);
        tracep->declBit(c+1281,"mycpu_top u_datapath u_ex_mem clk", false,-1);
        tracep->declBit(c+1329,"mycpu_top u_datapath u_ex_mem rst", false,-1);
        tracep->declBit(c+1198,"mycpu_top u_datapath u_ex_mem clear1", false,-1);
        tracep->declBit(c+1198,"mycpu_top u_datapath u_ex_mem clear2", false,-1);
        tracep->declBit(c+1194,"mycpu_top u_datapath u_ex_mem ena1", false,-1);
        tracep->declBit(c+1194,"mycpu_top u_datapath u_ex_mem ena2", false,-1);
        tracep->declBit(c+406,"mycpu_top u_datapath u_ex_mem E_mem_en", false,-1);
        tracep->declBit(c+40,"mycpu_top u_datapath u_ex_mem E_mem_ren", false,-1);
        tracep->declBit(c+41,"mycpu_top u_datapath u_ex_mem E_mem_wen", false,-1);
        tracep->declBus(c+405,"mycpu_top u_datapath u_ex_mem E_mem_op", false,-1, 5,0);
        tracep->declBus(c+39,"mycpu_top u_datapath u_ex_mem E_mem_addr", false,-1, 31,0);
        tracep->declBus(c+407,"mycpu_top u_datapath u_ex_mem E_mem_wdata", false,-1, 31,0);
        tracep->declBus(c+39,"mycpu_top u_datapath u_ex_mem E_mem_va", false,-1, 31,0);
        tracep->declBit(c+493,"mycpu_top u_datapath u_ex_mem M_mem_en", false,-1);
        tracep->declBit(c+494,"mycpu_top u_datapath u_ex_mem M_mem_ren", false,-1);
        tracep->declBit(c+495,"mycpu_top u_datapath u_ex_mem M_mem_wen", false,-1);
        tracep->declBus(c+496,"mycpu_top u_datapath u_ex_mem M_mem_op", false,-1, 5,0);
        tracep->declBus(c+33,"mycpu_top u_datapath u_ex_mem M_mem_addr", false,-1, 31,0);
        tracep->declBus(c+497,"mycpu_top u_datapath u_ex_mem M_mem_wdata", false,-1, 31,0);
        tracep->declBus(c+32,"mycpu_top u_datapath u_ex_mem M_mem_va", false,-1, 31,0);
        tracep->declBus(c+132,"mycpu_top u_datapath u_ex_mem E_master_ctrl_sign\206 aluop", false,-1, 7,0);
        tracep->declBit(c+133,"mycpu_top u_datapath u_ex_mem E_master_ctrl_sign\206 flush_all", false,-1);
        tracep->declBit(c+134,"mycpu_top u_datapath u_ex_mem E_master_ctrl_sign\206 read_rs", false,-1);
        tracep->declBit(c+135,"mycpu_top u_datapath u_ex_mem E_master_ctrl_sign\206 read_rt", false,-1);
        tracep->declBit(c+136,"mycpu_top u_datapath u_ex_mem E_master_ctrl_sign\206 reg_write", false,-1);
        tracep->declBit(c+137,"mycpu_top u_datapath u_ex_mem E_master_ctrl_sign\206 mem_en", false,-1);
        tracep->declBit(c+138,"mycpu_top u_datapath u_ex_mem E_master_ctrl_sign\206 mem_write_reg", false,-1);
        tracep->declBit(c+139,"mycpu_top u_datapath u_ex_mem E_master_ctrl_sign\206 mem_read", false,-1);
        tracep->declBit(c+140,"mycpu_top u_datapath u_ex_mem E_master_ctrl_sign\206 mem_write", false,-1);
        tracep->declBit(c+141,"mycpu_top u_datapath u_ex_mem E_master_ctrl_sign\206 cp0_read", false,-1);
        tracep->declBit(c+142,"mycpu_top u_datapath u_ex_mem E_master_ctrl_sign\206 cp0_write", false,-1);
        tracep->declBit(c+143,"mycpu_top u_datapath u_ex_mem E_master_ctrl_sign\206 hilo_read", false,-1);
        tracep->declBit(c+144,"mycpu_top u_datapath u_ex_mem E_master_ctrl_sign\206 hilo_write", false,-1);
        tracep->declBit(c+145,"mycpu_top u_datapath u_ex_mem E_master_ctrl_sign\206 may_bring_flush", false,-1);
        tracep->declBit(c+146,"mycpu_top u_datapath u_ex_mem E_master_ctrl_sign\206 only_one_issue", false,-1);
        tracep->declBit(c+147,"mycpu_top u_datapath u_ex_mem E_master_ctrl_sign\206 icache_fence", false,-1);
        tracep->declBit(c+148,"mycpu_top u_datapath u_ex_mem E_master_ctrl_sign\206 dcache_fence", false,-1);
        tracep->declBit(c+149,"mycpu_top u_datapath u_ex_mem E_master_ctrl_sign\206 tlb_fence", false,-1);
        tracep->declBit(c+150,"mycpu_top u_datapath u_ex_mem E_master_ctrl_sign\206 mul_en", false,-1);
        tracep->declBit(c+151,"mycpu_top u_datapath u_ex_mem E_master_ctrl_sign\206 div_en", false,-1);
        tracep->declBit(c+1206,"mycpu_top u_datapath u_ex_mem E_master_except\206 if_adel", false,-1);
        tracep->declBit(c+1207,"mycpu_top u_datapath u_ex_mem E_master_except\206 if_tlbl", false,-1);
        tracep->declBit(c+1208,"mycpu_top u_datapath u_ex_mem E_master_except\206 if_tlbrf", false,-1);
        tracep->declBit(c+1209,"mycpu_top u_datapath u_ex_mem E_master_except\206 id_ri", false,-1);
        tracep->declBit(c+1210,"mycpu_top u_datapath u_ex_mem E_master_except\206 id_syscall", false,-1);
        tracep->declBit(c+1211,"mycpu_top u_datapath u_ex_mem E_master_except\206 id_break", false,-1);
        tracep->declBit(c+1212,"mycpu_top u_datapath u_ex_mem E_master_except\206 id_eret", false,-1);
        tracep->declBit(c+1213,"mycpu_top u_datapath u_ex_mem E_master_except\206 id_int", false,-1);
        tracep->declBit(c+1214,"mycpu_top u_datapath u_ex_mem E_master_except\206 id_cpu", false,-1);
        tracep->declBit(c+1215,"mycpu_top u_datapath u_ex_mem E_master_except\206 ex_ov", false,-1);
        tracep->declBit(c+1216,"mycpu_top u_datapath u_ex_mem E_master_except\206 ex_adel", false,-1);
        tracep->declBit(c+1217,"mycpu_top u_datapath u_ex_mem E_master_except\206 ex_ades", false,-1);
        tracep->declBit(c+1218,"mycpu_top u_datapath u_ex_mem E_master_except\206 ex_tlbl", false,-1);
        tracep->declBit(c+1219,"mycpu_top u_datapath u_ex_mem E_master_except\206 ex_tlbs", false,-1);
        tracep->declBit(c+1220,"mycpu_top u_datapath u_ex_mem E_master_except\206 ex_tlbm", false,-1);
        tracep->declBit(c+1221,"mycpu_top u_datapath u_ex_mem E_master_except\206 ex_tlbrf", false,-1);
        tracep->declBit(c+1222,"mycpu_top u_datapath u_ex_mem E_master_except\206 ex_trap", false,-1);
        tracep->declBit(c+214,"mycpu_top u_datapath u_ex_mem E_master_reg_wen", false,-1);
        tracep->declBit(c+408,"mycpu_top u_datapath u_ex_mem E_master_mem_sel", false,-1);
        tracep->declBit(c+340,"mycpu_top u_datapath u_ex_mem E_master_is_in_delayslot", false,-1);
        tracep->declBus(c+338,"mycpu_top u_datapath u_ex_mem E_master_reg_waddr", false,-1, 4,0);
        tracep->declBus(c+324,"mycpu_top u_datapath u_ex_mem E_master_inst", false,-1, 31,0);
        tracep->declBus(c+1183,"mycpu_top u_datapath u_ex_mem E_master_alu_res", false,-1, 31,0);
        tracep->declBus(c+334,"mycpu_top u_datapath u_ex_mem E_master_pc", false,-1, 31,0);
        tracep->declBus(c+152,"mycpu_top u_datapath u_ex_mem E_slave_ctrl_sign\206 aluop", false,-1, 7,0);
        tracep->declBit(c+153,"mycpu_top u_datapath u_ex_mem E_slave_ctrl_sign\206 flush_all", false,-1);
        tracep->declBit(c+154,"mycpu_top u_datapath u_ex_mem E_slave_ctrl_sign\206 read_rs", false,-1);
        tracep->declBit(c+155,"mycpu_top u_datapath u_ex_mem E_slave_ctrl_sign\206 read_rt", false,-1);
        tracep->declBit(c+156,"mycpu_top u_datapath u_ex_mem E_slave_ctrl_sign\206 reg_write", false,-1);
        tracep->declBit(c+157,"mycpu_top u_datapath u_ex_mem E_slave_ctrl_sign\206 mem_en", false,-1);
        tracep->declBit(c+158,"mycpu_top u_datapath u_ex_mem E_slave_ctrl_sign\206 mem_write_reg", false,-1);
        tracep->declBit(c+159,"mycpu_top u_datapath u_ex_mem E_slave_ctrl_sign\206 mem_read", false,-1);
        tracep->declBit(c+160,"mycpu_top u_datapath u_ex_mem E_slave_ctrl_sign\206 mem_write", false,-1);
        tracep->declBit(c+161,"mycpu_top u_datapath u_ex_mem E_slave_ctrl_sign\206 cp0_read", false,-1);
        tracep->declBit(c+162,"mycpu_top u_datapath u_ex_mem E_slave_ctrl_sign\206 cp0_write", false,-1);
        tracep->declBit(c+163,"mycpu_top u_datapath u_ex_mem E_slave_ctrl_sign\206 hilo_read", false,-1);
        tracep->declBit(c+164,"mycpu_top u_datapath u_ex_mem E_slave_ctrl_sign\206 hilo_write", false,-1);
        tracep->declBit(c+165,"mycpu_top u_datapath u_ex_mem E_slave_ctrl_sign\206 may_bring_flush", false,-1);
        tracep->declBit(c+166,"mycpu_top u_datapath u_ex_mem E_slave_ctrl_sign\206 only_one_issue", false,-1);
        tracep->declBit(c+167,"mycpu_top u_datapath u_ex_mem E_slave_ctrl_sign\206 icache_fence", false,-1);
        tracep->declBit(c+168,"mycpu_top u_datapath u_ex_mem E_slave_ctrl_sign\206 dcache_fence", false,-1);
        tracep->declBit(c+169,"mycpu_top u_datapath u_ex_mem E_slave_ctrl_sign\206 tlb_fence", false,-1);
        tracep->declBit(c+170,"mycpu_top u_datapath u_ex_mem E_slave_ctrl_sign\206 mul_en", false,-1);
        tracep->declBit(c+171,"mycpu_top u_datapath u_ex_mem E_slave_ctrl_sign\206 div_en", false,-1);
        tracep->declBit(c+1223,"mycpu_top u_datapath u_ex_mem E_slave_except\206 if_adel", false,-1);
        tracep->declBit(c+1224,"mycpu_top u_datapath u_ex_mem E_slave_except\206 if_tlbl", false,-1);
        tracep->declBit(c+1225,"mycpu_top u_datapath u_ex_mem E_slave_except\206 if_tlbrf", false,-1);
        tracep->declBit(c+1226,"mycpu_top u_datapath u_ex_mem E_slave_except\206 id_ri", false,-1);
        tracep->declBit(c+1227,"mycpu_top u_datapath u_ex_mem E_slave_except\206 id_syscall", false,-1);
        tracep->declBit(c+1228,"mycpu_top u_datapath u_ex_mem E_slave_except\206 id_break", false,-1);
        tracep->declBit(c+1229,"mycpu_top u_datapath u_ex_mem E_slave_except\206 id_eret", false,-1);
        tracep->declBit(c+1230,"mycpu_top u_datapath u_ex_mem E_slave_except\206 id_int", false,-1);
        tracep->declBit(c+1231,"mycpu_top u_datapath u_ex_mem E_slave_except\206 id_cpu", false,-1);
        tracep->declBit(c+1232,"mycpu_top u_datapath u_ex_mem E_slave_except\206 ex_ov", false,-1);
        tracep->declBit(c+1233,"mycpu_top u_datapath u_ex_mem E_slave_except\206 ex_adel", false,-1);
        tracep->declBit(c+1234,"mycpu_top u_datapath u_ex_mem E_slave_except\206 ex_ades", false,-1);
        tracep->declBit(c+1235,"mycpu_top u_datapath u_ex_mem E_slave_except\206 ex_tlbl", false,-1);
        tracep->declBit(c+1236,"mycpu_top u_datapath u_ex_mem E_slave_except\206 ex_tlbs", false,-1);
        tracep->declBit(c+1237,"mycpu_top u_datapath u_ex_mem E_slave_except\206 ex_tlbm", false,-1);
        tracep->declBit(c+1238,"mycpu_top u_datapath u_ex_mem E_slave_except\206 ex_tlbrf", false,-1);
        tracep->declBit(c+1239,"mycpu_top u_datapath u_ex_mem E_slave_except\206 ex_trap", false,-1);
        tracep->declBit(c+215,"mycpu_top u_datapath u_ex_mem E_slave_reg_wen", false,-1);
        tracep->declBit(c+409,"mycpu_top u_datapath u_ex_mem E_slave_mem_sel", false,-1);
        tracep->declBit(c+341,"mycpu_top u_datapath u_ex_mem E_slave_is_in_delayslot", false,-1);
        tracep->declBus(c+339,"mycpu_top u_datapath u_ex_mem E_slave_reg_waddr", false,-1, 4,0);
        tracep->declBus(c+335,"mycpu_top u_datapath u_ex_mem E_slave_pc", false,-1, 31,0);
        tracep->declBus(c+325,"mycpu_top u_datapath u_ex_mem E_slave_inst", false,-1, 31,0);
        tracep->declBus(c+1240,"mycpu_top u_datapath u_ex_mem E_slave_alu_res", false,-1, 31,0);
        tracep->declBus(c+172,"mycpu_top u_datapath u_ex_mem M_master_ctrl_sign\206 aluop", false,-1, 7,0);
        tracep->declBit(c+173,"mycpu_top u_datapath u_ex_mem M_master_ctrl_sign\206 flush_all", false,-1);
        tracep->declBit(c+174,"mycpu_top u_datapath u_ex_mem M_master_ctrl_sign\206 read_rs", false,-1);
        tracep->declBit(c+175,"mycpu_top u_datapath u_ex_mem M_master_ctrl_sign\206 read_rt", false,-1);
        tracep->declBit(c+176,"mycpu_top u_datapath u_ex_mem M_master_ctrl_sign\206 reg_write", false,-1);
        tracep->declBit(c+177,"mycpu_top u_datapath u_ex_mem M_master_ctrl_sign\206 mem_en", false,-1);
        tracep->declBit(c+178,"mycpu_top u_datapath u_ex_mem M_master_ctrl_sign\206 mem_write_reg", false,-1);
        tracep->declBit(c+179,"mycpu_top u_datapath u_ex_mem M_master_ctrl_sign\206 mem_read", false,-1);
        tracep->declBit(c+180,"mycpu_top u_datapath u_ex_mem M_master_ctrl_sign\206 mem_write", false,-1);
        tracep->declBit(c+181,"mycpu_top u_datapath u_ex_mem M_master_ctrl_sign\206 cp0_read", false,-1);
        tracep->declBit(c+182,"mycpu_top u_datapath u_ex_mem M_master_ctrl_sign\206 cp0_write", false,-1);
        tracep->declBit(c+183,"mycpu_top u_datapath u_ex_mem M_master_ctrl_sign\206 hilo_read", false,-1);
        tracep->declBit(c+184,"mycpu_top u_datapath u_ex_mem M_master_ctrl_sign\206 hilo_write", false,-1);
        tracep->declBit(c+185,"mycpu_top u_datapath u_ex_mem M_master_ctrl_sign\206 may_bring_flush", false,-1);
        tracep->declBit(c+186,"mycpu_top u_datapath u_ex_mem M_master_ctrl_sign\206 only_one_issue", false,-1);
        tracep->declBit(c+187,"mycpu_top u_datapath u_ex_mem M_master_ctrl_sign\206 icache_fence", false,-1);
        tracep->declBit(c+188,"mycpu_top u_datapath u_ex_mem M_master_ctrl_sign\206 dcache_fence", false,-1);
        tracep->declBit(c+189,"mycpu_top u_datapath u_ex_mem M_master_ctrl_sign\206 tlb_fence", false,-1);
        tracep->declBit(c+190,"mycpu_top u_datapath u_ex_mem M_master_ctrl_sign\206 mul_en", false,-1);
        tracep->declBit(c+191,"mycpu_top u_datapath u_ex_mem M_master_ctrl_sign\206 div_en", false,-1);
        tracep->declBit(c+421,"mycpu_top u_datapath u_ex_mem M_master_except\206 if_adel", false,-1);
        tracep->declBit(c+422,"mycpu_top u_datapath u_ex_mem M_master_except\206 if_tlbl", false,-1);
        tracep->declBit(c+423,"mycpu_top u_datapath u_ex_mem M_master_except\206 if_tlbrf", false,-1);
        tracep->declBit(c+424,"mycpu_top u_datapath u_ex_mem M_master_except\206 id_ri", false,-1);
        tracep->declBit(c+425,"mycpu_top u_datapath u_ex_mem M_master_except\206 id_syscall", false,-1);
        tracep->declBit(c+426,"mycpu_top u_datapath u_ex_mem M_master_except\206 id_break", false,-1);
        tracep->declBit(c+427,"mycpu_top u_datapath u_ex_mem M_master_except\206 id_eret", false,-1);
        tracep->declBit(c+428,"mycpu_top u_datapath u_ex_mem M_master_except\206 id_int", false,-1);
        tracep->declBit(c+429,"mycpu_top u_datapath u_ex_mem M_master_except\206 id_cpu", false,-1);
        tracep->declBit(c+430,"mycpu_top u_datapath u_ex_mem M_master_except\206 ex_ov", false,-1);
        tracep->declBit(c+431,"mycpu_top u_datapath u_ex_mem M_master_except\206 ex_adel", false,-1);
        tracep->declBit(c+432,"mycpu_top u_datapath u_ex_mem M_master_except\206 ex_ades", false,-1);
        tracep->declBit(c+433,"mycpu_top u_datapath u_ex_mem M_master_except\206 ex_tlbl", false,-1);
        tracep->declBit(c+434,"mycpu_top u_datapath u_ex_mem M_master_except\206 ex_tlbs", false,-1);
        tracep->declBit(c+435,"mycpu_top u_datapath u_ex_mem M_master_except\206 ex_tlbm", false,-1);
        tracep->declBit(c+436,"mycpu_top u_datapath u_ex_mem M_master_except\206 ex_tlbrf", false,-1);
        tracep->declBit(c+437,"mycpu_top u_datapath u_ex_mem M_master_except\206 ex_trap", false,-1);
        tracep->declBit(c+216,"mycpu_top u_datapath u_ex_mem M_master_reg_wen", false,-1);
        tracep->declBit(c+498,"mycpu_top u_datapath u_ex_mem M_master_mem_sel", false,-1);
        tracep->declBit(c+489,"mycpu_top u_datapath u_ex_mem M_master_is_in_delayslot", false,-1);
        tracep->declBus(c+419,"mycpu_top u_datapath u_ex_mem M_master_reg_waddr", false,-1, 4,0);
        tracep->declBus(c+414,"mycpu_top u_datapath u_ex_mem M_master_inst", false,-1, 31,0);
        tracep->declBus(c+16,"mycpu_top u_datapath u_ex_mem M_master_alu_res", false,-1, 31,0);
        tracep->declBus(c+416,"mycpu_top u_datapath u_ex_mem M_master_pc", false,-1, 31,0);
        tracep->declBus(c+192,"mycpu_top u_datapath u_ex_mem M_slave_ctrl_sign\206 aluop", false,-1, 7,0);
        tracep->declBit(c+193,"mycpu_top u_datapath u_ex_mem M_slave_ctrl_sign\206 flush_all", false,-1);
        tracep->declBit(c+194,"mycpu_top u_datapath u_ex_mem M_slave_ctrl_sign\206 read_rs", false,-1);
        tracep->declBit(c+195,"mycpu_top u_datapath u_ex_mem M_slave_ctrl_sign\206 read_rt", false,-1);
        tracep->declBit(c+196,"mycpu_top u_datapath u_ex_mem M_slave_ctrl_sign\206 reg_write", false,-1);
        tracep->declBit(c+197,"mycpu_top u_datapath u_ex_mem M_slave_ctrl_sign\206 mem_en", false,-1);
        tracep->declBit(c+198,"mycpu_top u_datapath u_ex_mem M_slave_ctrl_sign\206 mem_write_reg", false,-1);
        tracep->declBit(c+199,"mycpu_top u_datapath u_ex_mem M_slave_ctrl_sign\206 mem_read", false,-1);
        tracep->declBit(c+200,"mycpu_top u_datapath u_ex_mem M_slave_ctrl_sign\206 mem_write", false,-1);
        tracep->declBit(c+201,"mycpu_top u_datapath u_ex_mem M_slave_ctrl_sign\206 cp0_read", false,-1);
        tracep->declBit(c+202,"mycpu_top u_datapath u_ex_mem M_slave_ctrl_sign\206 cp0_write", false,-1);
        tracep->declBit(c+203,"mycpu_top u_datapath u_ex_mem M_slave_ctrl_sign\206 hilo_read", false,-1);
        tracep->declBit(c+204,"mycpu_top u_datapath u_ex_mem M_slave_ctrl_sign\206 hilo_write", false,-1);
        tracep->declBit(c+205,"mycpu_top u_datapath u_ex_mem M_slave_ctrl_sign\206 may_bring_flush", false,-1);
        tracep->declBit(c+206,"mycpu_top u_datapath u_ex_mem M_slave_ctrl_sign\206 only_one_issue", false,-1);
        tracep->declBit(c+207,"mycpu_top u_datapath u_ex_mem M_slave_ctrl_sign\206 icache_fence", false,-1);
        tracep->declBit(c+208,"mycpu_top u_datapath u_ex_mem M_slave_ctrl_sign\206 dcache_fence", false,-1);
        tracep->declBit(c+209,"mycpu_top u_datapath u_ex_mem M_slave_ctrl_sign\206 tlb_fence", false,-1);
        tracep->declBit(c+210,"mycpu_top u_datapath u_ex_mem M_slave_ctrl_sign\206 mul_en", false,-1);
        tracep->declBit(c+211,"mycpu_top u_datapath u_ex_mem M_slave_ctrl_sign\206 div_en", false,-1);
        tracep->declBit(c+438,"mycpu_top u_datapath u_ex_mem M_slave_except\206 if_adel", false,-1);
        tracep->declBit(c+439,"mycpu_top u_datapath u_ex_mem M_slave_except\206 if_tlbl", false,-1);
        tracep->declBit(c+440,"mycpu_top u_datapath u_ex_mem M_slave_except\206 if_tlbrf", false,-1);
        tracep->declBit(c+441,"mycpu_top u_datapath u_ex_mem M_slave_except\206 id_ri", false,-1);
        tracep->declBit(c+442,"mycpu_top u_datapath u_ex_mem M_slave_except\206 id_syscall", false,-1);
        tracep->declBit(c+443,"mycpu_top u_datapath u_ex_mem M_slave_except\206 id_break", false,-1);
        tracep->declBit(c+444,"mycpu_top u_datapath u_ex_mem M_slave_except\206 id_eret", false,-1);
        tracep->declBit(c+445,"mycpu_top u_datapath u_ex_mem M_slave_except\206 id_int", false,-1);
        tracep->declBit(c+446,"mycpu_top u_datapath u_ex_mem M_slave_except\206 id_cpu", false,-1);
        tracep->declBit(c+447,"mycpu_top u_datapath u_ex_mem M_slave_except\206 ex_ov", false,-1);
        tracep->declBit(c+448,"mycpu_top u_datapath u_ex_mem M_slave_except\206 ex_adel", false,-1);
        tracep->declBit(c+449,"mycpu_top u_datapath u_ex_mem M_slave_except\206 ex_ades", false,-1);
        tracep->declBit(c+450,"mycpu_top u_datapath u_ex_mem M_slave_except\206 ex_tlbl", false,-1);
        tracep->declBit(c+451,"mycpu_top u_datapath u_ex_mem M_slave_except\206 ex_tlbs", false,-1);
        tracep->declBit(c+452,"mycpu_top u_datapath u_ex_mem M_slave_except\206 ex_tlbm", false,-1);
        tracep->declBit(c+453,"mycpu_top u_datapath u_ex_mem M_slave_except\206 ex_tlbrf", false,-1);
        tracep->declBit(c+454,"mycpu_top u_datapath u_ex_mem M_slave_except\206 ex_trap", false,-1);
        tracep->declBit(c+217,"mycpu_top u_datapath u_ex_mem M_slave_reg_wen", false,-1);
        tracep->declBit(c+499,"mycpu_top u_datapath u_ex_mem M_slave_mem_sel", false,-1);
        tracep->declBit(c+490,"mycpu_top u_datapath u_ex_mem M_slave_is_in_delayslot", false,-1);
        tracep->declBus(c+420,"mycpu_top u_datapath u_ex_mem M_slave_reg_waddr", false,-1, 4,0);
        tracep->declBus(c+417,"mycpu_top u_datapath u_ex_mem M_slave_pc", false,-1, 31,0);
        tracep->declBus(c+415,"mycpu_top u_datapath u_ex_mem M_slave_inst", false,-1, 31,0);
        tracep->declBus(c+418,"mycpu_top u_datapath u_ex_mem M_slave_alu_res", false,-1, 31,0);
        tracep->declBus(c+77,"mycpu_top u_datapath u_ex_mem E_master_debug_cp0_count", false,-1, 31,0);
        tracep->declBus(c+78,"mycpu_top u_datapath u_ex_mem E_master_debug_cp0_random", false,-1, 31,0);
        tracep->declBus(c+79,"mycpu_top u_datapath u_ex_mem E_master_debug_cp0_cause", false,-1, 31,0);
        tracep->declBus(c+80,"mycpu_top u_datapath u_ex_mem M_master_debug_cp0_count", false,-1, 31,0);
        tracep->declBus(c+81,"mycpu_top u_datapath u_ex_mem M_master_debug_cp0_random", false,-1, 31,0);
        tracep->declBus(c+82,"mycpu_top u_datapath u_ex_mem M_master_debug_cp0_cause", false,-1, 31,0);
        tracep->declBit(c+493,"mycpu_top u_datapath u_mem_access mem_en", false,-1);
        tracep->declBus(c+496,"mycpu_top u_datapath u_mem_access mem_op", false,-1, 5,0);
        tracep->declBus(c+497,"mycpu_top u_datapath u_mem_access mem_wdata", false,-1, 31,0);
        tracep->declBus(c+33,"mycpu_top u_datapath u_mem_access mem_addr", false,-1, 31,0);
        tracep->declBus(c+492,"mycpu_top u_datapath u_mem_access mem_rdata", false,-1, 31,0);
        tracep->declBus(c+34,"mycpu_top u_datapath u_mem_access data_sram_rdata", false,-1, 31,0);
        tracep->declBit(c+31,"mycpu_top u_datapath u_mem_access data_sram_en", false,-1);
        tracep->declBus(c+35,"mycpu_top u_datapath u_mem_access data_sram_rlen", false,-1, 1,0);
        tracep->declBus(c+36,"mycpu_top u_datapath u_mem_access data_sram_wen", false,-1, 3,0);
        tracep->declBus(c+33,"mycpu_top u_datapath u_mem_access data_sram_addr", false,-1, 31,0);
        tracep->declBus(c+37,"mycpu_top u_datapath u_mem_access data_sram_wdata", false,-1, 31,0);
        tracep->declBit(c+498,"mycpu_top u_datapath u_mem_access M_master_mem_sel", false,-1);
        tracep->declBit(c+499,"mycpu_top u_datapath u_mem_access M_slave_mem_sel", false,-1);
        tracep->declBit(c+421,"mycpu_top u_datapath u_mem_access M_master_except\206 if_adel", false,-1);
        tracep->declBit(c+422,"mycpu_top u_datapath u_mem_access M_master_except\206 if_tlbl", false,-1);
        tracep->declBit(c+423,"mycpu_top u_datapath u_mem_access M_master_except\206 if_tlbrf", false,-1);
        tracep->declBit(c+424,"mycpu_top u_datapath u_mem_access M_master_except\206 id_ri", false,-1);
        tracep->declBit(c+425,"mycpu_top u_datapath u_mem_access M_master_except\206 id_syscall", false,-1);
        tracep->declBit(c+426,"mycpu_top u_datapath u_mem_access M_master_except\206 id_break", false,-1);
        tracep->declBit(c+427,"mycpu_top u_datapath u_mem_access M_master_except\206 id_eret", false,-1);
        tracep->declBit(c+428,"mycpu_top u_datapath u_mem_access M_master_except\206 id_int", false,-1);
        tracep->declBit(c+429,"mycpu_top u_datapath u_mem_access M_master_except\206 id_cpu", false,-1);
        tracep->declBit(c+430,"mycpu_top u_datapath u_mem_access M_master_except\206 ex_ov", false,-1);
        tracep->declBit(c+431,"mycpu_top u_datapath u_mem_access M_master_except\206 ex_adel", false,-1);
        tracep->declBit(c+432,"mycpu_top u_datapath u_mem_access M_master_except\206 ex_ades", false,-1);
        tracep->declBit(c+433,"mycpu_top u_datapath u_mem_access M_master_except\206 ex_tlbl", false,-1);
        tracep->declBit(c+434,"mycpu_top u_datapath u_mem_access M_master_except\206 ex_tlbs", false,-1);
        tracep->declBit(c+435,"mycpu_top u_datapath u_mem_access M_master_except\206 ex_tlbm", false,-1);
        tracep->declBit(c+436,"mycpu_top u_datapath u_mem_access M_master_except\206 ex_tlbrf", false,-1);
        tracep->declBit(c+437,"mycpu_top u_datapath u_mem_access M_master_except\206 ex_trap", false,-1);
        tracep->declBit(c+438,"mycpu_top u_datapath u_mem_access M_slave_except\206 if_adel", false,-1);
        tracep->declBit(c+439,"mycpu_top u_datapath u_mem_access M_slave_except\206 if_tlbl", false,-1);
        tracep->declBit(c+440,"mycpu_top u_datapath u_mem_access M_slave_except\206 if_tlbrf", false,-1);
        tracep->declBit(c+441,"mycpu_top u_datapath u_mem_access M_slave_except\206 id_ri", false,-1);
        tracep->declBit(c+442,"mycpu_top u_datapath u_mem_access M_slave_except\206 id_syscall", false,-1);
        tracep->declBit(c+443,"mycpu_top u_datapath u_mem_access M_slave_except\206 id_break", false,-1);
        tracep->declBit(c+444,"mycpu_top u_datapath u_mem_access M_slave_except\206 id_eret", false,-1);
        tracep->declBit(c+445,"mycpu_top u_datapath u_mem_access M_slave_except\206 id_int", false,-1);
        tracep->declBit(c+446,"mycpu_top u_datapath u_mem_access M_slave_except\206 id_cpu", false,-1);
        tracep->declBit(c+447,"mycpu_top u_datapath u_mem_access M_slave_except\206 ex_ov", false,-1);
        tracep->declBit(c+448,"mycpu_top u_datapath u_mem_access M_slave_except\206 ex_adel", false,-1);
        tracep->declBit(c+449,"mycpu_top u_datapath u_mem_access M_slave_except\206 ex_ades", false,-1);
        tracep->declBit(c+450,"mycpu_top u_datapath u_mem_access M_slave_except\206 ex_tlbl", false,-1);
        tracep->declBit(c+451,"mycpu_top u_datapath u_mem_access M_slave_except\206 ex_tlbs", false,-1);
        tracep->declBit(c+452,"mycpu_top u_datapath u_mem_access M_slave_except\206 ex_tlbm", false,-1);
        tracep->declBit(c+453,"mycpu_top u_datapath u_mem_access M_slave_except\206 ex_tlbrf", false,-1);
        tracep->declBit(c+454,"mycpu_top u_datapath u_mem_access M_slave_except\206 ex_trap", false,-1);
        tracep->declBus(c+497,"mycpu_top u_datapath u_mem_access mem_init_data", false,-1, 31,0);
        tracep->declBit(c+1281,"mycpu_top u_datapath cp0_inst clk", false,-1);
        tracep->declBit(c+1329,"mycpu_top u_datapath cp0_inst rst", false,-1);
        tracep->declBit(c+1180,"mycpu_top u_datapath cp0_inst stallM", false,-1);
        tracep->declBit(c+1180,"mycpu_top u_datapath cp0_inst stallE", false,-1);
        tracep->declBit(c+390,"mycpu_top u_datapath cp0_inst E_cop0_info\206 mtc0_en", false,-1);
        tracep->declBit(c+391,"mycpu_top u_datapath cp0_inst E_cop0_info\206 TLBP", false,-1);
        tracep->declBit(c+392,"mycpu_top u_datapath cp0_inst E_cop0_info\206 TLBR", false,-1);
        tracep->declBit(c+393,"mycpu_top u_datapath cp0_inst E_cop0_info\206 TLBWI", false,-1);
        tracep->declBit(c+394,"mycpu_top u_datapath cp0_inst E_cop0_info\206 TLBWR", false,-1);
        tracep->declBus(c+395,"mycpu_top u_datapath cp0_inst E_cop0_info\206 reg_addr", false,-1, 4,0);
        tracep->declBus(c+396,"mycpu_top u_datapath cp0_inst E_cop0_info\206 sel_addr", false,-1, 2,0);
        tracep->declBus(c+334,"mycpu_top u_datapath cp0_inst E_master_pc", false,-1, 31,0);
        tracep->declBus(c+220,"mycpu_top u_datapath cp0_inst E_mfc0_rdata", false,-1, 31,0);
        tracep->declBus(c+330,"mycpu_top u_datapath cp0_inst E_mtc0_wdata", false,-1, 31,0);
        tracep->declBus(c+1331,"mycpu_top u_datapath cp0_inst ext_int", false,-1, 4,0);
        tracep->declBit(c+455,"mycpu_top u_datapath cp0_inst M_master_except\206 if_adel", false,-1);
        tracep->declBit(c+456,"mycpu_top u_datapath cp0_inst M_master_except\206 if_tlbl", false,-1);
        tracep->declBit(c+457,"mycpu_top u_datapath cp0_inst M_master_except\206 if_tlbrf", false,-1);
        tracep->declBit(c+458,"mycpu_top u_datapath cp0_inst M_master_except\206 id_ri", false,-1);
        tracep->declBit(c+459,"mycpu_top u_datapath cp0_inst M_master_except\206 id_syscall", false,-1);
        tracep->declBit(c+460,"mycpu_top u_datapath cp0_inst M_master_except\206 id_break", false,-1);
        tracep->declBit(c+461,"mycpu_top u_datapath cp0_inst M_master_except\206 id_eret", false,-1);
        tracep->declBit(c+462,"mycpu_top u_datapath cp0_inst M_master_except\206 id_int", false,-1);
        tracep->declBit(c+463,"mycpu_top u_datapath cp0_inst M_master_except\206 id_cpu", false,-1);
        tracep->declBit(c+464,"mycpu_top u_datapath cp0_inst M_master_except\206 ex_ov", false,-1);
        tracep->declBit(c+465,"mycpu_top u_datapath cp0_inst M_master_except\206 ex_adel", false,-1);
        tracep->declBit(c+466,"mycpu_top u_datapath cp0_inst M_master_except\206 ex_ades", false,-1);
        tracep->declBit(c+467,"mycpu_top u_datapath cp0_inst M_master_except\206 ex_tlbl", false,-1);
        tracep->declBit(c+468,"mycpu_top u_datapath cp0_inst M_master_except\206 ex_tlbs", false,-1);
        tracep->declBit(c+469,"mycpu_top u_datapath cp0_inst M_master_except\206 ex_tlbm", false,-1);
        tracep->declBit(c+470,"mycpu_top u_datapath cp0_inst M_master_except\206 ex_tlbrf", false,-1);
        tracep->declBit(c+471,"mycpu_top u_datapath cp0_inst M_master_except\206 ex_trap", false,-1);
        tracep->declBit(c+472,"mycpu_top u_datapath cp0_inst M_slave_except\206 if_adel", false,-1);
        tracep->declBit(c+473,"mycpu_top u_datapath cp0_inst M_slave_except\206 if_tlbl", false,-1);
        tracep->declBit(c+474,"mycpu_top u_datapath cp0_inst M_slave_except\206 if_tlbrf", false,-1);
        tracep->declBit(c+475,"mycpu_top u_datapath cp0_inst M_slave_except\206 id_ri", false,-1);
        tracep->declBit(c+476,"mycpu_top u_datapath cp0_inst M_slave_except\206 id_syscall", false,-1);
        tracep->declBit(c+477,"mycpu_top u_datapath cp0_inst M_slave_except\206 id_break", false,-1);
        tracep->declBit(c+478,"mycpu_top u_datapath cp0_inst M_slave_except\206 id_eret", false,-1);
        tracep->declBit(c+479,"mycpu_top u_datapath cp0_inst M_slave_except\206 id_int", false,-1);
        tracep->declBit(c+480,"mycpu_top u_datapath cp0_inst M_slave_except\206 id_cpu", false,-1);
        tracep->declBit(c+481,"mycpu_top u_datapath cp0_inst M_slave_except\206 ex_ov", false,-1);
        tracep->declBit(c+482,"mycpu_top u_datapath cp0_inst M_slave_except\206 ex_adel", false,-1);
        tracep->declBit(c+483,"mycpu_top u_datapath cp0_inst M_slave_except\206 ex_ades", false,-1);
        tracep->declBit(c+484,"mycpu_top u_datapath cp0_inst M_slave_except\206 ex_tlbl", false,-1);
        tracep->declBit(c+485,"mycpu_top u_datapath cp0_inst M_slave_except\206 ex_tlbs", false,-1);
        tracep->declBit(c+486,"mycpu_top u_datapath cp0_inst M_slave_except\206 ex_tlbm", false,-1);
        tracep->declBit(c+487,"mycpu_top u_datapath cp0_inst M_slave_except\206 ex_tlbrf", false,-1);
        tracep->declBit(c+488,"mycpu_top u_datapath cp0_inst M_slave_except\206 ex_trap", false,-1);
        tracep->declBus(c+416,"mycpu_top u_datapath cp0_inst M_master_pc", false,-1, 31,0);
        tracep->declBus(c+417,"mycpu_top u_datapath cp0_inst M_slave_pc", false,-1, 31,0);
        tracep->declBit(c+489,"mycpu_top u_datapath cp0_inst M_master_bd", false,-1);
        tracep->declBit(c+490,"mycpu_top u_datapath cp0_inst M_slave_bd", false,-1);
        tracep->declBus(c+33,"mycpu_top u_datapath cp0_inst M_mem_va", false,-1, 31,0);
        tracep->declBus(c+221,"mycpu_top u_datapath cp0_inst M_cp0_jump_pc", false,-1, 31,0);
        tracep->declBit(c+1199,"mycpu_top u_datapath cp0_inst M_cp0_jump", false,-1);
        tracep->declBit(c+223,"mycpu_top u_datapath cp0_inst D_cp0_useable", false,-1);
        tracep->declBit(c+224,"mycpu_top u_datapath cp0_inst D_kernel_mode", false,-1);
        tracep->declBit(c+226,"mycpu_top u_datapath cp0_inst D_int_info\206 int_allowed", false,-1);
        tracep->declBus(c+227,"mycpu_top u_datapath cp0_inst D_int_info\206 IM", false,-1, 7,0);
        tracep->declBus(c+228,"mycpu_top u_datapath cp0_inst D_int_info\206 IP", false,-1, 7,0);
        tracep->declBus(c+18,"mycpu_top u_datapath cp0_inst tlb1_vpn2", false,-1, 31,13);
        tracep->declBit(c+19,"mycpu_top u_datapath cp0_inst tlb1_found", false,-1);
        tracep->declBit(c+20,"mycpu_top u_datapath cp0_inst tlb1_entry\206 G", false,-1);
        tracep->declBit(c+21,"mycpu_top u_datapath cp0_inst tlb1_entry\206 V0", false,-1);
        tracep->declBit(c+22,"mycpu_top u_datapath cp0_inst tlb1_entry\206 V1", false,-1);
        tracep->declBit(c+23,"mycpu_top u_datapath cp0_inst tlb1_entry\206 D0", false,-1);
        tracep->declBit(c+24,"mycpu_top u_datapath cp0_inst tlb1_entry\206 D1", false,-1);
        tracep->declBit(c+25,"mycpu_top u_datapath cp0_inst tlb1_entry\206 C0", false,-1);
        tracep->declBit(c+26,"mycpu_top u_datapath cp0_inst tlb1_entry\206 C1", false,-1);
        tracep->declBus(c+27,"mycpu_top u_datapath cp0_inst tlb1_entry\206 PFN0", false,-1, 19,0);
        tracep->declBus(c+28,"mycpu_top u_datapath cp0_inst tlb1_entry\206 PFN1", false,-1, 19,0);
        tracep->declBus(c+29,"mycpu_top u_datapath cp0_inst tlb1_entry\206 VPN2", false,-1, 18,0);
        tracep->declBus(c+30,"mycpu_top u_datapath cp0_inst tlb1_entry\206 ASID", false,-1, 7,0);
        tracep->declBus(c+60,"mycpu_top u_datapath cp0_inst tlb2_vpn2", false,-1, 31,13);
        tracep->declBit(c+61,"mycpu_top u_datapath cp0_inst tlb2_found", false,-1);
        tracep->declBit(c+62,"mycpu_top u_datapath cp0_inst tlb2_entry\206 G", false,-1);
        tracep->declBit(c+63,"mycpu_top u_datapath cp0_inst tlb2_entry\206 V0", false,-1);
        tracep->declBit(c+64,"mycpu_top u_datapath cp0_inst tlb2_entry\206 V1", false,-1);
        tracep->declBit(c+65,"mycpu_top u_datapath cp0_inst tlb2_entry\206 D0", false,-1);
        tracep->declBit(c+66,"mycpu_top u_datapath cp0_inst tlb2_entry\206 D1", false,-1);
        tracep->declBit(c+67,"mycpu_top u_datapath cp0_inst tlb2_entry\206 C0", false,-1);
        tracep->declBit(c+68,"mycpu_top u_datapath cp0_inst tlb2_entry\206 C1", false,-1);
        tracep->declBus(c+69,"mycpu_top u_datapath cp0_inst tlb2_entry\206 PFN0", false,-1, 19,0);
        tracep->declBus(c+70,"mycpu_top u_datapath cp0_inst tlb2_entry\206 PFN1", false,-1, 19,0);
        tracep->declBus(c+71,"mycpu_top u_datapath cp0_inst tlb2_entry\206 VPN2", false,-1, 18,0);
        tracep->declBus(c+72,"mycpu_top u_datapath cp0_inst tlb2_entry\206 ASID", false,-1, 7,0);
        tracep->declBus(c+77,"mycpu_top u_datapath cp0_inst debug_cp0_countE", false,-1, 31,0);
        tracep->declBus(c+78,"mycpu_top u_datapath cp0_inst debug_cp0_randomE", false,-1, 31,0);
        tracep->declBus(c+79,"mycpu_top u_datapath cp0_inst debug_cp0_causeE", false,-1, 31,0);
        tracep->declBit(c+792,"mycpu_top u_datapath cp0_inst master_except", false,-1);
        tracep->declBit(c+793,"mycpu_top u_datapath cp0_inst except\206 if_adel", false,-1);
        tracep->declBit(c+794,"mycpu_top u_datapath cp0_inst except\206 if_tlbl", false,-1);
        tracep->declBit(c+795,"mycpu_top u_datapath cp0_inst except\206 if_tlbrf", false,-1);
        tracep->declBit(c+796,"mycpu_top u_datapath cp0_inst except\206 id_ri", false,-1);
        tracep->declBit(c+797,"mycpu_top u_datapath cp0_inst except\206 id_syscall", false,-1);
        tracep->declBit(c+798,"mycpu_top u_datapath cp0_inst except\206 id_break", false,-1);
        tracep->declBit(c+799,"mycpu_top u_datapath cp0_inst except\206 id_eret", false,-1);
        tracep->declBit(c+800,"mycpu_top u_datapath cp0_inst except\206 id_int", false,-1);
        tracep->declBit(c+801,"mycpu_top u_datapath cp0_inst except\206 id_cpu", false,-1);
        tracep->declBit(c+802,"mycpu_top u_datapath cp0_inst except\206 ex_ov", false,-1);
        tracep->declBit(c+803,"mycpu_top u_datapath cp0_inst except\206 ex_adel", false,-1);
        tracep->declBit(c+804,"mycpu_top u_datapath cp0_inst except\206 ex_ades", false,-1);
        tracep->declBit(c+805,"mycpu_top u_datapath cp0_inst except\206 ex_tlbl", false,-1);
        tracep->declBit(c+806,"mycpu_top u_datapath cp0_inst except\206 ex_tlbs", false,-1);
        tracep->declBit(c+807,"mycpu_top u_datapath cp0_inst except\206 ex_tlbm", false,-1);
        tracep->declBit(c+808,"mycpu_top u_datapath cp0_inst except\206 ex_tlbrf", false,-1);
        tracep->declBit(c+809,"mycpu_top u_datapath cp0_inst except\206 ex_trap", false,-1);
        tracep->declBus(c+810,"mycpu_top u_datapath cp0_inst except_pc", false,-1, 31,0);
        tracep->declBit(c+811,"mycpu_top u_datapath cp0_inst except_bd", false,-1);
        tracep->declBit(c+812,"mycpu_top u_datapath cp0_inst use_if_badva", false,-1);
        tracep->declBus(c+813,"mycpu_top u_datapath cp0_inst badva_in", false,-1, 31,0);
        tracep->declBit(c+814,"mycpu_top u_datapath cp0_inst index_reg\206 p", false,-1);
        tracep->declBus(c+815,"mycpu_top u_datapath cp0_inst index_reg\206 blank", false,-1, 27,0);
        tracep->declBus(c+816,"mycpu_top u_datapath cp0_inst index_reg\206 index", false,-1, 2,0);
        tracep->declBus(c+78,"mycpu_top u_datapath cp0_inst random_reg", false,-1, 31,0);
        tracep->declBus(c+817,"mycpu_top u_datapath cp0_inst entrylo0_reg\206 F", false,-1, 5,0);
        tracep->declBus(c+818,"mycpu_top u_datapath cp0_inst entrylo0_reg\206 PFN", false,-1, 19,0);
        tracep->declBus(c+819,"mycpu_top u_datapath cp0_inst entrylo0_reg\206 C", false,-1, 2,0);
        tracep->declBit(c+820,"mycpu_top u_datapath cp0_inst entrylo0_reg\206 D", false,-1);
        tracep->declBit(c+821,"mycpu_top u_datapath cp0_inst entrylo0_reg\206 V", false,-1);
        tracep->declBit(c+822,"mycpu_top u_datapath cp0_inst entrylo0_reg\206 G", false,-1);
        tracep->declBus(c+823,"mycpu_top u_datapath cp0_inst entrylo1_reg\206 F", false,-1, 5,0);
        tracep->declBus(c+824,"mycpu_top u_datapath cp0_inst entrylo1_reg\206 PFN", false,-1, 19,0);
        tracep->declBus(c+825,"mycpu_top u_datapath cp0_inst entrylo1_reg\206 C", false,-1, 2,0);
        tracep->declBit(c+826,"mycpu_top u_datapath cp0_inst entrylo1_reg\206 D", false,-1);
        tracep->declBit(c+827,"mycpu_top u_datapath cp0_inst entrylo1_reg\206 V", false,-1);
        tracep->declBit(c+828,"mycpu_top u_datapath cp0_inst entrylo1_reg\206 G", false,-1);
        tracep->declBus(c+829,"mycpu_top u_datapath cp0_inst context_reg\206 ptebase", false,-1, 8,0);
        tracep->declBus(c+830,"mycpu_top u_datapath cp0_inst context_reg\206 badvpn2", false,-1, 18,0);
        tracep->declBus(c+831,"mycpu_top u_datapath cp0_inst context_reg\206 blank", false,-1, 3,0);
        tracep->declBus(c+832,"mycpu_top u_datapath cp0_inst wired_reg", false,-1, 31,0);
        tracep->declBus(c+833,"mycpu_top u_datapath cp0_inst badva_reg", false,-1, 31,0);
        tracep->declBus(c+834,"mycpu_top u_datapath cp0_inst count_reg\206 count", false,-1, 31,0);
        tracep->declBit(c+835,"mycpu_top u_datapath cp0_inst count_reg\206 shadow", false,-1);
        tracep->declBus(c+836,"mycpu_top u_datapath cp0_inst entryhi_reg\206 VPN2", false,-1, 18,0);
        tracep->declBus(c+837,"mycpu_top u_datapath cp0_inst entryhi_reg\206 blank0", false,-1, 4,0);
        tracep->declBus(c+838,"mycpu_top u_datapath cp0_inst entryhi_reg\206 ASID", false,-1, 7,0);
        tracep->declBus(c+839,"mycpu_top u_datapath cp0_inst compare_reg", false,-1, 31,0);
        tracep->declBus(c+840,"mycpu_top u_datapath cp0_inst status_reg\206 blank3", false,-1, 2,0);
        tracep->declBit(c+841,"mycpu_top u_datapath cp0_inst status_reg\206 CU0", false,-1);
        tracep->declBus(c+842,"mycpu_top u_datapath cp0_inst status_reg\206 blank2", false,-1, 4,0);
        tracep->declBit(c+843,"mycpu_top u_datapath cp0_inst status_reg\206 BEV", false,-1);
        tracep->declBus(c+844,"mycpu_top u_datapath cp0_inst status_reg\206 blank1", false,-1, 5,0);
        tracep->declBus(c+845,"mycpu_top u_datapath cp0_inst status_reg\206 IM", false,-1, 7,0);
        tracep->declBus(c+846,"mycpu_top u_datapath cp0_inst status_reg\206 blank0", false,-1, 2,0);
        tracep->declBit(c+847,"mycpu_top u_datapath cp0_inst status_reg\206 UM", false,-1);
        tracep->declBit(c+848,"mycpu_top u_datapath cp0_inst status_reg\206 R0", false,-1);
        tracep->declBit(c+849,"mycpu_top u_datapath cp0_inst status_reg\206 ERL", false,-1);
        tracep->declBit(c+850,"mycpu_top u_datapath cp0_inst status_reg\206 EXL", false,-1);
        tracep->declBit(c+851,"mycpu_top u_datapath cp0_inst status_reg\206 IE", false,-1);
        tracep->declBit(c+852,"mycpu_top u_datapath cp0_inst cause_reg\206 BD", false,-1);
        tracep->declBus(c+853,"mycpu_top u_datapath cp0_inst cause_reg\206 blank3", false,-1, 6,0);
        tracep->declBit(c+854,"mycpu_top u_datapath cp0_inst cause_reg\206 IV", false,-1);
        tracep->declBus(c+855,"mycpu_top u_datapath cp0_inst cause_reg\206 blank2", false,-1, 6,0);
        tracep->declBus(c+856,"mycpu_top u_datapath cp0_inst cause_reg\206 IP", false,-1, 7,0);
        tracep->declBit(c+857,"mycpu_top u_datapath cp0_inst cause_reg\206 blank1", false,-1);
        tracep->declBus(c+858,"mycpu_top u_datapath cp0_inst cause_reg\206 exccode", false,-1, 4,0);
        tracep->declBus(c+859,"mycpu_top u_datapath cp0_inst cause_reg\206 blank0", false,-1, 1,0);
        tracep->declBus(c+860,"mycpu_top u_datapath cp0_inst epc_reg", false,-1, 31,0);
        tracep->declBus(c+1359,"mycpu_top u_datapath cp0_inst prid", false,-1, 31,0);
        tracep->declBus(c+861,"mycpu_top u_datapath cp0_inst ebase_reg", false,-1, 31,0);
        tracep->declBit(c+1360,"mycpu_top u_datapath cp0_inst config0\206 M", false,-1);
        tracep->declBus(c+1361,"mycpu_top u_datapath cp0_inst config0\206 K23", false,-1, 2,0);
        tracep->declBus(c+1362,"mycpu_top u_datapath cp0_inst config0\206 KU", false,-1, 2,0);
        tracep->declBus(c+1363,"mycpu_top u_datapath cp0_inst config0\206 Impl", false,-1, 8,0);
        tracep->declBit(c+1364,"mycpu_top u_datapath cp0_inst config0\206 BE", false,-1);
        tracep->declBus(c+1365,"mycpu_top u_datapath cp0_inst config0\206 AT", false,-1, 1,0);
        tracep->declBus(c+1366,"mycpu_top u_datapath cp0_inst config0\206 AR", false,-1, 2,0);
        tracep->declBus(c+1367,"mycpu_top u_datapath cp0_inst config0\206 MT", false,-1, 2,0);
        tracep->declBus(c+1368,"mycpu_top u_datapath cp0_inst config0\206 blank0", false,-1, 2,0);
        tracep->declBit(c+1369,"mycpu_top u_datapath cp0_inst config0\206 VI", false,-1);
        tracep->declBus(c+1370,"mycpu_top u_datapath cp0_inst config0\206 k0", false,-1, 2,0);
        tracep->declBit(c+1371,"mycpu_top u_datapath cp0_inst config1\206 M", false,-1);
        tracep->declBus(c+1372,"mycpu_top u_datapath cp0_inst config1\206 MS", false,-1, 5,0);
        tracep->declBus(c+1373,"mycpu_top u_datapath cp0_inst config1\206 IS", false,-1, 2,0);
        tracep->declBus(c+1374,"mycpu_top u_datapath cp0_inst config1\206 IL", false,-1, 2,0);
        tracep->declBus(c+1375,"mycpu_top u_datapath cp0_inst config1\206 IA", false,-1, 2,0);
        tracep->declBus(c+1376,"mycpu_top u_datapath cp0_inst config1\206 DS", false,-1, 2,0);
        tracep->declBus(c+1377,"mycpu_top u_datapath cp0_inst config1\206 DL", false,-1, 2,0);
        tracep->declBus(c+1378,"mycpu_top u_datapath cp0_inst config1\206 DA", false,-1, 2,0);
        tracep->declBit(c+1379,"mycpu_top u_datapath cp0_inst config1\206 C2", false,-1);
        tracep->declBit(c+1380,"mycpu_top u_datapath cp0_inst config1\206 MD", false,-1);
        tracep->declBit(c+1381,"mycpu_top u_datapath cp0_inst config1\206 PC", false,-1);
        tracep->declBit(c+1382,"mycpu_top u_datapath cp0_inst config1\206 WR", false,-1);
        tracep->declBit(c+1383,"mycpu_top u_datapath cp0_inst config1\206 CA", false,-1);
        tracep->declBit(c+1384,"mycpu_top u_datapath cp0_inst config1\206 EP", false,-1);
        tracep->declBit(c+1385,"mycpu_top u_datapath cp0_inst config1\206 FP", false,-1);
        tracep->declBus(c+862,"mycpu_top u_datapath cp0_inst taglo_reg", false,-1, 31,0);
        tracep->declBus(c+863,"mycpu_top u_datapath cp0_inst taghi_reg", false,-1, 31,0);
        tracep->declBus(c+864,"mycpu_top u_datapath cp0_inst errorepc_reg", false,-1, 31,0);
        tracep->declBit(c+865,"mycpu_top u_datapath cp0_inst tlb(0)\206 G", false,-1);
        tracep->declBit(c+866,"mycpu_top u_datapath cp0_inst tlb(0)\206 V0", false,-1);
        tracep->declBit(c+867,"mycpu_top u_datapath cp0_inst tlb(0)\206 V1", false,-1);
        tracep->declBit(c+868,"mycpu_top u_datapath cp0_inst tlb(0)\206 D0", false,-1);
        tracep->declBit(c+869,"mycpu_top u_datapath cp0_inst tlb(0)\206 D1", false,-1);
        tracep->declBit(c+870,"mycpu_top u_datapath cp0_inst tlb(0)\206 C0", false,-1);
        tracep->declBit(c+871,"mycpu_top u_datapath cp0_inst tlb(0)\206 C1", false,-1);
        tracep->declBus(c+872,"mycpu_top u_datapath cp0_inst tlb(0)\206 PFN0", false,-1, 19,0);
        tracep->declBus(c+873,"mycpu_top u_datapath cp0_inst tlb(0)\206 PFN1", false,-1, 19,0);
        tracep->declBus(c+874,"mycpu_top u_datapath cp0_inst tlb(0)\206 VPN2", false,-1, 18,0);
        tracep->declBus(c+875,"mycpu_top u_datapath cp0_inst tlb(0)\206 ASID", false,-1, 7,0);
        tracep->declBit(c+876,"mycpu_top u_datapath cp0_inst tlb(1)\206 G", false,-1);
        tracep->declBit(c+877,"mycpu_top u_datapath cp0_inst tlb(1)\206 V0", false,-1);
        tracep->declBit(c+878,"mycpu_top u_datapath cp0_inst tlb(1)\206 V1", false,-1);
        tracep->declBit(c+879,"mycpu_top u_datapath cp0_inst tlb(1)\206 D0", false,-1);
        tracep->declBit(c+880,"mycpu_top u_datapath cp0_inst tlb(1)\206 D1", false,-1);
        tracep->declBit(c+881,"mycpu_top u_datapath cp0_inst tlb(1)\206 C0", false,-1);
        tracep->declBit(c+882,"mycpu_top u_datapath cp0_inst tlb(1)\206 C1", false,-1);
        tracep->declBus(c+883,"mycpu_top u_datapath cp0_inst tlb(1)\206 PFN0", false,-1, 19,0);
        tracep->declBus(c+884,"mycpu_top u_datapath cp0_inst tlb(1)\206 PFN1", false,-1, 19,0);
        tracep->declBus(c+885,"mycpu_top u_datapath cp0_inst tlb(1)\206 VPN2", false,-1, 18,0);
        tracep->declBus(c+886,"mycpu_top u_datapath cp0_inst tlb(1)\206 ASID", false,-1, 7,0);
        tracep->declBit(c+887,"mycpu_top u_datapath cp0_inst tlb(2)\206 G", false,-1);
        tracep->declBit(c+888,"mycpu_top u_datapath cp0_inst tlb(2)\206 V0", false,-1);
        tracep->declBit(c+889,"mycpu_top u_datapath cp0_inst tlb(2)\206 V1", false,-1);
        tracep->declBit(c+890,"mycpu_top u_datapath cp0_inst tlb(2)\206 D0", false,-1);
        tracep->declBit(c+891,"mycpu_top u_datapath cp0_inst tlb(2)\206 D1", false,-1);
        tracep->declBit(c+892,"mycpu_top u_datapath cp0_inst tlb(2)\206 C0", false,-1);
        tracep->declBit(c+893,"mycpu_top u_datapath cp0_inst tlb(2)\206 C1", false,-1);
        tracep->declBus(c+894,"mycpu_top u_datapath cp0_inst tlb(2)\206 PFN0", false,-1, 19,0);
        tracep->declBus(c+895,"mycpu_top u_datapath cp0_inst tlb(2)\206 PFN1", false,-1, 19,0);
        tracep->declBus(c+896,"mycpu_top u_datapath cp0_inst tlb(2)\206 VPN2", false,-1, 18,0);
        tracep->declBus(c+897,"mycpu_top u_datapath cp0_inst tlb(2)\206 ASID", false,-1, 7,0);
        tracep->declBit(c+898,"mycpu_top u_datapath cp0_inst tlb(3)\206 G", false,-1);
        tracep->declBit(c+899,"mycpu_top u_datapath cp0_inst tlb(3)\206 V0", false,-1);
        tracep->declBit(c+900,"mycpu_top u_datapath cp0_inst tlb(3)\206 V1", false,-1);
        tracep->declBit(c+901,"mycpu_top u_datapath cp0_inst tlb(3)\206 D0", false,-1);
        tracep->declBit(c+902,"mycpu_top u_datapath cp0_inst tlb(3)\206 D1", false,-1);
        tracep->declBit(c+903,"mycpu_top u_datapath cp0_inst tlb(3)\206 C0", false,-1);
        tracep->declBit(c+904,"mycpu_top u_datapath cp0_inst tlb(3)\206 C1", false,-1);
        tracep->declBus(c+905,"mycpu_top u_datapath cp0_inst tlb(3)\206 PFN0", false,-1, 19,0);
        tracep->declBus(c+906,"mycpu_top u_datapath cp0_inst tlb(3)\206 PFN1", false,-1, 19,0);
        tracep->declBus(c+907,"mycpu_top u_datapath cp0_inst tlb(3)\206 VPN2", false,-1, 18,0);
        tracep->declBus(c+908,"mycpu_top u_datapath cp0_inst tlb(3)\206 ASID", false,-1, 7,0);
        tracep->declBit(c+909,"mycpu_top u_datapath cp0_inst tlb(4)\206 G", false,-1);
        tracep->declBit(c+910,"mycpu_top u_datapath cp0_inst tlb(4)\206 V0", false,-1);
        tracep->declBit(c+911,"mycpu_top u_datapath cp0_inst tlb(4)\206 V1", false,-1);
        tracep->declBit(c+912,"mycpu_top u_datapath cp0_inst tlb(4)\206 D0", false,-1);
        tracep->declBit(c+913,"mycpu_top u_datapath cp0_inst tlb(4)\206 D1", false,-1);
        tracep->declBit(c+914,"mycpu_top u_datapath cp0_inst tlb(4)\206 C0", false,-1);
        tracep->declBit(c+915,"mycpu_top u_datapath cp0_inst tlb(4)\206 C1", false,-1);
        tracep->declBus(c+916,"mycpu_top u_datapath cp0_inst tlb(4)\206 PFN0", false,-1, 19,0);
        tracep->declBus(c+917,"mycpu_top u_datapath cp0_inst tlb(4)\206 PFN1", false,-1, 19,0);
        tracep->declBus(c+918,"mycpu_top u_datapath cp0_inst tlb(4)\206 VPN2", false,-1, 18,0);
        tracep->declBus(c+919,"mycpu_top u_datapath cp0_inst tlb(4)\206 ASID", false,-1, 7,0);
        tracep->declBit(c+920,"mycpu_top u_datapath cp0_inst tlb(5)\206 G", false,-1);
        tracep->declBit(c+921,"mycpu_top u_datapath cp0_inst tlb(5)\206 V0", false,-1);
        tracep->declBit(c+922,"mycpu_top u_datapath cp0_inst tlb(5)\206 V1", false,-1);
        tracep->declBit(c+923,"mycpu_top u_datapath cp0_inst tlb(5)\206 D0", false,-1);
        tracep->declBit(c+924,"mycpu_top u_datapath cp0_inst tlb(5)\206 D1", false,-1);
        tracep->declBit(c+925,"mycpu_top u_datapath cp0_inst tlb(5)\206 C0", false,-1);
        tracep->declBit(c+926,"mycpu_top u_datapath cp0_inst tlb(5)\206 C1", false,-1);
        tracep->declBus(c+927,"mycpu_top u_datapath cp0_inst tlb(5)\206 PFN0", false,-1, 19,0);
        tracep->declBus(c+928,"mycpu_top u_datapath cp0_inst tlb(5)\206 PFN1", false,-1, 19,0);
        tracep->declBus(c+929,"mycpu_top u_datapath cp0_inst tlb(5)\206 VPN2", false,-1, 18,0);
        tracep->declBus(c+930,"mycpu_top u_datapath cp0_inst tlb(5)\206 ASID", false,-1, 7,0);
        tracep->declBit(c+931,"mycpu_top u_datapath cp0_inst tlb(6)\206 G", false,-1);
        tracep->declBit(c+932,"mycpu_top u_datapath cp0_inst tlb(6)\206 V0", false,-1);
        tracep->declBit(c+933,"mycpu_top u_datapath cp0_inst tlb(6)\206 V1", false,-1);
        tracep->declBit(c+934,"mycpu_top u_datapath cp0_inst tlb(6)\206 D0", false,-1);
        tracep->declBit(c+935,"mycpu_top u_datapath cp0_inst tlb(6)\206 D1", false,-1);
        tracep->declBit(c+936,"mycpu_top u_datapath cp0_inst tlb(6)\206 C0", false,-1);
        tracep->declBit(c+937,"mycpu_top u_datapath cp0_inst tlb(6)\206 C1", false,-1);
        tracep->declBus(c+938,"mycpu_top u_datapath cp0_inst tlb(6)\206 PFN0", false,-1, 19,0);
        tracep->declBus(c+939,"mycpu_top u_datapath cp0_inst tlb(6)\206 PFN1", false,-1, 19,0);
        tracep->declBus(c+940,"mycpu_top u_datapath cp0_inst tlb(6)\206 VPN2", false,-1, 18,0);
        tracep->declBus(c+941,"mycpu_top u_datapath cp0_inst tlb(6)\206 ASID", false,-1, 7,0);
        tracep->declBit(c+942,"mycpu_top u_datapath cp0_inst tlb(7)\206 G", false,-1);
        tracep->declBit(c+943,"mycpu_top u_datapath cp0_inst tlb(7)\206 V0", false,-1);
        tracep->declBit(c+944,"mycpu_top u_datapath cp0_inst tlb(7)\206 V1", false,-1);
        tracep->declBit(c+945,"mycpu_top u_datapath cp0_inst tlb(7)\206 D0", false,-1);
        tracep->declBit(c+946,"mycpu_top u_datapath cp0_inst tlb(7)\206 D1", false,-1);
        tracep->declBit(c+947,"mycpu_top u_datapath cp0_inst tlb(7)\206 C0", false,-1);
        tracep->declBit(c+948,"mycpu_top u_datapath cp0_inst tlb(7)\206 C1", false,-1);
        tracep->declBus(c+949,"mycpu_top u_datapath cp0_inst tlb(7)\206 PFN0", false,-1, 19,0);
        tracep->declBus(c+950,"mycpu_top u_datapath cp0_inst tlb(7)\206 PFN1", false,-1, 19,0);
        tracep->declBus(c+951,"mycpu_top u_datapath cp0_inst tlb(7)\206 VPN2", false,-1, 18,0);
        tracep->declBus(c+952,"mycpu_top u_datapath cp0_inst tlb(7)\206 ASID", false,-1, 7,0);
        tracep->declBit(c+224,"mycpu_top u_datapath cp0_inst is_kernel_mode", false,-1);
        tracep->declBus(c+953,"mycpu_top u_datapath cp0_inst trap_base", false,-1, 31,0);
        tracep->declBit(c+954,"mycpu_top u_datapath cp0_inst i_tlb_rf", false,-1);
        tracep->declBit(c+955,"mycpu_top u_datapath cp0_inst d_tlb_rf", false,-1);
        tracep->declBit(c+956,"mycpu_top u_datapath cp0_inst tlb_rf", false,-1);
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+957+i*1,"mycpu_top u_datapath cp0_inst tlb_matched", true,(i+0), 7,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+960+i*1,"mycpu_top u_datapath cp0_inst tlb_find_vpn2", true,(i+0), 18,0);}}
        {int i; for (i=0; i<3; i++) {
                tracep->declBus(c+963+i*1,"mycpu_top u_datapath cp0_inst tlb_matched_index", true,(i+0), 2,0);}}
        tracep->declBus(c+966,"mycpu_top u_datapath cp0_inst entrylo0_wdata\206 F", false,-1, 5,0);
        tracep->declBus(c+967,"mycpu_top u_datapath cp0_inst entrylo0_wdata\206 PFN", false,-1, 19,0);
        tracep->declBus(c+968,"mycpu_top u_datapath cp0_inst entrylo0_wdata\206 C", false,-1, 2,0);
        tracep->declBit(c+969,"mycpu_top u_datapath cp0_inst entrylo0_wdata\206 D", false,-1);
        tracep->declBit(c+970,"mycpu_top u_datapath cp0_inst entrylo0_wdata\206 V", false,-1);
        tracep->declBit(c+971,"mycpu_top u_datapath cp0_inst entrylo0_wdata\206 G", false,-1);
        tracep->declBus(c+966,"mycpu_top u_datapath cp0_inst entrylo1_wdata\206 F", false,-1, 5,0);
        tracep->declBus(c+967,"mycpu_top u_datapath cp0_inst entrylo1_wdata\206 PFN", false,-1, 19,0);
        tracep->declBus(c+968,"mycpu_top u_datapath cp0_inst entrylo1_wdata\206 C", false,-1, 2,0);
        tracep->declBit(c+969,"mycpu_top u_datapath cp0_inst entrylo1_wdata\206 D", false,-1);
        tracep->declBit(c+970,"mycpu_top u_datapath cp0_inst entrylo1_wdata\206 V", false,-1);
        tracep->declBit(c+971,"mycpu_top u_datapath cp0_inst entrylo1_wdata\206 G", false,-1);
        tracep->declBus(c+972,"mycpu_top u_datapath cp0_inst context_wdata\206 ptebase", false,-1, 8,0);
        tracep->declBus(c+973,"mycpu_top u_datapath cp0_inst context_wdata\206 badvpn2", false,-1, 18,0);
        tracep->declBus(c+974,"mycpu_top u_datapath cp0_inst context_wdata\206 blank", false,-1, 3,0);
        tracep->declBus(c+975,"mycpu_top u_datapath cp0_inst entryhi_wdata\206 VPN2", false,-1, 18,0);
        tracep->declBus(c+976,"mycpu_top u_datapath cp0_inst entryhi_wdata\206 blank0", false,-1, 4,0);
        tracep->declBus(c+977,"mycpu_top u_datapath cp0_inst entryhi_wdata\206 ASID", false,-1, 7,0);
        tracep->declBus(c+978,"mycpu_top u_datapath cp0_inst status_wdata\206 blank3", false,-1, 2,0);
        tracep->declBit(c+979,"mycpu_top u_datapath cp0_inst status_wdata\206 CU0", false,-1);
        tracep->declBus(c+980,"mycpu_top u_datapath cp0_inst status_wdata\206 blank2", false,-1, 4,0);
        tracep->declBit(c+981,"mycpu_top u_datapath cp0_inst status_wdata\206 BEV", false,-1);
        tracep->declBus(c+982,"mycpu_top u_datapath cp0_inst status_wdata\206 blank1", false,-1, 5,0);
        tracep->declBus(c+983,"mycpu_top u_datapath cp0_inst status_wdata\206 IM", false,-1, 7,0);
        tracep->declBus(c+984,"mycpu_top u_datapath cp0_inst status_wdata\206 blank0", false,-1, 2,0);
        tracep->declBit(c+985,"mycpu_top u_datapath cp0_inst status_wdata\206 UM", false,-1);
        tracep->declBit(c+986,"mycpu_top u_datapath cp0_inst status_wdata\206 R0", false,-1);
        tracep->declBit(c+987,"mycpu_top u_datapath cp0_inst status_wdata\206 ERL", false,-1);
        tracep->declBit(c+988,"mycpu_top u_datapath cp0_inst status_wdata\206 EXL", false,-1);
        tracep->declBit(c+989,"mycpu_top u_datapath cp0_inst status_wdata\206 IE", false,-1);
        tracep->declBit(c+990,"mycpu_top u_datapath cp0_inst cause_wdata\206 BD", false,-1);
        tracep->declBus(c+991,"mycpu_top u_datapath cp0_inst cause_wdata\206 blank3", false,-1, 6,0);
        tracep->declBit(c+992,"mycpu_top u_datapath cp0_inst cause_wdata\206 IV", false,-1);
        tracep->declBus(c+993,"mycpu_top u_datapath cp0_inst cause_wdata\206 blank2", false,-1, 6,0);
        tracep->declBus(c+994,"mycpu_top u_datapath cp0_inst cause_wdata\206 IP", false,-1, 7,0);
        tracep->declBit(c+995,"mycpu_top u_datapath cp0_inst cause_wdata\206 blank1", false,-1);
        tracep->declBus(c+996,"mycpu_top u_datapath cp0_inst cause_wdata\206 exccode", false,-1, 4,0);
        tracep->declBus(c+997,"mycpu_top u_datapath cp0_inst cause_wdata\206 blank0", false,-1, 1,0);
        tracep->declBit(c+1281,"mycpu_top u_datapath u_mem_wb clk", false,-1);
        tracep->declBit(c+1329,"mycpu_top u_datapath u_mem_wb rst", false,-1);
        tracep->declBit(c+1339,"mycpu_top u_datapath u_mem_wb clear1", false,-1);
        tracep->declBit(c+1339,"mycpu_top u_datapath u_mem_wb clear2", false,-1);
        tracep->declBit(c+1195,"mycpu_top u_datapath u_mem_wb ena1", false,-1);
        tracep->declBit(c+1195,"mycpu_top u_datapath u_mem_wb ena2", false,-1);
        tracep->declBit(c+455,"mycpu_top u_datapath u_mem_wb M_master_except\206 if_adel", false,-1);
        tracep->declBit(c+456,"mycpu_top u_datapath u_mem_wb M_master_except\206 if_tlbl", false,-1);
        tracep->declBit(c+457,"mycpu_top u_datapath u_mem_wb M_master_except\206 if_tlbrf", false,-1);
        tracep->declBit(c+458,"mycpu_top u_datapath u_mem_wb M_master_except\206 id_ri", false,-1);
        tracep->declBit(c+459,"mycpu_top u_datapath u_mem_wb M_master_except\206 id_syscall", false,-1);
        tracep->declBit(c+460,"mycpu_top u_datapath u_mem_wb M_master_except\206 id_break", false,-1);
        tracep->declBit(c+461,"mycpu_top u_datapath u_mem_wb M_master_except\206 id_eret", false,-1);
        tracep->declBit(c+462,"mycpu_top u_datapath u_mem_wb M_master_except\206 id_int", false,-1);
        tracep->declBit(c+463,"mycpu_top u_datapath u_mem_wb M_master_except\206 id_cpu", false,-1);
        tracep->declBit(c+464,"mycpu_top u_datapath u_mem_wb M_master_except\206 ex_ov", false,-1);
        tracep->declBit(c+465,"mycpu_top u_datapath u_mem_wb M_master_except\206 ex_adel", false,-1);
        tracep->declBit(c+466,"mycpu_top u_datapath u_mem_wb M_master_except\206 ex_ades", false,-1);
        tracep->declBit(c+467,"mycpu_top u_datapath u_mem_wb M_master_except\206 ex_tlbl", false,-1);
        tracep->declBit(c+468,"mycpu_top u_datapath u_mem_wb M_master_except\206 ex_tlbs", false,-1);
        tracep->declBit(c+469,"mycpu_top u_datapath u_mem_wb M_master_except\206 ex_tlbm", false,-1);
        tracep->declBit(c+470,"mycpu_top u_datapath u_mem_wb M_master_except\206 ex_tlbrf", false,-1);
        tracep->declBit(c+471,"mycpu_top u_datapath u_mem_wb M_master_except\206 ex_trap", false,-1);
        tracep->declBit(c+216,"mycpu_top u_datapath u_mem_wb M_master_reg_wen", false,-1);
        tracep->declBus(c+419,"mycpu_top u_datapath u_mem_wb M_master_reg_waddr", false,-1, 4,0);
        tracep->declBus(c+414,"mycpu_top u_datapath u_mem_wb M_master_inst", false,-1, 31,0);
        tracep->declBus(c+416,"mycpu_top u_datapath u_mem_wb M_master_pc", false,-1, 31,0);
        tracep->declBus(c+510,"mycpu_top u_datapath u_mem_wb M_master_reg_wdata", false,-1, 31,0);
        tracep->declBit(c+472,"mycpu_top u_datapath u_mem_wb M_slave_except\206 if_adel", false,-1);
        tracep->declBit(c+473,"mycpu_top u_datapath u_mem_wb M_slave_except\206 if_tlbl", false,-1);
        tracep->declBit(c+474,"mycpu_top u_datapath u_mem_wb M_slave_except\206 if_tlbrf", false,-1);
        tracep->declBit(c+475,"mycpu_top u_datapath u_mem_wb M_slave_except\206 id_ri", false,-1);
        tracep->declBit(c+476,"mycpu_top u_datapath u_mem_wb M_slave_except\206 id_syscall", false,-1);
        tracep->declBit(c+477,"mycpu_top u_datapath u_mem_wb M_slave_except\206 id_break", false,-1);
        tracep->declBit(c+478,"mycpu_top u_datapath u_mem_wb M_slave_except\206 id_eret", false,-1);
        tracep->declBit(c+479,"mycpu_top u_datapath u_mem_wb M_slave_except\206 id_int", false,-1);
        tracep->declBit(c+480,"mycpu_top u_datapath u_mem_wb M_slave_except\206 id_cpu", false,-1);
        tracep->declBit(c+481,"mycpu_top u_datapath u_mem_wb M_slave_except\206 ex_ov", false,-1);
        tracep->declBit(c+482,"mycpu_top u_datapath u_mem_wb M_slave_except\206 ex_adel", false,-1);
        tracep->declBit(c+483,"mycpu_top u_datapath u_mem_wb M_slave_except\206 ex_ades", false,-1);
        tracep->declBit(c+484,"mycpu_top u_datapath u_mem_wb M_slave_except\206 ex_tlbl", false,-1);
        tracep->declBit(c+485,"mycpu_top u_datapath u_mem_wb M_slave_except\206 ex_tlbs", false,-1);
        tracep->declBit(c+486,"mycpu_top u_datapath u_mem_wb M_slave_except\206 ex_tlbm", false,-1);
        tracep->declBit(c+487,"mycpu_top u_datapath u_mem_wb M_slave_except\206 ex_tlbrf", false,-1);
        tracep->declBit(c+488,"mycpu_top u_datapath u_mem_wb M_slave_except\206 ex_trap", false,-1);
        tracep->declBit(c+217,"mycpu_top u_datapath u_mem_wb M_slave_reg_wen", false,-1);
        tracep->declBus(c+420,"mycpu_top u_datapath u_mem_wb M_slave_reg_waddr", false,-1, 4,0);
        tracep->declBus(c+415,"mycpu_top u_datapath u_mem_wb M_slave_inst", false,-1, 31,0);
        tracep->declBus(c+417,"mycpu_top u_datapath u_mem_wb M_slave_pc", false,-1, 31,0);
        tracep->declBus(c+511,"mycpu_top u_datapath u_mem_wb M_slave_reg_wdata", false,-1, 31,0);
        tracep->declBit(c+512,"mycpu_top u_datapath u_mem_wb W_master_except\206 if_adel", false,-1);
        tracep->declBit(c+513,"mycpu_top u_datapath u_mem_wb W_master_except\206 if_tlbl", false,-1);
        tracep->declBit(c+514,"mycpu_top u_datapath u_mem_wb W_master_except\206 if_tlbrf", false,-1);
        tracep->declBit(c+515,"mycpu_top u_datapath u_mem_wb W_master_except\206 id_ri", false,-1);
        tracep->declBit(c+516,"mycpu_top u_datapath u_mem_wb W_master_except\206 id_syscall", false,-1);
        tracep->declBit(c+517,"mycpu_top u_datapath u_mem_wb W_master_except\206 id_break", false,-1);
        tracep->declBit(c+518,"mycpu_top u_datapath u_mem_wb W_master_except\206 id_eret", false,-1);
        tracep->declBit(c+519,"mycpu_top u_datapath u_mem_wb W_master_except\206 id_int", false,-1);
        tracep->declBit(c+520,"mycpu_top u_datapath u_mem_wb W_master_except\206 id_cpu", false,-1);
        tracep->declBit(c+521,"mycpu_top u_datapath u_mem_wb W_master_except\206 ex_ov", false,-1);
        tracep->declBit(c+522,"mycpu_top u_datapath u_mem_wb W_master_except\206 ex_adel", false,-1);
        tracep->declBit(c+523,"mycpu_top u_datapath u_mem_wb W_master_except\206 ex_ades", false,-1);
        tracep->declBit(c+524,"mycpu_top u_datapath u_mem_wb W_master_except\206 ex_tlbl", false,-1);
        tracep->declBit(c+525,"mycpu_top u_datapath u_mem_wb W_master_except\206 ex_tlbs", false,-1);
        tracep->declBit(c+526,"mycpu_top u_datapath u_mem_wb W_master_except\206 ex_tlbm", false,-1);
        tracep->declBit(c+527,"mycpu_top u_datapath u_mem_wb W_master_except\206 ex_tlbrf", false,-1);
        tracep->declBit(c+528,"mycpu_top u_datapath u_mem_wb W_master_except\206 ex_trap", false,-1);
        tracep->declBit(c+218,"mycpu_top u_datapath u_mem_wb W_master_reg_wen", false,-1);
        tracep->declBus(c+506,"mycpu_top u_datapath u_mem_wb W_master_reg_waddr", false,-1, 4,0);
        tracep->declBus(c+502,"mycpu_top u_datapath u_mem_wb W_master_inst", false,-1, 31,0);
        tracep->declBus(c+504,"mycpu_top u_datapath u_mem_wb W_master_pc", false,-1, 31,0);
        tracep->declBus(c+508,"mycpu_top u_datapath u_mem_wb W_master_reg_wdata", false,-1, 31,0);
        tracep->declBit(c+529,"mycpu_top u_datapath u_mem_wb W_slave_except\206 if_adel", false,-1);
        tracep->declBit(c+530,"mycpu_top u_datapath u_mem_wb W_slave_except\206 if_tlbl", false,-1);
        tracep->declBit(c+531,"mycpu_top u_datapath u_mem_wb W_slave_except\206 if_tlbrf", false,-1);
        tracep->declBit(c+532,"mycpu_top u_datapath u_mem_wb W_slave_except\206 id_ri", false,-1);
        tracep->declBit(c+533,"mycpu_top u_datapath u_mem_wb W_slave_except\206 id_syscall", false,-1);
        tracep->declBit(c+534,"mycpu_top u_datapath u_mem_wb W_slave_except\206 id_break", false,-1);
        tracep->declBit(c+535,"mycpu_top u_datapath u_mem_wb W_slave_except\206 id_eret", false,-1);
        tracep->declBit(c+536,"mycpu_top u_datapath u_mem_wb W_slave_except\206 id_int", false,-1);
        tracep->declBit(c+537,"mycpu_top u_datapath u_mem_wb W_slave_except\206 id_cpu", false,-1);
        tracep->declBit(c+538,"mycpu_top u_datapath u_mem_wb W_slave_except\206 ex_ov", false,-1);
        tracep->declBit(c+539,"mycpu_top u_datapath u_mem_wb W_slave_except\206 ex_adel", false,-1);
        tracep->declBit(c+540,"mycpu_top u_datapath u_mem_wb W_slave_except\206 ex_ades", false,-1);
        tracep->declBit(c+541,"mycpu_top u_datapath u_mem_wb W_slave_except\206 ex_tlbl", false,-1);
        tracep->declBit(c+542,"mycpu_top u_datapath u_mem_wb W_slave_except\206 ex_tlbs", false,-1);
        tracep->declBit(c+543,"mycpu_top u_datapath u_mem_wb W_slave_except\206 ex_tlbm", false,-1);
        tracep->declBit(c+544,"mycpu_top u_datapath u_mem_wb W_slave_except\206 ex_tlbrf", false,-1);
        tracep->declBit(c+545,"mycpu_top u_datapath u_mem_wb W_slave_except\206 ex_trap", false,-1);
        tracep->declBit(c+219,"mycpu_top u_datapath u_mem_wb W_slave_reg_wen", false,-1);
        tracep->declBus(c+507,"mycpu_top u_datapath u_mem_wb W_slave_reg_waddr", false,-1, 4,0);
        tracep->declBus(c+503,"mycpu_top u_datapath u_mem_wb W_slave_inst", false,-1, 31,0);
        tracep->declBus(c+505,"mycpu_top u_datapath u_mem_wb W_slave_pc", false,-1, 31,0);
        tracep->declBus(c+509,"mycpu_top u_datapath u_mem_wb W_slave_reg_wdata", false,-1, 31,0);
        tracep->declBus(c+80,"mycpu_top u_datapath u_mem_wb M_master_debug_cp0_count", false,-1, 31,0);
        tracep->declBus(c+81,"mycpu_top u_datapath u_mem_wb M_master_debug_cp0_random", false,-1, 31,0);
        tracep->declBus(c+82,"mycpu_top u_datapath u_mem_wb M_master_debug_cp0_cause", false,-1, 31,0);
        tracep->declBit(c+83,"mycpu_top u_datapath u_mem_wb M_master_debug_int", false,-1);
        tracep->declBus(c+84,"mycpu_top u_datapath u_mem_wb W_master_debug_cp0_count", false,-1, 31,0);
        tracep->declBus(c+85,"mycpu_top u_datapath u_mem_wb W_master_debug_cp0_random", false,-1, 31,0);
        tracep->declBus(c+86,"mycpu_top u_datapath u_mem_wb W_master_debug_cp0_cause", false,-1, 31,0);
        tracep->declBit(c+87,"mycpu_top u_datapath u_mem_wb W_master_debug_int", false,-1);
        tracep->declBus(c+12,"mycpu_top u_datapath u_master_asciiF instr", false,-1, 31,0);
        tracep->declQuad(c+546,"mycpu_top u_datapath u_master_asciiF ascii", false,-1, 47,0);
        tracep->declBus(c+237,"mycpu_top u_datapath u_master_asciiD instr", false,-1, 31,0);
        tracep->declQuad(c+548,"mycpu_top u_datapath u_master_asciiD ascii", false,-1, 47,0);
        tracep->declBus(c+324,"mycpu_top u_datapath u_master_asciiE instr", false,-1, 31,0);
        tracep->declQuad(c+550,"mycpu_top u_datapath u_master_asciiE ascii", false,-1, 47,0);
        tracep->declBus(c+414,"mycpu_top u_datapath u_master_asciiM instr", false,-1, 31,0);
        tracep->declQuad(c+552,"mycpu_top u_datapath u_master_asciiM ascii", false,-1, 47,0);
        tracep->declBus(c+502,"mycpu_top u_datapath u_master_asciiW instr", false,-1, 31,0);
        tracep->declQuad(c+554,"mycpu_top u_datapath u_master_asciiW ascii", false,-1, 47,0);
        tracep->declBus(c+13,"mycpu_top u_datapath u_slave_asciiF instr", false,-1, 31,0);
        tracep->declQuad(c+556,"mycpu_top u_datapath u_slave_asciiF ascii", false,-1, 47,0);
        tracep->declBus(c+238,"mycpu_top u_datapath u_slave_asciiD instr", false,-1, 31,0);
        tracep->declQuad(c+558,"mycpu_top u_datapath u_slave_asciiD ascii", false,-1, 47,0);
        tracep->declBus(c+325,"mycpu_top u_datapath u_slave_asciiE instr", false,-1, 31,0);
        tracep->declQuad(c+560,"mycpu_top u_datapath u_slave_asciiE ascii", false,-1, 47,0);
        tracep->declBus(c+415,"mycpu_top u_datapath u_slave_asciiM instr", false,-1, 31,0);
        tracep->declQuad(c+562,"mycpu_top u_datapath u_slave_asciiM ascii", false,-1, 47,0);
        tracep->declBus(c+503,"mycpu_top u_datapath u_slave_asciiW instr", false,-1, 31,0);
        tracep->declQuad(c+564,"mycpu_top u_datapath u_slave_asciiW ascii", false,-1, 47,0);
        tracep->declBus(c+1349,"mycpu_top i_cache_inst LEN_LINE", false,-1, 31,0);
        tracep->declBus(c+1349,"mycpu_top i_cache_inst LEN_INDEX", false,-1, 31,0);
        tracep->declBus(c+1386,"mycpu_top i_cache_inst NR_WAYS", false,-1, 31,0);
        tracep->declBit(c+1281,"mycpu_top i_cache_inst clk", false,-1);
        tracep->declBit(c+1329,"mycpu_top i_cache_inst rst", false,-1);
        tracep->declBit(c+1177,"mycpu_top i_cache_inst inst_en", false,-1);
        tracep->declBus(c+9,"mycpu_top i_cache_inst inst_va", false,-1, 31,0);
        tracep->declBus(c+1178,"mycpu_top i_cache_inst inst_va_next", false,-1, 31,0);
        tracep->declBus(c+12,"mycpu_top i_cache_inst inst_rdata0", false,-1, 31,0);
        tracep->declBus(c+13,"mycpu_top i_cache_inst inst_rdata1", false,-1, 31,0);
        tracep->declBit(c+1181,"mycpu_top i_cache_inst inst_ok0", false,-1);
        tracep->declBit(c+1182,"mycpu_top i_cache_inst inst_ok1", false,-1);
        tracep->declBit(c+10,"mycpu_top i_cache_inst inst_tlb_refill", false,-1);
        tracep->declBit(c+11,"mycpu_top i_cache_inst inst_tlb_invalid", false,-1);
        tracep->declBit(c+1179,"mycpu_top i_cache_inst stallF", false,-1);
        tracep->declBit(c+1179,"mycpu_top i_cache_inst istall", false,-1);
        tracep->declBit(c+14,"mycpu_top i_cache_inst fence_i", false,-1);
        tracep->declBus(c+1183,"mycpu_top i_cache_inst fence_addr", false,-1, 31,0);
        tracep->declBit(c+17,"mycpu_top i_cache_inst fence_tlb", false,-1);
        tracep->declBus(c+18,"mycpu_top i_cache_inst itlb_vpn2", false,-1, 31,13);
        tracep->declBit(c+19,"mycpu_top i_cache_inst itlb_found", false,-1);
        tracep->declBit(c+20,"mycpu_top i_cache_inst itlb_entry\206 G", false,-1);
        tracep->declBit(c+21,"mycpu_top i_cache_inst itlb_entry\206 V0", false,-1);
        tracep->declBit(c+22,"mycpu_top i_cache_inst itlb_entry\206 V1", false,-1);
        tracep->declBit(c+23,"mycpu_top i_cache_inst itlb_entry\206 D0", false,-1);
        tracep->declBit(c+24,"mycpu_top i_cache_inst itlb_entry\206 D1", false,-1);
        tracep->declBit(c+25,"mycpu_top i_cache_inst itlb_entry\206 C0", false,-1);
        tracep->declBit(c+26,"mycpu_top i_cache_inst itlb_entry\206 C1", false,-1);
        tracep->declBus(c+27,"mycpu_top i_cache_inst itlb_entry\206 PFN0", false,-1, 19,0);
        tracep->declBus(c+28,"mycpu_top i_cache_inst itlb_entry\206 PFN1", false,-1, 19,0);
        tracep->declBus(c+29,"mycpu_top i_cache_inst itlb_entry\206 VPN2", false,-1, 18,0);
        tracep->declBus(c+30,"mycpu_top i_cache_inst itlb_entry\206 ASID", false,-1, 7,0);
        tracep->declBus(c+42,"mycpu_top i_cache_inst araddr", false,-1, 31,0);
        tracep->declBus(c+43,"mycpu_top i_cache_inst arlen", false,-1, 7,0);
        tracep->declBus(c+44,"mycpu_top i_cache_inst arsize", false,-1, 2,0);
        tracep->declBit(c+45,"mycpu_top i_cache_inst arvalid", false,-1);
        tracep->declBit(c+1184,"mycpu_top i_cache_inst arready", false,-1);
        tracep->declBus(c+1185,"mycpu_top i_cache_inst rdata", false,-1, 31,0);
        tracep->declBit(c+1330,"mycpu_top i_cache_inst rlast", false,-1);
        tracep->declBit(c+1186,"mycpu_top i_cache_inst rvalid", false,-1);
        tracep->declBit(c+46,"mycpu_top i_cache_inst rready", false,-1);
        tracep->declBus(c+1387,"mycpu_top i_cache_inst LEN_PER_WAY", false,-1, 31,0);
        tracep->declBus(c+1388,"mycpu_top i_cache_inst LEN_TAG", false,-1, 31,0);
        tracep->declBus(c+1389,"mycpu_top i_cache_inst LEN_BRAM_ADDR", false,-1, 31,0);
        tracep->declBus(c+1390,"mycpu_top i_cache_inst NR_LINES", false,-1, 31,0);
        tracep->declBus(c+1391,"mycpu_top i_cache_inst NR_WORDS", false,-1, 31,0);
        tracep->declBus(c+998,"mycpu_top i_cache_inst icache_status", false,-1, 31,0);
        tracep->declBus(c+999,"mycpu_top i_cache_inst itlb\206 vpn", false,-1, 31,12);
        tracep->declBus(c+1000,"mycpu_top i_cache_inst itlb\206 ppn", false,-1, 31,12);
        tracep->declBit(c+1001,"mycpu_top i_cache_inst itlb\206 uncached", false,-1);
        tracep->declBit(c+1002,"mycpu_top i_cache_inst itlb\206 valid", false,-1);
        tracep->declBit(c+1003,"mycpu_top i_cache_inst direct_mapped", false,-1);
        tracep->declBit(c+1004,"mycpu_top i_cache_inst uncached", false,-1);
        tracep->declBus(c+1005,"mycpu_top i_cache_inst inst_tag", false,-1, 31,12);
        tracep->declBus(c+1006,"mycpu_top i_cache_inst inst_vpn", false,-1, 31,12);
        tracep->declBus(c+1007,"mycpu_top i_cache_inst inst_pa", false,-1, 31,0);
        tracep->declBit(c+1008,"mycpu_top i_cache_inst translation_ok", false,-1);
        tracep->declBus(c+1009,"mycpu_top i_cache_inst replace_line_addr", false,-1, 11,6);
        tracep->declBit(c+1010,"mycpu_top i_cache_inst bram_addr_choose", false,-1);
        tracep->declBus(c+1273,"mycpu_top i_cache_inst bram_word_addr", false,-1, 11,3);
        tracep->declBus(c+1274,"mycpu_top i_cache_inst bram_line_addr", false,-1, 11,6);
        {int i; for (i=0; i<2; i++) {
                tracep->declQuad(c+1011+i*2,"mycpu_top i_cache_inst cache_data", true,(i+0), 63,0);}}
        tracep->declBus(c+1015,"mycpu_top i_cache_inst cache_tag(0)\206 tag", false,-1, 19,0);
        tracep->declBus(c+1016,"mycpu_top i_cache_inst cache_tag(1)\206 tag", false,-1, 19,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+1017+i*1,"mycpu_top i_cache_inst data_wea", true,(i+0), 7,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBit(c+1019+i*1,"mycpu_top i_cache_inst tag_wea", true,(i+0));}}
        tracep->declBus(c+1021,"mycpu_top i_cache_inst tag_ram_wdata\206 tag", false,-1, 19,0);
        tracep->declBus(c+1022,"mycpu_top i_cache_inst tag_compare_valid", false,-1, 1,0);
        tracep->declBit(c+1023,"mycpu_top i_cache_inst cache_hit", false,-1);
        tracep->declBit(c+1024,"mycpu_top i_cache_inst cache_hit_available", false,-1);
        tracep->declBit(c+1024,"mycpu_top i_cache_inst cache_inst_ok0", false,-1);
        tracep->declBit(c+1025,"mycpu_top i_cache_inst cache_inst_ok1", false,-1);
        tracep->declBit(c+1026,"mycpu_top i_cache_inst i_cache_sel", false,-1);
        tracep->declBus(c+1027,"mycpu_top i_cache_inst va_line_addr", false,-1, 11,6);
        tracep->declBus(c+1275,"mycpu_top i_cache_inst fence_index", false,-1, 11,6);
        tracep->declBus(c+1028,"mycpu_top i_cache_inst cache_inst0", false,-1, 31,0);
        tracep->declBus(c+1029,"mycpu_top i_cache_inst cache_inst1", false,-1, 31,0);
        tracep->declBus(c+1030,"mycpu_top i_cache_inst saved_inst0", false,-1, 31,0);
        tracep->declBus(c+1031,"mycpu_top i_cache_inst saved_inst1", false,-1, 31,0);
        tracep->declBit(c+1032,"mycpu_top i_cache_inst saved_inst_ok0", false,-1);
        tracep->declBit(c+1033,"mycpu_top i_cache_inst saved_inst_ok1", false,-1);
        tracep->declBus(c+1034,"mycpu_top i_cache_inst axi_cnt", false,-1, 6,2);
        tracep->declBus(c+1390,"mycpu_top i_cache_inst genblk1[0] i_data LEN_DATA", false,-1, 31,0);
        tracep->declBus(c+1389,"mycpu_top i_cache_inst genblk1[0] i_data LEN_ADDR", false,-1, 31,0);
        tracep->declBit(c+1281,"mycpu_top i_cache_inst genblk1[0] i_data clka", false,-1);
        tracep->declBit(c+1281,"mycpu_top i_cache_inst genblk1[0] i_data clkb", false,-1);
        tracep->declBit(c+1337,"mycpu_top i_cache_inst genblk1[0] i_data ena", false,-1);
        tracep->declBit(c+1337,"mycpu_top i_cache_inst genblk1[0] i_data enb", false,-1);
        tracep->declBus(c+1035,"mycpu_top i_cache_inst genblk1[0] i_data wea", false,-1, 7,0);
        tracep->declBus(c+1036,"mycpu_top i_cache_inst genblk1[0] i_data addra", false,-1, 8,0);
        tracep->declBus(c+1273,"mycpu_top i_cache_inst genblk1[0] i_data addrb", false,-1, 8,0);
        tracep->declQuad(c+1276,"mycpu_top i_cache_inst genblk1[0] i_data dina", false,-1, 63,0);
        tracep->declQuad(c+1037,"mycpu_top i_cache_inst genblk1[0] i_data doutb", false,-1, 63,0);
        tracep->declBus(c+1392,"mycpu_top i_cache_inst genblk1[0] i_data DEPTH", false,-1, 31,0);
        tracep->declBus(c+1,"mycpu_top i_cache_inst genblk1[0] i_data j", false,-1, 31,0);
        tracep->declBus(c+1388,"mycpu_top i_cache_inst genblk1[0] i_tag LEN_DATA", false,-1, 31,0);
        tracep->declBus(c+1349,"mycpu_top i_cache_inst genblk1[0] i_tag LEN_ADDR", false,-1, 31,0);
        tracep->declBit(c+1281,"mycpu_top i_cache_inst genblk1[0] i_tag clka", false,-1);
        tracep->declBit(c+1281,"mycpu_top i_cache_inst genblk1[0] i_tag clkb", false,-1);
        tracep->declBit(c+1337,"mycpu_top i_cache_inst genblk1[0] i_tag ena", false,-1);
        tracep->declBit(c+1337,"mycpu_top i_cache_inst genblk1[0] i_tag enb", false,-1);
        tracep->declBit(c+1039,"mycpu_top i_cache_inst genblk1[0] i_tag wea", false,-1);
        tracep->declBus(c+1009,"mycpu_top i_cache_inst genblk1[0] i_tag addra", false,-1, 5,0);
        tracep->declBus(c+1274,"mycpu_top i_cache_inst genblk1[0] i_tag addrb", false,-1, 5,0);
        tracep->declBus(c+1040,"mycpu_top i_cache_inst genblk1[0] i_tag dina", false,-1, 19,0);
        tracep->declBus(c+1041,"mycpu_top i_cache_inst genblk1[0] i_tag doutb", false,-1, 19,0);
        tracep->declBus(c+1390,"mycpu_top i_cache_inst genblk1[0] i_tag DEPTH", false,-1, 31,0);
        tracep->declBus(c+2,"mycpu_top i_cache_inst genblk1[0] i_tag j", false,-1, 31,0);
        tracep->declBus(c+1390,"mycpu_top i_cache_inst genblk1[1] i_data LEN_DATA", false,-1, 31,0);
        tracep->declBus(c+1389,"mycpu_top i_cache_inst genblk1[1] i_data LEN_ADDR", false,-1, 31,0);
        tracep->declBit(c+1281,"mycpu_top i_cache_inst genblk1[1] i_data clka", false,-1);
        tracep->declBit(c+1281,"mycpu_top i_cache_inst genblk1[1] i_data clkb", false,-1);
        tracep->declBit(c+1337,"mycpu_top i_cache_inst genblk1[1] i_data ena", false,-1);
        tracep->declBit(c+1337,"mycpu_top i_cache_inst genblk1[1] i_data enb", false,-1);
        tracep->declBus(c+1042,"mycpu_top i_cache_inst genblk1[1] i_data wea", false,-1, 7,0);
        tracep->declBus(c+1043,"mycpu_top i_cache_inst genblk1[1] i_data addra", false,-1, 8,0);
        tracep->declBus(c+1273,"mycpu_top i_cache_inst genblk1[1] i_data addrb", false,-1, 8,0);
        tracep->declQuad(c+1278,"mycpu_top i_cache_inst genblk1[1] i_data dina", false,-1, 63,0);
        tracep->declQuad(c+1044,"mycpu_top i_cache_inst genblk1[1] i_data doutb", false,-1, 63,0);
        tracep->declBus(c+1392,"mycpu_top i_cache_inst genblk1[1] i_data DEPTH", false,-1, 31,0);
        tracep->declBus(c+3,"mycpu_top i_cache_inst genblk1[1] i_data j", false,-1, 31,0);
        tracep->declBus(c+1388,"mycpu_top i_cache_inst genblk1[1] i_tag LEN_DATA", false,-1, 31,0);
        tracep->declBus(c+1349,"mycpu_top i_cache_inst genblk1[1] i_tag LEN_ADDR", false,-1, 31,0);
        tracep->declBit(c+1281,"mycpu_top i_cache_inst genblk1[1] i_tag clka", false,-1);
        tracep->declBit(c+1281,"mycpu_top i_cache_inst genblk1[1] i_tag clkb", false,-1);
        tracep->declBit(c+1337,"mycpu_top i_cache_inst genblk1[1] i_tag ena", false,-1);
        tracep->declBit(c+1337,"mycpu_top i_cache_inst genblk1[1] i_tag enb", false,-1);
        tracep->declBit(c+1046,"mycpu_top i_cache_inst genblk1[1] i_tag wea", false,-1);
        tracep->declBus(c+1009,"mycpu_top i_cache_inst genblk1[1] i_tag addra", false,-1, 5,0);
        tracep->declBus(c+1274,"mycpu_top i_cache_inst genblk1[1] i_tag addrb", false,-1, 5,0);
        tracep->declBus(c+1040,"mycpu_top i_cache_inst genblk1[1] i_tag dina", false,-1, 19,0);
        tracep->declBus(c+1047,"mycpu_top i_cache_inst genblk1[1] i_tag doutb", false,-1, 19,0);
        tracep->declBus(c+1390,"mycpu_top i_cache_inst genblk1[1] i_tag DEPTH", false,-1, 31,0);
        tracep->declBus(c+4,"mycpu_top i_cache_inst genblk1[1] i_tag j", false,-1, 31,0);
        tracep->declBus(c+1349,"mycpu_top d_cache_inst LEN_LINE", false,-1, 31,0);
        tracep->declBus(c+1349,"mycpu_top d_cache_inst LEN_INDEX", false,-1, 31,0);
        tracep->declBus(c+1386,"mycpu_top d_cache_inst NR_WAYS", false,-1, 31,0);
        tracep->declBus(c+1350,"mycpu_top d_cache_inst SIZE_STORE_BUFFER", false,-1, 31,0);
        tracep->declBit(c+1281,"mycpu_top d_cache_inst clk", false,-1);
        tracep->declBit(c+1329,"mycpu_top d_cache_inst rst", false,-1);
        tracep->declBit(c+1180,"mycpu_top d_cache_inst stallM", false,-1);
        tracep->declBit(c+38,"mycpu_top d_cache_inst dstall", false,-1);
        tracep->declBus(c+39,"mycpu_top d_cache_inst E_mem_va", false,-1, 31,0);
        tracep->declBus(c+32,"mycpu_top d_cache_inst M_mem_va", false,-1, 31,0);
        tracep->declBus(c+16,"mycpu_top d_cache_inst M_fence_addr", false,-1, 31,0);
        tracep->declBit(c+15,"mycpu_top d_cache_inst M_fence_d", false,-1);
        tracep->declBit(c+31,"mycpu_top d_cache_inst M_mem_en", false,-1);
        tracep->declBit(c+1048,"mycpu_top d_cache_inst M_mem_write", false,-1);
        tracep->declBus(c+36,"mycpu_top d_cache_inst M_wmask", false,-1, 3,0);
        tracep->declBus(c+35,"mycpu_top d_cache_inst M_mem_size", false,-1, 1,0);
        tracep->declBus(c+37,"mycpu_top d_cache_inst M_wdata", false,-1, 31,0);
        tracep->declBus(c+34,"mycpu_top d_cache_inst M_rdata", false,-1, 31,0);
        tracep->declBus(c+60,"mycpu_top d_cache_inst dtlb_vpn2", false,-1, 31,13);
        tracep->declBit(c+61,"mycpu_top d_cache_inst dtlb_found", false,-1);
        tracep->declBit(c+62,"mycpu_top d_cache_inst dtlb_entry\206 G", false,-1);
        tracep->declBit(c+63,"mycpu_top d_cache_inst dtlb_entry\206 V0", false,-1);
        tracep->declBit(c+64,"mycpu_top d_cache_inst dtlb_entry\206 V1", false,-1);
        tracep->declBit(c+65,"mycpu_top d_cache_inst dtlb_entry\206 D0", false,-1);
        tracep->declBit(c+66,"mycpu_top d_cache_inst dtlb_entry\206 D1", false,-1);
        tracep->declBit(c+67,"mycpu_top d_cache_inst dtlb_entry\206 C0", false,-1);
        tracep->declBit(c+68,"mycpu_top d_cache_inst dtlb_entry\206 C1", false,-1);
        tracep->declBus(c+69,"mycpu_top d_cache_inst dtlb_entry\206 PFN0", false,-1, 19,0);
        tracep->declBus(c+70,"mycpu_top d_cache_inst dtlb_entry\206 PFN1", false,-1, 19,0);
        tracep->declBus(c+71,"mycpu_top d_cache_inst dtlb_entry\206 VPN2", false,-1, 18,0);
        tracep->declBus(c+72,"mycpu_top d_cache_inst dtlb_entry\206 ASID", false,-1, 7,0);
        tracep->declBit(c+73,"mycpu_top d_cache_inst fence_tlb", false,-1);
        tracep->declBit(c+74,"mycpu_top d_cache_inst data_tlb_refill", false,-1);
        tracep->declBit(c+75,"mycpu_top d_cache_inst data_tlb_invalid", false,-1);
        tracep->declBit(c+76,"mycpu_top d_cache_inst data_tlb_mod", false,-1);
        tracep->declBus(c+47,"mycpu_top d_cache_inst araddr", false,-1, 31,0);
        tracep->declBus(c+48,"mycpu_top d_cache_inst arlen", false,-1, 7,0);
        tracep->declBus(c+49,"mycpu_top d_cache_inst arsize", false,-1, 2,0);
        tracep->declBit(c+50,"mycpu_top d_cache_inst arvalid", false,-1);
        tracep->declBit(c+1187,"mycpu_top d_cache_inst arready", false,-1);
        tracep->declBus(c+1188,"mycpu_top d_cache_inst rdata", false,-1, 31,0);
        tracep->declBit(c+1189,"mycpu_top d_cache_inst rlast", false,-1);
        tracep->declBit(c+1190,"mycpu_top d_cache_inst rvalid", false,-1);
        tracep->declBit(c+51,"mycpu_top d_cache_inst rready", false,-1);
        tracep->declBus(c+52,"mycpu_top d_cache_inst awaddr", false,-1, 31,0);
        tracep->declBus(c+53,"mycpu_top d_cache_inst awlen", false,-1, 7,0);
        tracep->declBus(c+54,"mycpu_top d_cache_inst awsize", false,-1, 2,0);
        tracep->declBit(c+55,"mycpu_top d_cache_inst awvalid", false,-1);
        tracep->declBit(c+1309,"mycpu_top d_cache_inst awready", false,-1);
        tracep->declBus(c+56,"mycpu_top d_cache_inst wdata", false,-1, 31,0);
        tracep->declBus(c+57,"mycpu_top d_cache_inst wstrb", false,-1, 3,0);
        tracep->declBit(c+58,"mycpu_top d_cache_inst wlast", false,-1);
        tracep->declBit(c+59,"mycpu_top d_cache_inst wvalid", false,-1);
        tracep->declBit(c+1315,"mycpu_top d_cache_inst wready", false,-1);
        tracep->declBit(c+1318,"mycpu_top d_cache_inst bvalid", false,-1);
        tracep->declBit(c+1337,"mycpu_top d_cache_inst bready", false,-1);
        tracep->declBus(c+1049,"mycpu_top d_cache_inst dtlb\206 vpn", false,-1, 31,12);
        tracep->declBus(c+1050,"mycpu_top d_cache_inst dtlb\206 ppn", false,-1, 31,12);
        tracep->declBit(c+1051,"mycpu_top d_cache_inst dtlb\206 uncached", false,-1);
        tracep->declBit(c+1052,"mycpu_top d_cache_inst dtlb\206 dirty", false,-1);
        tracep->declBit(c+1053,"mycpu_top d_cache_inst dtlb\206 valid", false,-1);
        tracep->declBit(c+1054,"mycpu_top d_cache_inst direct_mapped", false,-1);
        tracep->declBit(c+1055,"mycpu_top d_cache_inst M_mem_uncached", false,-1);
        tracep->declBus(c+1056,"mycpu_top d_cache_inst data_tag", false,-1, 31,12);
        tracep->declBus(c+1057,"mycpu_top d_cache_inst data_vpn", false,-1, 31,12);
        tracep->declBus(c+1058,"mycpu_top d_cache_inst M_mem_pa", false,-1, 31,0);
        tracep->declBit(c+1059,"mycpu_top d_cache_inst l1tlb_ok", false,-1);
        tracep->declBit(c+1060,"mycpu_top d_cache_inst translation_ok", false,-1);
        tracep->declBus(c+1387,"mycpu_top d_cache_inst LEN_PER_WAY", false,-1, 31,0);
        tracep->declBus(c+1388,"mycpu_top d_cache_inst LEN_TAG", false,-1, 31,0);
        tracep->declBus(c+1389,"mycpu_top d_cache_inst LEN_BRAM_ADDR", false,-1, 31,0);
        tracep->declBus(c+1390,"mycpu_top d_cache_inst NR_LINES", false,-1, 31,0);
        tracep->declBus(c+1391,"mycpu_top d_cache_inst NR_WORDS", false,-1, 31,0);
        tracep->declBus(c+1061,"mycpu_top d_cache_inst dcache_status", false,-1, 31,0);
        tracep->declBus(c+1062,"mycpu_top d_cache_inst store_buffer(0)\206 waddr", false,-1, 31,0);
        tracep->declBus(c+1063,"mycpu_top d_cache_inst store_buffer(0)\206 wsize", false,-1, 1,0);
        tracep->declBus(c+1064,"mycpu_top d_cache_inst store_buffer(0)\206 wstrb", false,-1, 3,0);
        tracep->declBus(c+1065,"mycpu_top d_cache_inst store_buffer(0)\206 wdata", false,-1, 31,0);
        tracep->declBus(c+1066,"mycpu_top d_cache_inst store_buffer(1)\206 waddr", false,-1, 31,0);
        tracep->declBus(c+1067,"mycpu_top d_cache_inst store_buffer(1)\206 wsize", false,-1, 1,0);
        tracep->declBus(c+1068,"mycpu_top d_cache_inst store_buffer(1)\206 wstrb", false,-1, 3,0);
        tracep->declBus(c+1069,"mycpu_top d_cache_inst store_buffer(1)\206 wdata", false,-1, 31,0);
        tracep->declBus(c+1070,"mycpu_top d_cache_inst store_buffer(2)\206 waddr", false,-1, 31,0);
        tracep->declBus(c+1071,"mycpu_top d_cache_inst store_buffer(2)\206 wsize", false,-1, 1,0);
        tracep->declBus(c+1072,"mycpu_top d_cache_inst store_buffer(2)\206 wstrb", false,-1, 3,0);
        tracep->declBus(c+1073,"mycpu_top d_cache_inst store_buffer(2)\206 wdata", false,-1, 31,0);
        tracep->declBus(c+1074,"mycpu_top d_cache_inst store_buffer(3)\206 waddr", false,-1, 31,0);
        tracep->declBus(c+1075,"mycpu_top d_cache_inst store_buffer(3)\206 wsize", false,-1, 1,0);
        tracep->declBus(c+1076,"mycpu_top d_cache_inst store_buffer(3)\206 wstrb", false,-1, 3,0);
        tracep->declBus(c+1077,"mycpu_top d_cache_inst store_buffer(3)\206 wdata", false,-1, 31,0);
        tracep->declBus(c+1078,"mycpu_top d_cache_inst store_buffer_ctrl\206 ptr_begin", false,-1, 1,0);
        tracep->declBus(c+1079,"mycpu_top d_cache_inst store_buffer_ctrl\206 ptr_end", false,-1, 1,0);
        tracep->declBit(c+1080,"mycpu_top d_cache_inst store_buffer_ctrl\206 axi_busy", false,-1);
        tracep->declBit(c+1081,"mycpu_top d_cache_inst current_mmio_write_saved", false,-1);
        tracep->declBit(c+1082,"mycpu_top d_cache_inst store_buffer_has_next", false,-1);
        tracep->declBit(c+1083,"mycpu_top d_cache_inst store_buffer_busy", false,-1);
        tracep->declBit(c+1084,"mycpu_top d_cache_inst store_buffer_full", false,-1);
        tracep->declBus(c+1085,"mycpu_top d_cache_inst fence_line_addr", false,-1, 11,6);
        tracep->declBus(c+1086,"mycpu_top d_cache_inst axi_wcnt", false,-1, 5,2);
        tracep->declBus(c+1087,"mycpu_top d_cache_inst bram_replace_addr", false,-1, 11,2);
        tracep->declBus(c+1088,"mycpu_top d_cache_inst bram_read_ready_addr", false,-1, 11,2);
        tracep->declBus(c+1089,"mycpu_top d_cache_inst bram_replace_write_addr", false,-1, 11,2);
        tracep->declBus(c+1090,"mycpu_top d_cache_inst bram_replace_cnt", false,-1, 4,0);
        {int i; for (i=0; i<16; i++) {
                tracep->declBus(c+1091+i*1,"mycpu_top d_cache_inst bram_r_buffer", true,(i+0), 31,0);}}
        tracep->declBit(c+1107,"mycpu_top d_cache_inst bram_use_replace_addr", false,-1);
        tracep->declBit(c+1108,"mycpu_top d_cache_inst bram_data_valid", false,-1);
        tracep->declBit(c+1109,"mycpu_top d_cache_inst fence_working", false,-1);
        tracep->declBit(c+1110,"mycpu_top d_cache_inst replace_working", false,-1);
        tracep->declBit(c+1111,"mycpu_top d_cache_inst ar_handshake", false,-1);
        tracep->declBit(c+1112,"mycpu_top d_cache_inst aw_handshake", false,-1);
        tracep->declBit(c+1113,"mycpu_top d_cache_inst replace_writeback", false,-1);
        tracep->declBit(c+1114,"mycpu_top d_cache_inst fence_way", false,-1);
        {int i; for (i=0; i<2; i++) {
                tracep->declBit(c+1115+i*1,"mycpu_top d_cache_inst tag_wea", true,(i+0));}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+1117+i*1,"mycpu_top d_cache_inst bram_replace_wea", true,(i+0), 3,0);}}
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+1119+i*1,"mycpu_top d_cache_inst data_wea", true,(i+0), 3,0);}}
        tracep->declBus(c+1121,"mycpu_top d_cache_inst tag_ram_wdata\206 tag", false,-1, 19,0);
        tracep->declBus(c+1122,"mycpu_top d_cache_inst addr_tag", false,-1, 31,12);
        tracep->declBit(c+1123,"mycpu_top d_cache_inst bram_addr_choose", false,-1);
        tracep->declBus(c+1124,"mycpu_top d_cache_inst bram_word_addr", false,-1, 11,2);
        tracep->declBus(c+1125,"mycpu_top d_cache_inst bram_line_addr", false,-1, 11,6);
        tracep->declBus(c+1126,"mycpu_top d_cache_inst data_write_addr", false,-1, 11,2);
        tracep->declBit(c+1127,"mycpu_top d_cache_inst data_bram_wdata_sel", false,-1);
        tracep->declBus(c+1280,"mycpu_top d_cache_inst data_bram_wdata", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+1128+i*1,"mycpu_top d_cache_inst cache_data", true,(i+0), 31,0);}}
        tracep->declBus(c+1130,"mycpu_top d_cache_inst cache_tag(0)\206 tag", false,-1, 19,0);
        tracep->declBus(c+1131,"mycpu_top d_cache_inst cache_tag(1)\206 tag", false,-1, 19,0);
        tracep->declBus(c+1132,"mycpu_top d_cache_inst tag_compare_valid", false,-1, 1,0);
        tracep->declBit(c+1133,"mycpu_top d_cache_inst cache_hit", false,-1);
        tracep->declBit(c+1134,"mycpu_top d_cache_inst mmio_read_stall", false,-1);
        tracep->declBit(c+1135,"mycpu_top d_cache_inst mmio_write_stall", false,-1);
        tracep->declBit(c+1136,"mycpu_top d_cache_inst cached_stall", false,-1);
        tracep->declBit(c+1137,"mycpu_top d_cache_inst tlb_stall", false,-1);
        tracep->declBit(c+1138,"mycpu_top d_cache_inst d_cache_sel", false,-1);
        tracep->declBus(c+1139,"mycpu_top d_cache_inst pa_line_addr", false,-1, 11,6);
        tracep->declBus(c+1140,"mycpu_top d_cache_inst saved_rdata", false,-1, 31,0);
        tracep->declBus(c+1141,"mycpu_top d_cache_inst last_line_addr", false,-1, 11,2);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+1142+i*1,"mycpu_top d_cache_inst last_wea", true,(i+0), 31,0);}}
        tracep->declBus(c+1144,"mycpu_top d_cache_inst last_wdata", false,-1, 31,0);
        {int i; for (i=0; i<2; i++) {
                tracep->declBus(c+1145+i*1,"mycpu_top d_cache_inst cache_data_forward", true,(i+0), 31,0);}}
        tracep->declBus(c+1393,"mycpu_top d_cache_inst genblk1[0] d_data LEN_DATA", false,-1, 31,0);
        tracep->declBus(c+1394,"mycpu_top d_cache_inst genblk1[0] d_data LEN_ADDR", false,-1, 31,0);
        tracep->declBit(c+1281,"mycpu_top d_cache_inst genblk1[0] d_data clka", false,-1);
        tracep->declBit(c+1281,"mycpu_top d_cache_inst genblk1[0] d_data clkb", false,-1);
        tracep->declBit(c+1337,"mycpu_top d_cache_inst genblk1[0] d_data ena", false,-1);
        tracep->declBit(c+1337,"mycpu_top d_cache_inst genblk1[0] d_data enb", false,-1);
        tracep->declBus(c+1147,"mycpu_top d_cache_inst genblk1[0] d_data wea", false,-1, 3,0);
        tracep->declBus(c+1126,"mycpu_top d_cache_inst genblk1[0] d_data addra", false,-1, 9,0);
        tracep->declBus(c+1124,"mycpu_top d_cache_inst genblk1[0] d_data addrb", false,-1, 9,0);
        tracep->declBus(c+1280,"mycpu_top d_cache_inst genblk1[0] d_data dina", false,-1, 31,0);
        tracep->declBus(c+1148,"mycpu_top d_cache_inst genblk1[0] d_data doutb", false,-1, 31,0);
        tracep->declBus(c+1395,"mycpu_top d_cache_inst genblk1[0] d_data DEPTH", false,-1, 31,0);
        tracep->declBus(c+5,"mycpu_top d_cache_inst genblk1[0] d_data j", false,-1, 31,0);
        tracep->declBus(c+1388,"mycpu_top d_cache_inst genblk1[0] d_tag LEN_DATA", false,-1, 31,0);
        tracep->declBus(c+1349,"mycpu_top d_cache_inst genblk1[0] d_tag LEN_ADDR", false,-1, 31,0);
        tracep->declBit(c+1281,"mycpu_top d_cache_inst genblk1[0] d_tag clka", false,-1);
        tracep->declBit(c+1281,"mycpu_top d_cache_inst genblk1[0] d_tag clkb", false,-1);
        tracep->declBit(c+1337,"mycpu_top d_cache_inst genblk1[0] d_tag ena", false,-1);
        tracep->declBit(c+1337,"mycpu_top d_cache_inst genblk1[0] d_tag enb", false,-1);
        tracep->declBit(c+1149,"mycpu_top d_cache_inst genblk1[0] d_tag wea", false,-1);
        tracep->declBus(c+1150,"mycpu_top d_cache_inst genblk1[0] d_tag addra", false,-1, 5,0);
        tracep->declBus(c+1125,"mycpu_top d_cache_inst genblk1[0] d_tag addrb", false,-1, 5,0);
        tracep->declBus(c+1151,"mycpu_top d_cache_inst genblk1[0] d_tag dina", false,-1, 19,0);
        tracep->declBus(c+1152,"mycpu_top d_cache_inst genblk1[0] d_tag doutb", false,-1, 19,0);
        tracep->declBus(c+1390,"mycpu_top d_cache_inst genblk1[0] d_tag DEPTH", false,-1, 31,0);
        tracep->declBus(c+6,"mycpu_top d_cache_inst genblk1[0] d_tag j", false,-1, 31,0);
        tracep->declBus(c+1393,"mycpu_top d_cache_inst genblk1[1] d_data LEN_DATA", false,-1, 31,0);
        tracep->declBus(c+1394,"mycpu_top d_cache_inst genblk1[1] d_data LEN_ADDR", false,-1, 31,0);
        tracep->declBit(c+1281,"mycpu_top d_cache_inst genblk1[1] d_data clka", false,-1);
        tracep->declBit(c+1281,"mycpu_top d_cache_inst genblk1[1] d_data clkb", false,-1);
        tracep->declBit(c+1337,"mycpu_top d_cache_inst genblk1[1] d_data ena", false,-1);
        tracep->declBit(c+1337,"mycpu_top d_cache_inst genblk1[1] d_data enb", false,-1);
        tracep->declBus(c+1153,"mycpu_top d_cache_inst genblk1[1] d_data wea", false,-1, 3,0);
        tracep->declBus(c+1126,"mycpu_top d_cache_inst genblk1[1] d_data addra", false,-1, 9,0);
        tracep->declBus(c+1124,"mycpu_top d_cache_inst genblk1[1] d_data addrb", false,-1, 9,0);
        tracep->declBus(c+1280,"mycpu_top d_cache_inst genblk1[1] d_data dina", false,-1, 31,0);
        tracep->declBus(c+1154,"mycpu_top d_cache_inst genblk1[1] d_data doutb", false,-1, 31,0);
        tracep->declBus(c+1395,"mycpu_top d_cache_inst genblk1[1] d_data DEPTH", false,-1, 31,0);
        tracep->declBus(c+7,"mycpu_top d_cache_inst genblk1[1] d_data j", false,-1, 31,0);
        tracep->declBus(c+1388,"mycpu_top d_cache_inst genblk1[1] d_tag LEN_DATA", false,-1, 31,0);
        tracep->declBus(c+1349,"mycpu_top d_cache_inst genblk1[1] d_tag LEN_ADDR", false,-1, 31,0);
        tracep->declBit(c+1281,"mycpu_top d_cache_inst genblk1[1] d_tag clka", false,-1);
        tracep->declBit(c+1281,"mycpu_top d_cache_inst genblk1[1] d_tag clkb", false,-1);
        tracep->declBit(c+1337,"mycpu_top d_cache_inst genblk1[1] d_tag ena", false,-1);
        tracep->declBit(c+1337,"mycpu_top d_cache_inst genblk1[1] d_tag enb", false,-1);
        tracep->declBit(c+1155,"mycpu_top d_cache_inst genblk1[1] d_tag wea", false,-1);
        tracep->declBus(c+1150,"mycpu_top d_cache_inst genblk1[1] d_tag addra", false,-1, 5,0);
        tracep->declBus(c+1125,"mycpu_top d_cache_inst genblk1[1] d_tag addrb", false,-1, 5,0);
        tracep->declBus(c+1151,"mycpu_top d_cache_inst genblk1[1] d_tag dina", false,-1, 19,0);
        tracep->declBus(c+1156,"mycpu_top d_cache_inst genblk1[1] d_tag doutb", false,-1, 19,0);
        tracep->declBus(c+1390,"mycpu_top d_cache_inst genblk1[1] d_tag DEPTH", false,-1, 31,0);
        tracep->declBus(c+8,"mycpu_top d_cache_inst genblk1[1] d_tag j", false,-1, 31,0);
        tracep->declBit(c+1281,"mycpu_top u_arbitrater clk", false,-1);
        tracep->declBit(c+1329,"mycpu_top u_arbitrater rst", false,-1);
        tracep->declBus(c+42,"mycpu_top u_arbitrater i_araddr", false,-1, 31,0);
        tracep->declBus(c+43,"mycpu_top u_arbitrater i_arlen", false,-1, 7,0);
        tracep->declBus(c+44,"mycpu_top u_arbitrater i_arsize", false,-1, 2,0);
        tracep->declBit(c+45,"mycpu_top u_arbitrater i_arvalid", false,-1);
        tracep->declBit(c+1184,"mycpu_top u_arbitrater i_arready", false,-1);
        tracep->declBus(c+1185,"mycpu_top u_arbitrater i_rdata", false,-1, 31,0);
        tracep->declBit(c+1330,"mycpu_top u_arbitrater i_rlast", false,-1);
        tracep->declBit(c+1186,"mycpu_top u_arbitrater i_rvalid", false,-1);
        tracep->declBit(c+46,"mycpu_top u_arbitrater i_rready", false,-1);
        tracep->declBus(c+47,"mycpu_top u_arbitrater d_araddr", false,-1, 31,0);
        tracep->declBus(c+48,"mycpu_top u_arbitrater d_arlen", false,-1, 7,0);
        tracep->declBus(c+49,"mycpu_top u_arbitrater d_arsize", false,-1, 2,0);
        tracep->declBit(c+50,"mycpu_top u_arbitrater d_arvalid", false,-1);
        tracep->declBit(c+1187,"mycpu_top u_arbitrater d_arready", false,-1);
        tracep->declBus(c+1188,"mycpu_top u_arbitrater d_rdata", false,-1, 31,0);
        tracep->declBit(c+1189,"mycpu_top u_arbitrater d_rlast", false,-1);
        tracep->declBit(c+1190,"mycpu_top u_arbitrater d_rvalid", false,-1);
        tracep->declBit(c+51,"mycpu_top u_arbitrater d_rready", false,-1);
        tracep->declBus(c+52,"mycpu_top u_arbitrater d_awaddr", false,-1, 31,0);
        tracep->declBus(c+53,"mycpu_top u_arbitrater d_awlen", false,-1, 7,0);
        tracep->declBus(c+54,"mycpu_top u_arbitrater d_awsize", false,-1, 2,0);
        tracep->declBit(c+55,"mycpu_top u_arbitrater d_awvalid", false,-1);
        tracep->declBit(c+1309,"mycpu_top u_arbitrater d_awready", false,-1);
        tracep->declBus(c+56,"mycpu_top u_arbitrater d_wdata", false,-1, 31,0);
        tracep->declBus(c+57,"mycpu_top u_arbitrater d_wstrb", false,-1, 3,0);
        tracep->declBit(c+58,"mycpu_top u_arbitrater d_wlast", false,-1);
        tracep->declBit(c+59,"mycpu_top u_arbitrater d_wvalid", false,-1);
        tracep->declBit(c+1315,"mycpu_top u_arbitrater d_wready", false,-1);
        tracep->declBit(c+1318,"mycpu_top u_arbitrater d_bvalid", false,-1);
        tracep->declBit(c+1337,"mycpu_top u_arbitrater d_bready", false,-1);
        tracep->declBus(c+1284,"mycpu_top u_arbitrater arid", false,-1, 3,0);
        tracep->declBus(c+1285,"mycpu_top u_arbitrater araddr", false,-1, 31,0);
        tracep->declBus(c+1286,"mycpu_top u_arbitrater arlen", false,-1, 7,0);
        tracep->declBus(c+1287,"mycpu_top u_arbitrater arsize", false,-1, 2,0);
        tracep->declBus(c+1288,"mycpu_top u_arbitrater arburst", false,-1, 1,0);
        tracep->declBus(c+1289,"mycpu_top u_arbitrater arlock", false,-1, 1,0);
        tracep->declBus(c+1290,"mycpu_top u_arbitrater arcache", false,-1, 3,0);
        tracep->declBus(c+1291,"mycpu_top u_arbitrater arprot", false,-1, 2,0);
        tracep->declBit(c+1292,"mycpu_top u_arbitrater arvalid", false,-1);
        tracep->declBit(c+1293,"mycpu_top u_arbitrater arready", false,-1);
        tracep->declBus(c+1294,"mycpu_top u_arbitrater rid", false,-1, 3,0);
        tracep->declBus(c+1295,"mycpu_top u_arbitrater rdata", false,-1, 31,0);
        tracep->declBus(c+1296,"mycpu_top u_arbitrater rresp", false,-1, 1,0);
        tracep->declBit(c+1297,"mycpu_top u_arbitrater rlast", false,-1);
        tracep->declBit(c+1298,"mycpu_top u_arbitrater rvalid", false,-1);
        tracep->declBit(c+1299,"mycpu_top u_arbitrater rready", false,-1);
        tracep->declBus(c+1300,"mycpu_top u_arbitrater awid", false,-1, 3,0);
        tracep->declBus(c+1301,"mycpu_top u_arbitrater awaddr", false,-1, 31,0);
        tracep->declBus(c+1302,"mycpu_top u_arbitrater awlen", false,-1, 7,0);
        tracep->declBus(c+1303,"mycpu_top u_arbitrater awsize", false,-1, 2,0);
        tracep->declBus(c+1304,"mycpu_top u_arbitrater awburst", false,-1, 1,0);
        tracep->declBus(c+1305,"mycpu_top u_arbitrater awlock", false,-1, 1,0);
        tracep->declBus(c+1306,"mycpu_top u_arbitrater awcache", false,-1, 3,0);
        tracep->declBus(c+1307,"mycpu_top u_arbitrater awprot", false,-1, 2,0);
        tracep->declBit(c+1308,"mycpu_top u_arbitrater awvalid", false,-1);
        tracep->declBit(c+1309,"mycpu_top u_arbitrater awready", false,-1);
        tracep->declBus(c+1310,"mycpu_top u_arbitrater wid", false,-1, 3,0);
        tracep->declBus(c+1311,"mycpu_top u_arbitrater wdata", false,-1, 31,0);
        tracep->declBus(c+1312,"mycpu_top u_arbitrater wstrb", false,-1, 3,0);
        tracep->declBit(c+1313,"mycpu_top u_arbitrater wlast", false,-1);
        tracep->declBit(c+1314,"mycpu_top u_arbitrater wvalid", false,-1);
        tracep->declBit(c+1315,"mycpu_top u_arbitrater wready", false,-1);
        tracep->declBus(c+1316,"mycpu_top u_arbitrater bid", false,-1, 3,0);
        tracep->declBus(c+1317,"mycpu_top u_arbitrater bresp", false,-1, 1,0);
        tracep->declBit(c+1318,"mycpu_top u_arbitrater bvalid", false,-1);
        tracep->declBit(c+1319,"mycpu_top u_arbitrater bready", false,-1);
        tracep->declBit(c+1157,"mycpu_top u_arbitrater ar_sel", false,-1);
        tracep->declBit(c+1158,"mycpu_top u_arbitrater ar_sel_lock", false,-1);
        tracep->declBit(c+1159,"mycpu_top u_arbitrater ar_sel_lock_val", false,-1);
        tracep->declBit(c+1332,"mycpu_top u_arbitrater r_sel", false,-1);
        tracep->declBus(c+1396,"$unit NR_TLB_ENTRY", false,-1, 31,0);
    }
}

void Vmycpu_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) VL_ATTR_COLD;
void Vmycpu_top___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep);
void Vmycpu_top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/);

void Vmycpu_top___024root__traceRegister(Vmycpu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        tracep->addFullCb(&Vmycpu_top___024root__traceFullTop0, vlSelf);
        tracep->addChgCb(&Vmycpu_top___024root__traceChgTop0, vlSelf);
        tracep->addCleanupCb(&Vmycpu_top___024root__traceCleanup, vlSelf);
    }
}

void Vmycpu_top___024root__traceFullSub0(Vmycpu_top___024root* vlSelf, VerilatedVcd* tracep) VL_ATTR_COLD;

void Vmycpu_top___024root__traceFullTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vmycpu_top___024root* const __restrict vlSelf = static_cast<Vmycpu_top___024root*>(voidSelf);
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        Vmycpu_top___024root__traceFullSub0((&vlSymsp->TOP), tracep);
    }
}

void Vmycpu_top___024root__traceFullSub0(Vmycpu_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vmycpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<3>/*95:0*/ __Vtemp332;
    VlWide<3>/*95:0*/ __Vtemp333;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->fullIData(oldp+1,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_data__DOT__j),32);
        tracep->fullIData(oldp+2,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__0__KET____DOT__i_tag__DOT__j),32);
        tracep->fullIData(oldp+3,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_data__DOT__j),32);
        tracep->fullIData(oldp+4,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__genblk1__BRA__1__KET____DOT__i_tag__DOT__j),32);
        tracep->fullIData(oldp+5,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_data__DOT__j),32);
        tracep->fullIData(oldp+6,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__0__KET____DOT__d_tag__DOT__j),32);
        tracep->fullIData(oldp+7,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_data__DOT__j),32);
        tracep->fullIData(oldp+8,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__genblk1__BRA__1__KET____DOT__d_tag__DOT__j),32);
        tracep->fullIData(oldp+9,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg),32);
        tracep->fullBit(oldp+10,(vlSelf->mycpu_top__DOT__inst_tlb_refill));
        tracep->fullBit(oldp+11,(vlSelf->mycpu_top__DOT__inst_tlb_invalid));
        tracep->fullIData(oldp+12,(vlSelf->mycpu_top__DOT__inst_rdata1),32);
        tracep->fullIData(oldp+13,(vlSelf->mycpu_top__DOT__inst_rdata2),32);
        tracep->fullBit(oldp+14,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                        >> 4U))));
        tracep->fullBit(oldp+15,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs 
                                        >> 3U))));
        tracep->fullIData(oldp+16,(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_alu_res),32);
        tracep->fullBit(oldp+17,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                        >> 2U))));
        tracep->fullIData(oldp+18,(vlSelf->mycpu_top__DOT__itlb_vpn2),19);
        tracep->fullBit(oldp+19,((0U != vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
                                  [1U])));
        tracep->fullBit(oldp+20,((1U & (vlSelf->mycpu_top__DOT__itlb_entry[2U] 
                                        >> 9U))));
        tracep->fullBit(oldp+21,((1U & (vlSelf->mycpu_top__DOT__itlb_entry[2U] 
                                        >> 8U))));
        tracep->fullBit(oldp+22,((1U & (vlSelf->mycpu_top__DOT__itlb_entry[2U] 
                                        >> 7U))));
        tracep->fullBit(oldp+23,((1U & (vlSelf->mycpu_top__DOT__itlb_entry[2U] 
                                        >> 6U))));
        tracep->fullBit(oldp+24,((1U & (vlSelf->mycpu_top__DOT__itlb_entry[2U] 
                                        >> 5U))));
        tracep->fullBit(oldp+25,((1U & (vlSelf->mycpu_top__DOT__itlb_entry[2U] 
                                        >> 4U))));
        tracep->fullBit(oldp+26,((1U & (vlSelf->mycpu_top__DOT__itlb_entry[2U] 
                                        >> 3U))));
        tracep->fullIData(oldp+27,((0xfffffU & ((vlSelf->mycpu_top__DOT__itlb_entry[2U] 
                                                 << 0x11U) 
                                                | (vlSelf->mycpu_top__DOT__itlb_entry[1U] 
                                                   >> 0xfU)))),20);
        tracep->fullIData(oldp+28,((0xfffffU & ((vlSelf->mycpu_top__DOT__itlb_entry[1U] 
                                                 << 5U) 
                                                | (vlSelf->mycpu_top__DOT__itlb_entry[0U] 
                                                   >> 0x1bU)))),20);
        tracep->fullIData(oldp+29,((0x7ffffU & (vlSelf->mycpu_top__DOT__itlb_entry[0U] 
                                                >> 8U))),19);
        tracep->fullCData(oldp+30,((0xffU & vlSelf->mycpu_top__DOT__itlb_entry[0U])),8);
        tracep->fullBit(oldp+31,(vlSelf->mycpu_top__DOT__data_en));
        tracep->fullIData(oldp+32,(vlSelf->mycpu_top__DOT__data_addr),32);
        tracep->fullIData(oldp+33,(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_addrM),32);
        tracep->fullIData(oldp+34,(vlSelf->mycpu_top__DOT__data_rdata),32);
        tracep->fullCData(oldp+35,(vlSelf->mycpu_top__DOT__data_rlen),2);
        tracep->fullCData(oldp+36,(vlSelf->mycpu_top__DOT__data_wen),4);
        tracep->fullIData(oldp+37,(vlSelf->mycpu_top__DOT__data_wdata),32);
        tracep->fullBit(oldp+38,(vlSelf->mycpu_top__DOT__d_cache_stall));
        tracep->fullIData(oldp+39,(vlSelf->mycpu_top__DOT__mem_addrE_dp),32);
        tracep->fullBit(oldp+40,((((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_mem_sel) 
                                   & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                      >> 0xcU)) | ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_mem_sel) 
                                                   & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                                      >> 0xcU)))));
        tracep->fullBit(oldp+41,((((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_mem_sel) 
                                   & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                      >> 0xbU)) | ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_mem_sel) 
                                                   & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                                      >> 0xbU)))));
        tracep->fullIData(oldp+42,(vlSelf->mycpu_top__DOT__i_araddr),32);
        tracep->fullCData(oldp+43,(vlSelf->mycpu_top__DOT__i_arlen),8);
        tracep->fullCData(oldp+44,(vlSelf->mycpu_top__DOT__i_arsize),3);
        tracep->fullBit(oldp+45,(vlSelf->mycpu_top__DOT__i_arvalid));
        tracep->fullBit(oldp+46,(vlSelf->mycpu_top__DOT__i_rready));
        tracep->fullIData(oldp+47,(vlSelf->mycpu_top__DOT__d_araddr),32);
        tracep->fullCData(oldp+48,(vlSelf->mycpu_top__DOT__d_arlen),8);
        tracep->fullCData(oldp+49,(vlSelf->mycpu_top__DOT__d_arsize),3);
        tracep->fullBit(oldp+50,(vlSelf->mycpu_top__DOT__d_arvalid));
        tracep->fullBit(oldp+51,(vlSelf->mycpu_top__DOT__d_rready));
        tracep->fullIData(oldp+52,(vlSelf->mycpu_top__DOT__d_awaddr),32);
        tracep->fullCData(oldp+53,(vlSelf->mycpu_top__DOT__d_awlen),8);
        tracep->fullCData(oldp+54,(vlSelf->mycpu_top__DOT__d_awsize),3);
        tracep->fullBit(oldp+55,(vlSelf->mycpu_top__DOT__d_awvalid));
        tracep->fullIData(oldp+56,(vlSelf->mycpu_top__DOT__d_wdata),32);
        tracep->fullCData(oldp+57,(vlSelf->mycpu_top__DOT__d_wstrb),4);
        tracep->fullBit(oldp+58,(vlSelf->mycpu_top__DOT__d_wlast));
        tracep->fullBit(oldp+59,(vlSelf->mycpu_top__DOT__d_wvalid));
        tracep->fullIData(oldp+60,(vlSelf->mycpu_top__DOT__dtlb_vpn2),19);
        tracep->fullBit(oldp+61,((0U != vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched
                                  [2U])));
        tracep->fullBit(oldp+62,((1U & (vlSelf->mycpu_top__DOT__dtlb_entry[2U] 
                                        >> 9U))));
        tracep->fullBit(oldp+63,((1U & (vlSelf->mycpu_top__DOT__dtlb_entry[2U] 
                                        >> 8U))));
        tracep->fullBit(oldp+64,((1U & (vlSelf->mycpu_top__DOT__dtlb_entry[2U] 
                                        >> 7U))));
        tracep->fullBit(oldp+65,((1U & (vlSelf->mycpu_top__DOT__dtlb_entry[2U] 
                                        >> 6U))));
        tracep->fullBit(oldp+66,((1U & (vlSelf->mycpu_top__DOT__dtlb_entry[2U] 
                                        >> 5U))));
        tracep->fullBit(oldp+67,((1U & (vlSelf->mycpu_top__DOT__dtlb_entry[2U] 
                                        >> 4U))));
        tracep->fullBit(oldp+68,((1U & (vlSelf->mycpu_top__DOT__dtlb_entry[2U] 
                                        >> 3U))));
        tracep->fullIData(oldp+69,((0xfffffU & ((vlSelf->mycpu_top__DOT__dtlb_entry[2U] 
                                                 << 0x11U) 
                                                | (vlSelf->mycpu_top__DOT__dtlb_entry[1U] 
                                                   >> 0xfU)))),20);
        tracep->fullIData(oldp+70,((0xfffffU & ((vlSelf->mycpu_top__DOT__dtlb_entry[1U] 
                                                 << 5U) 
                                                | (vlSelf->mycpu_top__DOT__dtlb_entry[0U] 
                                                   >> 0x1bU)))),20);
        tracep->fullIData(oldp+71,((0x7ffffU & (vlSelf->mycpu_top__DOT__dtlb_entry[0U] 
                                                >> 8U))),19);
        tracep->fullCData(oldp+72,((0xffU & vlSelf->mycpu_top__DOT__dtlb_entry[0U])),8);
        tracep->fullBit(oldp+73,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs 
                                        >> 2U))));
        tracep->fullBit(oldp+74,(vlSelf->mycpu_top__DOT__data_tlb_refill));
        tracep->fullBit(oldp+75,(vlSelf->mycpu_top__DOT__data_tlb_invalid));
        tracep->fullBit(oldp+76,(vlSelf->mycpu_top__DOT__data_tlb_mod));
        tracep->fullIData(oldp+77,((IData)((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__count_reg 
                                            >> 1U))),32);
        tracep->fullIData(oldp+78,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__random_reg),32);
        tracep->fullIData(oldp+79,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg),32);
        tracep->fullIData(oldp+80,(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_debug_cp0_count),32);
        tracep->fullIData(oldp+81,(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_debug_cp0_random),32);
        tracep->fullIData(oldp+82,(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_debug_cp0_cause),32);
        tracep->fullBit(oldp+83,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except 
                                        >> 9U))));
        tracep->fullIData(oldp+84,(vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_debug_cp0_count),32);
        tracep->fullIData(oldp+85,(vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_debug_cp0_random),32);
        tracep->fullIData(oldp+86,(vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_debug_cp0_cause),32);
        tracep->fullBit(oldp+87,(vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_debug_int));
        tracep->fullBit(oldp+88,((0U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__data_count))));
        tracep->fullBit(oldp+89,((1U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__data_count))));
        tracep->fullBit(oldp+90,(vlSelf->mycpu_top__DOT__u_datapath__DOT__fifo_full));
        tracep->fullBit(oldp+91,((1U & ((((vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                           | vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs) 
                                          >> 1U) & 
                                         (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_ready))) 
                                        | ((vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                            | vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs) 
                                           & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_ready)))))));
        tracep->fullCData(oldp+92,((0xffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                             >> 0x13U))),8);
        tracep->fullBit(oldp+93,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                        >> 0x12U))));
        tracep->fullBit(oldp+94,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                        >> 0x11U))));
        tracep->fullBit(oldp+95,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                        >> 0x10U))));
        tracep->fullBit(oldp+96,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                        >> 0xfU))));
        tracep->fullBit(oldp+97,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                        >> 0xeU))));
        tracep->fullBit(oldp+98,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                        >> 0xdU))));
        tracep->fullBit(oldp+99,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                        >> 0xcU))));
        tracep->fullBit(oldp+100,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                         >> 0xbU))));
        tracep->fullBit(oldp+101,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                         >> 0xaU))));
        tracep->fullBit(oldp+102,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                         >> 9U))));
        tracep->fullBit(oldp+103,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                         >> 8U))));
        tracep->fullBit(oldp+104,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                         >> 7U))));
        tracep->fullBit(oldp+105,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                         >> 6U))));
        tracep->fullBit(oldp+106,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                         >> 5U))));
        tracep->fullBit(oldp+107,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                         >> 4U))));
        tracep->fullBit(oldp+108,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                         >> 3U))));
        tracep->fullBit(oldp+109,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                         >> 2U))));
        tracep->fullBit(oldp+110,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                         >> 1U))));
        tracep->fullBit(oldp+111,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs)));
        tracep->fullCData(oldp+112,((0xffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                              >> 0x13U))),8);
        tracep->fullBit(oldp+113,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                         >> 0x12U))));
        tracep->fullBit(oldp+114,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                         >> 0x11U))));
        tracep->fullBit(oldp+115,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                         >> 0x10U))));
        tracep->fullBit(oldp+116,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                         >> 0xfU))));
        tracep->fullBit(oldp+117,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                         >> 0xeU))));
        tracep->fullBit(oldp+118,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                         >> 0xdU))));
        tracep->fullBit(oldp+119,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                         >> 0xcU))));
        tracep->fullBit(oldp+120,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                         >> 0xbU))));
        tracep->fullBit(oldp+121,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                         >> 0xaU))));
        tracep->fullBit(oldp+122,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                         >> 9U))));
        tracep->fullBit(oldp+123,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                         >> 8U))));
        tracep->fullBit(oldp+124,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                         >> 7U))));
        tracep->fullBit(oldp+125,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                         >> 6U))));
        tracep->fullBit(oldp+126,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                         >> 5U))));
        tracep->fullBit(oldp+127,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                         >> 4U))));
        tracep->fullBit(oldp+128,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                         >> 3U))));
        tracep->fullBit(oldp+129,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                         >> 2U))));
        tracep->fullBit(oldp+130,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                         >> 1U))));
        tracep->fullBit(oldp+131,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs)));
        tracep->fullCData(oldp+132,((0xffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                              >> 0x13U))),8);
        tracep->fullBit(oldp+133,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                         >> 0x12U))));
        tracep->fullBit(oldp+134,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                         >> 0x11U))));
        tracep->fullBit(oldp+135,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                         >> 0x10U))));
        tracep->fullBit(oldp+136,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                         >> 0xfU))));
        tracep->fullBit(oldp+137,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                         >> 0xeU))));
        tracep->fullBit(oldp+138,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                         >> 0xdU))));
        tracep->fullBit(oldp+139,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                         >> 0xcU))));
        tracep->fullBit(oldp+140,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                         >> 0xbU))));
        tracep->fullBit(oldp+141,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                         >> 0xaU))));
        tracep->fullBit(oldp+142,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                         >> 9U))));
        tracep->fullBit(oldp+143,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                         >> 8U))));
        tracep->fullBit(oldp+144,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                         >> 7U))));
        tracep->fullBit(oldp+145,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                         >> 6U))));
        tracep->fullBit(oldp+146,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                         >> 5U))));
        tracep->fullBit(oldp+147,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                         >> 4U))));
        tracep->fullBit(oldp+148,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                         >> 3U))));
        tracep->fullBit(oldp+149,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                         >> 2U))));
        tracep->fullBit(oldp+150,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                         >> 1U))));
        tracep->fullBit(oldp+151,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)));
        tracep->fullCData(oldp+152,((0xffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                              >> 0x13U))),8);
        tracep->fullBit(oldp+153,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                         >> 0x12U))));
        tracep->fullBit(oldp+154,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                         >> 0x11U))));
        tracep->fullBit(oldp+155,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                         >> 0x10U))));
        tracep->fullBit(oldp+156,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                         >> 0xfU))));
        tracep->fullBit(oldp+157,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                         >> 0xeU))));
        tracep->fullBit(oldp+158,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                         >> 0xdU))));
        tracep->fullBit(oldp+159,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                         >> 0xcU))));
        tracep->fullBit(oldp+160,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                         >> 0xbU))));
        tracep->fullBit(oldp+161,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                         >> 0xaU))));
        tracep->fullBit(oldp+162,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                         >> 9U))));
        tracep->fullBit(oldp+163,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                         >> 8U))));
        tracep->fullBit(oldp+164,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                         >> 7U))));
        tracep->fullBit(oldp+165,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                         >> 6U))));
        tracep->fullBit(oldp+166,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                         >> 5U))));
        tracep->fullBit(oldp+167,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                         >> 4U))));
        tracep->fullBit(oldp+168,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                         >> 3U))));
        tracep->fullBit(oldp+169,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                         >> 2U))));
        tracep->fullBit(oldp+170,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                         >> 1U))));
        tracep->fullBit(oldp+171,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)));
        tracep->fullCData(oldp+172,((0xffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs 
                                              >> 0x13U))),8);
        tracep->fullBit(oldp+173,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs 
                                         >> 0x12U))));
        tracep->fullBit(oldp+174,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs 
                                         >> 0x11U))));
        tracep->fullBit(oldp+175,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs 
                                         >> 0x10U))));
        tracep->fullBit(oldp+176,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs 
                                         >> 0xfU))));
        tracep->fullBit(oldp+177,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs 
                                         >> 0xeU))));
        tracep->fullBit(oldp+178,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs 
                                         >> 0xdU))));
        tracep->fullBit(oldp+179,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs 
                                         >> 0xcU))));
        tracep->fullBit(oldp+180,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs 
                                         >> 0xbU))));
        tracep->fullBit(oldp+181,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs 
                                         >> 0xaU))));
        tracep->fullBit(oldp+182,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs 
                                         >> 9U))));
        tracep->fullBit(oldp+183,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs 
                                         >> 8U))));
        tracep->fullBit(oldp+184,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs 
                                         >> 7U))));
        tracep->fullBit(oldp+185,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs 
                                         >> 6U))));
        tracep->fullBit(oldp+186,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs 
                                         >> 5U))));
        tracep->fullBit(oldp+187,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs 
                                         >> 4U))));
        tracep->fullBit(oldp+188,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs 
                                         >> 3U))));
        tracep->fullBit(oldp+189,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs 
                                         >> 2U))));
        tracep->fullBit(oldp+190,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs 
                                         >> 1U))));
        tracep->fullBit(oldp+191,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M1cs)));
        tracep->fullCData(oldp+192,((0xffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M2cs 
                                              >> 0x13U))),8);
        tracep->fullBit(oldp+193,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M2cs 
                                         >> 0x12U))));
        tracep->fullBit(oldp+194,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M2cs 
                                         >> 0x11U))));
        tracep->fullBit(oldp+195,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M2cs 
                                         >> 0x10U))));
        tracep->fullBit(oldp+196,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M2cs 
                                         >> 0xfU))));
        tracep->fullBit(oldp+197,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M2cs 
                                         >> 0xeU))));
        tracep->fullBit(oldp+198,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M2cs 
                                         >> 0xdU))));
        tracep->fullBit(oldp+199,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M2cs 
                                         >> 0xcU))));
        tracep->fullBit(oldp+200,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M2cs 
                                         >> 0xbU))));
        tracep->fullBit(oldp+201,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M2cs 
                                         >> 0xaU))));
        tracep->fullBit(oldp+202,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M2cs 
                                         >> 9U))));
        tracep->fullBit(oldp+203,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M2cs 
                                         >> 8U))));
        tracep->fullBit(oldp+204,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M2cs 
                                         >> 7U))));
        tracep->fullBit(oldp+205,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M2cs 
                                         >> 6U))));
        tracep->fullBit(oldp+206,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M2cs 
                                         >> 5U))));
        tracep->fullBit(oldp+207,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M2cs 
                                         >> 4U))));
        tracep->fullBit(oldp+208,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M2cs 
                                         >> 3U))));
        tracep->fullBit(oldp+209,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M2cs 
                                         >> 2U))));
        tracep->fullBit(oldp+210,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M2cs 
                                         >> 1U))));
        tracep->fullBit(oldp+211,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M2cs)));
        tracep->fullBit(oldp+212,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                         >> 0xfU))));
        tracep->fullBit(oldp+213,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                         >> 0xfU))));
        tracep->fullBit(oldp+214,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_reg_wen));
        tracep->fullBit(oldp+215,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_reg_wen));
        tracep->fullBit(oldp+216,(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_reg_wen));
        tracep->fullBit(oldp+217,(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_reg_wen));
        tracep->fullBit(oldp+218,(vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_reg_wen));
        tracep->fullBit(oldp+219,(vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_reg_wen));
        tracep->fullIData(oldp+220,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cp0_rdata),32);
        tracep->fullIData(oldp+221,(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_cp0_jump_pc),32);
        tracep->fullBit(oldp+222,((0U != (3U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg))));
        tracep->fullBit(oldp+223,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_cp0_useable));
        tracep->fullBit(oldp+224,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__is_kernel_mode));
        tracep->fullBit(oldp+225,((((vlSelf->mycpu_top__DOT__u_datapath__DOT__D_int_info 
                                     >> 0x10U) & (0U 
                                                  != (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__data_count))) 
                                   & (0U != (0xffU 
                                             & ((vlSelf->mycpu_top__DOT__u_datapath__DOT__D_int_info 
                                                 >> 8U) 
                                                & vlSelf->mycpu_top__DOT__u_datapath__DOT__D_int_info))))));
        tracep->fullBit(oldp+226,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D_int_info 
                                         >> 0x10U))));
        tracep->fullCData(oldp+227,((0xffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D_int_info 
                                              >> 8U))),8);
        tracep->fullCData(oldp+228,((0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__D_int_info)),8);
        tracep->fullBit(oldp+229,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_is_bj));
        tracep->fullBit(oldp+230,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_is_branch));
        tracep->fullBit(oldp+231,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_jump_judge__DOT__jr) 
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
        tracep->fullBit(oldp+232,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_jump_conflict));
        tracep->fullIData(oldp+233,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_branch_target),32);
        tracep->fullIData(oldp+234,(((IData)(4U) + 
                                     vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[1U])),32);
        tracep->fullIData(oldp+235,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[1U]),32);
        tracep->fullIData(oldp+236,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[1U]),32);
        tracep->fullIData(oldp+237,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U]),32);
        tracep->fullIData(oldp+238,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U]),32);
        tracep->fullBit(oldp+239,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[2U] 
                                         >> 1U))));
        tracep->fullBit(oldp+240,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[2U] 
                                         >> 1U))));
        tracep->fullBit(oldp+241,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[2U])));
        tracep->fullBit(oldp+242,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[2U])));
        tracep->fullBit(oldp+243,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_is_in_delayslot));
        tracep->fullBit(oldp+244,((1U & (IData)(((0U 
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
        tracep->fullBit(oldp+245,((1U & (IData)(((0U 
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
        tracep->fullCData(oldp+246,((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                     >> 0x1aU)),6);
        tracep->fullCData(oldp+247,((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                     >> 0x1aU)),6);
        tracep->fullCData(oldp+248,((0x3fU & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])),6);
        tracep->fullCData(oldp+249,((0x3fU & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])),6);
        tracep->fullIData(oldp+250,((0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                              >> 6U))),32);
        tracep->fullIData(oldp+251,((0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                              >> 6U))),32);
        tracep->fullIData(oldp+252,(((3U == (3U & (
                                                   vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                   >> 0x1cU)))
                                      ? (0xffffU & 
                                         vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])
                                      : (((- (IData)(
                                                     (1U 
                                                      & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                         >> 0xfU)))) 
                                          << 0x10U) 
                                         | (0xffffU 
                                            & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U])))),32);
        tracep->fullIData(oldp+253,(((3U == (3U & (
                                                   vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                   >> 0x1cU)))
                                      ? (0xffffU & 
                                         vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])
                                      : (((- (IData)(
                                                     (1U 
                                                      & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                         >> 0xfU)))) 
                                          << 0x10U) 
                                         | (0xffffU 
                                            & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U])))),32);
        tracep->fullBit(oldp+254,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_break_inst));
        tracep->fullBit(oldp+255,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_break_inst));
        tracep->fullBit(oldp+256,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_syscall_inst));
        tracep->fullBit(oldp+257,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_syscall_inst));
        tracep->fullBit(oldp+258,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_eret_inst));
        tracep->fullBit(oldp+259,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_eret_inst));
        tracep->fullBit(oldp+260,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_id_cpu));
        tracep->fullBit(oldp+261,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_id_cpu));
        tracep->fullBit(oldp+262,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_cop0_info) 
                                         >> 0xcU))));
        tracep->fullBit(oldp+263,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_cop0_info) 
                                         >> 0xbU))));
        tracep->fullBit(oldp+264,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_cop0_info) 
                                         >> 0xaU))));
        tracep->fullBit(oldp+265,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_cop0_info) 
                                         >> 9U))));
        tracep->fullBit(oldp+266,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_cop0_info) 
                                         >> 8U))));
        tracep->fullCData(oldp+267,((0x1fU & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_cop0_info) 
                                              >> 3U))),5);
        tracep->fullCData(oldp+268,((7U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_cop0_info))),3);
        tracep->fullBit(oldp+269,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_cop0_info) 
                                         >> 0xcU))));
        tracep->fullBit(oldp+270,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_cop0_info) 
                                         >> 0xbU))));
        tracep->fullBit(oldp+271,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_cop0_info) 
                                         >> 0xaU))));
        tracep->fullBit(oldp+272,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_cop0_info) 
                                         >> 9U))));
        tracep->fullBit(oldp+273,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_cop0_info) 
                                         >> 8U))));
        tracep->fullCData(oldp+274,((0x1fU & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_cop0_info) 
                                              >> 3U))),5);
        tracep->fullCData(oldp+275,((7U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_cop0_info))),3);
        tracep->fullBit(oldp+276,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_undefined_inst));
        tracep->fullBit(oldp+277,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_undefined_inst));
        tracep->fullCData(oldp+278,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_branch_type),4);
        tracep->fullCData(oldp+279,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_branch_type),4);
        tracep->fullCData(oldp+280,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_trap_type),4);
        tracep->fullCData(oldp+281,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_trap_type),4);
        tracep->fullCData(oldp+282,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_cmov_type),2);
        tracep->fullCData(oldp+283,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_cmov_type),2);
        tracep->fullCData(oldp+284,((0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                              >> 0x15U))),5);
        tracep->fullCData(oldp+285,((0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                              >> 0x15U))),5);
        tracep->fullCData(oldp+286,((0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                              >> 0x10U))),5);
        tracep->fullCData(oldp+287,((0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                              >> 0x10U))),5);
        tracep->fullCData(oldp+288,((0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                              >> 0xbU))),5);
        tracep->fullCData(oldp+289,((0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                              >> 0xbU))),5);
        tracep->fullCData(oldp+290,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_reg_waddr),5);
        tracep->fullCData(oldp+291,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_reg_waddr),5);
        tracep->fullBit(oldp+292,((1U & ((0U != (3U 
                                                 & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[1U])) 
                                         | ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[1U] 
                                             >> 0x1fU) 
                                            & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__is_kernel_mode)))))));
        tracep->fullBit(oldp+293,((1U & ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[2U] 
                                          >> 1U) | 
                                         vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[2U]))));
        tracep->fullBit(oldp+294,((1U & ((0U != (3U 
                                                 & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[1U])) 
                                         | ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[1U] 
                                             >> 0x1fU) 
                                            & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__is_kernel_mode)))))));
        tracep->fullBit(oldp+295,((1U & ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[2U] 
                                          >> 1U) | 
                                         vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[2U]))));
        tracep->fullBit(oldp+296,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_id_cpu) 
                                         >> 1U))));
        tracep->fullBit(oldp+297,((1U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_id_cpu))));
        tracep->fullBit(oldp+298,(0U));
        tracep->fullBit(oldp+299,(0U));
        tracep->fullBit(oldp+300,(0U));
        tracep->fullBit(oldp+301,(0U));
        tracep->fullBit(oldp+302,(0U));
        tracep->fullBit(oldp+303,(0U));
        tracep->fullBit(oldp+304,(0U));
        tracep->fullBit(oldp+305,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_id_cpu) 
                                         << 8U))));
        tracep->fullBit(oldp+306,((((((((1U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_trap_type)) 
                                        & (~ (IData)(
                                                     (0U 
                                                      != 
                                                      (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srca 
                                                       ^ vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srcb))))) 
                                       | ((2U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_trap_type)) 
                                          & (0U != 
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
        tracep->fullCData(oldp+307,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_branch_type),4);
        tracep->fullCData(oldp+308,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_trap_type),4);
        tracep->fullBit(oldp+309,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_is_branch));
        tracep->fullBit(oldp+310,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_next_pc8));
        tracep->fullBit(oldp+311,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_pred_take));
        tracep->fullBit(oldp+312,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_actual_take));
        tracep->fullBit(oldp+313,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_pred_fail));
        tracep->fullBit(oldp+314,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_jump_conflict_tmp));
        tracep->fullBit(oldp+315,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_is_link_pc8));
        tracep->fullIData(oldp+316,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_branch_target),32);
        tracep->fullIData(oldp+317,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_pc_plus4),32);
        tracep->fullIData(oldp+318,(((IData)(8U) + vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_pc)),32);
        tracep->fullIData(oldp+319,((((((- (IData)(
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
        tracep->fullCData(oldp+320,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rs),5);
        tracep->fullCData(oldp+321,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_rs),5);
        tracep->fullCData(oldp+322,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt),5);
        tracep->fullCData(oldp+323,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_rt),5);
        tracep->fullIData(oldp+324,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_inst),32);
        tracep->fullIData(oldp+325,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_inst),32);
        tracep->fullIData(oldp+326,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_shamt_value),32);
        tracep->fullIData(oldp+327,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_shamt_value),32);
        tracep->fullIData(oldp+328,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rs_value),32);
        tracep->fullIData(oldp+329,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_rs_value),32);
        tracep->fullIData(oldp+330,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value),32);
        tracep->fullIData(oldp+331,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_rt_value),32);
        tracep->fullIData(oldp+332,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_imm_value),32);
        tracep->fullIData(oldp+333,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_imm_value),32);
        tracep->fullIData(oldp+334,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_pc),32);
        tracep->fullIData(oldp+335,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_pc),32);
        tracep->fullCData(oldp+336,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_op),6);
        tracep->fullCData(oldp+337,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_op),6);
        tracep->fullCData(oldp+338,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_reg_waddr),5);
        tracep->fullCData(oldp+339,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_reg_waddr),5);
        tracep->fullBit(oldp+340,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_is_in_delayslot));
        tracep->fullBit(oldp+341,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_is_in_delayslot));
        tracep->fullBit(oldp+342,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except_temp 
                                         >> 0x10U))));
        tracep->fullBit(oldp+343,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except_temp 
                                         >> 0xfU))));
        tracep->fullBit(oldp+344,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except_temp 
                                         >> 0xeU))));
        tracep->fullBit(oldp+345,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except_temp 
                                         >> 0xdU))));
        tracep->fullBit(oldp+346,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except_temp 
                                         >> 0xcU))));
        tracep->fullBit(oldp+347,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except_temp 
                                         >> 0xbU))));
        tracep->fullBit(oldp+348,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except_temp 
                                         >> 0xaU))));
        tracep->fullBit(oldp+349,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except_temp 
                                         >> 9U))));
        tracep->fullBit(oldp+350,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except_temp 
                                         >> 8U))));
        tracep->fullBit(oldp+351,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except_temp 
                                         >> 7U))));
        tracep->fullBit(oldp+352,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except_temp 
                                         >> 6U))));
        tracep->fullBit(oldp+353,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except_temp 
                                         >> 5U))));
        tracep->fullBit(oldp+354,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except_temp 
                                         >> 4U))));
        tracep->fullBit(oldp+355,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except_temp 
                                         >> 3U))));
        tracep->fullBit(oldp+356,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except_temp 
                                         >> 2U))));
        tracep->fullBit(oldp+357,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except_temp 
                                         >> 1U))));
        tracep->fullBit(oldp+358,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except_temp)));
        tracep->fullBit(oldp+359,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except_temp 
                                         >> 0x10U))));
        tracep->fullBit(oldp+360,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except_temp 
                                         >> 0xfU))));
        tracep->fullBit(oldp+361,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except_temp 
                                         >> 0xeU))));
        tracep->fullBit(oldp+362,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except_temp 
                                         >> 0xdU))));
        tracep->fullBit(oldp+363,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except_temp 
                                         >> 0xcU))));
        tracep->fullBit(oldp+364,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except_temp 
                                         >> 0xbU))));
        tracep->fullBit(oldp+365,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except_temp 
                                         >> 0xaU))));
        tracep->fullBit(oldp+366,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except_temp 
                                         >> 9U))));
        tracep->fullBit(oldp+367,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except_temp 
                                         >> 8U))));
        tracep->fullBit(oldp+368,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except_temp 
                                         >> 7U))));
        tracep->fullBit(oldp+369,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except_temp 
                                         >> 6U))));
        tracep->fullBit(oldp+370,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except_temp 
                                         >> 5U))));
        tracep->fullBit(oldp+371,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except_temp 
                                         >> 4U))));
        tracep->fullBit(oldp+372,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except_temp 
                                         >> 3U))));
        tracep->fullBit(oldp+373,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except_temp 
                                         >> 2U))));
        tracep->fullBit(oldp+374,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except_temp 
                                         >> 1U))));
        tracep->fullBit(oldp+375,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except_temp)));
        tracep->fullBit(oldp+376,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_cop0_info) 
                                         >> 0xcU))));
        tracep->fullBit(oldp+377,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_cop0_info) 
                                         >> 0xbU))));
        tracep->fullBit(oldp+378,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_cop0_info) 
                                         >> 0xaU))));
        tracep->fullBit(oldp+379,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_cop0_info) 
                                         >> 9U))));
        tracep->fullBit(oldp+380,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_cop0_info) 
                                         >> 8U))));
        tracep->fullCData(oldp+381,((0x1fU & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_cop0_info) 
                                              >> 3U))),5);
        tracep->fullCData(oldp+382,((7U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_cop0_info))),3);
        tracep->fullBit(oldp+383,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_cop0_info) 
                                         >> 0xcU))));
        tracep->fullBit(oldp+384,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_cop0_info) 
                                         >> 0xbU))));
        tracep->fullBit(oldp+385,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_cop0_info) 
                                         >> 0xaU))));
        tracep->fullBit(oldp+386,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_cop0_info) 
                                         >> 9U))));
        tracep->fullBit(oldp+387,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_cop0_info) 
                                         >> 8U))));
        tracep->fullCData(oldp+388,((0x1fU & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_cop0_info) 
                                              >> 3U))),5);
        tracep->fullCData(oldp+389,((7U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_cop0_info))),3);
        tracep->fullBit(oldp+390,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                                         >> 0xcU))));
        tracep->fullBit(oldp+391,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                                         >> 0xbU))));
        tracep->fullBit(oldp+392,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                                         >> 0xaU))));
        tracep->fullBit(oldp+393,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                                         >> 9U))));
        tracep->fullBit(oldp+394,((1U & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                                         >> 8U))));
        tracep->fullCData(oldp+395,((0x1fU & ((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info) 
                                              >> 3U))),5);
        tracep->fullCData(oldp+396,((7U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_cop0_info))),3);
        tracep->fullCData(oldp+397,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_cmov_type),2);
        tracep->fullCData(oldp+398,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_cmov_type),2);
        tracep->fullIData(oldp+399,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_mem_addr),32);
        tracep->fullIData(oldp+400,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_mem_addr),32);
        tracep->fullIData(oldp+401,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srca),32);
        tracep->fullIData(oldp+402,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srca),32);
        tracep->fullIData(oldp+403,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_srcb),32);
        tracep->fullIData(oldp+404,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_srcb),32);
        tracep->fullCData(oldp+405,((((- (IData)((1U 
                                                  & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                                     >> 0xeU)))) 
                                      & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_op)) 
                                     | ((- (IData)(
                                                   (1U 
                                                    & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                                       >> 0xeU)))) 
                                        & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_op)))),6);
        tracep->fullBit(oldp+406,(((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_mem_sel) 
                                   | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_mem_sel))));
        tracep->fullIData(oldp+407,((((- (IData)((1U 
                                                  & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                                     >> 0xeU)))) 
                                      & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value) 
                                     | ((- (IData)(
                                                   (1U 
                                                    & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                                       >> 0xeU)))) 
                                        & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_rt_value))),32);
        tracep->fullBit(oldp+408,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_mem_sel));
        tracep->fullBit(oldp+409,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_mem_sel));
        tracep->fullBit(oldp+410,((((0x23U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_op)) 
                                    & (0U != (3U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_mem_addr))) 
                                   | (((0x30U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_op)) 
                                       & (0U != (3U 
                                                 & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_mem_addr))) 
                                      | (((0x21U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_op)) 
                                          | (0x25U 
                                             == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_op))) 
                                         & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_mem_addr)))));
        tracep->fullBit(oldp+411,((((0x23U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_op)) 
                                    & (0U != (3U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_mem_addr))) 
                                   | (((0x30U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_op)) 
                                       & (0U != (3U 
                                                 & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_mem_addr))) 
                                      | (((0x21U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_op)) 
                                          | (0x25U 
                                             == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_op))) 
                                         & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_mem_addr)))));
        tracep->fullBit(oldp+412,((((0x2bU == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_op)) 
                                    & (0U != (3U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_mem_addr))) 
                                   | (((0x38U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_op)) 
                                       & (0U != (3U 
                                                 & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_mem_addr))) 
                                      | ((0x29U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_op)) 
                                         & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_mem_addr)))));
        tracep->fullBit(oldp+413,((((0x2bU == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_op)) 
                                    & (0U != (3U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_mem_addr))) 
                                   | (((0x38U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_op)) 
                                       & (0U != (3U 
                                                 & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_mem_addr))) 
                                      | ((0x29U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_op)) 
                                         & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_mem_addr)))));
        tracep->fullIData(oldp+414,(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_inst),32);
        tracep->fullIData(oldp+415,(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_inst),32);
        tracep->fullIData(oldp+416,(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_pc),32);
        tracep->fullIData(oldp+417,(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_pc),32);
        tracep->fullIData(oldp+418,(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_alu_res),32);
        tracep->fullCData(oldp+419,(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_reg_waddr),5);
        tracep->fullCData(oldp+420,(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_reg_waddr),5);
        tracep->fullBit(oldp+421,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except_temp 
                                         >> 0x10U))));
        tracep->fullBit(oldp+422,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except_temp 
                                         >> 0xfU))));
        tracep->fullBit(oldp+423,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except_temp 
                                         >> 0xeU))));
        tracep->fullBit(oldp+424,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except_temp 
                                         >> 0xdU))));
        tracep->fullBit(oldp+425,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except_temp 
                                         >> 0xcU))));
        tracep->fullBit(oldp+426,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except_temp 
                                         >> 0xbU))));
        tracep->fullBit(oldp+427,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except_temp 
                                         >> 0xaU))));
        tracep->fullBit(oldp+428,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except_temp 
                                         >> 9U))));
        tracep->fullBit(oldp+429,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except_temp 
                                         >> 8U))));
        tracep->fullBit(oldp+430,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except_temp 
                                         >> 7U))));
        tracep->fullBit(oldp+431,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except_temp 
                                         >> 6U))));
        tracep->fullBit(oldp+432,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except_temp 
                                         >> 5U))));
        tracep->fullBit(oldp+433,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except_temp 
                                         >> 4U))));
        tracep->fullBit(oldp+434,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except_temp 
                                         >> 3U))));
        tracep->fullBit(oldp+435,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except_temp 
                                         >> 2U))));
        tracep->fullBit(oldp+436,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except_temp 
                                         >> 1U))));
        tracep->fullBit(oldp+437,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except_temp)));
        tracep->fullBit(oldp+438,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except_temp 
                                         >> 0x10U))));
        tracep->fullBit(oldp+439,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except_temp 
                                         >> 0xfU))));
        tracep->fullBit(oldp+440,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except_temp 
                                         >> 0xeU))));
        tracep->fullBit(oldp+441,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except_temp 
                                         >> 0xdU))));
        tracep->fullBit(oldp+442,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except_temp 
                                         >> 0xcU))));
        tracep->fullBit(oldp+443,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except_temp 
                                         >> 0xbU))));
        tracep->fullBit(oldp+444,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except_temp 
                                         >> 0xaU))));
        tracep->fullBit(oldp+445,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except_temp 
                                         >> 9U))));
        tracep->fullBit(oldp+446,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except_temp 
                                         >> 8U))));
        tracep->fullBit(oldp+447,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except_temp 
                                         >> 7U))));
        tracep->fullBit(oldp+448,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except_temp 
                                         >> 6U))));
        tracep->fullBit(oldp+449,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except_temp 
                                         >> 5U))));
        tracep->fullBit(oldp+450,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except_temp 
                                         >> 4U))));
        tracep->fullBit(oldp+451,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except_temp 
                                         >> 3U))));
        tracep->fullBit(oldp+452,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except_temp 
                                         >> 2U))));
        tracep->fullBit(oldp+453,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except_temp 
                                         >> 1U))));
        tracep->fullBit(oldp+454,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except_temp)));
        tracep->fullBit(oldp+455,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except 
                                         >> 0x10U))));
        tracep->fullBit(oldp+456,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except 
                                         >> 0xfU))));
        tracep->fullBit(oldp+457,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except 
                                         >> 0xeU))));
        tracep->fullBit(oldp+458,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except 
                                         >> 0xdU))));
        tracep->fullBit(oldp+459,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except 
                                         >> 0xcU))));
        tracep->fullBit(oldp+460,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except 
                                         >> 0xbU))));
        tracep->fullBit(oldp+461,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except 
                                         >> 0xaU))));
        tracep->fullBit(oldp+462,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except 
                                         >> 9U))));
        tracep->fullBit(oldp+463,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except 
                                         >> 8U))));
        tracep->fullBit(oldp+464,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except 
                                         >> 7U))));
        tracep->fullBit(oldp+465,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except 
                                         >> 6U))));
        tracep->fullBit(oldp+466,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except 
                                         >> 5U))));
        tracep->fullBit(oldp+467,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except 
                                         >> 4U))));
        tracep->fullBit(oldp+468,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except 
                                         >> 3U))));
        tracep->fullBit(oldp+469,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except 
                                         >> 2U))));
        tracep->fullBit(oldp+470,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except 
                                         >> 1U))));
        tracep->fullBit(oldp+471,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_except)));
        tracep->fullBit(oldp+472,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except 
                                         >> 0x10U))));
        tracep->fullBit(oldp+473,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except 
                                         >> 0xfU))));
        tracep->fullBit(oldp+474,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except 
                                         >> 0xeU))));
        tracep->fullBit(oldp+475,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except 
                                         >> 0xdU))));
        tracep->fullBit(oldp+476,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except 
                                         >> 0xcU))));
        tracep->fullBit(oldp+477,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except 
                                         >> 0xbU))));
        tracep->fullBit(oldp+478,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except 
                                         >> 0xaU))));
        tracep->fullBit(oldp+479,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except 
                                         >> 9U))));
        tracep->fullBit(oldp+480,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except 
                                         >> 8U))));
        tracep->fullBit(oldp+481,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except 
                                         >> 7U))));
        tracep->fullBit(oldp+482,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except 
                                         >> 6U))));
        tracep->fullBit(oldp+483,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except 
                                         >> 5U))));
        tracep->fullBit(oldp+484,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except 
                                         >> 4U))));
        tracep->fullBit(oldp+485,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except 
                                         >> 3U))));
        tracep->fullBit(oldp+486,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except 
                                         >> 2U))));
        tracep->fullBit(oldp+487,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except 
                                         >> 1U))));
        tracep->fullBit(oldp+488,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_except)));
        tracep->fullBit(oldp+489,(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_is_in_delayslot));
        tracep->fullBit(oldp+490,(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_is_in_delayslot));
        tracep->fullIData(oldp+491,(((IData)(4U) + vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_pc)),32);
        tracep->fullIData(oldp+492,(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_rdataM),32);
        tracep->fullBit(oldp+493,(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_enM));
        tracep->fullBit(oldp+494,(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_renM));
        tracep->fullBit(oldp+495,(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_wenM));
        tracep->fullCData(oldp+496,(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_opM),6);
        tracep->fullIData(oldp+497,(vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_wdataM),32);
        tracep->fullBit(oldp+498,(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_mem_sel));
        tracep->fullBit(oldp+499,(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_mem_sel));
        tracep->fullIData(oldp+500,(((- (IData)((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_mem_sel))) 
                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_rdataM)),32);
        tracep->fullIData(oldp+501,(((- (IData)((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_mem_sel))) 
                                     & vlSelf->mycpu_top__DOT__u_datapath__DOT__mem_rdataM)),32);
        tracep->fullIData(oldp+502,(vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_inst),32);
        tracep->fullIData(oldp+503,(vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_inst),32);
        tracep->fullIData(oldp+504,(vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_pc),32);
        tracep->fullIData(oldp+505,(vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_pc),32);
        tracep->fullCData(oldp+506,(vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_reg_waddr),5);
        tracep->fullCData(oldp+507,(vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_reg_waddr),5);
        tracep->fullIData(oldp+508,(vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_reg_wdata),32);
        tracep->fullIData(oldp+509,(vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_reg_wdata),32);
        tracep->fullIData(oldp+510,(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_reg_wdata),32);
        tracep->fullIData(oldp+511,(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_slave_reg_wdata),32);
        tracep->fullBit(oldp+512,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_except 
                                         >> 0x10U))));
        tracep->fullBit(oldp+513,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_except 
                                         >> 0xfU))));
        tracep->fullBit(oldp+514,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_except 
                                         >> 0xeU))));
        tracep->fullBit(oldp+515,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_except 
                                         >> 0xdU))));
        tracep->fullBit(oldp+516,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_except 
                                         >> 0xcU))));
        tracep->fullBit(oldp+517,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_except 
                                         >> 0xbU))));
        tracep->fullBit(oldp+518,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_except 
                                         >> 0xaU))));
        tracep->fullBit(oldp+519,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_except 
                                         >> 9U))));
        tracep->fullBit(oldp+520,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_except 
                                         >> 8U))));
        tracep->fullBit(oldp+521,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_except 
                                         >> 7U))));
        tracep->fullBit(oldp+522,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_except 
                                         >> 6U))));
        tracep->fullBit(oldp+523,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_except 
                                         >> 5U))));
        tracep->fullBit(oldp+524,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_except 
                                         >> 4U))));
        tracep->fullBit(oldp+525,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_except 
                                         >> 3U))));
        tracep->fullBit(oldp+526,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_except 
                                         >> 2U))));
        tracep->fullBit(oldp+527,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_except 
                                         >> 1U))));
        tracep->fullBit(oldp+528,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_except)));
        tracep->fullBit(oldp+529,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_except 
                                         >> 0x10U))));
        tracep->fullBit(oldp+530,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_except 
                                         >> 0xfU))));
        tracep->fullBit(oldp+531,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_except 
                                         >> 0xeU))));
        tracep->fullBit(oldp+532,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_except 
                                         >> 0xdU))));
        tracep->fullBit(oldp+533,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_except 
                                         >> 0xcU))));
        tracep->fullBit(oldp+534,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_except 
                                         >> 0xbU))));
        tracep->fullBit(oldp+535,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_except 
                                         >> 0xaU))));
        tracep->fullBit(oldp+536,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_except 
                                         >> 9U))));
        tracep->fullBit(oldp+537,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_except 
                                         >> 8U))));
        tracep->fullBit(oldp+538,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_except 
                                         >> 7U))));
        tracep->fullBit(oldp+539,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_except 
                                         >> 6U))));
        tracep->fullBit(oldp+540,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_except 
                                         >> 5U))));
        tracep->fullBit(oldp+541,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_except 
                                         >> 4U))));
        tracep->fullBit(oldp+542,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_except 
                                         >> 3U))));
        tracep->fullBit(oldp+543,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_except 
                                         >> 2U))));
        tracep->fullBit(oldp+544,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_except 
                                         >> 1U))));
        tracep->fullBit(oldp+545,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_except)));
        tracep->fullQData(oldp+546,(vlSelf->mycpu_top__DOT__u_datapath__DOT__master_asciiF),48);
        tracep->fullQData(oldp+548,(vlSelf->mycpu_top__DOT__u_datapath__DOT__master_asciiD),48);
        tracep->fullQData(oldp+550,(vlSelf->mycpu_top__DOT__u_datapath__DOT__master_asciiE),48);
        tracep->fullQData(oldp+552,(vlSelf->mycpu_top__DOT__u_datapath__DOT__master_asciiM),48);
        tracep->fullQData(oldp+554,(vlSelf->mycpu_top__DOT__u_datapath__DOT__master_asciiW),48);
        tracep->fullQData(oldp+556,(vlSelf->mycpu_top__DOT__u_datapath__DOT__slave_asciiF),48);
        tracep->fullQData(oldp+558,(vlSelf->mycpu_top__DOT__u_datapath__DOT__slave_asciiD),48);
        tracep->fullQData(oldp+560,(vlSelf->mycpu_top__DOT__u_datapath__DOT__slave_asciiE),48);
        tracep->fullQData(oldp+562,(vlSelf->mycpu_top__DOT__u_datapath__DOT__slave_asciiM),48);
        tracep->fullQData(oldp+564,(vlSelf->mycpu_top__DOT__u_datapath__DOT__slave_asciiW),48);
        tracep->fullBit(oldp+566,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                         >> 0x11U))));
        tracep->fullBit(oldp+567,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                         >> 0x10U))));
        tracep->fullBit(oldp+568,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                         >> 0xdU))));
        tracep->fullBit(oldp+569,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                         >> 0xdU))));
        tracep->fullBit(oldp+570,(((((vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                      >> 0xdU) & (0U 
                                                  != (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_reg_waddr))) 
                                    & (((vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                         >> 0x11U) 
                                        & ((0x1fU & 
                                            (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                             >> 0x15U)) 
                                           == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_reg_waddr))) 
                                       | ((vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                           >> 0x10U) 
                                          & ((0x1fU 
                                              & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                 >> 0x10U)) 
                                             == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_reg_waddr))))) 
                                   | (((vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                        >> 0xdU) & 
                                       (0U != (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_reg_waddr))) 
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
        tracep->fullIData(oldp+571,(((IData)(4U) + vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg)),32);
        tracep->fullBit(oldp+572,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                         [0U][2U] >> 1U))));
        tracep->fullBit(oldp+573,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                   [0U][2U])));
        tracep->fullIData(oldp+574,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                    [0U][1U]),32);
        tracep->fullIData(oldp+575,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                    [0U][0U]),32);
        tracep->fullBit(oldp+576,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                         [1U][2U] >> 1U))));
        tracep->fullBit(oldp+577,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                   [1U][2U])));
        tracep->fullIData(oldp+578,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                    [1U][1U]),32);
        tracep->fullIData(oldp+579,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                    [1U][0U]),32);
        tracep->fullBit(oldp+580,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                         [2U][2U] >> 1U))));
        tracep->fullBit(oldp+581,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                   [2U][2U])));
        tracep->fullIData(oldp+582,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                    [2U][1U]),32);
        tracep->fullIData(oldp+583,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                    [2U][0U]),32);
        tracep->fullBit(oldp+584,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                         [3U][2U] >> 1U))));
        tracep->fullBit(oldp+585,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                   [3U][2U])));
        tracep->fullIData(oldp+586,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                    [3U][1U]),32);
        tracep->fullIData(oldp+587,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                    [3U][0U]),32);
        tracep->fullBit(oldp+588,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                         [4U][2U] >> 1U))));
        tracep->fullBit(oldp+589,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                   [4U][2U])));
        tracep->fullIData(oldp+590,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                    [4U][1U]),32);
        tracep->fullIData(oldp+591,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                    [4U][0U]),32);
        tracep->fullBit(oldp+592,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                         [5U][2U] >> 1U))));
        tracep->fullBit(oldp+593,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                   [5U][2U])));
        tracep->fullIData(oldp+594,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                    [5U][1U]),32);
        tracep->fullIData(oldp+595,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                    [5U][0U]),32);
        tracep->fullBit(oldp+596,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                         [6U][2U] >> 1U))));
        tracep->fullBit(oldp+597,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                   [6U][2U])));
        tracep->fullIData(oldp+598,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                    [6U][1U]),32);
        tracep->fullIData(oldp+599,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                    [6U][0U]),32);
        tracep->fullBit(oldp+600,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                         [7U][2U] >> 1U))));
        tracep->fullBit(oldp+601,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                   [7U][2U])));
        tracep->fullIData(oldp+602,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                    [7U][1U]),32);
        tracep->fullIData(oldp+603,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                    [7U][0U]),32);
        tracep->fullBit(oldp+604,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                         [8U][2U] >> 1U))));
        tracep->fullBit(oldp+605,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                   [8U][2U])));
        tracep->fullIData(oldp+606,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                    [8U][1U]),32);
        tracep->fullIData(oldp+607,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                    [8U][0U]),32);
        tracep->fullBit(oldp+608,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                         [9U][2U] >> 1U))));
        tracep->fullBit(oldp+609,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                   [9U][2U])));
        tracep->fullIData(oldp+610,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                    [9U][1U]),32);
        tracep->fullIData(oldp+611,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                    [9U][0U]),32);
        tracep->fullBit(oldp+612,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                         [0xaU][2U] 
                                         >> 1U))));
        tracep->fullBit(oldp+613,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                   [0xaU][2U])));
        tracep->fullIData(oldp+614,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                    [0xaU][1U]),32);
        tracep->fullIData(oldp+615,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                    [0xaU][0U]),32);
        tracep->fullBit(oldp+616,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                         [0xbU][2U] 
                                         >> 1U))));
        tracep->fullBit(oldp+617,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                   [0xbU][2U])));
        tracep->fullIData(oldp+618,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                    [0xbU][1U]),32);
        tracep->fullIData(oldp+619,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                    [0xbU][0U]),32);
        tracep->fullBit(oldp+620,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                         [0xcU][2U] 
                                         >> 1U))));
        tracep->fullBit(oldp+621,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                   [0xcU][2U])));
        tracep->fullIData(oldp+622,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                    [0xcU][1U]),32);
        tracep->fullIData(oldp+623,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                    [0xcU][0U]),32);
        tracep->fullBit(oldp+624,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                         [0xdU][2U] 
                                         >> 1U))));
        tracep->fullBit(oldp+625,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                   [0xdU][2U])));
        tracep->fullIData(oldp+626,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                    [0xdU][1U]),32);
        tracep->fullIData(oldp+627,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                    [0xdU][0U]),32);
        tracep->fullBit(oldp+628,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                         [0xeU][2U] 
                                         >> 1U))));
        tracep->fullBit(oldp+629,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                   [0xeU][2U])));
        tracep->fullIData(oldp+630,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                    [0xeU][1U]),32);
        tracep->fullIData(oldp+631,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                    [0xeU][0U]),32);
        tracep->fullBit(oldp+632,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                         [0xfU][2U] 
                                         >> 1U))));
        tracep->fullBit(oldp+633,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                   [0xfU][2U])));
        tracep->fullIData(oldp+634,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                    [0xfU][1U]),32);
        tracep->fullIData(oldp+635,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__lines
                                    [0xfU][0U]),32);
        tracep->fullBit(oldp+636,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[2U] 
                                         >> 1U))));
        tracep->fullBit(oldp+637,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[2U])));
        tracep->fullIData(oldp+638,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[1U]),32);
        tracep->fullIData(oldp+639,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U]),32);
        tracep->fullBit(oldp+640,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[2U] 
                                         >> 1U))));
        tracep->fullBit(oldp+641,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[2U])));
        tracep->fullIData(oldp+642,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[1U]),32);
        tracep->fullIData(oldp+643,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U]),32);
        tracep->fullBit(oldp+644,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__write_line1[2U] 
                                         >> 1U))));
        tracep->fullBit(oldp+645,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__write_line1[2U])));
        tracep->fullIData(oldp+646,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__write_line1[1U]),32);
        tracep->fullIData(oldp+647,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__write_line1[0U]),32);
        tracep->fullIData(oldp+648,(((IData)(4U) + vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg)),32);
        tracep->fullIData(oldp+649,(vlSelf->mycpu_top__DOT__inst_rdata2),32);
        tracep->fullBit(oldp+650,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_line[2U] 
                                         >> 1U))));
        tracep->fullBit(oldp+651,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_line[2U])));
        tracep->fullIData(oldp+652,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_line[1U]),32);
        tracep->fullIData(oldp+653,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_line[0U]),32);
        tracep->fullBit(oldp+654,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_stall));
        tracep->fullBit(oldp+655,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__delayslot_enable));
        tracep->fullCData(oldp+656,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__write_pointer),4);
        tracep->fullCData(oldp+657,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_pointer),4);
        tracep->fullCData(oldp+658,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__data_count),4);
        tracep->fullWData(oldp+659,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__slave_cnt),65);
        tracep->fullWData(oldp+662,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__master_cnt),65);
        VL_ADD_W(3, __Vtemp332, vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__master_cnt, vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__slave_cnt);
        __Vtemp333[0U] = __Vtemp332[0U];
        __Vtemp333[1U] = __Vtemp332[1U];
        __Vtemp333[2U] = (1U & __Vtemp332[2U]);
        tracep->fullWData(oldp+665,(__Vtemp333),65);
        tracep->fullBit(oldp+668,((0U != (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__data_count))));
        tracep->fullIData(oldp+669,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[0]),32);
        tracep->fullIData(oldp+670,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[1]),32);
        tracep->fullIData(oldp+671,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[2]),32);
        tracep->fullIData(oldp+672,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[3]),32);
        tracep->fullIData(oldp+673,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[4]),32);
        tracep->fullIData(oldp+674,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[5]),32);
        tracep->fullIData(oldp+675,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[6]),32);
        tracep->fullIData(oldp+676,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[7]),32);
        tracep->fullIData(oldp+677,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[8]),32);
        tracep->fullIData(oldp+678,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[9]),32);
        tracep->fullIData(oldp+679,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[10]),32);
        tracep->fullIData(oldp+680,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[11]),32);
        tracep->fullIData(oldp+681,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[12]),32);
        tracep->fullIData(oldp+682,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[13]),32);
        tracep->fullIData(oldp+683,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[14]),32);
        tracep->fullIData(oldp+684,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[15]),32);
        tracep->fullIData(oldp+685,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[16]),32);
        tracep->fullIData(oldp+686,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[17]),32);
        tracep->fullIData(oldp+687,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[18]),32);
        tracep->fullIData(oldp+688,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[19]),32);
        tracep->fullIData(oldp+689,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[20]),32);
        tracep->fullIData(oldp+690,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[21]),32);
        tracep->fullIData(oldp+691,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[22]),32);
        tracep->fullIData(oldp+692,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[23]),32);
        tracep->fullIData(oldp+693,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[24]),32);
        tracep->fullIData(oldp+694,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[25]),32);
        tracep->fullIData(oldp+695,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[26]),32);
        tracep->fullIData(oldp+696,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[27]),32);
        tracep->fullIData(oldp+697,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[28]),32);
        tracep->fullIData(oldp+698,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[29]),32);
        tracep->fullIData(oldp+699,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[30]),32);
        tracep->fullIData(oldp+700,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf[31]),32);
        tracep->fullCData(oldp+701,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[0]),6);
        tracep->fullCData(oldp+702,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[1]),6);
        tracep->fullCData(oldp+703,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[2]),6);
        tracep->fullCData(oldp+704,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[3]),6);
        tracep->fullCData(oldp+705,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[4]),6);
        tracep->fullCData(oldp+706,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[5]),6);
        tracep->fullCData(oldp+707,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[6]),6);
        tracep->fullCData(oldp+708,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[7]),6);
        tracep->fullCData(oldp+709,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[8]),6);
        tracep->fullCData(oldp+710,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[9]),6);
        tracep->fullCData(oldp+711,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[10]),6);
        tracep->fullCData(oldp+712,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[11]),6);
        tracep->fullCData(oldp+713,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[12]),6);
        tracep->fullCData(oldp+714,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[13]),6);
        tracep->fullCData(oldp+715,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[14]),6);
        tracep->fullCData(oldp+716,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT[15]),6);
        tracep->fullCData(oldp+717,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT
                                    [(0xfU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[1U] 
                                              >> 2U))]),6);
        tracep->fullCData(oldp+718,((0xfU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[1U] 
                                             >> 2U))),4);
        tracep->fullCData(oldp+719,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__BHT
                                    [(0xfU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_pc 
                                              >> 2U))]),6);
        tracep->fullCData(oldp+720,((0xfU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_pc 
                                             >> 2U))),4);
        tracep->fullBit(oldp+721,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_jump_judge__DOT__jr));
        tracep->fullBit(oldp+722,((1U & (~ (IData)(
                                                   (0U 
                                                    != 
                                                    (0x1fU 
                                                     & (1U 
                                                        ^ 
                                                        ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                          << 5U) 
                                                         | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                            >> 0x1bU))))))))));
        tracep->fullIData(oldp+723,(((0xf0000000U & 
                                      ((IData)(4U) 
                                       + vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[1U])) 
                                     | (0xffffffcU 
                                        & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                           << 2U)))),32);
        tracep->fullBit(oldp+724,((1U & ((vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                          & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs) 
                                         >> 0xeU))));
        tracep->fullBit(oldp+725,((1U & ((vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                          & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs) 
                                         >> 1U))));
        tracep->fullBit(oldp+726,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                         & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs))));
        tracep->fullBit(oldp+727,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                         >> 0x11U))));
        tracep->fullBit(oldp+728,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                         >> 0x10U))));
        tracep->fullBit(oldp+729,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                         >> 7U))));
        tracep->fullBit(oldp+730,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                         >> 8U))));
        tracep->fullBit(oldp+731,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                         >> 9U))));
        tracep->fullBit(oldp+732,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                         >> 0xaU))));
        tracep->fullBit(oldp+733,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                         >> 5U))));
        tracep->fullBit(oldp+734,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                         >> 5U))));
        tracep->fullBit(oldp+735,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                         >> 6U))));
        tracep->fullBit(oldp+736,((((vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                     >> 0xdU) & (((vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
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
                                       >> 0xdU) & (
                                                   ((vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
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
        tracep->fullBit(oldp+737,(((0U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__data_count)) 
                                   | (1U == (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__data_count)))));
        tracep->fullBit(oldp+738,((1U & ((((vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                            & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs) 
                                           >> 0xeU) 
                                          | ((vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                              & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs) 
                                             >> 1U)) 
                                         | (vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                            & vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs)))));
        tracep->fullBit(oldp+739,(((vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                    >> 0xfU) & (((vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
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
        tracep->fullBit(oldp+740,((1U & ((vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                          >> 7U) & 
                                         (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                          >> 8U)))));
        tracep->fullBit(oldp+741,((1U & ((vlSelf->mycpu_top__DOT__u_datapath__DOT__D1cs 
                                          >> 9U) & 
                                         (vlSelf->mycpu_top__DOT__u_datapath__DOT__D2cs 
                                          >> 0xaU)))));
        tracep->fullBit(oldp+742,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_issue_ctrl__DOT__data_conflict));
        tracep->fullBit(oldp+743,(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_forward_top__alu_wen1));
        tracep->fullBit(oldp+744,(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_forward_top__alu_wen2));
        tracep->fullBit(oldp+745,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                         >> 7U))));
        tracep->fullBit(oldp+746,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                         >> 1U))));
        tracep->fullBit(oldp+747,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)));
        tracep->fullCData(oldp+748,((0xffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                              >> 0x13U))),8);
        tracep->fullBit(oldp+749,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                         >> 7U))));
        tracep->fullBit(oldp+750,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                         >> 1U))));
        tracep->fullBit(oldp+751,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs)));
        tracep->fullCData(oldp+752,((0xffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                              >> 0x13U))),8);
        tracep->fullIData(oldp+753,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_a),32);
        tracep->fullIData(oldp+754,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_b),32);
        tracep->fullIData(oldp+755,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_a),32);
        tracep->fullIData(oldp+756,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_b),32);
        tracep->fullBit(oldp+757,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_ready));
        tracep->fullBit(oldp+758,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_ready));
        tracep->fullQData(oldp+759,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_hilo_reg__DOT__hilo_reg),64);
        tracep->fullQData(oldp+761,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_result),64);
        tracep->fullBit(oldp+763,((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_a 
                                   >> 0x1fU)));
        tracep->fullBit(oldp+764,((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_b 
                                   >> 0x1fU)));
        tracep->fullBit(oldp+765,(((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_a 
                                    ^ vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_b) 
                                   >> 0x1fU)));
        tracep->fullIData(oldp+766,(((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_a 
                                      >> 0x1fU) ? (- vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_a)
                                      : vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_a)),32);
        tracep->fullIData(oldp+767,(((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_b 
                                      >> 0x1fU) ? (- vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_b)
                                      : vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_b)),32);
        tracep->fullIData(oldp+768,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__part_0),32);
        tracep->fullIData(oldp+769,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__part_1),32);
        tracep->fullIData(oldp+770,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__part_2),32);
        tracep->fullIData(oldp+771,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__part_3),32);
        tracep->fullQData(oldp+772,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__mid_result),64);
        tracep->fullQData(oldp+774,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__div_temp),33);
        tracep->fullCData(oldp+776,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__state),2);
        tracep->fullCData(oldp+777,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__cnt),6);
        tracep->fullWData(oldp+778,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__dividend),65);
        tracep->fullIData(oldp+781,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__divisor),32);
        tracep->fullBit(oldp+782,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__sign1));
        tracep->fullBit(oldp+783,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mydiv__DOT__sign2));
        tracep->fullBit(oldp+784,((0U != vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except_temp)));
        tracep->fullBit(oldp+785,((0U != vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except_temp)));
        tracep->fullBit(oldp+786,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                         >> 0xeU))));
        tracep->fullBit(oldp+787,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                         >> 0xcU))));
        tracep->fullBit(oldp+788,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs 
                                         >> 0xbU))));
        tracep->fullBit(oldp+789,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                         >> 0xeU))));
        tracep->fullBit(oldp+790,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                         >> 0xcU))));
        tracep->fullBit(oldp+791,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
                                         >> 0xbU))));
        tracep->fullBit(oldp+792,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__master_except));
        tracep->fullBit(oldp+793,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                                         >> 0x10U))));
        tracep->fullBit(oldp+794,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                                         >> 0xfU))));
        tracep->fullBit(oldp+795,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                                         >> 0xeU))));
        tracep->fullBit(oldp+796,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                                         >> 0xdU))));
        tracep->fullBit(oldp+797,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                                         >> 0xcU))));
        tracep->fullBit(oldp+798,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                                         >> 0xbU))));
        tracep->fullBit(oldp+799,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                                         >> 0xaU))));
        tracep->fullBit(oldp+800,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                                         >> 9U))));
        tracep->fullBit(oldp+801,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                                         >> 8U))));
        tracep->fullBit(oldp+802,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                                         >> 7U))));
        tracep->fullBit(oldp+803,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                                         >> 6U))));
        tracep->fullBit(oldp+804,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                                         >> 5U))));
        tracep->fullBit(oldp+805,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                                         >> 4U))));
        tracep->fullBit(oldp+806,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                                         >> 3U))));
        tracep->fullBit(oldp+807,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                                         >> 2U))));
        tracep->fullBit(oldp+808,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except 
                                         >> 1U))));
        tracep->fullBit(oldp+809,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except)));
        tracep->fullIData(oldp+810,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except_pc),32);
        tracep->fullBit(oldp+811,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except_bd));
        tracep->fullBit(oldp+812,((IData)((0U != (0x18000U 
                                                  & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except)))));
        tracep->fullIData(oldp+813,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__badva_in),32);
        tracep->fullBit(oldp+814,((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__index_reg 
                                   >> 0x1fU)));
        tracep->fullIData(oldp+815,((0xfffffffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__index_reg 
                                                   >> 3U))),28);
        tracep->fullCData(oldp+816,((7U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__index_reg)),3);
        tracep->fullCData(oldp+817,((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg 
                                     >> 0x1aU)),6);
        tracep->fullIData(oldp+818,((0xfffffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg 
                                                 >> 6U))),20);
        tracep->fullCData(oldp+819,((7U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg 
                                           >> 3U))),3);
        tracep->fullBit(oldp+820,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg 
                                         >> 2U))));
        tracep->fullBit(oldp+821,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg 
                                         >> 1U))));
        tracep->fullBit(oldp+822,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo0_reg)));
        tracep->fullCData(oldp+823,((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
                                     >> 0x1aU)),6);
        tracep->fullIData(oldp+824,((0xfffffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
                                                 >> 6U))),20);
        tracep->fullCData(oldp+825,((7U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
                                           >> 3U))),3);
        tracep->fullBit(oldp+826,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
                                         >> 2U))));
        tracep->fullBit(oldp+827,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg 
                                         >> 1U))));
        tracep->fullBit(oldp+828,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entrylo1_reg)));
        tracep->fullSData(oldp+829,((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__context_reg 
                                     >> 0x17U)),9);
        tracep->fullIData(oldp+830,((0x7ffffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__context_reg 
                                                 >> 4U))),19);
        tracep->fullCData(oldp+831,((0xfU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__context_reg)),4);
        tracep->fullIData(oldp+832,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__wired_reg),32);
        tracep->fullIData(oldp+833,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__badva_reg),32);
        tracep->fullIData(oldp+834,((IData)((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__count_reg 
                                             >> 1U))),32);
        tracep->fullBit(oldp+835,((1U & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__count_reg))));
        tracep->fullIData(oldp+836,((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg 
                                     >> 0xdU)),19);
        tracep->fullCData(oldp+837,((0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg 
                                              >> 8U))),5);
        tracep->fullCData(oldp+838,((0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__entryhi_reg)),8);
        tracep->fullIData(oldp+839,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__compare_reg),32);
        tracep->fullCData(oldp+840,((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg 
                                     >> 0x1dU)),3);
        tracep->fullBit(oldp+841,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg 
                                         >> 0x1cU))));
        tracep->fullCData(oldp+842,((0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg 
                                              >> 0x17U))),5);
        tracep->fullBit(oldp+843,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg 
                                         >> 0x16U))));
        tracep->fullCData(oldp+844,((0x3fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg 
                                              >> 0x10U))),6);
        tracep->fullCData(oldp+845,((0xffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg 
                                              >> 8U))),8);
        tracep->fullCData(oldp+846,((7U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg 
                                           >> 5U))),3);
        tracep->fullBit(oldp+847,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg 
                                         >> 4U))));
        tracep->fullBit(oldp+848,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg 
                                         >> 3U))));
        tracep->fullBit(oldp+849,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg 
                                         >> 2U))));
        tracep->fullBit(oldp+850,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg 
                                         >> 1U))));
        tracep->fullBit(oldp+851,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__status_reg)));
        tracep->fullBit(oldp+852,((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg 
                                   >> 0x1fU)));
        tracep->fullCData(oldp+853,((0x7fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg 
                                              >> 0x18U))),7);
        tracep->fullBit(oldp+854,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg 
                                         >> 0x17U))));
        tracep->fullCData(oldp+855,((0x7fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg 
                                              >> 0x10U))),7);
        tracep->fullCData(oldp+856,((0xffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg 
                                              >> 8U))),8);
        tracep->fullBit(oldp+857,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg 
                                         >> 7U))));
        tracep->fullCData(oldp+858,((0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg 
                                              >> 2U))),5);
        tracep->fullCData(oldp+859,((3U & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__cause_reg)),2);
        tracep->fullIData(oldp+860,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__epc_reg),32);
        tracep->fullIData(oldp+861,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__ebase_reg),32);
        tracep->fullIData(oldp+862,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__taglo_reg),32);
        tracep->fullIData(oldp+863,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__taghi_reg),32);
        tracep->fullIData(oldp+864,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__errorepc_reg),32);
        tracep->fullBit(oldp+865,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [0U][2U] >> 9U))));
        tracep->fullBit(oldp+866,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [0U][2U] >> 8U))));
        tracep->fullBit(oldp+867,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [0U][2U] >> 7U))));
        tracep->fullBit(oldp+868,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [0U][2U] >> 6U))));
        tracep->fullBit(oldp+869,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [0U][2U] >> 5U))));
        tracep->fullBit(oldp+870,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [0U][2U] >> 4U))));
        tracep->fullBit(oldp+871,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [0U][2U] >> 3U))));
        tracep->fullIData(oldp+872,((0xfffffU & ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                  [0U][2U] 
                                                  << 0x11U) 
                                                 | (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                    [0U][1U] 
                                                    >> 0xfU)))),20);
        tracep->fullIData(oldp+873,((0xfffffU & ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                  [0U][1U] 
                                                  << 5U) 
                                                 | (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                    [0U][0U] 
                                                    >> 0x1bU)))),20);
        tracep->fullIData(oldp+874,((0x7ffffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                 [0U][0U] 
                                                 >> 8U))),19);
        tracep->fullCData(oldp+875,((0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                     [0U][0U])),8);
        tracep->fullBit(oldp+876,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [1U][2U] >> 9U))));
        tracep->fullBit(oldp+877,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [1U][2U] >> 8U))));
        tracep->fullBit(oldp+878,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [1U][2U] >> 7U))));
        tracep->fullBit(oldp+879,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [1U][2U] >> 6U))));
        tracep->fullBit(oldp+880,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [1U][2U] >> 5U))));
        tracep->fullBit(oldp+881,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [1U][2U] >> 4U))));
        tracep->fullBit(oldp+882,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [1U][2U] >> 3U))));
        tracep->fullIData(oldp+883,((0xfffffU & ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                  [1U][2U] 
                                                  << 0x11U) 
                                                 | (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                    [1U][1U] 
                                                    >> 0xfU)))),20);
        tracep->fullIData(oldp+884,((0xfffffU & ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                  [1U][1U] 
                                                  << 5U) 
                                                 | (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                    [1U][0U] 
                                                    >> 0x1bU)))),20);
        tracep->fullIData(oldp+885,((0x7ffffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                 [1U][0U] 
                                                 >> 8U))),19);
        tracep->fullCData(oldp+886,((0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                     [1U][0U])),8);
        tracep->fullBit(oldp+887,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [2U][2U] >> 9U))));
        tracep->fullBit(oldp+888,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [2U][2U] >> 8U))));
        tracep->fullBit(oldp+889,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [2U][2U] >> 7U))));
        tracep->fullBit(oldp+890,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [2U][2U] >> 6U))));
        tracep->fullBit(oldp+891,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [2U][2U] >> 5U))));
        tracep->fullBit(oldp+892,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [2U][2U] >> 4U))));
        tracep->fullBit(oldp+893,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [2U][2U] >> 3U))));
        tracep->fullIData(oldp+894,((0xfffffU & ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                  [2U][2U] 
                                                  << 0x11U) 
                                                 | (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                    [2U][1U] 
                                                    >> 0xfU)))),20);
        tracep->fullIData(oldp+895,((0xfffffU & ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                  [2U][1U] 
                                                  << 5U) 
                                                 | (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                    [2U][0U] 
                                                    >> 0x1bU)))),20);
        tracep->fullIData(oldp+896,((0x7ffffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                 [2U][0U] 
                                                 >> 8U))),19);
        tracep->fullCData(oldp+897,((0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                     [2U][0U])),8);
        tracep->fullBit(oldp+898,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [3U][2U] >> 9U))));
        tracep->fullBit(oldp+899,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [3U][2U] >> 8U))));
        tracep->fullBit(oldp+900,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [3U][2U] >> 7U))));
        tracep->fullBit(oldp+901,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [3U][2U] >> 6U))));
        tracep->fullBit(oldp+902,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [3U][2U] >> 5U))));
        tracep->fullBit(oldp+903,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [3U][2U] >> 4U))));
        tracep->fullBit(oldp+904,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [3U][2U] >> 3U))));
        tracep->fullIData(oldp+905,((0xfffffU & ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                  [3U][2U] 
                                                  << 0x11U) 
                                                 | (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                    [3U][1U] 
                                                    >> 0xfU)))),20);
        tracep->fullIData(oldp+906,((0xfffffU & ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                  [3U][1U] 
                                                  << 5U) 
                                                 | (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                    [3U][0U] 
                                                    >> 0x1bU)))),20);
        tracep->fullIData(oldp+907,((0x7ffffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                 [3U][0U] 
                                                 >> 8U))),19);
        tracep->fullCData(oldp+908,((0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                     [3U][0U])),8);
        tracep->fullBit(oldp+909,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [4U][2U] >> 9U))));
        tracep->fullBit(oldp+910,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [4U][2U] >> 8U))));
        tracep->fullBit(oldp+911,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [4U][2U] >> 7U))));
        tracep->fullBit(oldp+912,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [4U][2U] >> 6U))));
        tracep->fullBit(oldp+913,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [4U][2U] >> 5U))));
        tracep->fullBit(oldp+914,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [4U][2U] >> 4U))));
        tracep->fullBit(oldp+915,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [4U][2U] >> 3U))));
        tracep->fullIData(oldp+916,((0xfffffU & ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                  [4U][2U] 
                                                  << 0x11U) 
                                                 | (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                    [4U][1U] 
                                                    >> 0xfU)))),20);
        tracep->fullIData(oldp+917,((0xfffffU & ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                  [4U][1U] 
                                                  << 5U) 
                                                 | (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                    [4U][0U] 
                                                    >> 0x1bU)))),20);
        tracep->fullIData(oldp+918,((0x7ffffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                 [4U][0U] 
                                                 >> 8U))),19);
        tracep->fullCData(oldp+919,((0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                     [4U][0U])),8);
        tracep->fullBit(oldp+920,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [5U][2U] >> 9U))));
        tracep->fullBit(oldp+921,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [5U][2U] >> 8U))));
        tracep->fullBit(oldp+922,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [5U][2U] >> 7U))));
        tracep->fullBit(oldp+923,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [5U][2U] >> 6U))));
        tracep->fullBit(oldp+924,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [5U][2U] >> 5U))));
        tracep->fullBit(oldp+925,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [5U][2U] >> 4U))));
        tracep->fullBit(oldp+926,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [5U][2U] >> 3U))));
        tracep->fullIData(oldp+927,((0xfffffU & ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                  [5U][2U] 
                                                  << 0x11U) 
                                                 | (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                    [5U][1U] 
                                                    >> 0xfU)))),20);
        tracep->fullIData(oldp+928,((0xfffffU & ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                  [5U][1U] 
                                                  << 5U) 
                                                 | (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                    [5U][0U] 
                                                    >> 0x1bU)))),20);
        tracep->fullIData(oldp+929,((0x7ffffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                 [5U][0U] 
                                                 >> 8U))),19);
        tracep->fullCData(oldp+930,((0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                     [5U][0U])),8);
        tracep->fullBit(oldp+931,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [6U][2U] >> 9U))));
        tracep->fullBit(oldp+932,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [6U][2U] >> 8U))));
        tracep->fullBit(oldp+933,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [6U][2U] >> 7U))));
        tracep->fullBit(oldp+934,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [6U][2U] >> 6U))));
        tracep->fullBit(oldp+935,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [6U][2U] >> 5U))));
        tracep->fullBit(oldp+936,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [6U][2U] >> 4U))));
        tracep->fullBit(oldp+937,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [6U][2U] >> 3U))));
        tracep->fullIData(oldp+938,((0xfffffU & ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                  [6U][2U] 
                                                  << 0x11U) 
                                                 | (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                    [6U][1U] 
                                                    >> 0xfU)))),20);
        tracep->fullIData(oldp+939,((0xfffffU & ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                  [6U][1U] 
                                                  << 5U) 
                                                 | (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                    [6U][0U] 
                                                    >> 0x1bU)))),20);
        tracep->fullIData(oldp+940,((0x7ffffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                 [6U][0U] 
                                                 >> 8U))),19);
        tracep->fullCData(oldp+941,((0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                     [6U][0U])),8);
        tracep->fullBit(oldp+942,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [7U][2U] >> 9U))));
        tracep->fullBit(oldp+943,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [7U][2U] >> 8U))));
        tracep->fullBit(oldp+944,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [7U][2U] >> 7U))));
        tracep->fullBit(oldp+945,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [7U][2U] >> 6U))));
        tracep->fullBit(oldp+946,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [7U][2U] >> 5U))));
        tracep->fullBit(oldp+947,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [7U][2U] >> 4U))));
        tracep->fullBit(oldp+948,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                         [7U][2U] >> 3U))));
        tracep->fullIData(oldp+949,((0xfffffU & ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                  [7U][2U] 
                                                  << 0x11U) 
                                                 | (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                    [7U][1U] 
                                                    >> 0xfU)))),20);
        tracep->fullIData(oldp+950,((0xfffffU & ((vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                  [7U][1U] 
                                                  << 5U) 
                                                 | (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                    [7U][0U] 
                                                    >> 0x1bU)))),20);
        tracep->fullIData(oldp+951,((0x7ffffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                                 [7U][0U] 
                                                 >> 8U))),19);
        tracep->fullCData(oldp+952,((0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb
                                     [7U][0U])),8);
        tracep->fullIData(oldp+953,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__trap_base),32);
        tracep->fullBit(oldp+954,((IData)((0xc000U 
                                           == (0xc000U 
                                               & vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__except)))));
        tracep->fullBit(oldp+955,((1U & (((~ (IData)(
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
        tracep->fullBit(oldp+956,((1U & ((IData)((0xc000U 
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
        tracep->fullCData(oldp+957,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched[0]),8);
        tracep->fullCData(oldp+958,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched[1]),8);
        tracep->fullCData(oldp+959,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched[2]),8);
        tracep->fullIData(oldp+960,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_find_vpn2[0]),19);
        tracep->fullIData(oldp+961,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_find_vpn2[1]),19);
        tracep->fullIData(oldp+962,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_find_vpn2[2]),19);
        tracep->fullCData(oldp+963,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched_index[0]),3);
        tracep->fullCData(oldp+964,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched_index[1]),3);
        tracep->fullCData(oldp+965,(vlSelf->mycpu_top__DOT__u_datapath__DOT__cp0_inst__DOT__tlb_matched_index[2]),3);
        tracep->fullCData(oldp+966,((vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                     >> 0x1aU)),6);
        tracep->fullIData(oldp+967,((0xfffffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                                 >> 6U))),20);
        tracep->fullCData(oldp+968,((7U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                           >> 3U))),3);
        tracep->fullBit(oldp+969,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                         >> 2U))));
        tracep->fullBit(oldp+970,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                         >> 1U))));
        tracep->fullBit(oldp+971,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value)));
        tracep->fullSData(oldp+972,((vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                     >> 0x17U)),9);
        tracep->fullIData(oldp+973,((0x7ffffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                                 >> 4U))),19);
        tracep->fullCData(oldp+974,((0xfU & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value)),4);
        tracep->fullIData(oldp+975,((vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                     >> 0xdU)),19);
        tracep->fullCData(oldp+976,((0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                              >> 8U))),5);
        tracep->fullCData(oldp+977,((0xffU & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value)),8);
        tracep->fullCData(oldp+978,((vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                     >> 0x1dU)),3);
        tracep->fullBit(oldp+979,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                         >> 0x1cU))));
        tracep->fullCData(oldp+980,((0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                              >> 0x17U))),5);
        tracep->fullBit(oldp+981,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                         >> 0x16U))));
        tracep->fullCData(oldp+982,((0x3fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                              >> 0x10U))),6);
        tracep->fullCData(oldp+983,((0xffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                              >> 8U))),8);
        tracep->fullCData(oldp+984,((7U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                           >> 5U))),3);
        tracep->fullBit(oldp+985,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                         >> 4U))));
        tracep->fullBit(oldp+986,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                         >> 3U))));
        tracep->fullBit(oldp+987,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                         >> 2U))));
        tracep->fullBit(oldp+988,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                         >> 1U))));
        tracep->fullBit(oldp+989,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value)));
        tracep->fullBit(oldp+990,((vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                   >> 0x1fU)));
        tracep->fullCData(oldp+991,((0x7fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                              >> 0x18U))),7);
        tracep->fullBit(oldp+992,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                         >> 0x17U))));
        tracep->fullCData(oldp+993,((0x7fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                              >> 0x10U))),7);
        tracep->fullCData(oldp+994,((0xffU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                              >> 8U))),8);
        tracep->fullBit(oldp+995,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                         >> 7U))));
        tracep->fullCData(oldp+996,((0x1fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value 
                                              >> 2U))),5);
        tracep->fullCData(oldp+997,((3U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_rt_value)),2);
        tracep->fullIData(oldp+998,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__icache_status),32);
        tracep->fullIData(oldp+999,((0xfffffU & (IData)(
                                                        (vlSelf->mycpu_top__DOT__i_cache_inst__DOT__itlb 
                                                         >> 0x16U)))),20);
        tracep->fullIData(oldp+1000,((0xfffffU & (IData)(
                                                         (vlSelf->mycpu_top__DOT__i_cache_inst__DOT__itlb 
                                                          >> 2U)))),20);
        tracep->fullBit(oldp+1001,((1U & (IData)((vlSelf->mycpu_top__DOT__i_cache_inst__DOT__itlb 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1002,((1U & (IData)(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__itlb))));
        tracep->fullBit(oldp+1003,((2U == (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+1004,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__uncached));
        tracep->fullIData(oldp+1005,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__inst_tag),20);
        tracep->fullIData(oldp+1006,((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg 
                                      >> 0xcU)),20);
        tracep->fullIData(oldp+1007,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__inst_pa),32);
        tracep->fullBit(oldp+1008,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__translation_ok));
        tracep->fullCData(oldp+1009,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__replace_line_addr),6);
        tracep->fullBit(oldp+1010,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__bram_addr_choose));
        tracep->fullQData(oldp+1011,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_data[0]),64);
        tracep->fullQData(oldp+1013,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_data[1]),64);
        tracep->fullIData(oldp+1015,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_tag
                                     [0U]),20);
        tracep->fullIData(oldp+1016,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_tag
                                     [1U]),20);
        tracep->fullCData(oldp+1017,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__data_wea[0]),8);
        tracep->fullCData(oldp+1018,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__data_wea[1]),8);
        tracep->fullBit(oldp+1019,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__tag_wea[0]));
        tracep->fullBit(oldp+1020,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__tag_wea[1]));
        tracep->fullIData(oldp+1021,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__tag_ram_wdata),20);
        tracep->fullCData(oldp+1022,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__tag_compare_valid),2);
        tracep->fullBit(oldp+1023,((0U != (IData)(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__tag_compare_valid))));
        tracep->fullBit(oldp+1024,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_hit_available));
        tracep->fullBit(oldp+1025,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_inst_ok1));
        tracep->fullBit(oldp+1026,((1U & ((IData)(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__tag_compare_valid) 
                                          >> 1U))));
        tracep->fullCData(oldp+1027,((0x3fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg 
                                               >> 6U))),6);
        tracep->fullIData(oldp+1028,(((4U & vlSelf->mycpu_top__DOT__u_datapath__DOT__u_pc_reg__DOT__pc_reg)
                                       ? (IData)((vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_data
                                                  [
                                                  (1U 
                                                   & ((IData)(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__tag_compare_valid) 
                                                      >> 1U))] 
                                                  >> 0x20U))
                                       : (IData)(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_data
                                                 [(1U 
                                                   & ((IData)(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__tag_compare_valid) 
                                                      >> 1U))]))),32);
        tracep->fullIData(oldp+1029,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__cache_inst1),32);
        tracep->fullIData(oldp+1030,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__saved_inst0),32);
        tracep->fullIData(oldp+1031,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__saved_inst1),32);
        tracep->fullBit(oldp+1032,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__saved_inst_ok0));
        tracep->fullBit(oldp+1033,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__saved_inst_ok1));
        tracep->fullCData(oldp+1034,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__axi_cnt),5);
        tracep->fullCData(oldp+1035,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__data_wea
                                     [0U]),8);
        tracep->fullSData(oldp+1036,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__i_data__addra),9);
        tracep->fullQData(oldp+1037,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellout__genblk1__BRA__0__KET____DOT__i_data__doutb),64);
        tracep->fullBit(oldp+1039,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__tag_wea
                                   [0U]));
        tracep->fullIData(oldp+1040,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__tag_ram_wdata),20);
        tracep->fullIData(oldp+1041,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellout__genblk1__BRA__0__KET____DOT__i_tag__doutb),20);
        tracep->fullCData(oldp+1042,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__data_wea
                                     [1U]),8);
        tracep->fullSData(oldp+1043,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__i_data__addra),9);
        tracep->fullQData(oldp+1044,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellout__genblk1__BRA__1__KET____DOT__i_data__doutb),64);
        tracep->fullBit(oldp+1046,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__tag_wea
                                   [1U]));
        tracep->fullIData(oldp+1047,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellout__genblk1__BRA__1__KET____DOT__i_tag__doutb),20);
        tracep->fullBit(oldp+1048,((0U != (IData)(vlSelf->mycpu_top__DOT__data_wen))));
        tracep->fullIData(oldp+1049,((0xfffffU & (IData)(
                                                         (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dtlb 
                                                          >> 0x17U)))),20);
        tracep->fullIData(oldp+1050,((0xfffffU & (IData)(
                                                         (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dtlb 
                                                          >> 3U)))),20);
        tracep->fullBit(oldp+1051,((1U & (IData)((vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dtlb 
                                                  >> 2U)))));
        tracep->fullBit(oldp+1052,((1U & (IData)((vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dtlb 
                                                  >> 1U)))));
        tracep->fullBit(oldp+1053,((1U & (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dtlb))));
        tracep->fullBit(oldp+1054,((2U == (vlSelf->mycpu_top__DOT__data_addr 
                                           >> 0x1eU))));
        tracep->fullBit(oldp+1055,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__M_mem_uncached));
        tracep->fullIData(oldp+1056,((0xfffffU & ((2U 
                                                   == 
                                                   (vlSelf->mycpu_top__DOT__data_addr 
                                                    >> 0x1eU))
                                                   ? 
                                                  (0x1ffffU 
                                                   & (vlSelf->mycpu_top__DOT__data_addr 
                                                      >> 0xcU))
                                                   : (IData)(
                                                             (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dtlb 
                                                              >> 3U))))),20);
        tracep->fullIData(oldp+1057,((vlSelf->mycpu_top__DOT__data_addr 
                                      >> 0xcU)),20);
        tracep->fullIData(oldp+1058,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__M_mem_pa),32);
        tracep->fullBit(oldp+1059,((((0xfffffU & (IData)(
                                                         (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dtlb 
                                                          >> 0x17U))) 
                                     == (vlSelf->mycpu_top__DOT__data_addr 
                                         >> 0xcU)) 
                                    & (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dtlb))));
        tracep->fullBit(oldp+1060,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__translation_ok));
        tracep->fullIData(oldp+1061,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dcache_status),32);
        tracep->fullIData(oldp+1062,(((vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer
                                       [0U][2U] << 0x1aU) 
                                      | (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer
                                         [0U][1U] >> 6U))),32);
        tracep->fullCData(oldp+1063,((3U & (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer
                                            [0U][1U] 
                                            >> 4U))),2);
        tracep->fullCData(oldp+1064,((0xfU & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer
                                      [0U][1U])),4);
        tracep->fullIData(oldp+1065,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer
                                     [0U][0U]),32);
        tracep->fullIData(oldp+1066,(((vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer
                                       [1U][2U] << 0x1aU) 
                                      | (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer
                                         [1U][1U] >> 6U))),32);
        tracep->fullCData(oldp+1067,((3U & (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer
                                            [1U][1U] 
                                            >> 4U))),2);
        tracep->fullCData(oldp+1068,((0xfU & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer
                                      [1U][1U])),4);
        tracep->fullIData(oldp+1069,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer
                                     [1U][0U]),32);
        tracep->fullIData(oldp+1070,(((vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer
                                       [2U][2U] << 0x1aU) 
                                      | (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer
                                         [2U][1U] >> 6U))),32);
        tracep->fullCData(oldp+1071,((3U & (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer
                                            [2U][1U] 
                                            >> 4U))),2);
        tracep->fullCData(oldp+1072,((0xfU & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer
                                      [2U][1U])),4);
        tracep->fullIData(oldp+1073,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer
                                     [2U][0U]),32);
        tracep->fullIData(oldp+1074,(((vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer
                                       [3U][2U] << 0x1aU) 
                                      | (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer
                                         [3U][1U] >> 6U))),32);
        tracep->fullCData(oldp+1075,((3U & (vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer
                                            [3U][1U] 
                                            >> 4U))),2);
        tracep->fullCData(oldp+1076,((0xfU & vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer
                                      [3U][1U])),4);
        tracep->fullIData(oldp+1077,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer
                                     [3U][0U]),32);
        tracep->fullCData(oldp+1078,((3U & ((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_ctrl) 
                                            >> 3U))),2);
        tracep->fullCData(oldp+1079,((3U & ((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_ctrl) 
                                            >> 1U))),2);
        tracep->fullBit(oldp+1080,((1U & (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_ctrl))));
        tracep->fullBit(oldp+1081,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__current_mmio_write_saved));
        tracep->fullBit(oldp+1082,(((3U & ((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_ctrl) 
                                           >> 3U)) 
                                    != (3U & ((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_ctrl) 
                                              >> 1U)))));
        tracep->fullBit(oldp+1083,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_busy));
        tracep->fullBit(oldp+1084,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_full));
        tracep->fullCData(oldp+1085,((0x3fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_alu_res 
                                               >> 6U))),6);
        tracep->fullCData(oldp+1086,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__axi_wcnt),4);
        tracep->fullSData(oldp+1087,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_replace_addr),10);
        tracep->fullSData(oldp+1088,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_read_ready_addr),10);
        tracep->fullSData(oldp+1089,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_replace_write_addr),10);
        tracep->fullCData(oldp+1090,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_replace_cnt),5);
        tracep->fullIData(oldp+1091,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[0]),32);
        tracep->fullIData(oldp+1092,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[1]),32);
        tracep->fullIData(oldp+1093,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[2]),32);
        tracep->fullIData(oldp+1094,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[3]),32);
        tracep->fullIData(oldp+1095,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[4]),32);
        tracep->fullIData(oldp+1096,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[5]),32);
        tracep->fullIData(oldp+1097,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[6]),32);
        tracep->fullIData(oldp+1098,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[7]),32);
        tracep->fullIData(oldp+1099,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[8]),32);
        tracep->fullIData(oldp+1100,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[9]),32);
        tracep->fullIData(oldp+1101,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[10]),32);
        tracep->fullIData(oldp+1102,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[11]),32);
        tracep->fullIData(oldp+1103,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[12]),32);
        tracep->fullIData(oldp+1104,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[13]),32);
        tracep->fullIData(oldp+1105,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[14]),32);
        tracep->fullIData(oldp+1106,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_r_buffer[15]),32);
        tracep->fullBit(oldp+1107,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_use_replace_addr));
        tracep->fullBit(oldp+1108,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_data_valid));
        tracep->fullBit(oldp+1109,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__fence_working));
        tracep->fullBit(oldp+1110,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__replace_working));
        tracep->fullBit(oldp+1111,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__ar_handshake));
        tracep->fullBit(oldp+1112,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__aw_handshake));
        tracep->fullBit(oldp+1113,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__replace_writeback));
        tracep->fullBit(oldp+1114,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__fence_way));
        tracep->fullBit(oldp+1115,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__tag_wea[0]));
        tracep->fullBit(oldp+1116,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__tag_wea[1]));
        tracep->fullCData(oldp+1117,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_replace_wea[0]),4);
        tracep->fullCData(oldp+1118,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_replace_wea[1]),4);
        tracep->fullCData(oldp+1119,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_wea[0]),4);
        tracep->fullCData(oldp+1120,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_wea[1]),4);
        tracep->fullIData(oldp+1121,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__tag_ram_wdata),20);
        tracep->fullIData(oldp+1122,((vlSelf->mycpu_top__DOT__d_cache_inst__DOT__M_mem_pa 
                                      >> 0xcU)),20);
        tracep->fullBit(oldp+1123,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_addr_choose));
        tracep->fullSData(oldp+1124,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_word_addr),10);
        tracep->fullCData(oldp+1125,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_line_addr),6);
        tracep->fullSData(oldp+1126,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_write_addr),10);
        tracep->fullBit(oldp+1127,((4U == vlSelf->mycpu_top__DOT__d_cache_inst__DOT__dcache_status)));
        tracep->fullIData(oldp+1128,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__cache_data[0]),32);
        tracep->fullIData(oldp+1129,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__cache_data[1]),32);
        tracep->fullIData(oldp+1130,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__cache_tag
                                     [0U]),20);
        tracep->fullIData(oldp+1131,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__cache_tag
                                     [1U]),20);
        tracep->fullCData(oldp+1132,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__tag_compare_valid),2);
        tracep->fullBit(oldp+1133,((0U != (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__tag_compare_valid))));
        tracep->fullBit(oldp+1134,(((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__M_mem_uncached) 
                                    & (~ (IData)((0U 
                                                  != (IData)(vlSelf->mycpu_top__DOT__data_wen)))))));
        tracep->fullBit(oldp+1135,((((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__M_mem_uncached) 
                                     & (0U != (IData)(vlSelf->mycpu_top__DOT__data_wen))) 
                                    & (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__store_buffer_full))));
        tracep->fullBit(oldp+1136,((1U & ((~ (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__M_mem_uncached)) 
                                          & (~ (IData)(
                                                       (0U 
                                                        != (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__tag_compare_valid))))))));
        tracep->fullBit(oldp+1137,((1U & (~ (IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__translation_ok)))));
        tracep->fullBit(oldp+1138,((1U & ((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__tag_compare_valid) 
                                          >> 1U))));
        tracep->fullCData(oldp+1139,((0x3fU & (vlSelf->mycpu_top__DOT__data_addr 
                                               >> 6U))),6);
        tracep->fullIData(oldp+1140,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__saved_rdata),32);
        tracep->fullSData(oldp+1141,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__last_line_addr),10);
        tracep->fullIData(oldp+1142,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__last_wea[0]),32);
        tracep->fullIData(oldp+1143,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__last_wea[1]),32);
        tracep->fullIData(oldp+1144,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__last_wdata),32);
        tracep->fullIData(oldp+1145,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__cache_data_forward[0]),32);
        tracep->fullIData(oldp+1146,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__cache_data_forward[1]),32);
        tracep->fullCData(oldp+1147,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_wea
                                     [0U]),4);
        tracep->fullIData(oldp+1148,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT____Vcellout__genblk1__BRA__0__KET____DOT__d_data__doutb),32);
        tracep->fullBit(oldp+1149,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__tag_wea
                                   [0U]));
        tracep->fullCData(oldp+1150,((0x3fU & ((IData)(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__bram_replace_addr) 
                                               >> 4U))),6);
        tracep->fullIData(oldp+1151,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__tag_ram_wdata),20);
        tracep->fullIData(oldp+1152,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT____Vcellout__genblk1__BRA__0__KET____DOT__d_tag__doutb),20);
        tracep->fullCData(oldp+1153,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_wea
                                     [1U]),4);
        tracep->fullIData(oldp+1154,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT____Vcellout__genblk1__BRA__1__KET____DOT__d_data__doutb),32);
        tracep->fullBit(oldp+1155,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__tag_wea
                                   [1U]));
        tracep->fullIData(oldp+1156,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT____Vcellout__genblk1__BRA__1__KET____DOT__d_tag__doutb),20);
        tracep->fullBit(oldp+1157,(vlSelf->mycpu_top__DOT__u_arbitrater__DOT__ar_sel));
        tracep->fullBit(oldp+1158,(vlSelf->mycpu_top__DOT__u_arbitrater__DOT__ar_sel_lock));
        tracep->fullBit(oldp+1159,(vlSelf->mycpu_top__DOT__u_arbitrater__DOT__ar_sel_lock_val));
        tracep->fullBit(oldp+1160,(((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_ena) 
                                    & ((~ (IData)((0U 
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
        tracep->fullIData(oldp+1161,(((0U != (0x1fU 
                                              & (1U 
                                                 ^ 
                                                 ((vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                   << 5U) 
                                                  | (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                     >> 0x1bU)))))
                                       ? vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_rs_value_tmp
                                       : ((0xf0000000U 
                                           & ((IData)(4U) 
                                              + vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[1U])) 
                                          | (0xffffffcU 
                                             & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                << 2U))))),32);
        tracep->fullIData(oldp+1162,((((- (IData)((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_pred_take))) 
                                       & vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_branch_target) 
                                      | ((- (IData)(
                                                    (1U 
                                                     & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_pred_take))))) 
                                         & ((0U != 
                                             (0x1fU 
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
                                                      << 2U))))))),32);
        tracep->fullBit(oldp+1163,(((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_is_bj) 
                                    & (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_ena))));
        tracep->fullIData(oldp+1164,(((0U != (0x1fU 
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
                                               : vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf
                                              [(0x1fU 
                                                & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                   >> 0x15U))]))
                                       : 0U)),32);
        tracep->fullIData(oldp+1165,(((0U != (0x1fU 
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
                                               : vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf
                                              [(0x1fU 
                                                & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line1[0U] 
                                                   >> 0x10U))]))
                                       : 0U)),32);
        tracep->fullIData(oldp+1166,(((0U != (0x1fU 
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
                                               : vlSelf->mycpu_top__DOT__u_datapath__DOT__u_regfile__DOT__rf
                                              [(0x1fU 
                                                & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_inst_fifo__DOT__read_line2[0U] 
                                                   >> 0x10U))]))
                                       : 0U)),32);
        tracep->fullIData(oldp+1167,((((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_forward_top__alu_wen1) 
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
                                               : (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_reg_wen) 
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
        tracep->fullIData(oldp+1168,((((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_forward_top__alu_wen1) 
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
                                               : (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_reg_wen) 
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
        tracep->fullIData(oldp+1169,((((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_forward_top__alu_wen1) 
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
                                               : (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_reg_wen) 
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
        tracep->fullIData(oldp+1170,((((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_forward_top__alu_wen1) 
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
                                               : (((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_reg_wen) 
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
        tracep->fullBit(oldp+1171,(((2U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E1cs)
                                     ? (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_start1)
                                     : (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_start2))));
        tracep->fullBit(oldp+1172,((1U & ((((((vlSelf->mycpu_top__DOT__u_datapath__DOT__E2cs 
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
        tracep->fullQData(oldp+1173,((((- (QData)((IData)(
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
        tracep->fullIData(oldp+1175,((((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_sign) 
                                       & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_a 
                                          >> 0x1fU))
                                       ? ((IData)(1U) 
                                          + (~ vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_a))
                                       : vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_a)),32);
        tracep->fullIData(oldp+1176,((((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_sign) 
                                       & (vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_b 
                                          >> 0x1fU))
                                       ? ((IData)(1U) 
                                          + (~ vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_b))
                                       : vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_b)),32);
        tracep->fullBit(oldp+1177,(vlSelf->mycpu_top__DOT__inst_en));
        tracep->fullIData(oldp+1178,(vlSelf->mycpu_top__DOT__pc_next_dp),32);
        tracep->fullBit(oldp+1179,(vlSelf->mycpu_top__DOT__i_cache_stall));
        tracep->fullBit(oldp+1180,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall));
        tracep->fullBit(oldp+1181,(vlSelf->mycpu_top__DOT__inst_data_ok1));
        tracep->fullBit(oldp+1182,(vlSelf->mycpu_top__DOT__inst_data_ok2));
        tracep->fullIData(oldp+1183,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_res),32);
        tracep->fullBit(oldp+1184,(vlSelf->mycpu_top__DOT__i_arready));
        tracep->fullIData(oldp+1185,(vlSelf->mycpu_top__DOT__i_rdata),32);
        tracep->fullBit(oldp+1186,(vlSelf->mycpu_top__DOT__i_rvalid));
        tracep->fullBit(oldp+1187,(vlSelf->mycpu_top__DOT__d_arready));
        tracep->fullIData(oldp+1188,(vlSelf->mycpu_top__DOT__d_rdata),32);
        tracep->fullBit(oldp+1189,(vlSelf->mycpu_top__DOT__d_rlast));
        tracep->fullBit(oldp+1190,(vlSelf->mycpu_top__DOT__d_rvalid));
        tracep->fullBit(oldp+1191,((1U & (~ (IData)(vlSelf->mycpu_top__DOT__i_cache_stall)))));
        tracep->fullBit(oldp+1192,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_ena));
        tracep->fullBit(oldp+1193,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_slave_ena));
        tracep->fullBit(oldp+1194,((1U & (~ (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_hazard__DOT__longest_stall)))));
        tracep->fullBit(oldp+1195,(vlSelf->mycpu_top__DOT__u_datapath__DOT__W_ena));
        tracep->fullBit(oldp+1196,(((((IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_cp0_jump) 
                                      | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_flush_all)) 
                                     | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_bj)) 
                                    | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_bj))));
        tracep->fullBit(oldp+1197,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_flush));
        tracep->fullBit(oldp+1198,(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_flush));
        tracep->fullBit(oldp+1199,(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_cp0_jump));
        tracep->fullBit(oldp+1200,((1U & ((~ (IData)(vlSelf->mycpu_top__DOT__i_cache_stall)) 
                                          | (IData)(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_cp0_jump)))));
        tracep->fullBit(oldp+1201,(vlSelf->mycpu_top__DOT__u_datapath__DOT__delay_sel_rst));
        tracep->fullBit(oldp+1202,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_bj));
        tracep->fullBit(oldp+1203,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_pred_take));
        tracep->fullIData(oldp+1204,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D_master_rs_value_tmp),32);
        tracep->fullBit(oldp+1205,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_bj));
        tracep->fullBit(oldp+1206,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except 
                                          >> 0x10U))));
        tracep->fullBit(oldp+1207,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except 
                                          >> 0xfU))));
        tracep->fullBit(oldp+1208,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except 
                                          >> 0xeU))));
        tracep->fullBit(oldp+1209,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except 
                                          >> 0xdU))));
        tracep->fullBit(oldp+1210,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except 
                                          >> 0xcU))));
        tracep->fullBit(oldp+1211,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except 
                                          >> 0xbU))));
        tracep->fullBit(oldp+1212,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except 
                                          >> 0xaU))));
        tracep->fullBit(oldp+1213,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except 
                                          >> 9U))));
        tracep->fullBit(oldp+1214,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except 
                                          >> 8U))));
        tracep->fullBit(oldp+1215,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except 
                                          >> 7U))));
        tracep->fullBit(oldp+1216,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except 
                                          >> 6U))));
        tracep->fullBit(oldp+1217,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except 
                                          >> 5U))));
        tracep->fullBit(oldp+1218,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except 
                                          >> 4U))));
        tracep->fullBit(oldp+1219,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except 
                                          >> 3U))));
        tracep->fullBit(oldp+1220,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except 
                                          >> 2U))));
        tracep->fullBit(oldp+1221,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except 
                                          >> 1U))));
        tracep->fullBit(oldp+1222,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except)));
        tracep->fullBit(oldp+1223,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except 
                                          >> 0x10U))));
        tracep->fullBit(oldp+1224,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except 
                                          >> 0xfU))));
        tracep->fullBit(oldp+1225,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except 
                                          >> 0xeU))));
        tracep->fullBit(oldp+1226,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except 
                                          >> 0xdU))));
        tracep->fullBit(oldp+1227,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except 
                                          >> 0xcU))));
        tracep->fullBit(oldp+1228,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except 
                                          >> 0xbU))));
        tracep->fullBit(oldp+1229,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except 
                                          >> 0xaU))));
        tracep->fullBit(oldp+1230,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except 
                                          >> 9U))));
        tracep->fullBit(oldp+1231,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except 
                                          >> 8U))));
        tracep->fullBit(oldp+1232,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except 
                                          >> 7U))));
        tracep->fullBit(oldp+1233,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except 
                                          >> 6U))));
        tracep->fullBit(oldp+1234,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except 
                                          >> 5U))));
        tracep->fullBit(oldp+1235,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except 
                                          >> 4U))));
        tracep->fullBit(oldp+1236,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except 
                                          >> 3U))));
        tracep->fullBit(oldp+1237,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except 
                                          >> 2U))));
        tracep->fullBit(oldp+1238,((1U & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except 
                                          >> 1U))));
        tracep->fullBit(oldp+1239,((1U & vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except)));
        tracep->fullIData(oldp+1240,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_res),32);
        tracep->fullBit(oldp+1241,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_overflow));
        tracep->fullBit(oldp+1242,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_overflow));
        tracep->fullBit(oldp+1243,(vlSelf->mycpu_top__DOT__u_datapath__DOT__M_master_flush_all));
        tracep->fullBit(oldp+1244,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D2E_clear1));
        tracep->fullBit(oldp+1245,(vlSelf->mycpu_top__DOT__u_datapath__DOT__D2E_clear2));
        tracep->fullBit(oldp+1246,(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_inst_fifo__fifo_rst));
        tracep->fullBit(oldp+1247,(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_regfile__wen1));
        tracep->fullBit(oldp+1248,(vlSelf->mycpu_top__DOT__u_datapath__DOT____Vcellinp__u_regfile__wen2));
        tracep->fullBit(oldp+1249,((0U != vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_except)));
        tracep->fullBit(oldp+1250,((0U != vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_except)));
        tracep->fullIData(oldp+1251,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__y1_tmp),32);
        tracep->fullBit(oldp+1252,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_sign1));
        tracep->fullBit(oldp+1253,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_start1));
        tracep->fullBit(oldp+1254,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_sign1));
        tracep->fullBit(oldp+1255,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_start1));
        tracep->fullBit(oldp+1256,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_sign2));
        tracep->fullBit(oldp+1257,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_start2));
        tracep->fullBit(oldp+1258,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_sign2));
        tracep->fullBit(oldp+1259,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_start2));
        tracep->fullBit(oldp+1260,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_sign));
        tracep->fullBit(oldp+1261,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_sign));
        tracep->fullBit(oldp+1262,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__div_start));
        tracep->fullQData(oldp+1263,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_result),64);
        tracep->fullQData(oldp+1265,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluA__DOT__temp_aluout_64),64);
        tracep->fullQData(oldp+1267,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluB__DOT__temp_aluout_64),64);
        tracep->fullIData(oldp+1269,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluA__DOT__i),32);
        tracep->fullIData(oldp+1270,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__u_aluB__DOT__i),32);
        tracep->fullIData(oldp+1271,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__cal_a),32);
        tracep->fullIData(oldp+1272,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_alu_top__DOT__mul_inst__DOT__cal_b),32);
        tracep->fullSData(oldp+1273,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__bram_word_addr),9);
        tracep->fullCData(oldp+1274,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT__bram_line_addr),6);
        tracep->fullCData(oldp+1275,((0x3fU & (vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_res 
                                               >> 6U))),6);
        tracep->fullQData(oldp+1276,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__0__KET____DOT__i_data__dina),64);
        tracep->fullQData(oldp+1278,(vlSelf->mycpu_top__DOT__i_cache_inst__DOT____Vcellinp__genblk1__BRA__1__KET____DOT__i_data__dina),64);
        tracep->fullIData(oldp+1280,(vlSelf->mycpu_top__DOT__d_cache_inst__DOT__data_bram_wdata),32);
        tracep->fullBit(oldp+1281,(vlSelf->aclk));
        tracep->fullBit(oldp+1282,(vlSelf->aresetn));
        tracep->fullCData(oldp+1283,(vlSelf->ext_int),6);
        tracep->fullCData(oldp+1284,(vlSelf->arid),4);
        tracep->fullIData(oldp+1285,(vlSelf->araddr),32);
        tracep->fullCData(oldp+1286,(vlSelf->arlen),8);
        tracep->fullCData(oldp+1287,(vlSelf->arsize),3);
        tracep->fullCData(oldp+1288,(vlSelf->arburst),2);
        tracep->fullCData(oldp+1289,(vlSelf->arlock),2);
        tracep->fullCData(oldp+1290,(vlSelf->arcache),4);
        tracep->fullCData(oldp+1291,(vlSelf->arprot),3);
        tracep->fullBit(oldp+1292,(vlSelf->arvalid));
        tracep->fullBit(oldp+1293,(vlSelf->arready));
        tracep->fullCData(oldp+1294,(vlSelf->rid),4);
        tracep->fullIData(oldp+1295,(vlSelf->rdata),32);
        tracep->fullCData(oldp+1296,(vlSelf->rresp),2);
        tracep->fullBit(oldp+1297,(vlSelf->rlast));
        tracep->fullBit(oldp+1298,(vlSelf->rvalid));
        tracep->fullBit(oldp+1299,(vlSelf->rready));
        tracep->fullCData(oldp+1300,(vlSelf->awid),4);
        tracep->fullIData(oldp+1301,(vlSelf->awaddr),32);
        tracep->fullCData(oldp+1302,(vlSelf->awlen),8);
        tracep->fullCData(oldp+1303,(vlSelf->awsize),3);
        tracep->fullCData(oldp+1304,(vlSelf->awburst),2);
        tracep->fullCData(oldp+1305,(vlSelf->awlock),2);
        tracep->fullCData(oldp+1306,(vlSelf->awcache),4);
        tracep->fullCData(oldp+1307,(vlSelf->awprot),3);
        tracep->fullBit(oldp+1308,(vlSelf->awvalid));
        tracep->fullBit(oldp+1309,(vlSelf->awready));
        tracep->fullCData(oldp+1310,(vlSelf->wid),4);
        tracep->fullIData(oldp+1311,(vlSelf->wdata),32);
        tracep->fullCData(oldp+1312,(vlSelf->wstrb),4);
        tracep->fullBit(oldp+1313,(vlSelf->wlast));
        tracep->fullBit(oldp+1314,(vlSelf->wvalid));
        tracep->fullBit(oldp+1315,(vlSelf->wready));
        tracep->fullCData(oldp+1316,(vlSelf->bid),4);
        tracep->fullCData(oldp+1317,(vlSelf->bresp),2);
        tracep->fullBit(oldp+1318,(vlSelf->bvalid));
        tracep->fullBit(oldp+1319,(vlSelf->bready));
        tracep->fullIData(oldp+1320,(vlSelf->debug_wb_pc),32);
        tracep->fullCData(oldp+1321,(vlSelf->debug_wb_rf_wen),4);
        tracep->fullCData(oldp+1322,(vlSelf->debug_wb_rf_wnum),5);
        tracep->fullIData(oldp+1323,(vlSelf->debug_wb_rf_wdata),32);
        tracep->fullIData(oldp+1324,(vlSelf->debug_cp0_count),32);
        tracep->fullIData(oldp+1325,(vlSelf->debug_cp0_random),32);
        tracep->fullIData(oldp+1326,(vlSelf->debug_cp0_cause),32);
        tracep->fullBit(oldp+1327,(vlSelf->debug_int));
        tracep->fullBit(oldp+1328,(vlSelf->debug_commit));
        tracep->fullBit(oldp+1329,((1U & (~ (IData)(vlSelf->aresetn)))));
        tracep->fullBit(oldp+1330,(((~ (IData)(vlSelf->rid)) 
                                    & (IData)(vlSelf->rlast))));
        tracep->fullCData(oldp+1331,((0x1fU & (IData)(vlSelf->ext_int))),5);
        tracep->fullBit(oldp+1332,((1U & (IData)(vlSelf->rid))));
        tracep->fullBit(oldp+1333,(vlSelf->mycpu_top__DOT__no_cache_d));
        tracep->fullBit(oldp+1334,(vlSelf->mycpu_top__DOT__no_cache_i));
        tracep->fullIData(oldp+1335,(vlSelf->mycpu_top__DOT__pcF),32);
        tracep->fullIData(oldp+1336,(vlSelf->mycpu_top__DOT__pc_next),32);
        tracep->fullBit(oldp+1337,(1U));
        tracep->fullBit(oldp+1338,(vlSelf->mycpu_top__DOT__no_cache_E));
        tracep->fullBit(oldp+1339,(0U));
        tracep->fullBit(oldp+1340,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_stall));
        tracep->fullBit(oldp+1341,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_stall));
        tracep->fullIData(oldp+1342,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_res_tmp),32);
        tracep->fullQData(oldp+1343,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_master_alu_out64),64);
        tracep->fullQData(oldp+1345,(vlSelf->mycpu_top__DOT__u_datapath__DOT__E_slave_alu_out64),64);
        tracep->fullIData(oldp+1347,(vlSelf->mycpu_top__DOT__u_datapath__DOT__W_master_alu_res),32);
        tracep->fullIData(oldp+1348,(vlSelf->mycpu_top__DOT__u_datapath__DOT__W_slave_alu_res),32);
        tracep->fullIData(oldp+1349,(6U),32);
        tracep->fullIData(oldp+1350,(4U),32);
        tracep->fullCData(oldp+1351,(0U),2);
        tracep->fullCData(oldp+1352,(1U),2);
        tracep->fullCData(oldp+1353,(3U),2);
        tracep->fullCData(oldp+1354,(2U),2);
        tracep->fullIData(oldp+1355,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__i),32);
        tracep->fullIData(oldp+1356,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_branch_predict__DOT__j),32);
        tracep->fullBit(oldp+1357,(vlSelf->mycpu_top__DOT__u_datapath__DOT__u_issue_ctrl__DOT__D_slave_hilowrite));
        tracep->fullIData(oldp+1358,(0U),32);
        tracep->fullIData(oldp+1359,(0x18003U),32);
        tracep->fullBit(oldp+1360,(1U));
        tracep->fullCData(oldp+1361,(0U),3);
        tracep->fullCData(oldp+1362,(0U),3);
        tracep->fullSData(oldp+1363,(0U),9);
        tracep->fullBit(oldp+1364,(0U));
        tracep->fullCData(oldp+1365,(0U),2);
        tracep->fullCData(oldp+1366,(0U),3);
        tracep->fullCData(oldp+1367,(1U),3);
        tracep->fullCData(oldp+1368,(0U),3);
        tracep->fullBit(oldp+1369,(0U));
        tracep->fullCData(oldp+1370,(3U),3);
        tracep->fullBit(oldp+1371,(0U));
        tracep->fullCData(oldp+1372,(7U),6);
        tracep->fullCData(oldp+1373,(0U),3);
        tracep->fullCData(oldp+1374,(5U),3);
        tracep->fullCData(oldp+1375,(1U),3);
        tracep->fullCData(oldp+1376,(0U),3);
        tracep->fullCData(oldp+1377,(5U),3);
        tracep->fullCData(oldp+1378,(1U),3);
        tracep->fullBit(oldp+1379,(0U));
        tracep->fullBit(oldp+1380,(0U));
        tracep->fullBit(oldp+1381,(0U));
        tracep->fullBit(oldp+1382,(0U));
        tracep->fullBit(oldp+1383,(0U));
        tracep->fullBit(oldp+1384,(0U));
        tracep->fullBit(oldp+1385,(0U));
        tracep->fullIData(oldp+1386,(2U),32);
        tracep->fullIData(oldp+1387,(0xcU),32);
        tracep->fullIData(oldp+1388,(0x14U),32);
        tracep->fullIData(oldp+1389,(9U),32);
        tracep->fullIData(oldp+1390,(0x40U),32);
        tracep->fullIData(oldp+1391,(0x10U),32);
        tracep->fullIData(oldp+1392,(0x200U),32);
        tracep->fullIData(oldp+1393,(0x20U),32);
        tracep->fullIData(oldp+1394,(0xaU),32);
        tracep->fullIData(oldp+1395,(0x400U),32);
        tracep->fullIData(oldp+1396,(8U),32);
    }
}
