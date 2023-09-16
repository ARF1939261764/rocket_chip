// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestDriver__Syms.h"
#include "VTestDriver___024root.h"

extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_h00a443f1_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1158(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1158\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_h519377f8__0;
    // Body
    VL_SHIFTR_WWI(528,528,10, __Vtemp_h519377f8__0, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source));
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_617) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((VTestDriver__ConstPool__CONST_h00a443f1_0[0U] 
                            & __Vtemp_h519377f8__0[0U]) 
                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_69.sv:554: Assertion failed in %NTestDriver.testHarness.chiptop0.system.prci_ctrl_domain.xbar.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at HasChipyardPRCI.scala:41:5)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_69.sv", 554, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_69.sv:556: Assertion failed in %NTestDriver.testHarness.chiptop0.system.prci_ctrl_domain.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_69.sv", 556, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_617) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__same_cycle_resp)) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode)))))
                                 : 0U)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode)))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_69.sv:560: Assertion failed in %NTestDriver.testHarness.chiptop0.system.prci_ctrl_domain.xbar.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at HasChipyardPRCI.scala:41:5)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_69.sv", 560, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_69.sv:562: Assertion failed in %NTestDriver.testHarness.chiptop0.system.prci_ctrl_domain.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_69.sv", 562, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1159(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1159\n"); );
    // Init
    VlWide<66>/*2111:0*/ __Vtemp_hf6e7e4ba__0;
    VlWide<66>/*2111:0*/ __Vtemp_hf6e7e4ba__1;
    VlWide<66>/*2111:0*/ __Vtemp_hf6e7e4ba__2;
    VlWide<66>/*2111:0*/ __Vtemp_hf6e7e4ba__3;
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_617) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__same_cycle_resp)) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag)) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_69.sv:566: Assertion failed in %NTestDriver.testHarness.chiptop0.system.prci_ctrl_domain.xbar.monitor: Assertion failed: 'D' channel contains improper response size (connected at HasChipyardPRCI.scala:41:5)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_69.sv", 566, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_69.sv:568: Assertion failed in %NTestDriver.testHarness.chiptop0.system.prci_ctrl_domain.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_69.sv", 568, "");
        }
    }
    VL_SHIFTR_WWI(2112,2112,12, __Vtemp_hf6e7e4ba__0, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source) 
                   << 2U));
    VL_SHIFTR_WWI(2112,2112,12, __Vtemp_hf6e7e4ba__1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source) 
                   << 2U));
    VL_SHIFTR_WWI(2112,2112,12, __Vtemp_hf6e7e4ba__2, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source) 
                   << 2U));
    VL_SHIFTR_WWI(2112,2112,12, __Vtemp_hf6e7e4ba__3, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source) 
                   << 2U));
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__same_cycle_resp)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_617)) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & 
                                               (__Vtemp_hf6e7e4ba__0[0U] 
                                                >> 1U)))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (__Vtemp_hf6e7e4ba__1[0U] 
                                                     >> 1U))))))
                                 : 0U)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (__Vtemp_hf6e7e4ba__2[0U] 
                                                        >> 1U)))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (__Vtemp_hf6e7e4ba__3[0U] 
                                                              >> 1U))))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_69.sv:572: Assertion failed in %NTestDriver.testHarness.chiptop0.system.prci_ctrl_domain.xbar.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at HasChipyardPRCI.scala:41:5)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_69.sv", 572, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_69.sv:574: Assertion failed in %NTestDriver.testHarness.chiptop0.system.prci_ctrl_domain.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_69.sv", 574, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1160(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1160\n"); );
    // Init
    VlWide<66>/*2111:0*/ __Vtemp_h01aa3eae__0;
    // Body
    VL_SHIFTR_WWI(2112,2112,12, __Vtemp_h01aa3eae__0, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source) 
                   << 2U));
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__same_cycle_resp)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_617)) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_size) 
                        != (7U & (__Vtemp_h01aa3eae__0[0U] 
                                  >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_69.sv:578: Assertion failed in %NTestDriver.testHarness.chiptop0.system.prci_ctrl_domain.xbar.monitor: Assertion failed: 'D' channel contains improper response size (connected at HasChipyardPRCI.scala:41:5)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_69.sv", 578, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_69.sv:580: Assertion failed in %NTestDriver.testHarness.chiptop0.system.prci_ctrl_domain.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_69.sv", 580, "");
        }
    }
    if (VL_UNLIKELY(((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_valid) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_prci_ctrl_fixer_out_a_valid)) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source) 
                           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source))) 
                       & (6U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_prci_ctrl_fixer_out_d_ready)) 
                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_a_ready)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_69.sv:584: Assertion failed in %NTestDriver.testHarness.chiptop0.system.prci_ctrl_domain.xbar.monitor: Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_69.sv", 584, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_69.sv:586: Assertion failed in %NTestDriver.testHarness.chiptop0.system.prci_ctrl_domain.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_69.sv", 586, "");
        }
    }
}

extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_h902eb634_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1161(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1161\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ (((0U == ((((((((((
                                                   (((((((VTestDriver__ConstPool__CONST_h902eb634_0[0U] 
                                                          ^ 
                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[0U]) 
                                                         | (VTestDriver__ConstPool__CONST_h902eb634_0[1U] 
                                                            ^ 
                                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[1U])) 
                                                        | (VTestDriver__ConstPool__CONST_h902eb634_0[2U] 
                                                           ^ 
                                                           vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[2U])) 
                                                       | (VTestDriver__ConstPool__CONST_h902eb634_0[3U] 
                                                          ^ 
                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[3U])) 
                                                      | (VTestDriver__ConstPool__CONST_h902eb634_0[4U] 
                                                         ^ 
                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[4U])) 
                                                     | (VTestDriver__ConstPool__CONST_h902eb634_0[5U] 
                                                        ^ 
                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[5U])) 
                                                    | (VTestDriver__ConstPool__CONST_h902eb634_0[6U] 
                                                       ^ 
                                                       vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[6U])) 
                                                   | (VTestDriver__ConstPool__CONST_h902eb634_0[7U] 
                                                      ^ 
                                                      vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[7U])) 
                                                  | (VTestDriver__ConstPool__CONST_h902eb634_0[8U] 
                                                     ^ 
                                                     vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[8U])) 
                                                 | (VTestDriver__ConstPool__CONST_h902eb634_0[9U] 
                                                    ^ 
                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[9U])) 
                                                | (VTestDriver__ConstPool__CONST_h902eb634_0[0xaU] 
                                                   ^ 
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[0xaU])) 
                                               | (VTestDriver__ConstPool__CONST_h902eb634_0[0xbU] 
                                                  ^ 
                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[0xbU])) 
                                              | (VTestDriver__ConstPool__CONST_h902eb634_0[0xcU] 
                                                 ^ 
                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[0xcU])) 
                                             | (VTestDriver__ConstPool__CONST_h902eb634_0[0xdU] 
                                                ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[0xdU])) 
                                            | (VTestDriver__ConstPool__CONST_h902eb634_0[0xeU] 
                                               ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[0xeU])) 
                                           | (VTestDriver__ConstPool__CONST_h902eb634_0[0xfU] 
                                              ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[0xfU])) 
                                          | (VTestDriver__ConstPool__CONST_h902eb634_0[0x10U] 
                                             ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight[0x10U]))) 
                                  | (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__watchdog 
                                    < vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__plusarg_reader__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_69.sv:590: Assertion failed in %NTestDriver.testHarness.chiptop0.system.prci_ctrl_domain.xbar.monitor: Assertion failed: TileLink timeout expired (connected at HasChipyardPRCI.scala:41:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_69.sv", 590, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_69.sv:592: Assertion failed in %NTestDriver.testHarness.chiptop0.system.prci_ctrl_domain.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_69.sv", 592, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_valid) 
                      & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_69.sv:596: Assertion failed in %NTestDriver.testHarness.chiptop0.system.prci_ctrl_domain.xbar.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at HasChipyardPRCI.scala:41:5)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_69.sv", 596, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_69.sv:598: Assertion failed in %NTestDriver.testHarness.chiptop0.system.prci_ctrl_domain.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_69.sv", 598, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1162(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1162\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_69.sv:602: Assertion failed in %NTestDriver.testHarness.chiptop0.system.prci_ctrl_domain.xbar.monitor: Assertion failed: 'D' channel contains improper response size (connected at HasChipyardPRCI.scala:41:5)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_69.sv", 602, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_69.sv:604: Assertion failed in %NTestDriver.testHarness.chiptop0.system.prci_ctrl_domain.xbar.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_69.sv", 604, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                      & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:176: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 176, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:178: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 178, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1163(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1163\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                      & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:182: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 182, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:184: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 184, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0x20fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:188: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 188, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:190: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 190, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1164(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1164\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ (IData)((3U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:194: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 194, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:196: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 196, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (7U & ((~ ((IData)(7U) 
                                         << (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag)))) 
                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:200: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 200, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:202: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 202, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1165(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1165\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:206: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 206, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:208: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 208, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0xffU != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__repeater__DOT__full)
                                   ? 0xffU : (0xffU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                 >> 4U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:212: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 212, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:214: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 214, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1166(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1166\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__repeater__DOT__full)
                         ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                         : (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                            >> 0xcU))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:218: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel AcquireBlock is corrupt (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 218, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:220: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 220, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                      & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:224: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 224, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:226: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 226, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1167(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1167\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                      & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:230: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 230, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:232: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 232, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                       & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0x20fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:236: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 236, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:238: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 238, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1168(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1168\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                       & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ (IData)((3U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:242: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 242, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:244: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 244, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                       & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (7U & ((~ ((IData)(7U) 
                                         << (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag)))) 
                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:248: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 248, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:250: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 250, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1169(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1169\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                       & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:254: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 254, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:256: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 256, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                       & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:260: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 260, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:262: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 262, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1170(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1170\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                       & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0xffU != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__repeater__DOT__full)
                                   ? 0xffU : (0xffU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                 >> 4U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:266: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 266, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:268: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 268, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                       & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__repeater__DOT__full)
                         ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                         : (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                            >> 0xcU))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:272: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel AcquirePerm is corrupt (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 272, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:274: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 274, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1171(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1171\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0x20fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:278: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 278, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:280: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 280, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (IData)(((0U != (0xf000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)) 
                                | (0U != (0xfU & (8U 
                                                  ^ 
                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                                   >> 0x11U))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:284: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 284, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:286: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 286, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1172(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1172\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0x20fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:290: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel Get carries invalid source ID (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 290, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:292: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 292, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (7U & ((~ ((IData)(7U) 
                                         << (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag)))) 
                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:296: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel Get address not aligned to size (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 296, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:298: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 298, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1173(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1173\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:302: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel Get carries invalid param (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 302, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:304: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 304, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__repeater__DOT__full)
                          ? 0xffU : (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                              >> 4U))) 
                        != ((0x80U & (((((3U == (3U 
                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                         | ((2U == 
                                             (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                               >> 2U))) 
                                        | ((1U == (3U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                           & (IData)(
                                                     (6U 
                                                      == 
                                                      (6U 
                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address))))) 
                                       | (IData)((7U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))) 
                                      << 7U)) | ((0x40U 
                                                  & (((((3U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                        | ((2U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                                              >> 2U))) 
                                                       | ((1U 
                                                           == 
                                                           (3U 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                          & (IData)(
                                                                    (6U 
                                                                     == 
                                                                     (6U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address))))) 
                                                      | (IData)(
                                                                (6U 
                                                                 == 
                                                                 (7U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))) 
                                                     << 6U)) 
                                                 | ((0x20U 
                                                     & (((((3U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                           | ((2U 
                                                               == 
                                                               (3U 
                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                                                 >> 2U))) 
                                                          | ((1U 
                                                              == 
                                                              (3U 
                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                             & (IData)(
                                                                       (4U 
                                                                        == 
                                                                        (6U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address))))) 
                                                         | (IData)(
                                                                   (5U 
                                                                    == 
                                                                    (7U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))) 
                                                        << 5U)) 
                                                    | ((0x10U 
                                                        & (((((3U 
                                                               == 
                                                               (3U 
                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                              | ((2U 
                                                                  == 
                                                                  (3U 
                                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                                                    >> 2U))) 
                                                             | ((1U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                & (IData)(
                                                                          (4U 
                                                                           == 
                                                                           (6U 
                                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address))))) 
                                                            | (IData)(
                                                                      (4U 
                                                                       == 
                                                                       (7U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))) 
                                                           << 4U)) 
                                                       | ((8U 
                                                           & (((((3U 
                                                                  == 
                                                                  (3U 
                                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                 | ((~ 
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                                                      >> 2U)) 
                                                                    & (2U 
                                                                       == 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))))) 
                                                                | ((1U 
                                                                    == 
                                                                    (3U 
                                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                   & (IData)(
                                                                             (2U 
                                                                              == 
                                                                              (6U 
                                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address))))) 
                                                               | (IData)(
                                                                         (3U 
                                                                          == 
                                                                          (7U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))) 
                                                              << 3U)) 
                                                          | ((4U 
                                                              & (((((3U 
                                                                     == 
                                                                     (3U 
                                                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                    | ((~ 
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                                                         >> 2U)) 
                                                                       & (2U 
                                                                          == 
                                                                          (3U 
                                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))))) 
                                                                   | ((1U 
                                                                       == 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                      & (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address))))) 
                                                                  | (IData)(
                                                                            (2U 
                                                                             == 
                                                                             (7U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))) 
                                                                 << 2U)) 
                                                             | ((2U 
                                                                 & (((((3U 
                                                                        == 
                                                                        (3U 
                                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                       | ((~ 
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                                                            >> 2U)) 
                                                                          & (2U 
                                                                             == 
                                                                             (3U 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))))) 
                                                                      | ((1U 
                                                                          == 
                                                                          (3U 
                                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                         & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address))))) 
                                                                     | (IData)(
                                                                               (1U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))) 
                                                                    << 1U)) 
                                                                | (1U 
                                                                   & ((((3U 
                                                                         == 
                                                                         (3U 
                                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                        | ((~ 
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                                                             >> 2U)) 
                                                                           & (2U 
                                                                              == 
                                                                              (3U 
                                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))))) 
                                                                       | ((1U 
                                                                           == 
                                                                           (3U 
                                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                          & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address))))) 
                                                                      | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:308: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel Get contains invalid mask (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 308, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:310: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 310, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1174(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1174\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__repeater__DOT__full)
                         ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                         : (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                            >> 0xcU))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:314: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel Get is corrupt (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 314, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:316: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 316, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                       & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((0x210U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source)) 
                           & (0U == ((0xf0U & (0x80U 
                                               ^ (0x7fff0U 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                                     >> 0xdU)))) 
                                     | (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                                >> 0xcU))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:320: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 320, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:322: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 322, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1175(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1175\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                       & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0x20fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:326: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel PutFull carries invalid source ID (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 326, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:328: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 328, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                       & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (7U & ((~ ((IData)(7U) 
                                         << (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag)))) 
                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:332: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel PutFull address not aligned to size (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 332, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:334: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 334, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1176(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1176\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                       & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:338: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel PutFull carries invalid param (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 338, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:340: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 340, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                       & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__repeater__DOT__full)
                          ? 0xffU : (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                              >> 4U))) 
                        != ((0x80U & (((((3U == (3U 
                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                         | ((2U == 
                                             (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                               >> 2U))) 
                                        | ((1U == (3U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                           & (IData)(
                                                     (6U 
                                                      == 
                                                      (6U 
                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address))))) 
                                       | (IData)((7U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))) 
                                      << 7U)) | ((0x40U 
                                                  & (((((3U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                        | ((2U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                                              >> 2U))) 
                                                       | ((1U 
                                                           == 
                                                           (3U 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                          & (IData)(
                                                                    (6U 
                                                                     == 
                                                                     (6U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address))))) 
                                                      | (IData)(
                                                                (6U 
                                                                 == 
                                                                 (7U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))) 
                                                     << 6U)) 
                                                 | ((0x20U 
                                                     & (((((3U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                           | ((2U 
                                                               == 
                                                               (3U 
                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                                                 >> 2U))) 
                                                          | ((1U 
                                                              == 
                                                              (3U 
                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                             & (IData)(
                                                                       (4U 
                                                                        == 
                                                                        (6U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address))))) 
                                                         | (IData)(
                                                                   (5U 
                                                                    == 
                                                                    (7U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))) 
                                                        << 5U)) 
                                                    | ((0x10U 
                                                        & (((((3U 
                                                               == 
                                                               (3U 
                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                              | ((2U 
                                                                  == 
                                                                  (3U 
                                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                                                    >> 2U))) 
                                                             | ((1U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                & (IData)(
                                                                          (4U 
                                                                           == 
                                                                           (6U 
                                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address))))) 
                                                            | (IData)(
                                                                      (4U 
                                                                       == 
                                                                       (7U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))) 
                                                           << 4U)) 
                                                       | ((8U 
                                                           & (((((3U 
                                                                  == 
                                                                  (3U 
                                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                 | ((~ 
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                                                      >> 2U)) 
                                                                    & (2U 
                                                                       == 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))))) 
                                                                | ((1U 
                                                                    == 
                                                                    (3U 
                                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                   & (IData)(
                                                                             (2U 
                                                                              == 
                                                                              (6U 
                                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address))))) 
                                                               | (IData)(
                                                                         (3U 
                                                                          == 
                                                                          (7U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))) 
                                                              << 3U)) 
                                                          | ((4U 
                                                              & (((((3U 
                                                                     == 
                                                                     (3U 
                                                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                    | ((~ 
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                                                         >> 2U)) 
                                                                       & (2U 
                                                                          == 
                                                                          (3U 
                                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))))) 
                                                                   | ((1U 
                                                                       == 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                      & (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address))))) 
                                                                  | (IData)(
                                                                            (2U 
                                                                             == 
                                                                             (7U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))) 
                                                                 << 2U)) 
                                                             | ((2U 
                                                                 & (((((3U 
                                                                        == 
                                                                        (3U 
                                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                       | ((~ 
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                                                            >> 2U)) 
                                                                          & (2U 
                                                                             == 
                                                                             (3U 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))))) 
                                                                      | ((1U 
                                                                          == 
                                                                          (3U 
                                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                         & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address))))) 
                                                                     | (IData)(
                                                                               (1U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))) 
                                                                    << 1U)) 
                                                                | (1U 
                                                                   & ((((3U 
                                                                         == 
                                                                         (3U 
                                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                        | ((~ 
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                                                             >> 2U)) 
                                                                           & (2U 
                                                                              == 
                                                                              (3U 
                                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))))) 
                                                                       | ((1U 
                                                                           == 
                                                                           (3U 
                                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                          & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address))))) 
                                                                      | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:344: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel PutFull contains invalid mask (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 344, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:346: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 346, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1177(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1177\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                       & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((0x210U > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source)) 
                           & (0U == ((0xf0U & (0x80U 
                                               ^ (0x7fff0U 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                                     >> 0xdU)))) 
                                     | (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                                >> 0xcU))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:350: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 350, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:352: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 352, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                       & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0x20fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:356: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 356, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:358: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 358, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1178(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1178\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                       & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (7U & ((~ ((IData)(7U) 
                                         << (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag)))) 
                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:362: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel PutPartial address not aligned to size (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 362, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:364: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 364, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                       & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:368: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel PutPartial carries invalid param (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 368, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:370: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 370, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1179(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1179\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                       & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0xffU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__repeater__DOT__full)
                                          ? 0xffU : 
                                         ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                           << 0x1cU) 
                                          | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                             >> 4U))) 
                                        & (~ ((0x80U 
                                               & (((((3U 
                                                      == 
                                                      (3U 
                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                     | ((2U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                                           >> 2U))) 
                                                    | ((1U 
                                                        == 
                                                        (3U 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                       & (IData)(
                                                                 (6U 
                                                                  == 
                                                                  (6U 
                                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address))))) 
                                                   | (IData)(
                                                             (7U 
                                                              == 
                                                              (7U 
                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))) 
                                                  << 7U)) 
                                              | ((0x40U 
                                                  & (((((3U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                        | ((2U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                                              >> 2U))) 
                                                       | ((1U 
                                                           == 
                                                           (3U 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                          & (IData)(
                                                                    (6U 
                                                                     == 
                                                                     (6U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address))))) 
                                                      | (IData)(
                                                                (6U 
                                                                 == 
                                                                 (7U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))) 
                                                     << 6U)) 
                                                 | ((0x20U 
                                                     & (((((3U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                           | ((2U 
                                                               == 
                                                               (3U 
                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                                                 >> 2U))) 
                                                          | ((1U 
                                                              == 
                                                              (3U 
                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                             & (IData)(
                                                                       (4U 
                                                                        == 
                                                                        (6U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address))))) 
                                                         | (IData)(
                                                                   (5U 
                                                                    == 
                                                                    (7U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))) 
                                                        << 5U)) 
                                                    | ((0x10U 
                                                        & (((((3U 
                                                               == 
                                                               (3U 
                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                              | ((2U 
                                                                  == 
                                                                  (3U 
                                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                                                    >> 2U))) 
                                                             | ((1U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                & (IData)(
                                                                          (4U 
                                                                           == 
                                                                           (6U 
                                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address))))) 
                                                            | (IData)(
                                                                      (4U 
                                                                       == 
                                                                       (7U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))) 
                                                           << 4U)) 
                                                       | ((8U 
                                                           & (((((3U 
                                                                  == 
                                                                  (3U 
                                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                 | ((~ 
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                                                      >> 2U)) 
                                                                    & (2U 
                                                                       == 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))))) 
                                                                | ((1U 
                                                                    == 
                                                                    (3U 
                                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                   & (IData)(
                                                                             (2U 
                                                                              == 
                                                                              (6U 
                                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address))))) 
                                                               | (IData)(
                                                                         (3U 
                                                                          == 
                                                                          (7U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))) 
                                                              << 3U)) 
                                                          | ((4U 
                                                              & (((((3U 
                                                                     == 
                                                                     (3U 
                                                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                    | ((~ 
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                                                         >> 2U)) 
                                                                       & (2U 
                                                                          == 
                                                                          (3U 
                                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))))) 
                                                                   | ((1U 
                                                                       == 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                      & (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address))))) 
                                                                  | (IData)(
                                                                            (2U 
                                                                             == 
                                                                             (7U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))) 
                                                                 << 2U)) 
                                                             | ((2U 
                                                                 & (((((3U 
                                                                        == 
                                                                        (3U 
                                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                       | ((~ 
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                                                            >> 2U)) 
                                                                          & (2U 
                                                                             == 
                                                                             (3U 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))))) 
                                                                      | ((1U 
                                                                          == 
                                                                          (3U 
                                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                         & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address))))) 
                                                                     | (IData)(
                                                                               (1U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))) 
                                                                    << 1U)) 
                                                                | (1U 
                                                                   & ((((3U 
                                                                         == 
                                                                         (3U 
                                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                        | ((~ 
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                                                             >> 2U)) 
                                                                           & (2U 
                                                                              == 
                                                                              (3U 
                                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))))) 
                                                                       | ((1U 
                                                                           == 
                                                                           (3U 
                                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                          & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address))))) 
                                                                      | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address))))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:374: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel PutPartial contains invalid mask (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 374, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:376: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 376, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1180(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1180\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                      & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:380: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 380, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:382: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 382, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                       & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0x20fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:386: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 386, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:388: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 388, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1181(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1181\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                       & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (7U & ((~ ((IData)(7U) 
                                         << (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag)))) 
                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:392: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 392, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:394: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 394, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                       & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (4U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:398: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 398, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:400: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 400, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1182(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1182\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                       & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__repeater__DOT__full)
                          ? 0xffU : (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                              >> 4U))) 
                        != ((0x80U & (((((3U == (3U 
                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                         | ((2U == 
                                             (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                               >> 2U))) 
                                        | ((1U == (3U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                           & (IData)(
                                                     (6U 
                                                      == 
                                                      (6U 
                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address))))) 
                                       | (IData)((7U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))) 
                                      << 7U)) | ((0x40U 
                                                  & (((((3U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                        | ((2U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                                              >> 2U))) 
                                                       | ((1U 
                                                           == 
                                                           (3U 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                          & (IData)(
                                                                    (6U 
                                                                     == 
                                                                     (6U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address))))) 
                                                      | (IData)(
                                                                (6U 
                                                                 == 
                                                                 (7U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))) 
                                                     << 6U)) 
                                                 | ((0x20U 
                                                     & (((((3U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                           | ((2U 
                                                               == 
                                                               (3U 
                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                                                 >> 2U))) 
                                                          | ((1U 
                                                              == 
                                                              (3U 
                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                             & (IData)(
                                                                       (4U 
                                                                        == 
                                                                        (6U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address))))) 
                                                         | (IData)(
                                                                   (5U 
                                                                    == 
                                                                    (7U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))) 
                                                        << 5U)) 
                                                    | ((0x10U 
                                                        & (((((3U 
                                                               == 
                                                               (3U 
                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                              | ((2U 
                                                                  == 
                                                                  (3U 
                                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                                                    >> 2U))) 
                                                             | ((1U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                & (IData)(
                                                                          (4U 
                                                                           == 
                                                                           (6U 
                                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address))))) 
                                                            | (IData)(
                                                                      (4U 
                                                                       == 
                                                                       (7U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))) 
                                                           << 4U)) 
                                                       | ((8U 
                                                           & (((((3U 
                                                                  == 
                                                                  (3U 
                                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                 | ((~ 
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                                                      >> 2U)) 
                                                                    & (2U 
                                                                       == 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))))) 
                                                                | ((1U 
                                                                    == 
                                                                    (3U 
                                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                   & (IData)(
                                                                             (2U 
                                                                              == 
                                                                              (6U 
                                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address))))) 
                                                               | (IData)(
                                                                         (3U 
                                                                          == 
                                                                          (7U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))) 
                                                              << 3U)) 
                                                          | ((4U 
                                                              & (((((3U 
                                                                     == 
                                                                     (3U 
                                                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                    | ((~ 
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                                                         >> 2U)) 
                                                                       & (2U 
                                                                          == 
                                                                          (3U 
                                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))))) 
                                                                   | ((1U 
                                                                       == 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                      & (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address))))) 
                                                                  | (IData)(
                                                                            (2U 
                                                                             == 
                                                                             (7U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))) 
                                                                 << 2U)) 
                                                             | ((2U 
                                                                 & (((((3U 
                                                                        == 
                                                                        (3U 
                                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                       | ((~ 
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                                                            >> 2U)) 
                                                                          & (2U 
                                                                             == 
                                                                             (3U 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))))) 
                                                                      | ((1U 
                                                                          == 
                                                                          (3U 
                                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                         & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address))))) 
                                                                     | (IData)(
                                                                               (1U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))) 
                                                                    << 1U)) 
                                                                | (1U 
                                                                   & ((((3U 
                                                                         == 
                                                                         (3U 
                                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                        | ((~ 
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                                                             >> 2U)) 
                                                                           & (2U 
                                                                              == 
                                                                              (3U 
                                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))))) 
                                                                       | ((1U 
                                                                           == 
                                                                           (3U 
                                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                          & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address))))) 
                                                                      | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:404: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 404, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:406: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 406, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1183(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1183\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                      & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:410: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 410, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:412: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 412, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                       & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0x20fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:416: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel Logical carries invalid source ID (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 416, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:418: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 418, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1184(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1184\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                       & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (7U & ((~ ((IData)(7U) 
                                         << (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag)))) 
                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:422: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel Logical address not aligned to size (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 422, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:424: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 424, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                       & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_param) 
                        >> 2U)))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:428: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel Logical carries invalid opcode param (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 428, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:430: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 430, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1185(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1185\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                       & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__repeater__DOT__full)
                          ? 0xffU : (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                              >> 4U))) 
                        != ((0x80U & (((((3U == (3U 
                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                         | ((2U == 
                                             (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                               >> 2U))) 
                                        | ((1U == (3U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                           & (IData)(
                                                     (6U 
                                                      == 
                                                      (6U 
                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address))))) 
                                       | (IData)((7U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))) 
                                      << 7U)) | ((0x40U 
                                                  & (((((3U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                        | ((2U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                                              >> 2U))) 
                                                       | ((1U 
                                                           == 
                                                           (3U 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                          & (IData)(
                                                                    (6U 
                                                                     == 
                                                                     (6U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address))))) 
                                                      | (IData)(
                                                                (6U 
                                                                 == 
                                                                 (7U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))) 
                                                     << 6U)) 
                                                 | ((0x20U 
                                                     & (((((3U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                           | ((2U 
                                                               == 
                                                               (3U 
                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                                                 >> 2U))) 
                                                          | ((1U 
                                                              == 
                                                              (3U 
                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                             & (IData)(
                                                                       (4U 
                                                                        == 
                                                                        (6U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address))))) 
                                                         | (IData)(
                                                                   (5U 
                                                                    == 
                                                                    (7U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))) 
                                                        << 5U)) 
                                                    | ((0x10U 
                                                        & (((((3U 
                                                               == 
                                                               (3U 
                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                              | ((2U 
                                                                  == 
                                                                  (3U 
                                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                                                    >> 2U))) 
                                                             | ((1U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                & (IData)(
                                                                          (4U 
                                                                           == 
                                                                           (6U 
                                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address))))) 
                                                            | (IData)(
                                                                      (4U 
                                                                       == 
                                                                       (7U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))) 
                                                           << 4U)) 
                                                       | ((8U 
                                                           & (((((3U 
                                                                  == 
                                                                  (3U 
                                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                 | ((~ 
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                                                      >> 2U)) 
                                                                    & (2U 
                                                                       == 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))))) 
                                                                | ((1U 
                                                                    == 
                                                                    (3U 
                                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                   & (IData)(
                                                                             (2U 
                                                                              == 
                                                                              (6U 
                                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address))))) 
                                                               | (IData)(
                                                                         (3U 
                                                                          == 
                                                                          (7U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))) 
                                                              << 3U)) 
                                                          | ((4U 
                                                              & (((((3U 
                                                                     == 
                                                                     (3U 
                                                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                    | ((~ 
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                                                         >> 2U)) 
                                                                       & (2U 
                                                                          == 
                                                                          (3U 
                                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))))) 
                                                                   | ((1U 
                                                                       == 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                      & (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address))))) 
                                                                  | (IData)(
                                                                            (2U 
                                                                             == 
                                                                             (7U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))) 
                                                                 << 2U)) 
                                                             | ((2U 
                                                                 & (((((3U 
                                                                        == 
                                                                        (3U 
                                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                       | ((~ 
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                                                            >> 2U)) 
                                                                          & (2U 
                                                                             == 
                                                                             (3U 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))))) 
                                                                      | ((1U 
                                                                          == 
                                                                          (3U 
                                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                         & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address))))) 
                                                                     | (IData)(
                                                                               (1U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))) 
                                                                    << 1U)) 
                                                                | (1U 
                                                                   & ((((3U 
                                                                         == 
                                                                         (3U 
                                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                        | ((~ 
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                                                             >> 2U)) 
                                                                           & (2U 
                                                                              == 
                                                                              (3U 
                                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))))) 
                                                                       | ((1U 
                                                                           == 
                                                                           (3U 
                                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                          & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address))))) 
                                                                      | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:434: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel Logical contains invalid mask (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 434, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:436: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 436, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1186(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1186\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                      & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:440: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 440, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:442: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 442, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0x20fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:446: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel Hint carries invalid source ID (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 446, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:448: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 448, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1187(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1187\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (7U & ((~ ((IData)(7U) 
                                         << (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag)))) 
                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:452: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel Hint address not aligned to size (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 452, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:454: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 454, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_param) 
                                     >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:458: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel Hint carries invalid opcode param (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 458, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:460: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 460, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1188(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1188\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__repeater__DOT__full)
                          ? 0xffU : (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                              >> 4U))) 
                        != ((0x80U & (((((3U == (3U 
                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                         | ((2U == 
                                             (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                            & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                               >> 2U))) 
                                        | ((1U == (3U 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                           & (IData)(
                                                     (6U 
                                                      == 
                                                      (6U 
                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address))))) 
                                       | (IData)((7U 
                                                  == 
                                                  (7U 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))) 
                                      << 7U)) | ((0x40U 
                                                  & (((((3U 
                                                         == 
                                                         (3U 
                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                        | ((2U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                                              >> 2U))) 
                                                       | ((1U 
                                                           == 
                                                           (3U 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                          & (IData)(
                                                                    (6U 
                                                                     == 
                                                                     (6U 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address))))) 
                                                      | (IData)(
                                                                (6U 
                                                                 == 
                                                                 (7U 
                                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))) 
                                                     << 6U)) 
                                                 | ((0x20U 
                                                     & (((((3U 
                                                            == 
                                                            (3U 
                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                           | ((2U 
                                                               == 
                                                               (3U 
                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                                                 >> 2U))) 
                                                          | ((1U 
                                                              == 
                                                              (3U 
                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                             & (IData)(
                                                                       (4U 
                                                                        == 
                                                                        (6U 
                                                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address))))) 
                                                         | (IData)(
                                                                   (5U 
                                                                    == 
                                                                    (7U 
                                                                     & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))) 
                                                        << 5U)) 
                                                    | ((0x10U 
                                                        & (((((3U 
                                                               == 
                                                               (3U 
                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                              | ((2U 
                                                                  == 
                                                                  (3U 
                                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                                                    >> 2U))) 
                                                             | ((1U 
                                                                 == 
                                                                 (3U 
                                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                & (IData)(
                                                                          (4U 
                                                                           == 
                                                                           (6U 
                                                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address))))) 
                                                            | (IData)(
                                                                      (4U 
                                                                       == 
                                                                       (7U 
                                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))) 
                                                           << 4U)) 
                                                       | ((8U 
                                                           & (((((3U 
                                                                  == 
                                                                  (3U 
                                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                 | ((~ 
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                                                      >> 2U)) 
                                                                    & (2U 
                                                                       == 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))))) 
                                                                | ((1U 
                                                                    == 
                                                                    (3U 
                                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                   & (IData)(
                                                                             (2U 
                                                                              == 
                                                                              (6U 
                                                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address))))) 
                                                               | (IData)(
                                                                         (3U 
                                                                          == 
                                                                          (7U 
                                                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))) 
                                                              << 3U)) 
                                                          | ((4U 
                                                              & (((((3U 
                                                                     == 
                                                                     (3U 
                                                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                    | ((~ 
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                                                         >> 2U)) 
                                                                       & (2U 
                                                                          == 
                                                                          (3U 
                                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))))) 
                                                                   | ((1U 
                                                                       == 
                                                                       (3U 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                      & (IData)(
                                                                                (2U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address))))) 
                                                                  | (IData)(
                                                                            (2U 
                                                                             == 
                                                                             (7U 
                                                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))) 
                                                                 << 2U)) 
                                                             | ((2U 
                                                                 & (((((3U 
                                                                        == 
                                                                        (3U 
                                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                       | ((~ 
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                                                            >> 2U)) 
                                                                          & (2U 
                                                                             == 
                                                                             (3U 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))))) 
                                                                      | ((1U 
                                                                          == 
                                                                          (3U 
                                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                         & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address))))) 
                                                                     | (IData)(
                                                                               (1U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))) 
                                                                    << 1U)) 
                                                                | (1U 
                                                                   & ((((3U 
                                                                         == 
                                                                         (3U 
                                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                        | ((~ 
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address 
                                                                             >> 2U)) 
                                                                           & (2U 
                                                                              == 
                                                                              (3U 
                                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))))) 
                                                                       | ((1U 
                                                                           == 
                                                                           (3U 
                                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag))) 
                                                                          & (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (6U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address))))) 
                                                                      | (IData)(
                                                                                (0U 
                                                                                == 
                                                                                (7U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:464: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel Hint contains invalid mask (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 464, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:466: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 466, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1189(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1189\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__repeater__DOT__full)
                         ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__repeater__DOT__saved_corrupt)
                         : (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                            >> 0xcU))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:470: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel Hint is corrupt (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 470, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:472: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 472, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_valid) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_opcode))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:476: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'D' channel has invalid opcode (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 476, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:478: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 478, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1190(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1190\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0x20fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:482: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 482, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:484: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 484, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (3U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:488: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 488, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:490: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 490, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1191(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1191\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0x20fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:494: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'D' channel Grant carries invalid source ID (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 494, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:496: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 496, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_valid) 
                      & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:500: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'D' channel Grant carries invalid sink ID (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 500, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:502: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 502, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1192(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1192\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_valid) 
                       & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (3U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:506: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'D' channel Grant smaller than a beat (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 506, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:508: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 508, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0x20fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:512: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'D' channel GrantData carries invalid source ID (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 512, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:514: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 514, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1193(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1193\n"); );
    // Body
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_valid) 
                      & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:518: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'D' channel GrantData carries invalid sink ID (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 518, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:520: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 520, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_valid) 
                       & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (3U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:524: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'D' channel GrantData smaller than a beat (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 524, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:526: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 526, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1194(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1194\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_valid) 
                       & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0x20fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:530: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 530, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:532: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 532, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_valid) 
                       & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0x20fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:536: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 536, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:538: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 538, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1195(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1195\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_h6dc7357e__0;
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_valid) 
                       & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0x20fU < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:542: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'D' channel HintAck carries invalid source ID (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 542, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:544: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 544, "");
        }
    }
    VL_SHIFTR_WWI(528,528,10, __Vtemp_h6dc7357e__0, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source));
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (VTestDriver__ConstPool__CONST_h00a443f1_0[0U] 
                        & __Vtemp_h6dc7357e__0[0U])))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:548: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'A' channel re-used a source ID (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 548, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:550: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 550, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1196(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1196\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_h8855dc65__0;
    // Body
    VL_SHIFTR_WWI(528,528,10, __Vtemp_h8855dc65__0, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source));
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_617) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((VTestDriver__ConstPool__CONST_h00a443f1_0[0U] 
                            & __Vtemp_h8855dc65__0[0U]) 
                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__same_cycle_resp)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:554: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 554, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:556: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 556, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_617) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__same_cycle_resp)) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode)))))
                                 : 0U)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode)))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:560: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 560, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:562: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 562, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1197(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1197\n"); );
    // Init
    VlWide<66>/*2111:0*/ __Vtemp_h0e34b78e__0;
    VlWide<66>/*2111:0*/ __Vtemp_h0e34b78e__1;
    VlWide<66>/*2111:0*/ __Vtemp_h0e34b78e__2;
    VlWide<66>/*2111:0*/ __Vtemp_h0e34b78e__3;
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_617) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__same_cycle_resp)) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag)) 
                        != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:566: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'D' channel contains improper response size (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 566, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:568: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 568, "");
        }
    }
    VL_SHIFTR_WWI(2112,2112,12, __Vtemp_h0e34b78e__0, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source) 
                   << 2U));
    VL_SHIFTR_WWI(2112,2112,12, __Vtemp_h0e34b78e__1, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source) 
                   << 2U));
    VL_SHIFTR_WWI(2112,2112,12, __Vtemp_h0e34b78e__2, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source) 
                   << 2U));
    VL_SHIFTR_WWI(2112,2112,12, __Vtemp_h0e34b78e__3, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight_opcodes, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source) 
                   << 2U));
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__same_cycle_resp)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_617)) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_opcode) 
                            == ((0x17U >= (0x1fU & 
                                           ((IData)(3U) 
                                            * (7U & 
                                               (__Vtemp_h0e34b78e__0[0U] 
                                                >> 1U)))))
                                 ? (7U & (0x911240U 
                                          >> (0x1fU 
                                              & ((IData)(3U) 
                                                 * 
                                                 (7U 
                                                  & (__Vtemp_h0e34b78e__1[0U] 
                                                     >> 1U))))))
                                 : 0U)) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_opcode) 
                                           == ((0x17U 
                                                >= 
                                                (0x1fU 
                                                 & ((IData)(3U) 
                                                    * 
                                                    (7U 
                                                     & (__Vtemp_h0e34b78e__2[0U] 
                                                        >> 1U)))))
                                                ? (7U 
                                                   & (0x951240U 
                                                      >> 
                                                      (0x1fU 
                                                       & ((IData)(3U) 
                                                          * 
                                                          (7U 
                                                           & (__Vtemp_h0e34b78e__3[0U] 
                                                              >> 1U))))))
                                                : 0U))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:572: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'D' channel contains improper opcode response (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 572, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:574: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 574, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1198(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1198\n"); );
    // Init
    VlWide<66>/*2111:0*/ __Vtemp_ha472e12c__0;
    // Body
    VL_SHIFTR_WWI(2112,2112,12, __Vtemp_ha472e12c__0, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight_sizes, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source) 
                   << 2U));
    if (VL_UNLIKELY(((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__same_cycle_resp)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_617)) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_size) 
                        != (7U & (__Vtemp_ha472e12c__0[0U] 
                                  >> 1U)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:578: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'D' channel contains improper response size (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 578, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:580: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 580, "");
        }
    }
    if (VL_UNLIKELY(((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_valid) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid)) 
                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source) 
                           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source))) 
                       & (6U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_prci_ctrl_fixer_out_d_ready)) 
                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT___fixer_auto_in_a_ready)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:584: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: ready check\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 584, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:586: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 586, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1199(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1199\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ (((0U == ((((((((((
                                                   (((((((VTestDriver__ConstPool__CONST_h902eb634_0[0U] 
                                                          ^ 
                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0U]) 
                                                         | (VTestDriver__ConstPool__CONST_h902eb634_0[1U] 
                                                            ^ 
                                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[1U])) 
                                                        | (VTestDriver__ConstPool__CONST_h902eb634_0[2U] 
                                                           ^ 
                                                           vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[2U])) 
                                                       | (VTestDriver__ConstPool__CONST_h902eb634_0[3U] 
                                                          ^ 
                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[3U])) 
                                                      | (VTestDriver__ConstPool__CONST_h902eb634_0[4U] 
                                                         ^ 
                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[4U])) 
                                                     | (VTestDriver__ConstPool__CONST_h902eb634_0[5U] 
                                                        ^ 
                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[5U])) 
                                                    | (VTestDriver__ConstPool__CONST_h902eb634_0[6U] 
                                                       ^ 
                                                       vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[6U])) 
                                                   | (VTestDriver__ConstPool__CONST_h902eb634_0[7U] 
                                                      ^ 
                                                      vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[7U])) 
                                                  | (VTestDriver__ConstPool__CONST_h902eb634_0[8U] 
                                                     ^ 
                                                     vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[8U])) 
                                                 | (VTestDriver__ConstPool__CONST_h902eb634_0[9U] 
                                                    ^ 
                                                    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[9U])) 
                                                | (VTestDriver__ConstPool__CONST_h902eb634_0[0xaU] 
                                                   ^ 
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xaU])) 
                                               | (VTestDriver__ConstPool__CONST_h902eb634_0[0xbU] 
                                                  ^ 
                                                  vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xbU])) 
                                              | (VTestDriver__ConstPool__CONST_h902eb634_0[0xcU] 
                                                 ^ 
                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xcU])) 
                                             | (VTestDriver__ConstPool__CONST_h902eb634_0[0xdU] 
                                                ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xdU])) 
                                            | (VTestDriver__ConstPool__CONST_h902eb634_0[0xeU] 
                                               ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xeU])) 
                                           | (VTestDriver__ConstPool__CONST_h902eb634_0[0xfU] 
                                              ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xfU])) 
                                          | (VTestDriver__ConstPool__CONST_h902eb634_0[0x10U] 
                                             ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0x10U]))) 
                                  | (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__plusarg_reader__DOT__myplus)) 
                                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__watchdog 
                                    < vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__plusarg_reader__DOT__myplus))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:590: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: TileLink timeout expired (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 590, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:592: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 592, "");
        }
    }
    if (VL_UNLIKELY((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_valid) 
                      & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_opcode))) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:596: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'D' channel acknowledged for nothing inflight (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 596, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:598: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 598, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1200(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1200\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:602: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor: Assertion failed: 'D' channel contains improper response size (connected at HasChipyardPRCI.scala:42:5)\n    at Monitor.scala:49 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 602, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_35.sv:604: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_prci_ctrl.fixer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_35.sv", 604, "");
        }
    }
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_15__DOT__deq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_15__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_14__DOT__deq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_14__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_13__DOT__deq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_13__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_12__DOT__deq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_12__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_11__DOT__deq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_11__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_10__DOT__deq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_10__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_9__DOT__deq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_9__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_8__DOT__deq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_8__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_7__DOT__deq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_7__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_6__DOT__deq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_6__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_5__DOT__deq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_5__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__deq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT__deq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT__deq_ptr_value;
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1201(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1201\n"); );
    // Body
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT__deq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT__deq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT__deq_ptr_value;
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__deq_ptr_value 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__deq_ptr_value;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__data_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_27__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_26__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_25__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_24__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_23__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_22__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_21__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_20__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_19__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_18__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_17__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_16__DOT__ram_ext__DOT__Memory__v0 = 0U;
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__wipeCount) 
                                  >> 0xaU) | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__directory__io_read_valid)))))))) {
        VL_WRITEF("[%0t] %%Error: Directory.sv:206: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.directory: Assertion failed\n    at Directory.scala:86 assert (wipeDone || !io.read.valid)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/Directory.sv", 206, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: Directory.sv:208: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.directory\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/Directory.sv", 208, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1202(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1202\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__directory__io_read_valid)) 
                                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__wipeCount) 
                                    >> 0xaU))))))) {
        VL_WRITEF("[%0t] %%Error: Directory.sv:212: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.directory: Assertion failed\n    at Directory.scala:91 assert (!io.read.valid || wipeDone)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/Directory.sv", 212, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: Directory.sv:214: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.directory\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/Directory.sv", 214, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__ren1)) 
                                 | (0U == ((((0x37fU 
                                              < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR)) 
                                             << 5U) 
                                            | (((0x2ffU 
                                                 < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR)) 
                                                << 4U) 
                                               | (((0x27fU 
                                                    < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR)) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR_prng__DOT__state_9) 
                                                      << 2U) 
                                                     | (((0x17fU 
                                                          < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR_prng__DOT__state_9) 
                                                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR_prng__DOT__state_8))))))) 
                                           & (((0x2ffU 
                                                >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR)) 
                                               << 5U) 
                                              | (((0x27fU 
                                                   >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR)) 
                                                  << 4U) 
                                                 | ((8U 
                                                     & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR_prng__DOT__state_9)) 
                                                        << 3U)) 
                                                    | (((0x17fU 
                                                         >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR)) 
                                                        << 2U) 
                                                       | ((2U 
                                                           & ((~ 
                                                               ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR_prng__DOT__state_9) 
                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR_prng__DOT__state_8))) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & (~ 
                                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR_prng__DOT__state_9) 
                                                                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR_prng__DOT__state_8) 
                                                                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR_prng__DOT__state_7)))))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: Directory.sv:218: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.directory: Assertion failed\n    at Directory.scala:122 assert (!ren2 || ((victimSimp >> 1) & ~victimSimp) === 0.U) // monotone\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/Directory.sv", 218, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: Directory.sv:220: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.directory\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/Directory.sv", 220, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1203(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1203\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__ren1)) 
                                 | (1U == (0xfU & (
                                                   (7U 
                                                    & ((3U 
                                                        & ((1U 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimWayOH)) 
                                                           + 
                                                           (1U 
                                                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimWayOH) 
                                                               >> 1U)))) 
                                                       + 
                                                       (3U 
                                                        & ((1U 
                                                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimWayOH) 
                                                               >> 2U)) 
                                                           + 
                                                           (1U 
                                                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimWayOH) 
                                                               >> 3U)))))) 
                                                   + 
                                                   (7U 
                                                    & ((3U 
                                                        & ((1U 
                                                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimWayOH) 
                                                               >> 4U)) 
                                                           + 
                                                           (1U 
                                                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimWayOH) 
                                                               >> 5U)))) 
                                                       + 
                                                       (3U 
                                                        & ((1U 
                                                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimWayOH) 
                                                               >> 6U)) 
                                                           + 
                                                           (1U 
                                                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimWayOH) 
                                                               >> 7U))))))))))))))) {
        VL_WRITEF("[%0t] %%Error: Directory.sv:224: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.directory: Assertion failed\n    at Directory.scala:123 assert (!ren2 || PopCount(victimWayOH) === 1.U)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/Directory.sv", 224, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: Directory.sv:226: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_l2_wrapper.l2.inclusive_cache_bank_sched.directory\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/Directory.sv", 226, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1204(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1204\n"); );
    // Body
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_15__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_14__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_13__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_12__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_11__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_10__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_9__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_8__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_7__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_6__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_5__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT__ram_ext__DOT__Memory__v0 = 0U;
    vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__ram_ext__DOT__Memory__v0 = 0U;
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full)) 
                                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_opcode) 
                                    >> 2U))))))) {
        VL_WRITEF("[%0t] %%Error: TLFragmenter_3.sv:169: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_plic.fragmenter: Assertion failed\n    at Fragmenter.scala:311 assert (!repeater.io.full || !aHasData)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLFragmenter_3.sv", 169, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLFragmenter_3.sv:171: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_plic.fragmenter\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLFragmenter_3.sv", 171, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1205(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1205\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full)) 
                                 | (0xffU == (0xffU 
                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full)
                                                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__saved_mask)
                                                  : 
                                                 ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                   << 0x11U) 
                                                  | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                     >> 0xfU))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLFragmenter_3.sv:175: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_plic.fragmenter: Assertion failed\n    at Fragmenter.scala:314 assert (!repeater.io.full || in_a.bits.mask === fullMask)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLFragmenter_3.sv", 175, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLFragmenter_3.sv:177: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_plic.fragmenter\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLFragmenter_3.sv", 177, "");
        }
    }
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT__full)) 
                                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode) 
                                    >> 2U))))))) {
        VL_WRITEF("[%0t] %%Error: TLFragmenter_2.sv:177: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_l2_ctrl.fragmenter: Assertion failed\n    at Fragmenter.scala:311 assert (!repeater.io.full || !aHasData)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLFragmenter_2.sv", 177, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLFragmenter_2.sv:179: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_l2_ctrl.fragmenter\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLFragmenter_2.sv", 179, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1206(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1206\n"); );
    // Body
    if (VL_UNLIKELY((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
                           & (~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT__full)) 
                                 | (0xffU == (0xffU 
                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT__full)
                                                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__repeater__DOT__saved_mask)
                                                  : 
                                                 ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                   << 0x11U) 
                                                  | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                     >> 0xfU))))))))))) {
        VL_WRITEF("[%0t] %%Error: TLFragmenter_2.sv:183: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_l2_ctrl.fragmenter: Assertion failed\n    at Fragmenter.scala:314 assert (!repeater.io.full || in_a.bits.mask === fullMask)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLFragmenter_2.sv", 183, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLFragmenter_2.sv:185: Assertion failed in %NTestDriver.testHarness.chiptop0.system.subsystem_cbus.coupler_to_l2_ctrl.fragmenter\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLFragmenter_2.sv", 185, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_bits_size)) 
                             & (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_bits_source)) 
                                 | (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_bits_source))) 
                                | (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_bits_source)))) 
                            & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_bits_size))) 
                           & (8U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_bits_address 
                                     >> 0x1cU))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_48.sv:443: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain.buffer.monitor: Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at CrossingHelper.scala:61:80)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_48.sv", 443, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_48.sv:445: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_48.sv", 445, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1207(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1207\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_bits_source)) 
                             & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_bits_size))) 
                            & (0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_bits_size))) 
                           & ((((((((((0U == ((0x7fffcU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_bits_address 
                                                  >> 0xdU)) 
                                              | (3U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_bits_address 
                                                    >> 0xcU)))) 
                                      | (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_bits_address 
                                                >> 0xcU))) 
                                     | (1U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_bits_address 
                                               >> 0x10U))) 
                                    | (0U == ((0x7fff0U 
                                               & (0x80U 
                                                  ^ 
                                                  (0x7fff0U 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_bits_address 
                                                      >> 0xdU)))) 
                                              | (0xfU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_bits_address 
                                                    >> 0xcU))))) 
                                   | (0x200U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_bits_address 
                                                 >> 0x10U))) 
                                  | (0x2010U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_bits_address 
                                                 >> 0xcU))) 
                                 | (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_bits_address 
                                           >> 0x1aU))) 
                                | (0x54000U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_bits_address 
                                                >> 0xcU))) 
                               | (3U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_bits_address 
                                         >> 0x1dU))) 
                              | (8U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_bits_address 
                                        >> 0x1cU)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_48.sv:449: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain.buffer.monitor: Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at CrossingHelper.scala:61:80)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_48.sv", 449, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_48.sv:451: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_48.sv", 451, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1208(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1208\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_bits_source)) 
                           | ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_bits_source)) 
                              | (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_bits_source)))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_48.sv:455: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain.buffer.monitor: Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at CrossingHelper.scala:61:80)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_48.sv", 455, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_48.sv:457: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_48.sv", 457, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (2U >= (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_bits_size))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_48.sv:461: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain.buffer.monitor: Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at CrossingHelper.scala:61:80)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_48.sv", 461, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_48.sv:463: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_48.sv", 463, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1209(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1209\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0U != (0xfffU & ((~ ((IData)(0xfffU) 
                                             << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_bits_size))) 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_bits_address)))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_48.sv:467: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain.buffer.monitor: Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at CrossingHelper.scala:61:80)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_48.sv", 467, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_48.sv:469: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_48.sv", 469, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (2U < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_bits_param))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_48.sv:473: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain.buffer.monitor: Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at CrossingHelper.scala:61:80)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_48.sv", 473, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_48.sv:475: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_48.sv", 475, "");
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__1210(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__1210\n"); );
    // Body
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_valid) 
                       & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (0xffU != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_bits_mask))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_48.sv:479: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain.buffer.monitor: Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at CrossingHelper.scala:61:80)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_48.sv", 479, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_48.sv:481: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_48.sv", 481, "");
        }
    }
    if (VL_UNLIKELY(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_valid) 
                       & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_bits_opcode))) 
                      & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset))) 
                     & (~ ((((0xdU > (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_bits_size)) 
                             & (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_bits_source)) 
                                 | (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_bits_source))) 
                                | (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_bits_source)))) 
                            & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_bits_size))) 
                           & (8U == (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___tile_reset_domain_tile_auto_buffer_out_a_bits_address 
                                     >> 0x1cU))))))) {
        VL_WRITEF("[%0t] %%Error: TLMonitor_48.sv:485: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain.buffer.monitor: Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at CrossingHelper.scala:61:80)\n    at Monitor.scala:42 assert(cond, message)\n\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_48.sv", 485, "");
        if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->TestDriver__DOT__reset))))) {
            VL_WRITEF("[%0t] %%Error: TLMonitor_48.sv:487: Assertion failed in %NTestDriver.testHarness.chiptop0.system.tile_prci_domain.buffer.monitor\n",
                      64,VL_TIME_UNITED_Q(1000),-9,
                      vlSymsp->name());
            VL_STOP_MT("/home/tangf/Desktop/work/chisel/230822_1/chipyard/sims/verilator/generated-src/chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/TLMonitor_48.sv", 487, "");
        }
    }
}
