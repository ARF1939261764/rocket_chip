// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestDriver___024root.h"

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4517(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4517\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_s_0_state = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__counter = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__counter = 0U;
    } else {
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_55) 
             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_cam_sel_match_0))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_s_0_state 
                = ((1U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
                   << 1U);
        } else if ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___buffer_auto_in_a_ready) 
                     & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__beatsLeft)) 
                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__state_0))) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__winnerQual_0))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_s_0_state = 1U;
        } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___GEN_8) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_s_0_state = 3U;
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_358) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT__enq_ptr_value 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT__enq_ptr_value) 
                         - (IData)(1U)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT__do_deq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT__deq_ptr_value 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_c_q__DOT__deq_ptr_value) 
                         - (IData)(1U)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT___io_errors_bus_valid_T) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__counter 
                = (0x1ffU & ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__counter))
                              ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__counter1)
                              : ((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (0xfU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 5U))) 
                                         >> 3U))) : 0U)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT___io_errors_bus_valid_T) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__counter 
                = (0x1ffU & ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__counter))
                              ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__counter1)
                              : ((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (0xfU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 5U))) 
                                         >> 3U))) : 0U)));
        }
    }
}

extern const VlWide<32>/*1023:0*/ VTestDriver__ConstPool__CONST_h2ae7f32a_0;
extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_h00a443f1_0;
extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_h902eb634_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4518(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4518\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_h0d353ad8__0;
    VlWide<32>/*1023:0*/ __Vtemp_hc1d8e509__0;
    VlWide<32>/*1023:0*/ __Vtemp_hed49fe22__0;
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__counter = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__counter = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__beatsLeft = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT___io_errors_bus_valid_T) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__counter 
                = (0x1ffU & ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__counter))
                              ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__counter1)
                              : ((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (0xfU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 5U))) 
                                         >> 3U))) : 0U)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___io_errors_bus_valid_T) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__counter 
                = (0x1ffU & ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__counter))
                              ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__counter1)
                              : ((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (0xfU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 5U))) 
                                         >> 3U))) : 0U)));
        }
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__beatsLeft 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__latch)
                          ? (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__earlyWinner_0) 
                              & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_opcode) 
                                    >> 2U))) ? (~ (0xffffffU 
                                                   & (((IData)(0xfffU) 
                                                       << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_size)) 
                                                      >> 3U)))
                              : 0U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__beatsLeft) 
                                       - ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_in_a_ready) 
                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_valid)))));
    }
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp_hc1d8e509__0, VTestDriver__ConstPool__CONST_h2ae7f32a_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source));
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp_hed49fe22__0, VTestDriver__ConstPool__CONST_h2ae7f32a_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source));
    __Vtemp_h0d353ad8__0[1U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[1U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[1U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[1U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                            ? __Vtemp_hc1d8e509__0[1U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[1U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hed49fe22__0[1U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[1U])))));
    __Vtemp_h0d353ad8__0[2U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[2U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[2U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[2U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                            ? __Vtemp_hc1d8e509__0[2U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[2U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hed49fe22__0[2U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[2U])))));
    __Vtemp_h0d353ad8__0[3U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[3U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[3U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[3U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                            ? __Vtemp_hc1d8e509__0[3U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[3U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hed49fe22__0[3U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[3U])))));
    __Vtemp_h0d353ad8__0[4U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[4U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[4U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[4U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                            ? __Vtemp_hc1d8e509__0[4U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[4U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hed49fe22__0[4U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[4U])))));
    __Vtemp_h0d353ad8__0[5U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[5U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[5U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[5U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                            ? __Vtemp_hc1d8e509__0[5U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[5U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hed49fe22__0[5U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[5U])))));
    __Vtemp_h0d353ad8__0[6U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[6U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[6U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[6U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                            ? __Vtemp_hc1d8e509__0[6U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[6U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hed49fe22__0[6U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[6U])))));
    __Vtemp_h0d353ad8__0[7U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[7U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[7U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[7U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                            ? __Vtemp_hc1d8e509__0[7U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[7U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hed49fe22__0[7U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[7U])))));
    __Vtemp_h0d353ad8__0[8U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[8U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[8U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[8U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                            ? __Vtemp_hc1d8e509__0[8U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[8U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hed49fe22__0[8U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[8U])))));
    __Vtemp_h0d353ad8__0[9U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[9U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[9U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[9U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                            ? __Vtemp_hc1d8e509__0[9U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[9U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_hed49fe22__0[9U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[9U])))));
    __Vtemp_h0d353ad8__0[0xaU] = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xaU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h902eb634_0[0xaU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xaU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                              ? __Vtemp_hc1d8e509__0[0xaU]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[0xaU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                                                ? __Vtemp_hed49fe22__0[0xaU]
                                                : VTestDriver__ConstPool__CONST_h902eb634_0[0xaU])))));
    __Vtemp_h0d353ad8__0[0xbU] = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xbU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h902eb634_0[0xbU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xbU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                              ? __Vtemp_hc1d8e509__0[0xbU]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[0xbU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                                                ? __Vtemp_hed49fe22__0[0xbU]
                                                : VTestDriver__ConstPool__CONST_h902eb634_0[0xbU])))));
    __Vtemp_h0d353ad8__0[0xcU] = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xcU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h902eb634_0[0xcU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xcU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                              ? __Vtemp_hc1d8e509__0[0xcU]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[0xcU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                                                ? __Vtemp_hed49fe22__0[0xcU]
                                                : VTestDriver__ConstPool__CONST_h902eb634_0[0xcU])))));
    __Vtemp_h0d353ad8__0[0xdU] = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xdU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h902eb634_0[0xdU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xdU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                              ? __Vtemp_hc1d8e509__0[0xdU]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[0xdU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                                                ? __Vtemp_hed49fe22__0[0xdU]
                                                : VTestDriver__ConstPool__CONST_h902eb634_0[0xdU])))));
    __Vtemp_h0d353ad8__0[0xeU] = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xeU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h902eb634_0[0xeU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xeU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                              ? __Vtemp_hc1d8e509__0[0xeU]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[0xeU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                                                ? __Vtemp_hed49fe22__0[0xeU]
                                                : VTestDriver__ConstPool__CONST_h902eb634_0[0xeU])))));
    __Vtemp_h0d353ad8__0[0xfU] = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xfU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h902eb634_0[0xfU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xfU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                              ? __Vtemp_hc1d8e509__0[0xfU]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[0xfU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                                                ? __Vtemp_hed49fe22__0[0xfU]
                                                : VTestDriver__ConstPool__CONST_h902eb634_0[0xfU])))));
    __Vtemp_h0d353ad8__0[0x10U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[0x10U] 
                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                       ? VTestDriver__ConstPool__CONST_h902eb634_0[0x10U]
                                       : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0x10U] 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                               ? __Vtemp_hc1d8e509__0[0x10U]
                                               : VTestDriver__ConstPool__CONST_h902eb634_0[0x10U])) 
                                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_hed49fe22__0[0x10U]
                                                 : 
                                                VTestDriver__ConstPool__CONST_h902eb634_0[0x10U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                       ? __Vtemp_hc1d8e509__0[0U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[0U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613)
                         ? __Vtemp_hed49fe22__0[0U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[1U] 
        = __Vtemp_h0d353ad8__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[2U] 
        = __Vtemp_h0d353ad8__0[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[3U] 
        = __Vtemp_h0d353ad8__0[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[4U] 
        = __Vtemp_h0d353ad8__0[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[5U] 
        = __Vtemp_h0d353ad8__0[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[6U] 
        = __Vtemp_h0d353ad8__0[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[7U] 
        = __Vtemp_h0d353ad8__0[7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[8U] 
        = __Vtemp_h0d353ad8__0[8U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[9U] 
        = __Vtemp_h0d353ad8__0[9U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xaU] 
        = __Vtemp_h0d353ad8__0[0xaU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xbU] 
        = __Vtemp_h0d353ad8__0[0xbU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xcU] 
        = __Vtemp_h0d353ad8__0[0xcU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xdU] 
        = __Vtemp_h0d353ad8__0[0xdU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xeU] 
        = __Vtemp_h0d353ad8__0[0xeU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0xfU] 
        = __Vtemp_h0d353ad8__0[0xfU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight[0x10U] 
        = __Vtemp_h0d353ad8__0[0x10U];
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4519(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4519\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore2_valid = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_held = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore2_valid = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_held = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore2_valid = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_held = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore2_valid = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_held = 0U;
    } else {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore2_valid 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore2_valid) 
                & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__dataArb_io_in_0_valid))) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__advance_pstore1));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_held 
            = (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT___pstore1_held_T) 
                  & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_sc_fail))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_held)) 
                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore2_valid)) 
               & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__dataArb_io_in_0_valid)));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore2_valid 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore2_valid) 
                & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__dataArb_io_in_0_valid))) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__advance_pstore1));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_held 
            = (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT___pstore1_held_T) 
                  & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_sc_fail))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_held)) 
                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore2_valid)) 
               & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__dataArb_io_in_0_valid)));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore2_valid 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore2_valid) 
                & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__dataArb_io_in_0_valid))) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__advance_pstore1));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_held 
            = (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT___pstore1_held_T) 
                  & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_sc_fail))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_held)) 
                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore2_valid)) 
               & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__dataArb_io_in_0_valid)));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore2_valid 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore2_valid) 
                & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__dataArb_io_in_0_valid))) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__advance_pstore1));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_held 
            = (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___pstore1_held_T) 
                  & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_sc_fail))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_held)) 
                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore2_valid)) 
               & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__dataArb_io_in_0_valid)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4520(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4520\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__large_1 = 0ULL;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__large_1 = 0ULL;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__large_1 = 0ULL;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__large_1 = 0ULL;
    } else {
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) 
             & (0x7ffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___decoded_decoded_T_162)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__large_1 
                = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1 
                   >> 6U);
        } else if ((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__nextSmall_1) 
                             >> 6U) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mcountinhibit))))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__large_1 
                = (0x3ffffffffffffffULL & (1ULL + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__large_1));
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) 
             & (0x7ffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___decoded_decoded_T_162)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__large_1 
                = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1 
                   >> 6U);
        } else if ((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__nextSmall_1) 
                             >> 6U) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mcountinhibit))))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__large_1 
                = (0x3ffffffffffffffULL & (1ULL + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__large_1));
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) 
             & (0x7ffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___decoded_decoded_T_162)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__large_1 
                = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1 
                   >> 6U);
        } else if ((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__nextSmall_1) 
                             >> 6U) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mcountinhibit))))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__large_1 
                = (0x3ffffffffffffffULL & (1ULL + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__large_1));
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) 
             & (0x7ffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___decoded_decoded_T_162)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__large_1 
                = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1 
                   >> 6U);
        } else if ((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__nextSmall_1) 
                             >> 6U) & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mcountinhibit))))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__large_1 
                = (0x3ffffffffffffffULL & (1ULL + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__large_1));
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4521(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4521\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_custom_0 = 0x208ULL;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_custom_0 = 0x208ULL;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_custom_0 = 0x208ULL;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_custom_0 = 0x208ULL;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__used = 0ULL;
    } else {
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) 
             & (0x3fU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___decoded_decoded_T_160)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_custom_0 
                = ((0x208ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1) 
                   | (0xfffffffffffffdf7ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_custom_0));
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) 
             & (0x3fU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___decoded_decoded_T_160)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_custom_0 
                = ((0x208ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1) 
                   | (0xfffffffffffffdf7ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_custom_0));
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) 
             & (0x3fU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___decoded_decoded_T_160)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_custom_0 
                = ((0x208ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1) 
                   | (0xfffffffffffffdf7ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_custom_0));
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen) 
             & (0x3fU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___decoded_decoded_T_160)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_custom_0 
                = ((0x208ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___reg_bp_0_control_WIRE_1) 
                   | (0xfffffffffffffdf7ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_custom_0));
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__used 
            = (0x1ffffffffULL & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__used 
                                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__will_pop)
                                         ? (1ULL << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___head_ext_R0_data))
                                         : 0ULL))) 
                                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__data_MPORT_en)
                                     ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__freeOH
                                     : 0ULL)));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4522(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4522\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_ack_wait 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_168) 
              | (((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT___io_errors_bus_valid_T)) 
                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__grantIsCached)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__grantIsUncached)) 
                  | (6U != (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_ack_wait))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_ack_wait 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_168) 
              | (((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT___io_errors_bus_valid_T)) 
                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__grantIsCached)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__grantIsUncached)) 
                  | (6U != (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_ack_wait))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_ack_wait 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_168) 
              | (((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT___io_errors_bus_valid_T)) 
                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__grantIsCached)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__grantIsUncached)) 
                  | (6U != (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_ack_wait))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_ack_wait 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_168) 
              | (((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___io_errors_bus_valid_T)) 
                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__grantIsCached)) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__grantIsUncached)) 
                  | (6U != (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_ack_wait))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater__DOT__full 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_a_ready) 
                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_valid)) 
                  & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT____Vcellinp__repeater__io_repeat)))) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater__DOT___T_1) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__repeater__DOT__full))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4523(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4523\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT__deq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq__DOT__maybe_full = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT__do_deq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT__deq_ptr_value 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT__deq_ptr_value) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq__DOT__do_enq) 
             != ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fw_ready_reg) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq__DOT__maybe_full)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq__DOT__maybe_full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq__DOT__do_enq;
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__x1_a_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value) 
                         - (IData)(1U)));
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pte_cache_hit) 
             & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg 
                = ((0x40U & ((~ (IData)((0U != (0xfU 
                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__hits) 
                                                   >> 4U))))) 
                             << 6U)) | ((0x38U & ((
                                                   (0U 
                                                    != 
                                                    (0xfU 
                                                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__hits) 
                                                        >> 4U)))
                                                    ? 
                                                   ((4U 
                                                     & ((~ (IData)(
                                                                   (0U 
                                                                    != 
                                                                    (3U 
                                                                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_12) 
                                                                        >> 1U))))) 
                                                        << 2U)) 
                                                    | ((2U 
                                                        & (((0U 
                                                             != 
                                                             (3U 
                                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_12) 
                                                                 >> 1U)))
                                                             ? 
                                                            (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_45))
                                                             : 
                                                            ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg) 
                                                             >> 4U)) 
                                                           << 1U)) 
                                                       | (1U 
                                                          & ((0U 
                                                              != 
                                                              (3U 
                                                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_12) 
                                                                  >> 1U)))
                                                              ? 
                                                             ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg) 
                                                              >> 3U)
                                                              : 
                                                             (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_45))))))
                                                    : 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg) 
                                                    >> 3U)) 
                                                  << 3U)) 
                                        | (7U & ((0U 
                                                  != 
                                                  (0xfU 
                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__hits) 
                                                      >> 4U)))
                                                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg)
                                                  : 
                                                 ((4U 
                                                   & ((~ (IData)(
                                                                 (0U 
                                                                  != 
                                                                  (3U 
                                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_12) 
                                                                      >> 1U))))) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & (((0U 
                                                           != 
                                                           (3U 
                                                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_12) 
                                                               >> 1U)))
                                                           ? 
                                                          (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_45))
                                                           : 
                                                          ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg) 
                                                           >> 1U)) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & ((0U 
                                                            != 
                                                            (3U 
                                                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_12) 
                                                                >> 1U)))
                                                            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg)
                                                            : 
                                                           (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_45))))))))));
        } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_38) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg 
                = ((0x40U & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r) 
                                 >> 2U)) << 6U)) | 
                   ((0x38U & (((4U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))
                                ? ((4U & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r) 
                                              >> 1U)) 
                                          << 2U)) | 
                                   ((2U & (((2U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))
                                             ? (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))
                                             : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg) 
                                                >> 4U)) 
                                           << 1U)) 
                                    | (1U & ((2U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))
                                              ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg) 
                                                 >> 3U)
                                              : (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))))))
                                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg) 
                                   >> 3U)) << 3U)) 
                    | (7U & ((4U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))
                              ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg)
                              : ((4U & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r) 
                                            >> 1U)) 
                                        << 2U)) | (
                                                   (2U 
                                                    & (((2U 
                                                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))
                                                         ? 
                                                        (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))
                                                         : 
                                                        ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg) 
                                                         >> 1U)) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & ((2U 
                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))
                                                          ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg)
                                                          : 
                                                         (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))))))))));
        }
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0[0U] 
            = (0x10000U | ((0x7fe0U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_ext__DOT__Memory
                                       [0U][0U] >> 1U)) 
                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT___error_auto_in_d_bits_opcode)));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0[1U] = 0U;
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0[2U] 
            = (0x20000U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT___error_auto_in_d_bits_opcode) 
                           << 0x11U));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4524(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4524\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg = 0U;
    } else if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pte_cache_hit) 
                & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state)))) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg 
            = ((0x40U & ((~ (IData)((0U != (0xfU & 
                                            ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__hits) 
                                             >> 4U))))) 
                         << 6U)) | ((0x38U & (((0U 
                                                != 
                                                (0xfU 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__hits) 
                                                    >> 4U)))
                                                ? (
                                                   (4U 
                                                    & ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (3U 
                                                                    & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_12) 
                                                                       >> 1U))))) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((0U 
                                                            != 
                                                            (3U 
                                                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_12) 
                                                                >> 1U)))
                                                            ? 
                                                           (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_45))
                                                            : 
                                                           ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg) 
                                                            >> 4U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((0U 
                                                             != 
                                                             (3U 
                                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_12) 
                                                                 >> 1U)))
                                                             ? 
                                                            ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg) 
                                                             >> 3U)
                                                             : 
                                                            (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_45))))))
                                                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg) 
                                                   >> 3U)) 
                                              << 3U)) 
                                    | (7U & ((0U != 
                                              (0xfU 
                                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__hits) 
                                                  >> 4U)))
                                              ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg)
                                              : ((4U 
                                                  & ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (3U 
                                                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_12) 
                                                                     >> 1U))))) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & (((0U 
                                                          != 
                                                          (3U 
                                                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_12) 
                                                              >> 1U)))
                                                          ? 
                                                         (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_45))
                                                          : 
                                                         ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg) 
                                                          >> 1U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((0U 
                                                           != 
                                                           (3U 
                                                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_12) 
                                                               >> 1U)))
                                                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg)
                                                           : 
                                                          (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_45))))))))));
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_38) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg 
            = ((0x40U & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r) 
                             >> 2U)) << 6U)) | ((0x38U 
                                                 & (((4U 
                                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))
                                                      ? 
                                                     ((4U 
                                                       & ((~ 
                                                           ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r) 
                                                            >> 1U)) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (((2U 
                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))
                                                               ? 
                                                              (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))
                                                               : 
                                                              ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg) 
                                                               >> 4U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & ((2U 
                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))
                                                                ? 
                                                               ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg) 
                                                                >> 3U)
                                                                : 
                                                               (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))))))
                                                      : 
                                                     ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg) 
                                                      >> 3U)) 
                                                    << 3U)) 
                                                | (7U 
                                                   & ((4U 
                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))
                                                       ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg)
                                                       : 
                                                      ((4U 
                                                        & ((~ 
                                                            ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r) 
                                                             >> 1U)) 
                                                           << 2U)) 
                                                       | ((2U 
                                                           & (((2U 
                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))
                                                                ? 
                                                               (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))
                                                                : 
                                                               ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg) 
                                                                >> 1U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & ((2U 
                                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))
                                                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg)
                                                                 : 
                                                                (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))))))))));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4525(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4525\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg = 0U;
    } else if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pte_cache_hit) 
                & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state)))) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg 
            = ((0x40U & ((~ (IData)((0U != (0xfU & 
                                            ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__hits) 
                                             >> 4U))))) 
                         << 6U)) | ((0x38U & (((0U 
                                                != 
                                                (0xfU 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__hits) 
                                                    >> 4U)))
                                                ? (
                                                   (4U 
                                                    & ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (3U 
                                                                    & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_12) 
                                                                       >> 1U))))) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((0U 
                                                            != 
                                                            (3U 
                                                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_12) 
                                                                >> 1U)))
                                                            ? 
                                                           (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_45))
                                                            : 
                                                           ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg) 
                                                            >> 4U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((0U 
                                                             != 
                                                             (3U 
                                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_12) 
                                                                 >> 1U)))
                                                             ? 
                                                            ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg) 
                                                             >> 3U)
                                                             : 
                                                            (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_45))))))
                                                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg) 
                                                   >> 3U)) 
                                              << 3U)) 
                                    | (7U & ((0U != 
                                              (0xfU 
                                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__hits) 
                                                  >> 4U)))
                                              ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg)
                                              : ((4U 
                                                  & ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (3U 
                                                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_12) 
                                                                     >> 1U))))) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & (((0U 
                                                          != 
                                                          (3U 
                                                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_12) 
                                                              >> 1U)))
                                                          ? 
                                                         (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_45))
                                                          : 
                                                         ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg) 
                                                          >> 1U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((0U 
                                                           != 
                                                           (3U 
                                                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_12) 
                                                               >> 1U)))
                                                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg)
                                                           : 
                                                          (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_45))))))))));
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_38) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg 
            = ((0x40U & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r) 
                             >> 2U)) << 6U)) | ((0x38U 
                                                 & (((4U 
                                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))
                                                      ? 
                                                     ((4U 
                                                       & ((~ 
                                                           ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r) 
                                                            >> 1U)) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (((2U 
                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))
                                                               ? 
                                                              (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))
                                                               : 
                                                              ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg) 
                                                               >> 4U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & ((2U 
                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))
                                                                ? 
                                                               ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg) 
                                                                >> 3U)
                                                                : 
                                                               (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))))))
                                                      : 
                                                     ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg) 
                                                      >> 3U)) 
                                                    << 3U)) 
                                                | (7U 
                                                   & ((4U 
                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))
                                                       ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg)
                                                       : 
                                                      ((4U 
                                                        & ((~ 
                                                            ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r) 
                                                             >> 1U)) 
                                                           << 2U)) 
                                                       | ((2U 
                                                           & (((2U 
                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))
                                                                ? 
                                                               (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))
                                                                : 
                                                               ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg) 
                                                                >> 1U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & ((2U 
                                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))
                                                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg)
                                                                 : 
                                                                (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))))))))));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4526(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4526\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg = 0U;
    } else if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pte_cache_hit) 
                & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state)))) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg 
            = ((0x40U & ((~ (IData)((0U != (0xfU & 
                                            ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__hits) 
                                             >> 4U))))) 
                         << 6U)) | ((0x38U & (((0U 
                                                != 
                                                (0xfU 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__hits) 
                                                    >> 4U)))
                                                ? (
                                                   (4U 
                                                    & ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (3U 
                                                                    & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_12) 
                                                                       >> 1U))))) 
                                                       << 2U)) 
                                                   | ((2U 
                                                       & (((0U 
                                                            != 
                                                            (3U 
                                                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_12) 
                                                                >> 1U)))
                                                            ? 
                                                           (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_45))
                                                            : 
                                                           ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg) 
                                                            >> 4U)) 
                                                          << 1U)) 
                                                      | (1U 
                                                         & ((0U 
                                                             != 
                                                             (3U 
                                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_12) 
                                                                 >> 1U)))
                                                             ? 
                                                            ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg) 
                                                             >> 3U)
                                                             : 
                                                            (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_45))))))
                                                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg) 
                                                   >> 3U)) 
                                              << 3U)) 
                                    | (7U & ((0U != 
                                              (0xfU 
                                               & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__hits) 
                                                  >> 4U)))
                                              ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg)
                                              : ((4U 
                                                  & ((~ (IData)(
                                                                (0U 
                                                                 != 
                                                                 (3U 
                                                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_12) 
                                                                     >> 1U))))) 
                                                     << 2U)) 
                                                 | ((2U 
                                                     & (((0U 
                                                          != 
                                                          (3U 
                                                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_12) 
                                                              >> 1U)))
                                                          ? 
                                                         (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_45))
                                                          : 
                                                         ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg) 
                                                          >> 1U)) 
                                                        << 1U)) 
                                                    | (1U 
                                                       & ((0U 
                                                           != 
                                                           (3U 
                                                            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_12) 
                                                               >> 1U)))
                                                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg)
                                                           : 
                                                          (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_45))))))))));
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_38) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg 
            = ((0x40U & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r) 
                             >> 2U)) << 6U)) | ((0x38U 
                                                 & (((4U 
                                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))
                                                      ? 
                                                     ((4U 
                                                       & ((~ 
                                                           ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r) 
                                                            >> 1U)) 
                                                          << 2U)) 
                                                      | ((2U 
                                                          & (((2U 
                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))
                                                               ? 
                                                              (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))
                                                               : 
                                                              ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg) 
                                                               >> 4U)) 
                                                             << 1U)) 
                                                         | (1U 
                                                            & ((2U 
                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))
                                                                ? 
                                                               ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg) 
                                                                >> 3U)
                                                                : 
                                                               (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))))))
                                                      : 
                                                     ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg) 
                                                      >> 3U)) 
                                                    << 3U)) 
                                                | (7U 
                                                   & ((4U 
                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))
                                                       ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg)
                                                       : 
                                                      ((4U 
                                                        & ((~ 
                                                            ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r) 
                                                             >> 1U)) 
                                                           << 2U)) 
                                                       | ((2U 
                                                           & (((2U 
                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))
                                                                ? 
                                                               (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))
                                                                : 
                                                               ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg) 
                                                                >> 1U)) 
                                                              << 1U)) 
                                                          | (1U 
                                                             & ((2U 
                                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))
                                                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state_reg)
                                                                 : 
                                                                (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r))))))))));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4527(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4527\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__maybe_full = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__maybe_full = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__maybe_full = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__maybe_full = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT__maybe_full = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__do_enq) 
             != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_deq_ready_T) 
                  & (9U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_id_reg))) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__maybe_full)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__maybe_full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__do_enq;
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__do_enq) 
             != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_deq_ready_T) 
                  & (8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_id_reg))) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__maybe_full)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__maybe_full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__do_enq;
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__do_enq) 
             != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_deq_ready_T) 
                  & (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_id_reg))) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__maybe_full)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__maybe_full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__do_enq;
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__do_enq) 
             != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_deq_ready_T) 
                  & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_id_reg))) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__maybe_full)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__maybe_full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__do_enq;
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT__do_enq) 
             != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_deq_ready_T) 
                  & (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_id_reg))) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT__maybe_full)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT__maybe_full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT__do_enq;
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT__do_enq) 
             != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_deq_ready_T) 
                  & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_id_reg))) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT__maybe_full)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT__maybe_full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT__do_enq;
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4528(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4528\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT__maybe_full = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT__maybe_full = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT__maybe_full = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT__maybe_full = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_15__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_14__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_13__DOT__enq_ptr_value = 0U;
    } else {
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT__do_enq) 
             != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_deq_ready_T) 
                  & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_id_reg))) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT__maybe_full)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT__maybe_full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT__do_enq;
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT__do_enq) 
             != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_deq_ready_T) 
                  & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_id_reg))) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT__maybe_full)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT__maybe_full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT__do_enq;
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT__do_enq) 
             != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_deq_ready_T) 
                  & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_id_reg))) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT__maybe_full)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT__maybe_full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT__do_enq;
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT__do_enq) 
             != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT___wqueues_15_deq_ready_T) 
                  & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_id_reg))) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT__maybe_full)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT__maybe_full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT__do_enq;
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_15__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_15__DOT__enq_ptr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_15__DOT__enq_ptr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_14__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_14__DOT__enq_ptr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_14__DOT__enq_ptr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_13__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_13__DOT__enq_ptr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_13__DOT__enq_ptr_value)));
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4529(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4529\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_12__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_11__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_10__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_9__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_8__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_7__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_6__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_5__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__enq_ptr_value = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_12__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_12__DOT__enq_ptr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_12__DOT__enq_ptr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_11__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_11__DOT__enq_ptr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_11__DOT__enq_ptr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_10__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_10__DOT__enq_ptr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_10__DOT__enq_ptr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_9__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_9__DOT__enq_ptr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_9__DOT__enq_ptr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_8__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_8__DOT__enq_ptr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_8__DOT__enq_ptr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_7__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_7__DOT__enq_ptr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_7__DOT__enq_ptr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_6__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_6__DOT__enq_ptr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_6__DOT__enq_ptr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_5__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_5__DOT__enq_ptr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_5__DOT__enq_ptr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__enq_ptr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__enq_ptr_value)));
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4530(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4530\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__enq_ptr_value = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT__enq_ptr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT__enq_ptr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT__enq_ptr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT__enq_ptr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT__enq_ptr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT__enq_ptr_value)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__enq_ptr_value 
                = (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__enq_ptr_value)));
        }
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__b_delay 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_valid_reg) 
            & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__simdram__DOT_____05Fb_ready)))
            ? (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__b_delay)))
            : 0U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_correctable_errors_r_3 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_meta_clk_en)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_correctable_errors_r_3));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_correctable_errors_r_3 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_meta_clk_en)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_correctable_errors_r_3));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_correctable_errors_r_3 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_meta_clk_en)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_correctable_errors_r_3));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_correctable_errors_r_3 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_meta_clk_en)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_correctable_errors_r_3));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_correctable_errors_r 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_meta_clk_en)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_correctable_errors_r));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_correctable_errors_r_2 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_meta_clk_en)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_correctable_errors_r_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_correctable_errors_r_1 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_meta_clk_en)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_correctable_errors_r_1));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4531(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4531\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_correctable_errors_r 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_meta_clk_en)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_correctable_errors_r));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_correctable_errors_r_2 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_meta_clk_en)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_correctable_errors_r_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_correctable_errors_r_1 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_meta_clk_en)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_correctable_errors_r_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_correctable_errors_r 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_meta_clk_en)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_correctable_errors_r));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_correctable_errors_r_2 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_meta_clk_en)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_correctable_errors_r_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_correctable_errors_r_1 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_meta_clk_en)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_correctable_errors_r_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_correctable_errors_r 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_meta_clk_en)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_correctable_errors_r));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_correctable_errors_r_2 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_meta_clk_en)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_correctable_errors_r_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_correctable_errors_r_1 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_meta_clk_en)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_correctable_errors_r_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_uncorrectable_errors_r_3 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_meta_clk_en)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_uncorrectable_errors_r_3));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_uncorrectable_errors_r_2 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_meta_clk_en)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_uncorrectable_errors_r_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_uncorrectable_errors_r_1 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_meta_clk_en)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_uncorrectable_errors_r_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_uncorrectable_errors_r 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_meta_clk_en)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_uncorrectable_errors_r));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_uncorrectable_errors_r_3 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_meta_clk_en)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_uncorrectable_errors_r_3));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_uncorrectable_errors_r_2 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_meta_clk_en)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_uncorrectable_errors_r_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_uncorrectable_errors_r_1 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_meta_clk_en)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_uncorrectable_errors_r_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_uncorrectable_errors_r 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_meta_clk_en)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_uncorrectable_errors_r));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4532(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4532\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_uncorrectable_errors_r_3 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_meta_clk_en)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_uncorrectable_errors_r_3));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_uncorrectable_errors_r_2 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_meta_clk_en)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_uncorrectable_errors_r_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_uncorrectable_errors_r_1 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_meta_clk_en)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_uncorrectable_errors_r_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_uncorrectable_errors_r 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_meta_clk_en)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_uncorrectable_errors_r));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_uncorrectable_errors_r_3 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_meta_clk_en)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_uncorrectable_errors_r_3));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_uncorrectable_errors_r_2 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_meta_clk_en)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_uncorrectable_errors_r_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_uncorrectable_errors_r_1 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_meta_clk_en)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_uncorrectable_errors_r_1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_uncorrectable_errors_r 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_meta_clk_en)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_uncorrectable_errors_r));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value) 
                         - (IData)(1U)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value) 
                         - (IData)(1U)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__do_deq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value) 
                         - (IData)(1U)));
        }
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__uncachedInFlight_0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT___io_errors_bus_valid_T)) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__grantIsCached)) 
               | (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__grantIsUncached) 
                     & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                         >> 9U) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__d_last))))) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_167) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__uncachedInFlight_0))));
}

extern const VlWide<257>/*8223:0*/ VTestDriver__ConstPool__CONST_h42ac30fb_0;
extern const VlWide<66>/*2111:0*/ VTestDriver__ConstPool__CONST_h9636f37d_0;
extern const VlWide<257>/*8223:0*/ VTestDriver__ConstPool__CONST_ha3e17051_0;
extern const VlWide<257>/*8223:0*/ VTestDriver__ConstPool__CONST_h42b3b0f7_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4533(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4533\n"); );
    // Init
    VlWide<66>/*2111:0*/ __Vtemp_h3d4c949a__0;
    VlWide<257>/*8223:0*/ __Vtemp_h04f2a543__0;
    VlWide<257>/*8223:0*/ __Vtemp_h3fddb314__0;
    VlWide<257>/*8223:0*/ __Vtemp_h6efa866a__0;
    VlWide<66>/*2111:0*/ __Vtemp_h228e2956__0;
    VlWide<66>/*2111:0*/ __Vtemp_h267e6efd__0;
    VlWide<66>/*2111:0*/ __Vtemp_h535fc404__0;
    VlWide<257>/*8223:0*/ __Vtemp_h0d08b5cc__0;
    VlWide<257>/*8223:0*/ __Vtemp_ha56b2eb6__0;
    VlWide<66>/*2111:0*/ __Vtemp_h2bc8c80a__0;
    VlWide<66>/*2111:0*/ __Vtemp_h1db3aa3e__0;
    VlWide<66>/*2111:0*/ __Vtemp_h94b07e91__0;
    VlWide<66>/*2111:0*/ __Vtemp_h3787723c__0;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__uncachedInFlight_0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT___io_errors_bus_valid_T)) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__grantIsCached)) 
               | (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__grantIsUncached) 
                     & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                         >> 9U) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__d_last))))) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_167) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__uncachedInFlight_0))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__uncachedInFlight_0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT___io_errors_bus_valid_T)) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__grantIsCached)) 
               | (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__grantIsUncached) 
                     & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                         >> 9U) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__d_last))))) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_167) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__uncachedInFlight_0))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__uncachedInFlight_0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___io_errors_bus_valid_T)) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__grantIsCached)) 
               | (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__grantIsUncached) 
                     & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                         >> 9U) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__d_last))))) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_167) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__uncachedInFlight_0))));
    VL_EXTEND_WI(8194,3, __Vtemp_h04f2a543__0, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT___T_598)
                                                 ? 
                                                (1U 
                                                 | (6U 
                                                    & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag) 
                                                       << 1U)))
                                                 : 0U));
    VL_SHIFTL_WWI(8194,8194,12, __Vtemp_h3fddb314__0, __Vtemp_h04f2a543__0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_h6efa866a__0, VTestDriver__ConstPool__CONST_h42ac30fb_0, __Vtemp_h3fddb314__0);
    VL_SEL_WWII(2112,8194, __Vtemp_h228e2956__0, __Vtemp_h6efa866a__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_h267e6efd__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT___T_598), __Vtemp_h228e2956__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_OR_W(66, __Vtemp_h535fc404__0, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_sizes, __Vtemp_h267e6efd__0);
    VL_SHIFTL_WWI(8207,8207,12, __Vtemp_h0d08b5cc__0, VTestDriver__ConstPool__CONST_ha3e17051_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_ha56b2eb6__0, VTestDriver__ConstPool__CONST_h42b3b0f7_0, __Vtemp_h0d08b5cc__0);
    VL_SEL_WWII(2112,8207, __Vtemp_h2bc8c80a__0, __Vtemp_ha56b2eb6__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_h1db3aa3e__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT___T_613), __Vtemp_h2bc8c80a__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_NOT_W(66, __Vtemp_h94b07e91__0, __Vtemp_h1db3aa3e__0);
    VL_AND_W(66, __Vtemp_h3787723c__0, __Vtemp_h535fc404__0, __Vtemp_h94b07e91__0);
    VL_COND_WIWW(2112, __Vtemp_h3d4c949a__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset), VTestDriver__ConstPool__CONST_h9636f37d_0, __Vtemp_h3787723c__0);
    VL_ASSIGN_W(2112,vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_sizes, __Vtemp_h3d4c949a__0);
}

extern const VlWide<257>/*8223:0*/ VTestDriver__ConstPool__CONST_h42ac30ff_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4534(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4534\n"); );
    // Init
    VlWide<66>/*2111:0*/ __Vtemp_ha15ae84d__0;
    VlWide<257>/*8223:0*/ __Vtemp_h8c27d5ed__0;
    VlWide<257>/*8223:0*/ __Vtemp_h5092ee18__0;
    VlWide<257>/*8223:0*/ __Vtemp_h821d9277__0;
    VlWide<66>/*2111:0*/ __Vtemp_h8a99a85a__0;
    VlWide<66>/*2111:0*/ __Vtemp_hb3708fe9__0;
    VlWide<66>/*2111:0*/ __Vtemp_hdb1f8446__0;
    VlWide<257>/*8223:0*/ __Vtemp_h0d08b5cc__0;
    VlWide<257>/*8223:0*/ __Vtemp_ha56b2eb6__0;
    VlWide<66>/*2111:0*/ __Vtemp_h2bc8c80a__0;
    VlWide<66>/*2111:0*/ __Vtemp_h3e691d18__0;
    VlWide<66>/*2111:0*/ __Vtemp_h3b81c762__0;
    VlWide<66>/*2111:0*/ __Vtemp_ha01416b3__0;
    VlWide<66>/*2111:0*/ __Vtemp_h28f80925__0;
    VlWide<257>/*8223:0*/ __Vtemp_h476e06e8__0;
    VlWide<257>/*8223:0*/ __Vtemp_h7aa0f04f__0;
    VlWide<257>/*8223:0*/ __Vtemp_h3415a312__0;
    VlWide<66>/*2111:0*/ __Vtemp_habebb589__0;
    VlWide<66>/*2111:0*/ __Vtemp_hae5716fe__0;
    VlWide<66>/*2111:0*/ __Vtemp_ha8c52aac__0;
    VlWide<257>/*8223:0*/ __Vtemp_h0d08b5cc__1;
    VlWide<257>/*8223:0*/ __Vtemp_h62caa49f__0;
    VlWide<66>/*2111:0*/ __Vtemp_ha102d6a7__0;
    VlWide<66>/*2111:0*/ __Vtemp_hb3bbf9b1__0;
    VlWide<66>/*2111:0*/ __Vtemp_h182dd830__0;
    VlWide<66>/*2111:0*/ __Vtemp_h0d5c2b5d__0;
    VlWide<66>/*2111:0*/ __Vtemp_h3d3b520f__0;
    VlWide<257>/*8223:0*/ __Vtemp_h9146fe42__0;
    VlWide<257>/*8223:0*/ __Vtemp_hbb1397fa__0;
    VlWide<257>/*8223:0*/ __Vtemp_h9fa404e0__0;
    VlWide<66>/*2111:0*/ __Vtemp_ha506467e__0;
    VlWide<66>/*2111:0*/ __Vtemp_h9a8320f2__0;
    VlWide<66>/*2111:0*/ __Vtemp_h24c7a4a0__0;
    VlWide<257>/*8223:0*/ __Vtemp_h0d08b5cc__2;
    VlWide<257>/*8223:0*/ __Vtemp_h644aadac__0;
    VlWide<66>/*2111:0*/ __Vtemp_h9ec3b7ac__0;
    VlWide<66>/*2111:0*/ __Vtemp_hde2dd480__0;
    VlWide<66>/*2111:0*/ __Vtemp_h56c50fec__0;
    VlWide<66>/*2111:0*/ __Vtemp_hde745f9f__0;
    // Body
    VL_EXTEND_WI(8194,3, __Vtemp_h8c27d5ed__0, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT___T_598)
                                                 ? 
                                                (1U 
                                                 | (6U 
                                                    & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag) 
                                                       << 1U)))
                                                 : 0U));
    VL_SHIFTL_WWI(8194,8194,12, __Vtemp_h5092ee18__0, __Vtemp_h8c27d5ed__0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_h821d9277__0, VTestDriver__ConstPool__CONST_h42ac30fb_0, __Vtemp_h5092ee18__0);
    VL_SEL_WWII(2112,8194, __Vtemp_h8a99a85a__0, __Vtemp_h821d9277__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_hb3708fe9__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT___T_598), __Vtemp_h8a99a85a__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_OR_W(66, __Vtemp_hdb1f8446__0, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight_sizes, __Vtemp_hb3708fe9__0);
    VL_SHIFTL_WWI(8207,8207,12, __Vtemp_h0d08b5cc__0, VTestDriver__ConstPool__CONST_ha3e17051_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_ha56b2eb6__0, VTestDriver__ConstPool__CONST_h42b3b0f7_0, __Vtemp_h0d08b5cc__0);
    VL_SEL_WWII(2112,8207, __Vtemp_h2bc8c80a__0, __Vtemp_ha56b2eb6__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_h3e691d18__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT___T_613), __Vtemp_h2bc8c80a__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_NOT_W(66, __Vtemp_h3b81c762__0, __Vtemp_h3e691d18__0);
    VL_AND_W(66, __Vtemp_ha01416b3__0, __Vtemp_hdb1f8446__0, __Vtemp_h3b81c762__0);
    VL_COND_WIWW(2112, __Vtemp_ha15ae84d__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset), VTestDriver__ConstPool__CONST_h9636f37d_0, __Vtemp_ha01416b3__0);
    VL_ASSIGN_W(2112,vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight_sizes, __Vtemp_ha15ae84d__0);
    VL_EXTEND_WI(8195,4, __Vtemp_h476e06e8__0, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT___T_598)
                                                 ? 
                                                (1U 
                                                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode) 
                                                    << 1U))
                                                 : 0U));
    VL_SHIFTL_WWI(8195,8195,12, __Vtemp_h7aa0f04f__0, __Vtemp_h476e06e8__0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_h3415a312__0, VTestDriver__ConstPool__CONST_h42ac30ff_0, __Vtemp_h7aa0f04f__0);
    VL_SEL_WWII(2112,8195, __Vtemp_habebb589__0, __Vtemp_h3415a312__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_hae5716fe__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT___T_598), __Vtemp_habebb589__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_OR_W(66, __Vtemp_ha8c52aac__0, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_opcodes, __Vtemp_hae5716fe__0);
    VL_SHIFTL_WWI(8207,8207,12, __Vtemp_h0d08b5cc__1, VTestDriver__ConstPool__CONST_ha3e17051_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_h62caa49f__0, VTestDriver__ConstPool__CONST_h42b3b0f7_0, __Vtemp_h0d08b5cc__1);
    VL_SEL_WWII(2112,8207, __Vtemp_ha102d6a7__0, __Vtemp_h62caa49f__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_hb3bbf9b1__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT___T_613), __Vtemp_ha102d6a7__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_NOT_W(66, __Vtemp_h182dd830__0, __Vtemp_hb3bbf9b1__0);
    VL_AND_W(66, __Vtemp_h0d5c2b5d__0, __Vtemp_ha8c52aac__0, __Vtemp_h182dd830__0);
    VL_COND_WIWW(2112, __Vtemp_h28f80925__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset), VTestDriver__ConstPool__CONST_h9636f37d_0, __Vtemp_h0d5c2b5d__0);
    VL_ASSIGN_W(2112,vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_opcodes, __Vtemp_h28f80925__0);
    VL_EXTEND_WI(8195,4, __Vtemp_h9146fe42__0, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT___T_598)
                                                 ? 
                                                (1U 
                                                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode) 
                                                    << 1U))
                                                 : 0U));
    VL_SHIFTL_WWI(8195,8195,12, __Vtemp_hbb1397fa__0, __Vtemp_h9146fe42__0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_h9fa404e0__0, VTestDriver__ConstPool__CONST_h42ac30ff_0, __Vtemp_hbb1397fa__0);
    VL_SEL_WWII(2112,8195, __Vtemp_ha506467e__0, __Vtemp_h9fa404e0__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_h9a8320f2__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT___T_598), __Vtemp_ha506467e__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_OR_W(66, __Vtemp_h24c7a4a0__0, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight_opcodes, __Vtemp_h9a8320f2__0);
    VL_SHIFTL_WWI(8207,8207,12, __Vtemp_h0d08b5cc__2, VTestDriver__ConstPool__CONST_ha3e17051_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_h644aadac__0, VTestDriver__ConstPool__CONST_h42b3b0f7_0, __Vtemp_h0d08b5cc__2);
    VL_SEL_WWII(2112,8207, __Vtemp_h9ec3b7ac__0, __Vtemp_h644aadac__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_hde2dd480__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT___T_613), __Vtemp_h9ec3b7ac__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_NOT_W(66, __Vtemp_h56c50fec__0, __Vtemp_hde2dd480__0);
    VL_AND_W(66, __Vtemp_hde745f9f__0, __Vtemp_h24c7a4a0__0, __Vtemp_h56c50fec__0);
    VL_COND_WIWW(2112, __Vtemp_h3d3b520f__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset), VTestDriver__ConstPool__CONST_h9636f37d_0, __Vtemp_hde745f9f__0);
    VL_ASSIGN_W(2112,vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight_opcodes, __Vtemp_h3d3b520f__0);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4535(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4535\n"); );
    // Body
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_ae_ptw 
        = ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state))
            ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_141)) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_ae_ptw))
            : ((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_16)) 
                 & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state))) 
                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_0_s2_xcpt_ae_ld)) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_ae_ptw)));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_ae_ptw 
        = ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state))
            ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_141)) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_ae_ptw))
            : ((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_16)) 
                 & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state))) 
                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_0_s2_xcpt_ae_ld)) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_ae_ptw)));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_ae_ptw 
        = ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state))
            ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_141)) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_ae_ptw))
            : ((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_16)) 
                 & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state))) 
                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_0_s2_xcpt_ae_ld)) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_ae_ptw)));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_ae_ptw 
        = ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state))
            ? ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_141)) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_ae_ptw))
            : ((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_16)) 
                 & (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state))) 
                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_0_s2_xcpt_ae_ld)) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_ae_ptw)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__state 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
            ? 0U : ((0x17U >= (0x1fU & ((IData)(3U) 
                                        * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__state))))
                     ? (7U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___GEN_0 
                              >> (0x1fU & ((IData)(3U) 
                                           * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__state)))))
                     : 0U));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4536(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4536\n"); );
    // Init
    VlWide<66>/*2111:0*/ __Vtemp_h3775298f__0;
    VlWide<257>/*8223:0*/ __Vtemp_h8da429d0__0;
    VlWide<257>/*8223:0*/ __Vtemp_ha3b84cd2__0;
    VlWide<257>/*8223:0*/ __Vtemp_h3a55d04b__0;
    VlWide<66>/*2111:0*/ __Vtemp_h66d1e0a0__0;
    VlWide<66>/*2111:0*/ __Vtemp_hb5d149b8__0;
    VlWide<66>/*2111:0*/ __Vtemp_h0c1fb053__0;
    VlWide<257>/*8223:0*/ __Vtemp_h9c399a11__0;
    VlWide<257>/*8223:0*/ __Vtemp_h12c56bae__0;
    VlWide<66>/*2111:0*/ __Vtemp_hf06d43e8__0;
    VlWide<66>/*2111:0*/ __Vtemp_h270ca912__0;
    VlWide<66>/*2111:0*/ __Vtemp_h750792ed__0;
    VlWide<66>/*2111:0*/ __Vtemp_h6e8f293b__0;
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0[0U] 
            = (((IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_replace)
                          ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data
                          : (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U])) 
                              << 0x30U) | (((QData)((IData)(
                                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U])) 
                                            << 0x10U) 
                                           | ((QData)((IData)(
                                                              vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
                                              >> 0x10U))))) 
                << 0x10U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_in_d_bits_denied) 
                              << 0xfU) | ((0x7ff8U 
                                           & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]) 
                                          | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_in_d_bits_opcode))));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0[1U] 
            = (((IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_replace)
                          ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data
                          : (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U])) 
                              << 0x30U) | (((QData)((IData)(
                                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U])) 
                                            << 0x10U) 
                                           | ((QData)((IData)(
                                                              vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
                                              >> 0x10U))))) 
                >> 0x10U) | ((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_replace)
                                        ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data
                                        : (((QData)((IData)(
                                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U])) 
                                            << 0x30U) 
                                           | (((QData)((IData)(
                                                               vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U])) 
                                               << 0x10U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
                                                 >> 0x10U)))) 
                                      >> 0x20U)) << 0x10U));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0[2U] 
            = ((0x10000U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_replace)
                              ? ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                  >> 0xfU) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_corrupt))
                              : (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                                 >> 0x10U)) << 0x10U)) 
               | ((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_replace)
                             ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data
                             : (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U])) 
                                 << 0x30U) | (((QData)((IData)(
                                                               vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U])) 
                                               << 0x10U) 
                                              | ((QData)((IData)(
                                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
                                                 >> 0x10U)))) 
                           >> 0x20U)) >> 0x10U));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__enq_ptr_value;
    }
    VL_EXTEND_WI(8194,3, __Vtemp_h8da429d0__0, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__a_first_done)
                                                 ? 
                                                (1U 
                                                 | (6U 
                                                    & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag) 
                                                       << 1U)))
                                                 : 0U));
    VL_SHIFTL_WWI(8194,8194,12, __Vtemp_ha3b84cd2__0, __Vtemp_h8da429d0__0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_h3a55d04b__0, VTestDriver__ConstPool__CONST_h42ac30fb_0, __Vtemp_ha3b84cd2__0);
    VL_SEL_WWII(2112,8194, __Vtemp_h66d1e0a0__0, __Vtemp_h3a55d04b__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_hb5d149b8__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__a_first_done), __Vtemp_h66d1e0a0__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_OR_W(66, __Vtemp_h0c1fb053__0, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight_sizes, __Vtemp_hb5d149b8__0);
    VL_SHIFTL_WWI(8207,8207,12, __Vtemp_h9c399a11__0, VTestDriver__ConstPool__CONST_ha3e17051_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_h12c56bae__0, VTestDriver__ConstPool__CONST_h42b3b0f7_0, __Vtemp_h9c399a11__0);
    VL_SEL_WWII(2112,8207, __Vtemp_hf06d43e8__0, __Vtemp_h12c56bae__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_h270ca912__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613), __Vtemp_hf06d43e8__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_NOT_W(66, __Vtemp_h750792ed__0, __Vtemp_h270ca912__0);
    VL_AND_W(66, __Vtemp_h6e8f293b__0, __Vtemp_h0c1fb053__0, __Vtemp_h750792ed__0);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        VL_ASSIGN_W(2112,__Vtemp_h3775298f__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__history = 0U;
    } else {
        VL_ASSIGN_W(2112,__Vtemp_h3775298f__0, __Vtemp_h6e8f293b__0);
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT___core_io_imem_bht_update_valid) 
             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT___core_io_imem_bht_update_bits_mispredict))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__history 
                = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_branch)
                    ? (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_br_taken) 
                        << 7U) | (0x7fU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_btb_resp_bht_history) 
                                           >> 1U)))
                    : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_btb_resp_bht_history));
        } else if ((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_taken)) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT____VdfgTmp_h9a7e64e2__0))
                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT____VdfgTmp_hcaca3398__0)
                     : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT____VdfgTmp_hac808597__0) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT____VdfgTmp_hcaca3398__0)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__history 
                = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_btb_resp_bits_bht_value) 
                    << 7U) | (0x7fU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__history) 
                                       >> 1U)));
        }
    }
    VL_ASSIGN_W(2112,vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight_sizes, __Vtemp_h3775298f__0);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4537(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4537\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__history = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__history = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__history = 0U;
    } else {
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___core_io_imem_bht_update_valid) 
             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___core_io_imem_bht_update_bits_mispredict))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__history 
                = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_branch)
                    ? (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_br_taken) 
                        << 7U) | (0x7fU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_btb_resp_bht_history) 
                                           >> 1U)))
                    : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_btb_resp_bht_history));
        } else if ((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_taken)) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT____VdfgTmp_h9a7e64e2__0))
                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT____VdfgTmp_hcaca3398__0)
                     : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT____VdfgTmp_hac808597__0) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT____VdfgTmp_hcaca3398__0)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__history 
                = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_btb_resp_bits_bht_value) 
                    << 7U) | (0x7fU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__history) 
                                       >> 1U)));
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___core_io_imem_bht_update_valid) 
             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___core_io_imem_bht_update_bits_mispredict))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__history 
                = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_branch)
                    ? (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_br_taken) 
                        << 7U) | (0x7fU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_btb_resp_bht_history) 
                                           >> 1U)))
                    : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_btb_resp_bht_history));
        } else if ((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_taken)) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT____VdfgTmp_h9a7e64e2__0))
                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT____VdfgTmp_hcaca3398__0)
                     : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT____VdfgTmp_hac808597__0) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT____VdfgTmp_hcaca3398__0)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__history 
                = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_btb_resp_bits_bht_value) 
                    << 7U) | (0x7fU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__history) 
                                       >> 1U)));
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___core_io_imem_bht_update_valid) 
             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___core_io_imem_bht_update_bits_mispredict))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__history 
                = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_branch)
                    ? (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_br_taken) 
                        << 7U) | (0x7fU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_btb_resp_bht_history) 
                                           >> 1U)))
                    : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_btb_resp_bht_history));
        } else if ((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_taken)) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT____VdfgTmp_h9a7e64e2__0))
                     ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT____VdfgTmp_hcaca3398__0)
                     : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT____VdfgTmp_hac808597__0) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT____VdfgTmp_hcaca3398__0)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__history 
                = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_btb_resp_bits_bht_value) 
                    << 7U) | (0x7fU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__history) 
                                       >> 1U)));
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4538(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4538\n"); );
    // Init
    VlWide<66>/*2111:0*/ __Vtemp_h6a22a7e6__0;
    VlWide<257>/*8223:0*/ __Vtemp_h18f773db__0;
    VlWide<257>/*8223:0*/ __Vtemp_ha17a95b4__0;
    VlWide<257>/*8223:0*/ __Vtemp_ha02fe103__0;
    VlWide<66>/*2111:0*/ __Vtemp_h38a79ace__0;
    VlWide<66>/*2111:0*/ __Vtemp_heb485ae7__0;
    VlWide<66>/*2111:0*/ __Vtemp_hcdc192e8__0;
    VlWide<257>/*8223:0*/ __Vtemp_h9c399a11__0;
    VlWide<257>/*8223:0*/ __Vtemp_h12c56bae__0;
    VlWide<66>/*2111:0*/ __Vtemp_hf06d43e8__0;
    VlWide<66>/*2111:0*/ __Vtemp_h270ca912__0;
    VlWide<66>/*2111:0*/ __Vtemp_h750792ed__0;
    VlWide<66>/*2111:0*/ __Vtemp_hfb14162f__0;
    VlWide<66>/*2111:0*/ __Vtemp_h973b039d__0;
    VlWide<257>/*8223:0*/ __Vtemp_heb38e4f4__0;
    VlWide<257>/*8223:0*/ __Vtemp_hee4aee74__0;
    VlWide<257>/*8223:0*/ __Vtemp_h71c3b4e8__0;
    VlWide<66>/*2111:0*/ __Vtemp_h65005681__0;
    VlWide<66>/*2111:0*/ __Vtemp_hb0c0461a__0;
    VlWide<66>/*2111:0*/ __Vtemp_h8a847363__0;
    VlWide<257>/*8223:0*/ __Vtemp_h9c399a11__1;
    VlWide<257>/*8223:0*/ __Vtemp_h63dc44cb__0;
    VlWide<66>/*2111:0*/ __Vtemp_hb9d9dc8c__0;
    VlWide<66>/*2111:0*/ __Vtemp_h9c1070db__0;
    VlWide<66>/*2111:0*/ __Vtemp_h40e14ffe__0;
    VlWide<66>/*2111:0*/ __Vtemp_h515520b4__0;
    VlWide<66>/*2111:0*/ __Vtemp_ha3f73235__0;
    VlWide<257>/*8223:0*/ __Vtemp_hee283227__0;
    VlWide<257>/*8223:0*/ __Vtemp_h506af15c__0;
    VlWide<257>/*8223:0*/ __Vtemp_h630c1a16__0;
    VlWide<66>/*2111:0*/ __Vtemp_hca8962a9__0;
    VlWide<66>/*2111:0*/ __Vtemp_h59a1d652__0;
    VlWide<66>/*2111:0*/ __Vtemp_hc4e42817__0;
    VlWide<257>/*8223:0*/ __Vtemp_h9c399a11__2;
    VlWide<257>/*8223:0*/ __Vtemp_hc6b683cb__0;
    VlWide<66>/*2111:0*/ __Vtemp_h4985a80e__0;
    VlWide<66>/*2111:0*/ __Vtemp_h30cf9972__0;
    VlWide<66>/*2111:0*/ __Vtemp_h1f1e3960__0;
    VlWide<66>/*2111:0*/ __Vtemp_h6f156b63__0;
    // Body
    VL_EXTEND_WI(8195,4, __Vtemp_h18f773db__0, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__a_first_done)
                                                 ? 
                                                (1U 
                                                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode) 
                                                    << 1U))
                                                 : 0U));
    VL_SHIFTL_WWI(8195,8195,12, __Vtemp_ha17a95b4__0, __Vtemp_h18f773db__0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_ha02fe103__0, VTestDriver__ConstPool__CONST_h42ac30ff_0, __Vtemp_ha17a95b4__0);
    VL_SEL_WWII(2112,8195, __Vtemp_h38a79ace__0, __Vtemp_ha02fe103__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_heb485ae7__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__a_first_done), __Vtemp_h38a79ace__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_OR_W(66, __Vtemp_hcdc192e8__0, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight_opcodes, __Vtemp_heb485ae7__0);
    VL_SHIFTL_WWI(8207,8207,12, __Vtemp_h9c399a11__0, VTestDriver__ConstPool__CONST_ha3e17051_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_h12c56bae__0, VTestDriver__ConstPool__CONST_h42b3b0f7_0, __Vtemp_h9c399a11__0);
    VL_SEL_WWII(2112,8207, __Vtemp_hf06d43e8__0, __Vtemp_h12c56bae__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_h270ca912__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613), __Vtemp_hf06d43e8__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_NOT_W(66, __Vtemp_h750792ed__0, __Vtemp_h270ca912__0);
    VL_AND_W(66, __Vtemp_hfb14162f__0, __Vtemp_hcdc192e8__0, __Vtemp_h750792ed__0);
    VL_COND_WIWW(2112, __Vtemp_h6a22a7e6__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset), VTestDriver__ConstPool__CONST_h9636f37d_0, __Vtemp_hfb14162f__0);
    VL_ASSIGN_W(2112,vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__inflight_opcodes, __Vtemp_h6a22a7e6__0);
    VL_EXTEND_WI(8194,3, __Vtemp_heb38e4f4__0, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                                 ? 
                                                (1U 
                                                 | (6U 
                                                    & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__aFrag) 
                                                       << 1U)))
                                                 : 0U));
    VL_SHIFTL_WWI(8194,8194,12, __Vtemp_hee4aee74__0, __Vtemp_heb38e4f4__0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_h71c3b4e8__0, VTestDriver__ConstPool__CONST_h42ac30fb_0, __Vtemp_hee4aee74__0);
    VL_SEL_WWII(2112,8194, __Vtemp_h65005681__0, __Vtemp_h71c3b4e8__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_hb0c0461a__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done), __Vtemp_h65005681__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_OR_W(66, __Vtemp_h8a847363__0, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight_sizes, __Vtemp_hb0c0461a__0);
    VL_SHIFTL_WWI(8207,8207,12, __Vtemp_h9c399a11__1, VTestDriver__ConstPool__CONST_ha3e17051_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_h63dc44cb__0, VTestDriver__ConstPool__CONST_h42b3b0f7_0, __Vtemp_h9c399a11__1);
    VL_SEL_WWII(2112,8207, __Vtemp_hb9d9dc8c__0, __Vtemp_h63dc44cb__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_h9c1070db__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613), __Vtemp_hb9d9dc8c__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_NOT_W(66, __Vtemp_h40e14ffe__0, __Vtemp_h9c1070db__0);
    VL_AND_W(66, __Vtemp_h515520b4__0, __Vtemp_h8a847363__0, __Vtemp_h40e14ffe__0);
    VL_COND_WIWW(2112, __Vtemp_h973b039d__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset), VTestDriver__ConstPool__CONST_h9636f37d_0, __Vtemp_h515520b4__0);
    VL_ASSIGN_W(2112,vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight_sizes, __Vtemp_h973b039d__0);
    VL_EXTEND_WI(8195,4, __Vtemp_hee283227__0, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done)
                                                 ? 
                                                (1U 
                                                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_opcode) 
                                                    << 1U))
                                                 : 0U));
    VL_SHIFTL_WWI(8195,8195,12, __Vtemp_h506af15c__0, __Vtemp_hee283227__0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_h630c1a16__0, VTestDriver__ConstPool__CONST_h42ac30ff_0, __Vtemp_h506af15c__0);
    VL_SEL_WWII(2112,8195, __Vtemp_hca8962a9__0, __Vtemp_h630c1a16__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_h59a1d652__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done), __Vtemp_hca8962a9__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_OR_W(66, __Vtemp_hc4e42817__0, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight_opcodes, __Vtemp_h59a1d652__0);
    VL_SHIFTL_WWI(8207,8207,12, __Vtemp_h9c399a11__2, VTestDriver__ConstPool__CONST_ha3e17051_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_hc6b683cb__0, VTestDriver__ConstPool__CONST_h42b3b0f7_0, __Vtemp_h9c399a11__2);
    VL_SEL_WWII(2112,8207, __Vtemp_h4985a80e__0, __Vtemp_hc6b683cb__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_h30cf9972__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT___T_613), __Vtemp_h4985a80e__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_NOT_W(66, __Vtemp_h1f1e3960__0, __Vtemp_h30cf9972__0);
    VL_AND_W(66, __Vtemp_h6f156b63__0, __Vtemp_hc4e42817__0, __Vtemp_h1f1e3960__0);
    VL_COND_WIWW(2112, __Vtemp_ha3f73235__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset), VTestDriver__ConstPool__CONST_h9636f37d_0, __Vtemp_h6f156b63__0);
    VL_ASSIGN_W(2112,vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__monitor__DOT__inflight_opcodes, __Vtemp_ha3f73235__0);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4539(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4539\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0[0U] 
            = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_mask)) 
                        << 0x2eU) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_address)) 
                                      << 0xfU) | (QData)((IData)(
                                                                 (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_source) 
                                                                   << 9U) 
                                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_size) 
                                                                      << 6U) 
                                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_param) 
                                                                         << 3U) 
                                                                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_opcode)))))))));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0[1U] 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_data) 
                << 0x16U) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_mask)) 
                                       << 0x2eU) | 
                                      (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_address)) 
                                        << 0xfU) | (QData)((IData)(
                                                                   (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_source) 
                                                                     << 9U) 
                                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_size) 
                                                                        << 6U) 
                                                                       | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_param) 
                                                                           << 3U) 
                                                                          | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_opcode)))))))) 
                                     >> 0x20U)));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0[2U] 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_data) 
                >> 0xaU) | ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_data 
                                     >> 0x20U)) << 0x16U));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0[3U] 
            = ((0xffc00000U & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__muxStateEarly_0) 
                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_a_0_bits_corrupt) 
                                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_corrupt))) 
                                << 0x16U) | (0xffc00000U 
                                             & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__muxStateEarly_1) 
                                                 << 0x16U) 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT___ram_ext_R0_data[3U])))) 
               | ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_bits_data 
                           >> 0x20U)) >> 0xaU));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value) 
                         - (IData)(1U)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value) 
                         - (IData)(1U)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value) 
                         - (IData)(1U)));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value) 
                         - (IData)(1U)));
        }
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_tlb_xcpt_gf_ld 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_valid_not_nacked)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_tlb_xcpt_gf_ld));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_tlb_xcpt_gf_st 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_valid_not_nacked)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_tlb_xcpt_gf_st));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_tlb_xcpt_gf_ld 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_valid_not_nacked)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_tlb_xcpt_gf_ld));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4540(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4540\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_h6b780ddf__0;
    VlWide<32>/*1023:0*/ __Vtemp_h1c2be03e__0;
    VlWide<32>/*1023:0*/ __Vtemp_h6aa88fa7__0;
    VlWide<66>/*2111:0*/ __Vtemp_h17991b71__0;
    VlWide<257>/*8223:0*/ __Vtemp_h71d4ec8e__0;
    VlWide<257>/*8223:0*/ __Vtemp_hd00874d6__0;
    VlWide<257>/*8223:0*/ __Vtemp_haf63ab71__0;
    VlWide<66>/*2111:0*/ __Vtemp_h6cc8951b__0;
    VlWide<66>/*2111:0*/ __Vtemp_h02c60776__0;
    VlWide<66>/*2111:0*/ __Vtemp_ha13afdd1__0;
    VlWide<257>/*8223:0*/ __Vtemp_ha9cfeb1f__0;
    VlWide<257>/*8223:0*/ __Vtemp_h3ab62279__0;
    VlWide<66>/*2111:0*/ __Vtemp_h25afb4db__0;
    VlWide<66>/*2111:0*/ __Vtemp_h6a81ef42__0;
    VlWide<66>/*2111:0*/ __Vtemp_hff4a317a__0;
    VlWide<66>/*2111:0*/ __Vtemp_h66100781__0;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_tlb_xcpt_gf_st 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_valid_not_nacked)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_tlb_xcpt_gf_st));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_tlb_xcpt_gf_ld 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_valid_not_nacked)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_tlb_xcpt_gf_ld));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_tlb_xcpt_gf_st 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_valid_not_nacked)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_tlb_xcpt_gf_st));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_tlb_xcpt_gf_ld 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_valid_not_nacked)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_tlb_xcpt_gf_ld));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_tlb_xcpt_gf_st 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_valid_not_nacked)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_tlb_xcpt_gf_st));
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp_h1c2be03e__0, VTestDriver__ConstPool__CONST_h2ae7f32a_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_source));
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp_h6aa88fa7__0, VTestDriver__ConstPool__CONST_h2ae7f32a_0, 
                  (0x3ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
                             [0U][0U] >> 7U)));
    __Vtemp_h6b780ddf__0[1U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[1U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[1U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[1U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__do_enq)
                                            ? __Vtemp_h1c2be03e__0[1U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[1U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h6aa88fa7__0[1U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[1U])))));
    __Vtemp_h6b780ddf__0[2U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[2U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[2U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[2U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__do_enq)
                                            ? __Vtemp_h1c2be03e__0[2U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[2U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h6aa88fa7__0[2U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[2U])))));
    __Vtemp_h6b780ddf__0[3U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[3U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[3U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[3U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__do_enq)
                                            ? __Vtemp_h1c2be03e__0[3U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[3U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h6aa88fa7__0[3U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[3U])))));
    __Vtemp_h6b780ddf__0[4U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[4U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[4U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[4U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__do_enq)
                                            ? __Vtemp_h1c2be03e__0[4U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[4U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h6aa88fa7__0[4U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[4U])))));
    __Vtemp_h6b780ddf__0[5U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[5U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[5U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[5U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__do_enq)
                                            ? __Vtemp_h1c2be03e__0[5U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[5U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h6aa88fa7__0[5U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[5U])))));
    __Vtemp_h6b780ddf__0[6U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[6U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[6U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[6U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__do_enq)
                                            ? __Vtemp_h1c2be03e__0[6U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[6U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h6aa88fa7__0[6U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[6U])))));
    __Vtemp_h6b780ddf__0[7U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[7U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[7U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[7U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__do_enq)
                                            ? __Vtemp_h1c2be03e__0[7U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[7U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h6aa88fa7__0[7U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[7U])))));
    __Vtemp_h6b780ddf__0[8U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[8U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[8U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[8U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__do_enq)
                                            ? __Vtemp_h1c2be03e__0[8U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[8U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h6aa88fa7__0[8U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[8U])))));
    __Vtemp_h6b780ddf__0[9U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[9U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[9U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[9U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__do_enq)
                                            ? __Vtemp_h1c2be03e__0[9U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[9U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___T_613)
                                              ? __Vtemp_h6aa88fa7__0[9U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[9U])))));
    __Vtemp_h6b780ddf__0[0xaU] = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xaU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h902eb634_0[0xaU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0xaU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__do_enq)
                                              ? __Vtemp_h1c2be03e__0[0xaU]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[0xaU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___T_613)
                                                ? __Vtemp_h6aa88fa7__0[0xaU]
                                                : VTestDriver__ConstPool__CONST_h902eb634_0[0xaU])))));
    __Vtemp_h6b780ddf__0[0xbU] = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xbU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h902eb634_0[0xbU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0xbU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__do_enq)
                                              ? __Vtemp_h1c2be03e__0[0xbU]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[0xbU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___T_613)
                                                ? __Vtemp_h6aa88fa7__0[0xbU]
                                                : VTestDriver__ConstPool__CONST_h902eb634_0[0xbU])))));
    __Vtemp_h6b780ddf__0[0xcU] = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xcU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h902eb634_0[0xcU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0xcU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__do_enq)
                                              ? __Vtemp_h1c2be03e__0[0xcU]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[0xcU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___T_613)
                                                ? __Vtemp_h6aa88fa7__0[0xcU]
                                                : VTestDriver__ConstPool__CONST_h902eb634_0[0xcU])))));
    __Vtemp_h6b780ddf__0[0xdU] = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xdU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h902eb634_0[0xdU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0xdU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__do_enq)
                                              ? __Vtemp_h1c2be03e__0[0xdU]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[0xdU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___T_613)
                                                ? __Vtemp_h6aa88fa7__0[0xdU]
                                                : VTestDriver__ConstPool__CONST_h902eb634_0[0xdU])))));
    __Vtemp_h6b780ddf__0[0xeU] = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xeU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h902eb634_0[0xeU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0xeU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__do_enq)
                                              ? __Vtemp_h1c2be03e__0[0xeU]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[0xeU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___T_613)
                                                ? __Vtemp_h6aa88fa7__0[0xeU]
                                                : VTestDriver__ConstPool__CONST_h902eb634_0[0xeU])))));
    __Vtemp_h6b780ddf__0[0xfU] = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xfU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h902eb634_0[0xfU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0xfU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__do_enq)
                                              ? __Vtemp_h1c2be03e__0[0xfU]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[0xfU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___T_613)
                                                ? __Vtemp_h6aa88fa7__0[0xfU]
                                                : VTestDriver__ConstPool__CONST_h902eb634_0[0xfU])))));
    __Vtemp_h6b780ddf__0[0x10U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[0x10U] 
                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                       ? VTestDriver__ConstPool__CONST_h902eb634_0[0x10U]
                                       : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0x10U] 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__do_enq)
                                               ? __Vtemp_h1c2be03e__0[0x10U]
                                               : VTestDriver__ConstPool__CONST_h902eb634_0[0x10U])) 
                                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___T_613)
                                                 ? 
                                                __Vtemp_h6aa88fa7__0[0x10U]
                                                 : 
                                                VTestDriver__ConstPool__CONST_h902eb634_0[0x10U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__do_enq)
                       ? __Vtemp_h1c2be03e__0[0U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[0U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___T_613)
                         ? __Vtemp_h6aa88fa7__0[0U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[1U] 
        = __Vtemp_h6b780ddf__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[2U] 
        = __Vtemp_h6b780ddf__0[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[3U] 
        = __Vtemp_h6b780ddf__0[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[4U] 
        = __Vtemp_h6b780ddf__0[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[5U] 
        = __Vtemp_h6b780ddf__0[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[6U] 
        = __Vtemp_h6b780ddf__0[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[7U] 
        = __Vtemp_h6b780ddf__0[7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[8U] 
        = __Vtemp_h6b780ddf__0[8U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[9U] 
        = __Vtemp_h6b780ddf__0[9U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0xaU] 
        = __Vtemp_h6b780ddf__0[0xaU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0xbU] 
        = __Vtemp_h6b780ddf__0[0xbU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0xcU] 
        = __Vtemp_h6b780ddf__0[0xcU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0xdU] 
        = __Vtemp_h6b780ddf__0[0xdU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0xeU] 
        = __Vtemp_h6b780ddf__0[0xeU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0xfU] 
        = __Vtemp_h6b780ddf__0[0xfU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight[0x10U] 
        = __Vtemp_h6b780ddf__0[0x10U];
    VL_EXTEND_WI(8194,3, __Vtemp_h71d4ec8e__0, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__do_enq)
                                                 ? 
                                                (1U 
                                                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_size) 
                                                    << 1U))
                                                 : 0U));
    VL_SHIFTL_WWI(8194,8194,12, __Vtemp_hd00874d6__0, __Vtemp_h71d4ec8e__0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_haf63ab71__0, VTestDriver__ConstPool__CONST_h42ac30fb_0, __Vtemp_hd00874d6__0);
    VL_SEL_WWII(2112,8194, __Vtemp_h6cc8951b__0, __Vtemp_haf63ab71__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_h02c60776__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__do_enq), __Vtemp_h6cc8951b__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_OR_W(66, __Vtemp_ha13afdd1__0, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes, __Vtemp_h02c60776__0);
    VL_SHIFTL_WWI(8207,8207,12, __Vtemp_ha9cfeb1f__0, VTestDriver__ConstPool__CONST_ha3e17051_0, 
                  (0xffcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
                             [0U][0U] >> 5U)));
    VL_AND_W(257, __Vtemp_h3ab62279__0, VTestDriver__ConstPool__CONST_h42b3b0f7_0, __Vtemp_ha9cfeb1f__0);
    VL_SEL_WWII(2112,8207, __Vtemp_h25afb4db__0, __Vtemp_h3ab62279__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_h6a81ef42__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___T_613), __Vtemp_h25afb4db__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_NOT_W(66, __Vtemp_hff4a317a__0, __Vtemp_h6a81ef42__0);
    VL_AND_W(66, __Vtemp_h66100781__0, __Vtemp_ha13afdd1__0, __Vtemp_hff4a317a__0);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__maybe_full = 0U;
        VL_ASSIGN_W(2112,__Vtemp_h17991b71__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    } else {
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__do_enq) 
             != (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full)) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_oready)) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__maybe_full)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__maybe_full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__do_enq;
        }
        VL_ASSIGN_W(2112,__Vtemp_h17991b71__0, __Vtemp_h66100781__0);
    }
    VL_ASSIGN_W(2112,vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes, __Vtemp_h17991b71__0);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4541(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4541\n"); );
    // Init
    VlWide<66>/*2111:0*/ __Vtemp_hcb99dcb9__0;
    VlWide<257>/*8223:0*/ __Vtemp_h9be0dae5__0;
    VlWide<257>/*8223:0*/ __Vtemp_h012bcc73__0;
    VlWide<257>/*8223:0*/ __Vtemp_h656c314e__0;
    VlWide<66>/*2111:0*/ __Vtemp_h2fa344cf__0;
    VlWide<66>/*2111:0*/ __Vtemp_hf8a44626__0;
    VlWide<66>/*2111:0*/ __Vtemp_h14680a4f__0;
    VlWide<257>/*8223:0*/ __Vtemp_ha9cfeb1f__0;
    VlWide<257>/*8223:0*/ __Vtemp_h3ab62279__0;
    VlWide<66>/*2111:0*/ __Vtemp_h25afb4db__0;
    VlWide<66>/*2111:0*/ __Vtemp_h6a81ef42__0;
    VlWide<66>/*2111:0*/ __Vtemp_hff4a317a__0;
    VlWide<66>/*2111:0*/ __Vtemp_hd6b5393b__0;
    // Body
    VL_EXTEND_WI(8195,4, __Vtemp_h9be0dae5__0, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__do_enq)
                                                 ? 
                                                (1U 
                                                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___repeater_io_deq_bits_opcode) 
                                                    << 1U))
                                                 : 0U));
    VL_SHIFTL_WWI(8195,8195,12, __Vtemp_h012bcc73__0, __Vtemp_h9be0dae5__0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_h656c314e__0, VTestDriver__ConstPool__CONST_h42ac30ff_0, __Vtemp_h012bcc73__0);
    VL_SEL_WWII(2112,8195, __Vtemp_h2fa344cf__0, __Vtemp_h656c314e__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_hf8a44626__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__do_enq), __Vtemp_h2fa344cf__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_OR_W(66, __Vtemp_h14680a4f__0, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_opcodes, __Vtemp_hf8a44626__0);
    VL_SHIFTL_WWI(8207,8207,12, __Vtemp_ha9cfeb1f__0, VTestDriver__ConstPool__CONST_ha3e17051_0, 
                  (0xffcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
                             [0U][0U] >> 5U)));
    VL_AND_W(257, __Vtemp_h3ab62279__0, VTestDriver__ConstPool__CONST_h42b3b0f7_0, __Vtemp_ha9cfeb1f__0);
    VL_SEL_WWII(2112,8207, __Vtemp_h25afb4db__0, __Vtemp_h3ab62279__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_h6a81ef42__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT___T_613), __Vtemp_h25afb4db__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_NOT_W(66, __Vtemp_hff4a317a__0, __Vtemp_h6a81ef42__0);
    VL_AND_W(66, __Vtemp_hd6b5393b__0, __Vtemp_h14680a4f__0, __Vtemp_hff4a317a__0);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2 = 0U;
        VL_ASSIGN_W(2112,__Vtemp_hcb99dcb9__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__acknum = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_1172) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__d_first_2)
                          ? ((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
                              [0U][0U]) ? (~ (0x3ffU 
                                              & (((IData)(0x3fU) 
                                                  << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___coupler_to_l2_ctrl_auto_tl_in_d_bits_size)) 
                                                 >> 3U)))
                              : 0U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_2) 
                                       - (IData)(1U))));
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__d_first_1)
                          ? ((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
                              [0U][0U]) ? (~ (0x3ffU 
                                              & (((IData)(0x3fU) 
                                                  << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___coupler_to_l2_ctrl_auto_tl_in_d_bits_size)) 
                                                 >> 3U)))
                              : 0U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1) 
                                       - (IData)(1U))));
        }
        VL_ASSIGN_W(2112,__Vtemp_hcb99dcb9__0, __Vtemp_hd6b5393b__0);
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_7) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__acknum 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__dFirst)
                          ? ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
                              [0U][0U] << 0x19U) | 
                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
                              [0U][0U] >> 7U)) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__acknum) 
                                                  - 
                                                  (1U 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
                                                      [0U][0U] 
                                                      | (3U 
                                                         == 
                                                         (3U 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
                                                             [0U][0U] 
                                                             >> 5U))))))));
        }
    }
    VL_ASSIGN_W(2112,vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_opcodes, __Vtemp_hcb99dcb9__0);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4542(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4542\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_15__DOT__maybe_full = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_14__DOT__maybe_full = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_13__DOT__maybe_full = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_12__DOT__maybe_full = 0U;
    } else {
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_15__DOT__do_enq) 
             != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___T_80) 
                  & ((0xfU == (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT___ram_ext_R0_data[0U])) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT___ram_ext_R0_data[2U] 
                        >> 6U))) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_15__DOT__maybe_full)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_15__DOT__maybe_full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_15__DOT__do_enq;
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_14__DOT__do_enq) 
             != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___T_80) 
                  & ((0xeU == (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT___ram_ext_R0_data[0U])) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT___ram_ext_R0_data[2U] 
                        >> 6U))) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_14__DOT__maybe_full)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_14__DOT__maybe_full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_14__DOT__do_enq;
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_13__DOT__do_enq) 
             != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___T_80) 
                  & ((0xdU == (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT___ram_ext_R0_data[0U])) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT___ram_ext_R0_data[2U] 
                        >> 6U))) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_13__DOT__maybe_full)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_13__DOT__maybe_full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_13__DOT__do_enq;
        }
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_12__DOT__do_enq) 
             != (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___T_80) 
                  & ((0xcU == (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT___ram_ext_R0_data[0U])) 
                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT___ram_ext_R0_data[2U] 
                        >> 6U))) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_12__DOT__maybe_full)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_12__DOT__maybe_full 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_12__DOT__do_enq;
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4543(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4543\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h302afe9b__0;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__w_pprobeackfirst 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___T_574)
               ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___GEN_7)
               : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT___GEN_11) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__w_pprobeackfirst))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__w_pprobeackfirst 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___T_574)
               ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___GEN_7)
               : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT___GEN_11) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__w_pprobeackfirst))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__w_pprobeackfirst 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT___T_574)
               ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT___GEN_7)
               : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT___GEN_11) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__w_pprobeackfirst))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__w_pprobeackfirst 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT___T_574)
               ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT___GEN_7)
               : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT___GEN_11) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__w_pprobeackfirst))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__w_pprobeackfirst 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT___T_574)
               ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT___GEN_7)
               : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT___GEN_11) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__w_pprobeackfirst))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__w_pprobeackfirst 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT___T_574)
               ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT___GEN_7)
               : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT___GEN_11) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__w_pprobeackfirst))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__w_pprobeackfirst 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT___T_574)
               ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT___GEN_7)
               : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT___GEN_11) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__w_pprobeackfirst))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT__deq_ptr_value = 0U;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT__do_deq) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT__deq_ptr_value 
            = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT__deq_ptr_value) 
                     - (IData)(1U)));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT__do_enq) {
        __Vtemp_h302afe9b__0[1U] = (((IData)((((QData)((IData)(
                                                               (0x7ffU 
                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_serdesser__DOT__inDes__DOT__data_2))) 
                                               << 0x35U) 
                                              | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_serdesser__DOT__inDes__DOT__data_1)) 
                                                  << 0x15U) 
                                                 | (QData)((IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_serdesser__DOT__inDes__DOT__data_0 
                                                                    >> 0xbU)))))) 
                                     << 0x16U) | (IData)(
                                                         ((((QData)((IData)(
                                                                            (0xffU 
                                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_serdesser__DOT__inDes__DOT__data_0 
                                                                                >> 1U)))) 
                                                            << 0x2eU) 
                                                           | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_fbus_serdesser_auto_client_out_a_bits_address)) 
                                                               << 0xeU) 
                                                              | (QData)((IData)(
                                                                                ((0x3c00U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_serdesser__DOT__inDes__DOT__data_4 
                                                                                >> 1U)) 
                                                                                | ((0x3c0U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_serdesser__DOT__inDes__DOT__data_4 
                                                                                >> 0xdU)) 
                                                                                | ((0x38U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_serdesser__DOT__inDes__DOT__data_4 
                                                                                >> 0x18U)) 
                                                                                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_fbus_serdesser_auto_client_out_a_bits_opcode)))))))) 
                                                          >> 0x20U)));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0[0U] 
            = (IData)((((QData)((IData)((0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_serdesser__DOT__inDes__DOT__data_0 
                                                  >> 1U)))) 
                        << 0x2eU) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_fbus_serdesser_auto_client_out_a_bits_address)) 
                                      << 0xeU) | (QData)((IData)(
                                                                 ((0x3c00U 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_serdesser__DOT__inDes__DOT__data_4 
                                                                      >> 1U)) 
                                                                  | ((0x3c0U 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_serdesser__DOT__inDes__DOT__data_4 
                                                                         >> 0xdU)) 
                                                                     | ((0x38U 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_serdesser__DOT__inDes__DOT__data_4 
                                                                            >> 0x18U)) 
                                                                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_fbus_serdesser_auto_client_out_a_bits_opcode)))))))));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0[1U] 
            = __Vtemp_h302afe9b__0[1U];
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0[2U] 
            = (((IData)((((QData)((IData)((0x7ffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_serdesser__DOT__inDes__DOT__data_2))) 
                          << 0x35U) | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_serdesser__DOT__inDes__DOT__data_1)) 
                                        << 0x15U) | (QData)((IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_serdesser__DOT__inDes__DOT__data_0 
                                                                     >> 0xbU)))))) 
                >> 0xaU) | ((IData)(((((QData)((IData)(
                                                       (0x7ffU 
                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_serdesser__DOT__inDes__DOT__data_2))) 
                                       << 0x35U) | 
                                      (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_serdesser__DOT__inDes__DOT__data_1)) 
                                        << 0x15U) | (QData)((IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_serdesser__DOT__inDes__DOT__data_0 
                                                                     >> 0xbU))))) 
                                     >> 0x20U)) << 0x16U));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0[3U] 
            = ((0x400000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_serdesser__DOT__inDes__DOT__data_0 
                             << 0xcU)) | ((IData)((
                                                   (((QData)((IData)(
                                                                     (0x7ffU 
                                                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_serdesser__DOT__inDes__DOT__data_2))) 
                                                     << 0x35U) 
                                                    | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_serdesser__DOT__inDes__DOT__data_1)) 
                                                        << 0x15U) 
                                                       | (QData)((IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_serdesser__DOT__inDes__DOT__data_0 
                                                                          >> 0xbU))))) 
                                                   >> 0x20U)) 
                                          >> 0xaU));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4544(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4544\n"); );
    // Body
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_speculative 
        = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT___core_io_imem_req_valid)
                  ? (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__take_pc_wb))
                  : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_replay)
                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_speculative)
                      : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_speculative) 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_valid) 
                             & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_speculative)))) 
                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__predicted_taken)))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_speculative 
        = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___core_io_imem_req_valid)
                  ? (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__take_pc_wb))
                  : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_replay)
                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_speculative)
                      : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_speculative) 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_valid) 
                             & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_speculative)))) 
                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__predicted_taken)))));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_speculative 
        = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___core_io_imem_req_valid)
                  ? (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__take_pc_wb))
                  : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_replay)
                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_speculative)
                      : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_speculative) 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_valid) 
                             & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_speculative)))) 
                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__predicted_taken)))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_speculative = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_speculative = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_speculative = 0U;
    } else {
        if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_replay)))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_speculative 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_speculative;
        }
        if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_replay)))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_speculative 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_speculative;
        }
        if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_replay)))) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_speculative 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_speculative;
        }
    }
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_speculative 
        = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___core_io_imem_req_valid)
                  ? (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__take_pc_wb))
                  : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_replay)
                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_speculative)
                      : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_speculative) 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_valid) 
                             & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_speculative)))) 
                         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__predicted_taken)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4545(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4545\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_speculative = 0U;
    } else if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_replay)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_speculative 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_speculative;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0[0U] 
            = (((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_9_0)
                           ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_data
                           : 0ULL) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_9_1)
                                        ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data
                                        : 0ULL) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_9_2)
                                                    ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_port_named_mmio_port_axi4_auto_tl_in_d_bits_data
                                                    : 0ULL)))) 
                << 0xfU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_denied) 
                             << 0xeU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_sink) 
                                          << 0xbU) 
                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_source) 
                                             << 9U) 
                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_size) 
                                                << 5U) 
                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_param) 
                                                   << 3U) 
                                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_3_d_bits_opcode)))))));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0[1U] 
            = (((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_9_0)
                           ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_data
                           : 0ULL) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_9_1)
                                        ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data
                                        : 0ULL) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_9_2)
                                                    ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_port_named_mmio_port_axi4_auto_tl_in_d_bits_data
                                                    : 0ULL)))) 
                >> 0x11U) | ((IData)(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_9_0)
                                         ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_data
                                         : 0ULL) | 
                                       (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_9_1)
                                          ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data
                                          : 0ULL) | 
                                        ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_9_2)
                                          ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_port_named_mmio_port_axi4_auto_tl_in_d_bits_data
                                          : 0ULL))) 
                                      >> 0x20U)) << 0xfU));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0[2U] 
            = (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_9_0) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_corrupt)) 
                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_9_1) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_corrupt)) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_9_2) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_port_named_mmio_port_axi4_auto_tl_in_d_bits_corrupt)))) 
                << 0xfU) | ((IData)(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_9_0)
                                        ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_data
                                        : 0ULL) | (
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_9_1)
                                                     ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data
                                                     : 0ULL) 
                                                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_9_2)
                                                       ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_port_named_mmio_port_axi4_auto_tl_in_d_bits_data
                                                       : 0ULL))) 
                                     >> 0x20U)) >> 0x11U));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0[0U] 
            = (((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_8_0)
                           ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_data
                           : 0ULL) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_8_1)
                                        ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data
                                        : 0ULL) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_8_2)
                                                    ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_port_named_mmio_port_axi4_auto_tl_in_d_bits_data
                                                    : 0ULL)))) 
                << 0xfU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_2_d_bits_denied) 
                             << 0xeU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_2_d_bits_sink) 
                                          << 0xbU) 
                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_2_d_bits_source) 
                                             << 9U) 
                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_2_d_bits_size) 
                                                << 5U) 
                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_2_d_bits_param) 
                                                   << 3U) 
                                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_2_d_bits_opcode)))))));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0[1U] 
            = (((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_8_0)
                           ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_data
                           : 0ULL) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_8_1)
                                        ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data
                                        : 0ULL) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_8_2)
                                                    ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_port_named_mmio_port_axi4_auto_tl_in_d_bits_data
                                                    : 0ULL)))) 
                >> 0x11U) | ((IData)(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_8_0)
                                         ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_data
                                         : 0ULL) | 
                                       (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_8_1)
                                          ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data
                                          : 0ULL) | 
                                        ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_8_2)
                                          ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_port_named_mmio_port_axi4_auto_tl_in_d_bits_data
                                          : 0ULL))) 
                                      >> 0x20U)) << 0xfU));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0[2U] 
            = (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_8_0) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_corrupt)) 
                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_8_1) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_corrupt)) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_8_2) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_port_named_mmio_port_axi4_auto_tl_in_d_bits_corrupt)))) 
                << 0xfU) | ((IData)(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_8_0)
                                        ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_data
                                        : 0ULL) | (
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_8_1)
                                                     ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data
                                                     : 0ULL) 
                                                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_8_2)
                                                       ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_port_named_mmio_port_axi4_auto_tl_in_d_bits_data
                                                       : 0ULL))) 
                                     >> 0x20U)) >> 0x11U));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4546(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4546\n"); );
    // Init
    VlWide<66>/*2111:0*/ __Vtemp_h8779aa1b__0;
    VlWide<257>/*8223:0*/ __Vtemp_h52af6eab__0;
    VlWide<257>/*8223:0*/ __Vtemp_h21de969d__0;
    VlWide<257>/*8223:0*/ __Vtemp_haaaa037f__0;
    VlWide<66>/*2111:0*/ __Vtemp_hc82c303c__0;
    VlWide<66>/*2111:0*/ __Vtemp_h483acf2e__0;
    VlWide<66>/*2111:0*/ __Vtemp_h1a86e4ba__0;
    VlWide<257>/*8223:0*/ __Vtemp_h8823400b__0;
    VlWide<257>/*8223:0*/ __Vtemp_h31db8def__0;
    VlWide<66>/*2111:0*/ __Vtemp_ha6c0e51c__0;
    VlWide<66>/*2111:0*/ __Vtemp_hcdda235a__0;
    VlWide<66>/*2111:0*/ __Vtemp_ha18fc39f__0;
    VlWide<66>/*2111:0*/ __Vtemp_hec4fbfe8__0;
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0[0U] 
            = (((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_7_0)
                           ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_data
                           : 0ULL) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_7_1)
                                        ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data
                                        : 0ULL) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_7_2)
                                                    ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_port_named_mmio_port_axi4_auto_tl_in_d_bits_data
                                                    : 0ULL)))) 
                << 0xfU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_1_d_bits_denied) 
                             << 0xeU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_1_d_bits_sink) 
                                          << 0xbU) 
                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_1_d_bits_source) 
                                             << 9U) 
                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_1_d_bits_size) 
                                                << 5U) 
                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_1_d_bits_param) 
                                                   << 3U) 
                                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_1_d_bits_opcode)))))));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0[1U] 
            = (((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_7_0)
                           ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_data
                           : 0ULL) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_7_1)
                                        ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data
                                        : 0ULL) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_7_2)
                                                    ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_port_named_mmio_port_axi4_auto_tl_in_d_bits_data
                                                    : 0ULL)))) 
                >> 0x11U) | ((IData)(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_7_0)
                                         ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_data
                                         : 0ULL) | 
                                       (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_7_1)
                                          ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data
                                          : 0ULL) | 
                                        ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_7_2)
                                          ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_port_named_mmio_port_axi4_auto_tl_in_d_bits_data
                                          : 0ULL))) 
                                      >> 0x20U)) << 0xfU));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0[2U] 
            = (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_7_0) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_corrupt)) 
                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_7_1) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_corrupt)) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_7_2) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_port_named_mmio_port_axi4_auto_tl_in_d_bits_corrupt)))) 
                << 0xfU) | ((IData)(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_7_0)
                                        ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_data
                                        : 0ULL) | (
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_7_1)
                                                     ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data
                                                     : 0ULL) 
                                                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_7_2)
                                                       ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_port_named_mmio_port_axi4_auto_tl_in_d_bits_data
                                                       : 0ULL))) 
                                     >> 0x20U)) >> 0x11U));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0[0U] 
            = (((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_6_0)
                           ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_data
                           : 0ULL) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_6_1)
                                        ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data
                                        : 0ULL) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_6_2)
                                                    ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_port_named_mmio_port_axi4_auto_tl_in_d_bits_data
                                                    : 0ULL)))) 
                << 0xfU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_0_d_bits_denied) 
                             << 0xeU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_0_d_bits_sink) 
                                          << 0xbU) 
                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_0_d_bits_source) 
                                             << 9U) 
                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_0_d_bits_size) 
                                                << 5U) 
                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_0_d_bits_param) 
                                                   << 3U) 
                                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_from_tile_tl_master_clock_xing_in_0_d_bits_opcode)))))));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0[1U] 
            = (((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_6_0)
                           ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_data
                           : 0ULL) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_6_1)
                                        ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data
                                        : 0ULL) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_6_2)
                                                    ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_port_named_mmio_port_axi4_auto_tl_in_d_bits_data
                                                    : 0ULL)))) 
                >> 0x11U) | ((IData)(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_6_0)
                                         ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_data
                                         : 0ULL) | 
                                       (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_6_1)
                                          ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data
                                          : 0ULL) | 
                                        ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_6_2)
                                          ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_port_named_mmio_port_axi4_auto_tl_in_d_bits_data
                                          : 0ULL))) 
                                      >> 0x20U)) << 0xfU));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0[2U] 
            = (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_6_0) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_corrupt)) 
                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_6_1) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_corrupt)) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_6_2) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_port_named_mmio_port_axi4_auto_tl_in_d_bits_corrupt)))) 
                << 0xfU) | ((IData)(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_6_0)
                                        ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_bus_xing_in_d_bits_data
                                        : 0ULL) | (
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_6_1)
                                                     ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_data
                                                     : 0ULL) 
                                                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__muxStateEarly_6_2)
                                                       ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_port_named_mmio_port_axi4_auto_tl_in_d_bits_data
                                                       : 0ULL))) 
                                     >> 0x20U)) >> 0x11U));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value;
    }
    VL_EXTEND_WI(8195,4, __Vtemp_h52af6eab__0, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_7)
                                                 ? 
                                                (1U 
                                                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_clint_fragmenter_out_a_bits_opcode) 
                                                    << 1U))
                                                 : 0U));
    VL_SHIFTL_WWI(8195,8195,12, __Vtemp_h21de969d__0, __Vtemp_h52af6eab__0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_auto_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_haaaa037f__0, VTestDriver__ConstPool__CONST_h42ac30ff_0, __Vtemp_h21de969d__0);
    VL_SEL_WWII(2112,8195, __Vtemp_hc82c303c__0, __Vtemp_haaaa037f__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_h483acf2e__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_7), __Vtemp_hc82c303c__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_OR_W(66, __Vtemp_h1a86e4ba__0, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_opcodes, __Vtemp_h483acf2e__0);
    VL_SHIFTL_WWI(8207,8207,12, __Vtemp_h8823400b__0, VTestDriver__ConstPool__CONST_ha3e17051_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_auto_in_d_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_h31db8def__0, VTestDriver__ConstPool__CONST_h42b3b0f7_0, __Vtemp_h8823400b__0);
    VL_SEL_WWII(2112,8207, __Vtemp_ha6c0e51c__0, __Vtemp_h31db8def__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_hcdda235a__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_7), __Vtemp_ha6c0e51c__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_NOT_W(66, __Vtemp_ha18fc39f__0, __Vtemp_hcdda235a__0);
    VL_AND_W(66, __Vtemp_hec4fbfe8__0, __Vtemp_h1a86e4ba__0, __Vtemp_ha18fc39f__0);
    VL_COND_WIWW(2112, __Vtemp_h8779aa1b__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset), VTestDriver__ConstPool__CONST_h9636f37d_0, __Vtemp_hec4fbfe8__0);
    VL_ASSIGN_W(2112,vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__monitor__DOT__inflight_opcodes, __Vtemp_h8779aa1b__0);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4547(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4547\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_he20721c9__0;
    VlWide<32>/*1023:0*/ __Vtemp_h852bf84c__0;
    VlWide<32>/*1023:0*/ __Vtemp_h234a9e96__0;
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 = 0U;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_1160) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter 
            = (7U & ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter))
                      ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter) 
                         - (IData)(1U)) : ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_clint_fragmenter_out_a_bits_opcode))
                                            ? (~ (0x3ffU 
                                                  & (((IData)(0x3fU) 
                                                      << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___coupler_to_clint_auto_tl_in_d_bits_size)) 
                                                     >> 3U)))
                                            : 0U)));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 
            = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_1)
                      ? ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_clint_fragmenter_out_a_bits_opcode))
                          ? (~ (0x3ffU & (((IData)(0x3fU) 
                                           << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___coupler_to_clint_auto_tl_in_d_bits_size)) 
                                          >> 3U))) : 0U)
                      : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1) 
                         - (IData)(1U))));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__maybe_full)) 
                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_valid)) 
                  & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT____Vcellinp__repeater__io_repeat)))) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT___T_1) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__repeater__DOT__full))));
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp_h852bf84c__0, VTestDriver__ConstPool__CONST_h2ae7f32a_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_source));
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp_h234a9e96__0, VTestDriver__ConstPool__CONST_h2ae7f32a_0, 
                  (0x3ffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_ext__DOT__Memory
                   [0U][3U]));
    __Vtemp_he20721c9__0[1U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[1U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[1U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[1U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__do_enq)
                                            ? __Vtemp_h852bf84c__0[1U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[1U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_h234a9e96__0[1U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[1U])))));
    __Vtemp_he20721c9__0[2U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[2U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[2U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[2U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__do_enq)
                                            ? __Vtemp_h852bf84c__0[2U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[2U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_h234a9e96__0[2U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[2U])))));
    __Vtemp_he20721c9__0[3U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[3U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[3U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[3U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__do_enq)
                                            ? __Vtemp_h852bf84c__0[3U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[3U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_h234a9e96__0[3U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[3U])))));
    __Vtemp_he20721c9__0[4U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[4U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[4U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[4U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__do_enq)
                                            ? __Vtemp_h852bf84c__0[4U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[4U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_h234a9e96__0[4U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[4U])))));
    __Vtemp_he20721c9__0[5U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[5U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[5U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[5U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__do_enq)
                                            ? __Vtemp_h852bf84c__0[5U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[5U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_h234a9e96__0[5U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[5U])))));
    __Vtemp_he20721c9__0[6U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[6U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[6U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[6U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__do_enq)
                                            ? __Vtemp_h852bf84c__0[6U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[6U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_h234a9e96__0[6U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[6U])))));
    __Vtemp_he20721c9__0[7U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[7U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[7U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[7U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__do_enq)
                                            ? __Vtemp_h852bf84c__0[7U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[7U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_h234a9e96__0[7U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[7U])))));
    __Vtemp_he20721c9__0[8U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[8U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[8U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[8U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__do_enq)
                                            ? __Vtemp_h852bf84c__0[8U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[8U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_h234a9e96__0[8U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[8U])))));
    __Vtemp_he20721c9__0[9U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[9U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[9U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[9U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__do_enq)
                                            ? __Vtemp_h852bf84c__0[9U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[9U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_h234a9e96__0[9U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[9U])))));
    __Vtemp_he20721c9__0[0xaU] = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xaU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h902eb634_0[0xaU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[0xaU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__do_enq)
                                              ? __Vtemp_h852bf84c__0[0xaU]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[0xaU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_7)
                                                ? __Vtemp_h234a9e96__0[0xaU]
                                                : VTestDriver__ConstPool__CONST_h902eb634_0[0xaU])))));
    __Vtemp_he20721c9__0[0xbU] = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xbU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h902eb634_0[0xbU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[0xbU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__do_enq)
                                              ? __Vtemp_h852bf84c__0[0xbU]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[0xbU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_7)
                                                ? __Vtemp_h234a9e96__0[0xbU]
                                                : VTestDriver__ConstPool__CONST_h902eb634_0[0xbU])))));
    __Vtemp_he20721c9__0[0xcU] = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xcU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h902eb634_0[0xcU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[0xcU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__do_enq)
                                              ? __Vtemp_h852bf84c__0[0xcU]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[0xcU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_7)
                                                ? __Vtemp_h234a9e96__0[0xcU]
                                                : VTestDriver__ConstPool__CONST_h902eb634_0[0xcU])))));
    __Vtemp_he20721c9__0[0xdU] = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xdU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h902eb634_0[0xdU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[0xdU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__do_enq)
                                              ? __Vtemp_h852bf84c__0[0xdU]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[0xdU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_7)
                                                ? __Vtemp_h234a9e96__0[0xdU]
                                                : VTestDriver__ConstPool__CONST_h902eb634_0[0xdU])))));
    __Vtemp_he20721c9__0[0xeU] = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xeU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h902eb634_0[0xeU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[0xeU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__do_enq)
                                              ? __Vtemp_h852bf84c__0[0xeU]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[0xeU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_7)
                                                ? __Vtemp_h234a9e96__0[0xeU]
                                                : VTestDriver__ConstPool__CONST_h902eb634_0[0xeU])))));
    __Vtemp_he20721c9__0[0xfU] = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xfU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h902eb634_0[0xfU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[0xfU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__do_enq)
                                              ? __Vtemp_h852bf84c__0[0xfU]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[0xfU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_7)
                                                ? __Vtemp_h234a9e96__0[0xfU]
                                                : VTestDriver__ConstPool__CONST_h902eb634_0[0xfU])))));
    __Vtemp_he20721c9__0[0x10U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[0x10U] 
                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                       ? VTestDriver__ConstPool__CONST_h902eb634_0[0x10U]
                                       : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[0x10U] 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__do_enq)
                                               ? __Vtemp_h852bf84c__0[0x10U]
                                               : VTestDriver__ConstPool__CONST_h902eb634_0[0x10U])) 
                                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_7)
                                                 ? 
                                                __Vtemp_h234a9e96__0[0x10U]
                                                 : 
                                                VTestDriver__ConstPool__CONST_h902eb634_0[0x10U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[0U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[0U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__do_enq)
                       ? __Vtemp_h852bf84c__0[0U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[0U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_7)
                         ? __Vtemp_h234a9e96__0[0U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[1U] 
        = __Vtemp_he20721c9__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[2U] 
        = __Vtemp_he20721c9__0[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[3U] 
        = __Vtemp_he20721c9__0[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[4U] 
        = __Vtemp_he20721c9__0[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[5U] 
        = __Vtemp_he20721c9__0[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[6U] 
        = __Vtemp_he20721c9__0[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[7U] 
        = __Vtemp_he20721c9__0[7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[8U] 
        = __Vtemp_he20721c9__0[8U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[9U] 
        = __Vtemp_he20721c9__0[9U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[0xaU] 
        = __Vtemp_he20721c9__0[0xaU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[0xbU] 
        = __Vtemp_he20721c9__0[0xbU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[0xcU] 
        = __Vtemp_he20721c9__0[0xcU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[0xdU] 
        = __Vtemp_he20721c9__0[0xdU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[0xeU] 
        = __Vtemp_he20721c9__0[0xeU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[0xfU] 
        = __Vtemp_he20721c9__0[0xfU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight[0x10U] 
        = __Vtemp_he20721c9__0[0x10U];
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4548(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4548\n"); );
    // Init
    VlWide<66>/*2111:0*/ __Vtemp_h81cc4bd6__0;
    VlWide<257>/*8223:0*/ __Vtemp_h79d3d0c9__0;
    VlWide<257>/*8223:0*/ __Vtemp_hdbd601d6__0;
    VlWide<257>/*8223:0*/ __Vtemp_h342c2fc4__0;
    VlWide<66>/*2111:0*/ __Vtemp_hbacd40c2__0;
    VlWide<66>/*2111:0*/ __Vtemp_ha0611fa2__0;
    VlWide<66>/*2111:0*/ __Vtemp_h81cc2aeb__0;
    VlWide<257>/*8223:0*/ __Vtemp_h32f8eba7__0;
    VlWide<257>/*8223:0*/ __Vtemp_he11b195e__0;
    VlWide<66>/*2111:0*/ __Vtemp_he73f5099__0;
    VlWide<66>/*2111:0*/ __Vtemp_hfe412427__0;
    VlWide<66>/*2111:0*/ __Vtemp_h8443ee8b__0;
    VlWide<66>/*2111:0*/ __Vtemp_h6ed8a97b__0;
    VlWide<66>/*2111:0*/ __Vtemp_h4cfcc21b__0;
    VlWide<257>/*8223:0*/ __Vtemp_h4be273fb__0;
    VlWide<257>/*8223:0*/ __Vtemp_hd6cd592d__0;
    VlWide<257>/*8223:0*/ __Vtemp_h0eee5f1c__0;
    VlWide<66>/*2111:0*/ __Vtemp_h25026412__0;
    VlWide<66>/*2111:0*/ __Vtemp_hec3810e7__0;
    VlWide<66>/*2111:0*/ __Vtemp_h57187a6d__0;
    VlWide<257>/*8223:0*/ __Vtemp_h0db3c192__0;
    VlWide<257>/*8223:0*/ __Vtemp_h8eebcffb__0;
    VlWide<66>/*2111:0*/ __Vtemp_hea73cc3c__0;
    VlWide<66>/*2111:0*/ __Vtemp_hafd088b9__0;
    VlWide<66>/*2111:0*/ __Vtemp_h9894c314__0;
    VlWide<66>/*2111:0*/ __Vtemp_h104c1152__0;
    // Body
    VL_EXTEND_WI(8194,3, __Vtemp_h79d3d0c9__0, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__do_enq)
                                                 ? 
                                                (1U 
                                                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size) 
                                                    << 1U))
                                                 : 0U));
    VL_SHIFTL_WWI(8194,8194,12, __Vtemp_hdbd601d6__0, __Vtemp_h79d3d0c9__0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_h342c2fc4__0, VTestDriver__ConstPool__CONST_h42ac30fb_0, __Vtemp_hdbd601d6__0);
    VL_SEL_WWII(2112,8194, __Vtemp_hbacd40c2__0, __Vtemp_h342c2fc4__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_ha0611fa2__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__do_enq), __Vtemp_hbacd40c2__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_OR_W(66, __Vtemp_h81cc2aeb__0, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_sizes, __Vtemp_ha0611fa2__0);
    VL_SHIFTL_WWI(8207,8207,12, __Vtemp_h32f8eba7__0, VTestDriver__ConstPool__CONST_ha3e17051_0, 
                  (0xffcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_ext__DOT__Memory
                             [0U][3U] << 2U)));
    VL_AND_W(257, __Vtemp_he11b195e__0, VTestDriver__ConstPool__CONST_h42b3b0f7_0, __Vtemp_h32f8eba7__0);
    VL_SEL_WWII(2112,8207, __Vtemp_he73f5099__0, __Vtemp_he11b195e__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_hfe412427__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_7), __Vtemp_he73f5099__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_NOT_W(66, __Vtemp_h8443ee8b__0, __Vtemp_hfe412427__0);
    VL_AND_W(66, __Vtemp_h6ed8a97b__0, __Vtemp_h81cc2aeb__0, __Vtemp_h8443ee8b__0);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter = 0U;
        VL_ASSIGN_W(2112,__Vtemp_h81cc4bd6__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_1172) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter 
                = (7U & ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter))
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter) 
                             - (IData)(1U)) : ((1U 
                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_ext__DOT__Memory
                                                [0U][0U])
                                                ? (~ 
                                                   (0x3ffU 
                                                    & (((IData)(0x3fU) 
                                                        << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___coupler_to_plic_auto_tl_in_d_bits_size)) 
                                                       >> 3U)))
                                                : 0U)));
        }
        VL_ASSIGN_W(2112,__Vtemp_h81cc4bd6__0, __Vtemp_h6ed8a97b__0);
    }
    VL_ASSIGN_W(2112,vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_sizes, __Vtemp_h81cc4bd6__0);
    VL_EXTEND_WI(8195,4, __Vtemp_h4be273fb__0, ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__do_enq)
                                                 ? 
                                                (1U 
                                                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_opcode) 
                                                    << 1U))
                                                 : 0U));
    VL_SHIFTL_WWI(8195,8195,12, __Vtemp_hd6cd592d__0, __Vtemp_h4be273fb__0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_source) 
                   << 2U));
    VL_AND_W(257, __Vtemp_h0eee5f1c__0, VTestDriver__ConstPool__CONST_h42ac30ff_0, __Vtemp_hd6cd592d__0);
    VL_SEL_WWII(2112,8195, __Vtemp_h25026412__0, __Vtemp_h0eee5f1c__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_hec3810e7__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__do_enq), __Vtemp_h25026412__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_OR_W(66, __Vtemp_h57187a6d__0, vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_opcodes, __Vtemp_hec3810e7__0);
    VL_SHIFTL_WWI(8207,8207,12, __Vtemp_h0db3c192__0, VTestDriver__ConstPool__CONST_ha3e17051_0, 
                  (0xffcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_ext__DOT__Memory
                             [0U][3U] << 2U)));
    VL_AND_W(257, __Vtemp_h8eebcffb__0, VTestDriver__ConstPool__CONST_h42b3b0f7_0, __Vtemp_h0db3c192__0);
    VL_SEL_WWII(2112,8207, __Vtemp_hea73cc3c__0, __Vtemp_h8eebcffb__0, 0U, 0x840U);
    VL_COND_WIWW(2112, __Vtemp_hafd088b9__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_7), __Vtemp_hea73cc3c__0, VTestDriver__ConstPool__CONST_h9636f37d_0);
    VL_NOT_W(66, __Vtemp_h9894c314__0, __Vtemp_hafd088b9__0);
    VL_AND_W(66, __Vtemp_h104c1152__0, __Vtemp_h57187a6d__0, __Vtemp_h9894c314__0);
    VL_COND_WIWW(2112, __Vtemp_h4cfcc21b__0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset), VTestDriver__ConstPool__CONST_h9636f37d_0, __Vtemp_h104c1152__0);
    VL_ASSIGN_W(2112,vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__inflight_opcodes, __Vtemp_h4cfcc21b__0);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4549(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4549\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__acknum = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__acknum = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT__prescaler = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT__counter = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_1172) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_1)
                          ? ((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_ext__DOT__Memory
                              [0U][0U]) ? (~ (0x3ffU 
                                              & (((IData)(0x3fU) 
                                                  << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___coupler_to_plic_auto_tl_in_d_bits_size)) 
                                                 >> 3U)))
                              : 0U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1) 
                                       - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_7) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__acknum 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__dFirst)
                          ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_ext__DOT__Memory
                         [0U][3U] : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__acknum) 
                                     - (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_ext__DOT__Memory
                                              [0U][0U] 
                                              | (3U 
                                                 == 
                                                 (3U 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_ext__DOT__Memory
                                                     [0U][3U] 
                                                     >> 0xaU))))))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_7) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__acknum 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__dFirst)
                          ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_auto_in_d_bits_source)
                          : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__acknum) 
                             - ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_clint_fragmenter_out_a_bits_opcode)) 
                                | (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_auto_in_d_bits_size))))));
        }
        if ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT__counter))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT__prescaler 
                = (0xffffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT__pulse)
                               ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__div)
                               : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT__prescaler) 
                                  - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT___T_6) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT__counter 
                = (0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT__counter) 
                           - (IData)(1U)));
        } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT___T_5) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txm__DOT__counter 
                = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__nstop)
                     ? 0U : 0xaU) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__nstop)
                                      ? 0xbU : 0U));
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4550(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4550\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT___GEN_1) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__prescaler 
            = (0x1fffU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__restore)
                            ? (0xfffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__div) 
                                         >> 4U)) : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__prescaler)) 
                          - (1U & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__restore) 
                                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__rxm__DOT__sample_count) 
                                         < (0xfU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__div))))))));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__acknum = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_1160) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter 
                = (7U & ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter))
                          ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter) 
                             - (IData)(1U)) : ((4U 
                                                == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_debug_fragmenter_out_a_bits_opcode))
                                                ? (~ 
                                                   (0x3ffU 
                                                    & (((IData)(0x3fU) 
                                                        << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___coupler_to_debug_auto_tl_in_d_bits_size)) 
                                                       >> 3U)))
                                                : 0U)));
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_1)
                          ? ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_debug_fragmenter_out_a_bits_opcode))
                              ? (~ (0x3ffU & (((IData)(0x3fU) 
                                               << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___coupler_to_debug_auto_tl_in_d_bits_size)) 
                                              >> 3U)))
                              : 0U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1) 
                                       - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___T_7) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__acknum 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__dFirst)
                          ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_source)
                          : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__acknum) 
                             - ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_debug_fragmenter_out_a_bits_opcode)) 
                                | (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size))))));
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4551(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4551\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_527 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x20fU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x20fU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_527))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_526 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x20eU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x20eU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_526))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_525 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x20dU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x20dU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_525))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_524 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x20cU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x20cU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_524))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_523 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x20bU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x20bU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_523))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_522 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x20aU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x20aU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_522))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4552(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4552\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_521 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x209U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x209U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_521))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_520 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x208U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x208U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_520))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_519 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x207U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x207U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_519))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_518 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x206U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x206U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_518))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_517 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x205U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x205U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_517))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_516 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x204U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x204U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_516))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4553(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4553\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_515 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x203U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x203U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_515))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_514 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x202U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x202U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_514))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_513 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x201U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x201U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_513))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_512 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x200U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x200U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_512))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_511 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x1ffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x1ffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_511))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_510 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x1feU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x1feU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_510))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4554(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4554\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_509 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x1fdU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x1fdU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_509))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_508 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x1fcU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x1fcU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_508))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_507 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x1fbU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x1fbU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_507))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_506 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x1faU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x1faU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_506))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_505 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x1f9U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x1f9U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_505))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_504 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x1f8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x1f8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_504))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4555(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4555\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_503 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x1f7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x1f7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_503))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_502 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x1f6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x1f6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_502))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_501 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x1f5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x1f5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_501))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_500 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x1f4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x1f4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_500))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_499 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x1f3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x1f3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_499))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_498 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x1f2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x1f2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_498))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4556(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4556\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_497 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x1f1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x1f1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_497))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_496 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x1f0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x1f0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_496))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_495 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x1efU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x1efU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_495))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_494 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x1eeU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x1eeU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_494))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_493 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x1edU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x1edU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_493))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_492 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT___T_3) 
                  & (0x1ecU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source)))) 
              & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__a_first_done) 
                  & (0x1ecU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___reset_setter_auto_tl_in_d_bits_source))) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fixer__DOT__flight_492))));
}
