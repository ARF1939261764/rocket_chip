// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestDriver__Syms.h"
#include "VTestDriver___024root.h"

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1739(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1739\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                       & (5U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[3U] 
                        >> 0x13U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:976: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'B' channel Hint is corrupt (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 976, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:978: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 978, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((3U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                   >> 0xcU)) | ((0x2010U 
                                                 == 
                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                  >> 0xcU)) 
                                                | ((4U 
                                                    == 
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                     >> 0xcU)) 
                                                   | ((0x54000U 
                                                       == 
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                        >> 0xcU)) 
                                                      | ((3U 
                                                          == 
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                           >> 0x1aU)) 
                                                         | ((0x200U 
                                                             == 
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                              >> 0x10U)) 
                                                            | ((0U 
                                                                == 
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                 >> 0xcU)) 
                                                               | ((1U 
                                                                   == 
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                    >> 0x10U)) 
                                                                  | ((0x100U 
                                                                      == 
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                       >> 0xcU)) 
                                                                     | ((0x110U 
                                                                         == 
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                          >> 0xcU)) 
                                                                        | ((8U 
                                                                            == 
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                             >> 0x1cU)) 
                                                                           | (3U 
                                                                              == 
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                               >> 0x1dU))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:982: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel ProbeAck carries unmanaged address (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 982, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:984: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 984, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1740(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1740\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (3U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:988: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel ProbeAck smaller than a beat (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 988, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:990: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 990, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_size))) 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:994: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel ProbeAck address not aligned to size (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 994, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:996: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 996, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1741(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1741\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (6U == (6U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_param)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1000: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel ProbeAck carries invalid report param (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1000, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1002: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1002, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((3U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                   >> 0xcU)) | ((0x2010U 
                                                 == 
                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                  >> 0xcU)) 
                                                | ((4U 
                                                    == 
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                     >> 0xcU)) 
                                                   | ((0x54000U 
                                                       == 
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                        >> 0xcU)) 
                                                      | ((3U 
                                                          == 
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                           >> 0x1aU)) 
                                                         | ((0x200U 
                                                             == 
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                              >> 0x10U)) 
                                                            | ((0U 
                                                                == 
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                 >> 0xcU)) 
                                                               | ((1U 
                                                                   == 
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                    >> 0x10U)) 
                                                                  | ((0x100U 
                                                                      == 
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                       >> 0xcU)) 
                                                                     | ((0x110U 
                                                                         == 
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                          >> 0xcU)) 
                                                                        | ((8U 
                                                                            == 
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                             >> 0x1cU)) 
                                                                           | (3U 
                                                                              == 
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                               >> 0x1dU))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1006: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel ProbeAckData carries unmanaged address (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1006, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1008: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1008, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1742(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1742\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (3U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1012: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel ProbeAckData smaller than a beat (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1012, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1014: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1014, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_size))) 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1018: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel ProbeAckData address not aligned to size (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1018, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1020: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1020, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1743(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1743\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (6U == (6U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_param)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1024: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel ProbeAckData carries invalid report param (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1024, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1026: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1026, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ (((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_size)) 
                            & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_size))) 
                           & (8U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                     >> 0x1cU))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1030: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel carries Release type unsupported by manager (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1030, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1032: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1032, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1744(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1744\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_source)) 
                             & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_size))) 
                            & (0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_size))) 
                           & ((((((((((0U == ((0x7fffcU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                  >> 0xdU)) 
                                              | (3U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                    >> 0xcU)))) 
                                      | (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                >> 0xcU))) 
                                     | (1U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                               >> 0x10U))) 
                                    | (0U == ((0x7fff0U 
                                               & (0x80U 
                                                  ^ 
                                                  (0x7fff0U 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                      >> 0xdU)))) 
                                              | (0xfU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                    >> 0xcU))))) 
                                   | (0x200U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                 >> 0x10U))) 
                                  | (0x2010U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                 >> 0xcU))) 
                                 | (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                           >> 0x1aU))) 
                                | (0x54000U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                >> 0xcU))) 
                               | (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                         >> 0x1dU))) 
                              | (8U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                        >> 0x1cU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1036: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1036, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1038: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1038, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1745(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1745\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (3U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1042: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel Release smaller than a beat (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1042, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1044: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1044, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_size))) 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1048: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel Release address not aligned to size (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1048, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1050: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1050, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1746(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1746\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (6U == (6U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_param)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1054: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel Release carries invalid report param (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1054, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1056: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1056, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ (((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_size)) 
                            & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_size))) 
                           & (8U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                     >> 0x1cU))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1060: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel carries ReleaseData type unsupported by manager (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1060, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1062: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1062, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1747(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1747\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_source)) 
                             & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_size))) 
                            & (0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_size))) 
                           & ((((((((((0U == ((0x7fffcU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                  >> 0xdU)) 
                                              | (3U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                    >> 0xcU)))) 
                                      | (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                >> 0xcU))) 
                                     | (1U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                               >> 0x10U))) 
                                    | (0U == ((0x7fff0U 
                                               & (0x80U 
                                                  ^ 
                                                  (0x7fff0U 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                      >> 0xdU)))) 
                                              | (0xfU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                    >> 0xcU))))) 
                                   | (0x200U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                 >> 0x10U))) 
                                  | (0x2010U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                 >> 0xcU))) 
                                 | (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                           >> 0x1aU))) 
                                | (0x54000U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                >> 0xcU))) 
                               | (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                         >> 0x1dU))) 
                              | (8U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                        >> 0x1cU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1066: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1066, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1068: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1068, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1748(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1748\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (3U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1072: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel ReleaseData smaller than a beat (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1072, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1074: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1074, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_size))) 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1078: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel ReleaseData address not aligned to size (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1078, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1080: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1080, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1749(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1749\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (6U == (6U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_param)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1084: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel ReleaseData carries invalid report param (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1084, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1086: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1086, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((3U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                   >> 0xcU)) | ((0x2010U 
                                                 == 
                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                  >> 0xcU)) 
                                                | ((4U 
                                                    == 
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                     >> 0xcU)) 
                                                   | ((0x54000U 
                                                       == 
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                        >> 0xcU)) 
                                                      | ((3U 
                                                          == 
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                           >> 0x1aU)) 
                                                         | ((0x200U 
                                                             == 
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                              >> 0x10U)) 
                                                            | ((0U 
                                                                == 
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                 >> 0xcU)) 
                                                               | ((1U 
                                                                   == 
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                    >> 0x10U)) 
                                                                  | ((0x100U 
                                                                      == 
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                       >> 0xcU)) 
                                                                     | ((0x110U 
                                                                         == 
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                          >> 0xcU)) 
                                                                        | ((8U 
                                                                            == 
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                             >> 0x1cU)) 
                                                                           | (3U 
                                                                              == 
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                               >> 0x1dU))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1090: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel AccessAck carries unmanaged address (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1090, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1092: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1092, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1750(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1750\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_size))) 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1096: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel AccessAck address not aligned to size (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1096, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1098: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1098, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1102: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel AccessAck carries invalid param (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1102, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1104: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1104, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1751(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1751\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((3U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                   >> 0xcU)) | ((0x2010U 
                                                 == 
                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                  >> 0xcU)) 
                                                | ((4U 
                                                    == 
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                     >> 0xcU)) 
                                                   | ((0x54000U 
                                                       == 
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                        >> 0xcU)) 
                                                      | ((3U 
                                                          == 
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                           >> 0x1aU)) 
                                                         | ((0x200U 
                                                             == 
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                              >> 0x10U)) 
                                                            | ((0U 
                                                                == 
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                 >> 0xcU)) 
                                                               | ((1U 
                                                                   == 
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                    >> 0x10U)) 
                                                                  | ((0x100U 
                                                                      == 
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                       >> 0xcU)) 
                                                                     | ((0x110U 
                                                                         == 
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                          >> 0xcU)) 
                                                                        | ((8U 
                                                                            == 
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                             >> 0x1cU)) 
                                                                           | (3U 
                                                                              == 
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                               >> 0x1dU))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1108: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel AccessAckData carries unmanaged address (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1108, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1110: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1110, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1752(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1752\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_size))) 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1114: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel AccessAckData address not aligned to size (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1114, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1116: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1116, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1120: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel AccessAckData carries invalid param (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1120, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1122: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1122, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1753(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1753\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((3U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                   >> 0xcU)) | ((0x2010U 
                                                 == 
                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                  >> 0xcU)) 
                                                | ((4U 
                                                    == 
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                     >> 0xcU)) 
                                                   | ((0x54000U 
                                                       == 
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                        >> 0xcU)) 
                                                      | ((3U 
                                                          == 
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                           >> 0x1aU)) 
                                                         | ((0x200U 
                                                             == 
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                              >> 0x10U)) 
                                                            | ((0U 
                                                                == 
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                 >> 0xcU)) 
                                                               | ((1U 
                                                                   == 
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                    >> 0x10U)) 
                                                                  | ((0x100U 
                                                                      == 
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                       >> 0xcU)) 
                                                                     | ((0x110U 
                                                                         == 
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                          >> 0xcU)) 
                                                                        | ((8U 
                                                                            == 
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                             >> 0x1cU)) 
                                                                           | (3U 
                                                                              == 
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                               >> 0x1dU))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1126: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel HintAck carries unmanaged address (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1126, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1128: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1128, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1754(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1754\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_size))) 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1132: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel HintAck address not aligned to size (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1132, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1134: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1134, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1138: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel HintAck carries invalid param (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1138, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1140: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1140, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1755(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1755\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_opcode) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__opcode))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1144: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1144, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1146: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1146, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_param) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1150: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'A' channel param changed within multibeat operation (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1150, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1152: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1152, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1756(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1756\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1156: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'A' channel size changed within multibeat operation (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1156, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1158: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1158, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_source) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1162: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'A' channel source changed within multibeat operation (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1162, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1164: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1164, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1757(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1757\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                        != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__address)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1168: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'A' channel address changed with multibeat operation (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1168, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1170: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1170, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__opcode_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1174: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at HellaCache.scala:269:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1174, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1176: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1176, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1758(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1758\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 3U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__param_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1180: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'D' channel param changed within multibeat operation (connected at HellaCache.scala:269:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1180, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1182: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1182, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                 >> 5U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__size_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1186: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'D' channel size changed within multibeat operation (connected at HellaCache.scala:269:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1186, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1188: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1188, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1759(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1759\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 9U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__source_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1192: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'D' channel source changed within multibeat operation (connected at HellaCache.scala:269:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1192, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1194: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1194, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 0xbU)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__sink))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1198: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'D' channel sink changed with multibeat operation (connected at HellaCache.scala:269:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1198, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1200: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1200, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1760(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1760\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 0xeU)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__denied))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1204: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'D' channel denied changed with multibeat operation (connected at HellaCache.scala:269:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1204, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1206: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1206, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__c_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__opcode_3))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1210: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel opcode changed within multibeat operation (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1210, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1212: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1212, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1761(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1761\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__c_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_param) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__param_3))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1216: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel param changed within multibeat operation (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1216, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1218: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1218, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__c_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_size) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__size_3))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1222: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel size changed within multibeat operation (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1222, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1224: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1224, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1762(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1762\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__c_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_source) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__source_3))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1228: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel source changed within multibeat operation (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1228, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1230: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1230, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__c_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                        != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__address_2)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1234: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel address changed with multibeat operation (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1234, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1236: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1236, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1763(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1763\n"); );
    // Body
    if (VL_UNLIKELY((3U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2325) 
                            & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__inflight) 
                              >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_source)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1240: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'A' channel re-used a source ID (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1240, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1242: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1242, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2344) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__inflight) 
                                  >> (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                            >> 9U)))) 
                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1246: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at HellaCache.scala:269:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1246, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1248: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1248, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1764(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1764\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2344) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__same_cycle_resp)) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ (((7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_opcode))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_opcode)))))
                                 : 0U)) | ((7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_opcode))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_opcode)))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1252: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at HellaCache.scala:269:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1252, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1254: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1254, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1765(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1765\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2344) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__same_cycle_resp)) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size) 
                        != (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                    >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1258: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'D' channel contains improper response size (connected at HellaCache.scala:269:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1258, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1260: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1260, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__same_cycle_resp)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2344)) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ (((7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & 
                                               (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__inflight_opcodes) 
                                                 >> 
                                                 (4U 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 7U))) 
                                                >> 1U)))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__inflight_opcodes) 
                                                      >> 
                                                      (4U 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 7U))) 
                                                     >> 1U))))))
                                 : 0U)) | ((7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__inflight_opcodes) 
                                                         >> 
                                                         (4U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                             >> 7U))) 
                                                        >> 1U)))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__inflight_opcodes) 
                                                               >> 
                                                               (4U 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                   >> 7U))) 
                                                              >> 1U))))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1264: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at HellaCache.scala:269:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1264, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1266: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1266, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1766(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1766\n"); );
    // Body
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__same_cycle_resp)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2344)) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                 >> 5U)) != (0x7fU 
                                             & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__inflight_sizes) 
                                                 >> 
                                                 (8U 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 6U))) 
                                                >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1270: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'D' channel contains improper response size (connected at HellaCache.scala:269:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1270, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1272: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1272, "");
        }
    }
    if (VL_UNLIKELY(((((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter_1))) 
                          & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__a_first_counter_1))) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_valid)) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_source) 
                           == (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 9U)))) & (6U 
                                                  != 
                                                  (7U 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_d_ready)) 
                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_a_ready)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1276: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1276, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1278: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1278, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1767(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1767\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT___same_cycle_resp_T_1)
                                    ? (3U & ((IData)(1U) 
                                             << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_source)))
                                    : 0U) != ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                                                & (0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter_1))) 
                                               & (6U 
                                                  != 
                                                  (7U 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])))
                                               ? (3U 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (1U 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 9U))))
                                               : 0U)) 
                                 | (0U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT___same_cycle_resp_T_1)
                                            ? (3U & 
                                               ((IData)(1U) 
                                                << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_source)))
                                            : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1282: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'A' and 'D' concurrent, despite minlatency 4 (connected at HellaCache.scala:269:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1282, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1284: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1284, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__inflight)) 
                                  | (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__watchdog 
                                    < vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1288: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: TileLink timeout expired (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1288, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1290: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1290, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1768(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1768\n"); );
    // Body
    if (VL_UNLIKELY((3U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT___T_2414) 
                            & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__inflight_1) 
                              >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_source)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1294: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel re-used a source ID (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1294, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1296: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1296, "");
        }
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                        & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter_2))) 
                       & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__inflight_1) 
                                  >> (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                            >> 9U)))) 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hb8a2f4d8__0) 
                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_source) 
                                 == (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                           >> 9U))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1300: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at HellaCache.scala:269:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1300, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1302: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1302, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1769(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1769\n"); );
    // Body
    if (VL_UNLIKELY(((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter_2))) 
                        & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hb8a2f4d8__0) 
                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_source) 
                             == (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                       >> 9U))))) & 
                      (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                 >> 5U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1306: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'D' channel contains improper response size (connected at HellaCache.scala:269:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1306, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1308: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1308, "");
        }
    }
    if (VL_UNLIKELY(((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                         & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter_2))) 
                        & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hb8a2f4d8__0) 
                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_source) 
                                == (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                          >> 9U)))))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                 >> 5U)) != (0x7fU 
                                             & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__inflight_sizes_1) 
                                                 >> 
                                                 (8U 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 6U))) 
                                                >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1312: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'D' channel contains improper response size (connected at HellaCache.scala:269:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1312, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1314: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1314, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1770(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1770\n"); );
    // Body
    if (VL_UNLIKELY((((((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                            & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter_2))) 
                           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__c_first_counter_1))) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid)) 
                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_source) 
                            == (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                      >> 9U)))) & (6U 
                                                   == 
                                                   (7U 
                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                       & (~ ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode)) 
                             | (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_d_ready)) 
                           | (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__x1_c_q__DOT__ptr_match) 
                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__x1_c_q__DOT__maybe_full)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1318: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1318, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1320: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1320, "");
        }
    }
    if (VL_UNLIKELY((((0U != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hb8a2f4d8__0)
                               ? (3U & ((IData)(1U) 
                                        << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_source)))
                               : 0U)) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hb8a2f4d8__0)
                          ? (3U & ((IData)(1U) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_source)))
                          : 0U) == ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                                      & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter_2))) 
                                     & (6U == (7U & 
                                               vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])))
                                     ? (3U & ((IData)(1U) 
                                              << (1U 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 9U))))
                                     : 0U))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1324: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' and 'D' concurrent, despite minlatency 4 (connected at HellaCache.scala:269:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1324, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1326: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1326, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1771(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1771\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__inflight_1)) 
                                  | (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus)) 
                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__watchdog_1 
                                    < vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1330: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: TileLink timeout expired (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1330, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1332: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1332, "");
        }
    }
    if (VL_UNLIKELY((0xffU & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT___io_errors_bus_valid_T) 
                                & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__d_first_counter_3)) 
                                   & (IData)(vlSelf->__VdfgTmp_h5d94bcb9__0))) 
                               & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__inflight_2) 
                                 >> (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0xbU))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1336: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'D' channel re-used a sink ID (connected at HellaCache.scala:269:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1336, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1338: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1338, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1772(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1772\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__x1_e_q__DOT__do_enq) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ (0xffU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__d_set) 
                                     | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT__inflight_2)) 
                                    >> (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0xbU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1342: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'E' channel acknowledged for nothing inflight (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1342, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1344: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_1.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1344, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ (((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                            & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size))) 
                           & (8U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                     >> 0x1cU))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:424: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 424, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:426: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 426, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1773(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1773\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_source)) 
                             & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size))) 
                            & (0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size))) 
                           & ((((((((((0U == ((0x7fffcU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                  >> 0xdU)) 
                                              | (3U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                    >> 0xcU)))) 
                                      | (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                >> 0xcU))) 
                                     | (1U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                               >> 0x10U))) 
                                    | (0U == ((0x7fff0U 
                                               & (0x80U 
                                                  ^ 
                                                  (0x7fff0U 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                      >> 0xdU)))) 
                                              | (0xfU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                    >> 0xcU))))) 
                                   | (0x200U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                 >> 0x10U))) 
                                  | (0x2010U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                 >> 0xcU))) 
                                 | (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                           >> 0x1aU))) 
                                | (0x54000U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                >> 0xcU))) 
                               | (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                         >> 0x1dU))) 
                              | (8U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                        >> 0x1cU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:430: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 430, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:432: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 432, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1774(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1774\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (2U >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:436: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 436, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:438: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 438, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size))) 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:442: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 442, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:444: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 444, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1775(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1775\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:448: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 448, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:450: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 450, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0xffU != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_mask))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:454: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 454, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:456: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 456, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1776(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1776\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0xdU <= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:502: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 502, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:504: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 504, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ (((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                            & (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                      >> 0xcU))) | 
                           ((7U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                            & (((((((((0U == ((0x7fffcU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                  >> 0xdU)) 
                                              | (3U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                    >> 0xcU)))) 
                                      | (1U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                >> 0x10U))) 
                                     | (0U == ((0x7fff0U 
                                                & (0x80U 
                                                   ^ 
                                                   (0x7fff0U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                       >> 0xdU)))) 
                                               | (0xfU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                     >> 0xcU))))) 
                                    | (0x200U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                  >> 0x10U))) 
                                   | (0x2010U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                  >> 0xcU))) 
                                  | (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                            >> 0x1aU))) 
                                 | (0x54000U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                 >> 0xcU))) 
                                | (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                          >> 0x1dU))) 
                               | (8U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                         >> 0x1cU))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:508: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 508, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:510: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 510, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1777(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1777\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size))) 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:514: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'A' channel Get address not aligned to size (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 514, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:516: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 516, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:520: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'A' channel Get carries invalid param (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 520, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:522: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 522, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1778(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1778\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_mask) 
                        != ((0x80U & (((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                         << 7U) | (0xffffff80U 
                                                   & (((2U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                       << 7U) 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                         << 5U)))) 
                                       | (((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                           & (IData)(
                                                     (6U 
                                                      == 
                                                      (6U 
                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))) 
                                          << 7U)) | 
                                      ((IData)((7U 
                                                == 
                                                (7U 
                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address))) 
                                       << 7U))) | (
                                                   (0x40U 
                                                    & (((((2U 
                                                           < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                                          << 6U) 
                                                         | (0xffffffc0U 
                                                            & (((2U 
                                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                << 6U) 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                                  << 4U)))) 
                                                        | (((1U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                            & (IData)(
                                                                      (6U 
                                                                       == 
                                                                       (6U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))) 
                                                           << 6U)) 
                                                       | ((IData)(
                                                                  (6U 
                                                                   == 
                                                                   (7U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address))) 
                                                          << 6U))) 
                                                   | ((0x20U 
                                                       & (((((2U 
                                                              < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                                             << 5U) 
                                                            | (0xffffffe0U 
                                                               & (((2U 
                                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                   << 5U) 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                                     << 3U)))) 
                                                           | (((1U 
                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                               & (IData)(
                                                                         (4U 
                                                                          == 
                                                                          (6U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))) 
                                                              << 5U)) 
                                                          | ((IData)(
                                                                     (5U 
                                                                      == 
                                                                      (7U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address))) 
                                                             << 5U))) 
                                                      | ((0x10U 
                                                          & (((((2U 
                                                                 < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                                                << 4U) 
                                                               | (0xfffffff0U 
                                                                  & (((2U 
                                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                      << 4U) 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                                        << 2U)))) 
                                                              | (((1U 
                                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                  & (IData)(
                                                                            (4U 
                                                                             == 
                                                                             (6U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))) 
                                                                 << 4U)) 
                                                             | ((IData)(
                                                                        (4U 
                                                                         == 
                                                                         (7U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address))) 
                                                                << 4U))) 
                                                         | ((8U 
                                                             & (((((2U 
                                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                                                   | ((~ 
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                                        >> 2U)) 
                                                                      & (2U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                  | ((1U 
                                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                     & (IData)(
                                                                               (2U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address))))) 
                                                                 | (IData)(
                                                                           (3U 
                                                                            == 
                                                                            (7U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((((2U 
                                                                       < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                                                      | ((~ 
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                                           >> 2U)) 
                                                                         & (2U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                     | ((1U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                        & (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address))))) 
                                                                    | (IData)(
                                                                              (2U 
                                                                               == 
                                                                               (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((((2U 
                                                                          < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                                                         | ((~ 
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                                              >> 2U)) 
                                                                            & (2U 
                                                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                        | ((1U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                           & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address))))) 
                                                                       | (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((((2U 
                                                                           < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                                                          | ((~ 
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                                               >> 2U)) 
                                                                             & (2U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                         | ((1U 
                                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                            & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address))))) 
                                                                        | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:526: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'A' channel Get contains invalid mask (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 526, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:528: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 528, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1779(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1779\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_valid) 
                       & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                           & ((((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                & (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                          >> 0xcU))) 
                               | ((7U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                  & (((((((0U == ((0x7fffcU 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                      >> 0xdU)) 
                                                  | (3U 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                        >> 0xcU)))) 
                                          | (0U == 
                                             ((0x7fff0U 
                                               & (0x80U 
                                                  ^ 
                                                  (0x7fff0U 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                      >> 0xdU)))) 
                                              | (0xfU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                    >> 0xcU))))) 
                                         | (0x200U 
                                            == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                >> 0x10U))) 
                                        | (0x2010U 
                                           == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                               >> 0xcU))) 
                                       | (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                 >> 0x1aU))) 
                                      | (0x54000U == 
                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                          >> 0xcU))) 
                                     | (8U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                               >> 0x1cU))))) 
                              | ((9U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                 & (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                           >> 0x1dU))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:532: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 532, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:534: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 534, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1780(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1780\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_valid) 
                       & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size))) 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:538: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'A' channel PutFull address not aligned to size (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 538, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:540: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 540, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_valid) 
                       & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:544: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'A' channel PutFull carries invalid param (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 544, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:546: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 546, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1781(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1781\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_valid) 
                       & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_mask) 
                        != ((0x80U & (((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                         << 7U) | (0xffffff80U 
                                                   & (((2U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                       << 7U) 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                         << 5U)))) 
                                       | (((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                           & (IData)(
                                                     (6U 
                                                      == 
                                                      (6U 
                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))) 
                                          << 7U)) | 
                                      ((IData)((7U 
                                                == 
                                                (7U 
                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address))) 
                                       << 7U))) | (
                                                   (0x40U 
                                                    & (((((2U 
                                                           < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                                          << 6U) 
                                                         | (0xffffffc0U 
                                                            & (((2U 
                                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                << 6U) 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                                  << 4U)))) 
                                                        | (((1U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                            & (IData)(
                                                                      (6U 
                                                                       == 
                                                                       (6U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))) 
                                                           << 6U)) 
                                                       | ((IData)(
                                                                  (6U 
                                                                   == 
                                                                   (7U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address))) 
                                                          << 6U))) 
                                                   | ((0x20U 
                                                       & (((((2U 
                                                              < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                                             << 5U) 
                                                            | (0xffffffe0U 
                                                               & (((2U 
                                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                   << 5U) 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                                     << 3U)))) 
                                                           | (((1U 
                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                               & (IData)(
                                                                         (4U 
                                                                          == 
                                                                          (6U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))) 
                                                              << 5U)) 
                                                          | ((IData)(
                                                                     (5U 
                                                                      == 
                                                                      (7U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address))) 
                                                             << 5U))) 
                                                      | ((0x10U 
                                                          & (((((2U 
                                                                 < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                                                << 4U) 
                                                               | (0xfffffff0U 
                                                                  & (((2U 
                                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                      << 4U) 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                                        << 2U)))) 
                                                              | (((1U 
                                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                  & (IData)(
                                                                            (4U 
                                                                             == 
                                                                             (6U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))) 
                                                                 << 4U)) 
                                                             | ((IData)(
                                                                        (4U 
                                                                         == 
                                                                         (7U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address))) 
                                                                << 4U))) 
                                                         | ((8U 
                                                             & (((((2U 
                                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                                                   | ((~ 
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                                        >> 2U)) 
                                                                      & (2U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                  | ((1U 
                                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                     & (IData)(
                                                                               (2U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address))))) 
                                                                 | (IData)(
                                                                           (3U 
                                                                            == 
                                                                            (7U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((((2U 
                                                                       < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                                                      | ((~ 
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                                           >> 2U)) 
                                                                         & (2U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                     | ((1U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                        & (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address))))) 
                                                                    | (IData)(
                                                                              (2U 
                                                                               == 
                                                                               (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((((2U 
                                                                          < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                                                         | ((~ 
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                                              >> 2U)) 
                                                                            & (2U 
                                                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                        | ((1U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                           & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address))))) 
                                                                       | (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((((2U 
                                                                           < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                                                          | ((~ 
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                                               >> 2U)) 
                                                                             & (2U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                         | ((1U 
                                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                            & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address))))) 
                                                                        | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:550: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'A' channel PutFull contains invalid mask (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 550, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:552: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 552, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1782(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1782\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_valid) 
                       & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                           & ((((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                & (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                          >> 0xcU))) 
                               | ((7U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                  & (((((((0U == ((0x7fffcU 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                      >> 0xdU)) 
                                                  | (3U 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                        >> 0xcU)))) 
                                          | (0U == 
                                             ((0x7fff0U 
                                               & (0x80U 
                                                  ^ 
                                                  (0x7fff0U 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                      >> 0xdU)))) 
                                              | (0xfU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                    >> 0xcU))))) 
                                         | (0x200U 
                                            == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                >> 0x10U))) 
                                        | (0x2010U 
                                           == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                               >> 0xcU))) 
                                       | (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                 >> 0x1aU))) 
                                      | (0x54000U == 
                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                          >> 0xcU))) 
                                     | (8U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                               >> 0x1cU))))) 
                              | ((9U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                 & (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                           >> 0x1dU))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:556: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 556, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:558: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 558, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1783(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1783\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_valid) 
                       & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size))) 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:562: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 562, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:564: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 564, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_valid) 
                       & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:568: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'A' channel PutPartial carries invalid param (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 568, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:570: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 570, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1784(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1784\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_valid) 
                       & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_mask) 
                               & (~ ((0x80U & (((((2U 
                                                   < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                                  << 7U) 
                                                 | (0xffffff80U 
                                                    & (((2U 
                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                        << 7U) 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                          << 5U)))) 
                                                | (((1U 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                    & (IData)(
                                                              (6U 
                                                               == 
                                                               (6U 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))) 
                                                   << 7U)) 
                                               | ((IData)(
                                                          (7U 
                                                           == 
                                                           (7U 
                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address))) 
                                                  << 7U))) 
                                     | ((0x40U & ((
                                                   (((2U 
                                                      < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                                     << 6U) 
                                                    | (0xffffffc0U 
                                                       & (((2U 
                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                           << 6U) 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                             << 4U)))) 
                                                   | (((1U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                       & (IData)(
                                                                 (6U 
                                                                  == 
                                                                  (6U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))) 
                                                      << 6U)) 
                                                  | ((IData)(
                                                             (6U 
                                                              == 
                                                              (7U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address))) 
                                                     << 6U))) 
                                        | ((0x20U & 
                                            (((((2U 
                                                 < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                                << 5U) 
                                               | (0xffffffe0U 
                                                  & (((2U 
                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                      << 5U) 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                        << 3U)))) 
                                              | (((1U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                  & (IData)(
                                                            (4U 
                                                             == 
                                                             (6U 
                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))) 
                                                 << 5U)) 
                                             | ((IData)(
                                                        (5U 
                                                         == 
                                                         (7U 
                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address))) 
                                                << 5U))) 
                                           | ((0x10U 
                                               & (((((2U 
                                                      < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                                     << 4U) 
                                                    | (0xfffffff0U 
                                                       & (((2U 
                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                           << 4U) 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                             << 2U)))) 
                                                   | (((1U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                       & (IData)(
                                                                 (4U 
                                                                  == 
                                                                  (6U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))) 
                                                      << 4U)) 
                                                  | ((IData)(
                                                             (4U 
                                                              == 
                                                              (7U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address))) 
                                                     << 4U))) 
                                              | ((8U 
                                                  & (((((2U 
                                                         < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                                        | ((~ 
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                             >> 2U)) 
                                                           & (2U 
                                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                       | ((1U 
                                                           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                          & (IData)(
                                                                    (2U 
                                                                     == 
                                                                     (6U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address))))) 
                                                      | (IData)(
                                                                (3U 
                                                                 == 
                                                                 (7U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))) 
                                                     << 3U)) 
                                                 | ((4U 
                                                     & (((((2U 
                                                            < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                                           | ((~ 
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                                >> 2U)) 
                                                              & (2U 
                                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                          | ((1U 
                                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                             & (IData)(
                                                                       (2U 
                                                                        == 
                                                                        (6U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address))))) 
                                                         | (IData)(
                                                                   (2U 
                                                                    == 
                                                                    (7U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))) 
                                                        << 2U)) 
                                                    | ((2U 
                                                        & (((((2U 
                                                               < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                                              | ((~ 
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                                   >> 2U)) 
                                                                 & (2U 
                                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                             | ((1U 
                                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                & (IData)(
                                                                          (0U 
                                                                           == 
                                                                           (6U 
                                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address))))) 
                                                            | (IData)(
                                                                      (1U 
                                                                       == 
                                                                       (7U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & ((((2U 
                                                                < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                                               | ((~ 
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                                    >> 2U)) 
                                                                  & (2U 
                                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                              | ((1U 
                                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                 & (IData)(
                                                                           (0U 
                                                                            == 
                                                                            (6U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address))))) 
                                                             | (IData)(
                                                                       (0U 
                                                                        == 
                                                                        (7U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:574: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 574, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:576: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 576, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1785(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1785\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_valid) 
                       & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ (((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                            & (4U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size))) 
                           & ((((((((0U == ((0x7fffcU 
                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                >> 0xdU)) 
                                            | (3U & 
                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                >> 0xcU)))) 
                                    | (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                              >> 0xcU))) 
                                   | (0U == ((0x7fff0U 
                                              & (0x80U 
                                                 ^ 
                                                 (0x7fff0U 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                     >> 0xdU)))) 
                                             | (0xfU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                   >> 0xcU))))) 
                                  | (0x200U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                >> 0x10U))) 
                                 | (0x2010U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                >> 0xcU))) 
                                | (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                          >> 0x1aU))) 
                               | (0x54000U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                               >> 0xcU))) 
                              | (8U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                        >> 0x1cU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:580: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 580, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:582: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 582, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1786(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1786\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_valid) 
                       & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size))) 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:586: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 586, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:588: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 588, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_valid) 
                       & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (4U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:592: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 592, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:594: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 594, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1787(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1787\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_valid) 
                       & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_mask) 
                        != ((0x80U & (((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                         << 7U) | (0xffffff80U 
                                                   & (((2U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                       << 7U) 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                         << 5U)))) 
                                       | (((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                           & (IData)(
                                                     (6U 
                                                      == 
                                                      (6U 
                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))) 
                                          << 7U)) | 
                                      ((IData)((7U 
                                                == 
                                                (7U 
                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address))) 
                                       << 7U))) | (
                                                   (0x40U 
                                                    & (((((2U 
                                                           < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                                          << 6U) 
                                                         | (0xffffffc0U 
                                                            & (((2U 
                                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                << 6U) 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                                  << 4U)))) 
                                                        | (((1U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                            & (IData)(
                                                                      (6U 
                                                                       == 
                                                                       (6U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))) 
                                                           << 6U)) 
                                                       | ((IData)(
                                                                  (6U 
                                                                   == 
                                                                   (7U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address))) 
                                                          << 6U))) 
                                                   | ((0x20U 
                                                       & (((((2U 
                                                              < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                                             << 5U) 
                                                            | (0xffffffe0U 
                                                               & (((2U 
                                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                   << 5U) 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                                     << 3U)))) 
                                                           | (((1U 
                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                               & (IData)(
                                                                         (4U 
                                                                          == 
                                                                          (6U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))) 
                                                              << 5U)) 
                                                          | ((IData)(
                                                                     (5U 
                                                                      == 
                                                                      (7U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address))) 
                                                             << 5U))) 
                                                      | ((0x10U 
                                                          & (((((2U 
                                                                 < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                                                << 4U) 
                                                               | (0xfffffff0U 
                                                                  & (((2U 
                                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                      << 4U) 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                                        << 2U)))) 
                                                              | (((1U 
                                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                  & (IData)(
                                                                            (4U 
                                                                             == 
                                                                             (6U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))) 
                                                                 << 4U)) 
                                                             | ((IData)(
                                                                        (4U 
                                                                         == 
                                                                         (7U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address))) 
                                                                << 4U))) 
                                                         | ((8U 
                                                             & (((((2U 
                                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                                                   | ((~ 
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                                        >> 2U)) 
                                                                      & (2U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                  | ((1U 
                                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                     & (IData)(
                                                                               (2U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address))))) 
                                                                 | (IData)(
                                                                           (3U 
                                                                            == 
                                                                            (7U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((((2U 
                                                                       < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                                                      | ((~ 
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                                           >> 2U)) 
                                                                         & (2U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                     | ((1U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                        & (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address))))) 
                                                                    | (IData)(
                                                                              (2U 
                                                                               == 
                                                                               (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((((2U 
                                                                          < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                                                         | ((~ 
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                                              >> 2U)) 
                                                                            & (2U 
                                                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                        | ((1U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                           & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address))))) 
                                                                       | (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((((2U 
                                                                           < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                                                          | ((~ 
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                                               >> 2U)) 
                                                                             & (2U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                         | ((1U 
                                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                            & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address))))) 
                                                                        | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:598: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 598, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:600: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 600, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1788(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1788\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_valid) 
                       & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ (((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                            & (4U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size))) 
                           & ((((((((0U == ((0x7fffcU 
                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                >> 0xdU)) 
                                            | (3U & 
                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                >> 0xcU)))) 
                                    | (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                              >> 0xcU))) 
                                   | (0U == ((0x7fff0U 
                                              & (0x80U 
                                                 ^ 
                                                 (0x7fff0U 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                     >> 0xdU)))) 
                                             | (0xfU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                   >> 0xcU))))) 
                                  | (0x200U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                >> 0x10U))) 
                                 | (0x2010U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                >> 0xcU))) 
                                | (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                          >> 0x1aU))) 
                               | (0x54000U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                               >> 0xcU))) 
                              | (8U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                        >> 0x1cU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:604: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 604, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:606: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 606, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1789(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1789\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_valid) 
                       & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size))) 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:610: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'A' channel Logical address not aligned to size (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 610, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:612: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 612, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_valid) 
                       & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_param) 
                        >> 2U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:616: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'A' channel Logical carries invalid opcode param (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 616, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:618: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 618, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1790(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1790\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_valid) 
                       & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_mask) 
                        != ((0x80U & (((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                         << 7U) | (0xffffff80U 
                                                   & (((2U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                       << 7U) 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                         << 5U)))) 
                                       | (((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                           & (IData)(
                                                     (6U 
                                                      == 
                                                      (6U 
                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))) 
                                          << 7U)) | 
                                      ((IData)((7U 
                                                == 
                                                (7U 
                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address))) 
                                       << 7U))) | (
                                                   (0x40U 
                                                    & (((((2U 
                                                           < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                                          << 6U) 
                                                         | (0xffffffc0U 
                                                            & (((2U 
                                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                << 6U) 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                                  << 4U)))) 
                                                        | (((1U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                            & (IData)(
                                                                      (6U 
                                                                       == 
                                                                       (6U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))) 
                                                           << 6U)) 
                                                       | ((IData)(
                                                                  (6U 
                                                                   == 
                                                                   (7U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address))) 
                                                          << 6U))) 
                                                   | ((0x20U 
                                                       & (((((2U 
                                                              < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                                             << 5U) 
                                                            | (0xffffffe0U 
                                                               & (((2U 
                                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                   << 5U) 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                                     << 3U)))) 
                                                           | (((1U 
                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                               & (IData)(
                                                                         (4U 
                                                                          == 
                                                                          (6U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))) 
                                                              << 5U)) 
                                                          | ((IData)(
                                                                     (5U 
                                                                      == 
                                                                      (7U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address))) 
                                                             << 5U))) 
                                                      | ((0x10U 
                                                          & (((((2U 
                                                                 < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                                                << 4U) 
                                                               | (0xfffffff0U 
                                                                  & (((2U 
                                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                      << 4U) 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                                        << 2U)))) 
                                                              | (((1U 
                                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                  & (IData)(
                                                                            (4U 
                                                                             == 
                                                                             (6U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))) 
                                                                 << 4U)) 
                                                             | ((IData)(
                                                                        (4U 
                                                                         == 
                                                                         (7U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address))) 
                                                                << 4U))) 
                                                         | ((8U 
                                                             & (((((2U 
                                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                                                   | ((~ 
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                                        >> 2U)) 
                                                                      & (2U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                  | ((1U 
                                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                     & (IData)(
                                                                               (2U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address))))) 
                                                                 | (IData)(
                                                                           (3U 
                                                                            == 
                                                                            (7U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((((2U 
                                                                       < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                                                      | ((~ 
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                                           >> 2U)) 
                                                                         & (2U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                     | ((1U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                        & (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address))))) 
                                                                    | (IData)(
                                                                              (2U 
                                                                               == 
                                                                               (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((((2U 
                                                                          < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                                                         | ((~ 
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                                              >> 2U)) 
                                                                            & (2U 
                                                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                        | ((1U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                           & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address))))) 
                                                                       | (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((((2U 
                                                                           < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                                                          | ((~ 
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                                               >> 2U)) 
                                                                             & (2U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                         | ((1U 
                                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                            & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address))))) 
                                                                        | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:622: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'A' channel Logical contains invalid mask (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 622, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:624: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 624, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1791(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1791\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                           & (((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                               & (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                         >> 0xcU))) 
                              | ((7U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                 & (8U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                           >> 0x1cU))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:628: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 628, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:630: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 630, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size))) 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:634: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'A' channel Hint address not aligned to size (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 634, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:636: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 636, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1792(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1792\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_param) 
                                     >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:640: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'A' channel Hint carries invalid opcode param (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 640, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:642: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 642, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_mask) 
                        != ((0x80U & (((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                         << 7U) | (0xffffff80U 
                                                   & (((2U 
                                                        == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                       << 7U) 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                         << 5U)))) 
                                       | (((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                           & (IData)(
                                                     (6U 
                                                      == 
                                                      (6U 
                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))) 
                                          << 7U)) | 
                                      ((IData)((7U 
                                                == 
                                                (7U 
                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address))) 
                                       << 7U))) | (
                                                   (0x40U 
                                                    & (((((2U 
                                                           < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                                          << 6U) 
                                                         | (0xffffffc0U 
                                                            & (((2U 
                                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                << 6U) 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                                  << 4U)))) 
                                                        | (((1U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                            & (IData)(
                                                                      (6U 
                                                                       == 
                                                                       (6U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))) 
                                                           << 6U)) 
                                                       | ((IData)(
                                                                  (6U 
                                                                   == 
                                                                   (7U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address))) 
                                                          << 6U))) 
                                                   | ((0x20U 
                                                       & (((((2U 
                                                              < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                                             << 5U) 
                                                            | (0xffffffe0U 
                                                               & (((2U 
                                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                   << 5U) 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                                     << 3U)))) 
                                                           | (((1U 
                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                               & (IData)(
                                                                         (4U 
                                                                          == 
                                                                          (6U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))) 
                                                              << 5U)) 
                                                          | ((IData)(
                                                                     (5U 
                                                                      == 
                                                                      (7U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address))) 
                                                             << 5U))) 
                                                      | ((0x10U 
                                                          & (((((2U 
                                                                 < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                                                << 4U) 
                                                               | (0xfffffff0U 
                                                                  & (((2U 
                                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                      << 4U) 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                                        << 2U)))) 
                                                              | (((1U 
                                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                  & (IData)(
                                                                            (4U 
                                                                             == 
                                                                             (6U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))) 
                                                                 << 4U)) 
                                                             | ((IData)(
                                                                        (4U 
                                                                         == 
                                                                         (7U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address))) 
                                                                << 4U))) 
                                                         | ((8U 
                                                             & (((((2U 
                                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                                                   | ((~ 
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                                        >> 2U)) 
                                                                      & (2U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                  | ((1U 
                                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                     & (IData)(
                                                                               (2U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address))))) 
                                                                 | (IData)(
                                                                           (3U 
                                                                            == 
                                                                            (7U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((((2U 
                                                                       < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                                                      | ((~ 
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                                           >> 2U)) 
                                                                         & (2U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                     | ((1U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                        & (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address))))) 
                                                                    | (IData)(
                                                                              (2U 
                                                                               == 
                                                                               (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((((2U 
                                                                          < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                                                         | ((~ 
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                                              >> 2U)) 
                                                                            & (2U 
                                                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                        | ((1U 
                                                                            == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                           & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address))))) 
                                                                       | (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((((2U 
                                                                           < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_size)) 
                                                                          | ((~ 
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address 
                                                                               >> 2U)) 
                                                                             & (2U 
                                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)))) 
                                                                         | ((1U 
                                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__monitor__DOT____VdfgTmp_hd3fe7dd1__0)) 
                                                                            & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address))))) 
                                                                        | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_address)))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:646: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'A' channel Hint contains invalid mask (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 646, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:648: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 648, "");
        }
    }
}
