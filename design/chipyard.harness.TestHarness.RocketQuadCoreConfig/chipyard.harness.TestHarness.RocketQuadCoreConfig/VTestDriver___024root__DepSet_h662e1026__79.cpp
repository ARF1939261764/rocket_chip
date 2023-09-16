// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestDriver__Syms.h"
#include "VTestDriver___024root.h"

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4056(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4056\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_a_valid) 
                       & (2U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (4U < (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                    >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:652: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 652, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:654: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 654, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_a_valid) 
                       & (2U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                  >> 0xcU)) != ((0x80U 
                                                 & (((((2U 
                                                        < 
                                                        (0xfU 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                            >> 6U))) 
                                                       | (IData)(
                                                                 (0x4080U 
                                                                  == 
                                                                  (0x40c0U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                      | (IData)(
                                                                (0x6040U 
                                                                 == 
                                                                 (0x60c0U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                     | (IData)(
                                                               (0x7000U 
                                                                == 
                                                                (0x7000U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                    << 7U)) 
                                                | ((0x40U 
                                                    & (((((2U 
                                                           < 
                                                           (0xfU 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                               >> 6U))) 
                                                          | (IData)(
                                                                    (0x4080U 
                                                                     == 
                                                                     (0x40c0U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                         | (IData)(
                                                                   (0x6040U 
                                                                    == 
                                                                    (0x60c0U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                        | (IData)(
                                                                  (0x6000U 
                                                                   == 
                                                                   (0x7000U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                       << 6U)) 
                                                   | ((0x20U 
                                                       & (((((2U 
                                                              < 
                                                              (0xfU 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                  >> 6U))) 
                                                             | (IData)(
                                                                       (0x4080U 
                                                                        == 
                                                                        (0x40c0U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                            | (IData)(
                                                                      (0x4040U 
                                                                       == 
                                                                       (0x60c0U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                           | (IData)(
                                                                     (0x5000U 
                                                                      == 
                                                                      (0x7000U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & (((((2U 
                                                                 < 
                                                                 (0xfU 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                     >> 6U))) 
                                                                | (IData)(
                                                                          (0x4080U 
                                                                           == 
                                                                           (0x40c0U 
                                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                               | (IData)(
                                                                         (0x4040U 
                                                                          == 
                                                                          (0x60c0U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                              | (IData)(
                                                                        (0x4000U 
                                                                         == 
                                                                         (0x7000U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & (((((2U 
                                                                    < 
                                                                    (0xfU 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                        >> 6U))) 
                                                                   | (IData)(
                                                                             (0x80U 
                                                                              == 
                                                                              (0x40c0U 
                                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                  | (IData)(
                                                                            (0x2040U 
                                                                             == 
                                                                             (0x60c0U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                 | (IData)(
                                                                           (0x3000U 
                                                                            == 
                                                                            (0x7000U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((((2U 
                                                                       < 
                                                                       (0xfU 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                           >> 6U))) 
                                                                      | (IData)(
                                                                                (0x80U 
                                                                                == 
                                                                                (0x40c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                     | (IData)(
                                                                               (0x2040U 
                                                                                == 
                                                                                (0x60c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                    | (IData)(
                                                                              (0x2000U 
                                                                               == 
                                                                               (0x7000U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((((2U 
                                                                          < 
                                                                          (0xfU 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                              >> 6U))) 
                                                                         | (IData)(
                                                                                (0x80U 
                                                                                == 
                                                                                (0x40c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                        | (IData)(
                                                                                (0x40U 
                                                                                == 
                                                                                (0x60c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                       | (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((((2U 
                                                                           < 
                                                                           (0xfU 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                               >> 6U))) 
                                                                          | (IData)(
                                                                                (0x80U 
                                                                                == 
                                                                                (0x40c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                         | (IData)(
                                                                                (0x40U 
                                                                                == 
                                                                                (0x60c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                        | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:658: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 658, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:660: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 660, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4057(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4057\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_a_valid) 
                       & (3U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((((0xdU > (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 6U))) 
                             & (((0U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xaU))) 
                                 | (1U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0xaU)))) 
                                | (2U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xaU))))) 
                            & (4U > (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 6U)))) 
                           & ((((((((0U == ((0x7fffcU 
                                             & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                 << 7U) 
                                                | (0x7cU 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0x19U)))) 
                                            | (3U & 
                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0x18U)))) 
                                    | (3U == (0xfffffU 
                                              & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                  << 8U) 
                                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0x18U))))) 
                                   | (0U == ((0x7fff0U 
                                              & (0x80U 
                                                 ^ 
                                                 ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                   << 7U) 
                                                  | (0x70U 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0x19U))))) 
                                             | (0xfU 
                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 0x18U))))) 
                                  | (0x200U == (0xffffU 
                                                & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                    << 4U) 
                                                   | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0x1cU))))) 
                                 | (0x2010U == (0xfffffU 
                                                & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                    << 8U) 
                                                   | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0x18U))))) 
                                | (3U == (0x3fU & (
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                   >> 6U)))) 
                               | (0x54000U == (0xfffffU 
                                               & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                   << 8U) 
                                                  | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x18U))))) 
                              | (8U == (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                >> 8U))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:664: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 664, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:666: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 666, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4058(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4058\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_a_valid) 
                       & (3U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((0U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                         >> 0xaU))) 
                           | ((1U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU))) 
                              | (2U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0xaU))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:670: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'A' channel Logical carries invalid source ID (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 670, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:672: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 672, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_a_valid) 
                       & (3U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (0xfU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 6U)))) 
                                         & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                             << 0x14U) 
                                            | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xcU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:676: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'A' channel Logical address not aligned to size (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 676, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:678: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 678, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4059(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4059\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_a_valid) 
                      & (0x23U == (0x27U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:682: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'A' channel Logical carries invalid opcode param (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 682, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:684: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 684, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_a_valid) 
                       & (3U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                  >> 0xcU)) != ((0x80U 
                                                 & (((((2U 
                                                        < 
                                                        (0xfU 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                            >> 6U))) 
                                                       | (IData)(
                                                                 (0x4080U 
                                                                  == 
                                                                  (0x40c0U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                      | (IData)(
                                                                (0x6040U 
                                                                 == 
                                                                 (0x60c0U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                     | (IData)(
                                                               (0x7000U 
                                                                == 
                                                                (0x7000U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                    << 7U)) 
                                                | ((0x40U 
                                                    & (((((2U 
                                                           < 
                                                           (0xfU 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                               >> 6U))) 
                                                          | (IData)(
                                                                    (0x4080U 
                                                                     == 
                                                                     (0x40c0U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                         | (IData)(
                                                                   (0x6040U 
                                                                    == 
                                                                    (0x60c0U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                        | (IData)(
                                                                  (0x6000U 
                                                                   == 
                                                                   (0x7000U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                       << 6U)) 
                                                   | ((0x20U 
                                                       & (((((2U 
                                                              < 
                                                              (0xfU 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                  >> 6U))) 
                                                             | (IData)(
                                                                       (0x4080U 
                                                                        == 
                                                                        (0x40c0U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                            | (IData)(
                                                                      (0x4040U 
                                                                       == 
                                                                       (0x60c0U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                           | (IData)(
                                                                     (0x5000U 
                                                                      == 
                                                                      (0x7000U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & (((((2U 
                                                                 < 
                                                                 (0xfU 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                     >> 6U))) 
                                                                | (IData)(
                                                                          (0x4080U 
                                                                           == 
                                                                           (0x40c0U 
                                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                               | (IData)(
                                                                         (0x4040U 
                                                                          == 
                                                                          (0x60c0U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                              | (IData)(
                                                                        (0x4000U 
                                                                         == 
                                                                         (0x7000U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & (((((2U 
                                                                    < 
                                                                    (0xfU 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                        >> 6U))) 
                                                                   | (IData)(
                                                                             (0x80U 
                                                                              == 
                                                                              (0x40c0U 
                                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                  | (IData)(
                                                                            (0x2040U 
                                                                             == 
                                                                             (0x60c0U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                 | (IData)(
                                                                           (0x3000U 
                                                                            == 
                                                                            (0x7000U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((((2U 
                                                                       < 
                                                                       (0xfU 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                           >> 6U))) 
                                                                      | (IData)(
                                                                                (0x80U 
                                                                                == 
                                                                                (0x40c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                     | (IData)(
                                                                               (0x2040U 
                                                                                == 
                                                                                (0x60c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                    | (IData)(
                                                                              (0x2000U 
                                                                               == 
                                                                               (0x7000U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((((2U 
                                                                          < 
                                                                          (0xfU 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                              >> 6U))) 
                                                                         | (IData)(
                                                                                (0x80U 
                                                                                == 
                                                                                (0x40c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                        | (IData)(
                                                                                (0x40U 
                                                                                == 
                                                                                (0x60c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                       | (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((((2U 
                                                                           < 
                                                                           (0xfU 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                               >> 6U))) 
                                                                          | (IData)(
                                                                                (0x80U 
                                                                                == 
                                                                                (0x40c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                         | (IData)(
                                                                                (0x40U 
                                                                                == 
                                                                                (0x60c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                        | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:688: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'A' channel Logical contains invalid mask (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 688, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:690: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 690, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4060(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4060\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_a_valid) 
                       & (5U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ (((0xdU > (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 6U))) 
                            & (((0U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0xaU))) 
                                | (1U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 0xaU)))) 
                               | (2U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xaU))))) 
                           & (((0xdU > (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                >> 6U))) 
                               & (3U == (0xfffffU & 
                                         ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                           << 8U) | 
                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0x18U))))) 
                              | (IData)(((0x800U == 
                                          (0xf00U & 
                                           vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U])) 
                                         & (7U > (0xfU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 6U))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:694: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 694, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:696: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 696, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4061(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4061\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_a_valid) 
                       & (5U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((0U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                         >> 0xaU))) 
                           | ((1U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU))) 
                              | (2U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0xaU))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:700: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'A' channel Hint carries invalid source ID (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 700, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:702: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 702, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_a_valid) 
                       & (5U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (0xfU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 6U)))) 
                                         & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                             << 0x14U) 
                                            | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xcU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:706: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'A' channel Hint address not aligned to size (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 706, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:708: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 708, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4062(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4062\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_a_valid) 
                       & (5U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                     >> 4U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:712: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'A' channel Hint carries invalid opcode param (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 712, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:714: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 714, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_a_valid) 
                       & (5U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                  >> 0xcU)) != ((0x80U 
                                                 & (((((2U 
                                                        < 
                                                        (0xfU 
                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                            >> 6U))) 
                                                       | (IData)(
                                                                 (0x4080U 
                                                                  == 
                                                                  (0x40c0U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                      | (IData)(
                                                                (0x6040U 
                                                                 == 
                                                                 (0x60c0U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                     | (IData)(
                                                               (0x7000U 
                                                                == 
                                                                (0x7000U 
                                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                    << 7U)) 
                                                | ((0x40U 
                                                    & (((((2U 
                                                           < 
                                                           (0xfU 
                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                               >> 6U))) 
                                                          | (IData)(
                                                                    (0x4080U 
                                                                     == 
                                                                     (0x40c0U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                         | (IData)(
                                                                   (0x6040U 
                                                                    == 
                                                                    (0x60c0U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                        | (IData)(
                                                                  (0x6000U 
                                                                   == 
                                                                   (0x7000U 
                                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                       << 6U)) 
                                                   | ((0x20U 
                                                       & (((((2U 
                                                              < 
                                                              (0xfU 
                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                  >> 6U))) 
                                                             | (IData)(
                                                                       (0x4080U 
                                                                        == 
                                                                        (0x40c0U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                            | (IData)(
                                                                      (0x4040U 
                                                                       == 
                                                                       (0x60c0U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                           | (IData)(
                                                                     (0x5000U 
                                                                      == 
                                                                      (0x7000U 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                          << 5U)) 
                                                      | ((0x10U 
                                                          & (((((2U 
                                                                 < 
                                                                 (0xfU 
                                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                     >> 6U))) 
                                                                | (IData)(
                                                                          (0x4080U 
                                                                           == 
                                                                           (0x40c0U 
                                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                               | (IData)(
                                                                         (0x4040U 
                                                                          == 
                                                                          (0x60c0U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                              | (IData)(
                                                                        (0x4000U 
                                                                         == 
                                                                         (0x7000U 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                             << 4U)) 
                                                         | ((8U 
                                                             & (((((2U 
                                                                    < 
                                                                    (0xfU 
                                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                        >> 6U))) 
                                                                   | (IData)(
                                                                             (0x80U 
                                                                              == 
                                                                              (0x40c0U 
                                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                  | (IData)(
                                                                            (0x2040U 
                                                                             == 
                                                                             (0x60c0U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                 | (IData)(
                                                                           (0x3000U 
                                                                            == 
                                                                            (0x7000U 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                << 3U)) 
                                                            | ((4U 
                                                                & (((((2U 
                                                                       < 
                                                                       (0xfU 
                                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                           >> 6U))) 
                                                                      | (IData)(
                                                                                (0x80U 
                                                                                == 
                                                                                (0x40c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                     | (IData)(
                                                                               (0x2040U 
                                                                                == 
                                                                                (0x60c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                    | (IData)(
                                                                              (0x2000U 
                                                                               == 
                                                                               (0x7000U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                   << 2U)) 
                                                               | ((2U 
                                                                   & (((((2U 
                                                                          < 
                                                                          (0xfU 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                              >> 6U))) 
                                                                         | (IData)(
                                                                                (0x80U 
                                                                                == 
                                                                                (0x40c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                        | (IData)(
                                                                                (0x40U 
                                                                                == 
                                                                                (0x60c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                       | (IData)(
                                                                                (0x1000U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                      << 1U)) 
                                                                  | (1U 
                                                                     & ((((2U 
                                                                           < 
                                                                           (0xfU 
                                                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                                               >> 6U))) 
                                                                          | (IData)(
                                                                                (0x80U 
                                                                                == 
                                                                                (0x40c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                         | (IData)(
                                                                                (0x40U 
                                                                                == 
                                                                                (0x60c0U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))) 
                                                                        | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (0x7000U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:718: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'A' channel Hint contains invalid mask (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 718, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:720: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 720, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4063(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4063\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_a_valid) 
                       & (5U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                        >> 0x14U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:724: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'A' channel Hint is corrupt (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 724, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:726: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 726, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_valid) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_opcode))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:730: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'D' channel has invalid opcode (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 730, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:732: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 732, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4064(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4064\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_source)) 
                           | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_source)) 
                              | (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_source)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:736: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 736, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:738: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 738, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (3U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:742: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 742, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:744: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 744, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4065(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4065\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:748: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 748, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:750: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 750, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_9_0) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_corrupt)) 
                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_9_1) 
                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_corrupt)) 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_9_2) 
                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_port_named_mmio_port_axi4_auto_tl_in_d_bits_corrupt))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:754: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'D' channel ReleaseAck is corrupt (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 754, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:756: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 756, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4066(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4066\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_denied)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:760: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'D' channel ReleaseAck is denied (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 760, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:762: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 762, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_source)) 
                           | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_source)) 
                              | (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_source)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:766: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'D' channel Grant carries invalid source ID (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 766, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:768: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 768, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4067(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4067\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (3U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:772: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'D' channel Grant smaller than a beat (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 772, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:774: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 774, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:778: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'D' channel Grant carries invalid cap param (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 778, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:780: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 780, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4068(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4068\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:784: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'D' channel Grant carries toN param (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 784, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:786: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 786, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_9_0) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_corrupt)) 
                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_9_1) 
                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_corrupt)) 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_9_2) 
                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_port_named_mmio_port_axi4_auto_tl_in_d_bits_corrupt))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:790: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'D' channel Grant is corrupt (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 790, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:792: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 792, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4069(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4069\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_source)) 
                           | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_source)) 
                              | (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_source)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:796: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'D' channel GrantData carries invalid source ID (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 796, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:798: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 798, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (3U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:802: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'D' channel GrantData smaller than a beat (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 802, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:804: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 804, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4070(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4070\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:808: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'D' channel GrantData carries invalid cap param (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 808, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:810: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 810, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:814: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'D' channel GrantData carries toN param (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 814, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:816: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 816, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4071(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4071\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_denied)) 
                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_9_0) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_corrupt)) 
                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_9_1) 
                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_corrupt)) 
                                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_9_2) 
                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_port_named_mmio_port_axi4_auto_tl_in_d_bits_corrupt))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:820: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 820, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:822: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 822, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_valid) 
                       & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_source)) 
                           | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_source)) 
                              | (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_source)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:826: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 826, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:828: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 828, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4072(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4072\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_valid) 
                       & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:832: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'D' channel AccessAck carries invalid param (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 832, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:834: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 834, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_valid) 
                       & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_9_0) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_corrupt)) 
                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_9_1) 
                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_corrupt)) 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_9_2) 
                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_port_named_mmio_port_axi4_auto_tl_in_d_bits_corrupt))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:838: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'D' channel AccessAck is corrupt (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 838, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:840: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 840, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4073(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4073\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_valid) 
                       & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_source)) 
                           | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_source)) 
                              | (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_source)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:844: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 844, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:846: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 846, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_valid) 
                       & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:850: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'D' channel AccessAckData carries invalid param (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 850, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:852: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 852, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4074(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4074\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_valid) 
                       & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_denied)) 
                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_9_0) 
                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_corrupt)) 
                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_9_1) 
                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_corrupt)) 
                                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_9_2) 
                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_port_named_mmio_port_axi4_auto_tl_in_d_bits_corrupt))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:856: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 856, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:858: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 858, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_valid) 
                       & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_source)) 
                           | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_source)) 
                              | (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_source)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:862: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'D' channel HintAck carries invalid source ID (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 862, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:864: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 864, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4075(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4075\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_valid) 
                       & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:868: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'D' channel HintAck carries invalid param (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 868, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:870: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 870, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_valid) 
                       & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_9_0) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_corrupt)) 
                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_9_1) 
                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_corrupt)) 
                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_9_2) 
                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_port_named_mmio_port_axi4_auto_tl_in_d_bits_corrupt))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:874: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'D' channel HintAck is corrupt (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 874, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:876: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 876, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4076(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4076\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_in_b_valid) 
                       & (0x10U == (0x1cU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_in_b_bits_source)))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_in_b_bits_source)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:880: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'B' channel carries Probe type which is unexpected using diplomatic parameters (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 880, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:882: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 882, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_in_b_valid) 
                       & (0x10U == (0x1cU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_in_b_bits_source)))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((((2U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_in_b_bits_source))) 
                          << 1U) | (1U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_in_b_bits_source)))) 
                        != (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_in_b_bits_source)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:892: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'B' channel Probe carries source that is not first source (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 892, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:894: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 894, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4077(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4077\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_in_b_valid) 
                       & (0x10U == (0x1cU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_in_b_bits_source)))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (3U == (3U & ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceB__DOT__remain))
                                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceB__DOT__param_r)
                                      : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceB__io_req_bits_param))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:904: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'B' channel Probe carries invalid cap param (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 904, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:906: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 906, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4078(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4078\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_c_valid) 
                       & (4U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((3U == (0xfffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                << 8U) 
                                               | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0x18U)))) 
                           | ((0x2010U == (0xfffffU 
                                           & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                               << 8U) 
                                              | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0x18U)))) 
                              | ((4U == (0xfffffU & 
                                         ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                           << 8U) | 
                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0x18U)))) 
                                 | ((0x54000U == (0xfffffU 
                                                  & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                      << 8U) 
                                                     | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0x18U)))) 
                                    | ((3U == (0x3fU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                  >> 6U))) 
                                       | ((0x200U == 
                                           (0xffffU 
                                            & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                << 4U) 
                                               | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0x1cU)))) 
                                          | ((0U == 
                                              (0xfffffU 
                                               & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                   << 8U) 
                                                  | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x18U)))) 
                                             | ((1U 
                                                 == 
                                                 (0xffffU 
                                                  & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                      << 4U) 
                                                     | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0x1cU)))) 
                                                | ((0x100U 
                                                    == 
                                                    (0xfffffU 
                                                     & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                         << 8U) 
                                                        | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                           >> 0x18U)))) 
                                                   | ((0x110U 
                                                       == 
                                                       (0xfffffU 
                                                        & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                            << 8U) 
                                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                              >> 0x18U)))) 
                                                      | ((8U 
                                                          == 
                                                          (0xfU 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                              >> 8U))) 
                                                         | (3U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                                >> 9U)))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:916: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'C' channel ProbeAck carries unmanaged address (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 916, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:918: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 918, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4079(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4079\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_c_valid) 
                       & (4U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((0U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                         >> 0xaU))) 
                           | ((1U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU))) 
                              | (2U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0xaU))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:922: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'C' channel ProbeAck carries invalid source ID (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 922, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:924: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 924, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_c_valid) 
                       & (4U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (3U > (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                      >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:928: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'C' channel ProbeAck smaller than a beat (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 928, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:930: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 930, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4080(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4080\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_c_valid) 
                       & (4U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (0xfU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 6U)))) 
                                         & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                             << 0x14U) 
                                            | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xcU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:934: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'C' channel ProbeAck address not aligned to size (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 934, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:936: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 936, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_c_valid) 
                      & (0x34U == (0x37U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:940: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'C' channel ProbeAck carries invalid report param (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 940, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:942: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 942, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4081(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4081\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_c_valid) 
                       & (4U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[3U] 
                        >> 0xcU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:946: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'C' channel ProbeAck is corrupt (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 946, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:948: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 948, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_c_valid) 
                       & (5U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((3U == (0xfffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                << 8U) 
                                               | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0x18U)))) 
                           | ((0x2010U == (0xfffffU 
                                           & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                               << 8U) 
                                              | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0x18U)))) 
                              | ((4U == (0xfffffU & 
                                         ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                           << 8U) | 
                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0x18U)))) 
                                 | ((0x54000U == (0xfffffU 
                                                  & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                      << 8U) 
                                                     | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0x18U)))) 
                                    | ((3U == (0x3fU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                  >> 6U))) 
                                       | ((0x200U == 
                                           (0xffffU 
                                            & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                << 4U) 
                                               | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0x1cU)))) 
                                          | ((0U == 
                                              (0xfffffU 
                                               & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                   << 8U) 
                                                  | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x18U)))) 
                                             | ((1U 
                                                 == 
                                                 (0xffffU 
                                                  & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                      << 4U) 
                                                     | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0x1cU)))) 
                                                | ((0x100U 
                                                    == 
                                                    (0xfffffU 
                                                     & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                         << 8U) 
                                                        | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                           >> 0x18U)))) 
                                                   | ((0x110U 
                                                       == 
                                                       (0xfffffU 
                                                        & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                            << 8U) 
                                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                              >> 0x18U)))) 
                                                      | ((8U 
                                                          == 
                                                          (0xfU 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                              >> 8U))) 
                                                         | (3U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                                >> 9U)))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:952: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'C' channel ProbeAckData carries unmanaged address (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 952, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:954: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 954, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4082(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4082\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_c_valid) 
                       & (5U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((0U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                         >> 0xaU))) 
                           | ((1U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU))) 
                              | (2U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0xaU))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:958: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'C' channel ProbeAckData carries invalid source ID (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 958, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:960: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 960, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_c_valid) 
                       & (5U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (3U > (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                      >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:964: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'C' channel ProbeAckData smaller than a beat (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 964, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:966: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 966, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4083(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4083\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_c_valid) 
                       & (5U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (0xfU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 6U)))) 
                                         & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                             << 0x14U) 
                                            | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xcU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:970: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'C' channel ProbeAckData address not aligned to size (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 970, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:972: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 972, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_c_valid) 
                      & (0x35U == (0x37U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:976: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'C' channel ProbeAckData carries invalid report param (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 976, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:978: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 978, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4084(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4084\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_c_valid) 
                       & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ (IData)((((0x180U == (0x3c0U 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U])) 
                                    & (0x800U == (0xf00U 
                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U]))) 
                                   & ((0xdU > (0xfU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 6U))) 
                                      & (((0U == (3U 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0xaU))) 
                                          | (1U == 
                                             (3U & 
                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xaU)))) 
                                         | (2U == (3U 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0xaU))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:982: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'C' channel carries Release type unsupported by manager (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 982, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:984: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 984, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_c_valid) 
                       & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ (((IData)((0x180U == (0xfc0U 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U]))) 
                            & (0xdU > (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                               >> 6U)))) 
                           & ((((((((((0U == ((0x7fffcU 
                                               & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                   << 7U) 
                                                  | (0x7cU 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0x19U)))) 
                                              | (3U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0x18U)))) 
                                      | (3U == (0xfffffU 
                                                & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                    << 8U) 
                                                   | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0x18U))))) 
                                     | (1U == (0xffffU 
                                               & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                   << 4U) 
                                                  | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x1cU))))) 
                                    | (0U == ((0x7fff0U 
                                               & (0x80U 
                                                  ^ 
                                                  ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                    << 7U) 
                                                   | (0x70U 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 0x19U))))) 
                                              | (0xfU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0x18U))))) 
                                   | (0x200U == (0xffffU 
                                                 & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                     << 4U) 
                                                    | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 0x1cU))))) 
                                  | (0x2010U == (0xfffffU 
                                                 & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                     << 8U) 
                                                    | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 0x18U))))) 
                                 | (3U == (0x3fU & 
                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                            >> 6U)))) 
                                | (0x54000U == (0xfffffU 
                                                & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                    << 8U) 
                                                   | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0x18U))))) 
                               | (3U == (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                               >> 9U)))) 
                              | (8U == (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                >> 8U))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:988: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 988, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:990: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 990, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4085(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4085\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_c_valid) 
                       & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((0U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                         >> 0xaU))) 
                           | ((1U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU))) 
                              | (2U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0xaU))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:994: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'C' channel Release carries invalid source ID (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 994, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:996: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 996, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_c_valid) 
                       & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (3U > (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                      >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1000: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'C' channel Release smaller than a beat (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1000, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1002: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1002, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4086(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4086\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_c_valid) 
                       & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (0xfU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 6U)))) 
                                         & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                             << 0x14U) 
                                            | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xcU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1006: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'C' channel Release address not aligned to size (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1006, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1008: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1008, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_c_valid) 
                      & (0x36U == (0x37U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1012: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'C' channel Release carries invalid report param (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1012, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1014: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1014, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4087(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4087\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_c_valid) 
                       & (6U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[3U] 
                        >> 0xcU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1018: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'C' channel Release is corrupt (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1018, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1020: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1020, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_c_valid) 
                       & (7U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ (IData)((((0x180U == (0x3c0U 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U])) 
                                    & (0x800U == (0xf00U 
                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U]))) 
                                   & ((0xdU > (0xfU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 6U))) 
                                      & (((0U == (3U 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0xaU))) 
                                          | (1U == 
                                             (3U & 
                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xaU)))) 
                                         | (2U == (3U 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0xaU))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1024: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'C' channel carries ReleaseData type unsupported by manager (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1024, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1026: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1026, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4088(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4088\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_c_valid) 
                       & (7U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ (((IData)((0x180U == (0xfc0U 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U]))) 
                            & (0xdU > (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                               >> 6U)))) 
                           & ((((((((((0U == ((0x7fffcU 
                                               & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                   << 7U) 
                                                  | (0x7cU 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0x19U)))) 
                                              | (3U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0x18U)))) 
                                      | (3U == (0xfffffU 
                                                & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                    << 8U) 
                                                   | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0x18U))))) 
                                     | (1U == (0xffffU 
                                               & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                   << 4U) 
                                                  | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x1cU))))) 
                                    | (0U == ((0x7fff0U 
                                               & (0x80U 
                                                  ^ 
                                                  ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                    << 7U) 
                                                   | (0x70U 
                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                         >> 0x19U))))) 
                                              | (0xfU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 0x18U))))) 
                                   | (0x200U == (0xffffU 
                                                 & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                     << 4U) 
                                                    | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 0x1cU))))) 
                                  | (0x2010U == (0xfffffU 
                                                 & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                     << 8U) 
                                                    | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                       >> 0x18U))))) 
                                 | (3U == (0x3fU & 
                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                            >> 6U)))) 
                                | (0x54000U == (0xfffffU 
                                                & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                    << 8U) 
                                                   | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                      >> 0x18U))))) 
                               | (3U == (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                               >> 9U)))) 
                              | (8U == (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                >> 8U))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1030: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'C' channel carries Release from a client which does not support Probe (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1030, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1032: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1032, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4089(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4089\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_c_valid) 
                       & (7U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((0U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                         >> 0xaU))) 
                           | ((1U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU))) 
                              | (2U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0xaU))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1036: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'C' channel ReleaseData carries invalid source ID (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1036, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1038: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1038, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_c_valid) 
                       & (7U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (3U > (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                      >> 6U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1042: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'C' channel ReleaseData smaller than a beat (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1042, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1044: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1044, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4090(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4090\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_c_valid) 
                       & (7U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (0xfU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 6U)))) 
                                         & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                             << 0x14U) 
                                            | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xcU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1048: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'C' channel ReleaseData address not aligned to size (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1048, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1050: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1050, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_c_valid) 
                      & (0x37U == (0x37U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U]))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1054: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'C' channel ReleaseData carries invalid report param (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1054, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1056: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1056, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4091(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4091\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_c_valid) 
                       & (0U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((3U == (0xfffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                << 8U) 
                                               | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0x18U)))) 
                           | ((0x2010U == (0xfffffU 
                                           & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                               << 8U) 
                                              | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0x18U)))) 
                              | ((4U == (0xfffffU & 
                                         ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                           << 8U) | 
                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0x18U)))) 
                                 | ((0x54000U == (0xfffffU 
                                                  & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                      << 8U) 
                                                     | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0x18U)))) 
                                    | ((3U == (0x3fU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                  >> 6U))) 
                                       | ((0x200U == 
                                           (0xffffU 
                                            & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                << 4U) 
                                               | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0x1cU)))) 
                                          | ((0U == 
                                              (0xfffffU 
                                               & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                   << 8U) 
                                                  | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x18U)))) 
                                             | ((1U 
                                                 == 
                                                 (0xffffU 
                                                  & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                      << 4U) 
                                                     | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0x1cU)))) 
                                                | ((0x100U 
                                                    == 
                                                    (0xfffffU 
                                                     & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                         << 8U) 
                                                        | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                           >> 0x18U)))) 
                                                   | ((0x110U 
                                                       == 
                                                       (0xfffffU 
                                                        & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                            << 8U) 
                                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                              >> 0x18U)))) 
                                                      | ((8U 
                                                          == 
                                                          (0xfU 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                              >> 8U))) 
                                                         | (3U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                                >> 9U)))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1060: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'C' channel AccessAck carries unmanaged address (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1060, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1062: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1062, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4092(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4092\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_c_valid) 
                       & (0U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((0U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                         >> 0xaU))) 
                           | ((1U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU))) 
                              | (2U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0xaU))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1066: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'C' channel AccessAck carries invalid source ID (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1066, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1068: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1068, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_c_valid) 
                       & (0U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (0xfU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 6U)))) 
                                         & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                             << 0x14U) 
                                            | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xcU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1072: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'C' channel AccessAck address not aligned to size (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1072, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1074: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1074, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4093(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4093\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_c_valid) 
                       & (0U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1078: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'C' channel AccessAck carries invalid param (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1078, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1080: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1080, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_c_valid) 
                       & (0U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[3U] 
                        >> 0xcU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1084: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'C' channel AccessAck is corrupt (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1084, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1086: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1086, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4094(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4094\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_c_valid) 
                       & (1U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((3U == (0xfffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                << 8U) 
                                               | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0x18U)))) 
                           | ((0x2010U == (0xfffffU 
                                           & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                               << 8U) 
                                              | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0x18U)))) 
                              | ((4U == (0xfffffU & 
                                         ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                           << 8U) | 
                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0x18U)))) 
                                 | ((0x54000U == (0xfffffU 
                                                  & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                      << 8U) 
                                                     | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0x18U)))) 
                                    | ((3U == (0x3fU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                  >> 6U))) 
                                       | ((0x200U == 
                                           (0xffffU 
                                            & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                << 4U) 
                                               | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0x1cU)))) 
                                          | ((0U == 
                                              (0xfffffU 
                                               & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                   << 8U) 
                                                  | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x18U)))) 
                                             | ((1U 
                                                 == 
                                                 (0xffffU 
                                                  & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                      << 4U) 
                                                     | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0x1cU)))) 
                                                | ((0x100U 
                                                    == 
                                                    (0xfffffU 
                                                     & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                         << 8U) 
                                                        | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                           >> 0x18U)))) 
                                                   | ((0x110U 
                                                       == 
                                                       (0xfffffU 
                                                        & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                            << 8U) 
                                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                              >> 0x18U)))) 
                                                      | ((8U 
                                                          == 
                                                          (0xfU 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                              >> 8U))) 
                                                         | (3U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                                >> 9U)))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1090: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'C' channel AccessAckData carries unmanaged address (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1090, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1092: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1092, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4095(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4095\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_c_valid) 
                       & (1U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((0U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                         >> 0xaU))) 
                           | ((1U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU))) 
                              | (2U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0xaU))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1096: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'C' channel AccessAckData carries invalid source ID (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1096, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1098: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1098, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_c_valid) 
                       & (1U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (0xfU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 6U)))) 
                                         & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                             << 0x14U) 
                                            | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xcU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1102: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'C' channel AccessAckData address not aligned to size (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1102, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1104: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1104, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4096(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4096\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_c_valid) 
                       & (1U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1108: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'C' channel AccessAckData carries invalid param (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1108, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1110: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1110, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_c_valid) 
                       & (2U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((3U == (0xfffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                << 8U) 
                                               | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0x18U)))) 
                           | ((0x2010U == (0xfffffU 
                                           & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                               << 8U) 
                                              | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 0x18U)))) 
                              | ((4U == (0xfffffU & 
                                         ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                           << 8U) | 
                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                           >> 0x18U)))) 
                                 | ((0x54000U == (0xfffffU 
                                                  & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                      << 8U) 
                                                     | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0x18U)))) 
                                    | ((3U == (0x3fU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                  >> 6U))) 
                                       | ((0x200U == 
                                           (0xffffU 
                                            & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                << 4U) 
                                               | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 0x1cU)))) 
                                          | ((0U == 
                                              (0xfffffU 
                                               & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                   << 8U) 
                                                  | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0x18U)))) 
                                             | ((1U 
                                                 == 
                                                 (0xffffU 
                                                  & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                      << 4U) 
                                                     | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0x1cU)))) 
                                                | ((0x100U 
                                                    == 
                                                    (0xfffffU 
                                                     & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                         << 8U) 
                                                        | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                           >> 0x18U)))) 
                                                   | ((0x110U 
                                                       == 
                                                       (0xfffffU 
                                                        & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                            << 8U) 
                                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                              >> 0x18U)))) 
                                                      | ((8U 
                                                          == 
                                                          (0xfU 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                              >> 8U))) 
                                                         | (3U 
                                                            == 
                                                            (7U 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                                                                >> 9U)))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1114: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'C' channel HintAck carries unmanaged address (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1114, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1116: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1116, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4097(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4097\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_c_valid) 
                       & (2U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((0U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                         >> 0xaU))) 
                           | ((1U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                            >> 0xaU))) 
                              | (2U == (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                              >> 0xaU))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1120: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'C' channel HintAck carries invalid source ID (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1120, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1122: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1122, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_c_valid) 
                       & (2U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (0xfU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                                    >> 6U)))) 
                                         & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                             << 0x14U) 
                                            | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                               >> 0xcU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1126: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'C' channel HintAck address not aligned to size (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1126, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1128: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1128, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4098(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4098\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_c_valid) 
                       & (2U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                     >> 3U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1132: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'C' channel HintAck carries invalid param (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1132, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1134: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1134, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_c_valid) 
                       & (2U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U]))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[3U] 
                        >> 0xcU)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1138: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'C' channel HintAck is corrupt (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1138, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1140: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1140, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4099(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4099\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_a_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_4__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_4__DOT__opcode))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1144: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'A' channel opcode changed within multibeat operation (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1144, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1146: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1146, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_a_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_4__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                               >> 3U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_4__DOT__param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1150: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'A' channel param changed within multibeat operation (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1150, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1152: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1152, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4100(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4100\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_a_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_4__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                 >> 6U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_4__DOT__size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1156: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'A' channel size changed within multibeat operation (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1156, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1158: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1158, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_a_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_4__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                               >> 0xaU)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_4__DOT__source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1162: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'A' channel source changed within multibeat operation (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1162, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1164: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1164, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4101(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4101\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_a_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_4__DOT__a_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                          << 0x14U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                       >> 0xcU)) != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_4__DOT__address)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1168: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'A' channel address changed with multibeat operation (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1168, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1170: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1170, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_4__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_opcode) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_4__DOT__opcode_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1174: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'D' channel opcode changed within multibeat operation (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1174, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1176: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1176, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4102(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4102\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_4__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_param) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_4__DOT__param_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1180: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'D' channel param changed within multibeat operation (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1180, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1182: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1182, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_4__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_size) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_4__DOT__size_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1186: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'D' channel size changed within multibeat operation (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1186, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1188: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1188, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4103(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4103\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_4__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_source) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_4__DOT__source_1))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1192: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'D' channel source changed within multibeat operation (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1192, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1194: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1194, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_4__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_sink) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_4__DOT__sink))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1198: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'D' channel sink changed with multibeat operation (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1198, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1200: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1200, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4104(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4104\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_4__DOT__d_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_denied) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_4__DOT__denied))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1204: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'D' channel denied changed with multibeat operation (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1204, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1206: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1206, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_c_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_4__DOT__c_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U]) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_4__DOT__opcode_3))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1210: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'C' channel opcode changed within multibeat operation (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1210, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1212: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1212, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4105(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4105\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_c_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_4__DOT__c_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                               >> 3U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_4__DOT__param_3))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1216: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'C' channel param changed within multibeat operation (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1216, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1218: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1218, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_c_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_4__DOT__c_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                 >> 6U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_4__DOT__size_3))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1222: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'C' channel size changed within multibeat operation (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1222, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1224: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1224, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4106(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4106\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_c_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_4__DOT__c_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                               >> 0xaU)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_4__DOT__source_3))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1228: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'C' channel source changed within multibeat operation (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1228, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1230: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1230, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_c_valid) 
                       & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_4__DOT__c_first_counter))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[1U] 
                          << 0x14U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT___ram_ext_R0_data[0U] 
                                       >> 0xcU)) != vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_4__DOT__address_2)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1234: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'C' channel address changed with multibeat operation (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1234, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1236: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1236, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4107(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4107\n"); );
    // Body
    if (VL_UNLIKELY((7U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_4__DOT___T_2387) 
                            & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_4__DOT__inflight) 
                              >> (3U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                        >> 0xaU))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1240: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'A' channel re-used a source ID (connected at SystemBus.scala:41:96)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1240, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1242: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1242, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_4__DOT___T_2406) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_4__DOT__inflight) 
                                  >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_source))) 
                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_4__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1246: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1246, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1248: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1248, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4108(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4108\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_4__DOT___T_2406) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_4__DOT__same_cycle_resp)) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & 
                                               vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))))
                                 : 0U)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1252: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'D' channel contains improper opcode response (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1252, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1254: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1254, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4109(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4109\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_4__DOT___T_2406) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_4__DOT__same_cycle_resp)) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                 >> 6U)) != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1258: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'D' channel contains improper response size (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1258, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1260: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1260, "");
        }
    }
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_4__DOT__same_cycle_resp)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_4__DOT___T_2406)) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & 
                                               (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_4__DOT__inflight_opcodes) 
                                                 >> 
                                                 ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_source) 
                                                  << 2U)) 
                                                >> 1U)))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_4__DOT__inflight_opcodes) 
                                                      >> 
                                                      ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_source) 
                                                       << 2U)) 
                                                     >> 1U))))))
                                 : 0U)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_4__DOT__inflight_opcodes) 
                                                         >> 
                                                         ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_source) 
                                                          << 2U)) 
                                                        >> 1U)))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_4__DOT__inflight_opcodes) 
                                                               >> 
                                                               ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_source) 
                                                                << 2U)) 
                                                              >> 1U))))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1264: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4: Assertion failed: 'D' channel contains improper opcode response (connected at SystemBus.scala:41:96)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1264, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_6.sv:1266: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_sbus.fixer.monitor_4\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_6.sv", 1266, "");
        }
    }
}
