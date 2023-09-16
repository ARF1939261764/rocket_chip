// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestDriver__Syms.h"
#include "VTestDriver___024root.h"

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1793(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1793\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (7U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:652: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'D' channel has invalid opcode (connected at HellaCache.scala:269:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 652, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:654: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 654, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                       & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (3U > (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                      >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:658: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at HellaCache.scala:269:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 658, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:660: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 660, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1794(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1794\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                       & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:664: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at HellaCache.scala:269:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 664, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:666: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 666, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                       & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                        >> 0xfU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:670: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at HellaCache.scala:269:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 670, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:672: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 672, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1795(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1795\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                      & (0x4006U == (0x4007U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:676: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'D' channel ReleaseAck is denied (connected at HellaCache.scala:269:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 676, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:678: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 678, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                       & (4U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (3U > (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                      >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:682: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'D' channel Grant smaller than a beat (connected at HellaCache.scala:269:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 682, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:684: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 684, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1796(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1796\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                      & (0x1cU == (0x1fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:688: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'D' channel Grant carries invalid cap param (connected at HellaCache.scala:269:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 688, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:690: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 690, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                      & (0x14U == (0x1fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:694: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'D' channel Grant carries toN param (connected at HellaCache.scala:269:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 694, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:696: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 696, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1797(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1797\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                       & (4U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                        >> 0xfU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:700: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'D' channel Grant is corrupt (connected at HellaCache.scala:269:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 700, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:702: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 702, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                       & (5U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (3U > (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                      >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:706: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'D' channel GrantData smaller than a beat (connected at HellaCache.scala:269:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 706, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:708: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 708, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1798(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1798\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                      & (0x1dU == (0x1fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:712: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at HellaCache.scala:269:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 712, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:714: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 714, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                      & (0x15U == (0x1fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:718: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'D' channel GrantData carries toN param (connected at HellaCache.scala:269:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 718, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:720: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 720, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1799(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1799\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                       & (5U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 0xeU)) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                                            >> 0xfU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:724: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at HellaCache.scala:269:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 724, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:726: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 726, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                       & (0U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:730: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'D' channel AccessAck carries invalid param (connected at HellaCache.scala:269:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 730, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:732: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 732, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1800(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1800\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                       & (0U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                        >> 0xfU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:736: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'D' channel AccessAck is corrupt (connected at HellaCache.scala:269:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 736, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:738: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 738, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                       & (1U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:742: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at HellaCache.scala:269:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 742, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:744: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 744, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1801(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1801\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                       & (1U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 0xeU)) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                                            >> 0xfU)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:748: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at HellaCache.scala:269:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 748, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:750: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 750, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                       & (2U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:754: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'D' channel HintAck carries invalid param (connected at HellaCache.scala:269:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 754, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:756: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 756, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1802(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1802\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_d_valid) 
                       & (2U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                        >> 0xfU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:760: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'D' channel HintAck is corrupt (connected at HellaCache.scala:269:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 760, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:762: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 762, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (7U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:766: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'B' channel has invalid opcode (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 766, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:768: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 768, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1803(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1803\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                       & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ (((IData)((0xc0U == (0x3e0U 
                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U]))) 
                            & (0xdU > (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                               >> 5U)))) 
                           & ((((((((((0U == ((0x7fffcU 
                                               & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                   << 8U) 
                                                  | (0xfcU 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0x18U)))) 
                                              | (3U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0x17U)))) 
                                      | (3U == (0xfffffU 
                                                & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                    << 9U) 
                                                   | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0x17U))))) 
                                     | (1U == (0xffffU 
                                               & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                   << 5U) 
                                                  | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x1bU))))) 
                                    | (0U == ((0x7fff0U 
                                               & (0x80U 
                                                  ^ 
                                                  ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                    << 8U) 
                                                   | (0xf0U 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 0x18U))))) 
                                              | (0xfU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0x17U))))) 
                                   | (0x200U == (0xffffU 
                                                 & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                     << 5U) 
                                                    | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 0x1bU))))) 
                                  | (0x2010U == (0xfffffU 
                                                 & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                     << 9U) 
                                                    | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 0x17U))))) 
                                 | (3U == (0x3fU & 
                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                            >> 5U)))) 
                                | (0x54000U == (0xfffffU 
                                                & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                    << 9U) 
                                                   | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0x17U))))) 
                               | (3U == (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                               >> 8U)))) 
                              | (8U == (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                >> 7U))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:772: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'B' channel carries Probe type which is unexpected using diplomatic parameters (connected at HellaCache.scala:269:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 772, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:774: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 774, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1804(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1804\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                       & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((3U == (0xfffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                << 9U) 
                                               | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0x17U)))) 
                           | ((0x2010U == (0xfffffU 
                                           & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                               << 9U) 
                                              | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0x17U)))) 
                              | ((4U == (0xfffffU & 
                                         ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                           << 9U) | 
                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0x17U)))) 
                                 | ((0x54000U == (0xfffffU 
                                                  & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                      << 9U) 
                                                     | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0x17U)))) 
                                    | ((3U == (0x3fU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                  >> 5U))) 
                                       | ((0x200U == 
                                           (0xffffU 
                                            & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                << 5U) 
                                               | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0x1bU)))) 
                                          | ((0U == 
                                              (0xfffffU 
                                               & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                   << 9U) 
                                                  | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x17U)))) 
                                             | ((1U 
                                                 == 
                                                 (0xffffU 
                                                  & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                      << 5U) 
                                                     | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0x1bU)))) 
                                                | ((0x100U 
                                                    == 
                                                    (0xfffffU 
                                                     & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                         << 9U) 
                                                        | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                           >> 0x17U)))) 
                                                   | ((0x110U 
                                                       == 
                                                       (0xfffffU 
                                                        & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                            << 9U) 
                                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                              >> 0x17U)))) 
                                                      | ((8U 
                                                          == 
                                                          (0xfU 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                              >> 7U))) 
                                                         | (3U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                                >> 8U)))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:778: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'B' channel Probe carries unmanaged address (connected at HellaCache.scala:269:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 778, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:780: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 780, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1805(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1805\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                       & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (0xfU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 5U)))) 
                                         & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                             << 0x15U) 
                                            | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xbU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:784: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'B' channel Probe address not aligned to size (connected at HellaCache.scala:269:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 784, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:786: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 786, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & (0x1eU == (0x1fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:790: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'B' channel Probe carries invalid cap param (connected at HellaCache.scala:269:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 790, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:792: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 792, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1806(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1806\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                       & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                  >> 0xbU)) != ((0x80U 
                                                 & (((((2U 
                                                        < 
                                                        (0xfU 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                            >> 5U))) 
                                                       | (IData)(
                                                                 (0x2040U 
                                                                  == 
                                                                  (0x2060U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                      | (IData)(
                                                                (0x3020U 
                                                                 == 
                                                                 (0x3060U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                     | (IData)(
                                                               (0x3800U 
                                                                == 
                                                                (0x3800U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                    << 7U)) 
                                                | ((0x40U 
                                                    & (((((2U 
                                                           < 
                                                           (0xfU 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                               >> 5U))) 
                                                          | (IData)(
                                                                    (0x2040U 
                                                                     == 
                                                                     (0x2060U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                         | (IData)(
                                                                   (0x3020U 
                                                                    == 
                                                                    (0x3060U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                        | (IData)(
                                                                  (0x3000U 
                                                                   == 
                                                                   (0x3800U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                       << 6U)) 
                                                   | ((0x20U 
                                                       & (((((2U 
                                                              < 
                                                              (0xfU 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                                  >> 5U))) 
                                                             | (IData)(
                                                                       (0x2040U 
                                                                        == 
                                                                        (0x2060U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                            | (IData)(
                                                                      (0x2020U 
                                                                       == 
                                                                       (0x3060U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                           | (IData)(
                                                                     (0x2800U 
                                                                      == 
                                                                      (0x3800U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & (((((2U 
                                                                 < 
                                                                 (0xfU 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                                     >> 5U))) 
                                                                | (IData)(
                                                                          (0x2040U 
                                                                           == 
                                                                           (0x2060U 
                                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                               | (IData)(
                                                                         (0x2020U 
                                                                          == 
                                                                          (0x3060U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                              | (IData)(
                                                                        (0x2000U 
                                                                         == 
                                                                         (0x3800U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & (((((2U 
                                                                    < 
                                                                    (0xfU 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                                        >> 5U))) 
                                                                   | (IData)(
                                                                             (0x40U 
                                                                              == 
                                                                              (0x2060U 
                                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                  | (IData)(
                                                                            (0x1020U 
                                                                             == 
                                                                             (0x3060U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                 | (IData)(
                                                                           (0x1800U 
                                                                            == 
                                                                            (0x3800U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((((2U 
                                                                       < 
                                                                       (0xfU 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                                           >> 5U))) 
                                                                      | (IData)(
                                                                                (0x40U 
                                                                                == 
                                                                                (0x2060U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                     | (IData)(
                                                                               (0x1020U 
                                                                                == 
                                                                                (0x3060U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                    | (IData)(
                                                                              (0x1000U 
                                                                               == 
                                                                               (0x3800U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((((2U 
                                                                          < 
                                                                          (0xfU 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                                              >> 5U))) 
                                                                         | (IData)(
                                                                                (0x40U 
                                                                                == 
                                                                                (0x2060U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                        | (IData)(
                                                                                (0x20U 
                                                                                == 
                                                                                (0x3060U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                       | (IData)(
                                                                                (0x800U 
                                                                                == 
                                                                                (0x3800U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((((2U 
                                                                           < 
                                                                           (0xfU 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                                               >> 5U))) 
                                                                          | (IData)(
                                                                                (0x40U 
                                                                                == 
                                                                                (0x2060U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                         | (IData)(
                                                                                (0x20U 
                                                                                == 
                                                                                (0x3060U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                        | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3800U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:796: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'B' channel Probe contains invalid mask (connected at HellaCache.scala:269:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 796, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:798: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 798, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1807(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1807\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                       & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[3U] 
                        >> 0x13U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:802: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'B' channel Probe is corrupt (connected at HellaCache.scala:269:21)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 802, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:804: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 804, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & (4U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:808: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'B' channel carries Get type which is unexpected using diplomatic parameters (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 808, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:810: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 810, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1808(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1808\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                       & (4U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((3U == (0xfffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                << 9U) 
                                               | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0x17U)))) 
                           | ((0x2010U == (0xfffffU 
                                           & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                               << 9U) 
                                              | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0x17U)))) 
                              | ((4U == (0xfffffU & 
                                         ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                           << 9U) | 
                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0x17U)))) 
                                 | ((0x54000U == (0xfffffU 
                                                  & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                      << 9U) 
                                                     | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0x17U)))) 
                                    | ((3U == (0x3fU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                  >> 5U))) 
                                       | ((0x200U == 
                                           (0xffffU 
                                            & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                << 5U) 
                                               | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0x1bU)))) 
                                          | ((0U == 
                                              (0xfffffU 
                                               & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                   << 9U) 
                                                  | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x17U)))) 
                                             | ((1U 
                                                 == 
                                                 (0xffffU 
                                                  & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                      << 5U) 
                                                     | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0x1bU)))) 
                                                | ((0x100U 
                                                    == 
                                                    (0xfffffU 
                                                     & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                         << 9U) 
                                                        | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                           >> 0x17U)))) 
                                                   | ((0x110U 
                                                       == 
                                                       (0xfffffU 
                                                        & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                            << 9U) 
                                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                              >> 0x17U)))) 
                                                      | ((8U 
                                                          == 
                                                          (0xfU 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                              >> 7U))) 
                                                         | (3U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                                >> 8U)))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:814: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'B' channel Get carries unmanaged address (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 814, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:816: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 816, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1809(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1809\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                       & (4U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (0xfU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 5U)))) 
                                         & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                             << 0x15U) 
                                            | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xbU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:820: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'B' channel Get address not aligned to size (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 820, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:822: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 822, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                       & (4U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:826: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'B' channel Get carries invalid param (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 826, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:828: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 828, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1810(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1810\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                       & (4U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                  >> 0xbU)) != ((0x80U 
                                                 & (((((2U 
                                                        < 
                                                        (0xfU 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                            >> 5U))) 
                                                       | (IData)(
                                                                 (0x2040U 
                                                                  == 
                                                                  (0x2060U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                      | (IData)(
                                                                (0x3020U 
                                                                 == 
                                                                 (0x3060U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                     | (IData)(
                                                               (0x3800U 
                                                                == 
                                                                (0x3800U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                    << 7U)) 
                                                | ((0x40U 
                                                    & (((((2U 
                                                           < 
                                                           (0xfU 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                               >> 5U))) 
                                                          | (IData)(
                                                                    (0x2040U 
                                                                     == 
                                                                     (0x2060U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                         | (IData)(
                                                                   (0x3020U 
                                                                    == 
                                                                    (0x3060U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                        | (IData)(
                                                                  (0x3000U 
                                                                   == 
                                                                   (0x3800U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                       << 6U)) 
                                                   | ((0x20U 
                                                       & (((((2U 
                                                              < 
                                                              (0xfU 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                                  >> 5U))) 
                                                             | (IData)(
                                                                       (0x2040U 
                                                                        == 
                                                                        (0x2060U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                            | (IData)(
                                                                      (0x2020U 
                                                                       == 
                                                                       (0x3060U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                           | (IData)(
                                                                     (0x2800U 
                                                                      == 
                                                                      (0x3800U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & (((((2U 
                                                                 < 
                                                                 (0xfU 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                                     >> 5U))) 
                                                                | (IData)(
                                                                          (0x2040U 
                                                                           == 
                                                                           (0x2060U 
                                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                               | (IData)(
                                                                         (0x2020U 
                                                                          == 
                                                                          (0x3060U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                              | (IData)(
                                                                        (0x2000U 
                                                                         == 
                                                                         (0x3800U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & (((((2U 
                                                                    < 
                                                                    (0xfU 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                                        >> 5U))) 
                                                                   | (IData)(
                                                                             (0x40U 
                                                                              == 
                                                                              (0x2060U 
                                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                  | (IData)(
                                                                            (0x1020U 
                                                                             == 
                                                                             (0x3060U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                 | (IData)(
                                                                           (0x1800U 
                                                                            == 
                                                                            (0x3800U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((((2U 
                                                                       < 
                                                                       (0xfU 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                                           >> 5U))) 
                                                                      | (IData)(
                                                                                (0x40U 
                                                                                == 
                                                                                (0x2060U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                     | (IData)(
                                                                               (0x1020U 
                                                                                == 
                                                                                (0x3060U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                    | (IData)(
                                                                              (0x1000U 
                                                                               == 
                                                                               (0x3800U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((((2U 
                                                                          < 
                                                                          (0xfU 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                                              >> 5U))) 
                                                                         | (IData)(
                                                                                (0x40U 
                                                                                == 
                                                                                (0x2060U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                        | (IData)(
                                                                                (0x20U 
                                                                                == 
                                                                                (0x3060U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                       | (IData)(
                                                                                (0x800U 
                                                                                == 
                                                                                (0x3800U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((((2U 
                                                                           < 
                                                                           (0xfU 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                                               >> 5U))) 
                                                                          | (IData)(
                                                                                (0x40U 
                                                                                == 
                                                                                (0x2060U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                         | (IData)(
                                                                                (0x20U 
                                                                                == 
                                                                                (0x3060U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                        | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3800U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:832: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'B' channel Get contains invalid mask (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 832, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:834: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 834, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1811(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1811\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                       & (4U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[3U] 
                        >> 0x13U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:838: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'B' channel Get is corrupt (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 838, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:840: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 840, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & (0U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:844: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'B' channel carries PutFull type which is unexpected using diplomatic parameters (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 844, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:846: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 846, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1812(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1812\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                       & (0U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((3U == (0xfffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                << 9U) 
                                               | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0x17U)))) 
                           | ((0x2010U == (0xfffffU 
                                           & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                               << 9U) 
                                              | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0x17U)))) 
                              | ((4U == (0xfffffU & 
                                         ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                           << 9U) | 
                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0x17U)))) 
                                 | ((0x54000U == (0xfffffU 
                                                  & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                      << 9U) 
                                                     | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0x17U)))) 
                                    | ((3U == (0x3fU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                  >> 5U))) 
                                       | ((0x200U == 
                                           (0xffffU 
                                            & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                << 5U) 
                                               | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0x1bU)))) 
                                          | ((0U == 
                                              (0xfffffU 
                                               & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                   << 9U) 
                                                  | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x17U)))) 
                                             | ((1U 
                                                 == 
                                                 (0xffffU 
                                                  & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                      << 5U) 
                                                     | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0x1bU)))) 
                                                | ((0x100U 
                                                    == 
                                                    (0xfffffU 
                                                     & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                         << 9U) 
                                                        | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                           >> 0x17U)))) 
                                                   | ((0x110U 
                                                       == 
                                                       (0xfffffU 
                                                        & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                            << 9U) 
                                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                              >> 0x17U)))) 
                                                      | ((8U 
                                                          == 
                                                          (0xfU 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                              >> 7U))) 
                                                         | (3U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                                >> 8U)))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:850: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'B' channel PutFull carries unmanaged address (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 850, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:852: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 852, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1813(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1813\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                       & (0U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (0xfU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 5U)))) 
                                         & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                             << 0x15U) 
                                            | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xbU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:856: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'B' channel PutFull address not aligned to size (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 856, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:858: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 858, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                       & (0U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:862: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'B' channel PutFull carries invalid param (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 862, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:864: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 864, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1814(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1814\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                       & (0U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                  >> 0xbU)) != ((0x80U 
                                                 & (((((2U 
                                                        < 
                                                        (0xfU 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                            >> 5U))) 
                                                       | (IData)(
                                                                 (0x2040U 
                                                                  == 
                                                                  (0x2060U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                      | (IData)(
                                                                (0x3020U 
                                                                 == 
                                                                 (0x3060U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                     | (IData)(
                                                               (0x3800U 
                                                                == 
                                                                (0x3800U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                    << 7U)) 
                                                | ((0x40U 
                                                    & (((((2U 
                                                           < 
                                                           (0xfU 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                               >> 5U))) 
                                                          | (IData)(
                                                                    (0x2040U 
                                                                     == 
                                                                     (0x2060U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                         | (IData)(
                                                                   (0x3020U 
                                                                    == 
                                                                    (0x3060U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                        | (IData)(
                                                                  (0x3000U 
                                                                   == 
                                                                   (0x3800U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                       << 6U)) 
                                                   | ((0x20U 
                                                       & (((((2U 
                                                              < 
                                                              (0xfU 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                                  >> 5U))) 
                                                             | (IData)(
                                                                       (0x2040U 
                                                                        == 
                                                                        (0x2060U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                            | (IData)(
                                                                      (0x2020U 
                                                                       == 
                                                                       (0x3060U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                           | (IData)(
                                                                     (0x2800U 
                                                                      == 
                                                                      (0x3800U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & (((((2U 
                                                                 < 
                                                                 (0xfU 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                                     >> 5U))) 
                                                                | (IData)(
                                                                          (0x2040U 
                                                                           == 
                                                                           (0x2060U 
                                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                               | (IData)(
                                                                         (0x2020U 
                                                                          == 
                                                                          (0x3060U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                              | (IData)(
                                                                        (0x2000U 
                                                                         == 
                                                                         (0x3800U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & (((((2U 
                                                                    < 
                                                                    (0xfU 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                                        >> 5U))) 
                                                                   | (IData)(
                                                                             (0x40U 
                                                                              == 
                                                                              (0x2060U 
                                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                  | (IData)(
                                                                            (0x1020U 
                                                                             == 
                                                                             (0x3060U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                 | (IData)(
                                                                           (0x1800U 
                                                                            == 
                                                                            (0x3800U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((((2U 
                                                                       < 
                                                                       (0xfU 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                                           >> 5U))) 
                                                                      | (IData)(
                                                                                (0x40U 
                                                                                == 
                                                                                (0x2060U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                     | (IData)(
                                                                               (0x1020U 
                                                                                == 
                                                                                (0x3060U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                    | (IData)(
                                                                              (0x1000U 
                                                                               == 
                                                                               (0x3800U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((((2U 
                                                                          < 
                                                                          (0xfU 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                                              >> 5U))) 
                                                                         | (IData)(
                                                                                (0x40U 
                                                                                == 
                                                                                (0x2060U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                        | (IData)(
                                                                                (0x20U 
                                                                                == 
                                                                                (0x3060U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                       | (IData)(
                                                                                (0x800U 
                                                                                == 
                                                                                (0x3800U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((((2U 
                                                                           < 
                                                                           (0xfU 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                                               >> 5U))) 
                                                                          | (IData)(
                                                                                (0x40U 
                                                                                == 
                                                                                (0x2060U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                         | (IData)(
                                                                                (0x20U 
                                                                                == 
                                                                                (0x3060U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                        | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3800U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:868: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'B' channel PutFull contains invalid mask (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 868, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:870: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 870, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1815(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1815\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & (1U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:874: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'B' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 874, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:876: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 876, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                       & (1U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((3U == (0xfffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                << 9U) 
                                               | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0x17U)))) 
                           | ((0x2010U == (0xfffffU 
                                           & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                               << 9U) 
                                              | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0x17U)))) 
                              | ((4U == (0xfffffU & 
                                         ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                           << 9U) | 
                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0x17U)))) 
                                 | ((0x54000U == (0xfffffU 
                                                  & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                      << 9U) 
                                                     | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0x17U)))) 
                                    | ((3U == (0x3fU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                  >> 5U))) 
                                       | ((0x200U == 
                                           (0xffffU 
                                            & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                << 5U) 
                                               | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0x1bU)))) 
                                          | ((0U == 
                                              (0xfffffU 
                                               & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                   << 9U) 
                                                  | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x17U)))) 
                                             | ((1U 
                                                 == 
                                                 (0xffffU 
                                                  & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                      << 5U) 
                                                     | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0x1bU)))) 
                                                | ((0x100U 
                                                    == 
                                                    (0xfffffU 
                                                     & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                         << 9U) 
                                                        | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                           >> 0x17U)))) 
                                                   | ((0x110U 
                                                       == 
                                                       (0xfffffU 
                                                        & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                            << 9U) 
                                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                              >> 0x17U)))) 
                                                      | ((8U 
                                                          == 
                                                          (0xfU 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                              >> 7U))) 
                                                         | (3U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                                >> 8U)))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:880: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'B' channel PutPartial carries unmanaged address (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 880, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:882: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 882, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1816(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1816\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                       & (1U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (0xfU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 5U)))) 
                                         & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                             << 0x15U) 
                                            | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xbU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:886: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'B' channel PutPartial address not aligned to size (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 886, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:888: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 888, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                       & (1U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:892: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'B' channel PutPartial carries invalid param (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 892, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:894: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 894, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1817(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1817\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                       & (1U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0xffU & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                          << 0x15U) 
                                         | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                            >> 0xbU)) 
                                        & (~ ((0x80U 
                                               & (((((2U 
                                                      < 
                                                      (0xfU 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 5U))) 
                                                     | (IData)(
                                                               (0x2040U 
                                                                == 
                                                                (0x2060U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                    | (IData)(
                                                              (0x3020U 
                                                               == 
                                                               (0x3060U 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                   | (IData)(
                                                             (0x3800U 
                                                              == 
                                                              (0x3800U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                  << 7U)) 
                                              | ((0x40U 
                                                  & (((((2U 
                                                         < 
                                                         (0xfU 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                             >> 5U))) 
                                                        | (IData)(
                                                                  (0x2040U 
                                                                   == 
                                                                   (0x2060U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                       | (IData)(
                                                                 (0x3020U 
                                                                  == 
                                                                  (0x3060U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                      | (IData)(
                                                                (0x3000U 
                                                                 == 
                                                                 (0x3800U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                     << 6U)) 
                                                 | ((0x20U 
                                                     & (((((2U 
                                                            < 
                                                            (0xfU 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                                >> 5U))) 
                                                           | (IData)(
                                                                     (0x2040U 
                                                                      == 
                                                                      (0x2060U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                          | (IData)(
                                                                    (0x2020U 
                                                                     == 
                                                                     (0x3060U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                         | (IData)(
                                                                   (0x2800U 
                                                                    == 
                                                                    (0x3800U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                        << 5U)) 
                                                    | ((0x10U 
                                                        & (((((2U 
                                                               < 
                                                               (0xfU 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                                   >> 5U))) 
                                                              | (IData)(
                                                                        (0x2040U 
                                                                         == 
                                                                         (0x2060U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                             | (IData)(
                                                                       (0x2020U 
                                                                        == 
                                                                        (0x3060U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                            | (IData)(
                                                                      (0x2000U 
                                                                       == 
                                                                       (0x3800U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                           << 4U)) 
                                                       | ((8U 
                                                           & (((((2U 
                                                                  < 
                                                                  (0xfU 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                                      >> 5U))) 
                                                                 | (IData)(
                                                                           (0x40U 
                                                                            == 
                                                                            (0x2060U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                | (IData)(
                                                                          (0x1020U 
                                                                           == 
                                                                           (0x3060U 
                                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                               | (IData)(
                                                                         (0x1800U 
                                                                          == 
                                                                          (0x3800U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                              << 3U)) 
                                                          | ((4U 
                                                              & (((((2U 
                                                                     < 
                                                                     (0xfU 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                                         >> 5U))) 
                                                                    | (IData)(
                                                                              (0x40U 
                                                                               == 
                                                                               (0x2060U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                   | (IData)(
                                                                             (0x1020U 
                                                                              == 
                                                                              (0x3060U 
                                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                  | (IData)(
                                                                            (0x1000U 
                                                                             == 
                                                                             (0x3800U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                 << 2U)) 
                                                             | ((2U 
                                                                 & (((((2U 
                                                                        < 
                                                                        (0xfU 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                                            >> 5U))) 
                                                                       | (IData)(
                                                                                (0x40U 
                                                                                == 
                                                                                (0x2060U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                      | (IData)(
                                                                                (0x20U 
                                                                                == 
                                                                                (0x3060U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                     | (IData)(
                                                                               (0x800U 
                                                                                == 
                                                                                (0x3800U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                    << 1U)) 
                                                                | (1U 
                                                                   & ((((2U 
                                                                         < 
                                                                         (0xfU 
                                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                                             >> 5U))) 
                                                                        | (IData)(
                                                                                (0x40U 
                                                                                == 
                                                                                (0x2060U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                       | (IData)(
                                                                                (0x20U 
                                                                                == 
                                                                                (0x3060U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                      | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3800U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U]))))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:898: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'B' channel PutPartial contains invalid mask (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 898, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:900: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 900, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1818(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1818\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & (2U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:904: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'B' channel carries Arithmetic type unsupported by master (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 904, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:906: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 906, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                       & (2U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((3U == (0xfffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                << 9U) 
                                               | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0x17U)))) 
                           | ((0x2010U == (0xfffffU 
                                           & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                               << 9U) 
                                              | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0x17U)))) 
                              | ((4U == (0xfffffU & 
                                         ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                           << 9U) | 
                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0x17U)))) 
                                 | ((0x54000U == (0xfffffU 
                                                  & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                      << 9U) 
                                                     | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0x17U)))) 
                                    | ((3U == (0x3fU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                  >> 5U))) 
                                       | ((0x200U == 
                                           (0xffffU 
                                            & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                << 5U) 
                                               | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0x1bU)))) 
                                          | ((0U == 
                                              (0xfffffU 
                                               & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                   << 9U) 
                                                  | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x17U)))) 
                                             | ((1U 
                                                 == 
                                                 (0xffffU 
                                                  & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                      << 5U) 
                                                     | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0x1bU)))) 
                                                | ((0x100U 
                                                    == 
                                                    (0xfffffU 
                                                     & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                         << 9U) 
                                                        | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                           >> 0x17U)))) 
                                                   | ((0x110U 
                                                       == 
                                                       (0xfffffU 
                                                        & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                            << 9U) 
                                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                              >> 0x17U)))) 
                                                      | ((8U 
                                                          == 
                                                          (0xfU 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                              >> 7U))) 
                                                         | (3U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                                >> 8U)))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:910: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'B' channel Arithmetic carries unmanaged address (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 910, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:912: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 912, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1819(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1819\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                       & (2U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (0xfU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 5U)))) 
                                         & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                             << 0x15U) 
                                            | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xbU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:916: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'B' channel Arithmetic address not aligned to size (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 916, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:918: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 918, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                       & (2U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                  >> 0xbU)) != ((0x80U 
                                                 & (((((2U 
                                                        < 
                                                        (0xfU 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                            >> 5U))) 
                                                       | (IData)(
                                                                 (0x2040U 
                                                                  == 
                                                                  (0x2060U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                      | (IData)(
                                                                (0x3020U 
                                                                 == 
                                                                 (0x3060U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                     | (IData)(
                                                               (0x3800U 
                                                                == 
                                                                (0x3800U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                    << 7U)) 
                                                | ((0x40U 
                                                    & (((((2U 
                                                           < 
                                                           (0xfU 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                               >> 5U))) 
                                                          | (IData)(
                                                                    (0x2040U 
                                                                     == 
                                                                     (0x2060U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                         | (IData)(
                                                                   (0x3020U 
                                                                    == 
                                                                    (0x3060U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                        | (IData)(
                                                                  (0x3000U 
                                                                   == 
                                                                   (0x3800U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                       << 6U)) 
                                                   | ((0x20U 
                                                       & (((((2U 
                                                              < 
                                                              (0xfU 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                                  >> 5U))) 
                                                             | (IData)(
                                                                       (0x2040U 
                                                                        == 
                                                                        (0x2060U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                            | (IData)(
                                                                      (0x2020U 
                                                                       == 
                                                                       (0x3060U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                           | (IData)(
                                                                     (0x2800U 
                                                                      == 
                                                                      (0x3800U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & (((((2U 
                                                                 < 
                                                                 (0xfU 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                                     >> 5U))) 
                                                                | (IData)(
                                                                          (0x2040U 
                                                                           == 
                                                                           (0x2060U 
                                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                               | (IData)(
                                                                         (0x2020U 
                                                                          == 
                                                                          (0x3060U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                              | (IData)(
                                                                        (0x2000U 
                                                                         == 
                                                                         (0x3800U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & (((((2U 
                                                                    < 
                                                                    (0xfU 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                                        >> 5U))) 
                                                                   | (IData)(
                                                                             (0x40U 
                                                                              == 
                                                                              (0x2060U 
                                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                  | (IData)(
                                                                            (0x1020U 
                                                                             == 
                                                                             (0x3060U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                 | (IData)(
                                                                           (0x1800U 
                                                                            == 
                                                                            (0x3800U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((((2U 
                                                                       < 
                                                                       (0xfU 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                                           >> 5U))) 
                                                                      | (IData)(
                                                                                (0x40U 
                                                                                == 
                                                                                (0x2060U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                     | (IData)(
                                                                               (0x1020U 
                                                                                == 
                                                                                (0x3060U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                    | (IData)(
                                                                              (0x1000U 
                                                                               == 
                                                                               (0x3800U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((((2U 
                                                                          < 
                                                                          (0xfU 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                                              >> 5U))) 
                                                                         | (IData)(
                                                                                (0x40U 
                                                                                == 
                                                                                (0x2060U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                        | (IData)(
                                                                                (0x20U 
                                                                                == 
                                                                                (0x3060U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                       | (IData)(
                                                                                (0x800U 
                                                                                == 
                                                                                (0x3800U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((((2U 
                                                                           < 
                                                                           (0xfU 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                                               >> 5U))) 
                                                                          | (IData)(
                                                                                (0x40U 
                                                                                == 
                                                                                (0x2060U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                         | (IData)(
                                                                                (0x20U 
                                                                                == 
                                                                                (0x3060U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                        | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3800U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:922: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'B' channel Arithmetic contains invalid mask (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 922, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:924: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 924, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1820(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1820\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & (3U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:928: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'B' channel carries Logical type unsupported by client (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 928, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:930: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 930, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                       & (3U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((3U == (0xfffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                << 9U) 
                                               | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0x17U)))) 
                           | ((0x2010U == (0xfffffU 
                                           & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                               << 9U) 
                                              | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0x17U)))) 
                              | ((4U == (0xfffffU & 
                                         ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                           << 9U) | 
                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0x17U)))) 
                                 | ((0x54000U == (0xfffffU 
                                                  & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                      << 9U) 
                                                     | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0x17U)))) 
                                    | ((3U == (0x3fU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                  >> 5U))) 
                                       | ((0x200U == 
                                           (0xffffU 
                                            & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                << 5U) 
                                               | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0x1bU)))) 
                                          | ((0U == 
                                              (0xfffffU 
                                               & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                   << 9U) 
                                                  | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x17U)))) 
                                             | ((1U 
                                                 == 
                                                 (0xffffU 
                                                  & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                      << 5U) 
                                                     | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0x1bU)))) 
                                                | ((0x100U 
                                                    == 
                                                    (0xfffffU 
                                                     & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                         << 9U) 
                                                        | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                           >> 0x17U)))) 
                                                   | ((0x110U 
                                                       == 
                                                       (0xfffffU 
                                                        & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                            << 9U) 
                                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                              >> 0x17U)))) 
                                                      | ((8U 
                                                          == 
                                                          (0xfU 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                              >> 7U))) 
                                                         | (3U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                                >> 8U)))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:934: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'B' channel Logical carries unmanaged address (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 934, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:936: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 936, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1821(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1821\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                       & (3U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (0xfU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 5U)))) 
                                         & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                             << 0x15U) 
                                            | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xbU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:940: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'B' channel Logical address not aligned to size (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 940, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:942: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 942, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                       & (3U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                  >> 0xbU)) != ((0x80U 
                                                 & (((((2U 
                                                        < 
                                                        (0xfU 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                            >> 5U))) 
                                                       | (IData)(
                                                                 (0x2040U 
                                                                  == 
                                                                  (0x2060U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                      | (IData)(
                                                                (0x3020U 
                                                                 == 
                                                                 (0x3060U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                     | (IData)(
                                                               (0x3800U 
                                                                == 
                                                                (0x3800U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                    << 7U)) 
                                                | ((0x40U 
                                                    & (((((2U 
                                                           < 
                                                           (0xfU 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                               >> 5U))) 
                                                          | (IData)(
                                                                    (0x2040U 
                                                                     == 
                                                                     (0x2060U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                         | (IData)(
                                                                   (0x3020U 
                                                                    == 
                                                                    (0x3060U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                        | (IData)(
                                                                  (0x3000U 
                                                                   == 
                                                                   (0x3800U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                       << 6U)) 
                                                   | ((0x20U 
                                                       & (((((2U 
                                                              < 
                                                              (0xfU 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                                  >> 5U))) 
                                                             | (IData)(
                                                                       (0x2040U 
                                                                        == 
                                                                        (0x2060U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                            | (IData)(
                                                                      (0x2020U 
                                                                       == 
                                                                       (0x3060U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                           | (IData)(
                                                                     (0x2800U 
                                                                      == 
                                                                      (0x3800U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & (((((2U 
                                                                 < 
                                                                 (0xfU 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                                     >> 5U))) 
                                                                | (IData)(
                                                                          (0x2040U 
                                                                           == 
                                                                           (0x2060U 
                                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                               | (IData)(
                                                                         (0x2020U 
                                                                          == 
                                                                          (0x3060U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                              | (IData)(
                                                                        (0x2000U 
                                                                         == 
                                                                         (0x3800U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & (((((2U 
                                                                    < 
                                                                    (0xfU 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                                        >> 5U))) 
                                                                   | (IData)(
                                                                             (0x40U 
                                                                              == 
                                                                              (0x2060U 
                                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                  | (IData)(
                                                                            (0x1020U 
                                                                             == 
                                                                             (0x3060U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                 | (IData)(
                                                                           (0x1800U 
                                                                            == 
                                                                            (0x3800U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((((2U 
                                                                       < 
                                                                       (0xfU 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                                           >> 5U))) 
                                                                      | (IData)(
                                                                                (0x40U 
                                                                                == 
                                                                                (0x2060U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                     | (IData)(
                                                                               (0x1020U 
                                                                                == 
                                                                                (0x3060U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                    | (IData)(
                                                                              (0x1000U 
                                                                               == 
                                                                               (0x3800U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((((2U 
                                                                          < 
                                                                          (0xfU 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                                              >> 5U))) 
                                                                         | (IData)(
                                                                                (0x40U 
                                                                                == 
                                                                                (0x2060U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                        | (IData)(
                                                                                (0x20U 
                                                                                == 
                                                                                (0x3060U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                       | (IData)(
                                                                                (0x800U 
                                                                                == 
                                                                                (0x3800U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((((2U 
                                                                           < 
                                                                           (0xfU 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                                               >> 5U))) 
                                                                          | (IData)(
                                                                                (0x40U 
                                                                                == 
                                                                                (0x2060U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                         | (IData)(
                                                                                (0x20U 
                                                                                == 
                                                                                (0x3060U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                        | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3800U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:946: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'B' channel Logical contains invalid mask (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 946, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:948: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 948, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1822(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1822\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                      & (5U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:952: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'B' channel carries Hint type unsupported by client (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 952, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:954: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 954, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                       & (5U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((3U == (0xfffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                << 9U) 
                                               | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0x17U)))) 
                           | ((0x2010U == (0xfffffU 
                                           & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                               << 9U) 
                                              | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0x17U)))) 
                              | ((4U == (0xfffffU & 
                                         ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                           << 9U) | 
                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0x17U)))) 
                                 | ((0x54000U == (0xfffffU 
                                                  & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                      << 9U) 
                                                     | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0x17U)))) 
                                    | ((3U == (0x3fU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                  >> 5U))) 
                                       | ((0x200U == 
                                           (0xffffU 
                                            & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                << 5U) 
                                               | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0x1bU)))) 
                                          | ((0U == 
                                              (0xfffffU 
                                               & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                   << 9U) 
                                                  | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x17U)))) 
                                             | ((1U 
                                                 == 
                                                 (0xffffU 
                                                  & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                      << 5U) 
                                                     | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0x1bU)))) 
                                                | ((0x100U 
                                                    == 
                                                    (0xfffffU 
                                                     & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                         << 9U) 
                                                        | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                           >> 0x17U)))) 
                                                   | ((0x110U 
                                                       == 
                                                       (0xfffffU 
                                                        & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                            << 9U) 
                                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                              >> 0x17U)))) 
                                                      | ((8U 
                                                          == 
                                                          (0xfU 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                              >> 7U))) 
                                                         | (3U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                                                >> 8U)))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:958: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'B' channel Hint carries unmanaged address (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 958, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:960: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 960, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1823(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1823\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                       & (5U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (0xfU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 5U)))) 
                                         & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                             << 0x15U) 
                                            | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xbU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:964: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'B' channel Hint address not aligned to size (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 964, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:966: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 966, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                       & (5U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[1U] 
                                  >> 0xbU)) != ((0x80U 
                                                 & (((((2U 
                                                        < 
                                                        (0xfU 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                            >> 5U))) 
                                                       | (IData)(
                                                                 (0x2040U 
                                                                  == 
                                                                  (0x2060U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                      | (IData)(
                                                                (0x3020U 
                                                                 == 
                                                                 (0x3060U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                     | (IData)(
                                                               (0x3800U 
                                                                == 
                                                                (0x3800U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                    << 7U)) 
                                                | ((0x40U 
                                                    & (((((2U 
                                                           < 
                                                           (0xfU 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                               >> 5U))) 
                                                          | (IData)(
                                                                    (0x2040U 
                                                                     == 
                                                                     (0x2060U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                         | (IData)(
                                                                   (0x3020U 
                                                                    == 
                                                                    (0x3060U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                        | (IData)(
                                                                  (0x3000U 
                                                                   == 
                                                                   (0x3800U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                       << 6U)) 
                                                   | ((0x20U 
                                                       & (((((2U 
                                                              < 
                                                              (0xfU 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                                  >> 5U))) 
                                                             | (IData)(
                                                                       (0x2040U 
                                                                        == 
                                                                        (0x2060U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                            | (IData)(
                                                                      (0x2020U 
                                                                       == 
                                                                       (0x3060U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                           | (IData)(
                                                                     (0x2800U 
                                                                      == 
                                                                      (0x3800U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & (((((2U 
                                                                 < 
                                                                 (0xfU 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                                     >> 5U))) 
                                                                | (IData)(
                                                                          (0x2040U 
                                                                           == 
                                                                           (0x2060U 
                                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                               | (IData)(
                                                                         (0x2020U 
                                                                          == 
                                                                          (0x3060U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                              | (IData)(
                                                                        (0x2000U 
                                                                         == 
                                                                         (0x3800U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & (((((2U 
                                                                    < 
                                                                    (0xfU 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                                        >> 5U))) 
                                                                   | (IData)(
                                                                             (0x40U 
                                                                              == 
                                                                              (0x2060U 
                                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                  | (IData)(
                                                                            (0x1020U 
                                                                             == 
                                                                             (0x3060U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                 | (IData)(
                                                                           (0x1800U 
                                                                            == 
                                                                            (0x3800U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((((2U 
                                                                       < 
                                                                       (0xfU 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                                           >> 5U))) 
                                                                      | (IData)(
                                                                                (0x40U 
                                                                                == 
                                                                                (0x2060U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                     | (IData)(
                                                                               (0x1020U 
                                                                                == 
                                                                                (0x3060U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                    | (IData)(
                                                                              (0x1000U 
                                                                               == 
                                                                               (0x3800U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((((2U 
                                                                          < 
                                                                          (0xfU 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                                              >> 5U))) 
                                                                         | (IData)(
                                                                                (0x40U 
                                                                                == 
                                                                                (0x2060U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                        | (IData)(
                                                                                (0x20U 
                                                                                == 
                                                                                (0x3060U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                       | (IData)(
                                                                                (0x800U 
                                                                                == 
                                                                                (0x3800U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((((2U 
                                                                           < 
                                                                           (0xfU 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U] 
                                                                               >> 5U))) 
                                                                          | (IData)(
                                                                                (0x40U 
                                                                                == 
                                                                                (0x2060U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                         | (IData)(
                                                                                (0x20U 
                                                                                == 
                                                                                (0x3060U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))) 
                                                                        | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x3800U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U])))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:970: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'B' channel Hint contains invalid mask (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 970, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:972: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 972, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1824(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1824\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_b_valid) 
                       & (5U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT___ram_ext_R0_data[3U] 
                        >> 0x13U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:976: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'B' channel Hint is corrupt (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 976, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:978: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 978, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((3U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                   >> 0xcU)) | ((0x2010U 
                                                 == 
                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                  >> 0xcU)) 
                                                | ((4U 
                                                    == 
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                     >> 0xcU)) 
                                                   | ((0x54000U 
                                                       == 
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                        >> 0xcU)) 
                                                      | ((3U 
                                                          == 
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                           >> 0x1aU)) 
                                                         | ((0x200U 
                                                             == 
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                              >> 0x10U)) 
                                                            | ((0U 
                                                                == 
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                 >> 0xcU)) 
                                                               | ((1U 
                                                                   == 
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                    >> 0x10U)) 
                                                                  | ((0x100U 
                                                                      == 
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                       >> 0xcU)) 
                                                                     | ((0x110U 
                                                                         == 
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                          >> 0xcU)) 
                                                                        | ((8U 
                                                                            == 
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                             >> 0x1cU)) 
                                                                           | (3U 
                                                                              == 
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                               >> 0x1dU))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:982: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel ProbeAck carries unmanaged address (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 982, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:984: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 984, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1825(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1825\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (3U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:988: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel ProbeAck smaller than a beat (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 988, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:990: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 990, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_size))) 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:994: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel ProbeAck address not aligned to size (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 994, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:996: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 996, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1826(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1826\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (6U == (6U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_param)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1000: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel ProbeAck carries invalid report param (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1000, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1002: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1002, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((3U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                   >> 0xcU)) | ((0x2010U 
                                                 == 
                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                  >> 0xcU)) 
                                                | ((4U 
                                                    == 
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                     >> 0xcU)) 
                                                   | ((0x54000U 
                                                       == 
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                        >> 0xcU)) 
                                                      | ((3U 
                                                          == 
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                           >> 0x1aU)) 
                                                         | ((0x200U 
                                                             == 
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                              >> 0x10U)) 
                                                            | ((0U 
                                                                == 
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                 >> 0xcU)) 
                                                               | ((1U 
                                                                   == 
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                    >> 0x10U)) 
                                                                  | ((0x100U 
                                                                      == 
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                       >> 0xcU)) 
                                                                     | ((0x110U 
                                                                         == 
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                          >> 0xcU)) 
                                                                        | ((8U 
                                                                            == 
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                             >> 0x1cU)) 
                                                                           | (3U 
                                                                              == 
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                               >> 0x1dU))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1006: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel ProbeAckData carries unmanaged address (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1006, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1008: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1008, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1827(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1827\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (3U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1012: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel ProbeAckData smaller than a beat (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1012, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1014: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1014, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_size))) 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1018: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel ProbeAckData address not aligned to size (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1018, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1020: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1020, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1828(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1828\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (6U == (6U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_param)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1024: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel ProbeAckData carries invalid report param (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1024, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1026: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1026, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ (((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_size)) 
                            & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_size))) 
                           & (8U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                     >> 0x1cU))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1030: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel carries Release type unsupported by manager (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1030, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1032: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1032, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1829(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1829\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_source)) 
                             & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_size))) 
                            & (0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_size))) 
                           & ((((((((((0U == ((0x7fffcU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                  >> 0xdU)) 
                                              | (3U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                    >> 0xcU)))) 
                                      | (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                >> 0xcU))) 
                                     | (1U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                               >> 0x10U))) 
                                    | (0U == ((0x7fff0U 
                                               & (0x80U 
                                                  ^ 
                                                  (0x7fff0U 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                      >> 0xdU)))) 
                                              | (0xfU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                    >> 0xcU))))) 
                                   | (0x200U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                 >> 0x10U))) 
                                  | (0x2010U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                 >> 0xcU))) 
                                 | (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                           >> 0x1aU))) 
                                | (0x54000U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                >> 0xcU))) 
                               | (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                         >> 0x1dU))) 
                              | (8U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                        >> 0x1cU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1036: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1036, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1038: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1038, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1830(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1830\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (3U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1042: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel Release smaller than a beat (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1042, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1044: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1044, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_size))) 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1048: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel Release address not aligned to size (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1048, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1050: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1050, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1831(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1831\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (6U == (6U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_param)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1054: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel Release carries invalid report param (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1054, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1056: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1056, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ (((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_size)) 
                            & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_size))) 
                           & (8U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                     >> 0x1cU))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1060: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel carries ReleaseData type unsupported by manager (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1060, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1062: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1062, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1832(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1832\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_source)) 
                             & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_size))) 
                            & (0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_size))) 
                           & ((((((((((0U == ((0x7fffcU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                  >> 0xdU)) 
                                              | (3U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                    >> 0xcU)))) 
                                      | (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                >> 0xcU))) 
                                     | (1U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                               >> 0x10U))) 
                                    | (0U == ((0x7fff0U 
                                               & (0x80U 
                                                  ^ 
                                                  (0x7fff0U 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                      >> 0xdU)))) 
                                              | (0xfU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                    >> 0xcU))))) 
                                   | (0x200U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                 >> 0x10U))) 
                                  | (0x2010U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                 >> 0xcU))) 
                                 | (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                           >> 0x1aU))) 
                                | (0x54000U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                >> 0xcU))) 
                               | (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                         >> 0x1dU))) 
                              | (8U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                        >> 0x1cU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1066: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1066, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1068: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1068, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1833(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1833\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (3U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1072: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel ReleaseData smaller than a beat (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1072, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1074: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1074, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_size))) 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1078: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel ReleaseData address not aligned to size (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1078, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1080: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1080, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1834(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1834\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (6U == (6U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_param)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1084: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel ReleaseData carries invalid report param (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1084, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1086: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1086, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((3U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                   >> 0xcU)) | ((0x2010U 
                                                 == 
                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                  >> 0xcU)) 
                                                | ((4U 
                                                    == 
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                     >> 0xcU)) 
                                                   | ((0x54000U 
                                                       == 
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                        >> 0xcU)) 
                                                      | ((3U 
                                                          == 
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                           >> 0x1aU)) 
                                                         | ((0x200U 
                                                             == 
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                              >> 0x10U)) 
                                                            | ((0U 
                                                                == 
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                 >> 0xcU)) 
                                                               | ((1U 
                                                                   == 
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                    >> 0x10U)) 
                                                                  | ((0x100U 
                                                                      == 
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                       >> 0xcU)) 
                                                                     | ((0x110U 
                                                                         == 
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                          >> 0xcU)) 
                                                                        | ((8U 
                                                                            == 
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                             >> 0x1cU)) 
                                                                           | (3U 
                                                                              == 
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                               >> 0x1dU))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1090: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel AccessAck carries unmanaged address (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1090, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1092: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1092, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1835(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1835\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_size))) 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1096: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel AccessAck address not aligned to size (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1096, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1098: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1098, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1102: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel AccessAck carries invalid param (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1102, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1104: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1104, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1836(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1836\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((3U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                   >> 0xcU)) | ((0x2010U 
                                                 == 
                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                  >> 0xcU)) 
                                                | ((4U 
                                                    == 
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                     >> 0xcU)) 
                                                   | ((0x54000U 
                                                       == 
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                        >> 0xcU)) 
                                                      | ((3U 
                                                          == 
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                           >> 0x1aU)) 
                                                         | ((0x200U 
                                                             == 
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                              >> 0x10U)) 
                                                            | ((0U 
                                                                == 
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                 >> 0xcU)) 
                                                               | ((1U 
                                                                   == 
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                    >> 0x10U)) 
                                                                  | ((0x100U 
                                                                      == 
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                       >> 0xcU)) 
                                                                     | ((0x110U 
                                                                         == 
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                          >> 0xcU)) 
                                                                        | ((8U 
                                                                            == 
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                             >> 0x1cU)) 
                                                                           | (3U 
                                                                              == 
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address 
                                                                               >> 0x1dU))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1108: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel AccessAckData carries unmanaged address (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1108, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1110: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1110, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1837(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1837\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_size))) 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__probe_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1114: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel AccessAckData address not aligned to size (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1114, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1116: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1116, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_valid) 
                       & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_c_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1120: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor: Assertion failed: 'C' channel AccessAckData carries invalid param (connected at HellaCache.scala:269:21)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1120, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_46.sv:1122: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain_2.tile_reset_domain_tile.tlMasterXbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_46.sv", 1122, "");
        }
    }
}
