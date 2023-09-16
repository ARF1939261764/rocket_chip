// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestDriver___024root.h"

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4675(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4675\n"); );
    // Body
    if (((((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__valids_2_0) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__valids_2_1)) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__valids_2_2)) 
             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__valids_2_3)) 
            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__valids_2_4)) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__valids_2_5)) 
          | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__valids_2_6)) 
         | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__valids_2_7))) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__timecmp_2 
            = (((QData)((IData)(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__valids_2_7)
                                    ? ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                                        << 0x11U) | 
                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                                        >> 0xfU)) : (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__timecmp_2 
                                                             >> 0x38U))) 
                                  << 0x18U) | ((0xff0000U 
                                                & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__valids_2_6)
                                                     ? 
                                                    ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                                                      << 0x19U) 
                                                     | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                                                        >> 7U))
                                                     : (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__timecmp_2 
                                                                >> 0x30U))) 
                                                   << 0x10U)) 
                                               | ((0xff00U 
                                                   & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__valids_2_5)
                                                        ? 
                                                       ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                                                         << 1U) 
                                                        | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U] 
                                                           >> 0x1fU))
                                                        : (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__timecmp_2 
                                                                   >> 0x28U))) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__valids_2_4)
                                                         ? 
                                                        ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U] 
                                                          << 9U) 
                                                         | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U] 
                                                            >> 0x17U))
                                                         : (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__timecmp_2 
                                                                    >> 0x20U))))))))) 
                << 0x20U) | (QData)((IData)(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__valids_2_3)
                                                ? (
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U] 
                                                    << 0x11U) 
                                                   | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U] 
                                                      >> 0xfU))
                                                : (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__timecmp_2 
                                                           >> 0x18U))) 
                                              << 0x18U) 
                                             | ((0xff0000U 
                                                 & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__valids_2_2)
                                                      ? 
                                                     ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U] 
                                                       << 0x19U) 
                                                      | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U] 
                                                         >> 7U))
                                                      : (IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__timecmp_2 
                                                                 >> 0x10U))) 
                                                    << 0x10U)) 
                                                | ((0xff00U 
                                                    & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__valids_2_1)
                                                         ? 
                                                        ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U] 
                                                          << 1U) 
                                                         | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                            >> 0x1fU))
                                                         : (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__timecmp_2 
                                                                    >> 8U))) 
                                                       << 8U)) 
                                                   | (0xffU 
                                                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__valids_2_0)
                                                          ? 
                                                         ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                           << 9U) 
                                                          | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                             >> 0x17U))
                                                          : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__timecmp_2)))))))));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4676(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4676\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0[0U] 
            = ((0xc0000000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                               << 0xfU)) | (0x3fffffffU 
                                            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0[1U] 
            = (((0x3fff8000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U] 
                                << 0xfU)) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                             >> 0x11U)) 
               | (0xc0000000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U] 
                                 << 0xfU)));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0[2U] 
            = (((0x3fff8000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                                << 0xfU)) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U] 
                                             >> 0x11U)) 
               | (0xc0000000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                                 << 0xfU)));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0[3U] 
            = (0x7fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                        >> 0x11U));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0[0U] 
            = (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                 << 0x1fU) | (0x7ffffe00U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                             >> 1U))) 
               | (0x1ffU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U]));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0[1U] 
            = ((0x1ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                          >> 1U)) | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U] 
                                      << 0x1fU) | (0x7ffffe00U 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                      >> 1U))));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0[2U] 
            = ((0x1ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U] 
                          >> 1U)) | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                                      << 0x1fU) | (0x7ffffe00U 
                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U] 
                                                      >> 1U))));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0[3U] 
            = ((0x1ffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                          >> 1U)) | (0x7ffe00U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                                                  >> 1U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT__enq_ptr_value;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_1092) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_1)
                          ? ((4U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])
                              ? 0U : (~ (0x3ffU & (
                                                   ((IData)(0x3fU) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 6U))) 
                                                   >> 3U))))
                          : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1) 
                             - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_1092) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_1)
                          ? ((4U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])
                              ? 0U : (~ (0x3ffU & (
                                                   ((IData)(0x3fU) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 6U))) 
                                                   >> 3U))))
                          : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1) 
                             - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_1099) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_first_1)
                          ? ((4U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])
                              ? 0U : (~ (0x3ffU & (
                                                   ((IData)(0x3fU) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 6U))) 
                                                   >> 3U))))
                          : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1) 
                             - (IData)(1U))));
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4677(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4677\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1 = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_1099) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__a_first_1)
                          ? ((4U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])
                              ? 0U : (~ (0x3ffU & (
                                                   ((IData)(0x3fU) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 6U))) 
                                                   >> 3U))))
                          : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__a_first_counter_1) 
                             - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__x1_a_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_1)
                          ? ((4U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])
                              ? 0U : (~ (0x3ffU & (
                                                   ((IData)(0x3fU) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 6U))) 
                                                   >> 3U))))
                          : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1) 
                             - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__x1_a_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter_1 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_1)
                              ? ((4U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])
                                  ? 0U : (~ (0xffffffU 
                                             & (((IData)(0xfffU) 
                                                 << 
                                                 (0xfU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 6U))) 
                                                >> 3U))))
                              : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__a_first_counter_1) 
                                 - (IData)(1U))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1 
                = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__a_first_1)
                          ? ((4U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])
                              ? 0U : (~ (0x3ffU & (
                                                   ((IData)(0x3fU) 
                                                    << 
                                                    (7U 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 6U))) 
                                                   >> 3U))))
                          : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__a_first_counter_1) 
                             - (IData)(1U))));
        }
    }
}

extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_hf974e5b2_0;
extern const VlWide<9>/*287:0*/ VTestDriver__ConstPool__CONST_h52851867_0;
extern const VlWide<9>/*287:0*/ VTestDriver__ConstPool__CONST_h2a0d1dfa_0;
extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_h00a54001_0;
extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_h00a4c3f1_0;
extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_hea2bd2fa_0;
extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_h00a54009_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4678(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4678\n"); );
    // Init
    VlWide<9>/*287:0*/ __Vtemp_h2e158b23__0;
    VlWide<17>/*543:0*/ __Vtemp_h342e9238__0;
    VlWide<17>/*543:0*/ __Vtemp_h22492155__0;
    VlWide<17>/*543:0*/ __Vtemp_he69b5c4b__0;
    VlWide<17>/*543:0*/ __Vtemp_h090e9b34__0;
    VlWide<5>/*159:0*/ __Vtemp_h414d8bdf__0;
    VlWide<17>/*543:0*/ __Vtemp_he975f045__0;
    VlWide<17>/*543:0*/ __Vtemp_h0c90b2ad__0;
    VlWide<17>/*543:0*/ __Vtemp_h1dec0934__0;
    VlWide<17>/*543:0*/ __Vtemp_h19f4919a__0;
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1489) {
        __Vtemp_h342e9238__0[0U] = (1U | (0x1eU & (
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 5U)));
        __Vtemp_he975f045__0[0U] = (1U | (0xeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  << 1U)));
    } else {
        __Vtemp_h342e9238__0[0U] = 0U;
        __Vtemp_he975f045__0[0U] = 0U;
    }
    __Vtemp_h342e9238__0[1U] = 0U;
    __Vtemp_h342e9238__0[2U] = 0U;
    __Vtemp_h342e9238__0[3U] = 0U;
    __Vtemp_h342e9238__0[4U] = 0U;
    __Vtemp_h342e9238__0[5U] = 0U;
    __Vtemp_h342e9238__0[6U] = 0U;
    __Vtemp_h342e9238__0[7U] = 0U;
    __Vtemp_h342e9238__0[8U] = 0U;
    __Vtemp_h342e9238__0[9U] = 0U;
    __Vtemp_h342e9238__0[0xaU] = 0U;
    __Vtemp_h342e9238__0[0xbU] = 0U;
    __Vtemp_h342e9238__0[0xcU] = 0U;
    __Vtemp_h342e9238__0[0xdU] = 0U;
    __Vtemp_h342e9238__0[0xeU] = 0U;
    __Vtemp_h342e9238__0[0xfU] = 0U;
    __Vtemp_h342e9238__0[0x10U] = 0U;
    __Vtemp_h22492155__0[0U] = (0x1f8U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                          >> 7U));
    __Vtemp_h22492155__0[1U] = 0U;
    __Vtemp_h22492155__0[2U] = 0U;
    __Vtemp_h22492155__0[3U] = 0U;
    __Vtemp_h22492155__0[4U] = 0U;
    __Vtemp_h22492155__0[5U] = 0U;
    __Vtemp_h22492155__0[6U] = 0U;
    __Vtemp_h22492155__0[7U] = 0U;
    __Vtemp_h22492155__0[8U] = 0U;
    __Vtemp_h22492155__0[9U] = 0U;
    __Vtemp_h22492155__0[0xaU] = 0U;
    __Vtemp_h22492155__0[0xbU] = 0U;
    __Vtemp_h22492155__0[0xcU] = 0U;
    __Vtemp_h22492155__0[0xdU] = 0U;
    __Vtemp_h22492155__0[0xeU] = 0U;
    __Vtemp_h22492155__0[0xfU] = 0U;
    __Vtemp_h22492155__0[0x10U] = 0U;
    VL_SHIFTL_WWW(516,516,516, __Vtemp_he69b5c4b__0, __Vtemp_h342e9238__0, __Vtemp_h22492155__0);
    VL_SHIFTL_WWI(527,527,9, __Vtemp_h090e9b34__0, VTestDriver__ConstPool__CONST_hf974e5b2_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_in_d_bits_source) 
                   << 3U));
    __Vtemp_h2e158b23__0[1U] = (VTestDriver__ConstPool__CONST_h52851867_0[1U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[1U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes[1U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1489)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[1U] 
                                               & __Vtemp_he69b5c4b__0[1U])
                                            : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[1U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1504)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                                                 & __Vtemp_h090e9b34__0[1U])
                                              : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[1U])))));
    __Vtemp_h2e158b23__0[2U] = (VTestDriver__ConstPool__CONST_h52851867_0[2U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[2U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes[2U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1489)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[2U] 
                                               & __Vtemp_he69b5c4b__0[2U])
                                            : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[2U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1504)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                                                 & __Vtemp_h090e9b34__0[2U])
                                              : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[2U])))));
    __Vtemp_h2e158b23__0[3U] = (VTestDriver__ConstPool__CONST_h52851867_0[3U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[3U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes[3U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1489)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[3U] 
                                               & __Vtemp_he69b5c4b__0[3U])
                                            : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[3U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1504)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                                                 & __Vtemp_h090e9b34__0[3U])
                                              : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[3U])))));
    __Vtemp_h2e158b23__0[4U] = (VTestDriver__ConstPool__CONST_h52851867_0[4U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[4U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes[4U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1489)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[4U] 
                                               & __Vtemp_he69b5c4b__0[4U])
                                            : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[4U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1504)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                                 & __Vtemp_h090e9b34__0[4U])
                                              : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[4U])))));
    __Vtemp_h2e158b23__0[5U] = (VTestDriver__ConstPool__CONST_h52851867_0[5U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[5U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes[5U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1489)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[5U] 
                                               & __Vtemp_he69b5c4b__0[5U])
                                            : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[5U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1504)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[5U] 
                                                 & __Vtemp_h090e9b34__0[5U])
                                              : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[5U])))));
    __Vtemp_h2e158b23__0[6U] = (VTestDriver__ConstPool__CONST_h52851867_0[6U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[6U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes[6U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1489)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[6U] 
                                               & __Vtemp_he69b5c4b__0[6U])
                                            : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[6U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1504)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[6U] 
                                                 & __Vtemp_h090e9b34__0[6U])
                                              : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[6U])))));
    __Vtemp_h2e158b23__0[7U] = (VTestDriver__ConstPool__CONST_h52851867_0[7U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[7U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes[7U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1489)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[7U] 
                                               & __Vtemp_he69b5c4b__0[7U])
                                            : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[7U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1504)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[7U] 
                                                 & __Vtemp_h090e9b34__0[7U])
                                              : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[7U])))));
    __Vtemp_h2e158b23__0[8U] = (VTestDriver__ConstPool__CONST_h52851867_0[8U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[8U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes[8U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1489)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[8U] 
                                               & __Vtemp_he69b5c4b__0[8U])
                                            : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[8U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1504)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[8U] 
                                                 & __Vtemp_h090e9b34__0[8U])
                                              : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[8U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes[0U] 
        = (VTestDriver__ConstPool__CONST_h52851867_0[0U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[0U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes[0U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1489)
                       ? (VTestDriver__ConstPool__CONST_h00a54001_0[0U] 
                          & __Vtemp_he69b5c4b__0[0U])
                       : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[0U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1504)
                         ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                            & __Vtemp_h090e9b34__0[0U])
                         : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[0U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vtemp_h2e158b23__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vtemp_h2e158b23__0[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes[3U] 
        = __Vtemp_h2e158b23__0[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes[4U] 
        = __Vtemp_h2e158b23__0[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes[5U] 
        = __Vtemp_h2e158b23__0[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes[6U] 
        = __Vtemp_h2e158b23__0[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes[7U] 
        = __Vtemp_h2e158b23__0[7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_sizes[8U] 
        = __Vtemp_h2e158b23__0[8U];
    __Vtemp_he975f045__0[1U] = 0U;
    __Vtemp_he975f045__0[2U] = 0U;
    __Vtemp_he975f045__0[3U] = 0U;
    __Vtemp_he975f045__0[4U] = 0U;
    __Vtemp_he975f045__0[5U] = 0U;
    __Vtemp_he975f045__0[6U] = 0U;
    __Vtemp_he975f045__0[7U] = 0U;
    __Vtemp_he975f045__0[8U] = 0U;
    __Vtemp_he975f045__0[9U] = 0U;
    __Vtemp_he975f045__0[0xaU] = 0U;
    __Vtemp_he975f045__0[0xbU] = 0U;
    __Vtemp_he975f045__0[0xcU] = 0U;
    __Vtemp_he975f045__0[0xdU] = 0U;
    __Vtemp_he975f045__0[0xeU] = 0U;
    __Vtemp_he975f045__0[0xfU] = 0U;
    __Vtemp_he975f045__0[0x10U] = 0U;
    __Vtemp_h0c90b2ad__0[0U] = (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                         >> 8U));
    __Vtemp_h0c90b2ad__0[1U] = 0U;
    __Vtemp_h0c90b2ad__0[2U] = 0U;
    __Vtemp_h0c90b2ad__0[3U] = 0U;
    __Vtemp_h0c90b2ad__0[4U] = 0U;
    __Vtemp_h0c90b2ad__0[5U] = 0U;
    __Vtemp_h0c90b2ad__0[6U] = 0U;
    __Vtemp_h0c90b2ad__0[7U] = 0U;
    __Vtemp_h0c90b2ad__0[8U] = 0U;
    __Vtemp_h0c90b2ad__0[9U] = 0U;
    __Vtemp_h0c90b2ad__0[0xaU] = 0U;
    __Vtemp_h0c90b2ad__0[0xbU] = 0U;
    __Vtemp_h0c90b2ad__0[0xcU] = 0U;
    __Vtemp_h0c90b2ad__0[0xdU] = 0U;
    __Vtemp_h0c90b2ad__0[0xeU] = 0U;
    __Vtemp_h0c90b2ad__0[0xfU] = 0U;
    __Vtemp_h0c90b2ad__0[0x10U] = 0U;
    VL_SHIFTL_WWW(515,515,515, __Vtemp_h1dec0934__0, __Vtemp_he975f045__0, __Vtemp_h0c90b2ad__0);
    VL_SHIFTL_WWI(527,527,8, __Vtemp_h19f4919a__0, VTestDriver__ConstPool__CONST_hea2bd2fa_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_in_d_bits_source) 
                   << 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        __Vtemp_h414d8bdf__0[1U] = 0U;
        __Vtemp_h414d8bdf__0[2U] = 0U;
        __Vtemp_h414d8bdf__0[3U] = 0U;
        __Vtemp_h414d8bdf__0[4U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_opcodes[0U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight = 0ULL;
    } else {
        __Vtemp_h414d8bdf__0[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_opcodes[1U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1489)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[1U] 
                                            & __Vtemp_h1dec0934__0[1U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1504)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                                                     & __Vtemp_h19f4919a__0[1U])
                                                     : 0U)));
        __Vtemp_h414d8bdf__0[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_opcodes[2U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1489)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[2U] 
                                            & __Vtemp_h1dec0934__0[2U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1504)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                                                     & __Vtemp_h19f4919a__0[2U])
                                                     : 0U)));
        __Vtemp_h414d8bdf__0[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_opcodes[3U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1489)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[3U] 
                                            & __Vtemp_h1dec0934__0[3U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1504)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                                                     & __Vtemp_h19f4919a__0[3U])
                                                     : 0U)));
        __Vtemp_h414d8bdf__0[4U] = (0xfU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_opcodes[4U] 
                                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1489)
                                                 ? 
                                                (VTestDriver__ConstPool__CONST_h00a54009_0[4U] 
                                                 & __Vtemp_h1dec0934__0[4U])
                                                 : 0U)) 
                                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1504)
                                                   ? 
                                                  (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                                   & __Vtemp_h19f4919a__0[4U])
                                                   : 0U))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_opcodes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_opcodes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1489)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[0U] 
                       & __Vtemp_h1dec0934__0[0U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1504)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                         & __Vtemp_h19f4919a__0[0U])
                      : 0U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight 
            = (0x1ffffffffULL & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight 
                                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1489)
                                      ? (1ULL << (0x3fU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0xaU)))
                                      : 0ULL)) & (~ 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT___T_1504)
                                                    ? 
                                                   (1ULL 
                                                    << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_in_d_bits_source))
                                                    : 0ULL))));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_opcodes[1U] 
        = __Vtemp_h414d8bdf__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_opcodes[2U] 
        = __Vtemp_h414d8bdf__0[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_opcodes[3U] 
        = __Vtemp_h414d8bdf__0[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__inflight_opcodes[4U] 
        = __Vtemp_h414d8bdf__0[4U];
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4679(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4679\n"); );
    // Init
    VlWide<9>/*287:0*/ __Vtemp_h3033d43c__0;
    VlWide<17>/*543:0*/ __Vtemp_habfb330d__0;
    VlWide<17>/*543:0*/ __Vtemp_h22492155__0;
    VlWide<17>/*543:0*/ __Vtemp_h555db5a9__0;
    VlWide<17>/*543:0*/ __Vtemp_h090e9b34__0;
    VlWide<5>/*159:0*/ __Vtemp_h9285abb3__0;
    VlWide<17>/*543:0*/ __Vtemp_h99ffce34__0;
    VlWide<17>/*543:0*/ __Vtemp_h0c90b2ad__0;
    VlWide<17>/*543:0*/ __Vtemp_h5682094c__0;
    VlWide<17>/*543:0*/ __Vtemp_h19f4919a__0;
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1489) {
        __Vtemp_habfb330d__0[0U] = (1U | (0x1eU & (
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 5U)));
        __Vtemp_h99ffce34__0[0U] = (1U | (0xeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  << 1U)));
    } else {
        __Vtemp_habfb330d__0[0U] = 0U;
        __Vtemp_h99ffce34__0[0U] = 0U;
    }
    __Vtemp_habfb330d__0[1U] = 0U;
    __Vtemp_habfb330d__0[2U] = 0U;
    __Vtemp_habfb330d__0[3U] = 0U;
    __Vtemp_habfb330d__0[4U] = 0U;
    __Vtemp_habfb330d__0[5U] = 0U;
    __Vtemp_habfb330d__0[6U] = 0U;
    __Vtemp_habfb330d__0[7U] = 0U;
    __Vtemp_habfb330d__0[8U] = 0U;
    __Vtemp_habfb330d__0[9U] = 0U;
    __Vtemp_habfb330d__0[0xaU] = 0U;
    __Vtemp_habfb330d__0[0xbU] = 0U;
    __Vtemp_habfb330d__0[0xcU] = 0U;
    __Vtemp_habfb330d__0[0xdU] = 0U;
    __Vtemp_habfb330d__0[0xeU] = 0U;
    __Vtemp_habfb330d__0[0xfU] = 0U;
    __Vtemp_habfb330d__0[0x10U] = 0U;
    __Vtemp_h22492155__0[0U] = (0x1f8U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                          >> 7U));
    __Vtemp_h22492155__0[1U] = 0U;
    __Vtemp_h22492155__0[2U] = 0U;
    __Vtemp_h22492155__0[3U] = 0U;
    __Vtemp_h22492155__0[4U] = 0U;
    __Vtemp_h22492155__0[5U] = 0U;
    __Vtemp_h22492155__0[6U] = 0U;
    __Vtemp_h22492155__0[7U] = 0U;
    __Vtemp_h22492155__0[8U] = 0U;
    __Vtemp_h22492155__0[9U] = 0U;
    __Vtemp_h22492155__0[0xaU] = 0U;
    __Vtemp_h22492155__0[0xbU] = 0U;
    __Vtemp_h22492155__0[0xcU] = 0U;
    __Vtemp_h22492155__0[0xdU] = 0U;
    __Vtemp_h22492155__0[0xeU] = 0U;
    __Vtemp_h22492155__0[0xfU] = 0U;
    __Vtemp_h22492155__0[0x10U] = 0U;
    VL_SHIFTL_WWW(516,516,516, __Vtemp_h555db5a9__0, __Vtemp_habfb330d__0, __Vtemp_h22492155__0);
    VL_SHIFTL_WWI(527,527,9, __Vtemp_h090e9b34__0, VTestDriver__ConstPool__CONST_hf974e5b2_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_in_d_bits_source) 
                   << 3U));
    __Vtemp_h3033d43c__0[1U] = (VTestDriver__ConstPool__CONST_h52851867_0[1U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[1U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[1U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1489)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[1U] 
                                               & __Vtemp_h555db5a9__0[1U])
                                            : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[1U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1504)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                                                 & __Vtemp_h090e9b34__0[1U])
                                              : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[1U])))));
    __Vtemp_h3033d43c__0[2U] = (VTestDriver__ConstPool__CONST_h52851867_0[2U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[2U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[2U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1489)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[2U] 
                                               & __Vtemp_h555db5a9__0[2U])
                                            : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[2U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1504)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                                                 & __Vtemp_h090e9b34__0[2U])
                                              : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[2U])))));
    __Vtemp_h3033d43c__0[3U] = (VTestDriver__ConstPool__CONST_h52851867_0[3U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[3U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[3U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1489)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[3U] 
                                               & __Vtemp_h555db5a9__0[3U])
                                            : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[3U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1504)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                                                 & __Vtemp_h090e9b34__0[3U])
                                              : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[3U])))));
    __Vtemp_h3033d43c__0[4U] = (VTestDriver__ConstPool__CONST_h52851867_0[4U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[4U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[4U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1489)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[4U] 
                                               & __Vtemp_h555db5a9__0[4U])
                                            : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[4U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1504)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                                 & __Vtemp_h090e9b34__0[4U])
                                              : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[4U])))));
    __Vtemp_h3033d43c__0[5U] = (VTestDriver__ConstPool__CONST_h52851867_0[5U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[5U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[5U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1489)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[5U] 
                                               & __Vtemp_h555db5a9__0[5U])
                                            : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[5U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1504)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[5U] 
                                                 & __Vtemp_h090e9b34__0[5U])
                                              : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[5U])))));
    __Vtemp_h3033d43c__0[6U] = (VTestDriver__ConstPool__CONST_h52851867_0[6U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[6U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[6U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1489)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[6U] 
                                               & __Vtemp_h555db5a9__0[6U])
                                            : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[6U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1504)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[6U] 
                                                 & __Vtemp_h090e9b34__0[6U])
                                              : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[6U])))));
    __Vtemp_h3033d43c__0[7U] = (VTestDriver__ConstPool__CONST_h52851867_0[7U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[7U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[7U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1489)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[7U] 
                                               & __Vtemp_h555db5a9__0[7U])
                                            : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[7U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1504)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[7U] 
                                                 & __Vtemp_h090e9b34__0[7U])
                                              : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[7U])))));
    __Vtemp_h3033d43c__0[8U] = (VTestDriver__ConstPool__CONST_h52851867_0[8U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[8U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[8U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1489)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[8U] 
                                               & __Vtemp_h555db5a9__0[8U])
                                            : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[8U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1504)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[8U] 
                                                 & __Vtemp_h090e9b34__0[8U])
                                              : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[8U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0U] 
        = (VTestDriver__ConstPool__CONST_h52851867_0[0U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[0U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[0U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1489)
                       ? (VTestDriver__ConstPool__CONST_h00a54001_0[0U] 
                          & __Vtemp_h555db5a9__0[0U])
                       : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[0U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1504)
                         ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                            & __Vtemp_h090e9b34__0[0U])
                         : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[0U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vtemp_h3033d43c__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vtemp_h3033d43c__0[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[3U] 
        = __Vtemp_h3033d43c__0[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[4U] 
        = __Vtemp_h3033d43c__0[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[5U] 
        = __Vtemp_h3033d43c__0[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[6U] 
        = __Vtemp_h3033d43c__0[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[7U] 
        = __Vtemp_h3033d43c__0[7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_sizes[8U] 
        = __Vtemp_h3033d43c__0[8U];
    __Vtemp_h99ffce34__0[1U] = 0U;
    __Vtemp_h99ffce34__0[2U] = 0U;
    __Vtemp_h99ffce34__0[3U] = 0U;
    __Vtemp_h99ffce34__0[4U] = 0U;
    __Vtemp_h99ffce34__0[5U] = 0U;
    __Vtemp_h99ffce34__0[6U] = 0U;
    __Vtemp_h99ffce34__0[7U] = 0U;
    __Vtemp_h99ffce34__0[8U] = 0U;
    __Vtemp_h99ffce34__0[9U] = 0U;
    __Vtemp_h99ffce34__0[0xaU] = 0U;
    __Vtemp_h99ffce34__0[0xbU] = 0U;
    __Vtemp_h99ffce34__0[0xcU] = 0U;
    __Vtemp_h99ffce34__0[0xdU] = 0U;
    __Vtemp_h99ffce34__0[0xeU] = 0U;
    __Vtemp_h99ffce34__0[0xfU] = 0U;
    __Vtemp_h99ffce34__0[0x10U] = 0U;
    __Vtemp_h0c90b2ad__0[0U] = (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                         >> 8U));
    __Vtemp_h0c90b2ad__0[1U] = 0U;
    __Vtemp_h0c90b2ad__0[2U] = 0U;
    __Vtemp_h0c90b2ad__0[3U] = 0U;
    __Vtemp_h0c90b2ad__0[4U] = 0U;
    __Vtemp_h0c90b2ad__0[5U] = 0U;
    __Vtemp_h0c90b2ad__0[6U] = 0U;
    __Vtemp_h0c90b2ad__0[7U] = 0U;
    __Vtemp_h0c90b2ad__0[8U] = 0U;
    __Vtemp_h0c90b2ad__0[9U] = 0U;
    __Vtemp_h0c90b2ad__0[0xaU] = 0U;
    __Vtemp_h0c90b2ad__0[0xbU] = 0U;
    __Vtemp_h0c90b2ad__0[0xcU] = 0U;
    __Vtemp_h0c90b2ad__0[0xdU] = 0U;
    __Vtemp_h0c90b2ad__0[0xeU] = 0U;
    __Vtemp_h0c90b2ad__0[0xfU] = 0U;
    __Vtemp_h0c90b2ad__0[0x10U] = 0U;
    VL_SHIFTL_WWW(515,515,515, __Vtemp_h5682094c__0, __Vtemp_h99ffce34__0, __Vtemp_h0c90b2ad__0);
    VL_SHIFTL_WWI(527,527,8, __Vtemp_h19f4919a__0, VTestDriver__ConstPool__CONST_hea2bd2fa_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_in_d_bits_source) 
                   << 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        __Vtemp_h9285abb3__0[1U] = 0U;
        __Vtemp_h9285abb3__0[2U] = 0U;
        __Vtemp_h9285abb3__0[3U] = 0U;
        __Vtemp_h9285abb3__0[4U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight = 0ULL;
    } else {
        __Vtemp_h9285abb3__0[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[1U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1489)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[1U] 
                                            & __Vtemp_h5682094c__0[1U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1504)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                                                     & __Vtemp_h19f4919a__0[1U])
                                                     : 0U)));
        __Vtemp_h9285abb3__0[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[2U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1489)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[2U] 
                                            & __Vtemp_h5682094c__0[2U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1504)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                                                     & __Vtemp_h19f4919a__0[2U])
                                                     : 0U)));
        __Vtemp_h9285abb3__0[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[3U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1489)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[3U] 
                                            & __Vtemp_h5682094c__0[3U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1504)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                                                     & __Vtemp_h19f4919a__0[3U])
                                                     : 0U)));
        __Vtemp_h9285abb3__0[4U] = (0xfU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[4U] 
                                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1489)
                                                 ? 
                                                (VTestDriver__ConstPool__CONST_h00a54009_0[4U] 
                                                 & __Vtemp_h5682094c__0[4U])
                                                 : 0U)) 
                                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1504)
                                                   ? 
                                                  (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                                   & __Vtemp_h19f4919a__0[4U])
                                                   : 0U))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1489)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[0U] 
                       & __Vtemp_h5682094c__0[0U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1504)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                         & __Vtemp_h19f4919a__0[0U])
                      : 0U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight 
            = (0x1ffffffffULL & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight 
                                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1489)
                                      ? (1ULL << (0x3fU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0xaU)))
                                      : 0ULL)) & (~ 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT___T_1504)
                                                    ? 
                                                   (1ULL 
                                                    << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_in_d_bits_source))
                                                    : 0ULL))));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[1U] 
        = __Vtemp_h9285abb3__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[2U] 
        = __Vtemp_h9285abb3__0[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[3U] 
        = __Vtemp_h9285abb3__0[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__inflight_opcodes[4U] 
        = __Vtemp_h9285abb3__0[4U];
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4680(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4680\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h559621f6__0;
    VlWide<17>/*543:0*/ __Vtemp_he376ceae__0;
    VlWide<17>/*543:0*/ __Vtemp_h1fbc3ea4__0;
    VlWide<17>/*543:0*/ __Vtemp_h1f464631__0;
    VlWide<5>/*159:0*/ __Vtemp_h420ad4a5__0;
    VlWide<17>/*543:0*/ __Vtemp_h09e4caf6__0;
    VlWide<17>/*543:0*/ __Vtemp_h6d3b0a02__0;
    VlWide<17>/*543:0*/ __Vtemp_h1f464631__1;
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_1023) {
        __Vtemp_he376ceae__0[0U] = (1U | (0xeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  << 1U)));
        __Vtemp_h09e4caf6__0[0U] = (1U | (0xeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 5U)));
    } else {
        __Vtemp_he376ceae__0[0U] = 0U;
        __Vtemp_h09e4caf6__0[0U] = 0U;
    }
    __Vtemp_he376ceae__0[1U] = 0U;
    __Vtemp_he376ceae__0[2U] = 0U;
    __Vtemp_he376ceae__0[3U] = 0U;
    __Vtemp_he376ceae__0[4U] = 0U;
    __Vtemp_he376ceae__0[5U] = 0U;
    __Vtemp_he376ceae__0[6U] = 0U;
    __Vtemp_he376ceae__0[7U] = 0U;
    __Vtemp_he376ceae__0[8U] = 0U;
    __Vtemp_he376ceae__0[9U] = 0U;
    __Vtemp_he376ceae__0[0xaU] = 0U;
    __Vtemp_he376ceae__0[0xbU] = 0U;
    __Vtemp_he376ceae__0[0xcU] = 0U;
    __Vtemp_he376ceae__0[0xdU] = 0U;
    __Vtemp_he376ceae__0[0xeU] = 0U;
    __Vtemp_he376ceae__0[0xfU] = 0U;
    __Vtemp_he376ceae__0[0x10U] = 0U;
    VL_SHIFTL_WWI(515,515,8, __Vtemp_h1fbc3ea4__0, __Vtemp_he376ceae__0, 
                  (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 8U)));
    VL_SHIFTL_WWI(527,527,8, __Vtemp_h1f464631__0, VTestDriver__ConstPool__CONST_hea2bd2fa_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___coupler_to_debug_auto_tl_in_d_bits_source) 
                   << 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight = 0ULL;
        __Vtemp_h559621f6__0[1U] = 0U;
        __Vtemp_h559621f6__0[2U] = 0U;
        __Vtemp_h559621f6__0[3U] = 0U;
        __Vtemp_h559621f6__0[4U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[0U] = 0U;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight 
            = (0x1ffffffffULL & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight 
                                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_1023)
                                      ? (1ULL << (0x3fU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0xaU)))
                                      : 0ULL)) & (~ 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_1038)
                                                    ? 
                                                   (1ULL 
                                                    << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___coupler_to_debug_auto_tl_in_d_bits_source))
                                                    : 0ULL))));
        __Vtemp_h559621f6__0[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[1U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_1023)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[1U] 
                                            & __Vtemp_h1fbc3ea4__0[1U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_1038)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                                                     & __Vtemp_h1f464631__0[1U])
                                                     : 0U)));
        __Vtemp_h559621f6__0[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[2U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_1023)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[2U] 
                                            & __Vtemp_h1fbc3ea4__0[2U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_1038)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                                                     & __Vtemp_h1f464631__0[2U])
                                                     : 0U)));
        __Vtemp_h559621f6__0[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[3U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_1023)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[3U] 
                                            & __Vtemp_h1fbc3ea4__0[3U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_1038)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                                                     & __Vtemp_h1f464631__0[3U])
                                                     : 0U)));
        __Vtemp_h559621f6__0[4U] = (0xfU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[4U] 
                                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_1023)
                                                 ? 
                                                (VTestDriver__ConstPool__CONST_h00a54009_0[4U] 
                                                 & __Vtemp_h1fbc3ea4__0[4U])
                                                 : 0U)) 
                                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_1038)
                                                   ? 
                                                  (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                                   & __Vtemp_h1f464631__0[4U])
                                                   : 0U))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_1023)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[0U] 
                       & __Vtemp_h1fbc3ea4__0[0U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_1038)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                         & __Vtemp_h1f464631__0[0U])
                      : 0U)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[1U] 
        = __Vtemp_h559621f6__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[2U] 
        = __Vtemp_h559621f6__0[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[3U] 
        = __Vtemp_h559621f6__0[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[4U] 
        = __Vtemp_h559621f6__0[4U];
    __Vtemp_h09e4caf6__0[1U] = 0U;
    __Vtemp_h09e4caf6__0[2U] = 0U;
    __Vtemp_h09e4caf6__0[3U] = 0U;
    __Vtemp_h09e4caf6__0[4U] = 0U;
    __Vtemp_h09e4caf6__0[5U] = 0U;
    __Vtemp_h09e4caf6__0[6U] = 0U;
    __Vtemp_h09e4caf6__0[7U] = 0U;
    __Vtemp_h09e4caf6__0[8U] = 0U;
    __Vtemp_h09e4caf6__0[9U] = 0U;
    __Vtemp_h09e4caf6__0[0xaU] = 0U;
    __Vtemp_h09e4caf6__0[0xbU] = 0U;
    __Vtemp_h09e4caf6__0[0xcU] = 0U;
    __Vtemp_h09e4caf6__0[0xdU] = 0U;
    __Vtemp_h09e4caf6__0[0xeU] = 0U;
    __Vtemp_h09e4caf6__0[0xfU] = 0U;
    __Vtemp_h09e4caf6__0[0x10U] = 0U;
    VL_SHIFTL_WWI(515,515,8, __Vtemp_h6d3b0a02__0, __Vtemp_h09e4caf6__0, 
                  (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 8U)));
    VL_SHIFTL_WWI(527,527,8, __Vtemp_h1f464631__1, VTestDriver__ConstPool__CONST_hea2bd2fa_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___coupler_to_debug_auto_tl_in_d_bits_source) 
                   << 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        __Vtemp_h420ad4a5__0[1U] = 0U;
        __Vtemp_h420ad4a5__0[2U] = 0U;
        __Vtemp_h420ad4a5__0[3U] = 0U;
        __Vtemp_h420ad4a5__0[4U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[0U] = 0U;
    } else {
        __Vtemp_h420ad4a5__0[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[1U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_1023)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[1U] 
                                            & __Vtemp_h6d3b0a02__0[1U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_1038)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                                                     & __Vtemp_h1f464631__1[1U])
                                                     : 0U)));
        __Vtemp_h420ad4a5__0[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[2U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_1023)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[2U] 
                                            & __Vtemp_h6d3b0a02__0[2U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_1038)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                                                     & __Vtemp_h1f464631__1[2U])
                                                     : 0U)));
        __Vtemp_h420ad4a5__0[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[3U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_1023)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[3U] 
                                            & __Vtemp_h6d3b0a02__0[3U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_1038)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                                                     & __Vtemp_h1f464631__1[3U])
                                                     : 0U)));
        __Vtemp_h420ad4a5__0[4U] = (0xfU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[4U] 
                                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_1023)
                                                 ? 
                                                (VTestDriver__ConstPool__CONST_h00a54009_0[4U] 
                                                 & __Vtemp_h6d3b0a02__0[4U])
                                                 : 0U)) 
                                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_1038)
                                                   ? 
                                                  (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                                   & __Vtemp_h1f464631__1[4U])
                                                   : 0U))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_1023)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[0U] 
                       & __Vtemp_h6d3b0a02__0[0U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_1038)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                         & __Vtemp_h1f464631__1[0U])
                      : 0U)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vtemp_h420ad4a5__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vtemp_h420ad4a5__0[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[3U] 
        = __Vtemp_h420ad4a5__0[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[4U] 
        = __Vtemp_h420ad4a5__0[4U];
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4681(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4681\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_ha1877f54__0;
    VlWide<17>/*543:0*/ __Vtemp_h94538c24__0;
    VlWide<17>/*543:0*/ __Vtemp_hebe8f16b__0;
    VlWide<17>/*543:0*/ __Vtemp_h4dd0599a__0;
    VlWide<5>/*159:0*/ __Vtemp_h15e90cdc__0;
    VlWide<17>/*543:0*/ __Vtemp_h5c7172fc__0;
    VlWide<17>/*543:0*/ __Vtemp_h88c6a9d1__0;
    VlWide<17>/*543:0*/ __Vtemp_h4dd0599a__1;
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_1023) {
        __Vtemp_h94538c24__0[0U] = (1U | (0xeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  << 1U)));
        __Vtemp_h5c7172fc__0[0U] = (1U | (0xeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 5U)));
    } else {
        __Vtemp_h94538c24__0[0U] = 0U;
        __Vtemp_h5c7172fc__0[0U] = 0U;
    }
    __Vtemp_h94538c24__0[1U] = 0U;
    __Vtemp_h94538c24__0[2U] = 0U;
    __Vtemp_h94538c24__0[3U] = 0U;
    __Vtemp_h94538c24__0[4U] = 0U;
    __Vtemp_h94538c24__0[5U] = 0U;
    __Vtemp_h94538c24__0[6U] = 0U;
    __Vtemp_h94538c24__0[7U] = 0U;
    __Vtemp_h94538c24__0[8U] = 0U;
    __Vtemp_h94538c24__0[9U] = 0U;
    __Vtemp_h94538c24__0[0xaU] = 0U;
    __Vtemp_h94538c24__0[0xbU] = 0U;
    __Vtemp_h94538c24__0[0xcU] = 0U;
    __Vtemp_h94538c24__0[0xdU] = 0U;
    __Vtemp_h94538c24__0[0xeU] = 0U;
    __Vtemp_h94538c24__0[0xfU] = 0U;
    __Vtemp_h94538c24__0[0x10U] = 0U;
    VL_SHIFTL_WWI(515,515,8, __Vtemp_hebe8f16b__0, __Vtemp_h94538c24__0, 
                  (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 8U)));
    VL_SHIFTL_WWI(527,527,8, __Vtemp_h4dd0599a__0, VTestDriver__ConstPool__CONST_hea2bd2fa_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___coupler_to_clint_auto_tl_in_d_bits_source) 
                   << 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight = 0ULL;
        __Vtemp_ha1877f54__0[1U] = 0U;
        __Vtemp_ha1877f54__0[2U] = 0U;
        __Vtemp_ha1877f54__0[3U] = 0U;
        __Vtemp_ha1877f54__0[4U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[0U] = 0U;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight 
            = (0x1ffffffffULL & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight 
                                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_1023)
                                      ? (1ULL << (0x3fU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0xaU)))
                                      : 0ULL)) & (~ 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_1038)
                                                    ? 
                                                   (1ULL 
                                                    << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___coupler_to_clint_auto_tl_in_d_bits_source))
                                                    : 0ULL))));
        __Vtemp_ha1877f54__0[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[1U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_1023)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[1U] 
                                            & __Vtemp_hebe8f16b__0[1U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_1038)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                                                     & __Vtemp_h4dd0599a__0[1U])
                                                     : 0U)));
        __Vtemp_ha1877f54__0[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[2U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_1023)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[2U] 
                                            & __Vtemp_hebe8f16b__0[2U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_1038)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                                                     & __Vtemp_h4dd0599a__0[2U])
                                                     : 0U)));
        __Vtemp_ha1877f54__0[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[3U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_1023)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[3U] 
                                            & __Vtemp_hebe8f16b__0[3U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_1038)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                                                     & __Vtemp_h4dd0599a__0[3U])
                                                     : 0U)));
        __Vtemp_ha1877f54__0[4U] = (0xfU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[4U] 
                                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_1023)
                                                 ? 
                                                (VTestDriver__ConstPool__CONST_h00a54009_0[4U] 
                                                 & __Vtemp_hebe8f16b__0[4U])
                                                 : 0U)) 
                                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_1038)
                                                   ? 
                                                  (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                                   & __Vtemp_h4dd0599a__0[4U])
                                                   : 0U))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_1023)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[0U] 
                       & __Vtemp_hebe8f16b__0[0U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_1038)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                         & __Vtemp_h4dd0599a__0[0U])
                      : 0U)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[1U] 
        = __Vtemp_ha1877f54__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[2U] 
        = __Vtemp_ha1877f54__0[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[3U] 
        = __Vtemp_ha1877f54__0[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[4U] 
        = __Vtemp_ha1877f54__0[4U];
    __Vtemp_h5c7172fc__0[1U] = 0U;
    __Vtemp_h5c7172fc__0[2U] = 0U;
    __Vtemp_h5c7172fc__0[3U] = 0U;
    __Vtemp_h5c7172fc__0[4U] = 0U;
    __Vtemp_h5c7172fc__0[5U] = 0U;
    __Vtemp_h5c7172fc__0[6U] = 0U;
    __Vtemp_h5c7172fc__0[7U] = 0U;
    __Vtemp_h5c7172fc__0[8U] = 0U;
    __Vtemp_h5c7172fc__0[9U] = 0U;
    __Vtemp_h5c7172fc__0[0xaU] = 0U;
    __Vtemp_h5c7172fc__0[0xbU] = 0U;
    __Vtemp_h5c7172fc__0[0xcU] = 0U;
    __Vtemp_h5c7172fc__0[0xdU] = 0U;
    __Vtemp_h5c7172fc__0[0xeU] = 0U;
    __Vtemp_h5c7172fc__0[0xfU] = 0U;
    __Vtemp_h5c7172fc__0[0x10U] = 0U;
    VL_SHIFTL_WWI(515,515,8, __Vtemp_h88c6a9d1__0, __Vtemp_h5c7172fc__0, 
                  (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 8U)));
    VL_SHIFTL_WWI(527,527,8, __Vtemp_h4dd0599a__1, VTestDriver__ConstPool__CONST_hea2bd2fa_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___coupler_to_clint_auto_tl_in_d_bits_source) 
                   << 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        __Vtemp_h15e90cdc__0[1U] = 0U;
        __Vtemp_h15e90cdc__0[2U] = 0U;
        __Vtemp_h15e90cdc__0[3U] = 0U;
        __Vtemp_h15e90cdc__0[4U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[0U] = 0U;
    } else {
        __Vtemp_h15e90cdc__0[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[1U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_1023)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[1U] 
                                            & __Vtemp_h88c6a9d1__0[1U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_1038)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                                                     & __Vtemp_h4dd0599a__1[1U])
                                                     : 0U)));
        __Vtemp_h15e90cdc__0[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[2U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_1023)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[2U] 
                                            & __Vtemp_h88c6a9d1__0[2U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_1038)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                                                     & __Vtemp_h4dd0599a__1[2U])
                                                     : 0U)));
        __Vtemp_h15e90cdc__0[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[3U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_1023)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[3U] 
                                            & __Vtemp_h88c6a9d1__0[3U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_1038)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                                                     & __Vtemp_h4dd0599a__1[3U])
                                                     : 0U)));
        __Vtemp_h15e90cdc__0[4U] = (0xfU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[4U] 
                                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_1023)
                                                 ? 
                                                (VTestDriver__ConstPool__CONST_h00a54009_0[4U] 
                                                 & __Vtemp_h88c6a9d1__0[4U])
                                                 : 0U)) 
                                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_1038)
                                                   ? 
                                                  (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                                   & __Vtemp_h4dd0599a__1[4U])
                                                   : 0U))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_1023)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[0U] 
                       & __Vtemp_h88c6a9d1__0[0U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_1038)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                         & __Vtemp_h4dd0599a__1[0U])
                      : 0U)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vtemp_h15e90cdc__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vtemp_h15e90cdc__0[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[3U] 
        = __Vtemp_h15e90cdc__0[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[4U] 
        = __Vtemp_h15e90cdc__0[4U];
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4682(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4682\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h99b071b7__0;
    VlWide<17>/*543:0*/ __Vtemp_ha8c2961c__0;
    VlWide<17>/*543:0*/ __Vtemp_h8b82fa9b__0;
    VlWide<17>/*543:0*/ __Vtemp_hb39e2fd1__0;
    VlWide<5>/*159:0*/ __Vtemp_h4211b823__0;
    VlWide<17>/*543:0*/ __Vtemp_h0967af64__0;
    VlWide<17>/*543:0*/ __Vtemp_hda008a80__0;
    VlWide<17>/*543:0*/ __Vtemp_hb39e2fd1__1;
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done) {
        __Vtemp_ha8c2961c__0[0U] = (1U | (0xeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 5U)));
        __Vtemp_h0967af64__0[0U] = (1U | (0xeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  << 1U)));
    } else {
        __Vtemp_ha8c2961c__0[0U] = 0U;
        __Vtemp_h0967af64__0[0U] = 0U;
    }
    __Vtemp_ha8c2961c__0[1U] = 0U;
    __Vtemp_ha8c2961c__0[2U] = 0U;
    __Vtemp_ha8c2961c__0[3U] = 0U;
    __Vtemp_ha8c2961c__0[4U] = 0U;
    __Vtemp_ha8c2961c__0[5U] = 0U;
    __Vtemp_ha8c2961c__0[6U] = 0U;
    __Vtemp_ha8c2961c__0[7U] = 0U;
    __Vtemp_ha8c2961c__0[8U] = 0U;
    __Vtemp_ha8c2961c__0[9U] = 0U;
    __Vtemp_ha8c2961c__0[0xaU] = 0U;
    __Vtemp_ha8c2961c__0[0xbU] = 0U;
    __Vtemp_ha8c2961c__0[0xcU] = 0U;
    __Vtemp_ha8c2961c__0[0xdU] = 0U;
    __Vtemp_ha8c2961c__0[0xeU] = 0U;
    __Vtemp_ha8c2961c__0[0xfU] = 0U;
    __Vtemp_ha8c2961c__0[0x10U] = 0U;
    VL_SHIFTL_WWI(515,515,8, __Vtemp_h8b82fa9b__0, __Vtemp_ha8c2961c__0, 
                  (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 8U)));
    VL_SHIFTL_WWI(527,527,8, __Vtemp_hb39e2fd1__0, VTestDriver__ConstPool__CONST_hea2bd2fa_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___coupler_to_bootrom_auto_tl_in_d_bits_source) 
                   << 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight = 0ULL;
        __Vtemp_h99b071b7__0[1U] = 0U;
        __Vtemp_h99b071b7__0[2U] = 0U;
        __Vtemp_h99b071b7__0[3U] = 0U;
        __Vtemp_h99b071b7__0[4U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[0U] = 0U;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight 
            = (0x1ffffffffULL & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight 
                                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done)
                                      ? (1ULL << (0x3fU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0xaU)))
                                      : 0ULL)) & (~ 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___T_1030)
                                                    ? 
                                                   (1ULL 
                                                    << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___coupler_to_bootrom_auto_tl_in_d_bits_source))
                                                    : 0ULL))));
        __Vtemp_h99b071b7__0[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[1U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[1U] 
                                            & __Vtemp_h8b82fa9b__0[1U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___T_1030)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                                                     & __Vtemp_hb39e2fd1__0[1U])
                                                     : 0U)));
        __Vtemp_h99b071b7__0[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[2U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[2U] 
                                            & __Vtemp_h8b82fa9b__0[2U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___T_1030)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                                                     & __Vtemp_hb39e2fd1__0[2U])
                                                     : 0U)));
        __Vtemp_h99b071b7__0[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[3U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[3U] 
                                            & __Vtemp_h8b82fa9b__0[3U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___T_1030)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                                                     & __Vtemp_hb39e2fd1__0[3U])
                                                     : 0U)));
        __Vtemp_h99b071b7__0[4U] = (0xfU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[4U] 
                                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done)
                                                 ? 
                                                (VTestDriver__ConstPool__CONST_h00a54009_0[4U] 
                                                 & __Vtemp_h8b82fa9b__0[4U])
                                                 : 0U)) 
                                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___T_1030)
                                                   ? 
                                                  (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                                   & __Vtemp_hb39e2fd1__0[4U])
                                                   : 0U))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[0U] 
                       & __Vtemp_h8b82fa9b__0[0U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___T_1030)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                         & __Vtemp_hb39e2fd1__0[0U])
                      : 0U)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vtemp_h99b071b7__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vtemp_h99b071b7__0[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[3U] 
        = __Vtemp_h99b071b7__0[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[4U] 
        = __Vtemp_h99b071b7__0[4U];
    __Vtemp_h0967af64__0[1U] = 0U;
    __Vtemp_h0967af64__0[2U] = 0U;
    __Vtemp_h0967af64__0[3U] = 0U;
    __Vtemp_h0967af64__0[4U] = 0U;
    __Vtemp_h0967af64__0[5U] = 0U;
    __Vtemp_h0967af64__0[6U] = 0U;
    __Vtemp_h0967af64__0[7U] = 0U;
    __Vtemp_h0967af64__0[8U] = 0U;
    __Vtemp_h0967af64__0[9U] = 0U;
    __Vtemp_h0967af64__0[0xaU] = 0U;
    __Vtemp_h0967af64__0[0xbU] = 0U;
    __Vtemp_h0967af64__0[0xcU] = 0U;
    __Vtemp_h0967af64__0[0xdU] = 0U;
    __Vtemp_h0967af64__0[0xeU] = 0U;
    __Vtemp_h0967af64__0[0xfU] = 0U;
    __Vtemp_h0967af64__0[0x10U] = 0U;
    VL_SHIFTL_WWI(515,515,8, __Vtemp_hda008a80__0, __Vtemp_h0967af64__0, 
                  (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 8U)));
    VL_SHIFTL_WWI(527,527,8, __Vtemp_hb39e2fd1__1, VTestDriver__ConstPool__CONST_hea2bd2fa_0, 
                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___coupler_to_bootrom_auto_tl_in_d_bits_source) 
                   << 2U));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        __Vtemp_h4211b823__0[1U] = 0U;
        __Vtemp_h4211b823__0[2U] = 0U;
        __Vtemp_h4211b823__0[3U] = 0U;
        __Vtemp_h4211b823__0[4U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[0U] = 0U;
    } else {
        __Vtemp_h4211b823__0[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[1U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[1U] 
                                            & __Vtemp_hda008a80__0[1U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___T_1030)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                                                     & __Vtemp_hb39e2fd1__1[1U])
                                                     : 0U)));
        __Vtemp_h4211b823__0[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[2U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[2U] 
                                            & __Vtemp_hda008a80__0[2U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___T_1030)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                                                     & __Vtemp_hb39e2fd1__1[2U])
                                                     : 0U)));
        __Vtemp_h4211b823__0[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[3U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[3U] 
                                            & __Vtemp_hda008a80__0[3U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___T_1030)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                                                     & __Vtemp_hb39e2fd1__1[3U])
                                                     : 0U)));
        __Vtemp_h4211b823__0[4U] = (0xfU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[4U] 
                                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done)
                                                 ? 
                                                (VTestDriver__ConstPool__CONST_h00a54009_0[4U] 
                                                 & __Vtemp_hda008a80__0[4U])
                                                 : 0U)) 
                                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___T_1030)
                                                   ? 
                                                  (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                                   & __Vtemp_hb39e2fd1__1[4U])
                                                   : 0U))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__a_first_done)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[0U] 
                       & __Vtemp_hda008a80__0[0U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT___T_1030)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                         & __Vtemp_hb39e2fd1__1[0U])
                      : 0U)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[1U] 
        = __Vtemp_h4211b823__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[2U] 
        = __Vtemp_h4211b823__0[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[3U] 
        = __Vtemp_h4211b823__0[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[4U] 
        = __Vtemp_h4211b823__0[4U];
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4683(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4683\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1 = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__time_0 = 0ULL;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT__do_deq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_1)
                              ? ((4U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])
                                  ? 0U : (~ (0xffffffU 
                                             & (((IData)(0xfffU) 
                                                 << 
                                                 (0xfU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 6U))) 
                                                >> 3U))))
                              : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__monitor__DOT__a_first_counter_1) 
                                 - (IData)(1U))));
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_1)
                              ? ((4U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U])
                                  ? 0U : (~ (0xffffffU 
                                             & (((IData)(0xfffU) 
                                                 << 
                                                 (0xfU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 6U))) 
                                                >> 3U))))
                              : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1) 
                                 - (IData)(1U))));
        }
        if (((((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__valids_4_0) 
                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__valids_4_1)) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__valids_4_2)) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__valids_4_3)) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__valids_4_4)) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__valids_4_5)) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__valids_4_6)) 
             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__valids_4_7))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__time_0 
                = (((QData)((IData)(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__valids_4_7)
                                        ? ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                                            << 0x11U) 
                                           | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                                              >> 0xfU))
                                        : (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__time_0 
                                                   >> 0x38U))) 
                                      << 0x18U) | (
                                                   (0xff0000U 
                                                    & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__valids_4_6)
                                                         ? 
                                                        ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                                                          << 0x19U) 
                                                         | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                                                            >> 7U))
                                                         : (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__time_0 
                                                                    >> 0x30U))) 
                                                       << 0x10U)) 
                                                   | ((0xff00U 
                                                       & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__valids_4_5)
                                                            ? 
                                                           ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[3U] 
                                                             << 1U) 
                                                            | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U] 
                                                               >> 0x1fU))
                                                            : (IData)(
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__time_0 
                                                                       >> 0x28U))) 
                                                          << 8U)) 
                                                      | (0xffU 
                                                         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__valids_4_4)
                                                             ? 
                                                            ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U] 
                                                              << 9U) 
                                                             | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U] 
                                                                >> 0x17U))
                                                             : (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__time_0 
                                                                        >> 0x20U))))))))) 
                    << 0x20U) | (QData)((IData)(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__valids_4_3)
                                                    ? 
                                                   ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U] 
                                                     << 0x11U) 
                                                    | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U] 
                                                       >> 0xfU))
                                                    : (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__time_0 
                                                               >> 0x18U))) 
                                                  << 0x18U) 
                                                 | ((0xff0000U 
                                                     & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__valids_4_2)
                                                          ? 
                                                         ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U] 
                                                           << 0x19U) 
                                                          | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U] 
                                                             >> 7U))
                                                          : (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__time_0 
                                                                     >> 0x10U))) 
                                                        << 0x10U)) 
                                                    | ((0xff00U 
                                                        & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__valids_4_1)
                                                             ? 
                                                            ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[2U] 
                                                              << 1U) 
                                                             | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                                >> 0x1fU))
                                                             : (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__time_0 
                                                                        >> 8U))) 
                                                           << 8U)) 
                                                       | (0xffU 
                                                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__valids_4_0)
                                                              ? 
                                                             ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                               << 9U) 
                                                              | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                                 >> 0x17U))
                                                              : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__time_0)))))))));
        } else if ((0x1f3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__int_rtc_tick_c_value))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__time_0 
                = (1ULL + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__time_0);
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4684(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4684\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h0e73097d__0;
    VlWide<17>/*543:0*/ __Vtemp_h7335e1ac__0;
    VlWide<17>/*543:0*/ __Vtemp_h374d7858__0;
    VlWide<17>/*543:0*/ __Vtemp_h5394f6b8__0;
    VlWide<5>/*159:0*/ __Vtemp_hd9311269__0;
    VlWide<17>/*543:0*/ __Vtemp_h624a1274__0;
    VlWide<17>/*543:0*/ __Vtemp_h14de9fd8__0;
    VlWide<17>/*543:0*/ __Vtemp_h5394f6b8__1;
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___T_1023) {
        __Vtemp_h7335e1ac__0[0U] = (1U | (0xeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 5U)));
        __Vtemp_h624a1274__0[0U] = (1U | (0xeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  << 1U)));
    } else {
        __Vtemp_h7335e1ac__0[0U] = 0U;
        __Vtemp_h624a1274__0[0U] = 0U;
    }
    __Vtemp_h7335e1ac__0[1U] = 0U;
    __Vtemp_h7335e1ac__0[2U] = 0U;
    __Vtemp_h7335e1ac__0[3U] = 0U;
    __Vtemp_h7335e1ac__0[4U] = 0U;
    __Vtemp_h7335e1ac__0[5U] = 0U;
    __Vtemp_h7335e1ac__0[6U] = 0U;
    __Vtemp_h7335e1ac__0[7U] = 0U;
    __Vtemp_h7335e1ac__0[8U] = 0U;
    __Vtemp_h7335e1ac__0[9U] = 0U;
    __Vtemp_h7335e1ac__0[0xaU] = 0U;
    __Vtemp_h7335e1ac__0[0xbU] = 0U;
    __Vtemp_h7335e1ac__0[0xcU] = 0U;
    __Vtemp_h7335e1ac__0[0xdU] = 0U;
    __Vtemp_h7335e1ac__0[0xeU] = 0U;
    __Vtemp_h7335e1ac__0[0xfU] = 0U;
    __Vtemp_h7335e1ac__0[0x10U] = 0U;
    VL_SHIFTL_WWI(515,515,8, __Vtemp_h374d7858__0, __Vtemp_h7335e1ac__0, 
                  (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 8U)));
    VL_SHIFTL_WWI(527,527,8, __Vtemp_h5394f6b8__0, VTestDriver__ConstPool__CONST_hea2bd2fa_0, 
                  (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                            >> 6U)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        __Vtemp_h0e73097d__0[1U] = 0U;
        __Vtemp_h0e73097d__0[2U] = 0U;
        __Vtemp_h0e73097d__0[3U] = 0U;
        __Vtemp_h0e73097d__0[4U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0U] = 0U;
    } else {
        __Vtemp_h0e73097d__0[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes[1U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___T_1023)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[1U] 
                                            & __Vtemp_h374d7858__0[1U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___T_1038)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                                                     & __Vtemp_h5394f6b8__0[1U])
                                                     : 0U)));
        __Vtemp_h0e73097d__0[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes[2U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___T_1023)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[2U] 
                                            & __Vtemp_h374d7858__0[2U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___T_1038)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                                                     & __Vtemp_h5394f6b8__0[2U])
                                                     : 0U)));
        __Vtemp_h0e73097d__0[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes[3U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___T_1023)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[3U] 
                                            & __Vtemp_h374d7858__0[3U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___T_1038)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                                                     & __Vtemp_h5394f6b8__0[3U])
                                                     : 0U)));
        __Vtemp_h0e73097d__0[4U] = (0xfU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes[4U] 
                                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___T_1023)
                                                 ? 
                                                (VTestDriver__ConstPool__CONST_h00a54009_0[4U] 
                                                 & __Vtemp_h374d7858__0[4U])
                                                 : 0U)) 
                                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___T_1038)
                                                   ? 
                                                  (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                                   & __Vtemp_h5394f6b8__0[4U])
                                                   : 0U))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___T_1023)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[0U] 
                       & __Vtemp_h374d7858__0[0U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___T_1038)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                         & __Vtemp_h5394f6b8__0[0U])
                      : 0U)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vtemp_h0e73097d__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vtemp_h0e73097d__0[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes[3U] 
        = __Vtemp_h0e73097d__0[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_sizes[4U] 
        = __Vtemp_h0e73097d__0[4U];
    __Vtemp_h624a1274__0[1U] = 0U;
    __Vtemp_h624a1274__0[2U] = 0U;
    __Vtemp_h624a1274__0[3U] = 0U;
    __Vtemp_h624a1274__0[4U] = 0U;
    __Vtemp_h624a1274__0[5U] = 0U;
    __Vtemp_h624a1274__0[6U] = 0U;
    __Vtemp_h624a1274__0[7U] = 0U;
    __Vtemp_h624a1274__0[8U] = 0U;
    __Vtemp_h624a1274__0[9U] = 0U;
    __Vtemp_h624a1274__0[0xaU] = 0U;
    __Vtemp_h624a1274__0[0xbU] = 0U;
    __Vtemp_h624a1274__0[0xcU] = 0U;
    __Vtemp_h624a1274__0[0xdU] = 0U;
    __Vtemp_h624a1274__0[0xeU] = 0U;
    __Vtemp_h624a1274__0[0xfU] = 0U;
    __Vtemp_h624a1274__0[0x10U] = 0U;
    VL_SHIFTL_WWI(515,515,8, __Vtemp_h14de9fd8__0, __Vtemp_h624a1274__0, 
                  (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 8U)));
    VL_SHIFTL_WWI(527,527,8, __Vtemp_h5394f6b8__1, VTestDriver__ConstPool__CONST_hea2bd2fa_0, 
                  (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                            >> 6U)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        __Vtemp_hd9311269__0[1U] = 0U;
        __Vtemp_hd9311269__0[2U] = 0U;
        __Vtemp_hd9311269__0[3U] = 0U;
        __Vtemp_hd9311269__0[4U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight = 0ULL;
    } else {
        __Vtemp_hd9311269__0[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[1U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___T_1023)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[1U] 
                                            & __Vtemp_h14de9fd8__0[1U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___T_1038)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                                                     & __Vtemp_h5394f6b8__1[1U])
                                                     : 0U)));
        __Vtemp_hd9311269__0[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[2U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___T_1023)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[2U] 
                                            & __Vtemp_h14de9fd8__0[2U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___T_1038)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                                                     & __Vtemp_h5394f6b8__1[2U])
                                                     : 0U)));
        __Vtemp_hd9311269__0[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[3U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___T_1023)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[3U] 
                                            & __Vtemp_h14de9fd8__0[3U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___T_1038)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                                                     & __Vtemp_h5394f6b8__1[3U])
                                                     : 0U)));
        __Vtemp_hd9311269__0[4U] = (0xfU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[4U] 
                                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___T_1023)
                                                 ? 
                                                (VTestDriver__ConstPool__CONST_h00a54009_0[4U] 
                                                 & __Vtemp_h14de9fd8__0[4U])
                                                 : 0U)) 
                                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___T_1038)
                                                   ? 
                                                  (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                                   & __Vtemp_h5394f6b8__1[4U])
                                                   : 0U))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___T_1023)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[0U] 
                       & __Vtemp_h14de9fd8__0[0U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___T_1038)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                         & __Vtemp_h5394f6b8__1[0U])
                      : 0U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight 
            = (0x1ffffffffULL & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight 
                                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___T_1023)
                                      ? (1ULL << (0x3fU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0xaU)))
                                      : 0ULL)) & (~ 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___T_1038)
                                                    ? 
                                                   (1ULL 
                                                    << 
                                                    (0x3fU 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 8U)))
                                                    : 0ULL))));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[1U] 
        = __Vtemp_hd9311269__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[2U] 
        = __Vtemp_hd9311269__0[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[3U] 
        = __Vtemp_hd9311269__0[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[4U] 
        = __Vtemp_hd9311269__0[4U];
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4685(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4685\n"); );
    // Init
    VlWide<9>/*287:0*/ __Vtemp_h5a86b946__0;
    VlWide<17>/*543:0*/ __Vtemp_h879ca380__0;
    VlWide<17>/*543:0*/ __Vtemp_h22492155__0;
    VlWide<17>/*543:0*/ __Vtemp_h515259cc__0;
    VlWide<17>/*543:0*/ __Vtemp_h51453b1e__0;
    VlWide<5>/*159:0*/ __Vtemp_heb3c030f__0;
    VlWide<17>/*543:0*/ __Vtemp_hd66bda31__0;
    VlWide<17>/*543:0*/ __Vtemp_h0c90b2ad__0;
    VlWide<17>/*543:0*/ __Vtemp_h5c5e85f9__0;
    VlWide<17>/*543:0*/ __Vtemp_he19f70f4__0;
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_1032) {
        __Vtemp_h879ca380__0[0U] = (1U | (0x1eU & (
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                   >> 5U)));
        __Vtemp_hd66bda31__0[0U] = (1U | (0xeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  << 1U)));
    } else {
        __Vtemp_h879ca380__0[0U] = 0U;
        __Vtemp_hd66bda31__0[0U] = 0U;
    }
    __Vtemp_h879ca380__0[1U] = 0U;
    __Vtemp_h879ca380__0[2U] = 0U;
    __Vtemp_h879ca380__0[3U] = 0U;
    __Vtemp_h879ca380__0[4U] = 0U;
    __Vtemp_h879ca380__0[5U] = 0U;
    __Vtemp_h879ca380__0[6U] = 0U;
    __Vtemp_h879ca380__0[7U] = 0U;
    __Vtemp_h879ca380__0[8U] = 0U;
    __Vtemp_h879ca380__0[9U] = 0U;
    __Vtemp_h879ca380__0[0xaU] = 0U;
    __Vtemp_h879ca380__0[0xbU] = 0U;
    __Vtemp_h879ca380__0[0xcU] = 0U;
    __Vtemp_h879ca380__0[0xdU] = 0U;
    __Vtemp_h879ca380__0[0xeU] = 0U;
    __Vtemp_h879ca380__0[0xfU] = 0U;
    __Vtemp_h879ca380__0[0x10U] = 0U;
    __Vtemp_h22492155__0[0U] = (0x1f8U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                          >> 7U));
    __Vtemp_h22492155__0[1U] = 0U;
    __Vtemp_h22492155__0[2U] = 0U;
    __Vtemp_h22492155__0[3U] = 0U;
    __Vtemp_h22492155__0[4U] = 0U;
    __Vtemp_h22492155__0[5U] = 0U;
    __Vtemp_h22492155__0[6U] = 0U;
    __Vtemp_h22492155__0[7U] = 0U;
    __Vtemp_h22492155__0[8U] = 0U;
    __Vtemp_h22492155__0[9U] = 0U;
    __Vtemp_h22492155__0[0xaU] = 0U;
    __Vtemp_h22492155__0[0xbU] = 0U;
    __Vtemp_h22492155__0[0xcU] = 0U;
    __Vtemp_h22492155__0[0xdU] = 0U;
    __Vtemp_h22492155__0[0xeU] = 0U;
    __Vtemp_h22492155__0[0xfU] = 0U;
    __Vtemp_h22492155__0[0x10U] = 0U;
    VL_SHIFTL_WWW(516,516,516, __Vtemp_h515259cc__0, __Vtemp_h879ca380__0, __Vtemp_h22492155__0);
    VL_SHIFTL_WWI(527,527,9, __Vtemp_h51453b1e__0, VTestDriver__ConstPool__CONST_hf974e5b2_0, 
                  (0x1f8U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                             >> 6U)));
    __Vtemp_h5a86b946__0[1U] = (VTestDriver__ConstPool__CONST_h52851867_0[1U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[1U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[1U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_1032)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[1U] 
                                               & __Vtemp_h515259cc__0[1U])
                                            : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[1U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_1047)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                                                 & __Vtemp_h51453b1e__0[1U])
                                              : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[1U])))));
    __Vtemp_h5a86b946__0[2U] = (VTestDriver__ConstPool__CONST_h52851867_0[2U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[2U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[2U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_1032)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[2U] 
                                               & __Vtemp_h515259cc__0[2U])
                                            : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[2U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_1047)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                                                 & __Vtemp_h51453b1e__0[2U])
                                              : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[2U])))));
    __Vtemp_h5a86b946__0[3U] = (VTestDriver__ConstPool__CONST_h52851867_0[3U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[3U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[3U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_1032)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[3U] 
                                               & __Vtemp_h515259cc__0[3U])
                                            : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[3U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_1047)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                                                 & __Vtemp_h51453b1e__0[3U])
                                              : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[3U])))));
    __Vtemp_h5a86b946__0[4U] = (VTestDriver__ConstPool__CONST_h52851867_0[4U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[4U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[4U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_1032)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[4U] 
                                               & __Vtemp_h515259cc__0[4U])
                                            : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[4U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_1047)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                                 & __Vtemp_h51453b1e__0[4U])
                                              : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[4U])))));
    __Vtemp_h5a86b946__0[5U] = (VTestDriver__ConstPool__CONST_h52851867_0[5U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[5U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[5U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_1032)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[5U] 
                                               & __Vtemp_h515259cc__0[5U])
                                            : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[5U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_1047)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[5U] 
                                                 & __Vtemp_h51453b1e__0[5U])
                                              : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[5U])))));
    __Vtemp_h5a86b946__0[6U] = (VTestDriver__ConstPool__CONST_h52851867_0[6U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[6U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[6U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_1032)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[6U] 
                                               & __Vtemp_h515259cc__0[6U])
                                            : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[6U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_1047)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[6U] 
                                                 & __Vtemp_h51453b1e__0[6U])
                                              : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[6U])))));
    __Vtemp_h5a86b946__0[7U] = (VTestDriver__ConstPool__CONST_h52851867_0[7U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[7U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[7U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_1032)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[7U] 
                                               & __Vtemp_h515259cc__0[7U])
                                            : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[7U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_1047)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[7U] 
                                                 & __Vtemp_h51453b1e__0[7U])
                                              : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[7U])))));
    __Vtemp_h5a86b946__0[8U] = (VTestDriver__ConstPool__CONST_h52851867_0[8U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[8U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[8U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_1032)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[8U] 
                                               & __Vtemp_h515259cc__0[8U])
                                            : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[8U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_1047)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[8U] 
                                                 & __Vtemp_h51453b1e__0[8U])
                                              : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[8U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0U] 
        = (VTestDriver__ConstPool__CONST_h52851867_0[0U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[0U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_1032)
                       ? (VTestDriver__ConstPool__CONST_h00a54001_0[0U] 
                          & __Vtemp_h515259cc__0[0U])
                       : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[0U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_1047)
                         ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                            & __Vtemp_h51453b1e__0[0U])
                         : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[0U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vtemp_h5a86b946__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vtemp_h5a86b946__0[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[3U] 
        = __Vtemp_h5a86b946__0[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[4U] 
        = __Vtemp_h5a86b946__0[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[5U] 
        = __Vtemp_h5a86b946__0[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[6U] 
        = __Vtemp_h5a86b946__0[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[7U] 
        = __Vtemp_h5a86b946__0[7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_sizes[8U] 
        = __Vtemp_h5a86b946__0[8U];
    __Vtemp_hd66bda31__0[1U] = 0U;
    __Vtemp_hd66bda31__0[2U] = 0U;
    __Vtemp_hd66bda31__0[3U] = 0U;
    __Vtemp_hd66bda31__0[4U] = 0U;
    __Vtemp_hd66bda31__0[5U] = 0U;
    __Vtemp_hd66bda31__0[6U] = 0U;
    __Vtemp_hd66bda31__0[7U] = 0U;
    __Vtemp_hd66bda31__0[8U] = 0U;
    __Vtemp_hd66bda31__0[9U] = 0U;
    __Vtemp_hd66bda31__0[0xaU] = 0U;
    __Vtemp_hd66bda31__0[0xbU] = 0U;
    __Vtemp_hd66bda31__0[0xcU] = 0U;
    __Vtemp_hd66bda31__0[0xdU] = 0U;
    __Vtemp_hd66bda31__0[0xeU] = 0U;
    __Vtemp_hd66bda31__0[0xfU] = 0U;
    __Vtemp_hd66bda31__0[0x10U] = 0U;
    __Vtemp_h0c90b2ad__0[0U] = (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                         >> 8U));
    __Vtemp_h0c90b2ad__0[1U] = 0U;
    __Vtemp_h0c90b2ad__0[2U] = 0U;
    __Vtemp_h0c90b2ad__0[3U] = 0U;
    __Vtemp_h0c90b2ad__0[4U] = 0U;
    __Vtemp_h0c90b2ad__0[5U] = 0U;
    __Vtemp_h0c90b2ad__0[6U] = 0U;
    __Vtemp_h0c90b2ad__0[7U] = 0U;
    __Vtemp_h0c90b2ad__0[8U] = 0U;
    __Vtemp_h0c90b2ad__0[9U] = 0U;
    __Vtemp_h0c90b2ad__0[0xaU] = 0U;
    __Vtemp_h0c90b2ad__0[0xbU] = 0U;
    __Vtemp_h0c90b2ad__0[0xcU] = 0U;
    __Vtemp_h0c90b2ad__0[0xdU] = 0U;
    __Vtemp_h0c90b2ad__0[0xeU] = 0U;
    __Vtemp_h0c90b2ad__0[0xfU] = 0U;
    __Vtemp_h0c90b2ad__0[0x10U] = 0U;
    VL_SHIFTL_WWW(515,515,515, __Vtemp_h5c5e85f9__0, __Vtemp_hd66bda31__0, __Vtemp_h0c90b2ad__0);
    VL_SHIFTL_WWI(527,527,8, __Vtemp_he19f70f4__0, VTestDriver__ConstPool__CONST_hea2bd2fa_0, 
                  (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                            >> 7U)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        __Vtemp_heb3c030f__0[1U] = 0U;
        __Vtemp_heb3c030f__0[2U] = 0U;
        __Vtemp_heb3c030f__0[3U] = 0U;
        __Vtemp_heb3c030f__0[4U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight = 0ULL;
    } else {
        __Vtemp_heb3c030f__0[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[1U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_1032)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[1U] 
                                            & __Vtemp_h5c5e85f9__0[1U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_1047)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                                                     & __Vtemp_he19f70f4__0[1U])
                                                     : 0U)));
        __Vtemp_heb3c030f__0[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[2U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_1032)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[2U] 
                                            & __Vtemp_h5c5e85f9__0[2U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_1047)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                                                     & __Vtemp_he19f70f4__0[2U])
                                                     : 0U)));
        __Vtemp_heb3c030f__0[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[3U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_1032)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[3U] 
                                            & __Vtemp_h5c5e85f9__0[3U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_1047)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                                                     & __Vtemp_he19f70f4__0[3U])
                                                     : 0U)));
        __Vtemp_heb3c030f__0[4U] = (0xfU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[4U] 
                                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_1032)
                                                 ? 
                                                (VTestDriver__ConstPool__CONST_h00a54009_0[4U] 
                                                 & __Vtemp_h5c5e85f9__0[4U])
                                                 : 0U)) 
                                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_1047)
                                                   ? 
                                                  (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                                   & __Vtemp_he19f70f4__0[4U])
                                                   : 0U))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_1032)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[0U] 
                       & __Vtemp_h5c5e85f9__0[0U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_1047)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                         & __Vtemp_he19f70f4__0[0U])
                      : 0U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight 
            = (0x1ffffffffULL & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight 
                                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_1032)
                                      ? (1ULL << (0x3fU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0xaU)))
                                      : 0ULL)) & (~ 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_1047)
                                                    ? 
                                                   (1ULL 
                                                    << 
                                                    (0x3fU 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 9U)))
                                                    : 0ULL))));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[1U] 
        = __Vtemp_heb3c030f__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[2U] 
        = __Vtemp_heb3c030f__0[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[3U] 
        = __Vtemp_heb3c030f__0[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[4U] 
        = __Vtemp_heb3c030f__0[4U];
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4686(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4686\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h0daf5534__0;
    VlWide<17>/*543:0*/ __Vtemp_hae962b42__0;
    VlWide<17>/*543:0*/ __Vtemp_h21ed60c1__0;
    VlWide<17>/*543:0*/ __Vtemp_h37896192__0;
    VlWide<5>/*159:0*/ __Vtemp_h4db3a540__0;
    VlWide<17>/*543:0*/ __Vtemp_h300d51ca__0;
    VlWide<17>/*543:0*/ __Vtemp_h01847408__0;
    VlWide<17>/*543:0*/ __Vtemp_h37896192__1;
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___T_1089) {
        __Vtemp_hae962b42__0[0U] = (1U | (0xeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 5U)));
        __Vtemp_h300d51ca__0[0U] = (1U | (0xeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  << 1U)));
    } else {
        __Vtemp_hae962b42__0[0U] = 0U;
        __Vtemp_h300d51ca__0[0U] = 0U;
    }
    __Vtemp_hae962b42__0[1U] = 0U;
    __Vtemp_hae962b42__0[2U] = 0U;
    __Vtemp_hae962b42__0[3U] = 0U;
    __Vtemp_hae962b42__0[4U] = 0U;
    __Vtemp_hae962b42__0[5U] = 0U;
    __Vtemp_hae962b42__0[6U] = 0U;
    __Vtemp_hae962b42__0[7U] = 0U;
    __Vtemp_hae962b42__0[8U] = 0U;
    __Vtemp_hae962b42__0[9U] = 0U;
    __Vtemp_hae962b42__0[0xaU] = 0U;
    __Vtemp_hae962b42__0[0xbU] = 0U;
    __Vtemp_hae962b42__0[0xcU] = 0U;
    __Vtemp_hae962b42__0[0xdU] = 0U;
    __Vtemp_hae962b42__0[0xeU] = 0U;
    __Vtemp_hae962b42__0[0xfU] = 0U;
    __Vtemp_hae962b42__0[0x10U] = 0U;
    VL_SHIFTL_WWI(515,515,8, __Vtemp_h21ed60c1__0, __Vtemp_hae962b42__0, 
                  (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 8U)));
    VL_SHIFTL_WWI(527,527,8, __Vtemp_h37896192__0, VTestDriver__ConstPool__CONST_hea2bd2fa_0, 
                  (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                            >> 6U)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        __Vtemp_h0daf5534__0[1U] = 0U;
        __Vtemp_h0daf5534__0[2U] = 0U;
        __Vtemp_h0daf5534__0[3U] = 0U;
        __Vtemp_h0daf5534__0[4U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes[0U] = 0U;
    } else {
        __Vtemp_h0daf5534__0[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes[1U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___T_1089)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[1U] 
                                            & __Vtemp_h21ed60c1__0[1U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___T_1104)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                                                     & __Vtemp_h37896192__0[1U])
                                                     : 0U)));
        __Vtemp_h0daf5534__0[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes[2U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___T_1089)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[2U] 
                                            & __Vtemp_h21ed60c1__0[2U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___T_1104)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                                                     & __Vtemp_h37896192__0[2U])
                                                     : 0U)));
        __Vtemp_h0daf5534__0[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes[3U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___T_1089)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[3U] 
                                            & __Vtemp_h21ed60c1__0[3U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___T_1104)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                                                     & __Vtemp_h37896192__0[3U])
                                                     : 0U)));
        __Vtemp_h0daf5534__0[4U] = (0xfU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes[4U] 
                                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___T_1089)
                                                 ? 
                                                (VTestDriver__ConstPool__CONST_h00a54009_0[4U] 
                                                 & __Vtemp_h21ed60c1__0[4U])
                                                 : 0U)) 
                                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___T_1104)
                                                   ? 
                                                  (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                                   & __Vtemp_h37896192__0[4U])
                                                   : 0U))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___T_1089)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[0U] 
                       & __Vtemp_h21ed60c1__0[0U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___T_1104)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                         & __Vtemp_h37896192__0[0U])
                      : 0U)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vtemp_h0daf5534__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vtemp_h0daf5534__0[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes[3U] 
        = __Vtemp_h0daf5534__0[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_sizes[4U] 
        = __Vtemp_h0daf5534__0[4U];
    __Vtemp_h300d51ca__0[1U] = 0U;
    __Vtemp_h300d51ca__0[2U] = 0U;
    __Vtemp_h300d51ca__0[3U] = 0U;
    __Vtemp_h300d51ca__0[4U] = 0U;
    __Vtemp_h300d51ca__0[5U] = 0U;
    __Vtemp_h300d51ca__0[6U] = 0U;
    __Vtemp_h300d51ca__0[7U] = 0U;
    __Vtemp_h300d51ca__0[8U] = 0U;
    __Vtemp_h300d51ca__0[9U] = 0U;
    __Vtemp_h300d51ca__0[0xaU] = 0U;
    __Vtemp_h300d51ca__0[0xbU] = 0U;
    __Vtemp_h300d51ca__0[0xcU] = 0U;
    __Vtemp_h300d51ca__0[0xdU] = 0U;
    __Vtemp_h300d51ca__0[0xeU] = 0U;
    __Vtemp_h300d51ca__0[0xfU] = 0U;
    __Vtemp_h300d51ca__0[0x10U] = 0U;
    VL_SHIFTL_WWI(515,515,8, __Vtemp_h01847408__0, __Vtemp_h300d51ca__0, 
                  (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 8U)));
    VL_SHIFTL_WWI(527,527,8, __Vtemp_h37896192__1, VTestDriver__ConstPool__CONST_hea2bd2fa_0, 
                  (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                            >> 6U)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        __Vtemp_h4db3a540__0[1U] = 0U;
        __Vtemp_h4db3a540__0[2U] = 0U;
        __Vtemp_h4db3a540__0[3U] = 0U;
        __Vtemp_h4db3a540__0[4U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_opcodes[0U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__inflight = 0ULL;
    } else {
        __Vtemp_h4db3a540__0[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_opcodes[1U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___T_1089)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[1U] 
                                            & __Vtemp_h01847408__0[1U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___T_1104)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                                                     & __Vtemp_h37896192__1[1U])
                                                     : 0U)));
        __Vtemp_h4db3a540__0[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_opcodes[2U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___T_1089)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[2U] 
                                            & __Vtemp_h01847408__0[2U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___T_1104)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                                                     & __Vtemp_h37896192__1[2U])
                                                     : 0U)));
        __Vtemp_h4db3a540__0[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_opcodes[3U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___T_1089)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[3U] 
                                            & __Vtemp_h01847408__0[3U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___T_1104)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                                                     & __Vtemp_h37896192__1[3U])
                                                     : 0U)));
        __Vtemp_h4db3a540__0[4U] = (0xfU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_opcodes[4U] 
                                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___T_1089)
                                                 ? 
                                                (VTestDriver__ConstPool__CONST_h00a54009_0[4U] 
                                                 & __Vtemp_h01847408__0[4U])
                                                 : 0U)) 
                                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___T_1104)
                                                   ? 
                                                  (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                                   & __Vtemp_h37896192__1[4U])
                                                   : 0U))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_opcodes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_opcodes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___T_1089)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[0U] 
                       & __Vtemp_h01847408__0[0U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___T_1104)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                         & __Vtemp_h37896192__1[0U])
                      : 0U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__inflight 
            = (0x1ffffffffULL & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__inflight 
                                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___T_1089)
                                      ? (1ULL << (0x3fU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0xaU)))
                                      : 0ULL)) & (~ 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___T_1104)
                                                    ? 
                                                   (1ULL 
                                                    << 
                                                    (0x3fU 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 8U)))
                                                    : 0ULL))));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_opcodes[1U] 
        = __Vtemp_h4db3a540__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_opcodes[2U] 
        = __Vtemp_h4db3a540__0[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_opcodes[3U] 
        = __Vtemp_h4db3a540__0[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__inflight_opcodes[4U] 
        = __Vtemp_h4db3a540__0[4U];
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4687(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4687\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h20657dae__0;
    VlWide<17>/*543:0*/ __Vtemp_h5b6a5326__0;
    VlWide<17>/*543:0*/ __Vtemp_h818e08a2__0;
    VlWide<17>/*543:0*/ __Vtemp_hdf2cbd72__0;
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0[0U] 
            = (((IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__muxStateEarly_0)
                          ? (QData)((IData)(((0U == 
                                              (0xff8U 
                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)) 
                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__regs_0__DOT__reg_0))))
                          : 0ULL)) << 0x10U) | ((0x3f00U 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_source) 
                                                    << 4U)) 
                                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT___fragmenter_auto_in_d_bits_size) 
                                                    << 5U) 
                                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___prci_ctrl_domain_auto_xbar_in_d_bits_opcode))));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0[1U] 
            = (((IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__muxStateEarly_0)
                          ? (QData)((IData)(((0U == 
                                              (0xff8U 
                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)) 
                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__regs_0__DOT__reg_0))))
                          : 0ULL)) >> 0x10U) | ((IData)(
                                                        (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__muxStateEarly_0)
                                                           ? (QData)((IData)(
                                                                             ((0U 
                                                                               == 
                                                                               (0xff8U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)) 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__regs_0__DOT__reg_0))))
                                                           : 0ULL) 
                                                         >> 0x20U)) 
                                                << 0x10U));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0[2U] 
            = ((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__muxStateEarly_0)
                          ? (QData)((IData)(((0U == 
                                              (0xff8U 
                                               & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT___xbar_auto_out_1_a_bits_address)) 
                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__regs_0__DOT__reg_0))))
                          : 0ULL) >> 0x20U)) >> 0x10U);
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__enq_ptr_value;
    }
    __Vtemp_h5b6a5326__0[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_1023)
                                 ? (1U | (0xeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 5U)))
                                 : 0U);
    __Vtemp_h5b6a5326__0[1U] = 0U;
    __Vtemp_h5b6a5326__0[2U] = 0U;
    __Vtemp_h5b6a5326__0[3U] = 0U;
    __Vtemp_h5b6a5326__0[4U] = 0U;
    __Vtemp_h5b6a5326__0[5U] = 0U;
    __Vtemp_h5b6a5326__0[6U] = 0U;
    __Vtemp_h5b6a5326__0[7U] = 0U;
    __Vtemp_h5b6a5326__0[8U] = 0U;
    __Vtemp_h5b6a5326__0[9U] = 0U;
    __Vtemp_h5b6a5326__0[0xaU] = 0U;
    __Vtemp_h5b6a5326__0[0xbU] = 0U;
    __Vtemp_h5b6a5326__0[0xcU] = 0U;
    __Vtemp_h5b6a5326__0[0xdU] = 0U;
    __Vtemp_h5b6a5326__0[0xeU] = 0U;
    __Vtemp_h5b6a5326__0[0xfU] = 0U;
    __Vtemp_h5b6a5326__0[0x10U] = 0U;
    VL_SHIFTL_WWI(515,515,8, __Vtemp_h818e08a2__0, __Vtemp_h5b6a5326__0, 
                  (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 8U)));
    VL_SHIFTL_WWI(527,527,8, __Vtemp_hdf2cbd72__0, VTestDriver__ConstPool__CONST_hea2bd2fa_0, 
                  (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
                            [0U][0U] >> 9U)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        __Vtemp_h20657dae__0[1U] = 0U;
        __Vtemp_h20657dae__0[2U] = 0U;
        __Vtemp_h20657dae__0[3U] = 0U;
        __Vtemp_h20657dae__0[4U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[0U] = 0U;
    } else {
        __Vtemp_h20657dae__0[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[1U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_1023)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[1U] 
                                            & __Vtemp_h818e08a2__0[1U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_1038)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                                                     & __Vtemp_hdf2cbd72__0[1U])
                                                     : 0U)));
        __Vtemp_h20657dae__0[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[2U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_1023)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[2U] 
                                            & __Vtemp_h818e08a2__0[2U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_1038)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                                                     & __Vtemp_hdf2cbd72__0[2U])
                                                     : 0U)));
        __Vtemp_h20657dae__0[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[3U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_1023)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[3U] 
                                            & __Vtemp_h818e08a2__0[3U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_1038)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                                                     & __Vtemp_hdf2cbd72__0[3U])
                                                     : 0U)));
        __Vtemp_h20657dae__0[4U] = (0xfU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[4U] 
                                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_1023)
                                                 ? 
                                                (VTestDriver__ConstPool__CONST_h00a54009_0[4U] 
                                                 & __Vtemp_h818e08a2__0[4U])
                                                 : 0U)) 
                                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_1038)
                                                   ? 
                                                  (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                                   & __Vtemp_hdf2cbd72__0[4U])
                                                   : 0U))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_1023)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[0U] 
                       & __Vtemp_h818e08a2__0[0U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_1038)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                         & __Vtemp_hdf2cbd72__0[0U])
                      : 0U)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vtemp_h20657dae__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vtemp_h20657dae__0[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[3U] 
        = __Vtemp_h20657dae__0[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[4U] 
        = __Vtemp_h20657dae__0[4U];
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4688(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4688\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_hc9c0fe6f__0;
    VlWide<17>/*543:0*/ __Vtemp_hc4b3352e__0;
    VlWide<17>/*543:0*/ __Vtemp_h8095bb97__0;
    VlWide<17>/*543:0*/ __Vtemp_hdf2cbd72__0;
    // Body
    __Vtemp_hc4b3352e__0[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_1023)
                                 ? (1U | (0xeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  << 1U)))
                                 : 0U);
    __Vtemp_hc4b3352e__0[1U] = 0U;
    __Vtemp_hc4b3352e__0[2U] = 0U;
    __Vtemp_hc4b3352e__0[3U] = 0U;
    __Vtemp_hc4b3352e__0[4U] = 0U;
    __Vtemp_hc4b3352e__0[5U] = 0U;
    __Vtemp_hc4b3352e__0[6U] = 0U;
    __Vtemp_hc4b3352e__0[7U] = 0U;
    __Vtemp_hc4b3352e__0[8U] = 0U;
    __Vtemp_hc4b3352e__0[9U] = 0U;
    __Vtemp_hc4b3352e__0[0xaU] = 0U;
    __Vtemp_hc4b3352e__0[0xbU] = 0U;
    __Vtemp_hc4b3352e__0[0xcU] = 0U;
    __Vtemp_hc4b3352e__0[0xdU] = 0U;
    __Vtemp_hc4b3352e__0[0xeU] = 0U;
    __Vtemp_hc4b3352e__0[0xfU] = 0U;
    __Vtemp_hc4b3352e__0[0x10U] = 0U;
    VL_SHIFTL_WWI(515,515,8, __Vtemp_h8095bb97__0, __Vtemp_hc4b3352e__0, 
                  (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 8U)));
    VL_SHIFTL_WWI(527,527,8, __Vtemp_hdf2cbd72__0, VTestDriver__ConstPool__CONST_hea2bd2fa_0, 
                  (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
                            [0U][0U] >> 9U)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        __Vtemp_hc9c0fe6f__0[1U] = 0U;
        __Vtemp_hc9c0fe6f__0[2U] = 0U;
        __Vtemp_hc9c0fe6f__0[3U] = 0U;
        __Vtemp_hc9c0fe6f__0[4U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[0U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight = 0ULL;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight = 0ULL;
    } else {
        __Vtemp_hc9c0fe6f__0[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[1U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_1023)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[1U] 
                                            & __Vtemp_h8095bb97__0[1U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_1038)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                                                     & __Vtemp_hdf2cbd72__0[1U])
                                                     : 0U)));
        __Vtemp_hc9c0fe6f__0[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[2U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_1023)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[2U] 
                                            & __Vtemp_h8095bb97__0[2U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_1038)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                                                     & __Vtemp_hdf2cbd72__0[2U])
                                                     : 0U)));
        __Vtemp_hc9c0fe6f__0[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[3U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_1023)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[3U] 
                                            & __Vtemp_h8095bb97__0[3U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_1038)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                                                     & __Vtemp_hdf2cbd72__0[3U])
                                                     : 0U)));
        __Vtemp_hc9c0fe6f__0[4U] = (0xfU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[4U] 
                                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_1023)
                                                 ? 
                                                (VTestDriver__ConstPool__CONST_h00a54009_0[4U] 
                                                 & __Vtemp_h8095bb97__0[4U])
                                                 : 0U)) 
                                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_1038)
                                                   ? 
                                                  (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                                   & __Vtemp_hdf2cbd72__0[4U])
                                                   : 0U))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_1023)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[0U] 
                       & __Vtemp_h8095bb97__0[0U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_1038)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                         & __Vtemp_hdf2cbd72__0[0U])
                      : 0U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight 
            = (0x1ffffffffULL & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight 
                                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_1023)
                                      ? (1ULL << (0x3fU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0xaU)))
                                      : 0ULL)) & (~ 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_1038)
                                                    ? 
                                                   (1ULL 
                                                    << 
                                                    (0x3fU 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
                                                        [0U][0U] 
                                                        >> 0xbU)))
                                                    : 0ULL))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight 
            = (0x1ffffffffULL & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight 
                                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_1023)
                                      ? (1ULL << (0x3fU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 0xaU)))
                                      : 0ULL)) & (~ 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_1038)
                                                    ? 
                                                   (1ULL 
                                                    << 
                                                    (0x3fU 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_ext__DOT__Memory
                                                        [0U][3U] 
                                                        >> 4U)))
                                                    : 0ULL))));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[1U] 
        = __Vtemp_hc9c0fe6f__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[2U] 
        = __Vtemp_hc9c0fe6f__0[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[3U] 
        = __Vtemp_hc9c0fe6f__0[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[4U] 
        = __Vtemp_hc9c0fe6f__0[4U];
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4689(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4689\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h4d07a2e6__0;
    VlWide<17>/*543:0*/ __Vtemp_h7d0ea64b__0;
    VlWide<17>/*543:0*/ __Vtemp_hb742e2be__0;
    VlWide<17>/*543:0*/ __Vtemp_h46d1f798__0;
    VlWide<5>/*159:0*/ __Vtemp_h7f12f69d__0;
    VlWide<17>/*543:0*/ __Vtemp_h19d62f53__0;
    VlWide<17>/*543:0*/ __Vtemp_h7c009682__0;
    VlWide<17>/*543:0*/ __Vtemp_hb17e4654__0;
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_1023) {
        __Vtemp_h7d0ea64b__0[0U] = (1U | (0xeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  << 1U)));
        __Vtemp_h19d62f53__0[0U] = (1U | (0xeU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                  >> 5U)));
    } else {
        __Vtemp_h7d0ea64b__0[0U] = 0U;
        __Vtemp_h19d62f53__0[0U] = 0U;
    }
    __Vtemp_h7d0ea64b__0[1U] = 0U;
    __Vtemp_h7d0ea64b__0[2U] = 0U;
    __Vtemp_h7d0ea64b__0[3U] = 0U;
    __Vtemp_h7d0ea64b__0[4U] = 0U;
    __Vtemp_h7d0ea64b__0[5U] = 0U;
    __Vtemp_h7d0ea64b__0[6U] = 0U;
    __Vtemp_h7d0ea64b__0[7U] = 0U;
    __Vtemp_h7d0ea64b__0[8U] = 0U;
    __Vtemp_h7d0ea64b__0[9U] = 0U;
    __Vtemp_h7d0ea64b__0[0xaU] = 0U;
    __Vtemp_h7d0ea64b__0[0xbU] = 0U;
    __Vtemp_h7d0ea64b__0[0xcU] = 0U;
    __Vtemp_h7d0ea64b__0[0xdU] = 0U;
    __Vtemp_h7d0ea64b__0[0xeU] = 0U;
    __Vtemp_h7d0ea64b__0[0xfU] = 0U;
    __Vtemp_h7d0ea64b__0[0x10U] = 0U;
    VL_SHIFTL_WWI(515,515,8, __Vtemp_hb742e2be__0, __Vtemp_h7d0ea64b__0, 
                  (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 8U)));
    VL_SHIFTL_WWI(527,527,8, __Vtemp_h46d1f798__0, VTestDriver__ConstPool__CONST_hea2bd2fa_0, 
                  (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_ext__DOT__Memory
                            [0U][3U] >> 2U)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        __Vtemp_h4d07a2e6__0[1U] = 0U;
        __Vtemp_h4d07a2e6__0[2U] = 0U;
        __Vtemp_h4d07a2e6__0[3U] = 0U;
        __Vtemp_h4d07a2e6__0[4U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[0U] = 0U;
    } else {
        __Vtemp_h4d07a2e6__0[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[1U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_1023)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[1U] 
                                            & __Vtemp_hb742e2be__0[1U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_1038)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                                                     & __Vtemp_h46d1f798__0[1U])
                                                     : 0U)));
        __Vtemp_h4d07a2e6__0[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[2U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_1023)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[2U] 
                                            & __Vtemp_hb742e2be__0[2U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_1038)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                                                     & __Vtemp_h46d1f798__0[2U])
                                                     : 0U)));
        __Vtemp_h4d07a2e6__0[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[3U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_1023)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[3U] 
                                            & __Vtemp_hb742e2be__0[3U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_1038)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                                                     & __Vtemp_h46d1f798__0[3U])
                                                     : 0U)));
        __Vtemp_h4d07a2e6__0[4U] = (0xfU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[4U] 
                                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_1023)
                                                 ? 
                                                (VTestDriver__ConstPool__CONST_h00a54009_0[4U] 
                                                 & __Vtemp_hb742e2be__0[4U])
                                                 : 0U)) 
                                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_1038)
                                                   ? 
                                                  (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                                   & __Vtemp_h46d1f798__0[4U])
                                                   : 0U))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_1023)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[0U] 
                       & __Vtemp_hb742e2be__0[0U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_1038)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                         & __Vtemp_h46d1f798__0[0U])
                      : 0U)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[1U] 
        = __Vtemp_h4d07a2e6__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[2U] 
        = __Vtemp_h4d07a2e6__0[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[3U] 
        = __Vtemp_h4d07a2e6__0[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_opcodes[4U] 
        = __Vtemp_h4d07a2e6__0[4U];
    __Vtemp_h19d62f53__0[1U] = 0U;
    __Vtemp_h19d62f53__0[2U] = 0U;
    __Vtemp_h19d62f53__0[3U] = 0U;
    __Vtemp_h19d62f53__0[4U] = 0U;
    __Vtemp_h19d62f53__0[5U] = 0U;
    __Vtemp_h19d62f53__0[6U] = 0U;
    __Vtemp_h19d62f53__0[7U] = 0U;
    __Vtemp_h19d62f53__0[8U] = 0U;
    __Vtemp_h19d62f53__0[9U] = 0U;
    __Vtemp_h19d62f53__0[0xaU] = 0U;
    __Vtemp_h19d62f53__0[0xbU] = 0U;
    __Vtemp_h19d62f53__0[0xcU] = 0U;
    __Vtemp_h19d62f53__0[0xdU] = 0U;
    __Vtemp_h19d62f53__0[0xeU] = 0U;
    __Vtemp_h19d62f53__0[0xfU] = 0U;
    __Vtemp_h19d62f53__0[0x10U] = 0U;
    VL_SHIFTL_WWI(515,515,8, __Vtemp_h7c009682__0, __Vtemp_h19d62f53__0, 
                  (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                            >> 8U)));
    VL_SHIFTL_WWI(527,527,8, __Vtemp_hb17e4654__0, VTestDriver__ConstPool__CONST_hea2bd2fa_0, 
                  (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__ram_ext__DOT__Memory
                            [0U][3U] >> 2U)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        __Vtemp_h7f12f69d__0[1U] = 0U;
        __Vtemp_h7f12f69d__0[2U] = 0U;
        __Vtemp_h7f12f69d__0[3U] = 0U;
        __Vtemp_h7f12f69d__0[4U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[0U] = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value = 0U;
    } else {
        __Vtemp_h7f12f69d__0[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[1U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_1023)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[1U] 
                                            & __Vtemp_h7c009682__0[1U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_1038)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                                                     & __Vtemp_hb17e4654__0[1U])
                                                     : 0U)));
        __Vtemp_h7f12f69d__0[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[2U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_1023)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[2U] 
                                            & __Vtemp_h7c009682__0[2U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_1038)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                                                     & __Vtemp_hb17e4654__0[2U])
                                                     : 0U)));
        __Vtemp_h7f12f69d__0[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[3U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_1023)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[3U] 
                                            & __Vtemp_h7c009682__0[3U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_1038)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                                                     & __Vtemp_hb17e4654__0[3U])
                                                     : 0U)));
        __Vtemp_h7f12f69d__0[4U] = (0xfU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[4U] 
                                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_1023)
                                                 ? 
                                                (VTestDriver__ConstPool__CONST_h00a54009_0[4U] 
                                                 & __Vtemp_h7c009682__0[4U])
                                                 : 0U)) 
                                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_1038)
                                                   ? 
                                                  (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                                   & __Vtemp_hb17e4654__0[4U])
                                                   : 0U))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_1023)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[0U] 
                       & __Vtemp_h7c009682__0[0U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_1038)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                         & __Vtemp_hb17e4654__0[0U])
                      : 0U)));
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT__do_enq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value 
                = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT__enq_ptr_value) 
                         - (IData)(1U)));
        }
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vtemp_h7f12f69d__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vtemp_h7f12f69d__0[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[3U] 
        = __Vtemp_h7f12f69d__0[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__inflight_sizes[4U] 
        = __Vtemp_h7f12f69d__0[4U];
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4690(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4690\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_auto_in_a_ready) 
                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_auto_in_d_valid)) 
                  & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT____Vcellinp__repeater__io_repeat)))) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT___T_1) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__repeater__DOT__full))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight = 0ULL;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight = 0ULL;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2 
                = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_2)
                              ? ((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])
                                  ? (~ (0xffffffU & 
                                        (((IData)(0xfffU) 
                                          << (0xfU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 5U))) 
                                         >> 3U))) : 0U)
                              : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_2) 
                                 - (IData)(1U))));
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight 
            = (0x1ffffffffULL & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight 
                                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1489)
                                      ? (1ULL << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_source))
                                      : 0ULL)) & (~ 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1504)
                                                    ? 
                                                   (1ULL 
                                                    << 
                                                    (0x3fU 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 9U)))
                                                    : 0ULL))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight 
            = (0x1ffffffffULL & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__inflight 
                                  | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1477)
                                      ? (1ULL << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___in_xbar_auto_out_a_bits_source))
                                      : 0ULL)) & (~ 
                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1492)
                                                    ? 
                                                   (1ULL 
                                                    << 
                                                    (0x3fU 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 9U)))
                                                    : 0ULL))));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4691(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4691\n"); );
    // Init
    VlWide<5>/*159:0*/ __Vtemp_h8dfbae5f__0;
    VlWide<17>/*543:0*/ __Vtemp_h4a96ab83__0;
    VlWide<17>/*543:0*/ __Vtemp_ha507b04e__0;
    VlWide<17>/*543:0*/ __Vtemp_h7c8916bd__0;
    VlWide<17>/*543:0*/ __Vtemp_h7a06c887__0;
    VlWide<9>/*287:0*/ __Vtemp_h08f91be1__0;
    VlWide<17>/*543:0*/ __Vtemp_h3f3cb614__0;
    VlWide<17>/*543:0*/ __Vtemp_hb00bd0ca__0;
    VlWide<17>/*543:0*/ __Vtemp_h153e7020__0;
    VlWide<17>/*543:0*/ __Vtemp_h68dd52cb__0;
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1489) {
        __Vtemp_h4a96ab83__0[0U] = (1U | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_opcode) 
                                          << 1U));
        __Vtemp_h3f3cb614__0[0U] = (1U | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_size) 
                                          << 1U));
    } else {
        __Vtemp_h4a96ab83__0[0U] = 0U;
        __Vtemp_h3f3cb614__0[0U] = 0U;
    }
    __Vtemp_h4a96ab83__0[1U] = 0U;
    __Vtemp_h4a96ab83__0[2U] = 0U;
    __Vtemp_h4a96ab83__0[3U] = 0U;
    __Vtemp_h4a96ab83__0[4U] = 0U;
    __Vtemp_h4a96ab83__0[5U] = 0U;
    __Vtemp_h4a96ab83__0[6U] = 0U;
    __Vtemp_h4a96ab83__0[7U] = 0U;
    __Vtemp_h4a96ab83__0[8U] = 0U;
    __Vtemp_h4a96ab83__0[9U] = 0U;
    __Vtemp_h4a96ab83__0[0xaU] = 0U;
    __Vtemp_h4a96ab83__0[0xbU] = 0U;
    __Vtemp_h4a96ab83__0[0xcU] = 0U;
    __Vtemp_h4a96ab83__0[0xdU] = 0U;
    __Vtemp_h4a96ab83__0[0xeU] = 0U;
    __Vtemp_h4a96ab83__0[0xfU] = 0U;
    __Vtemp_h4a96ab83__0[0x10U] = 0U;
    __Vtemp_ha507b04e__0[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_source) 
                                << 2U);
    __Vtemp_ha507b04e__0[1U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_source) 
                                >> 0x1eU);
    __Vtemp_ha507b04e__0[2U] = 0U;
    __Vtemp_ha507b04e__0[3U] = 0U;
    __Vtemp_ha507b04e__0[4U] = 0U;
    __Vtemp_ha507b04e__0[5U] = 0U;
    __Vtemp_ha507b04e__0[6U] = 0U;
    __Vtemp_ha507b04e__0[7U] = 0U;
    __Vtemp_ha507b04e__0[8U] = 0U;
    __Vtemp_ha507b04e__0[9U] = 0U;
    __Vtemp_ha507b04e__0[0xaU] = 0U;
    __Vtemp_ha507b04e__0[0xbU] = 0U;
    __Vtemp_ha507b04e__0[0xcU] = 0U;
    __Vtemp_ha507b04e__0[0xdU] = 0U;
    __Vtemp_ha507b04e__0[0xeU] = 0U;
    __Vtemp_ha507b04e__0[0xfU] = 0U;
    __Vtemp_ha507b04e__0[0x10U] = 0U;
    VL_SHIFTL_WWW(515,515,515, __Vtemp_h7c8916bd__0, __Vtemp_h4a96ab83__0, __Vtemp_ha507b04e__0);
    VL_SHIFTL_WWI(527,527,8, __Vtemp_h7a06c887__0, VTestDriver__ConstPool__CONST_hea2bd2fa_0, 
                  (0xfcU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                            >> 7U)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        __Vtemp_h8dfbae5f__0[1U] = 0U;
        __Vtemp_h8dfbae5f__0[2U] = 0U;
        __Vtemp_h8dfbae5f__0[3U] = 0U;
        __Vtemp_h8dfbae5f__0[4U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0U] = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight = 0U;
    } else {
        __Vtemp_h8dfbae5f__0[1U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[1U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1489)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[1U] 
                                            & __Vtemp_h7c8916bd__0[1U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1504)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                                                     & __Vtemp_h7a06c887__0[1U])
                                                     : 0U)));
        __Vtemp_h8dfbae5f__0[2U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[2U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1489)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[2U] 
                                            & __Vtemp_h7c8916bd__0[2U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1504)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                                                     & __Vtemp_h7a06c887__0[2U])
                                                     : 0U)));
        __Vtemp_h8dfbae5f__0[3U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[3U] 
                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1489)
                                         ? (VTestDriver__ConstPool__CONST_h00a54009_0[3U] 
                                            & __Vtemp_h7c8916bd__0[3U])
                                         : 0U)) & (~ 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1504)
                                                     ? 
                                                    (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                                                     & __Vtemp_h7a06c887__0[3U])
                                                     : 0U)));
        __Vtemp_h8dfbae5f__0[4U] = (0xfU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[4U] 
                                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1489)
                                                 ? 
                                                (VTestDriver__ConstPool__CONST_h00a54009_0[4U] 
                                                 & __Vtemp_h7c8916bd__0[4U])
                                                 : 0U)) 
                                            & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1504)
                                                   ? 
                                                  (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                                   & __Vtemp_h7a06c887__0[4U])
                                                   : 0U))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0U] 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[0U] 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1489)
                    ? (VTestDriver__ConstPool__CONST_h00a54009_0[0U] 
                       & __Vtemp_h7c8916bd__0[0U]) : 0U)) 
               & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1504)
                      ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                         & __Vtemp_h7a06c887__0[0U])
                      : 0U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight 
            = (0x7fffffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__inflight 
                               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1446)
                                   ? ((IData)(1U) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_sbus_auto_coupler_to_bus_named_subsystem_cbus_bus_xing_out_a_bits_source))
                                   : 0U)) & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1461)
                                                 ? 
                                                ((IData)(1U) 
                                                 << 
                                                 (0x1fU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                     >> 9U)))
                                                 : 0U))));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[1U] 
        = __Vtemp_h8dfbae5f__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[2U] 
        = __Vtemp_h8dfbae5f__0[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[3U] 
        = __Vtemp_h8dfbae5f__0[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_opcodes[4U] 
        = __Vtemp_h8dfbae5f__0[4U];
    __Vtemp_h3f3cb614__0[1U] = 0U;
    __Vtemp_h3f3cb614__0[2U] = 0U;
    __Vtemp_h3f3cb614__0[3U] = 0U;
    __Vtemp_h3f3cb614__0[4U] = 0U;
    __Vtemp_h3f3cb614__0[5U] = 0U;
    __Vtemp_h3f3cb614__0[6U] = 0U;
    __Vtemp_h3f3cb614__0[7U] = 0U;
    __Vtemp_h3f3cb614__0[8U] = 0U;
    __Vtemp_h3f3cb614__0[9U] = 0U;
    __Vtemp_h3f3cb614__0[0xaU] = 0U;
    __Vtemp_h3f3cb614__0[0xbU] = 0U;
    __Vtemp_h3f3cb614__0[0xcU] = 0U;
    __Vtemp_h3f3cb614__0[0xdU] = 0U;
    __Vtemp_h3f3cb614__0[0xeU] = 0U;
    __Vtemp_h3f3cb614__0[0xfU] = 0U;
    __Vtemp_h3f3cb614__0[0x10U] = 0U;
    __Vtemp_hb00bd0ca__0[0U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_source) 
                                << 3U);
    __Vtemp_hb00bd0ca__0[1U] = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___atomics_auto_out_a_bits_source) 
                                >> 0x1dU);
    __Vtemp_hb00bd0ca__0[2U] = 0U;
    __Vtemp_hb00bd0ca__0[3U] = 0U;
    __Vtemp_hb00bd0ca__0[4U] = 0U;
    __Vtemp_hb00bd0ca__0[5U] = 0U;
    __Vtemp_hb00bd0ca__0[6U] = 0U;
    __Vtemp_hb00bd0ca__0[7U] = 0U;
    __Vtemp_hb00bd0ca__0[8U] = 0U;
    __Vtemp_hb00bd0ca__0[9U] = 0U;
    __Vtemp_hb00bd0ca__0[0xaU] = 0U;
    __Vtemp_hb00bd0ca__0[0xbU] = 0U;
    __Vtemp_hb00bd0ca__0[0xcU] = 0U;
    __Vtemp_hb00bd0ca__0[0xdU] = 0U;
    __Vtemp_hb00bd0ca__0[0xeU] = 0U;
    __Vtemp_hb00bd0ca__0[0xfU] = 0U;
    __Vtemp_hb00bd0ca__0[0x10U] = 0U;
    VL_SHIFTL_WWW(516,516,516, __Vtemp_h153e7020__0, __Vtemp_h3f3cb614__0, __Vtemp_hb00bd0ca__0);
    VL_SHIFTL_WWI(527,527,9, __Vtemp_h68dd52cb__0, VTestDriver__ConstPool__CONST_hf974e5b2_0, 
                  (0x1f8U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                             >> 6U)));
    __Vtemp_h08f91be1__0[1U] = (VTestDriver__ConstPool__CONST_h52851867_0[1U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[1U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[1U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1489)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[1U] 
                                               & __Vtemp_h153e7020__0[1U])
                                            : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[1U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1504)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[1U] 
                                                 & __Vtemp_h68dd52cb__0[1U])
                                              : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[1U])))));
    __Vtemp_h08f91be1__0[2U] = (VTestDriver__ConstPool__CONST_h52851867_0[2U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[2U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[2U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1489)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[2U] 
                                               & __Vtemp_h153e7020__0[2U])
                                            : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[2U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1504)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[2U] 
                                                 & __Vtemp_h68dd52cb__0[2U])
                                              : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[2U])))));
    __Vtemp_h08f91be1__0[3U] = (VTestDriver__ConstPool__CONST_h52851867_0[3U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[3U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[3U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1489)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[3U] 
                                               & __Vtemp_h153e7020__0[3U])
                                            : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[3U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1504)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[3U] 
                                                 & __Vtemp_h68dd52cb__0[3U])
                                              : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[3U])))));
    __Vtemp_h08f91be1__0[4U] = (VTestDriver__ConstPool__CONST_h52851867_0[4U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[4U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[4U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1489)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[4U] 
                                               & __Vtemp_h153e7020__0[4U])
                                            : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[4U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1504)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[4U] 
                                                 & __Vtemp_h68dd52cb__0[4U])
                                              : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[4U])))));
    __Vtemp_h08f91be1__0[5U] = (VTestDriver__ConstPool__CONST_h52851867_0[5U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[5U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[5U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1489)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[5U] 
                                               & __Vtemp_h153e7020__0[5U])
                                            : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[5U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1504)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[5U] 
                                                 & __Vtemp_h68dd52cb__0[5U])
                                              : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[5U])))));
    __Vtemp_h08f91be1__0[6U] = (VTestDriver__ConstPool__CONST_h52851867_0[6U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[6U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[6U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1489)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[6U] 
                                               & __Vtemp_h153e7020__0[6U])
                                            : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[6U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1504)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[6U] 
                                                 & __Vtemp_h68dd52cb__0[6U])
                                              : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[6U])))));
    __Vtemp_h08f91be1__0[7U] = (VTestDriver__ConstPool__CONST_h52851867_0[7U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[7U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[7U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1489)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[7U] 
                                               & __Vtemp_h153e7020__0[7U])
                                            : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[7U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1504)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[7U] 
                                                 & __Vtemp_h68dd52cb__0[7U])
                                              : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[7U])))));
    __Vtemp_h08f91be1__0[8U] = (VTestDriver__ConstPool__CONST_h52851867_0[8U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[8U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[8U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1489)
                                            ? (VTestDriver__ConstPool__CONST_h00a54001_0[8U] 
                                               & __Vtemp_h153e7020__0[8U])
                                            : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[8U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1504)
                                              ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[8U] 
                                                 & __Vtemp_h68dd52cb__0[8U])
                                              : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[8U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0U] 
        = (VTestDriver__ConstPool__CONST_h52851867_0[0U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h2a0d1dfa_0[0U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[0U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1489)
                       ? (VTestDriver__ConstPool__CONST_h00a54001_0[0U] 
                          & __Vtemp_h153e7020__0[0U])
                       : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[0U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1504)
                         ? (VTestDriver__ConstPool__CONST_h00a4c3f1_0[0U] 
                            & __Vtemp_h68dd52cb__0[0U])
                         : VTestDriver__ConstPool__CONST_h2a0d1dfa_0[0U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[1U] 
        = __Vtemp_h08f91be1__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[2U] 
        = __Vtemp_h08f91be1__0[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[3U] 
        = __Vtemp_h08f91be1__0[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[4U] 
        = __Vtemp_h08f91be1__0[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[5U] 
        = __Vtemp_h08f91be1__0[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[6U] 
        = __Vtemp_h08f91be1__0[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[7U] 
        = __Vtemp_h08f91be1__0[7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__inflight_sizes[8U] 
        = __Vtemp_h08f91be1__0[8U];
}
