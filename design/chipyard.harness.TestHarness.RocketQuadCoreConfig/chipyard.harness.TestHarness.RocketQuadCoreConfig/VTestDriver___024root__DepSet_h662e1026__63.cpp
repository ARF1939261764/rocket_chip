// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestDriver__Syms.h"
#include "VTestDriver___024root.h"

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3271(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3271\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_valid) 
                       & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source) 
                               >> 4U)) | ((0x1cU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source)) 
                                          | ((0x1dU 
                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source)) 
                                             | ((0x1eU 
                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source)) 
                                                | ((0x18U 
                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source)) 
                                                   | ((0x19U 
                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source)) 
                                                      | ((0x1aU 
                                                          == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source)) 
                                                         | ((0x14U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source)) 
                                                            | ((0x15U 
                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source)) 
                                                               | ((0x16U 
                                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source)) 
                                                                  | ((0x10U 
                                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source)) 
                                                                     | ((0x11U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source)) 
                                                                        | (0x12U 
                                                                           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source)))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:538: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel Logical carries invalid source ID (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 538, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:540: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 540, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3272(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3272\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_valid) 
                       & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size))) 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:544: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel Logical address not aligned to size (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 544, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:546: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 546, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_valid) 
                       & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_param) 
                        >> 2U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:550: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel Logical carries invalid opcode param (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 550, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:552: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 552, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3273(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3273\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_valid) 
                       & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_mask) 
                        != ((0x80U & (((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size)) 
                                         << 7U) | (0xffffff80U 
                                                   & (((2U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size))) 
                                                       << 7U) 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address 
                                                         << 5U)))) 
                                       | (((1U == (3U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size))) 
                                           & (IData)(
                                                     (6U 
                                                      == 
                                                      (6U 
                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address)))) 
                                          << 7U)) | 
                                      ((IData)((7U 
                                                == 
                                                (7U 
                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address))) 
                                       << 7U))) | (
                                                   (0x40U 
                                                    & (((((2U 
                                                           < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size)) 
                                                          << 6U) 
                                                         | (0xffffffc0U 
                                                            & (((2U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size))) 
                                                                << 6U) 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address 
                                                                  << 4U)))) 
                                                        | (((1U 
                                                             == 
                                                             (3U 
                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size))) 
                                                            & (IData)(
                                                                      (6U 
                                                                       == 
                                                                       (6U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address)))) 
                                                           << 6U)) 
                                                       | ((IData)(
                                                                  (6U 
                                                                   == 
                                                                   (7U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address))) 
                                                          << 6U))) 
                                                   | ((0x20U 
                                                       & (((((2U 
                                                              < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size)) 
                                                             << 5U) 
                                                            | (0xffffffe0U 
                                                               & (((2U 
                                                                    == 
                                                                    (3U 
                                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size))) 
                                                                   << 5U) 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address 
                                                                     << 3U)))) 
                                                           | (((1U 
                                                                == 
                                                                (3U 
                                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size))) 
                                                               & (IData)(
                                                                         (4U 
                                                                          == 
                                                                          (6U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address)))) 
                                                              << 5U)) 
                                                          | ((IData)(
                                                                     (5U 
                                                                      == 
                                                                      (7U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address))) 
                                                             << 5U))) 
                                                      | ((0x10U 
                                                          & (((((2U 
                                                                 < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size)) 
                                                                << 4U) 
                                                               | (0xfffffff0U 
                                                                  & (((2U 
                                                                       == 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size))) 
                                                                      << 4U) 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address 
                                                                        << 2U)))) 
                                                              | (((1U 
                                                                   == 
                                                                   (3U 
                                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size))) 
                                                                  & (IData)(
                                                                            (4U 
                                                                             == 
                                                                             (6U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address)))) 
                                                                 << 4U)) 
                                                             | ((IData)(
                                                                        (4U 
                                                                         == 
                                                                         (7U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address))) 
                                                                << 4U))) 
                                                         | ((8U 
                                                             & (((((2U 
                                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size)) 
                                                                   | ((~ 
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address 
                                                                        >> 2U)) 
                                                                      & (2U 
                                                                         == 
                                                                         (3U 
                                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size))))) 
                                                                  | ((1U 
                                                                      == 
                                                                      (3U 
                                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size))) 
                                                                     & (IData)(
                                                                               (2U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address))))) 
                                                                 | (IData)(
                                                                           (3U 
                                                                            == 
                                                                            (7U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address)))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((((2U 
                                                                       < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size)) 
                                                                      | ((~ 
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address 
                                                                           >> 2U)) 
                                                                         & (2U 
                                                                            == 
                                                                            (3U 
                                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size))))) 
                                                                     | ((1U 
                                                                         == 
                                                                         (3U 
                                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size))) 
                                                                        & (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address))))) 
                                                                    | (IData)(
                                                                              (2U 
                                                                               == 
                                                                               (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address)))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((((2U 
                                                                          < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size)) 
                                                                         | ((~ 
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address 
                                                                              >> 2U)) 
                                                                            & (2U 
                                                                               == 
                                                                               (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size))))) 
                                                                        | ((1U 
                                                                            == 
                                                                            (3U 
                                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size))) 
                                                                           & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address))))) 
                                                                       | (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address)))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((((2U 
                                                                           < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size)) 
                                                                          | ((~ 
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address 
                                                                               >> 2U)) 
                                                                             & (2U 
                                                                                == 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size))))) 
                                                                         | ((1U 
                                                                             == 
                                                                             (3U 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size))) 
                                                                            & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address))))) 
                                                                        | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address)))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:556: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel Logical contains invalid mask (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 556, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:558: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 558, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3274(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3274\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ (IData)(((0x3000U == (0x7ffff000U 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address)) 
                                   & ((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size)) 
                                      & (((((((((((((~ 
                                                     ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source) 
                                                      >> 4U)) 
                                                    | (0x1cU 
                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source))) 
                                                   | (0x1dU 
                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source))) 
                                                  | (0x1eU 
                                                     == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source))) 
                                                 | (0x18U 
                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source))) 
                                                | (0x19U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source))) 
                                               | (0x1aU 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source))) 
                                              | (0x14U 
                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source))) 
                                             | (0x15U 
                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source))) 
                                            | (0x16U 
                                               == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source))) 
                                           | (0x10U 
                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source))) 
                                          | (0x11U 
                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source))) 
                                         | (0x12U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source)))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:562: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 562, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:564: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 564, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3275(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3275\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source) 
                               >> 4U)) | ((0x1cU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source)) 
                                          | ((0x1dU 
                                              == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source)) 
                                             | ((0x1eU 
                                                 == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source)) 
                                                | ((0x18U 
                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source)) 
                                                   | ((0x19U 
                                                       == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source)) 
                                                      | ((0x1aU 
                                                          == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source)) 
                                                         | ((0x14U 
                                                             == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source)) 
                                                            | ((0x15U 
                                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source)) 
                                                               | ((0x16U 
                                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source)) 
                                                                  | ((0x10U 
                                                                      == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source)) 
                                                                     | ((0x11U 
                                                                         == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source)) 
                                                                        | (0x12U 
                                                                           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source)))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:568: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel Hint carries invalid source ID (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 568, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:570: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 570, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3276(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3276\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size))) 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:574: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel Hint address not aligned to size (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 574, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:576: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 576, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_param) 
                                     >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:580: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel Hint carries invalid opcode param (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 580, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:582: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 582, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3277(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3277\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_mask) 
                        != ((0x80U & (((((2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size)) 
                                         << 7U) | (0xffffff80U 
                                                   & (((2U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size))) 
                                                       << 7U) 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address 
                                                         << 5U)))) 
                                       | (((1U == (3U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size))) 
                                           & (IData)(
                                                     (6U 
                                                      == 
                                                      (6U 
                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address)))) 
                                          << 7U)) | 
                                      ((IData)((7U 
                                                == 
                                                (7U 
                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address))) 
                                       << 7U))) | (
                                                   (0x40U 
                                                    & (((((2U 
                                                           < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size)) 
                                                          << 6U) 
                                                         | (0xffffffc0U 
                                                            & (((2U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size))) 
                                                                << 6U) 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address 
                                                                  << 4U)))) 
                                                        | (((1U 
                                                             == 
                                                             (3U 
                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size))) 
                                                            & (IData)(
                                                                      (6U 
                                                                       == 
                                                                       (6U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address)))) 
                                                           << 6U)) 
                                                       | ((IData)(
                                                                  (6U 
                                                                   == 
                                                                   (7U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address))) 
                                                          << 6U))) 
                                                   | ((0x20U 
                                                       & (((((2U 
                                                              < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size)) 
                                                             << 5U) 
                                                            | (0xffffffe0U 
                                                               & (((2U 
                                                                    == 
                                                                    (3U 
                                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size))) 
                                                                   << 5U) 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address 
                                                                     << 3U)))) 
                                                           | (((1U 
                                                                == 
                                                                (3U 
                                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size))) 
                                                               & (IData)(
                                                                         (4U 
                                                                          == 
                                                                          (6U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address)))) 
                                                              << 5U)) 
                                                          | ((IData)(
                                                                     (5U 
                                                                      == 
                                                                      (7U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address))) 
                                                             << 5U))) 
                                                      | ((0x10U 
                                                          & (((((2U 
                                                                 < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size)) 
                                                                << 4U) 
                                                               | (0xfffffff0U 
                                                                  & (((2U 
                                                                       == 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size))) 
                                                                      << 4U) 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address 
                                                                        << 2U)))) 
                                                              | (((1U 
                                                                   == 
                                                                   (3U 
                                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size))) 
                                                                  & (IData)(
                                                                            (4U 
                                                                             == 
                                                                             (6U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address)))) 
                                                                 << 4U)) 
                                                             | ((IData)(
                                                                        (4U 
                                                                         == 
                                                                         (7U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address))) 
                                                                << 4U))) 
                                                         | ((8U 
                                                             & (((((2U 
                                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size)) 
                                                                   | ((~ 
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address 
                                                                        >> 2U)) 
                                                                      & (2U 
                                                                         == 
                                                                         (3U 
                                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size))))) 
                                                                  | ((1U 
                                                                      == 
                                                                      (3U 
                                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size))) 
                                                                     & (IData)(
                                                                               (2U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address))))) 
                                                                 | (IData)(
                                                                           (3U 
                                                                            == 
                                                                            (7U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address)))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((((2U 
                                                                       < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size)) 
                                                                      | ((~ 
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address 
                                                                           >> 2U)) 
                                                                         & (2U 
                                                                            == 
                                                                            (3U 
                                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size))))) 
                                                                     | ((1U 
                                                                         == 
                                                                         (3U 
                                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size))) 
                                                                        & (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address))))) 
                                                                    | (IData)(
                                                                              (2U 
                                                                               == 
                                                                               (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address)))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((((2U 
                                                                          < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size)) 
                                                                         | ((~ 
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address 
                                                                              >> 2U)) 
                                                                            & (2U 
                                                                               == 
                                                                               (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size))))) 
                                                                        | ((1U 
                                                                            == 
                                                                            (3U 
                                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size))) 
                                                                           & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address))))) 
                                                                       | (IData)(
                                                                                (1U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address)))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((((2U 
                                                                           < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size)) 
                                                                          | ((~ 
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address 
                                                                               >> 2U)) 
                                                                             & (2U 
                                                                                == 
                                                                                (3U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size))))) 
                                                                         | ((1U 
                                                                             == 
                                                                             (3U 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size))) 
                                                                            & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address))))) 
                                                                        | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address)))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:586: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel Hint contains invalid mask (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 586, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:588: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 588, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3278(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3278\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_0) 
                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                            >> 0x16U)) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_1) 
                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                                              >> 0x14U)) 
                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_2) 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                                                 >> 0x14U)) 
                                             | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_3) 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                                                    >> 0x14U)) 
                                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_4) 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                                                      >> 0x14U))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:592: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel Hint is corrupt (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 592, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:594: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 594, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_valid) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_opcode))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:598: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'D' channel has invalid opcode (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 598, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:600: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 600, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3279(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3279\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 0xdU)) | ((0x1cU 
                                             == (0x1fU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 9U))) 
                                            | ((0x1dU 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 9U))) 
                                               | ((0x1eU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 9U))) 
                                                  | ((0x18U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 9U))) 
                                                     | ((0x19U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                             >> 9U))) 
                                                        | ((0x1aU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                >> 9U))) 
                                                           | ((0x14U 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                   >> 9U))) 
                                                              | ((0x15U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                      >> 9U))) 
                                                                 | ((0x16U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                         >> 9U))) 
                                                                    | ((0x10U 
                                                                        == 
                                                                        (0x1fU 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                            >> 9U))) 
                                                                       | ((0x11U 
                                                                           == 
                                                                           (0x1fU 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                               >> 9U))) 
                                                                          | (0x12U 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 9U))))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:604: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 604, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:606: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 606, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3280(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3280\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (3U > (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                      >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:610: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 610, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:612: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 612, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:616: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 616, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:618: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 618, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3281(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3281\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:622: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 622, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:624: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 624, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_denied)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:628: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'D' channel ReleaseAck is denied (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 628, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:630: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 630, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3282(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3282\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 0xdU)) | ((0x1cU 
                                             == (0x1fU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 9U))) 
                                            | ((0x1dU 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 9U))) 
                                               | ((0x1eU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 9U))) 
                                                  | ((0x18U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 9U))) 
                                                     | ((0x19U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                             >> 9U))) 
                                                        | ((0x1aU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                >> 9U))) 
                                                           | ((0x14U 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                   >> 9U))) 
                                                              | ((0x15U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                      >> 9U))) 
                                                                 | ((0x16U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                         >> 9U))) 
                                                                    | ((0x10U 
                                                                        == 
                                                                        (0x1fU 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                            >> 9U))) 
                                                                       | ((0x11U 
                                                                           == 
                                                                           (0x1fU 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                               >> 9U))) 
                                                                          | (0x12U 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 9U))))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:634: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'D' channel Grant carries invalid source ID (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 634, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:636: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 636, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3283(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3283\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_valid) 
                      & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:640: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'D' channel Grant carries invalid sink ID (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 640, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:642: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 642, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (3U > (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                      >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:646: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'D' channel Grant smaller than a beat (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 646, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:648: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 648, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3284(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3284\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0x18U == (0x18U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:652: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'D' channel Grant carries invalid cap param (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 652, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:654: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 654, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0x10U == (0x18U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:658: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'D' channel Grant carries toN param (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 658, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:660: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 660, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3285(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3285\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:664: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'D' channel Grant is corrupt (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 664, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:666: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 666, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 0xdU)) | ((0x1cU 
                                             == (0x1fU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 9U))) 
                                            | ((0x1dU 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 9U))) 
                                               | ((0x1eU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 9U))) 
                                                  | ((0x18U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 9U))) 
                                                     | ((0x19U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                             >> 9U))) 
                                                        | ((0x1aU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                >> 9U))) 
                                                           | ((0x14U 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                   >> 9U))) 
                                                              | ((0x15U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                      >> 9U))) 
                                                                 | ((0x16U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                         >> 9U))) 
                                                                    | ((0x10U 
                                                                        == 
                                                                        (0x1fU 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                            >> 9U))) 
                                                                       | ((0x11U 
                                                                           == 
                                                                           (0x1fU 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                               >> 9U))) 
                                                                          | (0x12U 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 9U))))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:670: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'D' channel GrantData carries invalid source ID (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 670, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:672: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 672, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3286(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3286\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_valid) 
                      & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:676: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 676, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:678: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 678, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (3U > (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                      >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:682: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'D' channel GrantData smaller than a beat (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 682, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:684: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 684, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3287(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3287\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0x18U == (0x18U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:688: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 688, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:690: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 690, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0x10U == (0x18U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:694: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'D' channel GrantData carries toN param (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 694, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:696: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 696, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3288(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3288\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_denied)) 
                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_corrupt)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:700: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 700, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:702: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 702, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_valid) 
                       & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 0xdU)) | ((0x1cU 
                                             == (0x1fU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 9U))) 
                                            | ((0x1dU 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 9U))) 
                                               | ((0x1eU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 9U))) 
                                                  | ((0x18U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 9U))) 
                                                     | ((0x19U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                             >> 9U))) 
                                                        | ((0x1aU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                >> 9U))) 
                                                           | ((0x14U 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                   >> 9U))) 
                                                              | ((0x15U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                      >> 9U))) 
                                                                 | ((0x16U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                         >> 9U))) 
                                                                    | ((0x10U 
                                                                        == 
                                                                        (0x1fU 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                            >> 9U))) 
                                                                       | ((0x11U 
                                                                           == 
                                                                           (0x1fU 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                               >> 9U))) 
                                                                          | (0x12U 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 9U))))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:706: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 706, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:708: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 708, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3289(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3289\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_valid) 
                       & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:712: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'D' channel AccessAck carries invalid param (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 712, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:714: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 714, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_valid) 
                       & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:718: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'D' channel AccessAck is corrupt (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 718, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:720: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 720, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3290(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3290\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_valid) 
                       & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 0xdU)) | ((0x1cU 
                                             == (0x1fU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 9U))) 
                                            | ((0x1dU 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 9U))) 
                                               | ((0x1eU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 9U))) 
                                                  | ((0x18U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 9U))) 
                                                     | ((0x19U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                             >> 9U))) 
                                                        | ((0x1aU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                >> 9U))) 
                                                           | ((0x14U 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                   >> 9U))) 
                                                              | ((0x15U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                      >> 9U))) 
                                                                 | ((0x16U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                         >> 9U))) 
                                                                    | ((0x10U 
                                                                        == 
                                                                        (0x1fU 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                            >> 9U))) 
                                                                       | ((0x11U 
                                                                           == 
                                                                           (0x1fU 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                               >> 9U))) 
                                                                          | (0x12U 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 9U))))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:724: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 724, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:726: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 726, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3291(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3291\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_valid) 
                       & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:730: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 730, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:732: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 732, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_valid) 
                       & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_denied)) 
                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_corrupt)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:736: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 736, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:738: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 738, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3292(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3292\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_valid) 
                       & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 0xdU)) | ((0x1cU 
                                             == (0x1fU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 9U))) 
                                            | ((0x1dU 
                                                == 
                                                (0x1fU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 9U))) 
                                               | ((0x1eU 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 9U))) 
                                                  | ((0x18U 
                                                      == 
                                                      (0x1fU 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                          >> 9U))) 
                                                     | ((0x19U 
                                                         == 
                                                         (0x1fU 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                             >> 9U))) 
                                                        | ((0x1aU 
                                                            == 
                                                            (0x1fU 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                >> 9U))) 
                                                           | ((0x14U 
                                                               == 
                                                               (0x1fU 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                   >> 9U))) 
                                                              | ((0x15U 
                                                                  == 
                                                                  (0x1fU 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                      >> 9U))) 
                                                                 | ((0x16U 
                                                                     == 
                                                                     (0x1fU 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                         >> 9U))) 
                                                                    | ((0x10U 
                                                                        == 
                                                                        (0x1fU 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                            >> 9U))) 
                                                                       | ((0x11U 
                                                                           == 
                                                                           (0x1fU 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                               >> 9U))) 
                                                                          | (0x12U 
                                                                             == 
                                                                             (0x1fU 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                                                >> 9U))))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:742: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'D' channel HintAck carries invalid source ID (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 742, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:744: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 744, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3293(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3293\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_valid) 
                       & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:748: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'D' channel HintAck carries invalid param (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 748, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:750: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 750, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_valid) 
                       & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_corrupt)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:754: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'D' channel HintAck is corrupt (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 754, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:756: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 756, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3294(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3294\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_opcode) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__opcode))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:760: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 760, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:762: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 762, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_param) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:766: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel param changed within multibeat operation (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 766, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:768: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 768, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3295(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3295\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:772: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel size changed within multibeat operation (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 772, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:774: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 774, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:778: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel source changed within multibeat operation (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 778, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:780: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 780, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3296(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3296\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_address 
                        != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__address)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:784: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel address changed with multibeat operation (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 784, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:786: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 786, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_opcode) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__opcode_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:790: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 790, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:792: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 792, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3297(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3297\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 3U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__param_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:796: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'D' channel param changed within multibeat operation (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 796, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:798: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 798, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                 >> 5U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__size_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:802: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'D' channel size changed within multibeat operation (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 802, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:804: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 804, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3298(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3298\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                  >> 9U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__source_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:808: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'D' channel source changed within multibeat operation (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 808, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:810: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 810, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                               >> 0xfU)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__sink))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:814: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'D' channel sink changed with multibeat operation (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 814, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:816: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 816, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3299(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3299\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_denied) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__denied))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:820: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'D' channel denied changed with multibeat operation (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 820, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:822: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 822, "");
        }
    }
    if (VL_UNLIKELY((0x7fffffffU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1446) 
                                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight 
                                       >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:826: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' channel re-used a source ID (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 826, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:828: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 828, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3300(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3300\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1465) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((0x7fffffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight 
                                           >> (0x1fU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 9U)))) 
                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:832: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 832, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:834: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 834, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1465) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__same_cycle_resp)) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_opcode))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_opcode)))))
                                 : 0U)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_opcode))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_opcode)))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:838: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 838, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:840: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 840, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3301(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3301\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h0238daf4__0;
    VlWide<4>/*127:0*/ __Vtemp_h0238daf4__1;
    VlWide<4>/*127:0*/ __Vtemp_h0238daf4__2;
    VlWide<4>/*127:0*/ __Vtemp_h0238daf4__3;
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1465) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__same_cycle_resp)) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size) 
                        != (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                    >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:844: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'D' channel contains improper response size (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 844, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:846: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 846, "");
        }
    }
    VL_SHIFTR_WWI(124,124,7, __Vtemp_h0238daf4__0, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_opcodes, 
                  (0x7cU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                            >> 7U)));
    VL_SHIFTR_WWI(124,124,7, __Vtemp_h0238daf4__1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_opcodes, 
                  (0x7cU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                            >> 7U)));
    VL_SHIFTR_WWI(124,124,7, __Vtemp_h0238daf4__2, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_opcodes, 
                  (0x7cU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                            >> 7U)));
    VL_SHIFTR_WWI(124,124,7, __Vtemp_h0238daf4__3, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_opcodes, 
                  (0x7cU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                            >> 7U)));
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__same_cycle_resp)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1465)) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & 
                                               (__Vtemp_h0238daf4__0[0U] 
                                                >> 1U)))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (__Vtemp_h0238daf4__1[0U] 
                                                     >> 1U))))))
                                 : 0U)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (__Vtemp_h0238daf4__2[0U] 
                                                        >> 1U)))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (__Vtemp_h0238daf4__3[0U] 
                                                              >> 1U))))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:850: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 850, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:852: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 852, "");
        }
    }
}

extern const VlWide<8>/*255:0*/ VTestDriver__ConstPool__CONST_h5a979007_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3302(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3302\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_hb4d94f45__0;
    // Body
    VL_SHIFTR_WWI(248,248,8, __Vtemp_hb4d94f45__0, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight_sizes, 
                  (0xf8U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                            >> 6U)));
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__same_cycle_resp)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1465)) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                 >> 5U)) != (0x7fU 
                                             & ((VTestDriver__ConstPool__CONST_h5a979007_0[0U] 
                                                 & __Vtemp_hb4d94f45__0[0U]) 
                                                >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:856: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'D' channel contains improper response size (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 856, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:858: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 858, "");
        }
    }
    if (VL_UNLIKELY(((((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_valid) 
                           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter_1))) 
                          & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__a_first_counter_1))) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_valid)) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source) 
                           == (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                        >> 9U)))) & 
                       (6U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_d_ready)) 
                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_a_ready)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:862: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 862, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:864: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 864, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3303(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3303\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___same_cycle_resp_T_1)
                                    ? (0x7fffffffU 
                                       & ((IData)(1U) 
                                          << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source)))
                                    : 0U) != ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_valid) 
                                                & (0U 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter_1))) 
                                               & (6U 
                                                  != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_opcode)))
                                               ? (0x7fffffffU 
                                                  & ((IData)(1U) 
                                                     << 
                                                     (0x1fU 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 9U))))
                                               : 0U)) 
                                 | (0U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___same_cycle_resp_T_1)
                                            ? (0x7fffffffU 
                                               & ((IData)(1U) 
                                                  << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source)))
                                            : 0U)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:868: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'A' and 'D' concurrent, despite minlatency 2 (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 868, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:870: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 870, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ (((0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight) 
                                  | (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__watchdog 
                                    < vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:874: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: TileLink timeout expired (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 874, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:876: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 876, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3304(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3304\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_valid) 
                      & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter_2)) 
                         & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_opcode)))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:880: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 880, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:882: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 882, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_valid) 
                       & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__d_first_counter_2)) 
                          & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_opcode)))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                       >> 5U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:886: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor: Assertion failed: 'D' channel contains improper response size (connected at CrossingHelper.scala:30:14)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 886, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_22.sv:888: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.in_xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_22.sv", 888, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3305(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3305\n"); );
    // Body
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceX__DOT__io_x_q__DOT__maybe_full 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceX__DOT__io_x_q__DOT__maybe_full;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceE__DOT__io_e_q__DOT__enq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceE__DOT__io_e_q__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceE__DOT__io_e_q__DOT__deq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceE__DOT__io_e_q__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT__enq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT__enq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT__deq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__busy 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__busy;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__busy 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__busy;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__write__DOT__maybe_full 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__write__DOT__maybe_full;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__s_release 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__s_release;
    if (VL_UNLIKELY(((((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_state)))) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_valid)) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_clients))))) {
        VL_WRITEF("[%0t] %%Error: MSHR.sv:462: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr: Assertion failed\n    at MSHR.scala:105 assert (!meta.clients.orR)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 462, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: MSHR.sv:464: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 464, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_state)))) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_valid)) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_dirty)))) {
        VL_WRITEF("[%0t] %%Error: MSHR.sv:468: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr: Assertion failed\n    at MSHR.scala:106 assert (!meta.dirty)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 468, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: MSHR.sv:470: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 470, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3306(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3306\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_valid) 
                       & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_state))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_dirty)))) {
        VL_WRITEF("[%0t] %%Error: MSHR.sv:474: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr: Assertion failed\n    at MSHR.scala:109 assert (!meta.dirty)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 474, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: MSHR.sv:476: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 476, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_valid) 
                       & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_state))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_clients))))) {
        VL_WRITEF("[%0t] %%Error: MSHR.sv:480: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr: Assertion failed\n    at MSHR.scala:112 assert (meta.clients.orR)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 480, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: MSHR.sv:482: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 482, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3307(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3307\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_valid) 
                       & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_state))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_clients) 
                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_clients) 
                                  - (IData)(1U))))))) {
        VL_WRITEF("[%0t] %%Error: MSHR.sv:486: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr: Assertion failed\n    at MSHR.scala:113 assert ((meta.clients & (meta.clients - 1.U)) === 0.U) // at most one\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 486, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: MSHR.sv:488: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 488, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ ((~ (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_valid) 
                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__w_releaseack)) 
                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__w_rprobeacklast)) 
                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__w_pprobeacklast)) 
                                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__w_grantfirst)))) 
                                 | (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_valid)) 
                                       | ((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__w_releaseack)) 
                                            | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__w_rprobeacklast))) 
                                           | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__w_pprobeacklast))) 
                                          & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__w_grantfirst))))))))))) {
        VL_WRITEF("[%0t] %%Error: MSHR.sv:492: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr: Assertion failed\n    at MSHR.scala:179 assert (!io.status.bits.nestB || !io.status.bits.blockB)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 492, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: MSHR.sv:494: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 494, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3308(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3308\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ ((~ ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__w_rprobeackfirst) 
                                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__w_grantfirst) 
                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__w_pprobeackfirst)))) 
                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_valid))) 
                                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_valid))))))) {
        VL_WRITEF("[%0t] %%Error: MSHR.sv:498: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr: Assertion failed\n    at MSHR.scala:180 assert (!io.status.bits.nestC || !io.status.bits.blockC)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 498, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: MSHR.sv:500: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 500, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__bad_grant) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_hit)) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_valid)) 
                           | (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_state))))))) {
        VL_WRITEF("[%0t] %%Error: MSHR.sv:504: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr: Assertion failed\n    at MSHR.scala:254 assert (!meta_valid || meta.state === BRANCH)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 504, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: MSHR.sv:506: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 506, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3309(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3309\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___bc_mshr_io_schedule_bits_c_valid) 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                          >> 5U)) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (1U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_hit)
                                ? 8U : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_h3d8ae240__0)))))) {
        VL_WRITEF("[%0t] %%Error: MSHR.sv:510: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr: Assertion failed: State transition from S_BRANCH to evicted should be impossible (false,true,true,false,true)\n    at MSHR.scala:346 assert(!(evict === from.code), cf\"State transition from ${from} to evicted should be impossible ${cfg}\")\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 510, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: MSHR.sv:512: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 512, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___bc_mshr_io_schedule_bits_c_valid) 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                          >> 5U)) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (1U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_hit)
                                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_h3d8ae240__0)
                                : 8U))))) {
        VL_WRITEF("[%0t] %%Error: MSHR.sv:516: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr: Assertion failed: State transition from S_BRANCH to flushed should be impossible (false,true,true,false,true)\n    at MSHR.scala:351 assert(!(before === from.code), cf\"State transition from ${from} to flushed should be impossible ${cfg}\")\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 516, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: MSHR.sv:518: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 518, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3310(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3310\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___bc_mshr_io_schedule_bits_c_valid) 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                          >> 5U)) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_hit)
                                ? 8U : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_h3d8ae240__0)))))) {
        VL_WRITEF("[%0t] %%Error: MSHR.sv:522: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr: Assertion failed: State transition from S_BRANCH_C to evicted should be impossible (false,true,true,false,true)\n    at MSHR.scala:346 assert(!(evict === from.code), cf\"State transition from ${from} to evicted should be impossible ${cfg}\")\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 522, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: MSHR.sv:524: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 524, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___bc_mshr_io_schedule_bits_c_valid) 
                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                          >> 5U)) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_hit)
                                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_h3d8ae240__0)
                                : 8U))))) {
        VL_WRITEF("[%0t] %%Error: MSHR.sv:528: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr: Assertion failed: State transition from S_BRANCH_C to flushed should be impossible (false,true,true,false,true)\n    at MSHR.scala:351 assert(!(before === from.code), cf\"State transition from ${from} to flushed should be impossible ${cfg}\")\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 528, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: MSHR.sv:530: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 530, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3311(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3311\n"); );
    // Body
    if (VL_UNLIKELY((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_hc07fd3a9__0) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                           >> 5U)) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                      & (8U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_h3d8ae240__0)
                                 : 8U))) & (1U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(
                                                                         (0U 
                                                                          != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)))) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)))) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state) 
                                                          << 2U)))))))) {
        VL_WRITEF("[%0t] %%Error: MSHR.sv:534: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr: Assertion failed: State transition from S_INVALID to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 534, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: MSHR.sv:536: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 536, "");
        }
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_hc07fd3a9__0) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                           >> 5U)) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                      & (8U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_h3d8ae240__0)
                                 : 8U))) & (0U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(
                                                                         (0U 
                                                                          != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)))) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)))) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state) 
                                                          << 2U)))))))) {
        VL_WRITEF("[%0t] %%Error: MSHR.sv:540: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr: Assertion failed: State transition from S_INVALID to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 540, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: MSHR.sv:542: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 542, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3312(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3312\n"); );
    // Body
    if (VL_UNLIKELY((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_hc07fd3a9__0) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                           >> 5U)) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                      & (8U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_h3d8ae240__0)
                                 : 8U))) & (5U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(
                                                                         (0U 
                                                                          != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)))) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)))) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state) 
                                                          << 2U)))))))) {
        VL_WRITEF("[%0t] %%Error: MSHR.sv:546: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr: Assertion failed: State transition from S_INVALID to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 546, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: MSHR.sv:548: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 548, "");
        }
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_hc07fd3a9__0) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                           >> 5U)) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                      & (8U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_h3d8ae240__0)
                                 : 8U))) & (4U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(
                                                                         (0U 
                                                                          != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)))) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)))) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state) 
                                                          << 2U)))))))) {
        VL_WRITEF("[%0t] %%Error: MSHR.sv:552: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr: Assertion failed: State transition from S_INVALID to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 552, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: MSHR.sv:554: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 554, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3313(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3313\n"); );
    // Body
    if (VL_UNLIKELY((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_hc07fd3a9__0) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                           >> 5U)) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                      & (8U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_h3d8ae240__0)
                                 : 8U))) & (2U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(
                                                                         (0U 
                                                                          != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)))) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)))) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state) 
                                                          << 2U)))))))) {
        VL_WRITEF("[%0t] %%Error: MSHR.sv:558: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr: Assertion failed: State transition from S_INVALID to S_TRUNK_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 558, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: MSHR.sv:560: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 560, "");
        }
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_hc07fd3a9__0) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                           >> 5U)) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                      & (1U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_h3d8ae240__0)
                                 : 8U))) & (8U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(
                                                                         (0U 
                                                                          != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)))) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)))) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state) 
                                                          << 2U)))))))) {
        VL_WRITEF("[%0t] %%Error: MSHR.sv:564: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr: Assertion failed: State transition from S_BRANCH to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 564, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: MSHR.sv:566: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 566, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3314(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3314\n"); );
    // Body
    if (VL_UNLIKELY((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_hc07fd3a9__0) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                           >> 5U)) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                      & (1U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_h3d8ae240__0)
                                 : 8U))) & (0U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(
                                                                         (0U 
                                                                          != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)))) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)))) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state) 
                                                          << 2U)))))))) {
        VL_WRITEF("[%0t] %%Error: MSHR.sv:570: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr: Assertion failed: State transition from S_BRANCH to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 570, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: MSHR.sv:572: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 572, "");
        }
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_hc07fd3a9__0) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                           >> 5U)) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                      & (1U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_h3d8ae240__0)
                                 : 8U))) & (7U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(
                                                                         (0U 
                                                                          != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)))) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)))) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state) 
                                                          << 2U)))))))) {
        VL_WRITEF("[%0t] %%Error: MSHR.sv:576: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr: Assertion failed: State transition from S_BRANCH to S_TIP should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 576, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: MSHR.sv:578: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 578, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3315(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3315\n"); );
    // Body
    if (VL_UNLIKELY((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_hc07fd3a9__0) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                           >> 5U)) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                      & (1U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_h3d8ae240__0)
                                 : 8U))) & (5U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(
                                                                         (0U 
                                                                          != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)))) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)))) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state) 
                                                          << 2U)))))))) {
        VL_WRITEF("[%0t] %%Error: MSHR.sv:582: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr: Assertion failed: State transition from S_BRANCH to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 582, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: MSHR.sv:584: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 584, "");
        }
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_hc07fd3a9__0) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                           >> 5U)) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                      & (1U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_h3d8ae240__0)
                                 : 8U))) & (4U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(
                                                                         (0U 
                                                                          != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)))) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)))) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state) 
                                                          << 2U)))))))) {
        VL_WRITEF("[%0t] %%Error: MSHR.sv:588: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr: Assertion failed: State transition from S_BRANCH to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 588, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: MSHR.sv:590: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 590, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3316(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3316\n"); );
    // Body
    if (VL_UNLIKELY((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_hc07fd3a9__0) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                           >> 5U)) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                      & (1U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_h3d8ae240__0)
                                 : 8U))) & (6U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(
                                                                         (0U 
                                                                          != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)))) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)))) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state) 
                                                          << 2U)))))))) {
        VL_WRITEF("[%0t] %%Error: MSHR.sv:594: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr: Assertion failed: State transition from S_BRANCH to S_TIP_D should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 594, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: MSHR.sv:596: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 596, "");
        }
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_hc07fd3a9__0) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                           >> 5U)) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                      & (1U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_h3d8ae240__0)
                                 : 8U))) & (3U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(
                                                                         (0U 
                                                                          != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)))) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)))) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state) 
                                                          << 2U)))))))) {
        VL_WRITEF("[%0t] %%Error: MSHR.sv:600: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr: Assertion failed: State transition from S_BRANCH to S_TRUNK_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 600, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: MSHR.sv:602: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 602, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3317(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3317\n"); );
    // Body
    if (VL_UNLIKELY((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_hc07fd3a9__0) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                           >> 5U)) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                      & (1U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_h3d8ae240__0)
                                 : 8U))) & (2U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(
                                                                         (0U 
                                                                          != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)))) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)))) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state) 
                                                          << 2U)))))))) {
        VL_WRITEF("[%0t] %%Error: MSHR.sv:606: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr: Assertion failed: State transition from S_BRANCH to S_TRUNK_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 606, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: MSHR.sv:608: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 608, "");
        }
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_hc07fd3a9__0) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                           >> 5U)) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                      & (0U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_h3d8ae240__0)
                                 : 8U))) & (8U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(
                                                                         (0U 
                                                                          != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)))) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)))) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state) 
                                                          << 2U)))))))) {
        VL_WRITEF("[%0t] %%Error: MSHR.sv:612: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr: Assertion failed: State transition from S_BRANCH_C to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 612, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: MSHR.sv:614: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 614, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3318(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3318\n"); );
    // Body
    if (VL_UNLIKELY((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_hc07fd3a9__0) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                           >> 5U)) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                      & (0U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_h3d8ae240__0)
                                 : 8U))) & (1U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(
                                                                         (0U 
                                                                          != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)))) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)))) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state) 
                                                          << 2U)))))))) {
        VL_WRITEF("[%0t] %%Error: MSHR.sv:618: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr: Assertion failed: State transition from S_BRANCH_C to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 618, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: MSHR.sv:620: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 620, "");
        }
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_hc07fd3a9__0) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                           >> 5U)) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                      & (0U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_h3d8ae240__0)
                                 : 8U))) & (7U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(
                                                                         (0U 
                                                                          != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)))) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)))) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state) 
                                                          << 2U)))))))) {
        VL_WRITEF("[%0t] %%Error: MSHR.sv:624: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr: Assertion failed: State transition from S_BRANCH_C to S_TIP should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 624, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: MSHR.sv:626: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 626, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3319(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3319\n"); );
    // Body
    if (VL_UNLIKELY((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_hc07fd3a9__0) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                           >> 5U)) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                      & (0U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_h3d8ae240__0)
                                 : 8U))) & (5U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(
                                                                         (0U 
                                                                          != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)))) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)))) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state) 
                                                          << 2U)))))))) {
        VL_WRITEF("[%0t] %%Error: MSHR.sv:630: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr: Assertion failed: State transition from S_BRANCH_C to S_TIP_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 630, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: MSHR.sv:632: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 632, "");
        }
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_hc07fd3a9__0) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                           >> 5U)) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                      & (0U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_h3d8ae240__0)
                                 : 8U))) & (6U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(
                                                                         (0U 
                                                                          != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)))) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)))) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state) 
                                                          << 2U)))))))) {
        VL_WRITEF("[%0t] %%Error: MSHR.sv:636: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr: Assertion failed: State transition from S_BRANCH_C to S_TIP_D should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 636, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: MSHR.sv:638: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 638, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3320(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3320\n"); );
    // Body
    if (VL_UNLIKELY((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_hc07fd3a9__0) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                           >> 5U)) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                      & (0U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_h3d8ae240__0)
                                 : 8U))) & (4U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(
                                                                         (0U 
                                                                          != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)))) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)))) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state) 
                                                          << 2U)))))))) {
        VL_WRITEF("[%0t] %%Error: MSHR.sv:642: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr: Assertion failed: State transition from S_BRANCH_C to S_TIP_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 642, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: MSHR.sv:644: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 644, "");
        }
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_hc07fd3a9__0) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                           >> 5U)) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                      & (0U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_h3d8ae240__0)
                                 : 8U))) & (3U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(
                                                                         (0U 
                                                                          != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)))) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)))) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state) 
                                                          << 2U)))))))) {
        VL_WRITEF("[%0t] %%Error: MSHR.sv:648: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr: Assertion failed: State transition from S_BRANCH_C to S_TRUNK_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 648, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: MSHR.sv:650: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 650, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3321(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3321\n"); );
    // Body
    if (VL_UNLIKELY((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_hc07fd3a9__0) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                           >> 5U)) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                      & (0U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_h3d8ae240__0)
                                 : 8U))) & (2U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(
                                                                         (0U 
                                                                          != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)))) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)))) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state) 
                                                          << 2U)))))))) {
        VL_WRITEF("[%0t] %%Error: MSHR.sv:654: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr: Assertion failed: State transition from S_BRANCH_C to S_TRUNK_CD should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 654, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: MSHR.sv:656: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 656, "");
        }
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_hc07fd3a9__0) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                           >> 5U)) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                      & (7U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_h3d8ae240__0)
                                 : 8U))) & (8U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(
                                                                         (0U 
                                                                          != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)))) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)))) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state) 
                                                          << 2U)))))))) {
        VL_WRITEF("[%0t] %%Error: MSHR.sv:660: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr: Assertion failed: State transition from S_TIP to S_INVALID should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 660, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: MSHR.sv:662: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 662, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__3322(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__3322\n"); );
    // Body
    if (VL_UNLIKELY((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_hc07fd3a9__0) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                           >> 5U)) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                      & (7U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_h3d8ae240__0)
                                 : 8U))) & (1U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(
                                                                         (0U 
                                                                          != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)))) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)))) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state) 
                                                          << 2U)))))))) {
        VL_WRITEF("[%0t] %%Error: MSHR.sv:666: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr: Assertion failed: State transition from S_TIP to S_BRANCH should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 666, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: MSHR.sv:668: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 668, "");
        }
    }
    if (VL_UNLIKELY((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_hc07fd3a9__0) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__mshr_selectOH) 
                           >> 5U)) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                      & (7U == ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__meta_hit)
                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_h3d8ae240__0)
                                 : 8U))) & (0U == (0xfU 
                                                   & ((0x4200U 
                                                       | ((0x2000U 
                                                           & ((~ (IData)(
                                                                         (0U 
                                                                          != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)))) 
                                                              << 0xdU)) 
                                                          | ((0x1000U 
                                                              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                                 << 0xcU)) 
                                                             | ((0x100U 
                                                                 & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_dirty)) 
                                                                    << 8U)) 
                                                                | ((0x10U 
                                                                    & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_clients)))) 
                                                                       << 4U)) 
                                                                   | (8U 
                                                                      & ((~ (IData)(
                                                                                (0U 
                                                                                != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state)))) 
                                                                         << 3U))))))) 
                                                      >> 
                                                      (0xfU 
                                                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___io_schedule_bits_dir_bits_data_WIRE_state) 
                                                          << 2U)))))))) {
        VL_WRITEF("[%0t] %%Error: MSHR.sv:672: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr: Assertion failed: State transition from S_TIP to S_BRANCH_C should be impossible (false,true,true,false,true)\n    at MSHR.scala:359 assert(!(before === from.code && after === to.code), cf\"State transition from ${from} to ${to} should be impossible ${cfg}\")\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 672, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: MSHR.sv:674: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.bc_mshr\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/MSHR.sv", 674, "");
        }
    }
}
