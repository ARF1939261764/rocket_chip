// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestDriver___024root.h"

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__539(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__539\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_e_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft_3)
            ? (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_auto_tl_master_clock_xing_out_e_valid) 
                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_3_0)) 
               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_1_auto_tl_master_clock_xing_out_e_valid) 
                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_3_1)) 
                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_2_auto_tl_master_clock_xing_out_e_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_3_2)) 
                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_e_valid) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_3_3)))))
            : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_auto_tl_master_clock_xing_out_e_valid) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_1_auto_tl_master_clock_xing_out_e_valid)) 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_2_auto_tl_master_clock_xing_out_e_valid) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_e_valid))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_valid_3 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_e_valid) 
            << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_2_auto_tl_master_clock_xing_out_e_valid) 
                       << 2U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_1_auto_tl_master_clock_xing_out_e_valid) 
                                  << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_auto_tl_master_clock_xing_out_e_valid))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__out_1_ready 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___buffer_auto_in_a_ready) 
           & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__beatsLeft))
               ? (2U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_s_0_state))
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__state_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___out_xbar_auto_out_0_a_valid 
        = ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
               >> 0xdU)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___buffer_auto_out_a_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___out_xbar_auto_out_1_a_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___buffer_auto_out_a_valid) 
           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
              >> 0xdU));
    vlSelf->__VdfgTmp_hb23bfbbb__0 = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sig 
                                       >> 1U) & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundedSig_T_14);
    vlSelf->__VdfgTmp_h19c15620__0 = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sig 
                                       >> 1U) & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundedSig_T_14);
    vlSelf->__VdfgTmp_haac6a30d__0 = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sig 
                                       >> 1U) & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundedSig_T_14);
    vlSelf->__VdfgTmp_h59368a92__0 = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN_io_in_b_sig 
                                       >> 1U) & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundedSig_T_14);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__dataArb_io_in_3_valid 
        = ((~ ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_mem_req_bits_cmd)) 
               | (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_mem_req_bits_cmd)))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_mem_req_valid));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__540(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__540\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__dataArb_io_in_3_valid 
        = ((~ ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_mem_req_bits_cmd)) 
               | (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_mem_req_bits_cmd)))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_mem_req_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__dataArb_io_in_3_valid 
        = ((~ ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_mem_req_bits_cmd)) 
               | (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_mem_req_bits_cmd)))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_mem_req_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__dataArb_io_in_3_valid 
        = ((~ ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_mem_req_bits_cmd)) 
               | (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_mem_req_bits_cmd)))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_mem_req_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h9d1ec38b__0 
        = ((0x200U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                          >> 0x16U)) << 9U)) | ((0x100U 
                                                 & ((~ 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                      >> 0x17U)) 
                                                    << 8U)) 
                                                | ((0x80U 
                                                    & ((~ 
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                         >> 0x18U)) 
                                                       << 7U)) 
                                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h5afaed7e__0))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h767c8c89__0 
        = ((0x200U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                          >> 0x16U)) << 9U)) | ((0x100U 
                                                 & ((~ 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                      >> 0x17U)) 
                                                    << 8U)) 
                                                | ((0x80U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                       >> 0x11U)) 
                                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h5afaed7e__0))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkD_io_resp_bits_last 
        = ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__counter)) 
           | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__beats1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__beat 
        = ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__counter) 
               - (IData)(1U))) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__beats1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h9d1ec38b__0 
        = ((0x200U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                          >> 0x16U)) << 9U)) | ((0x100U 
                                                 & ((~ 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                      >> 0x17U)) 
                                                    << 8U)) 
                                                | ((0x80U 
                                                    & ((~ 
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                         >> 0x18U)) 
                                                       << 7U)) 
                                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h5afaed7e__0))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__541(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__541\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h767c8c89__0 
        = ((0x200U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                          >> 0x16U)) << 9U)) | ((0x100U 
                                                 & ((~ 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                      >> 0x17U)) 
                                                    << 8U)) 
                                                | ((0x80U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                       >> 0x11U)) 
                                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h5afaed7e__0))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h9d1ec38b__0 
        = ((0x200U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                          >> 0x16U)) << 9U)) | ((0x100U 
                                                 & ((~ 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                      >> 0x17U)) 
                                                    << 8U)) 
                                                | ((0x80U 
                                                    & ((~ 
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                         >> 0x18U)) 
                                                       << 7U)) 
                                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h5afaed7e__0))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h767c8c89__0 
        = ((0x200U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                          >> 0x16U)) << 9U)) | ((0x100U 
                                                 & ((~ 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                      >> 0x17U)) 
                                                    << 8U)) 
                                                | ((0x80U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                       >> 0x11U)) 
                                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h5afaed7e__0))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h9d1ec38b__0 
        = ((0x200U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                          >> 0x16U)) << 9U)) | ((0x100U 
                                                 & ((~ 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                      >> 0x17U)) 
                                                    << 8U)) 
                                                | ((0x80U 
                                                    & ((~ 
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                         >> 0x18U)) 
                                                       << 7U)) 
                                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h5afaed7e__0))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h767c8c89__0 
        = ((0x200U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                          >> 0x16U)) << 9U)) | ((0x100U 
                                                 & ((~ 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                      >> 0x17U)) 
                                                    << 8U)) 
                                                | ((0x80U 
                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                       >> 0x11U)) 
                                                   | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h5afaed7e__0))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__542(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__542\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___GEN_0 
        = (1U & (((0xe0U & ((- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__wSourceVec_0))) 
                            << 5U)) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__wSourceVec_4) 
                                        << 4U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__wSourceVec_3) 
                                                   << 3U) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__wSourceVec_2) 
                                                      << 2U) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__wSourceVec_1) 
                                                         << 1U) 
                                                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__wSourceVec_0)))))) 
                 >> (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___binder_auto_in_d_bits_source) 
                           >> 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___T_18 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__r_wins) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___binder_auto_in_d_bits_source));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT___T_646 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___binder_auto_in_d_valid) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__fixer__DOT__monitor__DOT__d_first_counter_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT___T_646 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___binder_auto_in_d_valid) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__picker__DOT__monitor__DOT__d_first_counter_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT___T_646 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___binder_auto_in_d_valid) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__monitor__DOT__d_first_counter_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT___T_646 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___binder_auto_in_d_valid) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__binder__DOT__monitor__DOT__d_first_counter_1)));
    if ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__beatsLeft_1))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___binder_auto_in_d_valid;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_1 
            = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___binder_auto_in_d_valid)) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___q_io_deq_valid));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__state_1_0;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1_1 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__state_1_1;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___GEN_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___q_io_deq_valid) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___binder_auto_in_d_valid));
    vlSelf->__VdfgTmp_h53f84e1f__0 = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z 
                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundedSig_T_14);
    vlSelf->__VdfgTmp_h8e43438e__0 = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z 
                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundedSig_T_14);
    vlSelf->__VdfgTmp_h321ae603__0 = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z 
                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundedSig_T_14);
    vlSelf->__VdfgTmp_h80a0a8f7__0 = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z 
                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundedSig_T_14);
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__543(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__543\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT__res_ignore_7 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h7b483171__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT__res_ignore_6 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h7b483171__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT__res_ignore_5 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h7b483171__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT__res_ignore_4 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h7b483171__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT__res_ignore_3 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h7b483171__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT__res_ignore_2 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h7b483171__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT__res_ignore_1 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h7b483171__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT__res_ignore 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h7b483171__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT__res_ignore_7 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h7b483171__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT__res_ignore_6 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h7b483171__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT__res_ignore_5 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h7b483171__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT__res_ignore_4 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h7b483171__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT__res_ignore_3 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h7b483171__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT__res_ignore_2 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h7b483171__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT__res_ignore_1 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h7b483171__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT__res_ignore 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h7b483171__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT__res_ignore_7 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h7b483171__0));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__544(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__544\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT__res_ignore_6 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h7b483171__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT__res_ignore_5 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h7b483171__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT__res_ignore_4 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h7b483171__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT__res_ignore_3 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h7b483171__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT__res_ignore_2 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h7b483171__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT__res_ignore_1 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h7b483171__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT__res_ignore 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h7b483171__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT__res_ignore_7 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_0_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h7b483171__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT__res_ignore_6 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_1_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h7b483171__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT__res_ignore_5 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_2_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h7b483171__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT__res_ignore_4 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_3_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h7b483171__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT__res_ignore_3 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_4_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h7b483171__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT__res_ignore_2 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_5_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h7b483171__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT__res_ignore_1 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_6_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h7b483171__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT__res_ignore 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_pmp_7_cfg_l)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h7b483171__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN 
        = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__intsource_1__DOT__reg_0__DOT__reg_0) 
             << 0xbU) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_hfdb0ad59__0)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mie));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__545(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__545\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN 
        = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__intsource_4__DOT__reg_0__DOT__reg_0) 
             << 0xbU) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_hfdb0ad59__0)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mie));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN 
        = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__intsource_7__DOT__reg_0__DOT__reg_0) 
             << 0xbU) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_hfdb0ad59__0)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mie));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN 
        = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__intsource_10__DOT__reg_0__DOT__reg_0) 
             << 0xbU) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_hfdb0ad59__0)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mie));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___GEN_1 
        = (7U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimWayOH) 
                  >> 5U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT__victimWayOH) 
                            >> 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bankedStore__DOT____VdfgTmp_hfaf3f832__0 
        = (1U & ((~ (IData)(vlSelf->__VdfgTmp_hb703cfb5__0)) 
                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT___ram_ext_R0_data[0U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkD_io_source 
        = (7U & ((IData)(vlSelf->__VdfgTmp_hb703cfb5__0)
                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__io_source_r)
                  : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT___ram_ext_R0_data[0U] 
                      << 0x18U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkD__DOT__d__DOT___ram_ext_R0_data[0U] 
                                   >> 8U))));
    vlSelf->__VdfgTmp_h6d17a3dc__0 = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z 
                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundedSig_T_14);
    vlSelf->__VdfgTmp_h052193a9__0 = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z 
                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundedSig_T_14);
    vlSelf->__VdfgTmp_h2a90e373__0 = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z 
                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundedSig_T_14);
    vlSelf->__VdfgTmp_haa9049d9__0 = (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__divSqrtRecFNToRaw__DOT__divSqrtRawFN__DOT__sigX_Z 
                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__divSqrt_1__DOT__roundRawFNToRecFN__DOT__roundAnyRawFNToRecFN__DOT___roundedSig_T_14);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___InclusiveCache_inner_TLBuffer_auto_out_c_valid 
        = ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft_2))
            ? (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_auto_tl_master_clock_xing_out_c_valid) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_1_auto_tl_master_clock_xing_out_c_valid)) 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_2_auto_tl_master_clock_xing_out_c_valid) 
                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_c_valid)))
            : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_auto_tl_master_clock_xing_out_c_valid) 
                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_2_0)) 
               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_1_auto_tl_master_clock_xing_out_c_valid) 
                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_2_1)) 
                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_2_auto_tl_master_clock_xing_out_c_valid) 
                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_2_2)) 
                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_c_valid) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__state_2_3))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__546(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__546\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_valid_2 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_c_valid) 
            << 3U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_2_auto_tl_master_clock_xing_out_c_valid) 
                       << 2U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_1_auto_tl_master_clock_xing_out_c_valid) 
                                  << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_auto_tl_master_clock_xing_out_c_valid))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___fq_io_enq_valid_T_6 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_io_enq_valid_REG) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_valid) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___icache_io_resp_valid) 
                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___fq_io_enq_bits_replay_T_5) 
                    | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_tlb_resp_miss)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___icache_io_s2_kill_T_2))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s2_miss 
        = ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___icache_io_s2_kill_T_2) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s2_hit))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s2_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT___fq_io_enq_valid_T_6 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_io_enq_valid_REG) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_valid) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT___icache_io_resp_valid) 
                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT___fq_io_enq_bits_replay_T_5) 
                    | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_tlb_resp_miss)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT___icache_io_s2_kill_T_2))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s2_miss 
        = ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT___icache_io_s2_kill_T_2) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s2_hit))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s2_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT___fq_io_enq_valid_T_6 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_io_enq_valid_REG) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_valid) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT___icache_io_resp_valid) 
                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT___fq_io_enq_bits_replay_T_5) 
                    | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_tlb_resp_miss)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT___icache_io_s2_kill_T_2))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s2_miss 
        = ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT___icache_io_s2_kill_T_2) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s2_hit))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s2_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT___fq_io_enq_valid_T_6 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq_io_enq_valid_REG) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_valid) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT___icache_io_resp_valid) 
                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT___fq_io_enq_bits_replay_T_5) 
                    | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_tlb_resp_miss)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT___icache_io_s2_kill_T_2))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s2_miss 
        = ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT___icache_io_s2_kill_T_2) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s2_hit))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__s2_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__widx_incremented 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT__widx_widx_bin) 
              + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT___T)));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__547(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__547\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT__ridx_incremented 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT__source_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT__ridx_ridx_bin) 
              + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__bundleIn_0_d_source__DOT___T)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___out_rofireMux_T_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___out_wofireMux_T) 
           & (0x40000000000000ULL == (0x70000000000000ULL 
                                      & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___out_wofireMux_T_2 
        = ((4U != (7U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmiXing__DOT__x1_a_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                                 >> 0x34U)))) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___out_wofireMux_T));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__insn_call 
        = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd)) 
           & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                  >> 0x14U)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h06912dea__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__insn_break 
        = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd)) 
           & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
               >> 0x14U) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h06912dea__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__insn_call 
        = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd)) 
           & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                  >> 0x14U)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h06912dea__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__insn_break 
        = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd)) 
           & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
               >> 0x14U) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h06912dea__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__insn_call 
        = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd)) 
           & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                  >> 0x14U)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h06912dea__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__insn_break 
        = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd)) 
           & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
               >> 0x14U) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h06912dea__0)));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__548(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__548\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__insn_call 
        = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd)) 
           & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                  >> 0x14U)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h06912dea__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__insn_break 
        = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd)) 
           & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
               >> 0x14U) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h06912dea__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__dMode 
        = ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_28 
                    >> 0x2fU)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_debug));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_29 
        = ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
               >> 0x1dU)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__insn_ret));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__dMode 
        = ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_28 
                    >> 0x2fU)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_debug));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_29 
        = ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
               >> 0x1dU)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__insn_ret));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__dMode 
        = ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_28 
                    >> 0x2fU)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_debug));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_29 
        = ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
               >> 0x1dU)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__insn_ret));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__dMode 
        = ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_28 
                    >> 0x2fU)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_debug));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_29 
        = ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
               >> 0x1dU)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__insn_ret));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT___buffer_auto_out_a_valid) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__repeater__DOT__full));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__do_enq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT___axi4frag_auto_out_r_ready) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT___axi4frag_auto_in_r_valid));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__549(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__549\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__do_deq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT___axi4frag_auto_in_r_valid) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT___axi4frag_auto_out_r_ready));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT__do_enq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___qs_queue_0_io_enq_ready) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT___axi4yank_auto_in_r_valid) 
              & (0U == (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT___ram_ext_R0_data[0U]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT__do_enq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___qs_queue_1_io_enq_ready) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT___axi4yank_auto_in_r_valid) 
              & (1U == (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT___ram_ext_R0_data[0U]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT__do_enq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___qs_queue_2_io_enq_ready) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT___axi4yank_auto_in_r_valid) 
              & (2U == (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT___ram_ext_R0_data[0U]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT__do_enq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___qs_queue_3_io_enq_ready) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT___axi4yank_auto_in_r_valid) 
              & (3U == (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT___ram_ext_R0_data[0U]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT__do_enq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___qs_queue_4_io_enq_ready) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT___axi4yank_auto_in_r_valid) 
              & (4U == (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT___ram_ext_R0_data[0U]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_5__DOT__do_enq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___qs_queue_5_io_enq_ready) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT___axi4yank_auto_in_r_valid) 
              & (5U == (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT___ram_ext_R0_data[0U]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_6__DOT__do_enq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___qs_queue_6_io_enq_ready) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT___axi4yank_auto_in_r_valid) 
              & (6U == (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT___ram_ext_R0_data[0U]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_7__DOT__do_enq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___qs_queue_7_io_enq_ready) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT___axi4yank_auto_in_r_valid) 
              & (7U == (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT___ram_ext_R0_data[0U]))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__550(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__550\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_8__DOT__do_enq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___qs_queue_8_io_enq_ready) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT___axi4yank_auto_in_r_valid) 
              & (8U == (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT___ram_ext_R0_data[0U]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_9__DOT__do_enq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___qs_queue_9_io_enq_ready) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT___axi4yank_auto_in_r_valid) 
              & (9U == (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT___ram_ext_R0_data[0U]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_10__DOT__do_enq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___qs_queue_10_io_enq_ready) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT___axi4yank_auto_in_r_valid) 
              & (0xaU == (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT___ram_ext_R0_data[0U]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_11__DOT__do_enq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___qs_queue_11_io_enq_ready) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT___axi4yank_auto_in_r_valid) 
              & (0xbU == (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT___ram_ext_R0_data[0U]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_12__DOT__do_enq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___qs_queue_12_io_enq_ready) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT___axi4yank_auto_in_r_valid) 
              & (0xcU == (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT___ram_ext_R0_data[0U]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_13__DOT__do_enq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___qs_queue_13_io_enq_ready) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT___axi4yank_auto_in_r_valid) 
              & (0xdU == (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT___ram_ext_R0_data[0U]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_14__DOT__do_enq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___qs_queue_14_io_enq_ready) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT___axi4yank_auto_in_r_valid) 
              & (0xeU == (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT___ram_ext_R0_data[0U]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_15__DOT__do_enq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___qs_queue_15_io_enq_ready) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT___axi4yank_auto_in_r_valid) 
              & (0xfU == (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT___ram_ext_R0_data[0U]))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT___T_80 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT___axi4yank_auto_in_r_valid) 
           & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___qs_queue_15_io_enq_ready) 
                << 0xfU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___qs_queue_14_io_enq_ready) 
                             << 0xeU) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___qs_queue_13_io_enq_ready) 
                                          << 0xdU) 
                                         | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___qs_queue_12_io_enq_ready) 
                                             << 0xcU) 
                                            | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___qs_queue_11_io_enq_ready) 
                                                << 0xbU) 
                                               | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___qs_queue_10_io_enq_ready) 
                                                   << 0xaU) 
                                                  | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___qs_queue_9_io_enq_ready) 
                                                      << 9U) 
                                                     | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___qs_queue_8_io_enq_ready) 
                                                         << 8U) 
                                                        | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___qs_queue_7_io_enq_ready) 
                                                            << 7U) 
                                                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___qs_queue_6_io_enq_ready) 
                                                               << 6U) 
                                                              | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___qs_queue_5_io_enq_ready) 
                                                                  << 5U) 
                                                                 | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___qs_queue_4_io_enq_ready) 
                                                                     << 4U) 
                                                                    | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___qs_queue_3_io_enq_ready) 
                                                                        << 3U) 
                                                                       | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___qs_queue_2_io_enq_ready) 
                                                                           << 2U) 
                                                                          | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___qs_queue_1_io_enq_ready) 
                                                                              << 1U) 
                                                                             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT___qs_queue_0_io_enq_ready)))))))))))))))) 
              >> (0xfU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT___ram_ext_R0_data[0U])));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__551(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__551\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__count 
        = ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__counter) 
               - (IData)(1U))) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__beats1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__refill_cnt 
        = ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__counter) 
               - (IData)(1U))) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__beats1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__d_last 
        = ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__counter)) 
           | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__beats1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__count 
        = ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__counter) 
               - (IData)(1U))) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__beats1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__refill_cnt 
        = ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__counter) 
               - (IData)(1U))) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__beats1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__d_last 
        = ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__counter)) 
           | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__beats1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__count 
        = ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__counter) 
               - (IData)(1U))) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__beats1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__refill_cnt 
        = ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__counter) 
               - (IData)(1U))) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__beats1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__d_last 
        = ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__counter)) 
           | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__beats1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__count 
        = ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__counter) 
               - (IData)(1U))) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__beats1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__refill_cnt 
        = ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__counter) 
               - (IData)(1U))) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__beats1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__d_last 
        = ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__counter)) 
           | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__beats1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT__do_deq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_fbus_buffer_auto_in_d_valid) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_fbus_coupler_from_port_named_serial_tl_ctrl_auto_tl_out_d_ready));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__552(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__552\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT___T_1212 
        = ((6U != (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_fbus_buffer_auto_in_d_valid) 
              & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__d_first_counter_1))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_fbus_coupler_from_port_named_serial_tl_ctrl_auto_tl_out_d_ready) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_fbus_buffer_auto_in_d_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__latch_5 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_fbus_buffer_auto_out_d_ready) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft_5)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__bpu__DOT____VdfgTmp_h3ad65a09__0 
        = (QData)((IData)(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__bpu__DOT___x_T_20) 
                             & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_address 
                                        >> 2U))) << 3U) 
                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__bpu__DOT___x_T_20) 
                               << 2U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__bpu__DOT___x_T_18) 
                                          << 1U) | 
                                         (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_tmatch)))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__bpu__DOT____VdfgTmp_h3ad65a09__0 
        = (QData)((IData)(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__bpu__DOT___x_T_20) 
                             & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_address 
                                        >> 2U))) << 3U) 
                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__bpu__DOT___x_T_20) 
                               << 2U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__bpu__DOT___x_T_18) 
                                          << 1U) | 
                                         (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_tmatch)))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__bpu__DOT____VdfgTmp_h3ad65a09__0 
        = (QData)((IData)(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__bpu__DOT___x_T_20) 
                             & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_address 
                                        >> 2U))) << 3U) 
                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__bpu__DOT___x_T_20) 
                               << 2U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__bpu__DOT___x_T_18) 
                                          << 1U) | 
                                         (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_tmatch)))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__bpu__DOT____VdfgTmp_h3ad65a09__0 
        = (QData)((IData)(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__bpu__DOT___x_T_20) 
                             & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_address 
                                        >> 2U))) << 3U) 
                           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__bpu__DOT___x_T_20) 
                               << 2U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__bpu__DOT___x_T_18) 
                                          << 1U) | 
                                         (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_tmatch)))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0 
        = (IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___repeater_io_deq_bits_size) 
                    >> 2U) | (3U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___repeater_io_deq_bits_size)))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__553(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__553\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_size 
        = ((4U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___repeater_io_deq_bits_size))
            ? 3U : (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___repeater_io_deq_bits_size)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT____VdfgTmp_ha426dc96__0 
        = (7U & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__gennum))
                  ? (~ (0x3ffU & (((IData)(0x3fU) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                  >> 3U))) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__gennum) 
                                              - (IData)(1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0 
        = (IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___repeater_io_deq_bits_size) 
                    >> 2U) | (3U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___repeater_io_deq_bits_size)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_bits_size 
        = ((4U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___repeater_io_deq_bits_size))
            ? 3U : (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___repeater_io_deq_bits_size)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT____VdfgTmp_ha426dc96__0 
        = (7U & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__gennum))
                  ? (~ (0x3ffU & (((IData)(0x3fU) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                  >> 3U))) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__gennum) 
                                              - (IData)(1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___T_2406 
        = ((6U != (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___buffer_auto_in_d_valid) 
              & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_1_d_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___buffer_auto_in_d_valid) 
           & (0x400U == (0x600U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_d_valid 
        = ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
               >> 0xaU)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___buffer_auto_in_d_valid));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__554(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__554\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__latch_6 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_auto_tl_master_clock_xing_out_d_ready) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft_6)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__monitor__DOT___T_2406 
        = ((6U != (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___buffer_auto_in_d_valid) 
              & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_1_d_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___buffer_auto_in_d_valid) 
           & (0x400U == (0x600U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_d_valid 
        = ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
               >> 0xaU)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___buffer_auto_in_d_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__latch_7 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_1_auto_tl_master_clock_xing_out_d_ready) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft_7)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__monitor__DOT___T_2406 
        = ((6U != (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___buffer_auto_in_d_valid) 
              & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_1_d_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___buffer_auto_in_d_valid) 
           & (0x400U == (0x600U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_d_valid 
        = ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
               >> 0xaU)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___buffer_auto_in_d_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__latch_8 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_2_auto_tl_master_clock_xing_out_d_ready) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft_8)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__monitor__DOT___T_2406 
        = ((6U != (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT___buffer_auto_in_d_valid) 
              & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__555(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__555\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_1_d_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT___buffer_auto_in_d_valid) 
           & (0x400U == (0x600U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_d_valid 
        = ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
               >> 0xaU)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT___buffer_auto_in_d_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__latch_9 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_d_ready) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft_9)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT____VdfgTmp_hff3bdd32__0 
        = (0U == ((6U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                         >> 0x11U)) | (1U & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                                >> 0xfU)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT____VdfgTmp_h46fc4769__0 
        = ((4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                  >> 0xdU)) | ((2U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                      >> 0xcU)) | (1U 
                                                   & (~ 
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                                       >> 8U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT____VdfgTmp_hf4fdb370__0 
        = ((4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                  >> 0xdU)) | ((2U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                          >> 0xdU)) 
                                      << 1U)) | (1U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                                    >> 8U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT____VdfgTmp_h977688be__0 
        = ((2U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                  >> 7U)) | (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                   >> 4U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT____VdfgTmp_hbc20111e__0 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_1)) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_debug))) 
                    & (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__legal_address 
        = ((3U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn) 
           | ((0x2010U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn) 
              | ((4U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn) 
                 | ((0x54000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn) 
                    | ((3U == (0x3fffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                          >> 0xeU))) 
                       | ((0x200U == (0xffffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                                   >> 4U))) 
                          | ((0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn) 
                             | ((1U == (0xffffffU & 
                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                         >> 4U))) | 
                                ((0x100U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn) 
                                 | ((0x110U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn) 
                                    | ((8U == (0xfffU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                                  >> 0x10U))) 
                                       | (3U == (0x7ffU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                                    >> 0x11U))))))))))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__556(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__556\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT____Vcellinp__pmp__io_addr 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
            << 0xcU) | (0xfffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_pc)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT____VdfgTmp_hff3bdd32__0 
        = (0U == ((6U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                         >> 0x11U)) | (1U & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                                >> 0xfU)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT____VdfgTmp_h46fc4769__0 
        = ((4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                  >> 0xdU)) | ((2U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                      >> 0xcU)) | (1U 
                                                   & (~ 
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                                       >> 8U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT____VdfgTmp_hf4fdb370__0 
        = ((4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                  >> 0xdU)) | ((2U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                          >> 0xdU)) 
                                      << 1U)) | (1U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                                    >> 8U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT____VdfgTmp_h977688be__0 
        = ((2U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                  >> 7U)) | (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                   >> 4U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT____VdfgTmp_hbc20111e__0 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_1)) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_debug))) 
                    & (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__legal_address 
        = ((3U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn) 
           | ((0x2010U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn) 
              | ((4U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn) 
                 | ((0x54000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn) 
                    | ((3U == (0x3fffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                          >> 0xeU))) 
                       | ((0x200U == (0xffffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                                   >> 4U))) 
                          | ((0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn) 
                             | ((1U == (0xffffffU & 
                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                         >> 4U))) | 
                                ((0x100U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn) 
                                 | ((0x110U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn) 
                                    | ((8U == (0xfffU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                                  >> 0x10U))) 
                                       | (3U == (0x7ffU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                                    >> 0x11U))))))))))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__557(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__557\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT____Vcellinp__pmp__io_addr 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
            << 0xcU) | (0xfffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_pc)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT____VdfgTmp_hff3bdd32__0 
        = (0U == ((6U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                         >> 0x11U)) | (1U & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                                >> 0xfU)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT____VdfgTmp_h46fc4769__0 
        = ((4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                  >> 0xdU)) | ((2U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                      >> 0xcU)) | (1U 
                                                   & (~ 
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                                       >> 8U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT____VdfgTmp_hf4fdb370__0 
        = ((4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                  >> 0xdU)) | ((2U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                          >> 0xdU)) 
                                      << 1U)) | (1U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                                    >> 8U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT____VdfgTmp_h977688be__0 
        = ((2U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                  >> 7U)) | (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                   >> 4U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT____VdfgTmp_hbc20111e__0 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_1)) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_debug))) 
                    & (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__legal_address 
        = ((3U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn) 
           | ((0x2010U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn) 
              | ((4U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn) 
                 | ((0x54000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn) 
                    | ((3U == (0x3fffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                          >> 0xeU))) 
                       | ((0x200U == (0xffffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                                   >> 4U))) 
                          | ((0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn) 
                             | ((1U == (0xffffffU & 
                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                         >> 4U))) | 
                                ((0x100U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn) 
                                 | ((0x110U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn) 
                                    | ((8U == (0xfffU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                                  >> 0x10U))) 
                                       | (3U == (0x7ffU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                                    >> 0x11U))))))))))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__558(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__558\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT____Vcellinp__pmp__io_addr 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
            << 0xcU) | (0xfffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_pc)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT____VdfgTmp_hff3bdd32__0 
        = (0U == ((6U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                         >> 0x11U)) | (1U & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                                >> 0xfU)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT____VdfgTmp_h46fc4769__0 
        = ((4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                  >> 0xdU)) | ((2U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                      >> 0xcU)) | (1U 
                                                   & (~ 
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                                       >> 8U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT____VdfgTmp_hf4fdb370__0 
        = ((4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                  >> 0xdU)) | ((2U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                          >> 0xdU)) 
                                      << 1U)) | (1U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                                    >> 8U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT____VdfgTmp_h977688be__0 
        = ((2U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                  >> 7U)) | (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                   >> 4U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT____VdfgTmp_hbc20111e__0 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_1)) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_debug))) 
                    & (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__legal_address 
        = ((3U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn) 
           | ((0x2010U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn) 
              | ((4U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn) 
                 | ((0x54000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn) 
                    | ((3U == (0x3fffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                          >> 0xeU))) 
                       | ((0x200U == (0xffffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                                   >> 4U))) 
                          | ((0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn) 
                             | ((1U == (0xffffffU & 
                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                         >> 4U))) | 
                                ((0x100U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn) 
                                 | ((0x110U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn) 
                                    | ((8U == (0xfffU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                                  >> 0x10U))) 
                                       | (3U == (0x7ffU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
                                                    >> 0x11U))))))))))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__559(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__559\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT____Vcellinp__pmp__io_addr 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__mpu_ppn 
            << 0xcU) | (0xfffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_pc)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_32 
        = ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___s2_meta_error_T)) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_prb_ack_data));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_32 
        = ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT___s2_meta_error_T)) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_prb_ack_data));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_32 
        = ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT___s2_meta_error_T)) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_prb_ack_data));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_32 
        = ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT___s2_meta_error_T)) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_prb_ack_data));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT____Vcellinp__monitor__io_in_d_bits_source 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass)) 
                 & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__bundleIn_0_d_sink__DOT__io_deq_bits_deq_bits_reg__DOT__cdc_reg 
                            >> 0x23U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT___bundleIn_0_a_ready_T 
        = ((1U & (~ (IData)(vlSelf->__VdfgTmp_h40f73a86__0))) 
           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiBypass__DOT__bar__DOT__bypass));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_prevRVI_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_valid) 
           & (3U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___icache_io_resp_bits_data)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_prevRVI_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_valid) 
           & (3U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT___icache_io_resp_bits_data)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_prevRVI_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_valid) 
           & (3U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT___icache_io_resp_bits_data)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_prevRVI_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_valid) 
           & (3U == (3U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT___icache_io_resp_bits_data)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_valid_masked 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_valid_no_xcpt) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_not_nacked_in_s1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_valid_masked 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_valid_no_xcpt) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_not_nacked_in_s1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_valid_masked 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_valid_no_xcpt) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_not_nacked_in_s1));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__560(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__560\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_valid_masked 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_valid_no_xcpt) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_not_nacked_in_s1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_cause 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_xcpt)
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_cause
            : (QData)((IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_97)
                                ? 0xfU : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_99)
                                           ? 0xdU : 
                                          ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_101)
                                            ? 0x17U
                                            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_103)
                                                ? 0x15U
                                                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_105)
                                                    ? 7U
                                                    : 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_107)
                                                     ? 5U
                                                     : 
                                                    (4U 
                                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_109) 
                                                        << 1U)))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_xcpt 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_xcpt) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_97) 
              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_99) 
                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_101) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_103) 
                       | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_105) 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_107) 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_109) 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_110) 
                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_s2_xcpt_ma_ld))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_cause 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_xcpt)
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_cause
            : (QData)((IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT___T_97)
                                ? 0xfU : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT___T_99)
                                           ? 0xdU : 
                                          ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT___T_101)
                                            ? 0x17U
                                            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT___T_103)
                                                ? 0x15U
                                                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT___T_105)
                                                    ? 7U
                                                    : 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT___T_107)
                                                     ? 5U
                                                     : 
                                                    (4U 
                                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT___T_109) 
                                                        << 1U)))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_xcpt 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_xcpt) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT___T_97) 
              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT___T_99) 
                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT___T_101) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT___T_103) 
                       | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT___T_105) 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT___T_107) 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT___T_109) 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT___T_110) 
                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_s2_xcpt_ma_ld))))))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__561(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__561\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_cause 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_xcpt)
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_cause
            : (QData)((IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT___T_97)
                                ? 0xfU : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT___T_99)
                                           ? 0xdU : 
                                          ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT___T_101)
                                            ? 0x17U
                                            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT___T_103)
                                                ? 0x15U
                                                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT___T_105)
                                                    ? 7U
                                                    : 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT___T_107)
                                                     ? 5U
                                                     : 
                                                    (4U 
                                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT___T_109) 
                                                        << 1U)))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_xcpt 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_xcpt) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT___T_97) 
              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT___T_99) 
                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT___T_101) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT___T_103) 
                       | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT___T_105) 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT___T_107) 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT___T_109) 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT___T_110) 
                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_s2_xcpt_ma_ld))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_cause 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_xcpt)
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_cause
            : (QData)((IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT___T_97)
                                ? 0xfU : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT___T_99)
                                           ? 0xdU : 
                                          ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT___T_101)
                                            ? 0x17U
                                            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT___T_103)
                                                ? 0x15U
                                                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT___T_105)
                                                    ? 7U
                                                    : 
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT___T_107)
                                                     ? 5U
                                                     : 
                                                    (4U 
                                                     | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT___T_109) 
                                                        << 1U)))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_xcpt 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_xcpt) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT___T_97) 
              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT___T_99) 
                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT___T_101) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT___T_103) 
                       | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT___T_105) 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT___T_107) 
                             | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT___T_109) 
                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT___T_110) 
                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_s2_xcpt_ma_ld))))))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__562(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__562\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h268e525d__0 
        = ((0x200U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                          >> 0x16U)) << 9U)) | ((0x100U 
                                                 & ((~ 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                      >> 0x17U)) 
                                                    << 8U)) 
                                                | ((0x80U 
                                                    & ((~ 
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                         >> 0x18U)) 
                                                       << 7U)) 
                                                   | ((0x40U 
                                                       & ((~ 
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                            >> 0x19U)) 
                                                          << 6U)) 
                                                      | ((0x20U 
                                                          & ((~ 
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                               >> 0x1aU)) 
                                                             << 5U)) 
                                                         | ((0x10U 
                                                             & ((~ 
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                                  >> 0x1bU)) 
                                                                << 4U)) 
                                                            | ((8U 
                                                                & ((~ 
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                                     >> 0x1cU)) 
                                                                   << 3U)) 
                                                               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h7cc8f722__0))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h3f84ce9c__0 
        = ((8U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                  >> 0x19U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h7cc8f722__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_hc39a0469__0 
        = ((0x10U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                         >> 0x1bU)) << 4U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_haebcccea__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h81721798__0 
        = ((0x40U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                     >> 0x13U)) | ((0x20U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                 >> 0x1aU)) 
                                             << 5U)) 
                                   | ((0x10U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                >> 0x17U)) 
                                      | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_haebcccea__0))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h268e525d__0 
        = ((0x200U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                          >> 0x16U)) << 9U)) | ((0x100U 
                                                 & ((~ 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                      >> 0x17U)) 
                                                    << 8U)) 
                                                | ((0x80U 
                                                    & ((~ 
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                         >> 0x18U)) 
                                                       << 7U)) 
                                                   | ((0x40U 
                                                       & ((~ 
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                            >> 0x19U)) 
                                                          << 6U)) 
                                                      | ((0x20U 
                                                          & ((~ 
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                               >> 0x1aU)) 
                                                             << 5U)) 
                                                         | ((0x10U 
                                                             & ((~ 
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                                  >> 0x1bU)) 
                                                                << 4U)) 
                                                            | ((8U 
                                                                & ((~ 
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                                     >> 0x1cU)) 
                                                                   << 3U)) 
                                                               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h7cc8f722__0))))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__563(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__563\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h3f84ce9c__0 
        = ((8U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                  >> 0x19U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h7cc8f722__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_hc39a0469__0 
        = ((0x10U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                         >> 0x1bU)) << 4U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_haebcccea__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h81721798__0 
        = ((0x40U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                     >> 0x13U)) | ((0x20U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                 >> 0x1aU)) 
                                             << 5U)) 
                                   | ((0x10U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                >> 0x17U)) 
                                      | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_haebcccea__0))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h268e525d__0 
        = ((0x200U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                          >> 0x16U)) << 9U)) | ((0x100U 
                                                 & ((~ 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                      >> 0x17U)) 
                                                    << 8U)) 
                                                | ((0x80U 
                                                    & ((~ 
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                         >> 0x18U)) 
                                                       << 7U)) 
                                                   | ((0x40U 
                                                       & ((~ 
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                            >> 0x19U)) 
                                                          << 6U)) 
                                                      | ((0x20U 
                                                          & ((~ 
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                               >> 0x1aU)) 
                                                             << 5U)) 
                                                         | ((0x10U 
                                                             & ((~ 
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                                  >> 0x1bU)) 
                                                                << 4U)) 
                                                            | ((8U 
                                                                & ((~ 
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                                     >> 0x1cU)) 
                                                                   << 3U)) 
                                                               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h7cc8f722__0))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h3f84ce9c__0 
        = ((8U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                  >> 0x19U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h7cc8f722__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_hc39a0469__0 
        = ((0x10U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                         >> 0x1bU)) << 4U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_haebcccea__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h81721798__0 
        = ((0x40U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                     >> 0x13U)) | ((0x20U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                 >> 0x1aU)) 
                                             << 5U)) 
                                   | ((0x10U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                >> 0x17U)) 
                                      | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_haebcccea__0))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__564(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__564\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h268e525d__0 
        = ((0x200U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                          >> 0x16U)) << 9U)) | ((0x100U 
                                                 & ((~ 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                      >> 0x17U)) 
                                                    << 8U)) 
                                                | ((0x80U 
                                                    & ((~ 
                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                         >> 0x18U)) 
                                                       << 7U)) 
                                                   | ((0x40U 
                                                       & ((~ 
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                            >> 0x19U)) 
                                                          << 6U)) 
                                                      | ((0x20U 
                                                          & ((~ 
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                               >> 0x1aU)) 
                                                             << 5U)) 
                                                         | ((0x10U 
                                                             & ((~ 
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                                  >> 0x1bU)) 
                                                                << 4U)) 
                                                            | ((8U 
                                                                & ((~ 
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                                     >> 0x1cU)) 
                                                                   << 3U)) 
                                                               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h7cc8f722__0))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h3f84ce9c__0 
        = ((8U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                  >> 0x19U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h7cc8f722__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_hc39a0469__0 
        = ((0x10U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                         >> 0x1bU)) << 4U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_haebcccea__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h81721798__0 
        = ((0x40U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                     >> 0x13U)) | ((0x20U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                 >> 0x1aU)) 
                                             << 5U)) 
                                   | ((0x10U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                                                >> 0x17U)) 
                                      | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_haebcccea__0))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_endsBeforeUpper_T_42 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_pte_ppn 
            << 0xcU) & (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_pgMask_7)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_endsBeforeUpper_T_42 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_pte_ppn 
            << 0xcU) & (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_pgMask_7)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_endsBeforeUpper_T_42 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_pte_ppn 
            << 0xcU) & (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_pgMask_7)));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__565(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__565\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_he4ec8b35__0;
    VlWide<3>/*95:0*/ __Vtemp_h9b5cdd45__0;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT___pmpHomogeneous_endsBeforeUpper_T_42 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_pte_ppn 
            << 0xcU) & (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pmpHomogeneous_pgMask_7)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshr_insertOH_T_6 
        = (0x7fU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshr_insertOH_T_3) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___mshr_insertOH_T_3) 
                       << 2U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__requestAIO_0_0 
        = ((0U == ((IData)(vlSelf->__VdfgTmp_h66bcfe56__0)
                    ? (7U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiReqReg_addr) 
                             >> 4U)) : 1U)) | ((0U 
                                                == 
                                                ((0x3eU 
                                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_5) 
                                                     >> 1U)) 
                                                 | (1U 
                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__asource__DOT__monitor__DOT___GEN_5)))) 
                                               | ((0xbU 
                                                   == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT____VdfgTmp_hce63d9de__0)) 
                                                  | ((3U 
                                                      == 
                                                      ((IData)(vlSelf->__VdfgTmp_h66bcfe56__0)
                                                        ? 
                                                       (0xfU 
                                                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiReqReg_addr) 
                                                           >> 3U))
                                                        : 2U)) 
                                                     | ((1U 
                                                         == 
                                                         ((IData)(vlSelf->__VdfgTmp_h66bcfe56__0)
                                                           ? 
                                                          (3U 
                                                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiReqReg_addr) 
                                                              >> 5U))
                                                           : 0U)) 
                                                        | ((IData)(vlSelf->__VdfgTmp_h66bcfe56__0) 
                                                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiReqReg_addr) 
                                                              >> 6U)))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT__requestAIO_0_1 
        = ((0U == ((0x3eU & (8U ^ (((IData)(vlSelf->__VdfgTmp_h66bcfe56__0)
                                     ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__dtm__DOT__dmiReqReg_addr) 
                                        >> 2U) : 4U) 
                                   << 1U))) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmOuter__DOT____VdfgTmp_hcefbf2e3__0))) 
           | (0xaU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmOuter__DOT__dmiXbar__DOT____VdfgTmp_hce63d9de__0)));
    __Vtemp_he4ec8b35__0[2U] = ((0x3c0U & ((IData)(
                                                   ((((QData)((IData)(
                                                                      (0xfU 
                                                                       & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_15__DOT__ram_ext__DOT__Memory
                                                                       [0U]))) 
                                                      << 0x3cU) 
                                                     | (((QData)((IData)(
                                                                         (0xfU 
                                                                          & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_14__DOT__ram_ext__DOT__Memory
                                                                          [0U]))) 
                                                         << 0x38U) 
                                                        | (((QData)((IData)(
                                                                            (0xfU 
                                                                             & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_13__DOT__ram_ext__DOT__Memory
                                                                             [0U]))) 
                                                            << 0x34U) 
                                                           | (((QData)((IData)(
                                                                               (0xfU 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_12__DOT__ram_ext__DOT__Memory
                                                                                [0U]))) 
                                                               << 0x30U) 
                                                              | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_11__DOT___ram_ext_R0_data)))) 
                                                                  << 0x2cU) 
                                                                 | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_10__DOT___ram_ext_R0_data)))) 
                                                                     << 0x28U) 
                                                                    | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT___ram_ext_R0_data)))) 
                                                                        << 0x24U) 
                                                                       | (((QData)((IData)(
                                                                                (0xfU 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT___ram_ext_R0_data)))) 
                                                                           << 0x20U) 
                                                                          | (QData)((IData)(
                                                                                (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_7__DOT___ram_ext_R0_data) 
                                                                                << 0x1cU) 
                                                                                | ((0xf000000U 
                                                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_6__DOT___ram_ext_R0_data) 
                                                                                << 0x18U)) 
                                                                                | ((0xf00000U 
                                                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_5__DOT___ram_ext_R0_data) 
                                                                                << 0x14U)) 
                                                                                | ((0xf0000U 
                                                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_4__DOT___ram_ext_R0_data) 
                                                                                << 0x10U)) 
                                                                                | ((0xf000U 
                                                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT___ram_ext_R0_data) 
                                                                                << 0xcU)) 
                                                                                | ((0xf00U 
                                                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT___ram_ext_R0_data) 
                                                                                << 8U)) 
                                                                                | ((0xf0U 
                                                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT___ram_ext_R0_data) 
                                                                                << 4U)) 
                                                                                | (0xfU 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue__DOT___ram_ext_R0_data))))))))))))))))))) 
                                                    >> 
                                                    (0x3cU 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT___ram_ext_R0_data[0U] 
                                                        << 2U)))) 
                                           << 6U)) 
                                | (0x3fU & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT___ram_ext_R0_data[2U]));
    __Vtemp_h9b5cdd45__0[2U] = ((0x8000U & ((((0x8000U 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_15__DOT__ram_ext__DOT__Memory
                                                  [0U] 
                                                  << 6U)) 
                                              | ((0x4000U 
                                                  & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_14__DOT__ram_ext__DOT__Memory
                                                     [0U] 
                                                     << 5U)) 
                                                 | ((0x2000U 
                                                     & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_13__DOT__ram_ext__DOT__Memory
                                                        [0U] 
                                                        << 4U)) 
                                                    | ((0x1000U 
                                                        & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_12__DOT__ram_ext__DOT__Memory
                                                           [0U] 
                                                           << 3U)) 
                                                       | ((0x800U 
                                                           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_11__DOT___ram_ext_R0_data) 
                                                              << 2U)) 
                                                          | ((0x400U 
                                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_10__DOT___ram_ext_R0_data) 
                                                                 << 1U)) 
                                                             | ((0x200U 
                                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT___ram_ext_R0_data)) 
                                                                | ((0x100U 
                                                                    & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT___ram_ext_R0_data) 
                                                                       >> 1U)) 
                                                                   | ((0x80U 
                                                                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_7__DOT___ram_ext_R0_data) 
                                                                          >> 2U)) 
                                                                      | ((0x40U 
                                                                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_6__DOT___ram_ext_R0_data) 
                                                                             >> 3U)) 
                                                                         | ((0x20U 
                                                                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_5__DOT___ram_ext_R0_data) 
                                                                                >> 4U)) 
                                                                            | ((0x10U 
                                                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_4__DOT___ram_ext_R0_data) 
                                                                                >> 5U)) 
                                                                               | ((8U 
                                                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT___ram_ext_R0_data) 
                                                                                >> 6U)) 
                                                                                | ((4U 
                                                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT___ram_ext_R0_data) 
                                                                                >> 7U)) 
                                                                                | ((2U 
                                                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT___ram_ext_R0_data) 
                                                                                >> 8U)) 
                                                                                | (1U 
                                                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue__DOT___ram_ext_R0_data) 
                                                                                >> 9U))))))))))))))))) 
                                             >> (0xfU 
                                                 & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT___ram_ext_R0_data[0U])) 
                                            << 0xfU)) 
                                | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT___axi4yank_auto_in_r_bits_echo_tl_state_source) 
                                    << 0xaU) | __Vtemp_he4ec8b35__0[2U]));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT____Vcellinp__ram_ext__W0_data[0U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT___ram_ext_R0_data[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT____Vcellinp__ram_ext__W0_data[1U] 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT___ram_ext_R0_data[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT____Vcellinp__ram_ext__W0_data[2U] 
        = ((0x10000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT___ram_ext_R0_data[2U] 
                        << 0xaU)) | __Vtemp_h9b5cdd45__0[2U]);
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__566(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__566\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___GEN_2 
        = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_55) 
             << 2U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_48) 
                        << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_41))) 
           | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_27) 
               << 2U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_20) 
                          << 1U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_13))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT____VdfgTmp_hd595c938__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_55) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_48) 
              | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_41) 
                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_34) 
                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_27) 
                       | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_20) 
                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_13) 
                             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__directory__DOT___hits_T_6))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT___a_io_deq_ready_T_3 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a_last)) 
                 | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT___buffer_auto_out_d_ready) 
                    & ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__counter)) 
                       | (0U == ((1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT___error_auto_in_d_bits_opcode))
                                  ? (0x1ffU & (~ (0xffffffU 
                                                  & (((IData)(0xfffU) 
                                                      << 
                                                      (0xfU 
                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__error__DOT__a__DOT__ram_ext__DOT__Memory
                                                          [0U][0U] 
                                                          >> 6U))) 
                                                     >> 3U))))
                                  : 0U))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT___buffer_auto_out_d_ready) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT___error_auto_in_d_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT___T_1051 
        = ((6U != (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___wrapped_error_device_auto_buffer_in_d_valid) 
              & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__wrapped_error_device__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_1042 
        = ((6U != (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
                   [0U][0U])) & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___coupler_to_l2_ctrl_auto_tl_in_d_valid) 
                                 & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT___T_1108 
        = ((6U != (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_pbus_auto_bus_xing_in_d_valid) 
              & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__monitor__DOT__d_first_counter_1))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__567(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__567\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____VdfgTmp_hb2ac80b3__0 
        = (0U == ((6U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                         >> 0x11U)) | (1U & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                                                >> 0xfU)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____VdfgTmp_he0ca657a__0 
        = ((4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                  >> 0xdU)) | ((2U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                                      >> 0xcU)) | (1U 
                                                   & (~ 
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                                                       >> 8U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____VdfgTmp_h3e01230f__0 
        = ((4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                  >> 0xdU)) | ((2U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                                          >> 0xdU)) 
                                      << 1U)) | (1U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                                                    >> 8U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____VdfgTmp_hfcd9b97c__0 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____VdfgTmp_h21b3dc53__0)) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_debug))) 
                    & (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____VdfgTmp_h79f1e64e__0 
        = ((2U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                  >> 7U)) | (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                                   >> 4U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_legal_address 
        = ((3U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn) 
           | ((0x2010U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn) 
              | ((4U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn) 
                 | ((0x54000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn) 
                    | ((3U == (0x3fffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                                          >> 0xeU))) 
                       | ((0x200U == (0xffffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                                                   >> 4U))) 
                          | ((0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn) 
                             | ((1U == (0xffffffU & 
                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                                         >> 4U))) | 
                                ((0x100U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn) 
                                 | ((0x110U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn) 
                                    | ((8U == (0xfffU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                                                  >> 0x10U))) 
                                       | (3U == (0x7ffU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                                                    >> 0x11U))))))))))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__568(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__568\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h569422bd__0 
        = ((0x1ffffe00U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                           << 9U)) | (0x1ffU & (IData)(
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                                        >> 3U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____VdfgTmp_hb2ac80b3__0 
        = (0U == ((6U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                         >> 0x11U)) | (1U & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                                                >> 0xfU)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____VdfgTmp_he0ca657a__0 
        = ((4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                  >> 0xdU)) | ((2U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                                      >> 0xcU)) | (1U 
                                                   & (~ 
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                                                       >> 8U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____VdfgTmp_h3e01230f__0 
        = ((4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                  >> 0xdU)) | ((2U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                                          >> 0xdU)) 
                                      << 1U)) | (1U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                                                    >> 8U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____VdfgTmp_hfcd9b97c__0 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____VdfgTmp_h21b3dc53__0)) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_debug))) 
                    & (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____VdfgTmp_h79f1e64e__0 
        = ((2U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                  >> 7U)) | (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                                   >> 4U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_legal_address 
        = ((3U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn) 
           | ((0x2010U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn) 
              | ((4U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn) 
                 | ((0x54000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn) 
                    | ((3U == (0x3fffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                                          >> 0xeU))) 
                       | ((0x200U == (0xffffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                                                   >> 4U))) 
                          | ((0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn) 
                             | ((1U == (0xffffffU & 
                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                                         >> 4U))) | 
                                ((0x100U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn) 
                                 | ((0x110U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn) 
                                    | ((8U == (0xfffU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                                                  >> 0x10U))) 
                                       | (3U == (0x7ffU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                                                    >> 0x11U))))))))))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__569(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__569\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h569422bd__0 
        = ((0x1ffffe00U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                           << 9U)) | (0x1ffU & (IData)(
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                                        >> 3U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____VdfgTmp_hb2ac80b3__0 
        = (0U == ((6U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                         >> 0x11U)) | (1U & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                                                >> 0xfU)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____VdfgTmp_he0ca657a__0 
        = ((4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                  >> 0xdU)) | ((2U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                                      >> 0xcU)) | (1U 
                                                   & (~ 
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                                                       >> 8U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____VdfgTmp_h3e01230f__0 
        = ((4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                  >> 0xdU)) | ((2U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                                          >> 0xdU)) 
                                      << 1U)) | (1U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                                                    >> 8U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____VdfgTmp_hfcd9b97c__0 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____VdfgTmp_h21b3dc53__0)) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_debug))) 
                    & (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____VdfgTmp_h79f1e64e__0 
        = ((2U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                  >> 7U)) | (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                                   >> 4U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_legal_address 
        = ((3U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn) 
           | ((0x2010U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn) 
              | ((4U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn) 
                 | ((0x54000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn) 
                    | ((3U == (0x3fffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                                          >> 0xeU))) 
                       | ((0x200U == (0xffffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                                                   >> 4U))) 
                          | ((0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn) 
                             | ((1U == (0xffffffU & 
                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                                         >> 4U))) | 
                                ((0x100U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn) 
                                 | ((0x110U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn) 
                                    | ((8U == (0xfffU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                                                  >> 0x10U))) 
                                       | (3U == (0x7ffU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                                                    >> 0x11U))))))))))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__570(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__570\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h569422bd__0 
        = ((0x1ffffe00U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                           << 9U)) | (0x1ffU & (IData)(
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                                        >> 3U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____VdfgTmp_hb2ac80b3__0 
        = (0U == ((6U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                         >> 0x11U)) | (1U & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                                                >> 0xfU)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____VdfgTmp_he0ca657a__0 
        = ((4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                  >> 0xdU)) | ((2U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                                      >> 0xcU)) | (1U 
                                                   & (~ 
                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                                                       >> 8U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____VdfgTmp_h3e01230f__0 
        = ((4U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                  >> 0xdU)) | ((2U & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                                          >> 0xdU)) 
                                      << 1U)) | (1U 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                                                    >> 8U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____VdfgTmp_hfcd9b97c__0 
        = (1U & (~ ((~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____VdfgTmp_h21b3dc53__0)) 
                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_debug))) 
                    & (0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____VdfgTmp_h79f1e64e__0 
        = ((2U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                  >> 7U)) | (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                                   >> 4U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_legal_address 
        = ((3U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn) 
           | ((0x2010U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn) 
              | ((4U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn) 
                 | ((0x54000U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn) 
                    | ((3U == (0x3fffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                                          >> 0xeU))) 
                       | ((0x200U == (0xffffffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                                                   >> 4U))) 
                          | ((0U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn) 
                             | ((1U == (0xffffffU & 
                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                                         >> 4U))) | 
                                ((0x100U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn) 
                                 | ((0x110U == vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn) 
                                    | ((8U == (0xfffU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                                                  >> 0x10U))) 
                                       | (3U == (0x7ffU 
                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                                                    >> 0x11U))))))))))))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__571(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__571\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_pmp__DOT____VdfgTmp_h569422bd__0 
        = ((0x1ffffe00U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_mpu_ppn 
                           << 9U)) | (0x1ffU & (IData)(
                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                                        >> 3U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_1071 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___coupler_to_plic_auto_tl_in_d_valid) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__d_first_counter_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_opcode 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_uncached)
            ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_write)
                ? ((0x11U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd))
                    ? 1U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_resp_bits_has_data)
                             ? (((0xfU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd)) 
                                 | ((0xeU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd)) 
                                    | ((0xdU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd)) 
                                       | ((0xcU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd)) 
                                          | (8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd))))))
                                 ? 2U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____VdfgTmp_h2bcb17d6__0)
                                          ? 3U : 0U))
                             : 0U)) : 4U) : 6U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____VdfgTmp_h7acce6ee__0 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_write)) 
                 | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_resp_bits_has_data)) 
                    | (0x11U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_valid_likely 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_valid) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_write)) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_held));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_readwrite 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_resp_bits_has_data) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_write));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____VdfgTmp_ha72e8051__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_write) 
           | ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd)) 
              | (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_opcode 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_uncached)
            ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_write)
                ? ((0x11U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd))
                    ? 1U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_resp_bits_has_data)
                             ? (((0xfU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd)) 
                                 | ((0xeU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd)) 
                                    | ((0xdU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd)) 
                                       | ((0xcU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd)) 
                                          | (8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd))))))
                                 ? 2U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____VdfgTmp_h2bcb17d6__0)
                                          ? 3U : 0U))
                             : 0U)) : 4U) : 6U);
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__572(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__572\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____VdfgTmp_h7acce6ee__0 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_write)) 
                 | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_resp_bits_has_data)) 
                    | (0x11U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_valid_likely 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_valid) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_write)) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_held));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_readwrite 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_resp_bits_has_data) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_write));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____VdfgTmp_ha72e8051__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_write) 
           | ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd)) 
              | (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_opcode 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_uncached)
            ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_write)
                ? ((0x11U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd))
                    ? 1U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_resp_bits_has_data)
                             ? (((0xfU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd)) 
                                 | ((0xeU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd)) 
                                    | ((0xdU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd)) 
                                       | ((0xcU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd)) 
                                          | (8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd))))))
                                 ? 2U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____VdfgTmp_h2bcb17d6__0)
                                          ? 3U : 0U))
                             : 0U)) : 4U) : 6U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____VdfgTmp_h7acce6ee__0 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_write)) 
                 | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_resp_bits_has_data)) 
                    | (0x11U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_valid_likely 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_valid) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_write)) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_held));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_readwrite 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_resp_bits_has_data) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_write));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____VdfgTmp_ha72e8051__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_write) 
           | ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd)) 
              | (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__573(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__573\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT___dcache_auto_out_a_bits_opcode 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_uncached)
            ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_write)
                ? ((0x11U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd))
                    ? 1U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_resp_bits_has_data)
                             ? (((0xfU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd)) 
                                 | ((0xeU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd)) 
                                    | ((0xdU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd)) 
                                       | ((0xcU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd)) 
                                          | (8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd))))))
                                 ? 2U : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____VdfgTmp_h2bcb17d6__0)
                                          ? 3U : 0U))
                             : 0U)) : 4U) : 6U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____VdfgTmp_h7acce6ee__0 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_write)) 
                 | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_resp_bits_has_data)) 
                    | (0x11U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_valid_likely 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_valid) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_write)) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__pstore1_held));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_readwrite 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_resp_bits_has_data) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_write));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____VdfgTmp_ha72e8051__0 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_write) 
           | ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd)) 
              | (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_cmd))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT___T_1042 
        = ((6U != (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___coupler_to_prci_ctrl_auto_tl_in_d_valid) 
              & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__latch 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___buffer_auto_out_d_ready) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__beatsLeft)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT___T_1508 
        = ((6U != (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___buffer_auto_in_d_valid) 
              & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__574(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__574\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hbd49b025__0;
    VlWide<3>/*95:0*/ __Vtemp_h20dd0807__0;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__out_1_ready 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___buffer_auto_in_a_ready) 
           & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__beatsLeft))
               ? (2U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_s_0_state))
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__state_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT____VdfgTmp_h33160116__0 
        = (3U & ((- (IData)((1U & (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
                                      >> 0x10U))))) 
                 | (- (IData)((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_bits_address 
                                     >> 0x10U))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__old_gennum1 
        = (7U & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__gennum))
                  ? (~ (0x3ffU & (((IData)(0x3fU) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                  >> 3U))) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT__gennum) 
                                              - (IData)(1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT__do_enq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT___axi4xbar_auto_out_b_ready) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT___axi4buf_auto_in_b_valid) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT___ram_ext_R0_data) 
                 >> 6U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_70 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT___axi4buf_auto_in_b_valid) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT___ram_ext_R0_data) 
                  >> 6U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT___axi4xbar_auto_out_b_ready)));
    __Vtemp_hbd49b025__0[0U] = (IData)((((QData)((IData)(
                                                         (0x1fU 
                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_11__DOT___ram_ext_R0_data[2U] 
                                                             >> 0xaU)))) 
                                         << 0x37U) 
                                        | (((QData)((IData)(
                                                            (0x1fU 
                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_10__DOT___ram_ext_R0_data[2U] 
                                                                >> 0xaU)))) 
                                            << 0x32U) 
                                           | (((QData)((IData)(
                                                               (0x1fU 
                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_9__DOT___ram_ext_R0_data[2U] 
                                                                   >> 0xaU)))) 
                                               << 0x2dU) 
                                              | (((QData)((IData)(
                                                                  (0x1fU 
                                                                   & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_8__DOT___ram_ext_R0_data[2U] 
                                                                      >> 0xaU)))) 
                                                  << 0x28U) 
                                                 | (((QData)((IData)(
                                                                     (0x1fU 
                                                                      & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_7__DOT___ram_ext_R0_data[2U] 
                                                                         >> 0xaU)))) 
                                                     << 0x23U) 
                                                    | (((QData)((IData)(
                                                                        (0x1fU 
                                                                         & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_6__DOT___ram_ext_R0_data[2U] 
                                                                            >> 0xaU)))) 
                                                        << 0x1eU) 
                                                       | (QData)((IData)(
                                                                         ((0x3e000000U 
                                                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_5__DOT___ram_ext_R0_data[2U] 
                                                                              << 0xfU)) 
                                                                          | ((0x1f00000U 
                                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT___ram_ext_R0_data[2U] 
                                                                                << 0xaU)) 
                                                                             | ((0xf8000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT___ram_ext_R0_data[2U] 
                                                                                << 5U)) 
                                                                                | ((0x7c00U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT___ram_ext_R0_data[2U]) 
                                                                                | ((0x3e0U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT___ram_ext_R0_data[2U] 
                                                                                >> 5U)) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT___ram_ext_R0_data[2U] 
                                                                                >> 0xaU))))))))))))))));
    __Vtemp_hbd49b025__0[1U] = ((0xf0000000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_12__DOT___ram_ext_R0_data[2U] 
                                                << 0x12U)) 
                                | (IData)(((((QData)((IData)(
                                                             (0x1fU 
                                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_11__DOT___ram_ext_R0_data[2U] 
                                                                 >> 0xaU)))) 
                                             << 0x37U) 
                                            | (((QData)((IData)(
                                                                (0x1fU 
                                                                 & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_10__DOT___ram_ext_R0_data[2U] 
                                                                    >> 0xaU)))) 
                                                << 0x32U) 
                                               | (((QData)((IData)(
                                                                   (0x1fU 
                                                                    & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_9__DOT___ram_ext_R0_data[2U] 
                                                                       >> 0xaU)))) 
                                                   << 0x2dU) 
                                                  | (((QData)((IData)(
                                                                      (0x1fU 
                                                                       & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_8__DOT___ram_ext_R0_data[2U] 
                                                                          >> 0xaU)))) 
                                                      << 0x28U) 
                                                     | (((QData)((IData)(
                                                                         (0x1fU 
                                                                          & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_7__DOT___ram_ext_R0_data[2U] 
                                                                             >> 0xaU)))) 
                                                         << 0x23U) 
                                                        | (((QData)((IData)(
                                                                            (0x1fU 
                                                                             & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_6__DOT___ram_ext_R0_data[2U] 
                                                                                >> 0xaU)))) 
                                                            << 0x1eU) 
                                                           | (QData)((IData)(
                                                                             ((0x3e000000U 
                                                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_5__DOT___ram_ext_R0_data[2U] 
                                                                                << 0xfU)) 
                                                                              | ((0x1f00000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_4__DOT___ram_ext_R0_data[2U] 
                                                                                << 0xaU)) 
                                                                                | ((0xf8000U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_3__DOT___ram_ext_R0_data[2U] 
                                                                                << 5U)) 
                                                                                | ((0x7c00U 
                                                                                & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_2__DOT___ram_ext_R0_data[2U]) 
                                                                                | ((0x3e0U 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_1__DOT___ram_ext_R0_data[2U] 
                                                                                >> 5U)) 
                                                                                | (0x1fU 
                                                                                & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_0__DOT___ram_ext_R0_data[2U] 
                                                                                >> 0xaU))))))))))))))) 
                                           >> 0x20U)));
    __Vtemp_h20dd0807__0[0U] = __Vtemp_hbd49b025__0[0U];
    __Vtemp_h20dd0807__0[1U] = __Vtemp_hbd49b025__0[1U];
    __Vtemp_h20dd0807__0[2U] = ((0xf800U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_15__DOT___ram_ext_R0_data[2U] 
                                            << 1U)) 
                                | ((0x7c0U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_14__DOT___ram_ext_R0_data[2U] 
                                              >> 4U)) 
                                   | ((0x3eU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_13__DOT___ram_ext_R0_data[2U] 
                                                >> 9U)) 
                                      | (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__qs_queue_12__DOT___ram_ext_R0_data[2U] 
                                               >> 0xeU)))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT____VdfgTmp_h318af565__0) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_port_named_mmio_port_axi4_auto_tl_in_d_valid 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__locked;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_port_named_mmio_port_axi4_auto_tl_in_d_bits_source 
            = (0x1fU & ((0x4fU >= (0x7fU & ((IData)(5U) 
                                            * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__deq_id))))
                         ? (((0U == (0x1fU & ((IData)(5U) 
                                              * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__deq_id))))
                              ? 0U : (__Vtemp_h20dd0807__0[
                                      (((IData)(4U) 
                                        + (0x7fU & 
                                           ((IData)(5U) 
                                            * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__deq_id)))) 
                                       >> 5U)] << ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & ((IData)(5U) 
                                                       * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__deq_id)))))) 
                            | (__Vtemp_h20dd0807__0[
                               (3U & (((IData)(5U) 
                                       * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__deq_id)) 
                                      >> 5U))] >> (0x1fU 
                                                   & ((IData)(5U) 
                                                      * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__deq_id)))))
                         : 0U));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_port_named_mmio_port_axi4_auto_tl_in_d_valid 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT___axi4index_auto_in_b_valid;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT___coupler_to_port_named_mmio_port_axi4_auto_tl_in_d_bits_source 
            = (0x1fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT___axi4index_auto_in_b_bits_echo_tl_state_source));
    }
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__575(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__575\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__d_sel_shiftAmount 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT____VdfgTmp_h318af565__0)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT___axi4index_auto_in_r_bits_id)
            : ((0x10U & ((((0x8000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_31__DOT__ram_ext__DOT__Memory
                                       [0U] << 6U)) 
                           | ((0x4000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_30__DOT__ram_ext__DOT__Memory
                                          [0U] << 5U)) 
                              | ((0x2000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_29__DOT__ram_ext__DOT__Memory
                                             [0U] << 4U)) 
                                 | ((0x1000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_28__DOT__ram_ext__DOT__Memory
                                                [0U] 
                                                << 3U)) 
                                    | ((0x800U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_27__DOT___ram_ext_R0_data) 
                                                  << 2U)) 
                                       | ((0x400U & 
                                           ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_26__DOT___ram_ext_R0_data) 
                                            << 1U)) 
                                          | ((0x200U 
                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_25__DOT___ram_ext_R0_data)) 
                                             | ((0x100U 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_24__DOT___ram_ext_R0_data) 
                                                    >> 1U)) 
                                                | ((0x80U 
                                                    & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_23__DOT___ram_ext_R0_data) 
                                                       >> 2U)) 
                                                   | ((0x40U 
                                                       & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_22__DOT___ram_ext_R0_data) 
                                                          >> 3U)) 
                                                      | ((0x20U 
                                                          & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_21__DOT___ram_ext_R0_data) 
                                                             >> 4U)) 
                                                         | ((0x10U 
                                                             & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_20__DOT___ram_ext_R0_data) 
                                                                >> 5U)) 
                                                            | ((8U 
                                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_19__DOT___ram_ext_R0_data) 
                                                                   >> 6U)) 
                                                               | ((4U 
                                                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_18__DOT___ram_ext_R0_data) 
                                                                      >> 7U)) 
                                                                  | ((2U 
                                                                      & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_17__DOT___ram_ext_R0_data) 
                                                                         >> 8U)) 
                                                                     | (1U 
                                                                        & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_16__DOT___ram_ext_R0_data) 
                                                                           >> 9U))))))))))))))))) 
                          >> (0xfU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT___ram_ext_R0_data))) 
                         << 4U)) | (0xfU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__bundleIn_0_b_deq__DOT___ram_ext_R0_data))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__576(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__576\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_d_denied 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_first)
            ? (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT___axi4index_auto_in_r_bits_resp))
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_denied_r));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_0_a_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___buffer_auto_out_a_valid) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__requestAIO_0_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_7_a_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___buffer_auto_out_a_valid) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__requestAIO_0_7));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT___fragmenter_auto_out_a_bits_size 
        = ((4U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___repeater_io_deq_bits_size))
            ? 3U : (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___repeater_io_deq_bits_size)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0 
        = (IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___repeater_io_deq_bits_size) 
                    >> 2U) | (3U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___repeater_io_deq_bits_size)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__old_gennum1 
        = (7U & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__gennum))
                  ? (~ (0x3ffU & (((IData)(0x3fU) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                  >> 3U))) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__gennum) 
                                              - (IData)(1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_cbus_auto_coupler_to_plic_fragmenter_out_a_bits_size 
        = ((4U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_size))
            ? 3U : (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_size)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0 
        = (IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_size) 
                    >> 2U) | (3U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_size)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__old_gennum1 
        = (7U & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__gennum))
                  ? (~ (0x3ffU & (((IData)(0x3fU) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                  >> 3U))) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__gennum) 
                                              - (IData)(1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_1_a_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___buffer_auto_out_a_valid) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__requestAIO_0_1));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__577(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__577\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_3_a_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___buffer_auto_out_a_valid) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__requestAIO_0_3));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0 
        = (IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_size) 
                    >> 2U) | (3U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_size)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___bootROMDomainWrapper_auto_bootrom_in_d_bits_size 
        = ((4U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_size))
            ? 3U : (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_size)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT____VdfgTmp_ha426dc96__0 
        = (7U & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__gennum))
                  ? (~ (0x3ffU & (((IData)(0x3fU) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                  >> 3U))) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT__gennum) 
                                              - (IData)(1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_4_a_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___buffer_auto_out_a_valid) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__requestAIO_0_4));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__monitor__DOT____VdfgTmp_hd3fe48b5__0 
        = (IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_size) 
                    >> 2U) | (3U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_size)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_auto_in_d_bits_size 
        = ((4U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_size))
            ? 3U : (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_size)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT____VdfgTmp_ha426dc96__0 
        = (7U & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__gennum))
                  ? (~ (0x3ffU & (((IData)(0x3fU) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                  >> 3U))) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__gennum) 
                                              - (IData)(1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__requestAIO_0_2 
        = ((0U == ((0x40U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                             >> 8U)) | ((0x30U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                  >> 5U)) 
                                        | ((8U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                  >> 1U)) 
                                           | ((4U & 
                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                << 2U)) 
                                              | (3U 
                                                 & (2U 
                                                    ^ 
                                                    ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                      << 3U) 
                                                     | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                                                        >> 0x1dU))))))))) 
           | (0U == ((0x40U & (0x40U ^ ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                         << 0x18U) 
                                        | (0xffffc0U 
                                           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                              >> 8U))))) 
                     | ((0x30U & (0x20U ^ ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                            << 0x1bU) 
                                           | (0x7fffff0U 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                 >> 5U))))) 
                        | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT____VdfgTmp_hc9292b87__0)))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__578(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__578\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__requestAIO_0_5 
        = (0U == ((0x40U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                            >> 8U)) | ((0x30U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                                                 >> 5U)) 
                                       | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT____VdfgTmp_hc9292b87__0))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__monitor_1__DOT____VdfgTmp_hd3fe48b5__0 
        = (IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_size) 
                    >> 2U) | (3U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_size)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tlDM_auto_dmInner_dmInner_tl_in_d_bits_size 
        = ((4U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_size))
            ? 3U : (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_size)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT____VdfgTmp_ha426dc96__0 
        = (7U & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__gennum))
                  ? (~ (0x3ffU & (((IData)(0x3fU) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT___repeater_io_deq_bits_size)) 
                                  >> 3U))) : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__gennum) 
                                              - (IData)(1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___out_xbar_auto_out_6_a_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT___buffer_auto_out_a_valid) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__out_xbar__DOT__requestAIO_0_6));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__d_replace 
        = ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__d_first_counter)) 
           & ((0U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__d_cam_sel_match_0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__d_drop 
        = ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__d_first_counter)) 
           & ((1U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__d_cam_sel_match_0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__latch_2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_in_c_ready) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__beatsLeft_2)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkC_io_set 
        = (0x3ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT____Vcellinp__io_bs_adr_q__io_enq_bits_noop)
                      ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__io_set_r)
                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT___ram_ext_R0_data[0U] 
                          << 0xcU) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__c__DOT___ram_ext_R0_data[0U] 
                                      >> 0x14U))));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__579(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__579\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_h219d0c40__0;
    VlWide<6>/*191:0*/ __Vtemp_hea72af99__0;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rviCall_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___taken_taken_T_9) 
           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___icache_io_resp_bits_data 
              >> 7U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rvcJALR_1 
        = ((~ (IData)((0U != (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                       >> 0x12U))))) 
           & (0x26U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___GEN_3)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rvcJR_1 
        = ((~ (IData)((0U != (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                       >> 0x12U))))) 
           & (0x22U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___GEN_3)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rvcBranch_1 
        = ((0x19U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___GEN_2)) 
           | (0x1dU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___GEN_2)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rvcJALR 
        = ((~ (IData)((0U != (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                       >> 2U))))) & 
           (0x26U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___GEN_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rvcJR 
        = ((~ (IData)((0U != (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                       >> 2U))))) & 
           (0x22U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___GEN_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_predictJump 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_prevRVI) 
            & (0x6fU == (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_partial_insn)))) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_valid) 
              & (0x15U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___GEN_0))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rvcBranch 
        = ((0x19U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___GEN_0)) 
           | (0x1dU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT___GEN_0)));
    __Vtemp_h219d0c40__0[0U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_data 
                                 << 0x10U) | (0xffffU 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_data));
    __Vtemp_h219d0c40__0[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_data;
    __Vtemp_h219d0c40__0[2U] = (IData)((((QData)((IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_data 
                                                          >> 0x10U))) 
                                         << 0x30U) 
                                        | (((QData)((IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_data 
                                                             >> 0x10U))) 
                                            << 0x20U) 
                                           | (((QData)((IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_data 
                                                                >> 0x10U))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_data 
                                                                 >> 0x10U)))))));
    __Vtemp_h219d0c40__0[3U] = (IData)(((((QData)((IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_data 
                                                           >> 0x10U))) 
                                          << 0x30U) 
                                         | (((QData)((IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_data 
                                                              >> 0x10U))) 
                                             << 0x20U) 
                                            | (((QData)((IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_data 
                                                                 >> 0x10U))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_data 
                                                                  >> 0x10U)))))) 
                                        >> 0x20U));
    __Vtemp_h219d0c40__0[4U] = 0U;
    __Vtemp_h219d0c40__0[5U] = 0U;
    VL_SHIFTL_WWI(191,191,6, __Vtemp_hea72af99__0, __Vtemp_h219d0c40__0, 
                  (0x30U & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__nBufValid) 
                              - (IData)(2U)) - (1U 
                                                & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_pc 
                                                           >> 1U)))) 
                            << 4U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
        = ((__Vtemp_hea72af99__0[2U] & ((IData)(0xffffffffU) 
                                        << ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__nBufValid) 
                                            << 4U))) 
           | ((~ ((IData)(0xffffffffU) << ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__nBufValid) 
                                           << 4U))) 
              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__buf_data));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__580(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__580\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_h5ffaa85a__0;
    VlWide<6>/*191:0*/ __Vtemp_h771a45c6__0;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rviCall_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT___taken_taken_T_9) 
           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT___icache_io_resp_bits_data 
              >> 7U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rvcJALR_1 
        = ((~ (IData)((0U != (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                       >> 0x12U))))) 
           & (0x26U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT___GEN_3)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rvcJR_1 
        = ((~ (IData)((0U != (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                       >> 0x12U))))) 
           & (0x22U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT___GEN_3)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rvcBranch_1 
        = ((0x19U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT___GEN_2)) 
           | (0x1dU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT___GEN_2)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rvcJALR 
        = ((~ (IData)((0U != (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                       >> 2U))))) & 
           (0x26U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT___GEN_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rvcJR 
        = ((~ (IData)((0U != (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                       >> 2U))))) & 
           (0x22U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT___GEN_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_predictJump 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_prevRVI) 
            & (0x6fU == (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_partial_insn)))) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_valid) 
              & (0x15U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT___GEN_0))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rvcBranch 
        = ((0x19U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT___GEN_0)) 
           | (0x1dU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT___GEN_0)));
    __Vtemp_h5ffaa85a__0[0U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_data 
                                 << 0x10U) | (0xffffU 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_data));
    __Vtemp_h5ffaa85a__0[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_data;
    __Vtemp_h5ffaa85a__0[2U] = (IData)((((QData)((IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_data 
                                                          >> 0x10U))) 
                                         << 0x30U) 
                                        | (((QData)((IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_data 
                                                             >> 0x10U))) 
                                            << 0x20U) 
                                           | (((QData)((IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_data 
                                                                >> 0x10U))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_data 
                                                                 >> 0x10U)))))));
    __Vtemp_h5ffaa85a__0[3U] = (IData)(((((QData)((IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_data 
                                                           >> 0x10U))) 
                                          << 0x30U) 
                                         | (((QData)((IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_data 
                                                              >> 0x10U))) 
                                             << 0x20U) 
                                            | (((QData)((IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_data 
                                                                 >> 0x10U))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_data 
                                                                  >> 0x10U)))))) 
                                        >> 0x20U));
    __Vtemp_h5ffaa85a__0[4U] = 0U;
    __Vtemp_h5ffaa85a__0[5U] = 0U;
    VL_SHIFTL_WWI(191,191,6, __Vtemp_h771a45c6__0, __Vtemp_h5ffaa85a__0, 
                  (0x30U & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__nBufValid) 
                              - (IData)(2U)) - (1U 
                                                & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_pc 
                                                           >> 1U)))) 
                            << 4U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
        = ((__Vtemp_h771a45c6__0[2U] & ((IData)(0xffffffffU) 
                                        << ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__nBufValid) 
                                            << 4U))) 
           | ((~ ((IData)(0xffffffffU) << ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__nBufValid) 
                                           << 4U))) 
              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__buf_data));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__581(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__581\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_he83729fc__0;
    VlWide<6>/*191:0*/ __Vtemp_h7b3463db__0;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rviCall_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT___taken_taken_T_9) 
           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT___icache_io_resp_bits_data 
              >> 7U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rvcJALR_1 
        = ((~ (IData)((0U != (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                       >> 0x12U))))) 
           & (0x26U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT___GEN_3)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rvcJR_1 
        = ((~ (IData)((0U != (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                       >> 0x12U))))) 
           & (0x22U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT___GEN_3)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rvcBranch_1 
        = ((0x19U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT___GEN_2)) 
           | (0x1dU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT___GEN_2)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rvcJALR 
        = ((~ (IData)((0U != (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                       >> 2U))))) & 
           (0x26U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT___GEN_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rvcJR 
        = ((~ (IData)((0U != (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                       >> 2U))))) & 
           (0x22U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT___GEN_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_predictJump 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_prevRVI) 
            & (0x6fU == (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_partial_insn)))) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_valid) 
              & (0x15U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT___GEN_0))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rvcBranch 
        = ((0x19U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT___GEN_0)) 
           | (0x1dU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT___GEN_0)));
    __Vtemp_he83729fc__0[0U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_data 
                                 << 0x10U) | (0xffffU 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_data));
    __Vtemp_he83729fc__0[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_data;
    __Vtemp_he83729fc__0[2U] = (IData)((((QData)((IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_data 
                                                          >> 0x10U))) 
                                         << 0x30U) 
                                        | (((QData)((IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_data 
                                                             >> 0x10U))) 
                                            << 0x20U) 
                                           | (((QData)((IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_data 
                                                                >> 0x10U))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_data 
                                                                 >> 0x10U)))))));
    __Vtemp_he83729fc__0[3U] = (IData)(((((QData)((IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_data 
                                                           >> 0x10U))) 
                                          << 0x30U) 
                                         | (((QData)((IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_data 
                                                              >> 0x10U))) 
                                             << 0x20U) 
                                            | (((QData)((IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_data 
                                                                 >> 0x10U))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_data 
                                                                  >> 0x10U)))))) 
                                        >> 0x20U));
    __Vtemp_he83729fc__0[4U] = 0U;
    __Vtemp_he83729fc__0[5U] = 0U;
    VL_SHIFTL_WWI(191,191,6, __Vtemp_h7b3463db__0, __Vtemp_he83729fc__0, 
                  (0x30U & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__nBufValid) 
                              - (IData)(2U)) - (1U 
                                                & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_pc 
                                                           >> 1U)))) 
                            << 4U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
        = ((__Vtemp_h7b3463db__0[2U] & ((IData)(0xffffffffU) 
                                        << ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__nBufValid) 
                                            << 4U))) 
           | ((~ ((IData)(0xffffffffU) << ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__nBufValid) 
                                           << 4U))) 
              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__buf_data));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__582(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__582\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_h59da3a39__0;
    VlWide<6>/*191:0*/ __Vtemp_h4b92670b__0;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rviCall_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT___taken_taken_T_9) 
           & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT___icache_io_resp_bits_data 
              >> 7U));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rvcJALR_1 
        = ((~ (IData)((0U != (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                       >> 0x12U))))) 
           & (0x26U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT___GEN_3)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rvcJR_1 
        = ((~ (IData)((0U != (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                       >> 0x12U))))) 
           & (0x22U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT___GEN_3)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rvcBranch_1 
        = ((0x19U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT___GEN_2)) 
           | (0x1dU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT___GEN_2)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rvcJALR 
        = ((~ (IData)((0U != (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                       >> 2U))))) & 
           (0x26U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT___GEN_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rvcJR 
        = ((~ (IData)((0U != (0x1fU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT___icache_io_resp_bits_data 
                                       >> 2U))))) & 
           (0x22U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT___GEN_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_predictJump 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_prevRVI) 
            & (0x6fU == (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_partial_insn)))) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_valid) 
              & (0x15U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT___GEN_0))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_rvcBranch 
        = ((0x19U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT___GEN_0)) 
           | (0x1dU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT___GEN_0)));
    __Vtemp_h59da3a39__0[0U] = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_data 
                                 << 0x10U) | (0xffffU 
                                              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_data));
    __Vtemp_h59da3a39__0[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_data;
    __Vtemp_h59da3a39__0[2U] = (IData)((((QData)((IData)(
                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_data 
                                                          >> 0x10U))) 
                                         << 0x30U) 
                                        | (((QData)((IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_data 
                                                             >> 0x10U))) 
                                            << 0x20U) 
                                           | (((QData)((IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_data 
                                                                >> 0x10U))) 
                                               << 0x10U) 
                                              | (QData)((IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_data 
                                                                 >> 0x10U)))))));
    __Vtemp_h59da3a39__0[3U] = (IData)(((((QData)((IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_data 
                                                           >> 0x10U))) 
                                          << 0x30U) 
                                         | (((QData)((IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_data 
                                                              >> 0x10U))) 
                                             << 0x20U) 
                                            | (((QData)((IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_data 
                                                                 >> 0x10U))) 
                                                << 0x10U) 
                                               | (QData)((IData)(
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_data 
                                                                  >> 0x10U)))))) 
                                        >> 0x20U));
    __Vtemp_h59da3a39__0[4U] = 0U;
    __Vtemp_h59da3a39__0[5U] = 0U;
    VL_SHIFTL_WWI(191,191,6, __Vtemp_h4b92670b__0, __Vtemp_h59da3a39__0, 
                  (0x30U & ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__nBufValid) 
                              - (IData)(2U)) - (1U 
                                                & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_pc 
                                                           >> 1U)))) 
                            << 4U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT___ibuf_io_inst_0_bits_raw 
        = ((__Vtemp_h4b92670b__0[2U] & ((IData)(0xffffffffU) 
                                        << ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__nBufValid) 
                                            << 4U))) 
           | ((~ ((IData)(0xffffffffU) << ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__nBufValid) 
                                           << 4U))) 
              & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ibuf__DOT__buf_data));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__583(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__583\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__last_probe 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__probes_done) 
            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__probe_bit)) 
           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___abc_mshrs_0_io_schedule_bits_b_bits_clients));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__last_probe 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT__probes_done) 
            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__probe_bit)) 
           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___abc_mshrs_1_io_schedule_bits_b_bits_clients));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__last_probe 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT__probes_done) 
            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__probe_bit)) 
           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___abc_mshrs_2_io_schedule_bits_b_bits_clients));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__last_probe 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT__probes_done) 
            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__probe_bit)) 
           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___abc_mshrs_3_io_schedule_bits_b_bits_clients));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__last_probe 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT__probes_done) 
            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__probe_bit)) 
           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___abc_mshrs_4_io_schedule_bits_b_bits_clients));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__last_probe 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT__probes_done) 
            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__probe_bit)) 
           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___bc_mshr_io_schedule_bits_b_bits_clients));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__last_probe 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT__probes_done) 
            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT__probe_bit)) 
           == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___c_mshr_io_schedule_bits_b_bits_clients));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__beat 
        = ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__counter) 
               - (IData)(1U))) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__beats1));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sinkC_io_resp_bits_last 
        = ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__counter)) 
           | (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__beats1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT____VdfgTmp_haf55f92e__0 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__buf_block)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT____VdfgTmp_hb2b291e6__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__resp 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT____Vcellinp__io_bs_adr_q__io_enq_bits_noop)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__resp_r)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__raw_resp));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___abc_mshrs_4_io_schedule_bits_dir_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___abc_mshrs_4_io_schedule_bits_c_valid) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_4__DOT____VdfgTmp_hc07fd3a9__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___c_mshr_io_schedule_bits_dir_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___c_mshr_io_schedule_bits_c_valid) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__c_mshr__DOT____VdfgTmp_hc07fd3a9__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___bc_mshr_io_schedule_bits_dir_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___bc_mshr_io_schedule_bits_c_valid) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__bc_mshr__DOT____VdfgTmp_hc07fd3a9__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___abc_mshrs_3_io_schedule_bits_dir_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___abc_mshrs_3_io_schedule_bits_c_valid) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_3__DOT____VdfgTmp_hc07fd3a9__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___abc_mshrs_2_io_schedule_bits_dir_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___abc_mshrs_2_io_schedule_bits_c_valid) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_2__DOT____VdfgTmp_hc07fd3a9__0));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__584(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__584\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___abc_mshrs_1_io_schedule_bits_dir_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___abc_mshrs_1_io_schedule_bits_c_valid) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_1__DOT____VdfgTmp_hc07fd3a9__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___abc_mshrs_0_io_schedule_bits_dir_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___abc_mshrs_0_io_schedule_bits_c_valid) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__abc_mshrs_0__DOT____VdfgTmp_hc07fd3a9__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT__do_deq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_fbus_coupler_from_port_named_serial_tl_ctrl_auto_tl_out_a_valid) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_fbus_buffer_auto_in_a_ready));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_buffer__DOT__x1_a_q__DOT__do_enq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_fbus_buffer_auto_in_a_ready) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_fbus_coupler_from_port_named_serial_tl_ctrl_auto_tl_out_a_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT___same_cycle_resp_T_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_fbus_buffer_auto_out_a_valid) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT___same_cycle_resp_T_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_fbus_buffer_auto_out_a_valid) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_2_earlyValid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_fbus_buffer_auto_out_a_valid) 
           & (0x1800U == (0x3800U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U])));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_earlyValid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_fbus_buffer_auto_out_a_valid) 
           & (0x2000U == (0x3800U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U])));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_0_earlyValid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_fbus_buffer_auto_out_a_valid) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__requestAIO_0_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__latch 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___buffer_auto_in_a_ready) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__beatsLeft)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT___same_cycle_resp_T_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_auto_tl_master_clock_xing_out_a_valid) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_1__DOT__a_first_counter_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT___same_cycle_resp_T_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_auto_tl_master_clock_xing_out_a_valid) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_1__DOT__a_first_counter_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_2_earlyValid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_auto_tl_master_clock_xing_out_a_valid) 
           & (0x600U == (0xe00U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U])));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_1_earlyValid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_auto_tl_master_clock_xing_out_a_valid) 
           & (0x800U == (0xe00U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U])));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__latch 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___buffer_auto_in_a_ready) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__beatsLeft)));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__585(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__585\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT___same_cycle_resp_T_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_1_auto_tl_master_clock_xing_out_a_valid) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_2__DOT__a_first_counter_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT___same_cycle_resp_T_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_1_auto_tl_master_clock_xing_out_a_valid) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_2__DOT__a_first_counter_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_2_2_earlyValid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_1_auto_tl_master_clock_xing_out_a_valid) 
           & (0x600U == (0xe00U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U])));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_2_1_earlyValid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_1_auto_tl_master_clock_xing_out_a_valid) 
           & (0x800U == (0xe00U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U])));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_1_0_earlyValid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_auto_tl_master_clock_xing_out_a_valid) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__requestAIO_1_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_2_0_earlyValid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_1_auto_tl_master_clock_xing_out_a_valid) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__requestAIO_2_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__latch 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___buffer_auto_in_a_ready) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__beatsLeft)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT___same_cycle_resp_T_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_2_auto_tl_master_clock_xing_out_a_valid) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_3__DOT__a_first_counter_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_3__DOT___same_cycle_resp_T_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_2_auto_tl_master_clock_xing_out_a_valid) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_3__DOT__a_first_counter_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_3_2_earlyValid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_2_auto_tl_master_clock_xing_out_a_valid) 
           & (0x600U == (0xe00U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U])));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_3_1_earlyValid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_2_auto_tl_master_clock_xing_out_a_valid) 
           & (0x800U == (0xe00U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U])));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__latch 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT___buffer_auto_in_a_ready) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__tlMasterXbar__DOT__beatsLeft)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_4__DOT___same_cycle_resp_T_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_a_valid) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__monitor_4__DOT__a_first_counter_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_4__DOT___same_cycle_resp_T_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_a_valid) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__fixer__DOT__monitor_4__DOT__a_first_counter_1)));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__586(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__586\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_4_2_earlyValid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_a_valid) 
           & (0x600U == (0xe00U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U])));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_4_1_earlyValid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_a_valid) 
           & (0x800U == (0xe00U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U])));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_3_0_earlyValid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_2_auto_tl_master_clock_xing_out_a_valid) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__requestAIO_3_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__portsAOI_filtered_4_0_earlyValid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_a_valid) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__requestAIO_4_0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__do_enq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT___q_1_io_enq_ready) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_a_valid) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__toD)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT___same_cycle_resp_T_1 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_a_valid) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__out_1_earlyValid 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__toD)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_out_a_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_cmd_write_perms 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_cmd_write) 
           | ((5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_cmd)) 
              | (0x17U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_cmd))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_cmd_write_perms 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_cmd_write) 
           | ((5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_cmd)) 
              | (0x17U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_cmd))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_cmd_write_perms 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_cmd_write) 
           | ((5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_cmd)) 
              | (0x17U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_cmd))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_cmd_write_perms 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_cmd_write) 
           | ((5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_cmd)) 
              | (0x17U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_cmd))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_in_async__DOT__source__DOT__widx_incremented 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_in_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_in_async__DOT__source__DOT___widx_incremented_T_1)
            : 0U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_out_async__DOT__source__DOT__widx_incremented 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_out_async__DOT__source__DOT__sink_valid__DOT__io_out_source_valid_0__DOT__output_chain__DOT__sync_0)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_out_async__DOT__source__DOT___widx_incremented_T_1)
            : 0U);
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__587(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__587\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__goAbstract 
        = ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg)) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT___GEN_6)) 
              & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tlDM__DOT__dmInner__DOT__dmInner__DOT__ctrlStateReg))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_out_async__DOT__sink__DOT__ridx 
        = (0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_out_async__DOT__sink__DOT__ridx_incremented) 
                   ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_out_async__DOT__sink__DOT__ridx_incremented) 
                      >> 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_in_async__DOT__sink__DOT__ridx 
        = (0xfU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_in_async__DOT__sink__DOT__ridx_incremented) 
                   ^ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_in_async__DOT__sink__DOT__ridx_incremented) 
                      >> 1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___GEN_3 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT____VdfgTmp_h15b70dad__0) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___memLatencyMask_T_8));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___GEN_4 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT____VdfgTmp_h15b70dad__0) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___memLatencyMask_T_3));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___GEN_5 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT____VdfgTmp_h15b70dad__0) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___memLatencyMask_T_6));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___GEN_3 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT____VdfgTmp_h15b70dad__0) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___memLatencyMask_T_8));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___GEN_4 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT____VdfgTmp_h15b70dad__0) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___memLatencyMask_T_3));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___GEN_5 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT____VdfgTmp_h15b70dad__0) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___memLatencyMask_T_6));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___GEN_3 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT____VdfgTmp_h15b70dad__0) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___memLatencyMask_T_8));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___GEN_4 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT____VdfgTmp_h15b70dad__0) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___memLatencyMask_T_3));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___GEN_5 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT____VdfgTmp_h15b70dad__0) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___memLatencyMask_T_6));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___GEN_3 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT____VdfgTmp_h15b70dad__0) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___memLatencyMask_T_8));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___GEN_4 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT____VdfgTmp_h15b70dad__0) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___memLatencyMask_T_3));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___GEN_5 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT____VdfgTmp_h15b70dad__0) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT___memLatencyMask_T_6));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT___GEN_2 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT__used)) 
           & (1U | (0xfffeU & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT___GEN_1) 
                                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT___GEN_1) 
                                      << 8U))) << 1U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_l2_wrapper_auto_l2_ctl_in_d_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__maybe_full) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_oready));
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__588(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__588\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hc0dc8ef1__0;
    VlWide<3>/*95:0*/ __Vtemp_h535d5064__0;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT___T_3 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT___axi4buf_auto_out_aw_valid) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT___axi4buf_auto_out_w_valid) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT____VdfgTmp_hf9c7bd1a__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__axi4buf__DOT__x1_w_deq__DOT__do_deq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT___axi4buf_auto_out_w_valid) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT___axi4buf_auto_out_aw_valid) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT____VdfgTmp_hf9c7bd1a__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT___T_1193 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT__do_enq) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT__same_cycle_resp 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_buffer__DOT__monitor__DOT___same_cycle_resp_T_1) 
           & ((0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                       >> 0xaU)) == (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                             >> 9U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_set 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__do_enq) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT___T_1115 
        = ((~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__monitor__DOT__a_first_counter)))) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__do_enq));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__same_cycle_resp 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___same_cycle_resp_T_1) 
           & ((1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[0U] 
                     >> 0xaU)) == (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__inDes__DOT__data_4 
                                         >> 0xbU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT___T_1148 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__buffer__DOT__x1_a_q__DOT__do_deq) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__ram__DOT__serdesser__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_CIsDominant 
        = ((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                   >> 0x1dU)) & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign) 
                                 | (0x19U > (0x3ffU 
                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sNatCAlignDist_T_1)))));
    __Vtemp_hc0dc8ef1__0[0U] = (IData)((0x1fffffffffffffULL 
                                        & (- (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)))));
    __Vtemp_hc0dc8ef1__0[1U] = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
                                   ? (0x1000000U | 
                                      ((0x800000U & 
                                        ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                                      >> 0x1dU)))) 
                                         << 0x17U)) 
                                       | (0x7fffffU 
                                          & (~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U]))))
                                   : (((IData)((0U 
                                                != 
                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                                 >> 0x1dU))) 
                                       << 0x17U) | 
                                      (0x7fffffU & 
                                       vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U]))) 
                                 << 0x15U) | (IData)(
                                                     ((0x1fffffffffffffULL 
                                                       & (- (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)))) 
                                                      >> 0x20U)));
    __Vtemp_hc0dc8ef1__0[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
                                  ? (0x1000000U | (
                                                   (0x800000U 
                                                    & ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                                                    >> 0x1dU)))) 
                                                       << 0x17U)) 
                                                   | (0x7fffffU 
                                                      & (~ 
                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U]))))
                                  : (((IData)((0U != 
                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                                >> 0x1dU))) 
                                      << 0x17U) | (0x7fffffU 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U]))) 
                                >> 0xbU);
    VL_SHIFTRS_WWI(78,78,7, __Vtemp_h535d5064__0, __Vtemp_hc0dc8ef1__0, 
                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign)
                     ? 0U : ((0x4aU > (0x3ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sNatCAlignDist_T_1)))
                              ? (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sNatCAlignDist_T_1))
                              : 0x4aU)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U] 
        = __Vtemp_h535d5064__0[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
        = __Vtemp_h535d5064__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
        = (0x3fffU & __Vtemp_h535d5064__0[2U]);
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__589(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__589\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_h562abb9a__0;
    VlWide<6>/*191:0*/ __Vtemp_hb2ed08a9__0;
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__0;
    VlWide<3>/*95:0*/ __Vtemp_h63e83e0c__0;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift 
        = (0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                           ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign)
                                             ? 0U : 
                                            ((0x4aU 
                                              > (0x3ffU 
                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sNatCAlignDist_T_1)))
                                              ? (0x1fU 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sNatCAlignDist_T_1) 
                                                    >> 2U))
                                              : 0x12U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_CIsDominant 
        = ((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                   >> 0x1dU)) & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign) 
                                 | (0x36U > (0x1fffU 
                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sNatCAlignDist_T_1)))));
    __Vtemp_h562abb9a__0[0U] = (- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)));
    __Vtemp_h562abb9a__0[1U] = (- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)));
    __Vtemp_h562abb9a__0[2U] = (- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)));
    __Vtemp_h562abb9a__0[3U] = (((IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
                                           ? (0x20000000000000ULL 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                                                                >> 0x1dU))))))) 
                                                  << 0x34U) 
                                                 | (0xfffffffffffffULL 
                                                    & (~ 
                                                       (((QData)((IData)(
                                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U])))))))
                                           : (((QData)((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                                                 >> 0x1dU)))) 
                                               << 0x34U) 
                                              | (0xfffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U]))))))) 
                                 << 0xfU) | (0x7fffU 
                                             & (- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)))));
    __Vtemp_h562abb9a__0[4U] = (((IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
                                           ? (0x20000000000000ULL 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                                                                >> 0x1dU))))))) 
                                                  << 0x34U) 
                                                 | (0xfffffffffffffULL 
                                                    & (~ 
                                                       (((QData)((IData)(
                                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U])))))))
                                           : (((QData)((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                                                 >> 0x1dU)))) 
                                               << 0x34U) 
                                              | (0xfffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U]))))))) 
                                 >> 0x11U) | ((IData)(
                                                      (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
                                                         ? 
                                                        (0x20000000000000ULL 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                                                                >> 0x1dU))))))) 
                                                             << 0x34U) 
                                                            | (0xfffffffffffffULL 
                                                               & (~ 
                                                                  (((QData)((IData)(
                                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U])))))))
                                                         : 
                                                        (((QData)((IData)(
                                                                          (0U 
                                                                           != 
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                                                            >> 0x1dU)))) 
                                                          << 0x34U) 
                                                         | (0xfffffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U])))))) 
                                                       >> 0x20U)) 
                                              << 0xfU));
    __Vtemp_h562abb9a__0[5U] = ((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
                                           ? (0x20000000000000ULL 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                                                                >> 0x1dU))))))) 
                                                  << 0x34U) 
                                                 | (0xfffffffffffffULL 
                                                    & (~ 
                                                       (((QData)((IData)(
                                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U])))))))
                                           : (((QData)((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                                                 >> 0x1dU)))) 
                                               << 0x34U) 
                                              | (0xfffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U])))))) 
                                         >> 0x20U)) 
                                >> 0x11U);
    VL_SHIFTRS_WWI(165,165,8, __Vtemp_hb2ed08a9__0, __Vtemp_h562abb9a__0, 
                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign)
                     ? 0U : ((0xa1U > (0x1fffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sNatCAlignDist_T_1)))
                              ? (0xffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sNatCAlignDist_T_1))
                              : 0xa1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U] 
        = __Vtemp_hb2ed08a9__0[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
        = __Vtemp_hb2ed08a9__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
        = __Vtemp_hb2ed08a9__0[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[3U] 
        = __Vtemp_hb2ed08a9__0[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[4U] 
        = __Vtemp_hb2ed08a9__0[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[5U] 
        = (0x1fU & __Vtemp_hb2ed08a9__0[5U]);
    __Vtemp_h6341b9db__0[0U] = 0U;
    __Vtemp_h6341b9db__0[1U] = 0U;
    __Vtemp_h6341b9db__0[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h63e83e0c__0, __Vtemp_h6341b9db__0, 
                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign)
                     ? 0U : ((0xa1U > (0x1fffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sNatCAlignDist_T_1)))
                              ? (0x3fU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sNatCAlignDist_T_1) 
                                          >> 2U)) : 0x28U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift[0U] 
        = __Vtemp_h63e83e0c__0[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift[1U] 
        = __Vtemp_h63e83e0c__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift[2U] 
        = (1U & __Vtemp_h63e83e0c__0[2U]);
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__590(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__590\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h134d886d__0;
    VlWide<3>/*95:0*/ __Vtemp_h4db8f117__0;
    VlWide<6>/*191:0*/ __Vtemp_h7139d9b9__0;
    VlWide<6>/*191:0*/ __Vtemp_h6027a9d1__0;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_CIsDominant 
        = ((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                   >> 0x1dU)) & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign) 
                                 | (0x19U > (0x3ffU 
                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sNatCAlignDist_T_1)))));
    __Vtemp_h134d886d__0[0U] = (IData)((0x1fffffffffffffULL 
                                        & (- (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)))));
    __Vtemp_h134d886d__0[1U] = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
                                   ? (0x1000000U | 
                                      ((0x800000U & 
                                        ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                                      >> 0x1dU)))) 
                                         << 0x17U)) 
                                       | (0x7fffffU 
                                          & (~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U]))))
                                   : (((IData)((0U 
                                                != 
                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                                 >> 0x1dU))) 
                                       << 0x17U) | 
                                      (0x7fffffU & 
                                       vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U]))) 
                                 << 0x15U) | (IData)(
                                                     ((0x1fffffffffffffULL 
                                                       & (- (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)))) 
                                                      >> 0x20U)));
    __Vtemp_h134d886d__0[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
                                  ? (0x1000000U | (
                                                   (0x800000U 
                                                    & ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                                                    >> 0x1dU)))) 
                                                       << 0x17U)) 
                                                   | (0x7fffffU 
                                                      & (~ 
                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U]))))
                                  : (((IData)((0U != 
                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                                >> 0x1dU))) 
                                      << 0x17U) | (0x7fffffU 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U]))) 
                                >> 0xbU);
    VL_SHIFTRS_WWI(78,78,7, __Vtemp_h4db8f117__0, __Vtemp_h134d886d__0, 
                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign)
                     ? 0U : ((0x4aU > (0x3ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sNatCAlignDist_T_1)))
                              ? (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sNatCAlignDist_T_1))
                              : 0x4aU)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U] 
        = __Vtemp_h4db8f117__0[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
        = __Vtemp_h4db8f117__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
        = (0x3fffU & __Vtemp_h4db8f117__0[2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift 
        = (0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                           ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign)
                                             ? 0U : 
                                            ((0x4aU 
                                              > (0x3ffU 
                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sNatCAlignDist_T_1)))
                                              ? (0x1fU 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sNatCAlignDist_T_1) 
                                                    >> 2U))
                                              : 0x12U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_CIsDominant 
        = ((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                   >> 0x1dU)) & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign) 
                                 | (0x36U > (0x1fffU 
                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sNatCAlignDist_T_1)))));
    __Vtemp_h7139d9b9__0[0U] = (- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)));
    __Vtemp_h7139d9b9__0[1U] = (- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)));
    __Vtemp_h7139d9b9__0[2U] = (- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)));
    __Vtemp_h7139d9b9__0[3U] = (((IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
                                           ? (0x20000000000000ULL 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                                                                >> 0x1dU))))))) 
                                                  << 0x34U) 
                                                 | (0xfffffffffffffULL 
                                                    & (~ 
                                                       (((QData)((IData)(
                                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U])))))))
                                           : (((QData)((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                                                 >> 0x1dU)))) 
                                               << 0x34U) 
                                              | (0xfffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U]))))))) 
                                 << 0xfU) | (0x7fffU 
                                             & (- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)))));
    __Vtemp_h7139d9b9__0[4U] = (((IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
                                           ? (0x20000000000000ULL 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                                                                >> 0x1dU))))))) 
                                                  << 0x34U) 
                                                 | (0xfffffffffffffULL 
                                                    & (~ 
                                                       (((QData)((IData)(
                                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U])))))))
                                           : (((QData)((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                                                 >> 0x1dU)))) 
                                               << 0x34U) 
                                              | (0xfffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U]))))))) 
                                 >> 0x11U) | ((IData)(
                                                      (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
                                                         ? 
                                                        (0x20000000000000ULL 
                                                         | (((QData)((IData)(
                                                                             (1U 
                                                                              & (~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                                                                >> 0x1dU))))))) 
                                                             << 0x34U) 
                                                            | (0xfffffffffffffULL 
                                                               & (~ 
                                                                  (((QData)((IData)(
                                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U])) 
                                                                    << 0x20U) 
                                                                   | (QData)((IData)(
                                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U])))))))
                                                         : 
                                                        (((QData)((IData)(
                                                                          (0U 
                                                                           != 
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                                                            >> 0x1dU)))) 
                                                          << 0x34U) 
                                                         | (0xfffffffffffffULL 
                                                            & (((QData)((IData)(
                                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U])))))) 
                                                       >> 0x20U)) 
                                              << 0xfU));
    __Vtemp_h7139d9b9__0[5U] = ((IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
                                           ? (0x20000000000000ULL 
                                              | (((QData)((IData)(
                                                                  (1U 
                                                                   & (~ (IData)(
                                                                                (0U 
                                                                                != 
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                                                                >> 0x1dU))))))) 
                                                  << 0x34U) 
                                                 | (0xfffffffffffffULL 
                                                    & (~ 
                                                       (((QData)((IData)(
                                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U])) 
                                                         << 0x20U) 
                                                        | (QData)((IData)(
                                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U])))))))
                                           : (((QData)((IData)(
                                                               (0U 
                                                                != 
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U] 
                                                                 >> 0x1dU)))) 
                                               << 0x34U) 
                                              | (0xfffffffffffffULL 
                                                 & (((QData)((IData)(
                                                                     vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[1U])) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(
                                                                      vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__in_in3[0U])))))) 
                                         >> 0x20U)) 
                                >> 0x11U);
    VL_SHIFTRS_WWI(165,165,8, __Vtemp_h6027a9d1__0, __Vtemp_h7139d9b9__0, 
                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign)
                     ? 0U : ((0xa1U > (0x1fffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sNatCAlignDist_T_1)))
                              ? (0xffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sNatCAlignDist_T_1))
                              : 0xa1U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U] 
        = __Vtemp_h6027a9d1__0[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
        = __Vtemp_h6027a9d1__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
        = __Vtemp_h6027a9d1__0[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[3U] 
        = __Vtemp_h6027a9d1__0[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[4U] 
        = __Vtemp_h6027a9d1__0[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[5U] 
        = (0x1fU & __Vtemp_h6027a9d1__0[5U]);
}

VL_ATTR_COLD void VTestDriver___024root___stl_sequent__TOP__591(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___stl_sequent__TOP__591\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_h6341b9db__0;
    VlWide<3>/*95:0*/ __Vtemp_h90409a7f__0;
    VlWide<3>/*95:0*/ __Vtemp_ha440f8dd__0;
    VlWide<3>/*95:0*/ __Vtemp_hb23863cf__0;
    // Body
    __Vtemp_h6341b9db__0[0U] = 0U;
    __Vtemp_h6341b9db__0[1U] = 0U;
    __Vtemp_h6341b9db__0[2U] = 1U;
    VL_SHIFTRS_WWI(65,65,6, __Vtemp_h90409a7f__0, __Vtemp_h6341b9db__0, 
                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign)
                     ? 0U : ((0xa1U > (0x1fffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sNatCAlignDist_T_1)))
                              ? (0x3fU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sNatCAlignDist_T_1) 
                                          >> 2U)) : 0x28U)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift[0U] 
        = __Vtemp_h90409a7f__0[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift[1U] 
        = __Vtemp_h90409a7f__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__dfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift[2U] 
        = (1U & __Vtemp_h90409a7f__0[2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_CIsDominant 
        = ((0U != (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                   >> 0x1dU)) & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign) 
                                 | (0x19U > (0x3ffU 
                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sNatCAlignDist_T_1)))));
    __Vtemp_ha440f8dd__0[0U] = (IData)((0x1fffffffffffffULL 
                                        & (- (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)))));
    __Vtemp_ha440f8dd__0[1U] = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
                                   ? (0x1000000U | 
                                      ((0x800000U & 
                                        ((~ (IData)(
                                                    (0U 
                                                     != 
                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                                      >> 0x1dU)))) 
                                         << 0x17U)) 
                                       | (0x7fffffU 
                                          & (~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U]))))
                                   : (((IData)((0U 
                                                != 
                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                                 >> 0x1dU))) 
                                       << 0x17U) | 
                                      (0x7fffffU & 
                                       vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U]))) 
                                 << 0x15U) | (IData)(
                                                     ((0x1fffffffffffffULL 
                                                       & (- (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)))) 
                                                      >> 0x20U)));
    __Vtemp_ha440f8dd__0[2U] = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT___mulAddRecFNToRaw_preMul_io_toPostMul_doSubMags)
                                  ? (0x1000000U | (
                                                   (0x800000U 
                                                    & ((~ (IData)(
                                                                  (0U 
                                                                   != 
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                                                    >> 0x1dU)))) 
                                                       << 0x17U)) 
                                                   | (0x7fffffU 
                                                      & (~ 
                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U]))))
                                  : (((IData)((0U != 
                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U] 
                                                >> 0x1dU))) 
                                      << 0x17U) | (0x7fffffU 
                                                   & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__in_in3[0U]))) 
                                >> 0xbU);
    VL_SHIFTRS_WWI(78,78,7, __Vtemp_hb23863cf__0, __Vtemp_ha440f8dd__0, 
                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign)
                     ? 0U : ((0x4aU > (0x3ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sNatCAlignDist_T_1)))
                              ? (0x7fU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sNatCAlignDist_T_1))
                              : 0x4aU)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[0U] 
        = __Vtemp_hb23863cf__0[0U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[1U] 
        = __Vtemp_hb23863cf__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__mainAlignedSigC[2U] 
        = (0x3fffU & __Vtemp_hb23863cf__0[2U]);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__reduced4CExtra_shift 
        = (0x1ffffffffULL & VL_SHIFTRS_QQI(33,33,5, 0x100000000ULL, 
                                           ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT__isMinCAlign)
                                             ? 0U : 
                                            ((0x4aU 
                                              > (0x3ffU 
                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sNatCAlignDist_T_1)))
                                              ? (0x1fU 
                                                 & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__sfma__DOT__fma__DOT__mulAddRecFNToRaw_preMul__DOT___sNatCAlignDist_T_1) 
                                                    >> 2U))
                                              : 0x12U))));
}
