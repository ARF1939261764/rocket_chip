// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestDriver___024root.h"

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6067(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6067\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__maybe_full)) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__axi4frag__DOT____Vcellinp__deq__io_deq_ready))) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq__DOT__maybe_full)) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT___axi4xbar_auto_out_ar_valid)));
    vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__axi4frag__DOT__w_todo 
        = ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__axi4frag__DOT__w_counter))
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__axi4frag__DOT__wbeats_valid)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__axi4frag__DOT__w_counter));
    vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__axi4frag__DOT____VdfgTmp_h78c22a9c__0 
        = ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__axi4frag__DOT__w_counter)) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__axi4frag__DOT__wbeats_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___GEN_11 
        = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___readys_filter_T_7) 
                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___readys_filter_T_7) 
                    >> 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___GEN_12 
        = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_e_valid) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___readys_filter_T_7)));
    vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__axi4buf__DOT__x1_aw_deq__DOT__do_enq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT___axi4buf_auto_in_aw_ready) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT___axi4frag_auto_out_aw_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_5 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_aw_ready) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__axi4frag__DOT___deq_1_io_deq_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__axi4frag__DOT____Vcellinp__deq_1__io_deq_ready 
        = ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__axi4frag__DOT__len_1)))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__axi4frag__DOT__in_aw_ready));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___freeOH_T_15 
        = (0x1ffffffffULL & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___freeOH_T_12 
                             | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___freeOH_T_12 
                                << 0x10U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___GEN_6 
        = (0xfU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___GEN_5) 
                    >> 2U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___GEN_5)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6068(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6068\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___signext_d_T_24 
        = (1U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___GEN_5) 
                  >> 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___GEN_2)));
    if (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT___ctrl_stalld_T_28)) 
         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT___T_7))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__ibufBTBResp_bht_history 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_btb_bht_history;
    }
    if (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT___ctrl_stalld_T_28)) 
         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT___T_7))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__ibufBTBResp_bht_history 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_btb_bht_history;
    }
    if (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT___ctrl_stalld_T_28)) 
         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT___T_7))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__ibufBTBResp_bht_history 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_btb_bht_history;
    }
    if (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___ctrl_stalld_T_28)) 
         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT___T_7))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__ibufBTBResp_bht_history 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_btb_bht_history;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT__do_deq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___buffer_1_auto_out_a_valid) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__out_1_ready) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__a_allow)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__out_1_earlyValid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___buffer_1_auto_out_a_valid) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__a_allow));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_in_d_bits_denied 
        = (1U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_replace) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_denied)) 
                 | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                    >> 0xfU)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_in_d_bits_opcode 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_replace)
            ? 1U : (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___buffer_auto_in_d_valid) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___buffer_1_auto_out_d_ready) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_drop)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_in_d_valid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_drop)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___buffer_auto_in_d_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___T_1027 
        = ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__d_first_counter)))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT___T_1047 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq) 
           & ((6U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT___error_auto_in_d_bits_opcode)) 
              & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__monitor__DOT__d_first_counter_1))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6069(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6069\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT___freeOH_T_15 
        = (0xffffffffffULL & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT___freeOH_T_12 
                              | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT___freeOH_T_12 
                                 << 0x10U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT____VdfgTmp_h522dc201__0 
        = (1U & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_ctrl_wxd) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_valid))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT___io_rocc_cmd_valid_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_ctrl_rocc) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_ctrl_csr) 
           & (3U | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_valid) 
                    << 2U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT___T_110 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_ctrl_mem) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT____VdfgTmp_h522dc201__0 
        = (1U & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_ctrl_wxd) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_valid))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT___io_rocc_cmd_valid_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_ctrl_rocc) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_ctrl_csr) 
           & (3U | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_valid) 
                    << 2U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT___T_110 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_ctrl_mem) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT____VdfgTmp_h522dc201__0 
        = (1U & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_ctrl_wxd) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_valid))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT___io_rocc_cmd_valid_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_ctrl_rocc) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_ctrl_csr) 
           & (3U | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_valid) 
                    << 2U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT___T_110 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_ctrl_mem) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT____VdfgTmp_h522dc201__0 
        = (1U & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_ctrl_wxd) 
                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_valid))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___io_rocc_cmd_valid_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_ctrl_rocc) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_ctrl_csr) 
           & (3U | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_valid) 
                    << 2U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_110 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_ctrl_mem) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__maybe_full)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_l2_wrapper_auto_l2_ctl_in_d_valid));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6070(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6070\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lfsr_prng__DOT__state_8 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lfsr_prng__DOT__state_8 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lfsr_prng__DOT__state_8 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lfsr_prng__DOT__state_8 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_8 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_8 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_8 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_8 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR_prng__DOT__state_8 = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_48) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lfsr_prng__DOT__state_8 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lfsr_prng__DOT__state_7;
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_48) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lfsr_prng__DOT__state_8 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lfsr_prng__DOT__state_7;
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_48) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lfsr_prng__DOT__state_8 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lfsr_prng__DOT__state_7;
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_48) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lfsr_prng__DOT__state_8 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lfsr_prng__DOT__state_7;
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___refill_fire_T) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_8 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_7;
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___refill_fire_T) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_8 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_7;
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___refill_fire_T) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_8 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_7;
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT___refill_fire_T) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_8 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0_prng__DOT__state_7;
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__directory__io_read_valid) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR_prng__DOT__state_8 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimLFSR_prng__DOT__state_7;
        }
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT__do_enq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_fbus_coupler_from_port_named_serial_tl_ctrl_auto_buffer_in_a_ready) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_fbus_serdesser_auto_client_out_a_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_fbus_serdesser_auto_client_out_a_valid) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6071(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6071\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__0;
    VlWide<3>/*95:0*/ __Vtemp_h4dea9468__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__1;
    VlWide<3>/*95:0*/ __Vtemp_he756d3d4__0;
    // Body
    __Vtemp_h6341b9db__0[0U] = 0U;
    __Vtemp_h6341b9db__0[1U] = 0U;
    __Vtemp_h6341b9db__0[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h4dea9468__0, __Vtemp_h6341b9db__0, 
                   (0x38U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__count) 
                             << 3U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__eOut 
        = ((7U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__count)) 
           & ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__count)) 
              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__isHi)) 
                 & (0ULL == ((~ (((QData)((IData)(__Vtemp_h4dea9468__0[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              __Vtemp_h4dea9468__0[0U])))) 
                             & (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U]))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___decoded_orMatrixOutputs_T_4 
        = (((IData)((1U == (5U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_alu_fn)))) 
            << 1U) | (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_alu_fn) 
                            >> 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT____VdfgTmp_h86f07cff__0 
        = (IData)((0U == (6U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_alu_fn))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__alu__DOT____VdfgTmp_h22159945__0 
        = ((5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_alu_fn)) 
           | (0xbU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_alu_fn)));
    __Vtemp_h6341b9db__1[0U] = 0U;
    __Vtemp_h6341b9db__1[1U] = 0U;
    __Vtemp_h6341b9db__1[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_he756d3d4__0, __Vtemp_h6341b9db__1, 
                   (0x38U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__count) 
                             << 3U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__eOut 
        = ((7U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__count)) 
           & ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__count)) 
              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__isHi)) 
                 & (0ULL == ((~ (((QData)((IData)(__Vtemp_he756d3d4__0[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              __Vtemp_he756d3d4__0[0U])))) 
                             & (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U]))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6072(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6072\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__0;
    VlWide<3>/*95:0*/ __Vtemp_hc7b2cd6e__0;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___decoded_orMatrixOutputs_T_4 
        = (((IData)((1U == (5U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_alu_fn)))) 
            << 1U) | (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_alu_fn) 
                            >> 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT____VdfgTmp_h86f07cff__0 
        = (IData)((0U == (6U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_alu_fn))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__alu__DOT____VdfgTmp_h22159945__0 
        = ((5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_alu_fn)) 
           | (0xbU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_alu_fn)));
    __Vtemp_h6341b9db__0[0U] = 0U;
    __Vtemp_h6341b9db__0[1U] = 0U;
    __Vtemp_h6341b9db__0[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hc7b2cd6e__0, __Vtemp_h6341b9db__0, 
                   (0x38U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__count) 
                             << 3U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__eOut 
        = ((7U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__count)) 
           & ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__count)) 
              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__isHi)) 
                 & (0ULL == ((~ (((QData)((IData)(__Vtemp_hc7b2cd6e__0[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              __Vtemp_hc7b2cd6e__0[0U])))) 
                             & (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U]))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___decoded_orMatrixOutputs_T_4 
        = (((IData)((1U == (5U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_alu_fn)))) 
            << 1U) | (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_alu_fn) 
                            >> 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT____VdfgTmp_h86f07cff__0 
        = (IData)((0U == (6U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_alu_fn))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__alu__DOT____VdfgTmp_h22159945__0 
        = ((5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_alu_fn)) 
           | (0xbU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_alu_fn)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6073(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6073\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__0;
    VlWide<3>/*95:0*/ __Vtemp_h2a8f55a8__0;
    // Body
    __Vtemp_h6341b9db__0[0U] = 0U;
    __Vtemp_h6341b9db__0[1U] = 0U;
    __Vtemp_h6341b9db__0[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h2a8f55a8__0, __Vtemp_h6341b9db__0, 
                   (0x38U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__count) 
                             << 3U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__eOut 
        = ((7U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__count)) 
           & ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__count)) 
              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__isHi)) 
                 & (0ULL == ((~ (((QData)((IData)(__Vtemp_h2a8f55a8__0[1U])) 
                                  << 0x20U) | (QData)((IData)(
                                                              __Vtemp_h2a8f55a8__0[0U])))) 
                             & (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[1U])) 
                                 << 0x20U) | (QData)((IData)(
                                                             vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__remainder[0U]))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___decoded_orMatrixOutputs_T_4 
        = (((IData)((1U == (5U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_alu_fn)))) 
            << 1U) | (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_alu_fn) 
                            >> 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT____VdfgTmp_h86f07cff__0 
        = (IData)((0U == (6U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_alu_fn))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__alu__DOT____VdfgTmp_h22159945__0 
        = ((5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_alu_fn)) 
           | (0xbU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_alu_fn)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___queue_arw_deq_io_enq_ready 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__maybe_full)) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT____Vcellinp__queue_arw_deq__io_deq_ready)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___tag_array_RW0_rdata[0U] 
        = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_1_RW0_rdata)) 
                    << 0x16U) | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0_RW0_rdata))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___tag_array_RW0_rdata[1U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_2_RW0_rdata 
            << 0xcU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_1_RW0_rdata)) 
                                  << 0x16U) | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0_RW0_rdata))) 
                                >> 0x20U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___tag_array_RW0_rdata[2U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_3_RW0_rdata 
            << 2U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_2_RW0_rdata 
                      >> 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__uncachedReqs_0_addr 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__uncachedReqs_0_addr;
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6074(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6074\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
        [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value][0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
        [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value][1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
        [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value][2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT___tag_array_RW0_rdata[0U] 
        = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_1_RW0_rdata)) 
                    << 0x16U) | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0_RW0_rdata))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT___tag_array_RW0_rdata[1U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_2_RW0_rdata 
            << 0xcU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_1_RW0_rdata)) 
                                  << 0x16U) | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0_RW0_rdata))) 
                                >> 0x20U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT___tag_array_RW0_rdata[2U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_3_RW0_rdata 
            << 2U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_2_RW0_rdata 
                      >> 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__uncachedReqs_0_addr 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__uncachedReqs_0_addr;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
        [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value][0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
        [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value][1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
        [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value][2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT___tag_array_RW0_rdata[0U] 
        = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_1_RW0_rdata)) 
                    << 0x16U) | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0_RW0_rdata))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT___tag_array_RW0_rdata[1U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_2_RW0_rdata 
            << 0xcU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_1_RW0_rdata)) 
                                  << 0x16U) | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0_RW0_rdata))) 
                                >> 0x20U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT___tag_array_RW0_rdata[2U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_3_RW0_rdata 
            << 2U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_2_RW0_rdata 
                      >> 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__uncachedReqs_0_addr 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__uncachedReqs_0_addr;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
        [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value][0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
        [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value][1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
        [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value][2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___GEN_9 
        = (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___readys_filter_T_5) 
                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___readys_filter_T_5) 
                    >> 1U)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6075(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6075\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___GEN_10 
        = (1U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_c_valid) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___readys_filter_T_5)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT___tag_array_RW0_rdata[0U] 
        = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_1_RW0_rdata)) 
                    << 0x16U) | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0_RW0_rdata))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT___tag_array_RW0_rdata[1U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_2_RW0_rdata 
            << 0xcU) | (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_1_RW0_rdata)) 
                                  << 0x16U) | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0_RW0_rdata))) 
                                >> 0x20U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT___tag_array_RW0_rdata[2U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_3_RW0_rdata 
            << 2U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_2_RW0_rdata 
                      >> 0x14U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__uncachedReqs_0_addr 
        = vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__uncachedReqs_0_addr;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
        [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value][0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
        [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value][1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
        [vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT__deq_ptr_value][2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT___GEN_3 
        = (0x7fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT___GEN_2) 
                     >> 9U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT___GEN_2) 
                               >> 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_f_wivalid_4 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT___out_wifireMux_T_2) 
           & ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT___GEN_3)) 
              & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT____VdfgTmp_h2a98bc50__0)) 
                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT____VdfgTmp_hbfbb5bbb__0))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_iready 
        = (1U & ((4U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                         [0U][0U])) | ((3U | ((8U & 
                                               (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__flushInValid)) 
                                                 | ((~ (IData)(
                                                               (0xffffffffU 
                                                                == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT___out_wimask_T_5))) 
                                                    | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT____VdfgTmp_h2a98bc50__0))) 
                                                << 3U)) 
                                              | (4U 
                                                 & (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__flushInValid)) 
                                                     | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT____VdfgTmp_hbfbb5bbb__0)) 
                                                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT____VdfgTmp_h2a98bc50__0))) 
                                                    << 2U)))) 
                                       >> (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT___GEN_3))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6076(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6076\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
        = (((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_typeTagIn))
             ? 0ULL : 0xffffffff00000000ULL) | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_in1);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___core_io_fpu_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_typeTagIn 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___fp_decoder_io_sigs_typeTagIn;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_typeTagOut 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___fp_decoder_io_sigs_typeTagOut;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT___T_2 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_ren2)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_wflags));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__isNaNOut 
        = (7U == (7U & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                          << 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                    >> 0x1dU)) & ((
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[1U] 
                                                   << 3U) 
                                                  | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[1U] 
                                                     >> 0x1dU)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT___fsgnj_T 
        = (1U & ((2U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_rm))
                  ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                     ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[2U])
                  : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_rm) 
                     ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[2U])));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT____Vcellinp__roundAnyRawFNToRecFN__io_in_isInf 
        = (IData)((0xc0000000U == (0xe0000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U])));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h5eaf4362__0 
        = (((IData)((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                            >> 0x1dU))) << 0x17U) | 
           (0x7fffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                          << 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[0U] 
                                    >> 0x1dU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_rm)) 
            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U]) 
           | ((~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U]) 
              & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_rm))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6077(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6077\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__0;
    VlWide<3>/*95:0*/ __Vtemp_hbaf6a35f__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__1;
    VlWide<3>/*95:0*/ __Vtemp_he386bc7c__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__2;
    VlWide<3>/*95:0*/ __Vtemp_h188fb3b7__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__3;
    VlWide<3>/*95:0*/ __Vtemp_hfd728b33__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__4;
    VlWide<3>/*95:0*/ __Vtemp_h3ffcc072__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__5;
    VlWide<3>/*95:0*/ __Vtemp_hb72a7d1c__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__6;
    VlWide<3>/*95:0*/ __Vtemp_h031d4e8b__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__7;
    VlWide<3>/*95:0*/ __Vtemp_h09243774__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__8;
    VlWide<3>/*95:0*/ __Vtemp_h59d23581__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__9;
    VlWide<3>/*95:0*/ __Vtemp_h0d381c0d__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__10;
    VlWide<3>/*95:0*/ __Vtemp_hc68715a1__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__11;
    VlWide<3>/*95:0*/ __Vtemp_he306c57b__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__12;
    VlWide<3>/*95:0*/ __Vtemp_h181ad422__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__13;
    VlWide<3>/*95:0*/ __Vtemp_h3a8e7291__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__14;
    VlWide<3>/*95:0*/ __Vtemp_h316e6172__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__15;
    VlWide<3>/*95:0*/ __Vtemp_h9676286c__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__16;
    VlWide<3>/*95:0*/ __Vtemp_hce2aa5ec__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__17;
    VlWide<3>/*95:0*/ __Vtemp_h8e6664e8__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__18;
    VlWide<3>/*95:0*/ __Vtemp_h73cfac4a__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__19;
    VlWide<3>/*95:0*/ __Vtemp_he1fec39e__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__20;
    VlWide<3>/*95:0*/ __Vtemp_hfa567581__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__21;
    VlWide<3>/*95:0*/ __Vtemp_h055eac1e__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__22;
    VlWide<3>/*95:0*/ __Vtemp_h40e0563b__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__23;
    VlWide<3>/*95:0*/ __Vtemp_hfa290a4d__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__24;
    VlWide<3>/*95:0*/ __Vtemp_hcdf9de91__0;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__rawIn_isNaN 
        = (IData)((0xe0000000U == (0xe0000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U])));
    __Vtemp_h6341b9db__0[0U] = 0U;
    __Vtemp_h6341b9db__0[1U] = 0U;
    __Vtemp_h6341b9db__0[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hbaf6a35f__0, __Vtemp_h6341b9db__0, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__1[0U] = 0U;
    __Vtemp_h6341b9db__1[1U] = 0U;
    __Vtemp_h6341b9db__1[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_he386bc7c__0, __Vtemp_h6341b9db__1, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__2[0U] = 0U;
    __Vtemp_h6341b9db__2[1U] = 0U;
    __Vtemp_h6341b9db__2[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h188fb3b7__0, __Vtemp_h6341b9db__2, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__3[0U] = 0U;
    __Vtemp_h6341b9db__3[1U] = 0U;
    __Vtemp_h6341b9db__3[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hfd728b33__0, __Vtemp_h6341b9db__3, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__4[0U] = 0U;
    __Vtemp_h6341b9db__4[1U] = 0U;
    __Vtemp_h6341b9db__4[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h3ffcc072__0, __Vtemp_h6341b9db__4, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__5[0U] = 0U;
    __Vtemp_h6341b9db__5[1U] = 0U;
    __Vtemp_h6341b9db__5[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hb72a7d1c__0, __Vtemp_h6341b9db__5, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__6[0U] = 0U;
    __Vtemp_h6341b9db__6[1U] = 0U;
    __Vtemp_h6341b9db__6[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h031d4e8b__0, __Vtemp_h6341b9db__6, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__7[0U] = 0U;
    __Vtemp_h6341b9db__7[1U] = 0U;
    __Vtemp_h6341b9db__7[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h09243774__0, __Vtemp_h6341b9db__7, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__8[0U] = 0U;
    __Vtemp_h6341b9db__8[1U] = 0U;
    __Vtemp_h6341b9db__8[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h59d23581__0, __Vtemp_h6341b9db__8, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__9[0U] = 0U;
    __Vtemp_h6341b9db__9[1U] = 0U;
    __Vtemp_h6341b9db__9[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h0d381c0d__0, __Vtemp_h6341b9db__9, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__10[0U] = 0U;
    __Vtemp_h6341b9db__10[1U] = 0U;
    __Vtemp_h6341b9db__10[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hc68715a1__0, __Vtemp_h6341b9db__10, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__11[0U] = 0U;
    __Vtemp_h6341b9db__11[1U] = 0U;
    __Vtemp_h6341b9db__11[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_he306c57b__0, __Vtemp_h6341b9db__11, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__12[0U] = 0U;
    __Vtemp_h6341b9db__12[1U] = 0U;
    __Vtemp_h6341b9db__12[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h181ad422__0, __Vtemp_h6341b9db__12, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__13[0U] = 0U;
    __Vtemp_h6341b9db__13[1U] = 0U;
    __Vtemp_h6341b9db__13[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h3a8e7291__0, __Vtemp_h6341b9db__13, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__14[0U] = 0U;
    __Vtemp_h6341b9db__14[1U] = 0U;
    __Vtemp_h6341b9db__14[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h316e6172__0, __Vtemp_h6341b9db__14, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__15[0U] = 0U;
    __Vtemp_h6341b9db__15[1U] = 0U;
    __Vtemp_h6341b9db__15[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h9676286c__0, __Vtemp_h6341b9db__15, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__16[0U] = 0U;
    __Vtemp_h6341b9db__16[1U] = 0U;
    __Vtemp_h6341b9db__16[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hce2aa5ec__0, __Vtemp_h6341b9db__16, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__17[0U] = 0U;
    __Vtemp_h6341b9db__17[1U] = 0U;
    __Vtemp_h6341b9db__17[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h8e6664e8__0, __Vtemp_h6341b9db__17, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__18[0U] = 0U;
    __Vtemp_h6341b9db__18[1U] = 0U;
    __Vtemp_h6341b9db__18[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h73cfac4a__0, __Vtemp_h6341b9db__18, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__19[0U] = 0U;
    __Vtemp_h6341b9db__19[1U] = 0U;
    __Vtemp_h6341b9db__19[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_he1fec39e__0, __Vtemp_h6341b9db__19, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__20[0U] = 0U;
    __Vtemp_h6341b9db__20[1U] = 0U;
    __Vtemp_h6341b9db__20[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hfa567581__0, __Vtemp_h6341b9db__20, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__21[0U] = 0U;
    __Vtemp_h6341b9db__21[1U] = 0U;
    __Vtemp_h6341b9db__21[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h055eac1e__0, __Vtemp_h6341b9db__21, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__22[0U] = 0U;
    __Vtemp_h6341b9db__22[1U] = 0U;
    __Vtemp_h6341b9db__22[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h40e0563b__0, __Vtemp_h6341b9db__22, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__23[0U] = 0U;
    __Vtemp_h6341b9db__23[1U] = 0U;
    __Vtemp_h6341b9db__23[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hfa290a4d__0, __Vtemp_h6341b9db__23, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__24[0U] = 0U;
    __Vtemp_h6341b9db__24[1U] = 0U;
    __Vtemp_h6341b9db__24[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hcdf9de91__0, __Vtemp_h6341b9db__24, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h86eb33d4__0 
        = ((0x80U & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                      >> 0x14U) - (IData)(0x100U)))
            ? ((0x40U & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                          >> 0x14U) - (IData)(0x100U)))
                ? 0U : ((4U & (__Vtemp_hbaf6a35f__0[0U] 
                               << 2U)) | ((2U & __Vtemp_he386bc7c__0[0U]) 
                                          | (1U & (
                                                   __Vtemp_h188fb3b7__0[0U] 
                                                   >> 2U)))))
            : (7U | (((0x40U & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                 >> 0x14U) - (IData)(0x100U)))
                       ? ((0x200000U & (__Vtemp_hfd728b33__0[1U] 
                                        << 0xbU)) | 
                          ((0x100000U & (__Vtemp_h3ffcc072__0[1U] 
                                         << 9U)) | 
                           ((0x80000U & (__Vtemp_hb72a7d1c__0[1U] 
                                         << 7U)) | 
                            ((0x40000U & (__Vtemp_h031d4e8b__0[1U] 
                                          << 5U)) | 
                             ((0x20000U & (__Vtemp_h09243774__0[1U] 
                                           << 3U)) 
                              | ((0x10000U & (__Vtemp_h59d23581__0[1U] 
                                              << 1U)) 
                                 | ((0x8000U & (__Vtemp_h0d381c0d__0[1U] 
                                                >> 1U)) 
                                    | ((0x4000U & (
                                                   __Vtemp_hc68715a1__0[1U] 
                                                   >> 3U)) 
                                       | ((0x2000U 
                                           & (__Vtemp_he306c57b__0[1U] 
                                              >> 5U)) 
                                          | ((0x1000U 
                                              & (__Vtemp_h181ad422__0[1U] 
                                                 >> 7U)) 
                                             | ((0x800U 
                                                 & (__Vtemp_h3a8e7291__0[1U] 
                                                    >> 9U)) 
                                                | ((0x400U 
                                                    & (__Vtemp_h316e6172__0[1U] 
                                                       >> 0xbU)) 
                                                   | ((0x200U 
                                                       & (__Vtemp_h9676286c__0[1U] 
                                                          >> 0xdU)) 
                                                      | ((0x100U 
                                                          & (__Vtemp_hce2aa5ec__0[1U] 
                                                             >> 0xfU)) 
                                                         | ((0x80U 
                                                             & (__Vtemp_h8e6664e8__0[1U] 
                                                                >> 0x11U)) 
                                                            | ((0x40U 
                                                                & (__Vtemp_h73cfac4a__0[1U] 
                                                                   >> 0x13U)) 
                                                               | ((0x20U 
                                                                   & (__Vtemp_he1fec39e__0[1U] 
                                                                      >> 0x15U)) 
                                                                  | ((0x10U 
                                                                      & (__Vtemp_hfa567581__0[1U] 
                                                                         >> 0x17U)) 
                                                                     | ((8U 
                                                                         & (__Vtemp_h055eac1e__0[1U] 
                                                                            >> 0x19U)) 
                                                                        | ((4U 
                                                                            & (__Vtemp_h40e0563b__0[1U] 
                                                                               >> 0x1bU)) 
                                                                           | ((2U 
                                                                               & (__Vtemp_hfa290a4d__0[1U] 
                                                                                >> 0x1dU)) 
                                                                              | (__Vtemp_hcdf9de91__0[1U] 
                                                                                >> 0x1fU))))))))))))))))))))))
                       : 0x3fffffU) << 3U)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6078(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6078\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_isNaNC 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isNaNC;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_isNaNAOrB 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_signProd 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_signProd;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_CIsDominant 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_CIsDominant;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_roundingMode_b 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_rm;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundingMode_stage0_b 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_rm;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_doSubMags 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_isZeroA 
            = (1U & (~ (IData)((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in1[1U] 
                                       >> 0x1dU)))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_isInfA 
            = (IData)((0xc0000000U == (0xe0000000U 
                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in1[1U])));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_isZeroB 
            = (1U & (~ (IData)((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in2[1U] 
                                       >> 0x1dU)))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_isInfB 
            = (IData)((0xc0000000U == (0xe0000000U 
                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in2[1U])));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_isNaN) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_invalidExc_b));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgTmp_h101df4a7__0[0U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_b[0U] 
            << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_bit0AlignedSigC));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgTmp_h101df4a7__0[1U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_b[0U] 
            >> 0x1fU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_b[1U] 
                         << 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgTmp_h101df4a7__0[2U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_b[1U] 
            >> 0x1fU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_b[2U] 
                         << 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgTmp_h101df4a7__0[3U] 
        = ((0x1800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3) 
                       << 0xbU)) | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_b[2U] 
                                     >> 0x1fU) | (0x7feU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_b[3U] 
                                                     << 1U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6079(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6079\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__0;
    VlWide<3>/*95:0*/ __Vtemp_h5d101dc5__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__1;
    VlWide<3>/*95:0*/ __Vtemp_h850b434e__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__2;
    VlWide<3>/*95:0*/ __Vtemp_h76f4265d__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__3;
    VlWide<3>/*95:0*/ __Vtemp_h9ffdfe39__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__4;
    VlWide<3>/*95:0*/ __Vtemp_h619a54c8__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__5;
    VlWide<3>/*95:0*/ __Vtemp_h18a3f382__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__6;
    VlWide<3>/*95:0*/ __Vtemp_h65af9b71__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__7;
    VlWide<3>/*95:0*/ __Vtemp_h5277a3c6__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__8;
    VlWide<3>/*95:0*/ __Vtemp_hf76daa2b__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__9;
    VlWide<3>/*95:0*/ __Vtemp_h671bb0c3__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__10;
    VlWide<3>/*95:0*/ __Vtemp_h290a87f7__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__11;
    VlWide<3>/*95:0*/ __Vtemp_h836b4061__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__12;
    VlWide<3>/*95:0*/ __Vtemp_hb8b64b4c__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__13;
    VlWide<3>/*95:0*/ __Vtemp_h9929e93b__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__14;
    VlWide<3>/*95:0*/ __Vtemp_h1b88c9c8__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__15;
    VlWide<3>/*95:0*/ __Vtemp_hf8d094d2__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__16;
    VlWide<3>/*95:0*/ __Vtemp_hefd43452__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__17;
    VlWide<3>/*95:0*/ __Vtemp_hb0c1df3a__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__18;
    VlWide<3>/*95:0*/ __Vtemp_hd23432e0__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__19;
    VlWide<3>/*95:0*/ __Vtemp_h80b33e08__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__20;
    VlWide<3>/*95:0*/ __Vtemp_h5dd9bad7__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__21;
    VlWide<3>/*95:0*/ __Vtemp_h63f2fe88__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__22;
    VlWide<3>/*95:0*/ __Vtemp_h9efcd0f5__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__23;
    VlWide<3>/*95:0*/ __Vtemp_h9a949fb7__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__24;
    VlWide<3>/*95:0*/ __Vtemp_h2c9953ef__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__25;
    VlWide<3>/*95:0*/ __Vtemp_h21d5e4eb__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__26;
    VlWide<3>/*95:0*/ __Vtemp_h344b1be9__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__27;
    VlWide<3>/*95:0*/ __Vtemp_he749129b__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__28;
    VlWide<3>/*95:0*/ __Vtemp_h25b6b67c__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__29;
    VlWide<3>/*95:0*/ __Vtemp_h037a5d3e__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__30;
    VlWide<3>/*95:0*/ __Vtemp_hfa7eee14__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__31;
    VlWide<3>/*95:0*/ __Vtemp_he6af4ac5__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__32;
    VlWide<3>/*95:0*/ __Vtemp_h53b0ee28__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__33;
    VlWide<3>/*95:0*/ __Vtemp_h6593c72b__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__34;
    VlWide<3>/*95:0*/ __Vtemp_hb8a8c8a6__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__35;
    VlWide<3>/*95:0*/ __Vtemp_hd81690c6__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__36;
    VlWide<3>/*95:0*/ __Vtemp_h7243ce50__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__37;
    VlWide<3>/*95:0*/ __Vtemp_h05b5f311__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__38;
    VlWide<3>/*95:0*/ __Vtemp_h17242ff6__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__39;
    VlWide<3>/*95:0*/ __Vtemp_hc4067e4e__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__40;
    VlWide<3>/*95:0*/ __Vtemp_h7c06cea0__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__41;
    VlWide<3>/*95:0*/ __Vtemp_h68f3b12b__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__42;
    VlWide<3>/*95:0*/ __Vtemp_haf0e1d88__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__43;
    VlWide<3>/*95:0*/ __Vtemp_he06084cc__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__44;
    VlWide<3>/*95:0*/ __Vtemp_he11baa73__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__45;
    VlWide<3>/*95:0*/ __Vtemp_h11a4ebd0__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__46;
    VlWide<3>/*95:0*/ __Vtemp_hafcede32__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__47;
    VlWide<3>/*95:0*/ __Vtemp_h802606d4__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__48;
    VlWide<3>/*95:0*/ __Vtemp_hd3929677__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__49;
    VlWide<3>/*95:0*/ __Vtemp_h13447e01__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__50;
    VlWide<3>/*95:0*/ __Vtemp_hc83b981e__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__51;
    VlWide<3>/*95:0*/ __Vtemp_h8d4d4055__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__52;
    VlWide<3>/*95:0*/ __Vtemp_h54fd60d9__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__53;
    VlWide<3>/*95:0*/ __Vtemp_h106c8729__0;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___overflow_roundMagUp_T 
        = ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_roundingMode_b)) 
           | (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_roundingMode_b)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_roundingMode_b)) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sign)) 
           | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sign)) 
              & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_roundingMode_b))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_isInfC 
            = (IData)((0xc0000000U == (0xe0000000U 
                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U])));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_sExpSum 
            = (0x1fffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_CIsDominant)
                           ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                              >> 0x14U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sExpAlignedProd_T_2) 
                                           - (IData)(0x35U))));
    }
    __Vtemp_h6341b9db__0[0U] = 0U;
    __Vtemp_h6341b9db__0[1U] = 0U;
    __Vtemp_h6341b9db__0[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h5d101dc5__0, __Vtemp_h6341b9db__0, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__1[0U] = 0U;
    __Vtemp_h6341b9db__1[1U] = 0U;
    __Vtemp_h6341b9db__1[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h850b434e__0, __Vtemp_h6341b9db__1, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__2[0U] = 0U;
    __Vtemp_h6341b9db__2[1U] = 0U;
    __Vtemp_h6341b9db__2[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h76f4265d__0, __Vtemp_h6341b9db__2, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__3[0U] = 0U;
    __Vtemp_h6341b9db__3[1U] = 0U;
    __Vtemp_h6341b9db__3[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h9ffdfe39__0, __Vtemp_h6341b9db__3, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__4[0U] = 0U;
    __Vtemp_h6341b9db__4[1U] = 0U;
    __Vtemp_h6341b9db__4[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h619a54c8__0, __Vtemp_h6341b9db__4, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__5[0U] = 0U;
    __Vtemp_h6341b9db__5[1U] = 0U;
    __Vtemp_h6341b9db__5[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h18a3f382__0, __Vtemp_h6341b9db__5, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__6[0U] = 0U;
    __Vtemp_h6341b9db__6[1U] = 0U;
    __Vtemp_h6341b9db__6[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h65af9b71__0, __Vtemp_h6341b9db__6, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__7[0U] = 0U;
    __Vtemp_h6341b9db__7[1U] = 0U;
    __Vtemp_h6341b9db__7[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h5277a3c6__0, __Vtemp_h6341b9db__7, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__8[0U] = 0U;
    __Vtemp_h6341b9db__8[1U] = 0U;
    __Vtemp_h6341b9db__8[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hf76daa2b__0, __Vtemp_h6341b9db__8, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__9[0U] = 0U;
    __Vtemp_h6341b9db__9[1U] = 0U;
    __Vtemp_h6341b9db__9[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h671bb0c3__0, __Vtemp_h6341b9db__9, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__10[0U] = 0U;
    __Vtemp_h6341b9db__10[1U] = 0U;
    __Vtemp_h6341b9db__10[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h290a87f7__0, __Vtemp_h6341b9db__10, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__11[0U] = 0U;
    __Vtemp_h6341b9db__11[1U] = 0U;
    __Vtemp_h6341b9db__11[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h836b4061__0, __Vtemp_h6341b9db__11, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__12[0U] = 0U;
    __Vtemp_h6341b9db__12[1U] = 0U;
    __Vtemp_h6341b9db__12[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hb8b64b4c__0, __Vtemp_h6341b9db__12, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__13[0U] = 0U;
    __Vtemp_h6341b9db__13[1U] = 0U;
    __Vtemp_h6341b9db__13[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h9929e93b__0, __Vtemp_h6341b9db__13, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__14[0U] = 0U;
    __Vtemp_h6341b9db__14[1U] = 0U;
    __Vtemp_h6341b9db__14[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h1b88c9c8__0, __Vtemp_h6341b9db__14, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__15[0U] = 0U;
    __Vtemp_h6341b9db__15[1U] = 0U;
    __Vtemp_h6341b9db__15[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hf8d094d2__0, __Vtemp_h6341b9db__15, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__16[0U] = 0U;
    __Vtemp_h6341b9db__16[1U] = 0U;
    __Vtemp_h6341b9db__16[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hefd43452__0, __Vtemp_h6341b9db__16, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__17[0U] = 0U;
    __Vtemp_h6341b9db__17[1U] = 0U;
    __Vtemp_h6341b9db__17[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hb0c1df3a__0, __Vtemp_h6341b9db__17, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__18[0U] = 0U;
    __Vtemp_h6341b9db__18[1U] = 0U;
    __Vtemp_h6341b9db__18[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hd23432e0__0, __Vtemp_h6341b9db__18, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__19[0U] = 0U;
    __Vtemp_h6341b9db__19[1U] = 0U;
    __Vtemp_h6341b9db__19[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h80b33e08__0, __Vtemp_h6341b9db__19, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__20[0U] = 0U;
    __Vtemp_h6341b9db__20[1U] = 0U;
    __Vtemp_h6341b9db__20[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h5dd9bad7__0, __Vtemp_h6341b9db__20, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__21[0U] = 0U;
    __Vtemp_h6341b9db__21[1U] = 0U;
    __Vtemp_h6341b9db__21[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h63f2fe88__0, __Vtemp_h6341b9db__21, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__22[0U] = 0U;
    __Vtemp_h6341b9db__22[1U] = 0U;
    __Vtemp_h6341b9db__22[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h9efcd0f5__0, __Vtemp_h6341b9db__22, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__23[0U] = 0U;
    __Vtemp_h6341b9db__23[1U] = 0U;
    __Vtemp_h6341b9db__23[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h9a949fb7__0, __Vtemp_h6341b9db__23, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__24[0U] = 0U;
    __Vtemp_h6341b9db__24[1U] = 0U;
    __Vtemp_h6341b9db__24[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h2c9953ef__0, __Vtemp_h6341b9db__24, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__25[0U] = 0U;
    __Vtemp_h6341b9db__25[1U] = 0U;
    __Vtemp_h6341b9db__25[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h21d5e4eb__0, __Vtemp_h6341b9db__25, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__26[0U] = 0U;
    __Vtemp_h6341b9db__26[1U] = 0U;
    __Vtemp_h6341b9db__26[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h344b1be9__0, __Vtemp_h6341b9db__26, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__27[0U] = 0U;
    __Vtemp_h6341b9db__27[1U] = 0U;
    __Vtemp_h6341b9db__27[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_he749129b__0, __Vtemp_h6341b9db__27, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__28[0U] = 0U;
    __Vtemp_h6341b9db__28[1U] = 0U;
    __Vtemp_h6341b9db__28[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h25b6b67c__0, __Vtemp_h6341b9db__28, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__29[0U] = 0U;
    __Vtemp_h6341b9db__29[1U] = 0U;
    __Vtemp_h6341b9db__29[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h037a5d3e__0, __Vtemp_h6341b9db__29, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__30[0U] = 0U;
    __Vtemp_h6341b9db__30[1U] = 0U;
    __Vtemp_h6341b9db__30[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hfa7eee14__0, __Vtemp_h6341b9db__30, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__31[0U] = 0U;
    __Vtemp_h6341b9db__31[1U] = 0U;
    __Vtemp_h6341b9db__31[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_he6af4ac5__0, __Vtemp_h6341b9db__31, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__32[0U] = 0U;
    __Vtemp_h6341b9db__32[1U] = 0U;
    __Vtemp_h6341b9db__32[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h53b0ee28__0, __Vtemp_h6341b9db__32, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__33[0U] = 0U;
    __Vtemp_h6341b9db__33[1U] = 0U;
    __Vtemp_h6341b9db__33[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h6593c72b__0, __Vtemp_h6341b9db__33, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__34[0U] = 0U;
    __Vtemp_h6341b9db__34[1U] = 0U;
    __Vtemp_h6341b9db__34[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hb8a8c8a6__0, __Vtemp_h6341b9db__34, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__35[0U] = 0U;
    __Vtemp_h6341b9db__35[1U] = 0U;
    __Vtemp_h6341b9db__35[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hd81690c6__0, __Vtemp_h6341b9db__35, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__36[0U] = 0U;
    __Vtemp_h6341b9db__36[1U] = 0U;
    __Vtemp_h6341b9db__36[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h7243ce50__0, __Vtemp_h6341b9db__36, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__37[0U] = 0U;
    __Vtemp_h6341b9db__37[1U] = 0U;
    __Vtemp_h6341b9db__37[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h05b5f311__0, __Vtemp_h6341b9db__37, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__38[0U] = 0U;
    __Vtemp_h6341b9db__38[1U] = 0U;
    __Vtemp_h6341b9db__38[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h17242ff6__0, __Vtemp_h6341b9db__38, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__39[0U] = 0U;
    __Vtemp_h6341b9db__39[1U] = 0U;
    __Vtemp_h6341b9db__39[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hc4067e4e__0, __Vtemp_h6341b9db__39, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__40[0U] = 0U;
    __Vtemp_h6341b9db__40[1U] = 0U;
    __Vtemp_h6341b9db__40[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h7c06cea0__0, __Vtemp_h6341b9db__40, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__41[0U] = 0U;
    __Vtemp_h6341b9db__41[1U] = 0U;
    __Vtemp_h6341b9db__41[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h68f3b12b__0, __Vtemp_h6341b9db__41, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__42[0U] = 0U;
    __Vtemp_h6341b9db__42[1U] = 0U;
    __Vtemp_h6341b9db__42[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_haf0e1d88__0, __Vtemp_h6341b9db__42, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__43[0U] = 0U;
    __Vtemp_h6341b9db__43[1U] = 0U;
    __Vtemp_h6341b9db__43[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_he06084cc__0, __Vtemp_h6341b9db__43, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__44[0U] = 0U;
    __Vtemp_h6341b9db__44[1U] = 0U;
    __Vtemp_h6341b9db__44[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_he11baa73__0, __Vtemp_h6341b9db__44, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__45[0U] = 0U;
    __Vtemp_h6341b9db__45[1U] = 0U;
    __Vtemp_h6341b9db__45[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h11a4ebd0__0, __Vtemp_h6341b9db__45, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__46[0U] = 0U;
    __Vtemp_h6341b9db__46[1U] = 0U;
    __Vtemp_h6341b9db__46[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hafcede32__0, __Vtemp_h6341b9db__46, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__47[0U] = 0U;
    __Vtemp_h6341b9db__47[1U] = 0U;
    __Vtemp_h6341b9db__47[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h802606d4__0, __Vtemp_h6341b9db__47, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__48[0U] = 0U;
    __Vtemp_h6341b9db__48[1U] = 0U;
    __Vtemp_h6341b9db__48[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hd3929677__0, __Vtemp_h6341b9db__48, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__49[0U] = 0U;
    __Vtemp_h6341b9db__49[1U] = 0U;
    __Vtemp_h6341b9db__49[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h13447e01__0, __Vtemp_h6341b9db__49, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__50[0U] = 0U;
    __Vtemp_h6341b9db__50[1U] = 0U;
    __Vtemp_h6341b9db__50[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hc83b981e__0, __Vtemp_h6341b9db__50, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__51[0U] = 0U;
    __Vtemp_h6341b9db__51[1U] = 0U;
    __Vtemp_h6341b9db__51[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h8d4d4055__0, __Vtemp_h6341b9db__51, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__52[0U] = 0U;
    __Vtemp_h6341b9db__52[1U] = 0U;
    __Vtemp_h6341b9db__52[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h54fd60d9__0, __Vtemp_h6341b9db__52, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__53[0U] = 0U;
    __Vtemp_h6341b9db__53[1U] = 0U;
    __Vtemp_h6341b9db__53[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h106c8729__0, __Vtemp_h6341b9db__53, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_129 
        = (((0x800U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))
             ? 0ULL : ((0x400U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))
                        ? (QData)((IData)(((IData)(
                                                   (0U 
                                                    == 
                                                    (0x3c0U 
                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))))
                                            ? ((4U 
                                                & (__Vtemp_h5d101dc5__0[0U] 
                                                   << 2U)) 
                                               | ((2U 
                                                   & __Vtemp_h850b434e__0[0U]) 
                                                  | (1U 
                                                     & (__Vtemp_h76f4265d__0[0U] 
                                                        >> 2U))))
                                            : 0U)))
                        : (7ULL | (((IData)((0x3c0U 
                                             != (0x3c0U 
                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))))
                                     ? 0x7ffffffffffffULL
                                     : (((QData)((IData)(
                                                         (1U 
                                                          & (__Vtemp_h9ffdfe39__0[0U] 
                                                             >> 0xdU)))) 
                                         << 0x32U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & (__Vtemp_h619a54c8__0[0U] 
                                                                >> 0xeU)))) 
                                            << 0x31U) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (__Vtemp_h18a3f382__0[0U] 
                                                                   >> 0xfU)))) 
                                               << 0x30U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (__Vtemp_h65af9b71__0[0U] 
                                                                      >> 0x10U)))) 
                                                  << 0x2fU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (__Vtemp_h5277a3c6__0[0U] 
                                                                         >> 0x11U)))) 
                                                     << 0x2eU) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (__Vtemp_hf76daa2b__0[0U] 
                                                                            >> 0x12U)))) 
                                                        << 0x2dU) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (__Vtemp_h671bb0c3__0[0U] 
                                                                               >> 0x13U)))) 
                                                           << 0x2cU) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (__Vtemp_h290a87f7__0[0U] 
                                                                                >> 0x14U)))) 
                                                              << 0x2bU) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h836b4061__0[0U] 
                                                                                >> 0x15U)))) 
                                                                 << 0x2aU) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_hb8b64b4c__0[0U] 
                                                                                >> 0x16U)))) 
                                                                    << 0x29U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h9929e93b__0[0U] 
                                                                                >> 0x17U)))) 
                                                                       << 0x28U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h1b88c9c8__0[0U] 
                                                                                >> 0x18U)))) 
                                                                          << 0x27U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_hf8d094d2__0[0U] 
                                                                                >> 0x19U)))) 
                                                                             << 0x26U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_hefd43452__0[0U] 
                                                                                >> 0x1aU)))) 
                                                                                << 0x25U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_hb0c1df3a__0[0U] 
                                                                                >> 0x1bU)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_hd23432e0__0[0U] 
                                                                                >> 0x1cU)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h80b33e08__0[0U] 
                                                                                >> 0x1dU)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h5dd9bad7__0[0U] 
                                                                                >> 0x1eU)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (__Vtemp_h63f2fe88__0[0U] 
                                                                                >> 0x1fU))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((__Vtemp_h9efcd0f5__0[1U] 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (__Vtemp_h9a949fb7__0[1U] 
                                                                                << 0x1dU)) 
                                                                                | ((0x20000000U 
                                                                                & (__Vtemp_h2c9953ef__0[1U] 
                                                                                << 0x1bU)) 
                                                                                | ((0x10000000U 
                                                                                & (__Vtemp_h21d5e4eb__0[1U] 
                                                                                << 0x19U)) 
                                                                                | ((0x8000000U 
                                                                                & (__Vtemp_h344b1be9__0[1U] 
                                                                                << 0x17U)) 
                                                                                | ((0x4000000U 
                                                                                & (__Vtemp_he749129b__0[1U] 
                                                                                << 0x15U)) 
                                                                                | ((0x2000000U 
                                                                                & (__Vtemp_h25b6b67c__0[1U] 
                                                                                << 0x13U)) 
                                                                                | ((0x1000000U 
                                                                                & (__Vtemp_h037a5d3e__0[1U] 
                                                                                << 0x11U)) 
                                                                                | ((0x800000U 
                                                                                & (__Vtemp_hfa7eee14__0[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x400000U 
                                                                                & (__Vtemp_he6af4ac5__0[1U] 
                                                                                << 0xdU)) 
                                                                                | ((0x200000U 
                                                                                & (__Vtemp_h53b0ee28__0[1U] 
                                                                                << 0xbU)) 
                                                                                | ((0x100000U 
                                                                                & (__Vtemp_h6593c72b__0[1U] 
                                                                                << 9U)) 
                                                                                | ((0x80000U 
                                                                                & (__Vtemp_hb8a8c8a6__0[1U] 
                                                                                << 7U)) 
                                                                                | ((0x40000U 
                                                                                & (__Vtemp_hd81690c6__0[1U] 
                                                                                << 5U)) 
                                                                                | ((0x20000U 
                                                                                & (__Vtemp_h7243ce50__0[1U] 
                                                                                << 3U)) 
                                                                                | ((0x10000U 
                                                                                & (__Vtemp_h05b5f311__0[1U] 
                                                                                << 1U)) 
                                                                                | ((0x8000U 
                                                                                & (__Vtemp_h17242ff6__0[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x4000U 
                                                                                & (__Vtemp_hc4067e4e__0[1U] 
                                                                                >> 3U)) 
                                                                                | ((0x2000U 
                                                                                & (__Vtemp_h7c06cea0__0[1U] 
                                                                                >> 5U)) 
                                                                                | ((0x1000U 
                                                                                & (__Vtemp_h68f3b12b__0[1U] 
                                                                                >> 7U)) 
                                                                                | ((0x800U 
                                                                                & (__Vtemp_haf0e1d88__0[1U] 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (__Vtemp_he06084cc__0[1U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (__Vtemp_he11baa73__0[1U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (__Vtemp_h11a4ebd0__0[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (__Vtemp_hafcede32__0[1U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (__Vtemp_h802606d4__0[1U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (__Vtemp_hd3929677__0[1U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (__Vtemp_h13447e01__0[1U] 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (__Vtemp_hc83b981e__0[1U] 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (__Vtemp_h8d4d4055__0[1U] 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (__Vtemp_h54fd60d9__0[1U] 
                                                                                >> 0x1dU)) 
                                                                                | (__Vtemp_h106c8729__0[1U] 
                                                                                >> 0x1fU)))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                                   << 3U)))) | (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sig 
                                                                           >> 0x37U))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6080(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6080\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_isSigNaNAny 
            = (((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in1[1U] 
                    >> 0x13U)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN)) 
               | (((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in2[1U] 
                       >> 0x13U)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN)) 
                  | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                         >> 0x13U)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isNaNC))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__valid_stage0_v 
            = (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__valid_stage0_v = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT____VdfgTmp_h15b70dad__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__write_port_busy)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_wen));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___core_io_fpu_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_ren2 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___fp_decoder_io_sigs_ren2;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_wflags 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___fp_decoder_io_sigs_wflags;
    }
    vlSelf->__VdfgTmp_h330cbe7f__0 = ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)) 
                                      | (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___GEN_2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_fastpipe) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_fromint));
    vlSelf->__VdfgTmp_h684f912c__0 = (0x1ffU & (((0U 
                                                  == 
                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                                   >> 0x1dU)) 
                                                 | (5U 
                                                    < 
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                                     >> 0x1dU)))
                                                 ? 
                                                ((0x1c0U 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                                     >> 0x17U)) 
                                                 | (0x3fU 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                                       >> 0x14U)))
                                                 : 
                                                (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                                   << 0xcU) 
                                                  | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                                     >> 0x14U)) 
                                                 - (IData)(0x100U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT____Vcellinp__divSqrtRawFN__io_b_isNaN 
        = (IData)((0xe0000000U == (0xe0000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U])));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6081(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6081\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT____Vcellinp__divSqrtRawFN__io_b_isInf 
        = (IData)((0xc0000000U == (0xe0000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U])));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT___GEN_0 
        = (((QData)((IData)((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                    >> 0x1dU)))) << 0x34U) 
           | (0xfffffffffffffULL & (((QData)((IData)(
                                                     vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[0U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT____Vcellinp__ifpu__io_in_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_fromint) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT____Vcellinp__fpmu__io_in_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_fastpipe) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_valid));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___core_io_fpu_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_inst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___dfma_io_in_valid_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_fma) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
        = (((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_typeTagIn))
             ? 0ULL : 0xffffffff00000000ULL) | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_in1);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT___core_io_fpu_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_typeTagIn 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___fp_decoder_io_sigs_typeTagIn;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_typeTagOut 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___fp_decoder_io_sigs_typeTagOut;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT___T_2 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_ren2)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_wflags));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__isNaNOut 
        = (7U == (7U & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                          << 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                    >> 0x1dU)) & ((
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[1U] 
                                                   << 3U) 
                                                  | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[1U] 
                                                     >> 0x1dU)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT___fsgnj_T 
        = (1U & ((2U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_rm))
                  ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                     ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[2U])
                  : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_rm) 
                     ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[2U])));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6082(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6082\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__0;
    VlWide<3>/*95:0*/ __Vtemp_h9c1599cc__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__1;
    VlWide<3>/*95:0*/ __Vtemp_h4423be29__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__2;
    VlWide<3>/*95:0*/ __Vtemp_h39f09a3a__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__3;
    VlWide<3>/*95:0*/ __Vtemp_hdefb82a6__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__4;
    VlWide<3>/*95:0*/ __Vtemp_h209bd8e3__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__5;
    VlWide<3>/*95:0*/ __Vtemp_hd7897fa7__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__6;
    VlWide<3>/*95:0*/ __Vtemp_ha2b257fe__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__7;
    VlWide<3>/*95:0*/ __Vtemp_h13852fe1__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__8;
    VlWide<3>/*95:0*/ __Vtemp_h38712e0e__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__9;
    VlWide<3>/*95:0*/ __Vtemp_h2e1935a0__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__10;
    VlWide<3>/*95:0*/ __Vtemp_hea260c14__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__11;
    VlWide<3>/*95:0*/ __Vtemp_h4267bb08__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__12;
    VlWide<3>/*95:0*/ __Vtemp_hf777cfad__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__13;
    VlWide<3>/*95:0*/ __Vtemp_h5a2f5c1e__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__14;
    VlWide<3>/*95:0*/ __Vtemp_h508f55e3__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__15;
    VlWide<3>/*95:0*/ __Vtemp_hb7d720f7__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__16;
    VlWide<3>/*95:0*/ __Vtemp_haec9b05d__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__17;
    VlWide<3>/*95:0*/ __Vtemp_h71c75b75__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__18;
    VlWide<3>/*95:0*/ __Vtemp_h9136aebb__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__19;
    VlWide<3>/*95:0*/ __Vtemp_hc19bba09__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__20;
    VlWide<3>/*95:0*/ __Vtemp_h1af576f4__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__21;
    VlWide<3>/*95:0*/ __Vtemp_h227db289__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__22;
    VlWide<3>/*95:0*/ __Vtemp_he1ff4cd8__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__23;
    VlWide<3>/*95:0*/ __Vtemp_h599627d4__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__24;
    VlWide<3>/*95:0*/ __Vtemp_hed9ad80e__0;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT____Vcellinp__roundAnyRawFNToRecFN__io_in_isInf 
        = (IData)((0xc0000000U == (0xe0000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U])));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h5eaf4362__0 
        = (((IData)((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                            >> 0x1dU))) << 0x17U) | 
           (0x7fffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                          << 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[0U] 
                                    >> 0x1dU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_rm)) 
            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U]) 
           | ((~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U]) 
              & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_rm))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__rawIn_isNaN 
        = (IData)((0xe0000000U == (0xe0000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U])));
    __Vtemp_h6341b9db__0[0U] = 0U;
    __Vtemp_h6341b9db__0[1U] = 0U;
    __Vtemp_h6341b9db__0[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h9c1599cc__0, __Vtemp_h6341b9db__0, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__1[0U] = 0U;
    __Vtemp_h6341b9db__1[1U] = 0U;
    __Vtemp_h6341b9db__1[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h4423be29__0, __Vtemp_h6341b9db__1, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__2[0U] = 0U;
    __Vtemp_h6341b9db__2[1U] = 0U;
    __Vtemp_h6341b9db__2[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h39f09a3a__0, __Vtemp_h6341b9db__2, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__3[0U] = 0U;
    __Vtemp_h6341b9db__3[1U] = 0U;
    __Vtemp_h6341b9db__3[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hdefb82a6__0, __Vtemp_h6341b9db__3, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__4[0U] = 0U;
    __Vtemp_h6341b9db__4[1U] = 0U;
    __Vtemp_h6341b9db__4[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h209bd8e3__0, __Vtemp_h6341b9db__4, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__5[0U] = 0U;
    __Vtemp_h6341b9db__5[1U] = 0U;
    __Vtemp_h6341b9db__5[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hd7897fa7__0, __Vtemp_h6341b9db__5, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__6[0U] = 0U;
    __Vtemp_h6341b9db__6[1U] = 0U;
    __Vtemp_h6341b9db__6[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_ha2b257fe__0, __Vtemp_h6341b9db__6, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__7[0U] = 0U;
    __Vtemp_h6341b9db__7[1U] = 0U;
    __Vtemp_h6341b9db__7[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h13852fe1__0, __Vtemp_h6341b9db__7, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__8[0U] = 0U;
    __Vtemp_h6341b9db__8[1U] = 0U;
    __Vtemp_h6341b9db__8[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h38712e0e__0, __Vtemp_h6341b9db__8, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__9[0U] = 0U;
    __Vtemp_h6341b9db__9[1U] = 0U;
    __Vtemp_h6341b9db__9[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h2e1935a0__0, __Vtemp_h6341b9db__9, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__10[0U] = 0U;
    __Vtemp_h6341b9db__10[1U] = 0U;
    __Vtemp_h6341b9db__10[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hea260c14__0, __Vtemp_h6341b9db__10, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__11[0U] = 0U;
    __Vtemp_h6341b9db__11[1U] = 0U;
    __Vtemp_h6341b9db__11[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h4267bb08__0, __Vtemp_h6341b9db__11, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__12[0U] = 0U;
    __Vtemp_h6341b9db__12[1U] = 0U;
    __Vtemp_h6341b9db__12[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hf777cfad__0, __Vtemp_h6341b9db__12, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__13[0U] = 0U;
    __Vtemp_h6341b9db__13[1U] = 0U;
    __Vtemp_h6341b9db__13[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h5a2f5c1e__0, __Vtemp_h6341b9db__13, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__14[0U] = 0U;
    __Vtemp_h6341b9db__14[1U] = 0U;
    __Vtemp_h6341b9db__14[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h508f55e3__0, __Vtemp_h6341b9db__14, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__15[0U] = 0U;
    __Vtemp_h6341b9db__15[1U] = 0U;
    __Vtemp_h6341b9db__15[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hb7d720f7__0, __Vtemp_h6341b9db__15, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__16[0U] = 0U;
    __Vtemp_h6341b9db__16[1U] = 0U;
    __Vtemp_h6341b9db__16[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_haec9b05d__0, __Vtemp_h6341b9db__16, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__17[0U] = 0U;
    __Vtemp_h6341b9db__17[1U] = 0U;
    __Vtemp_h6341b9db__17[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h71c75b75__0, __Vtemp_h6341b9db__17, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__18[0U] = 0U;
    __Vtemp_h6341b9db__18[1U] = 0U;
    __Vtemp_h6341b9db__18[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h9136aebb__0, __Vtemp_h6341b9db__18, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__19[0U] = 0U;
    __Vtemp_h6341b9db__19[1U] = 0U;
    __Vtemp_h6341b9db__19[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hc19bba09__0, __Vtemp_h6341b9db__19, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__20[0U] = 0U;
    __Vtemp_h6341b9db__20[1U] = 0U;
    __Vtemp_h6341b9db__20[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h1af576f4__0, __Vtemp_h6341b9db__20, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__21[0U] = 0U;
    __Vtemp_h6341b9db__21[1U] = 0U;
    __Vtemp_h6341b9db__21[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h227db289__0, __Vtemp_h6341b9db__21, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__22[0U] = 0U;
    __Vtemp_h6341b9db__22[1U] = 0U;
    __Vtemp_h6341b9db__22[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_he1ff4cd8__0, __Vtemp_h6341b9db__22, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__23[0U] = 0U;
    __Vtemp_h6341b9db__23[1U] = 0U;
    __Vtemp_h6341b9db__23[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h599627d4__0, __Vtemp_h6341b9db__23, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__24[0U] = 0U;
    __Vtemp_h6341b9db__24[1U] = 0U;
    __Vtemp_h6341b9db__24[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hed9ad80e__0, __Vtemp_h6341b9db__24, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h86eb33d4__0 
        = ((0x80U & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                      >> 0x14U) - (IData)(0x100U)))
            ? ((0x40U & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                          >> 0x14U) - (IData)(0x100U)))
                ? 0U : ((4U & (__Vtemp_h9c1599cc__0[0U] 
                               << 2U)) | ((2U & __Vtemp_h4423be29__0[0U]) 
                                          | (1U & (
                                                   __Vtemp_h39f09a3a__0[0U] 
                                                   >> 2U)))))
            : (7U | (((0x40U & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                 >> 0x14U) - (IData)(0x100U)))
                       ? ((0x200000U & (__Vtemp_hdefb82a6__0[1U] 
                                        << 0xbU)) | 
                          ((0x100000U & (__Vtemp_h209bd8e3__0[1U] 
                                         << 9U)) | 
                           ((0x80000U & (__Vtemp_hd7897fa7__0[1U] 
                                         << 7U)) | 
                            ((0x40000U & (__Vtemp_ha2b257fe__0[1U] 
                                          << 5U)) | 
                             ((0x20000U & (__Vtemp_h13852fe1__0[1U] 
                                           << 3U)) 
                              | ((0x10000U & (__Vtemp_h38712e0e__0[1U] 
                                              << 1U)) 
                                 | ((0x8000U & (__Vtemp_h2e1935a0__0[1U] 
                                                >> 1U)) 
                                    | ((0x4000U & (
                                                   __Vtemp_hea260c14__0[1U] 
                                                   >> 3U)) 
                                       | ((0x2000U 
                                           & (__Vtemp_h4267bb08__0[1U] 
                                              >> 5U)) 
                                          | ((0x1000U 
                                              & (__Vtemp_hf777cfad__0[1U] 
                                                 >> 7U)) 
                                             | ((0x800U 
                                                 & (__Vtemp_h5a2f5c1e__0[1U] 
                                                    >> 9U)) 
                                                | ((0x400U 
                                                    & (__Vtemp_h508f55e3__0[1U] 
                                                       >> 0xbU)) 
                                                   | ((0x200U 
                                                       & (__Vtemp_hb7d720f7__0[1U] 
                                                          >> 0xdU)) 
                                                      | ((0x100U 
                                                          & (__Vtemp_haec9b05d__0[1U] 
                                                             >> 0xfU)) 
                                                         | ((0x80U 
                                                             & (__Vtemp_h71c75b75__0[1U] 
                                                                >> 0x11U)) 
                                                            | ((0x40U 
                                                                & (__Vtemp_h9136aebb__0[1U] 
                                                                   >> 0x13U)) 
                                                               | ((0x20U 
                                                                   & (__Vtemp_hc19bba09__0[1U] 
                                                                      >> 0x15U)) 
                                                                  | ((0x10U 
                                                                      & (__Vtemp_h1af576f4__0[1U] 
                                                                         >> 0x17U)) 
                                                                     | ((8U 
                                                                         & (__Vtemp_h227db289__0[1U] 
                                                                            >> 0x19U)) 
                                                                        | ((4U 
                                                                            & (__Vtemp_he1ff4cd8__0[1U] 
                                                                               >> 0x1bU)) 
                                                                           | ((2U 
                                                                               & (__Vtemp_h599627d4__0[1U] 
                                                                                >> 0x1dU)) 
                                                                              | (__Vtemp_hed9ad80e__0[1U] 
                                                                                >> 0x1fU))))))))))))))))))))))
                       : 0x3fffffU) << 3U)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6083(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6083\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_isNaNC 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isNaNC;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_isNaNAOrB 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_signProd 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_signProd;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_CIsDominant 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_CIsDominant;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_roundingMode_b 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_rm;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundingMode_stage0_b 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_rm;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_doSubMags 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_isZeroA 
            = (1U & (~ (IData)((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in1[1U] 
                                       >> 0x1dU)))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_isInfA 
            = (IData)((0xc0000000U == (0xe0000000U 
                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in1[1U])));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_isZeroB 
            = (1U & (~ (IData)((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in2[1U] 
                                       >> 0x1dU)))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_isInfB 
            = (IData)((0xc0000000U == (0xe0000000U 
                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in2[1U])));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_isNaN) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_invalidExc_b));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgTmp_h101df4a7__0[0U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_b[0U] 
            << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_bit0AlignedSigC));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgTmp_h101df4a7__0[1U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_b[0U] 
            >> 0x1fU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_b[1U] 
                         << 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgTmp_h101df4a7__0[2U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_b[1U] 
            >> 0x1fU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_b[2U] 
                         << 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgTmp_h101df4a7__0[3U] 
        = ((0x1800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3) 
                       << 0xbU)) | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_b[2U] 
                                     >> 0x1fU) | (0x7feU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_b[3U] 
                                                     << 1U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6084(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6084\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__0;
    VlWide<3>/*95:0*/ __Vtemp_h5fd1cd38__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__1;
    VlWide<3>/*95:0*/ __Vtemp_h97c7d0bd__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__2;
    VlWide<3>/*95:0*/ __Vtemp_h45b48cee__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__3;
    VlWide<3>/*95:0*/ __Vtemp_hba37b7ea__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__4;
    VlWide<3>/*95:0*/ __Vtemp_h84d927b7__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__5;
    VlWide<3>/*95:0*/ __Vtemp_hfb677013__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__6;
    VlWide<3>/*95:0*/ __Vtemp_hc9f628e2__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__7;
    VlWide<3>/*95:0*/ __Vtemp_h47b91ab5__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__8;
    VlWide<3>/*95:0*/ __Vtemp_h1cacc03a__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__9;
    VlWide<3>/*95:0*/ __Vtemp_h4a5d0254__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__10;
    VlWide<3>/*95:0*/ __Vtemp_h0d49fa68__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__11;
    VlWide<3>/*95:0*/ __Vtemp_h382bc9f4__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__12;
    VlWide<3>/*95:0*/ __Vtemp_hd4f3e0d9__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__13;
    VlWide<3>/*95:0*/ __Vtemp_h7deb4eca__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__14;
    VlWide<3>/*95:0*/ __Vtemp_hf44b44b7__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__15;
    VlWide<3>/*95:0*/ __Vtemp_hdc130e23__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__16;
    VlWide<3>/*95:0*/ __Vtemp_h0b1740c1__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__17;
    VlWide<3>/*95:0*/ __Vtemp_hde0317c9__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__18;
    VlWide<3>/*95:0*/ __Vtemp_hb4ea7e0f__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__19;
    VlWide<3>/*95:0*/ __Vtemp_h9cefec75__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__20;
    VlWide<3>/*95:0*/ __Vtemp_h2f194648__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__21;
    VlWide<3>/*95:0*/ __Vtemp_h46b188f5__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__22;
    VlWide<3>/*95:0*/ __Vtemp_h05bb5c04__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__23;
    VlWide<3>/*95:0*/ __Vtemp_h36d23908__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__24;
    VlWide<3>/*95:0*/ __Vtemp_h015ec93a__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__25;
    VlWide<3>/*95:0*/ __Vtemp_h5d886b5c__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__26;
    VlWide<3>/*95:0*/ __Vtemp_h510bb268__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__27;
    VlWide<3>/*95:0*/ __Vtemp_hf08a692a__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__28;
    VlWide<3>/*95:0*/ __Vtemp_h3ed7fc2b__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__29;
    VlWide<3>/*95:0*/ __Vtemp_h9e3797cb__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__30;
    VlWide<3>/*95:0*/ __Vtemp_h56b93c61__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__31;
    VlWide<3>/*95:0*/ __Vtemp_h45ecbe38__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__32;
    VlWide<3>/*95:0*/ __Vtemp_h77ef8395__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__33;
    VlWide<3>/*95:0*/ __Vtemp_h5856507c__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__34;
    VlWide<3>/*95:0*/ __Vtemp_h9dee5235__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__35;
    VlWide<3>/*95:0*/ __Vtemp_hbad51355__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__36;
    VlWide<3>/*95:0*/ __Vtemp_h8f075bdf__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__37;
    VlWide<3>/*95:0*/ __Vtemp_hde746d82__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__38;
    VlWide<3>/*95:0*/ __Vtemp_hb1e74567__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__39;
    VlWide<3>/*95:0*/ __Vtemp_h60c407dd__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__40;
    VlWide<3>/*95:0*/ __Vtemp_hd4c45d2f__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__41;
    VlWide<3>/*95:0*/ __Vtemp_h703327a6__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__42;
    VlWide<3>/*95:0*/ __Vtemp_haa47af11__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__43;
    VlWide<3>/*95:0*/ __Vtemp_h45a61059__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__44;
    VlWide<3>/*95:0*/ __Vtemp_hcbdf1eee__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__45;
    VlWide<3>/*95:0*/ __Vtemp_hb5e7015f__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__46;
    VlWide<3>/*95:0*/ __Vtemp_hd38e58af__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__47;
    VlWide<3>/*95:0*/ __Vtemp_h23668d43__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__48;
    VlWide<3>/*95:0*/ __Vtemp_hcc540ce8__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__49;
    VlWide<3>/*95:0*/ __Vtemp_hf6840c94__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__50;
    VlWide<3>/*95:0*/ __Vtemp_hdf7f024f__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__51;
    VlWide<3>/*95:0*/ __Vtemp_ha68dc4c8__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__52;
    VlWide<3>/*95:0*/ __Vtemp_hf1bdcc18__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__53;
    VlWide<3>/*95:0*/ __Vtemp_hec2df1a8__0;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___overflow_roundMagUp_T 
        = ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_roundingMode_b)) 
           | (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_roundingMode_b)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_roundingMode_b)) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sign)) 
           | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sign)) 
              & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_roundingMode_b))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_isInfC 
            = (IData)((0xc0000000U == (0xe0000000U 
                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U])));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_sExpSum 
            = (0x1fffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_CIsDominant)
                           ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                              >> 0x14U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sExpAlignedProd_T_2) 
                                           - (IData)(0x35U))));
    }
    __Vtemp_h6341b9db__0[0U] = 0U;
    __Vtemp_h6341b9db__0[1U] = 0U;
    __Vtemp_h6341b9db__0[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h5fd1cd38__0, __Vtemp_h6341b9db__0, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__1[0U] = 0U;
    __Vtemp_h6341b9db__1[1U] = 0U;
    __Vtemp_h6341b9db__1[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h97c7d0bd__0, __Vtemp_h6341b9db__1, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__2[0U] = 0U;
    __Vtemp_h6341b9db__2[1U] = 0U;
    __Vtemp_h6341b9db__2[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h45b48cee__0, __Vtemp_h6341b9db__2, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__3[0U] = 0U;
    __Vtemp_h6341b9db__3[1U] = 0U;
    __Vtemp_h6341b9db__3[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hba37b7ea__0, __Vtemp_h6341b9db__3, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__4[0U] = 0U;
    __Vtemp_h6341b9db__4[1U] = 0U;
    __Vtemp_h6341b9db__4[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h84d927b7__0, __Vtemp_h6341b9db__4, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__5[0U] = 0U;
    __Vtemp_h6341b9db__5[1U] = 0U;
    __Vtemp_h6341b9db__5[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hfb677013__0, __Vtemp_h6341b9db__5, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__6[0U] = 0U;
    __Vtemp_h6341b9db__6[1U] = 0U;
    __Vtemp_h6341b9db__6[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hc9f628e2__0, __Vtemp_h6341b9db__6, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__7[0U] = 0U;
    __Vtemp_h6341b9db__7[1U] = 0U;
    __Vtemp_h6341b9db__7[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h47b91ab5__0, __Vtemp_h6341b9db__7, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__8[0U] = 0U;
    __Vtemp_h6341b9db__8[1U] = 0U;
    __Vtemp_h6341b9db__8[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h1cacc03a__0, __Vtemp_h6341b9db__8, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__9[0U] = 0U;
    __Vtemp_h6341b9db__9[1U] = 0U;
    __Vtemp_h6341b9db__9[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h4a5d0254__0, __Vtemp_h6341b9db__9, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__10[0U] = 0U;
    __Vtemp_h6341b9db__10[1U] = 0U;
    __Vtemp_h6341b9db__10[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h0d49fa68__0, __Vtemp_h6341b9db__10, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__11[0U] = 0U;
    __Vtemp_h6341b9db__11[1U] = 0U;
    __Vtemp_h6341b9db__11[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h382bc9f4__0, __Vtemp_h6341b9db__11, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__12[0U] = 0U;
    __Vtemp_h6341b9db__12[1U] = 0U;
    __Vtemp_h6341b9db__12[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hd4f3e0d9__0, __Vtemp_h6341b9db__12, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__13[0U] = 0U;
    __Vtemp_h6341b9db__13[1U] = 0U;
    __Vtemp_h6341b9db__13[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h7deb4eca__0, __Vtemp_h6341b9db__13, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__14[0U] = 0U;
    __Vtemp_h6341b9db__14[1U] = 0U;
    __Vtemp_h6341b9db__14[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hf44b44b7__0, __Vtemp_h6341b9db__14, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__15[0U] = 0U;
    __Vtemp_h6341b9db__15[1U] = 0U;
    __Vtemp_h6341b9db__15[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hdc130e23__0, __Vtemp_h6341b9db__15, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__16[0U] = 0U;
    __Vtemp_h6341b9db__16[1U] = 0U;
    __Vtemp_h6341b9db__16[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h0b1740c1__0, __Vtemp_h6341b9db__16, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__17[0U] = 0U;
    __Vtemp_h6341b9db__17[1U] = 0U;
    __Vtemp_h6341b9db__17[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hde0317c9__0, __Vtemp_h6341b9db__17, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__18[0U] = 0U;
    __Vtemp_h6341b9db__18[1U] = 0U;
    __Vtemp_h6341b9db__18[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hb4ea7e0f__0, __Vtemp_h6341b9db__18, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__19[0U] = 0U;
    __Vtemp_h6341b9db__19[1U] = 0U;
    __Vtemp_h6341b9db__19[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h9cefec75__0, __Vtemp_h6341b9db__19, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__20[0U] = 0U;
    __Vtemp_h6341b9db__20[1U] = 0U;
    __Vtemp_h6341b9db__20[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h2f194648__0, __Vtemp_h6341b9db__20, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__21[0U] = 0U;
    __Vtemp_h6341b9db__21[1U] = 0U;
    __Vtemp_h6341b9db__21[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h46b188f5__0, __Vtemp_h6341b9db__21, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__22[0U] = 0U;
    __Vtemp_h6341b9db__22[1U] = 0U;
    __Vtemp_h6341b9db__22[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h05bb5c04__0, __Vtemp_h6341b9db__22, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__23[0U] = 0U;
    __Vtemp_h6341b9db__23[1U] = 0U;
    __Vtemp_h6341b9db__23[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h36d23908__0, __Vtemp_h6341b9db__23, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__24[0U] = 0U;
    __Vtemp_h6341b9db__24[1U] = 0U;
    __Vtemp_h6341b9db__24[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h015ec93a__0, __Vtemp_h6341b9db__24, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__25[0U] = 0U;
    __Vtemp_h6341b9db__25[1U] = 0U;
    __Vtemp_h6341b9db__25[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h5d886b5c__0, __Vtemp_h6341b9db__25, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__26[0U] = 0U;
    __Vtemp_h6341b9db__26[1U] = 0U;
    __Vtemp_h6341b9db__26[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h510bb268__0, __Vtemp_h6341b9db__26, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__27[0U] = 0U;
    __Vtemp_h6341b9db__27[1U] = 0U;
    __Vtemp_h6341b9db__27[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hf08a692a__0, __Vtemp_h6341b9db__27, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__28[0U] = 0U;
    __Vtemp_h6341b9db__28[1U] = 0U;
    __Vtemp_h6341b9db__28[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h3ed7fc2b__0, __Vtemp_h6341b9db__28, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__29[0U] = 0U;
    __Vtemp_h6341b9db__29[1U] = 0U;
    __Vtemp_h6341b9db__29[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h9e3797cb__0, __Vtemp_h6341b9db__29, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__30[0U] = 0U;
    __Vtemp_h6341b9db__30[1U] = 0U;
    __Vtemp_h6341b9db__30[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h56b93c61__0, __Vtemp_h6341b9db__30, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__31[0U] = 0U;
    __Vtemp_h6341b9db__31[1U] = 0U;
    __Vtemp_h6341b9db__31[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h45ecbe38__0, __Vtemp_h6341b9db__31, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__32[0U] = 0U;
    __Vtemp_h6341b9db__32[1U] = 0U;
    __Vtemp_h6341b9db__32[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h77ef8395__0, __Vtemp_h6341b9db__32, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__33[0U] = 0U;
    __Vtemp_h6341b9db__33[1U] = 0U;
    __Vtemp_h6341b9db__33[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h5856507c__0, __Vtemp_h6341b9db__33, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__34[0U] = 0U;
    __Vtemp_h6341b9db__34[1U] = 0U;
    __Vtemp_h6341b9db__34[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h9dee5235__0, __Vtemp_h6341b9db__34, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__35[0U] = 0U;
    __Vtemp_h6341b9db__35[1U] = 0U;
    __Vtemp_h6341b9db__35[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hbad51355__0, __Vtemp_h6341b9db__35, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__36[0U] = 0U;
    __Vtemp_h6341b9db__36[1U] = 0U;
    __Vtemp_h6341b9db__36[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h8f075bdf__0, __Vtemp_h6341b9db__36, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__37[0U] = 0U;
    __Vtemp_h6341b9db__37[1U] = 0U;
    __Vtemp_h6341b9db__37[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hde746d82__0, __Vtemp_h6341b9db__37, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__38[0U] = 0U;
    __Vtemp_h6341b9db__38[1U] = 0U;
    __Vtemp_h6341b9db__38[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hb1e74567__0, __Vtemp_h6341b9db__38, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__39[0U] = 0U;
    __Vtemp_h6341b9db__39[1U] = 0U;
    __Vtemp_h6341b9db__39[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h60c407dd__0, __Vtemp_h6341b9db__39, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__40[0U] = 0U;
    __Vtemp_h6341b9db__40[1U] = 0U;
    __Vtemp_h6341b9db__40[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hd4c45d2f__0, __Vtemp_h6341b9db__40, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__41[0U] = 0U;
    __Vtemp_h6341b9db__41[1U] = 0U;
    __Vtemp_h6341b9db__41[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h703327a6__0, __Vtemp_h6341b9db__41, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__42[0U] = 0U;
    __Vtemp_h6341b9db__42[1U] = 0U;
    __Vtemp_h6341b9db__42[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_haa47af11__0, __Vtemp_h6341b9db__42, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__43[0U] = 0U;
    __Vtemp_h6341b9db__43[1U] = 0U;
    __Vtemp_h6341b9db__43[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h45a61059__0, __Vtemp_h6341b9db__43, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__44[0U] = 0U;
    __Vtemp_h6341b9db__44[1U] = 0U;
    __Vtemp_h6341b9db__44[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hcbdf1eee__0, __Vtemp_h6341b9db__44, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__45[0U] = 0U;
    __Vtemp_h6341b9db__45[1U] = 0U;
    __Vtemp_h6341b9db__45[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hb5e7015f__0, __Vtemp_h6341b9db__45, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__46[0U] = 0U;
    __Vtemp_h6341b9db__46[1U] = 0U;
    __Vtemp_h6341b9db__46[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hd38e58af__0, __Vtemp_h6341b9db__46, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__47[0U] = 0U;
    __Vtemp_h6341b9db__47[1U] = 0U;
    __Vtemp_h6341b9db__47[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h23668d43__0, __Vtemp_h6341b9db__47, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__48[0U] = 0U;
    __Vtemp_h6341b9db__48[1U] = 0U;
    __Vtemp_h6341b9db__48[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hcc540ce8__0, __Vtemp_h6341b9db__48, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__49[0U] = 0U;
    __Vtemp_h6341b9db__49[1U] = 0U;
    __Vtemp_h6341b9db__49[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hf6840c94__0, __Vtemp_h6341b9db__49, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__50[0U] = 0U;
    __Vtemp_h6341b9db__50[1U] = 0U;
    __Vtemp_h6341b9db__50[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hdf7f024f__0, __Vtemp_h6341b9db__50, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__51[0U] = 0U;
    __Vtemp_h6341b9db__51[1U] = 0U;
    __Vtemp_h6341b9db__51[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_ha68dc4c8__0, __Vtemp_h6341b9db__51, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__52[0U] = 0U;
    __Vtemp_h6341b9db__52[1U] = 0U;
    __Vtemp_h6341b9db__52[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hf1bdcc18__0, __Vtemp_h6341b9db__52, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__53[0U] = 0U;
    __Vtemp_h6341b9db__53[1U] = 0U;
    __Vtemp_h6341b9db__53[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hec2df1a8__0, __Vtemp_h6341b9db__53, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_129 
        = (((0x800U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))
             ? 0ULL : ((0x400U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))
                        ? (QData)((IData)(((IData)(
                                                   (0U 
                                                    == 
                                                    (0x3c0U 
                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))))
                                            ? ((4U 
                                                & (__Vtemp_h5fd1cd38__0[0U] 
                                                   << 2U)) 
                                               | ((2U 
                                                   & __Vtemp_h97c7d0bd__0[0U]) 
                                                  | (1U 
                                                     & (__Vtemp_h45b48cee__0[0U] 
                                                        >> 2U))))
                                            : 0U)))
                        : (7ULL | (((IData)((0x3c0U 
                                             != (0x3c0U 
                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))))
                                     ? 0x7ffffffffffffULL
                                     : (((QData)((IData)(
                                                         (1U 
                                                          & (__Vtemp_hba37b7ea__0[0U] 
                                                             >> 0xdU)))) 
                                         << 0x32U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & (__Vtemp_h84d927b7__0[0U] 
                                                                >> 0xeU)))) 
                                            << 0x31U) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (__Vtemp_hfb677013__0[0U] 
                                                                   >> 0xfU)))) 
                                               << 0x30U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (__Vtemp_hc9f628e2__0[0U] 
                                                                      >> 0x10U)))) 
                                                  << 0x2fU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (__Vtemp_h47b91ab5__0[0U] 
                                                                         >> 0x11U)))) 
                                                     << 0x2eU) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (__Vtemp_h1cacc03a__0[0U] 
                                                                            >> 0x12U)))) 
                                                        << 0x2dU) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (__Vtemp_h4a5d0254__0[0U] 
                                                                               >> 0x13U)))) 
                                                           << 0x2cU) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (__Vtemp_h0d49fa68__0[0U] 
                                                                                >> 0x14U)))) 
                                                              << 0x2bU) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h382bc9f4__0[0U] 
                                                                                >> 0x15U)))) 
                                                                 << 0x2aU) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_hd4f3e0d9__0[0U] 
                                                                                >> 0x16U)))) 
                                                                    << 0x29U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h7deb4eca__0[0U] 
                                                                                >> 0x17U)))) 
                                                                       << 0x28U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_hf44b44b7__0[0U] 
                                                                                >> 0x18U)))) 
                                                                          << 0x27U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_hdc130e23__0[0U] 
                                                                                >> 0x19U)))) 
                                                                             << 0x26U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h0b1740c1__0[0U] 
                                                                                >> 0x1aU)))) 
                                                                                << 0x25U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_hde0317c9__0[0U] 
                                                                                >> 0x1bU)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_hb4ea7e0f__0[0U] 
                                                                                >> 0x1cU)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h9cefec75__0[0U] 
                                                                                >> 0x1dU)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h2f194648__0[0U] 
                                                                                >> 0x1eU)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (__Vtemp_h46b188f5__0[0U] 
                                                                                >> 0x1fU))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((__Vtemp_h05bb5c04__0[1U] 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (__Vtemp_h36d23908__0[1U] 
                                                                                << 0x1dU)) 
                                                                                | ((0x20000000U 
                                                                                & (__Vtemp_h015ec93a__0[1U] 
                                                                                << 0x1bU)) 
                                                                                | ((0x10000000U 
                                                                                & (__Vtemp_h5d886b5c__0[1U] 
                                                                                << 0x19U)) 
                                                                                | ((0x8000000U 
                                                                                & (__Vtemp_h510bb268__0[1U] 
                                                                                << 0x17U)) 
                                                                                | ((0x4000000U 
                                                                                & (__Vtemp_hf08a692a__0[1U] 
                                                                                << 0x15U)) 
                                                                                | ((0x2000000U 
                                                                                & (__Vtemp_h3ed7fc2b__0[1U] 
                                                                                << 0x13U)) 
                                                                                | ((0x1000000U 
                                                                                & (__Vtemp_h9e3797cb__0[1U] 
                                                                                << 0x11U)) 
                                                                                | ((0x800000U 
                                                                                & (__Vtemp_h56b93c61__0[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x400000U 
                                                                                & (__Vtemp_h45ecbe38__0[1U] 
                                                                                << 0xdU)) 
                                                                                | ((0x200000U 
                                                                                & (__Vtemp_h77ef8395__0[1U] 
                                                                                << 0xbU)) 
                                                                                | ((0x100000U 
                                                                                & (__Vtemp_h5856507c__0[1U] 
                                                                                << 9U)) 
                                                                                | ((0x80000U 
                                                                                & (__Vtemp_h9dee5235__0[1U] 
                                                                                << 7U)) 
                                                                                | ((0x40000U 
                                                                                & (__Vtemp_hbad51355__0[1U] 
                                                                                << 5U)) 
                                                                                | ((0x20000U 
                                                                                & (__Vtemp_h8f075bdf__0[1U] 
                                                                                << 3U)) 
                                                                                | ((0x10000U 
                                                                                & (__Vtemp_hde746d82__0[1U] 
                                                                                << 1U)) 
                                                                                | ((0x8000U 
                                                                                & (__Vtemp_hb1e74567__0[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x4000U 
                                                                                & (__Vtemp_h60c407dd__0[1U] 
                                                                                >> 3U)) 
                                                                                | ((0x2000U 
                                                                                & (__Vtemp_hd4c45d2f__0[1U] 
                                                                                >> 5U)) 
                                                                                | ((0x1000U 
                                                                                & (__Vtemp_h703327a6__0[1U] 
                                                                                >> 7U)) 
                                                                                | ((0x800U 
                                                                                & (__Vtemp_haa47af11__0[1U] 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (__Vtemp_h45a61059__0[1U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (__Vtemp_hcbdf1eee__0[1U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (__Vtemp_hb5e7015f__0[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (__Vtemp_hd38e58af__0[1U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (__Vtemp_h23668d43__0[1U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (__Vtemp_hcc540ce8__0[1U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (__Vtemp_hf6840c94__0[1U] 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (__Vtemp_hdf7f024f__0[1U] 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (__Vtemp_ha68dc4c8__0[1U] 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (__Vtemp_hf1bdcc18__0[1U] 
                                                                                >> 0x1dU)) 
                                                                                | (__Vtemp_hec2df1a8__0[1U] 
                                                                                >> 0x1fU)))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                                   << 3U)))) | (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sig 
                                                                           >> 0x37U))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6085(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6085\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_isSigNaNAny 
            = (((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in1[1U] 
                    >> 0x13U)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN)) 
               | (((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in2[1U] 
                       >> 0x13U)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN)) 
                  | ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                         >> 0x13U)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isNaNC))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__valid_stage0_v 
            = (1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__valid_stage0_v = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT____VdfgTmp_h15b70dad__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__write_port_busy)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__mem_wen));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT___core_io_fpu_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_ren2 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___fp_decoder_io_sigs_ren2;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_wflags 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___fp_decoder_io_sigs_wflags;
    }
    vlSelf->__VdfgTmp_h52b52c1f__0 = ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)) 
                                      | (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_rm)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___GEN_2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_fastpipe) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_fromint));
    vlSelf->__VdfgTmp_hea9ace36__0 = (0x1ffU & (((0U 
                                                  == 
                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                                   >> 0x1dU)) 
                                                 | (5U 
                                                    < 
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                                     >> 0x1dU)))
                                                 ? 
                                                ((0x1c0U 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                                     >> 0x17U)) 
                                                 | (0x3fU 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                                       >> 0x14U)))
                                                 : 
                                                (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                                   << 0xcU) 
                                                  | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                                     >> 0x14U)) 
                                                 - (IData)(0x100U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT____Vcellinp__divSqrtRawFN__io_b_isNaN 
        = (IData)((0xe0000000U == (0xe0000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U])));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6086(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6086\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT____Vcellinp__divSqrtRawFN__io_b_isInf 
        = (IData)((0xc0000000U == (0xe0000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U])));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__dcmp__DOT___GEN_0 
        = (((QData)((IData)((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U] 
                                    >> 0x1dU)))) << 0x34U) 
           | (0xfffffffffffffULL & (((QData)((IData)(
                                                     vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[1U])) 
                                     << 0x20U) | (QData)((IData)(
                                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpiu__DOT__in_in2[0U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT____Vcellinp__ifpu__io_in_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_fromint) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT____Vcellinp__fpmu__io_in_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_fastpipe) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_valid));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT___core_io_fpu_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_inst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___dfma_io_in_valid_T 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_fma) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
        = (((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_typeTagIn))
             ? 0ULL : 0xffffffff00000000ULL) | vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__inPipe_bits_in1);
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___core_io_fpu_valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_typeTagIn 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___fp_decoder_io_sigs_typeTagIn;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ex_reg_ctrl_typeTagOut 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___fp_decoder_io_sigs_typeTagOut;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT___T_2 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_ren2)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_wflags));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__isNaNOut 
        = (7U == (7U & (((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                          << 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                    >> 0x1dU)) & ((
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[1U] 
                                                   << 3U) 
                                                  | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[1U] 
                                                     >> 0x1dU)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT___fsgnj_T 
        = (1U & ((2U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_rm))
                  ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U] 
                     ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[2U])
                  : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_rm) 
                     ^ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in2[2U])));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6087(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6087\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__0;
    VlWide<3>/*95:0*/ __Vtemp_hf2c9841a__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__1;
    VlWide<3>/*95:0*/ __Vtemp_haacf97bb__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__2;
    VlWide<3>/*95:0*/ __Vtemp_hd0acd3f8__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__3;
    VlWide<3>/*95:0*/ __Vtemp_h45406ef4__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__4;
    VlWide<3>/*95:0*/ __Vtemp_h07efe4b1__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__5;
    VlWide<3>/*95:0*/ __Vtemp_h6e5da915__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__6;
    VlWide<3>/*95:0*/ __Vtemp_h5aee69cc__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__7;
    VlWide<3>/*95:0*/ __Vtemp_h70d113b3__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__8;
    VlWide<3>/*95:0*/ __Vtemp_h91a51940__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__9;
    VlWide<3>/*95:0*/ __Vtemp_hc5653b4e__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__10;
    VlWide<3>/*95:0*/ __Vtemp_h6e527962__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__11;
    VlWide<3>/*95:0*/ __Vtemp_hab3390f6__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__12;
    VlWide<3>/*95:0*/ __Vtemp_h3fec37df__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__13;
    VlWide<3>/*95:0*/ __Vtemp_he2db95d0__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__14;
    VlWide<3>/*95:0*/ __Vtemp_h79427db1__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__15;
    VlWide<3>/*95:0*/ __Vtemp_h4f0ac725__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__16;
    VlWide<3>/*95:0*/ __Vtemp_h95fd822b__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__17;
    VlWide<3>/*95:0*/ __Vtemp_he72b5127__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__18;
    VlWide<3>/*95:0*/ __Vtemp_h3c024909__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__19;
    VlWide<3>/*95:0*/ __Vtemp_h29e7af5b__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__20;
    VlWide<3>/*95:0*/ __Vtemp_h84211142__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__21;
    VlWide<3>/*95:0*/ __Vtemp_hddad4fdb__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__22;
    VlWide<3>/*95:0*/ __Vtemp_h7932b2fa__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__23;
    VlWide<3>/*95:0*/ __Vtemp_hc1da6e0e__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__24;
    VlWide<3>/*95:0*/ __Vtemp_h86568254__0;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT____Vcellinp__roundAnyRawFNToRecFN__io_in_isInf 
        = (IData)((0xc0000000U == (0xe0000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U])));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h5eaf4362__0 
        = (((IData)((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                            >> 0x1dU))) << 0x17U) | 
           (0x7fffffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                          << 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[0U] 
                                    >> 0x1dU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_rm)) 
            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U]) 
           | ((~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[2U]) 
              & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_rm))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__rawIn_isNaN 
        = (IData)((0xe0000000U == (0xe0000000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U])));
    __Vtemp_h6341b9db__0[0U] = 0U;
    __Vtemp_h6341b9db__0[1U] = 0U;
    __Vtemp_h6341b9db__0[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hf2c9841a__0, __Vtemp_h6341b9db__0, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__1[0U] = 0U;
    __Vtemp_h6341b9db__1[1U] = 0U;
    __Vtemp_h6341b9db__1[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_haacf97bb__0, __Vtemp_h6341b9db__1, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__2[0U] = 0U;
    __Vtemp_h6341b9db__2[1U] = 0U;
    __Vtemp_h6341b9db__2[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hd0acd3f8__0, __Vtemp_h6341b9db__2, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__3[0U] = 0U;
    __Vtemp_h6341b9db__3[1U] = 0U;
    __Vtemp_h6341b9db__3[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h45406ef4__0, __Vtemp_h6341b9db__3, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__4[0U] = 0U;
    __Vtemp_h6341b9db__4[1U] = 0U;
    __Vtemp_h6341b9db__4[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h07efe4b1__0, __Vtemp_h6341b9db__4, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__5[0U] = 0U;
    __Vtemp_h6341b9db__5[1U] = 0U;
    __Vtemp_h6341b9db__5[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h6e5da915__0, __Vtemp_h6341b9db__5, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__6[0U] = 0U;
    __Vtemp_h6341b9db__6[1U] = 0U;
    __Vtemp_h6341b9db__6[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h5aee69cc__0, __Vtemp_h6341b9db__6, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__7[0U] = 0U;
    __Vtemp_h6341b9db__7[1U] = 0U;
    __Vtemp_h6341b9db__7[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h70d113b3__0, __Vtemp_h6341b9db__7, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__8[0U] = 0U;
    __Vtemp_h6341b9db__8[1U] = 0U;
    __Vtemp_h6341b9db__8[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h91a51940__0, __Vtemp_h6341b9db__8, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__9[0U] = 0U;
    __Vtemp_h6341b9db__9[1U] = 0U;
    __Vtemp_h6341b9db__9[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hc5653b4e__0, __Vtemp_h6341b9db__9, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__10[0U] = 0U;
    __Vtemp_h6341b9db__10[1U] = 0U;
    __Vtemp_h6341b9db__10[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h6e527962__0, __Vtemp_h6341b9db__10, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__11[0U] = 0U;
    __Vtemp_h6341b9db__11[1U] = 0U;
    __Vtemp_h6341b9db__11[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hab3390f6__0, __Vtemp_h6341b9db__11, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__12[0U] = 0U;
    __Vtemp_h6341b9db__12[1U] = 0U;
    __Vtemp_h6341b9db__12[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h3fec37df__0, __Vtemp_h6341b9db__12, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__13[0U] = 0U;
    __Vtemp_h6341b9db__13[1U] = 0U;
    __Vtemp_h6341b9db__13[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_he2db95d0__0, __Vtemp_h6341b9db__13, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__14[0U] = 0U;
    __Vtemp_h6341b9db__14[1U] = 0U;
    __Vtemp_h6341b9db__14[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h79427db1__0, __Vtemp_h6341b9db__14, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__15[0U] = 0U;
    __Vtemp_h6341b9db__15[1U] = 0U;
    __Vtemp_h6341b9db__15[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h4f0ac725__0, __Vtemp_h6341b9db__15, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__16[0U] = 0U;
    __Vtemp_h6341b9db__16[1U] = 0U;
    __Vtemp_h6341b9db__16[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h95fd822b__0, __Vtemp_h6341b9db__16, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__17[0U] = 0U;
    __Vtemp_h6341b9db__17[1U] = 0U;
    __Vtemp_h6341b9db__17[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_he72b5127__0, __Vtemp_h6341b9db__17, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__18[0U] = 0U;
    __Vtemp_h6341b9db__18[1U] = 0U;
    __Vtemp_h6341b9db__18[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h3c024909__0, __Vtemp_h6341b9db__18, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__19[0U] = 0U;
    __Vtemp_h6341b9db__19[1U] = 0U;
    __Vtemp_h6341b9db__19[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h29e7af5b__0, __Vtemp_h6341b9db__19, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__20[0U] = 0U;
    __Vtemp_h6341b9db__20[1U] = 0U;
    __Vtemp_h6341b9db__20[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h84211142__0, __Vtemp_h6341b9db__20, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__21[0U] = 0U;
    __Vtemp_h6341b9db__21[1U] = 0U;
    __Vtemp_h6341b9db__21[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hddad4fdb__0, __Vtemp_h6341b9db__21, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__22[0U] = 0U;
    __Vtemp_h6341b9db__22[1U] = 0U;
    __Vtemp_h6341b9db__22[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h7932b2fa__0, __Vtemp_h6341b9db__22, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__23[0U] = 0U;
    __Vtemp_h6341b9db__23[1U] = 0U;
    __Vtemp_h6341b9db__23[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hc1da6e0e__0, __Vtemp_h6341b9db__23, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    __Vtemp_h6341b9db__24[0U] = 0U;
    __Vtemp_h6341b9db__24[1U] = 0U;
    __Vtemp_h6341b9db__24[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h86568254__0, __Vtemp_h6341b9db__24, 
                   (0x3fU & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                >> 0x14U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__narrower__DOT__roundAnyRawFNToRecFN__DOT____VdfgTmp_h86eb33d4__0 
        = ((0x80U & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                      >> 0x14U) - (IData)(0x100U)))
            ? ((0x40U & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                          >> 0x14U) - (IData)(0x100U)))
                ? 0U : ((4U & (__Vtemp_hf2c9841a__0[0U] 
                               << 2U)) | ((2U & __Vtemp_haacf97bb__0[0U]) 
                                          | (1U & (
                                                   __Vtemp_hd0acd3f8__0[0U] 
                                                   >> 2U)))))
            : (7U | (((0x40U & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__fpmu__DOT__inPipe_bits_in1[1U] 
                                 >> 0x14U) - (IData)(0x100U)))
                       ? ((0x200000U & (__Vtemp_h45406ef4__0[1U] 
                                        << 0xbU)) | 
                          ((0x100000U & (__Vtemp_h07efe4b1__0[1U] 
                                         << 9U)) | 
                           ((0x80000U & (__Vtemp_h6e5da915__0[1U] 
                                         << 7U)) | 
                            ((0x40000U & (__Vtemp_h5aee69cc__0[1U] 
                                          << 5U)) | 
                             ((0x20000U & (__Vtemp_h70d113b3__0[1U] 
                                           << 3U)) 
                              | ((0x10000U & (__Vtemp_h91a51940__0[1U] 
                                              << 1U)) 
                                 | ((0x8000U & (__Vtemp_hc5653b4e__0[1U] 
                                                >> 1U)) 
                                    | ((0x4000U & (
                                                   __Vtemp_h6e527962__0[1U] 
                                                   >> 3U)) 
                                       | ((0x2000U 
                                           & (__Vtemp_hab3390f6__0[1U] 
                                              >> 5U)) 
                                          | ((0x1000U 
                                              & (__Vtemp_h3fec37df__0[1U] 
                                                 >> 7U)) 
                                             | ((0x800U 
                                                 & (__Vtemp_he2db95d0__0[1U] 
                                                    >> 9U)) 
                                                | ((0x400U 
                                                    & (__Vtemp_h79427db1__0[1U] 
                                                       >> 0xbU)) 
                                                   | ((0x200U 
                                                       & (__Vtemp_h4f0ac725__0[1U] 
                                                          >> 0xdU)) 
                                                      | ((0x100U 
                                                          & (__Vtemp_h95fd822b__0[1U] 
                                                             >> 0xfU)) 
                                                         | ((0x80U 
                                                             & (__Vtemp_he72b5127__0[1U] 
                                                                >> 0x11U)) 
                                                            | ((0x40U 
                                                                & (__Vtemp_h3c024909__0[1U] 
                                                                   >> 0x13U)) 
                                                               | ((0x20U 
                                                                   & (__Vtemp_h29e7af5b__0[1U] 
                                                                      >> 0x15U)) 
                                                                  | ((0x10U 
                                                                      & (__Vtemp_h84211142__0[1U] 
                                                                         >> 0x17U)) 
                                                                     | ((8U 
                                                                         & (__Vtemp_hddad4fdb__0[1U] 
                                                                            >> 0x19U)) 
                                                                        | ((4U 
                                                                            & (__Vtemp_h7932b2fa__0[1U] 
                                                                               >> 0x1bU)) 
                                                                           | ((2U 
                                                                               & (__Vtemp_hc1da6e0e__0[1U] 
                                                                                >> 0x1dU)) 
                                                                              | (__Vtemp_h86568254__0[1U] 
                                                                                >> 0x1fU))))))))))))))))))))))
                       : 0x3fffffU) << 3U)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6088(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6088\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_isNaNC 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_isNaNC;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_isNaNAOrB 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawA_isNaN) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__rawB_isNaN));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_signProd 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_signProd;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_CIsDominant 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_CIsDominant;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_roundingMode_b 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_rm;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundingMode_stage0_b 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_rm;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_doSubMags 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_isZeroA 
            = (1U & (~ (IData)((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in1[1U] 
                                       >> 0x1dU)))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_isInfA 
            = (IData)((0xc0000000U == (0xe0000000U 
                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in1[1U])));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_isZeroB 
            = (1U & (~ (IData)((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in2[1U] 
                                       >> 0x1dU)))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_isInfB 
            = (IData)((0xc0000000U == (0xe0000000U 
                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in2[1U])));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__isNaNOut 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_isNaN) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_invalidExc_b));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgTmp_h101df4a7__0[0U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_b[0U] 
            << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_bit0AlignedSigC));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgTmp_h101df4a7__0[1U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_b[0U] 
            >> 0x1fU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_b[1U] 
                         << 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgTmp_h101df4a7__0[2U] 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_b[1U] 
            >> 0x1fU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_b[2U] 
                         << 1U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT____VdfgTmp_h101df4a7__0[3U] 
        = ((0x1800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul__DOT___sigSum_T_3) 
                       << 0xbU)) | ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_b[2U] 
                                     >> 0x1fU) | (0x7feU 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_mulAddResult_b[3U] 
                                                     << 1U))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6089(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6089\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__0;
    VlWide<3>/*95:0*/ __Vtemp_h4a53764d__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__1;
    VlWide<3>/*95:0*/ __Vtemp_h734aaba6__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__2;
    VlWide<3>/*95:0*/ __Vtemp_h6a33eec5__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__3;
    VlWide<3>/*95:0*/ __Vtemp_h8ebf5621__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__4;
    VlWide<3>/*95:0*/ __Vtemp_h7058ad60__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__5;
    VlWide<3>/*95:0*/ __Vtemp_h06e6ca2a__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__6;
    VlWide<3>/*95:0*/ __Vtemp_h92708379__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__7;
    VlWide<3>/*95:0*/ __Vtemp_h2338bc5e__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__8;
    VlWide<3>/*95:0*/ __Vtemp_hca2e6293__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__9;
    VlWide<3>/*95:0*/ __Vtemp_h9ddc691b__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__10;
    VlWide<3>/*95:0*/ __Vtemp_h39c9a08f__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__11;
    VlWide<3>/*95:0*/ __Vtemp_h92aab889__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__12;
    VlWide<3>/*95:0*/ __Vtemp_h87770334__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__13;
    VlWide<3>/*95:0*/ __Vtemp_haa6ab1a3__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__14;
    VlWide<3>/*95:0*/ __Vtemp_h00c9a260__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__15;
    VlWide<3>/*95:0*/ __Vtemp_h0691ed3a__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__16;
    VlWide<3>/*95:0*/ __Vtemp_h5d96dada__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__17;
    VlWide<3>/*95:0*/ __Vtemp_h9e82b5f2__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__18;
    VlWide<3>/*95:0*/ __Vtemp_hc36b5b78__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__19;
    VlWide<3>/*95:0*/ __Vtemp_h71729690__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__20;
    VlWide<3>/*95:0*/ __Vtemp_h4a9a286f__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__21;
    VlWide<3>/*95:0*/ __Vtemp_h93326710__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__22;
    VlWide<3>/*95:0*/ __Vtemp_hb03b894d__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__23;
    VlWide<3>/*95:0*/ __Vtemp_h8955571f__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__24;
    VlWide<3>/*95:0*/ __Vtemp_h5dddab67__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__25;
    VlWide<3>/*95:0*/ __Vtemp_h8b16cd53__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__26;
    VlWide<3>/*95:0*/ __Vtemp_h1f8c1441__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__27;
    VlWide<3>/*95:0*/ __Vtemp_h4509eb03__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__28;
    VlWide<3>/*95:0*/ __Vtemp_h3257de64__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__29;
    VlWide<3>/*95:0*/ __Vtemp_hf2b935f6__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__30;
    VlWide<3>/*95:0*/ __Vtemp_heb38267c__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__31;
    VlWide<3>/*95:0*/ __Vtemp_hf96c634d__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__32;
    VlWide<3>/*95:0*/ __Vtemp_h227025b0__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__33;
    VlWide<3>/*95:0*/ __Vtemp_h74d6eea3__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__34;
    VlWide<3>/*95:0*/ __Vtemp_hc96ddfce__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__35;
    VlWide<3>/*95:0*/ __Vtemp_he956796e__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__36;
    VlWide<3>/*95:0*/ __Vtemp_h63868638__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__37;
    VlWide<3>/*95:0*/ __Vtemp_h32f4cb99__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__38;
    VlWide<3>/*95:0*/ __Vtemp_hec63e7fe__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__39;
    VlWide<3>/*95:0*/ __Vtemp_hb4476636__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__40;
    VlWide<3>/*95:0*/ __Vtemp_h69470708__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__41;
    VlWide<3>/*95:0*/ __Vtemp_h9ab2c983__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__42;
    VlWide<3>/*95:0*/ __Vtemp_hbfcf04e0__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__43;
    VlWide<3>/*95:0*/ __Vtemp_hf225aeb4__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__44;
    VlWide<3>/*95:0*/ __Vtemp_h0e5e810b__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__45;
    VlWide<3>/*95:0*/ __Vtemp_h00659fb8__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__46;
    VlWide<3>/*95:0*/ __Vtemp_h050db5ca__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__47;
    VlWide<3>/*95:0*/ __Vtemp_h90e72f5c__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__48;
    VlWide<3>/*95:0*/ __Vtemp_ha0d3af0f__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__49;
    VlWide<3>/*95:0*/ __Vtemp_h0303f6a9__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__50;
    VlWide<3>/*95:0*/ __Vtemp_hb3feb086__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__51;
    VlWide<3>/*95:0*/ __Vtemp_h7b0e26dd__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__52;
    VlWide<3>/*95:0*/ __Vtemp_h1e3cb971__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__53;
    VlWide<3>/*95:0*/ __Vtemp_hffad4f81__0;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___overflow_roundMagUp_T 
        = ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_roundingMode_b)) 
           | (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_roundingMode_b)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT__roundMagUp 
        = (((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_roundingMode_b)) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sign)) 
           | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sign)) 
              & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_roundingMode_b))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__valid) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_isInfC 
            = (IData)((0xc0000000U == (0xe0000000U 
                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U])));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_postMul_io_fromPreMul_b_sExpSum 
            = (0x1fffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_CIsDominant)
                           ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                              >> 0x14U) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sExpAlignedProd_T_2) 
                                           - (IData)(0x35U))));
    }
    __Vtemp_h6341b9db__0[0U] = 0U;
    __Vtemp_h6341b9db__0[1U] = 0U;
    __Vtemp_h6341b9db__0[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h4a53764d__0, __Vtemp_h6341b9db__0, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__1[0U] = 0U;
    __Vtemp_h6341b9db__1[1U] = 0U;
    __Vtemp_h6341b9db__1[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h734aaba6__0, __Vtemp_h6341b9db__1, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__2[0U] = 0U;
    __Vtemp_h6341b9db__2[1U] = 0U;
    __Vtemp_h6341b9db__2[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h6a33eec5__0, __Vtemp_h6341b9db__2, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__3[0U] = 0U;
    __Vtemp_h6341b9db__3[1U] = 0U;
    __Vtemp_h6341b9db__3[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h8ebf5621__0, __Vtemp_h6341b9db__3, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__4[0U] = 0U;
    __Vtemp_h6341b9db__4[1U] = 0U;
    __Vtemp_h6341b9db__4[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h7058ad60__0, __Vtemp_h6341b9db__4, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__5[0U] = 0U;
    __Vtemp_h6341b9db__5[1U] = 0U;
    __Vtemp_h6341b9db__5[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h06e6ca2a__0, __Vtemp_h6341b9db__5, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__6[0U] = 0U;
    __Vtemp_h6341b9db__6[1U] = 0U;
    __Vtemp_h6341b9db__6[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h92708379__0, __Vtemp_h6341b9db__6, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__7[0U] = 0U;
    __Vtemp_h6341b9db__7[1U] = 0U;
    __Vtemp_h6341b9db__7[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h2338bc5e__0, __Vtemp_h6341b9db__7, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__8[0U] = 0U;
    __Vtemp_h6341b9db__8[1U] = 0U;
    __Vtemp_h6341b9db__8[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hca2e6293__0, __Vtemp_h6341b9db__8, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__9[0U] = 0U;
    __Vtemp_h6341b9db__9[1U] = 0U;
    __Vtemp_h6341b9db__9[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h9ddc691b__0, __Vtemp_h6341b9db__9, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__10[0U] = 0U;
    __Vtemp_h6341b9db__10[1U] = 0U;
    __Vtemp_h6341b9db__10[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h39c9a08f__0, __Vtemp_h6341b9db__10, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__11[0U] = 0U;
    __Vtemp_h6341b9db__11[1U] = 0U;
    __Vtemp_h6341b9db__11[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h92aab889__0, __Vtemp_h6341b9db__11, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__12[0U] = 0U;
    __Vtemp_h6341b9db__12[1U] = 0U;
    __Vtemp_h6341b9db__12[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h87770334__0, __Vtemp_h6341b9db__12, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__13[0U] = 0U;
    __Vtemp_h6341b9db__13[1U] = 0U;
    __Vtemp_h6341b9db__13[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_haa6ab1a3__0, __Vtemp_h6341b9db__13, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__14[0U] = 0U;
    __Vtemp_h6341b9db__14[1U] = 0U;
    __Vtemp_h6341b9db__14[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h00c9a260__0, __Vtemp_h6341b9db__14, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__15[0U] = 0U;
    __Vtemp_h6341b9db__15[1U] = 0U;
    __Vtemp_h6341b9db__15[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h0691ed3a__0, __Vtemp_h6341b9db__15, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__16[0U] = 0U;
    __Vtemp_h6341b9db__16[1U] = 0U;
    __Vtemp_h6341b9db__16[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h5d96dada__0, __Vtemp_h6341b9db__16, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__17[0U] = 0U;
    __Vtemp_h6341b9db__17[1U] = 0U;
    __Vtemp_h6341b9db__17[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h9e82b5f2__0, __Vtemp_h6341b9db__17, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__18[0U] = 0U;
    __Vtemp_h6341b9db__18[1U] = 0U;
    __Vtemp_h6341b9db__18[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hc36b5b78__0, __Vtemp_h6341b9db__18, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__19[0U] = 0U;
    __Vtemp_h6341b9db__19[1U] = 0U;
    __Vtemp_h6341b9db__19[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h71729690__0, __Vtemp_h6341b9db__19, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__20[0U] = 0U;
    __Vtemp_h6341b9db__20[1U] = 0U;
    __Vtemp_h6341b9db__20[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h4a9a286f__0, __Vtemp_h6341b9db__20, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__21[0U] = 0U;
    __Vtemp_h6341b9db__21[1U] = 0U;
    __Vtemp_h6341b9db__21[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h93326710__0, __Vtemp_h6341b9db__21, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__22[0U] = 0U;
    __Vtemp_h6341b9db__22[1U] = 0U;
    __Vtemp_h6341b9db__22[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hb03b894d__0, __Vtemp_h6341b9db__22, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__23[0U] = 0U;
    __Vtemp_h6341b9db__23[1U] = 0U;
    __Vtemp_h6341b9db__23[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h8955571f__0, __Vtemp_h6341b9db__23, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__24[0U] = 0U;
    __Vtemp_h6341b9db__24[1U] = 0U;
    __Vtemp_h6341b9db__24[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h5dddab67__0, __Vtemp_h6341b9db__24, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__25[0U] = 0U;
    __Vtemp_h6341b9db__25[1U] = 0U;
    __Vtemp_h6341b9db__25[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h8b16cd53__0, __Vtemp_h6341b9db__25, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__26[0U] = 0U;
    __Vtemp_h6341b9db__26[1U] = 0U;
    __Vtemp_h6341b9db__26[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h1f8c1441__0, __Vtemp_h6341b9db__26, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__27[0U] = 0U;
    __Vtemp_h6341b9db__27[1U] = 0U;
    __Vtemp_h6341b9db__27[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h4509eb03__0, __Vtemp_h6341b9db__27, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__28[0U] = 0U;
    __Vtemp_h6341b9db__28[1U] = 0U;
    __Vtemp_h6341b9db__28[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h3257de64__0, __Vtemp_h6341b9db__28, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__29[0U] = 0U;
    __Vtemp_h6341b9db__29[1U] = 0U;
    __Vtemp_h6341b9db__29[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hf2b935f6__0, __Vtemp_h6341b9db__29, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__30[0U] = 0U;
    __Vtemp_h6341b9db__30[1U] = 0U;
    __Vtemp_h6341b9db__30[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_heb38267c__0, __Vtemp_h6341b9db__30, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__31[0U] = 0U;
    __Vtemp_h6341b9db__31[1U] = 0U;
    __Vtemp_h6341b9db__31[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hf96c634d__0, __Vtemp_h6341b9db__31, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__32[0U] = 0U;
    __Vtemp_h6341b9db__32[1U] = 0U;
    __Vtemp_h6341b9db__32[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h227025b0__0, __Vtemp_h6341b9db__32, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__33[0U] = 0U;
    __Vtemp_h6341b9db__33[1U] = 0U;
    __Vtemp_h6341b9db__33[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h74d6eea3__0, __Vtemp_h6341b9db__33, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__34[0U] = 0U;
    __Vtemp_h6341b9db__34[1U] = 0U;
    __Vtemp_h6341b9db__34[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hc96ddfce__0, __Vtemp_h6341b9db__34, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__35[0U] = 0U;
    __Vtemp_h6341b9db__35[1U] = 0U;
    __Vtemp_h6341b9db__35[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_he956796e__0, __Vtemp_h6341b9db__35, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__36[0U] = 0U;
    __Vtemp_h6341b9db__36[1U] = 0U;
    __Vtemp_h6341b9db__36[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h63868638__0, __Vtemp_h6341b9db__36, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__37[0U] = 0U;
    __Vtemp_h6341b9db__37[1U] = 0U;
    __Vtemp_h6341b9db__37[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h32f4cb99__0, __Vtemp_h6341b9db__37, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__38[0U] = 0U;
    __Vtemp_h6341b9db__38[1U] = 0U;
    __Vtemp_h6341b9db__38[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hec63e7fe__0, __Vtemp_h6341b9db__38, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__39[0U] = 0U;
    __Vtemp_h6341b9db__39[1U] = 0U;
    __Vtemp_h6341b9db__39[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hb4476636__0, __Vtemp_h6341b9db__39, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__40[0U] = 0U;
    __Vtemp_h6341b9db__40[1U] = 0U;
    __Vtemp_h6341b9db__40[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h69470708__0, __Vtemp_h6341b9db__40, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__41[0U] = 0U;
    __Vtemp_h6341b9db__41[1U] = 0U;
    __Vtemp_h6341b9db__41[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h9ab2c983__0, __Vtemp_h6341b9db__41, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__42[0U] = 0U;
    __Vtemp_h6341b9db__42[1U] = 0U;
    __Vtemp_h6341b9db__42[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hbfcf04e0__0, __Vtemp_h6341b9db__42, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__43[0U] = 0U;
    __Vtemp_h6341b9db__43[1U] = 0U;
    __Vtemp_h6341b9db__43[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hf225aeb4__0, __Vtemp_h6341b9db__43, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__44[0U] = 0U;
    __Vtemp_h6341b9db__44[1U] = 0U;
    __Vtemp_h6341b9db__44[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h0e5e810b__0, __Vtemp_h6341b9db__44, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__45[0U] = 0U;
    __Vtemp_h6341b9db__45[1U] = 0U;
    __Vtemp_h6341b9db__45[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h00659fb8__0, __Vtemp_h6341b9db__45, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__46[0U] = 0U;
    __Vtemp_h6341b9db__46[1U] = 0U;
    __Vtemp_h6341b9db__46[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h050db5ca__0, __Vtemp_h6341b9db__46, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__47[0U] = 0U;
    __Vtemp_h6341b9db__47[1U] = 0U;
    __Vtemp_h6341b9db__47[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h90e72f5c__0, __Vtemp_h6341b9db__47, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__48[0U] = 0U;
    __Vtemp_h6341b9db__48[1U] = 0U;
    __Vtemp_h6341b9db__48[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_ha0d3af0f__0, __Vtemp_h6341b9db__48, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__49[0U] = 0U;
    __Vtemp_h6341b9db__49[1U] = 0U;
    __Vtemp_h6341b9db__49[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h0303f6a9__0, __Vtemp_h6341b9db__49, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__50[0U] = 0U;
    __Vtemp_h6341b9db__50[1U] = 0U;
    __Vtemp_h6341b9db__50[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hb3feb086__0, __Vtemp_h6341b9db__50, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__51[0U] = 0U;
    __Vtemp_h6341b9db__51[1U] = 0U;
    __Vtemp_h6341b9db__51[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h7b0e26dd__0, __Vtemp_h6341b9db__51, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__52[0U] = 0U;
    __Vtemp_h6341b9db__52[1U] = 0U;
    __Vtemp_h6341b9db__52[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h1e3cb971__0, __Vtemp_h6341b9db__52, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    __Vtemp_h6341b9db__53[0U] = 0U;
    __Vtemp_h6341b9db__53[1U] = 0U;
    __Vtemp_h6341b9db__53[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_hffad4f81__0, __Vtemp_h6341b9db__53, 
                   (0x3fU & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundMask_T_129 
        = (((0x800U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))
             ? 0ULL : ((0x400U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))
                        ? (QData)((IData)(((IData)(
                                                   (0U 
                                                    == 
                                                    (0x3c0U 
                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))))
                                            ? ((4U 
                                                & (__Vtemp_h4a53764d__0[0U] 
                                                   << 2U)) 
                                               | ((2U 
                                                   & __Vtemp_h734aaba6__0[0U]) 
                                                  | (1U 
                                                     & (__Vtemp_h6a33eec5__0[0U] 
                                                        >> 2U))))
                                            : 0U)))
                        : (7ULL | (((IData)((0x3c0U 
                                             != (0x3c0U 
                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sExp))))
                                     ? 0x7ffffffffffffULL
                                     : (((QData)((IData)(
                                                         (1U 
                                                          & (__Vtemp_h8ebf5621__0[0U] 
                                                             >> 0xdU)))) 
                                         << 0x32U) 
                                        | (((QData)((IData)(
                                                            (1U 
                                                             & (__Vtemp_h7058ad60__0[0U] 
                                                                >> 0xeU)))) 
                                            << 0x31U) 
                                           | (((QData)((IData)(
                                                               (1U 
                                                                & (__Vtemp_h06e6ca2a__0[0U] 
                                                                   >> 0xfU)))) 
                                               << 0x30U) 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (__Vtemp_h92708379__0[0U] 
                                                                      >> 0x10U)))) 
                                                  << 0x2fU) 
                                                 | (((QData)((IData)(
                                                                     (1U 
                                                                      & (__Vtemp_h2338bc5e__0[0U] 
                                                                         >> 0x11U)))) 
                                                     << 0x2eU) 
                                                    | (((QData)((IData)(
                                                                        (1U 
                                                                         & (__Vtemp_hca2e6293__0[0U] 
                                                                            >> 0x12U)))) 
                                                        << 0x2dU) 
                                                       | (((QData)((IData)(
                                                                           (1U 
                                                                            & (__Vtemp_h9ddc691b__0[0U] 
                                                                               >> 0x13U)))) 
                                                           << 0x2cU) 
                                                          | (((QData)((IData)(
                                                                              (1U 
                                                                               & (__Vtemp_h39c9a08f__0[0U] 
                                                                                >> 0x14U)))) 
                                                              << 0x2bU) 
                                                             | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h92aab889__0[0U] 
                                                                                >> 0x15U)))) 
                                                                 << 0x2aU) 
                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h87770334__0[0U] 
                                                                                >> 0x16U)))) 
                                                                    << 0x29U) 
                                                                   | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_haa6ab1a3__0[0U] 
                                                                                >> 0x17U)))) 
                                                                       << 0x28U) 
                                                                      | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h00c9a260__0[0U] 
                                                                                >> 0x18U)))) 
                                                                          << 0x27U) 
                                                                         | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h0691ed3a__0[0U] 
                                                                                >> 0x19U)))) 
                                                                             << 0x26U) 
                                                                            | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h5d96dada__0[0U] 
                                                                                >> 0x1aU)))) 
                                                                                << 0x25U) 
                                                                               | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h9e82b5f2__0[0U] 
                                                                                >> 0x1bU)))) 
                                                                                << 0x24U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_hc36b5b78__0[0U] 
                                                                                >> 0x1cU)))) 
                                                                                << 0x23U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h71729690__0[0U] 
                                                                                >> 0x1dU)))) 
                                                                                << 0x22U) 
                                                                                | (((QData)((IData)(
                                                                                (1U 
                                                                                & (__Vtemp_h4a9a286f__0[0U] 
                                                                                >> 0x1eU)))) 
                                                                                << 0x21U) 
                                                                                | (((QData)((IData)(
                                                                                (__Vtemp_h93326710__0[0U] 
                                                                                >> 0x1fU))) 
                                                                                << 0x20U) 
                                                                                | (QData)((IData)(
                                                                                ((__Vtemp_hb03b894d__0[1U] 
                                                                                << 0x1fU) 
                                                                                | ((0x40000000U 
                                                                                & (__Vtemp_h8955571f__0[1U] 
                                                                                << 0x1dU)) 
                                                                                | ((0x20000000U 
                                                                                & (__Vtemp_h5dddab67__0[1U] 
                                                                                << 0x1bU)) 
                                                                                | ((0x10000000U 
                                                                                & (__Vtemp_h8b16cd53__0[1U] 
                                                                                << 0x19U)) 
                                                                                | ((0x8000000U 
                                                                                & (__Vtemp_h1f8c1441__0[1U] 
                                                                                << 0x17U)) 
                                                                                | ((0x4000000U 
                                                                                & (__Vtemp_h4509eb03__0[1U] 
                                                                                << 0x15U)) 
                                                                                | ((0x2000000U 
                                                                                & (__Vtemp_h3257de64__0[1U] 
                                                                                << 0x13U)) 
                                                                                | ((0x1000000U 
                                                                                & (__Vtemp_hf2b935f6__0[1U] 
                                                                                << 0x11U)) 
                                                                                | ((0x800000U 
                                                                                & (__Vtemp_heb38267c__0[1U] 
                                                                                << 0xfU)) 
                                                                                | ((0x400000U 
                                                                                & (__Vtemp_hf96c634d__0[1U] 
                                                                                << 0xdU)) 
                                                                                | ((0x200000U 
                                                                                & (__Vtemp_h227025b0__0[1U] 
                                                                                << 0xbU)) 
                                                                                | ((0x100000U 
                                                                                & (__Vtemp_h74d6eea3__0[1U] 
                                                                                << 9U)) 
                                                                                | ((0x80000U 
                                                                                & (__Vtemp_hc96ddfce__0[1U] 
                                                                                << 7U)) 
                                                                                | ((0x40000U 
                                                                                & (__Vtemp_he956796e__0[1U] 
                                                                                << 5U)) 
                                                                                | ((0x20000U 
                                                                                & (__Vtemp_h63868638__0[1U] 
                                                                                << 3U)) 
                                                                                | ((0x10000U 
                                                                                & (__Vtemp_h32f4cb99__0[1U] 
                                                                                << 1U)) 
                                                                                | ((0x8000U 
                                                                                & (__Vtemp_hec63e7fe__0[1U] 
                                                                                >> 1U)) 
                                                                                | ((0x4000U 
                                                                                & (__Vtemp_hb4476636__0[1U] 
                                                                                >> 3U)) 
                                                                                | ((0x2000U 
                                                                                & (__Vtemp_h69470708__0[1U] 
                                                                                >> 5U)) 
                                                                                | ((0x1000U 
                                                                                & (__Vtemp_h9ab2c983__0[1U] 
                                                                                >> 7U)) 
                                                                                | ((0x800U 
                                                                                & (__Vtemp_hbfcf04e0__0[1U] 
                                                                                >> 9U)) 
                                                                                | ((0x400U 
                                                                                & (__Vtemp_hf225aeb4__0[1U] 
                                                                                >> 0xbU)) 
                                                                                | ((0x200U 
                                                                                & (__Vtemp_h0e5e810b__0[1U] 
                                                                                >> 0xdU)) 
                                                                                | ((0x100U 
                                                                                & (__Vtemp_h00659fb8__0[1U] 
                                                                                >> 0xfU)) 
                                                                                | ((0x80U 
                                                                                & (__Vtemp_h050db5ca__0[1U] 
                                                                                >> 0x11U)) 
                                                                                | ((0x40U 
                                                                                & (__Vtemp_h90e72f5c__0[1U] 
                                                                                >> 0x13U)) 
                                                                                | ((0x20U 
                                                                                & (__Vtemp_ha0d3af0f__0[1U] 
                                                                                >> 0x15U)) 
                                                                                | ((0x10U 
                                                                                & (__Vtemp_h0303f6a9__0[1U] 
                                                                                >> 0x17U)) 
                                                                                | ((8U 
                                                                                & (__Vtemp_hb3feb086__0[1U] 
                                                                                >> 0x19U)) 
                                                                                | ((4U 
                                                                                & (__Vtemp_h7b0e26dd__0[1U] 
                                                                                >> 0x1bU)) 
                                                                                | ((2U 
                                                                                & (__Vtemp_h1e3cb971__0[1U] 
                                                                                >> 0x1dU)) 
                                                                                | (__Vtemp_hffad4f81__0[1U] 
                                                                                >> 0x1fU)))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                                   << 3U)))) | (QData)((IData)(
                                                               (1U 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sig 
                                                                           >> 0x37U))))));
}
